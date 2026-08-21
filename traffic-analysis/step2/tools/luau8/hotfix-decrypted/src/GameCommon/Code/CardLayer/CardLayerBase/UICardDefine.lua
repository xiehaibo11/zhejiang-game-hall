----create by lcy 2017.12.1
local UICardDefine = class("UICardDefine")
local CURRENT_MOUDLE_NAME = ...
local GameCommonDefine = require("GameCommon.Code.GameCommonDefine")

UICardDefine.KW_PATH_ART_RESOUCE = GameCommonDefine.KW_PATH_RESOUCE .. "/CardLayer/"
UICardDefine.KW_PATH_ART_RESOUCE_CSB = UICardDefine.KW_PATH_ART_RESOUCE .. "CSB"
if cc.FileUtils:getInstance():isFileExist("CocosVerison.luac") or cc.FileUtils:getInstance():isFileExist("CocosVerison.lua")then
    if type(cocos2dVersion) == "function" and cocos2dVersion() == require("CocosVerison") then
        UICardDefine.KW_PATH_ART_RESOUCE_CSB = UICardDefine.KW_PATH_ART_RESOUCE .. "CSB_v310"
    end
end

UICardDefine.KW_UI_CARD_LAYER_CSB_PATH = UICardDefine.KW_PATH_ART_RESOUCE_CSB .. "/CardLayer.csb"

UICardDefine.KW_PATH_CARD_IMG = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card.plist"
UICardDefine.KW_PATH_CARD_PLIST = {
    [1] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card.plist",
    [2] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card_2.plist",
}

UICardDefine.KW_CARD_PLIST_IMG = {
    [1] = "Card_%d.png",
    [2] = "Card_2_%d.png",
}
return UICardDefine�