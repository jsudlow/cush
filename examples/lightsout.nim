import scene,messagebox
type
  GameScene* = object of Scene
      hoverSystem*: ref HoverSystem
      clickSystem*: ref ClickSystem
      hasWon*: bool
  MenuScene* = object of Scene
      play_msg*: ref MessageBox
      quit_msg*: ref MessageBox

  HoverSystem* = object
      scene*: ref GameScene
      i*, k*: int

  ClickSystem* = object
    scene*: ref GameScene

import app, lights-outlib/menu, lights-outlib/game
var menu_scene = new MenuScene
var game_app = new(App)
game_app.init(menu_scene, WIDTH, HEIGHT, "Lights Out!")
game_app.run()
