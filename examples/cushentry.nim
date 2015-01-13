import app,menu

#declare the scene you want to run

var menu_scene = new MenuScene

#Initialize the app
var game_app = new(App)

#Set pre run conditions
game_app.init(menu_scene, WIDTH, HEIGHT, "Generic Cush Game")

#Run the game
game_app.run()
