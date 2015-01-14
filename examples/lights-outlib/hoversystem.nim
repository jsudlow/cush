import game

proc newHoverSystem*(scene: ref GameScene): ref HoverSystem =
  result = new HoverSystem
  result.scene = scene
  result.i = 0
  result.k = 0

proc update*(self: ref HoverSystem, t, dt: int) =
  #Up for you to implement
  discard