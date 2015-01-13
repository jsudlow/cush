import sdl, graphics, colors,sdl_ttf

import app
import scene
import controller

method enter*(self: ref MenuScene) =
  self.ctl.newFont("title", "fonts/Pacifico.ttf", 22, colGreen)
  
  self.play_msg = self.ctl.addMessage(
    "Welcome to the Cush Game Framework", "title", 25, 200)
  self.quit_msg = self.ctl.addMessage(
    "Press Space to Quit, Enter to init Game Scene", "title", 25, 280)

  self.play_msg.isVisible = true
  self.quit_msg.isVisible = true

method leave*(self: ref MenuScene) =
  
  self.play_msg.isVisible = false
  self.quit_msg.isVisible = false

method key_down*(self: ref MenuScene, key: TKey, mods: TMod) =
  case key:
    of K_SPACE:
        quit(0)
    else: discard

method draw*(self: ref MenuScene) =
  # clear screen
  let screen_rect = graphics.TRect(
    (0, 0, self.ctl.display.w, self.ctl.display.h))
  self.ctl.display.fillRect(screen_rect, colBlack)
