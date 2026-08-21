local CardLayerDefine = {}

CardLayerDefine.KW_PATH_BASE_CARD_PLIST = CF.gameResourceRootPath .. "DarkShuangKou/Img/DarkShuangKouCard.plist"

CardLayerDefine.KW_UI_CARD_MASK_NAME = "Common/Image/card_mask_di.png" --  遮罩

-- Card.SIZETYPE = {
--     NORMAL = 1,
--     OUT = 4, -- 出牌
-- }

-- 对应不同尺寸
CardLayerDefine.KW_UI_CARD_BACK_NAME = {
    "darkdoublekou_back1.png",
    "darkdoublekou_back2.png",
    "darkdoublekou_back2.png",
    "darkdoublekou_back2.png",
    "darkdoublekou_back3.png"
}
CardLayerDefine.KW_UI_CARD_FACE_NAME = {
    "darkdoublekou_face1.png",
    "darkdoublekou_face2.png",
    "darkdoublekou_face2.png",
    "darkdoublekou_face2.png",
    "darkdoublekou_face3.png"
}

CardLayerDefine.KW_UI_CARD_MING_PAI = "darkdoublekou_eye.png"

CardLayerDefine.KW_UI_CARD_BLACK_NAME = "darkdoublekou_black_%d.png"
CardLayerDefine.KW_UI_CARD_RED_NAME = "darkdoublekou_red_%d.png"
CardLayerDefine.KW_UI_CARD_JOKER_NAME = {
    "darkdoublekou_joker_small.png",
    "darkdoublekou_joker_big.png"
}
CardLayerDefine.KW_UI_CARD_COLOR_NAME = {
    "darkdoublekou_diamond.png",
    "darkdoublekou_club.png",
    "darkdoublekou_heart.png",
    "darkdoublekou_spade.png",
    "darkdoublekou_joker_icon_small.png",
    "darkdoublekou_joker_icon_big.png"
}

CardLayerDefine.KW_CARD_NAME = "CARD_%d"

return CardLayerDefine
m