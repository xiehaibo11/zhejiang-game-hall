local MAH_SHAPE_TYPE = {
    CIRCLE = CF.GameDefine.MAH_SHAPE_TYPE.CIRCLE,    --角为圆弧状
    SQUARE = CF.GameDefine.MAH_SHAPE_TYPE.SQUARE,    --角为直角状
}

local MAH_LIGHT_TYPE = {
    LIGHT = CF.GameDefine.MAH_LIGHT_TYPE.LIGHT,    --亮牌面
    DARK = CF.GameDefine.MAH_LIGHT_TYPE.DARK,     --暗牌面
}

local MAH_BACK_COLOR_TYPE = {
    ORANGE = CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE,     --橙色
    YELLOW = CF.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW,     --黄色
    GREEN = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,      --绿色
    BLUE = CF.GameDefine.MAH_BACK_COLOR_TYPE.BLUE,       --蓝色
    XGSJ = CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ,     -- 霞光胜境
}

local MAH_FACE_TYPE = {
    FACE_1 = CF.GameDefine.MAH_FACE_TYPE.FACE_1,
    FACE_2 = CF.GameDefine.MAH_FACE_TYPE.FACE_2,
    FACE_3 = CF.GameDefine.MAH_FACE_TYPE.FACE_3,
}

local COMB_LIE_TYPE = {
    ARROW_BY_ICON = CF.GameDefine.COMB_LIE_TYPE.ARROW_BY_ICON,  -- 图标显示喂牌方向
    ARROW_BY_MAH = CF.GameDefine.COMB_LIE_TYPE.ARROW_BY_MAH,   -- 倒牌显示喂牌方向
}

-- 手牌摆放类型
local HANDAREA_PLACE_TYPE = {
    COMB_AT_LEFT = CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT,   -- 牌组在左手边
    COMB_AT_RIGHT = CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_RIGHT,  -- 牌组在右手边
}

-- 手牌出牌方式
-- local HANDMAHS_PLAY_TYPE = {
--     SINGLE_CLICK = CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,   -- 单击
--     DOUBLE_CLICK = CF.GameDefine.HANDMAHS_PLAY_TYPE.DOUBLE_CLICK,   -- 双击
-- }
local tab = {}
-- 台州
tab[7109] = {
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 1.55},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.GREEN, MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.XGSJ, normal = MAH_BACK_COLOR_TYPE.GREEN},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = CF.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
    INSERT_STYLE = {1, 2, normal = 2},
    TAB_LABEL_TEXT = {"经典方案"},
}

tab.Index2PropID = {
    BACK_TYPE = {
        [MAH_BACK_COLOR_TYPE.XGSJ] = XH.XGSJ_PROP_ID.MAH,
    },
    TABLE_STYLE = {
        [7] = XH.XGSJ_PROP_ID.TABLE,
    }
}

return tab