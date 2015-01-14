type
  GameScene* = object of Scene
      hoverSystem*: ref HoverSystem
      clickSystem*: ref ClickSystem
      hasWon*: bool
   MenuScene* = object of Scene
    play_msg*: ref MessageBox
    quit_msg*: ref MessageBox