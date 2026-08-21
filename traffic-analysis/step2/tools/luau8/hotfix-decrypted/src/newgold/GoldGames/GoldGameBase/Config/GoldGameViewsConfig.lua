-- 防止与原有配置重名，新配置命名均以NewGold_为前缀
-- 如果子游戏中需要新增界面配置，直接继承该类，在该类基础上新增
-- 子游戏中与基础游戏同路径同名的文件不需要新增配置，框架会直接通过搜索路径优先级去查找（前提是使用requireGame，直接使用require则无效）
local GoldGameViewsConfig = NG.GAME.gameClass("GoldGameViewsConfig")

GoldGameViewsConfig[""] = {Path = "", ZOrder = NG.ZORDER.WINDOW, BindScene = NG.SCENE_TAG.NEWGOLD_LOBBY}

return GoldGameViewsConfig8