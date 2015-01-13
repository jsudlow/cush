import sdl, graphics, colors

import hoversystem, clicksystem, controller

method enter*(self: ref GameScene) =
  self.hoverSystem = newHoverSystem(self)
  self.clickSystem = newClickSystem(self)
  

method update*(self: ref GameScene, t, dt: int) =
  self.hoverSystem.update(t, dt)
  var hasWon = self.ctl.hasPlayerWon()
  self.hasWon = hasWon

method mouse_down*(self: ref GameScene, event: PMouseButtonEvent) =
  self.clickSystem.mouse_down(event)

method draw*(self: ref GameScene) =
  # clear screen
  let screen_rect = graphics.TRect(
    (0, 0, self.ctl.display.w, self.ctl.display.h))
  self.ctl.display.fillRect(screen_rect, colBlack)
  #Up to you to implement the rest of the drawing

  