local CURRENT_MODULE_NAME = ...
local GameEventDispatcher = import("..GameScene.GameEventDispatcher",CURRENT_MODULE_NAME)
local GameScene = class("GameScene",GameEventDispatcher)


return GameScene