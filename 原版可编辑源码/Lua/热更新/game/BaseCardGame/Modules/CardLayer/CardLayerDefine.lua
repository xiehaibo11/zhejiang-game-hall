--
-- Description: 牌层相关常量定义
-- Author: hejiafeng
-- Date: 2019-07-09
--
local CardLayerDefine = {}

CardLayerDefine.KW_PATH_BASE_CARDLAYER = "cocosStudio/DoubleKou/"

CardLayerDefine.KW_PATH_BASE_CARD_PLIST = "res/tex/plist/doublekou_card.plist"
CardLayerDefine.KW_CSB_BASE_CARD_LAYER = CardLayerDefine.KW_PATH_BASE_CARDLAYER .. "BaseCardLayer/CSB/BaseCardLayer.csb"

CardLayerDefine.KW_UI_CARD_IMG_NAME = "Card_%d.png"

CardLayerDefine.KW_UI_CARD_MASK_NAME = "cocosStudio/Common/Image/card_mask_di.png" --  遮罩

CardLayerDefine.KW_UI_CARD_BACK_NAME = "doublekou_back.png" --  牌背
CardLayerDefine.KW_UI_CARD_FACE_NAME = "doublekou_face.png" --  牌面底
CardLayerDefine.KW_UI_CARD_BLACK_NAME = "doublekou_black_%d.png"
CardLayerDefine.KW_UI_CARD_RED_NAME = "doublekou_red_%d.png"
CardLayerDefine.KW_UI_CARD_JOKER_NAME = {
    "doublekou_joker_small.png",
    "doublekou_joker_big.png"
}
CardLayerDefine.KW_UI_CARD_COLOR_NAME = {
    "doublekou_diamond.png",
    "doublekou_club.png",
    "doublekou_heart.png",
    "doublekou_spade.png",
    "doublekou_joker_icon_small.png",
    "doublekou_joker_icon_big.png"
}

CardLayerDefine.KW_CARD_NAME = "CARD_%d"

CardLayerDefine.KW_PATH_SRC_BASE_CARDLAYER = "game.DoubleKou.BaseDoubleKou"

-- 换牌卡相关
CardLayerDefine.KW_PATH_BASE_CHANGE_CARD_PLIST = "res/tex/plist/doublekou_change_card.plist"
CardLayerDefine.KW_UI_CHANGE_CARD_BACK_NAME = "doublekou_back_1.png" --  牌背
CardLayerDefine.KW_UI_CHANGE_CARD_FACE_NAME = "doublekou_face_2.png" --  牌面底

CardLayerDefine.KW_PATH_XG_CARD_PLIST = "res/tex/plist/doublekou_card_xg.plist"
CardLayerDefine.KW_UI_XG_CARD_BACK_NAME = "doublekou_back_xg.png" --  牌背
CardLayerDefine.KW_UI_XG_CARD_FACE_NAME = "doublekou_face_xg.png" --  牌面底


return CardLayerDefine