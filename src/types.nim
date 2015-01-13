import graphics,sdl

type
  App* = object
    display*: graphics.PSurface
    manager*: ref SceneManager
    ctl*: ref Controller

  Controller* = object
    display*: graphics.PSurface
    should_close*: bool
    keys*: KeyMap
    mods*: ModMap
    mouseX*, mouseY*: int
    mouseDown*: bool
    fonts*: Table[string, PFont]
    messages*: seq[ref MessageBox]

  Scene* = object of RootObj
    ctl*: ref Controller
    manager*: ref SceneManager

  SceneManager* = object of RootObj
    ctl*: ref Controller
    scene*: ref Scene

  MessageBox* = object
    messageText*: string
    x*,y*,size*: int
    font*: PFont
    s*: graphics.PSurface
    isVisible*: bool

      