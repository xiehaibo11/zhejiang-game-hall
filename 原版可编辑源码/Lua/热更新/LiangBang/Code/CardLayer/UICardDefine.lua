----create by lcy 2017.12.1
local CURRENT_MOUDLE_NAME = ...
local UICardDefineBase = import("GameCommon.Code.CardLayer.CardLayerBase.UICardDefine")
local UICardDefine = class("UICardDefine",UICardDefineBase)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MOUDLE_NAME)

local KW_PATH_ART_RESOUCE = "LiangBang/CardLayer/CSB_310/"

UICardDefine.KW_UI_CARD_LAYER_CSB_PATH = KW_PATH_ART_RESOUCE.."CardLayer.csb"
UICardDefine.KW_UI_SPECF_CARD_LAYER_CSB_PATH = KW_PATH_ART_RESOUCE.."SpecfCard.csb"

UICardDefine.KW_PATH_CARD_IMG 		= "LiangBang/CardLayer/Image/card.plist"
UICardDefine.KW_PATH_FFZ_CARD_IMG 	= "LiangBang/CardLayer/Image/card_ffz_small.plist"
UICardDefine.KW_PATH_FFZ_IMG 		= "LiangBang/CardLayer/Image/ffz_img.plist"
UICardDefine.KW_PATH_CARD_IMG_LIANGBANG 		= "LiangBang/CardLayer/Image/card_liangbang.plist"

UICardDefine.KW_CARD_PLIST_IMG = {
    [1] = "Card_%d.png",
    [2] = "Card_2_%d.png",
    [3] = "card_3_%d.png",
    [4] = "Card_4_%d.png",	--两帮
}

UICardDefine.KW_PATH_CARD_PLIST = {
    [1] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card.plist",
    [2] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card_2.plist",
    [3] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card_ffz_small.plist",
    [4] = UICardDefine.KW_PATH_ART_RESOUCE .. "Image/card_liangbang.plist", --两帮
}

return UICardDefine