import sdl
import random
import game, hoversystem

proc newClickSystem*(scene: ref GameScene): ref ClickSystem =
  result = new ClickSystem
  result.scene = scene

method mouse_down*(self: ref ClickSystem, event: PMouseButtonEvent) =
  echo "mouse down detected"
   


  
  
  