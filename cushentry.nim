import app, menu, game

var menu_scene = new MenuScene
var game_app = new(App)
game_app.init(menu_scene, WIDTH, HEIGHT, "Generic Cush Game")
game_app.run()
