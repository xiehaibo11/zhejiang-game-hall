local GameCommonDefine = class("GameCommonDefine")

GameCommonDefine.KW_GAME_PATH = "GameCommon"

GameCommonDefine.KW_PATH_RESOUCE =   "GameCommon"
GameCommonDefine.KW_PATH_RESOUCE_JASON =   GameCommonDefine.KW_PATH_RESOUCE .. "/Json"
GameCommonDefine.KW_PATH_RESOUCE_IMAGE =   GameCommonDefine.KW_PATH_RESOUCE .. "/Image"
GameCommonDefine.KW_PATH_RESOUCE_FONT =   GameCommonDefine.KW_PATH_RESOUCE .. "/Fonts"
GameCommonDefine.KW_PATH_RESOUCE_CSB =   GameCommonDefine.KW_PATH_RESOUCE .. "/CSB"
if cc.FileUtils:getInstance():isFileExist("CocosVerison.luac") or cc.FileUtils:getInstance():isFileExist("CocosVerison.lua")then
    if type(cocos2dVersion) == "function" and cocos2dVersion() == require("CocosVerison") then
        GameCommonDefine.KW_PATH_RESOUCE_CSB =   GameCommonDefine.KW_PATH_RESOUCE .. "/CSB_v310"
    end
end

return GameCommonDefine