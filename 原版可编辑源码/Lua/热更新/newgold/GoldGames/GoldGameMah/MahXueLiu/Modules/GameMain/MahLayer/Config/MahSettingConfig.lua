local MAH_SHAPE_TYPE = {
    CIRCLE = NG.GAME.GameDefine.MAH_SHAPE_TYPE.CIRCLE,    --角为圆弧状
    SQUARE = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE,    --角为直角状
}

local MAH_LIGHT_TYPE = {
    LIGHT = NG.GAME.GameDefine.MAH_LIGHT_TYPE.LIGHT,    --亮牌面
    DARK = NG.GAME.GameDefine.MAH_LIGHT_TYPE.DARK,     --暗牌面
}

local MAH_BACK_COLOR_TYPE = {
    ORANGE = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE,     --橙色
    YELLOW = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW,     --黄色
    GREEN = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,      --绿色
    BLUE = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.BLUE,       --蓝色
}

local MAH_FACE_TYPE = {
    FACE_1 = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_1,
    FACE_2 = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_2,
    FACE_3 = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_3,
}

local COMB_LIE_TYPE = {
    ARROW_BY_ICON = NG.GAME.GameDefine.COMB_LIE_TYPE.ARROW_BY_ICON,  -- 图标显示喂牌方向
    ARROW_BY_MAH = NG.GAME.GameDefine.COMB_LIE_TYPE.ARROW_BY_MAH,   -- 倒牌显示喂牌方向
}

-- 手牌摆放类型
local HANDAREA_PLACE_TYPE = {
    COMB_AT_LEFT = NG.GAME.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT,   -- 牌组在左手边
    COMB_AT_RIGHT = NG.GAME.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_RIGHT,  -- 牌组在右手边
}

-- 手牌出牌方式
-- local HANDMAHS_PLAY_TYPE = {
--     SINGLE_CLICK = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,   -- 单击
--     DOUBLE_CLICK = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.DOUBLE_CLICK,   -- 双击
-- }
local tab = {}
----(运营配方案)
tab.NORMAL = {
       CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 2,                ---特效
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
            INSERT_STYLE    = 1,                ---插牌动画
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"方案一", "方案二", "方案三", "方案四", "方案五", "方案六", "方案七", "方案八"},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
    INSERT_STYLE = {1, 2, normal = 1},
}
-- 杭麻圈
tab[7111] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
}

-- 湖州
tab[7101] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            },
        --经典方案
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.5,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_3,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1,2,normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
}

-- 嘉兴
tab[7107] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.5,         ---牌花大小(0-1)
            CARD_WIDTH      = 0,                ---牌厚度(0-1)
            CARD_HEIGHT     = 1,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 2,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
}

-- 余姚
tab[7119] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.5,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.2,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.7,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 1,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 1,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE = 1,           ---出牌摆放(1四方，2非四方)
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
}

-- 乐清
tab[7121] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.18,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.74,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 1,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
}

-- 宁波
tab[7102] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.5,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.2,                ---牌厚度(0-1)
            CARD_HEIGHT     = 1,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 1,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE = 1,     ---出牌摆放(1四方，2非四方)
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
}

-- 绍兴
tab[7104] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.3,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.5,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 2,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
}

-- 丽水
tab[7128] = {
       CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.09,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.68,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 6,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 2,          ---出牌摆放(1四方，2非四方)
            OUT_EFFECTS_SIZE = 0.6,         -- 吃碰杠动画大小
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.6,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.22,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.44,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 1,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 6,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
            OUT_TABLE_CARD_STYLE  = 2,          ---出牌摆放(1四方，2非四方)
            OUT_EFFECTS_SIZE = 0.6,         -- 吃碰杠动画大小
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    OUT_EFFECTS_SIZE = {normal = 1},         -- 吃碰杠动画大小
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, 6, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案", "经典风格", "方案三", "方案四", "方案五", "方案六", "方案七", "方案八"},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 2},
}

-- 青田
tab[7129] = {
       CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.68,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 1,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 2,          ---出牌摆放(1四方，2非四方)
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"方案一", "方案二", "方案三", "方案四", "方案五", "方案六", "方案七", "方案八"},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 2},
}

-- 温州
tab[7127] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.2,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.72,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 瑞安
tab[7126] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.61,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.18,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.64,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 台州
tab[7109] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.2,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 1,                ---牌面(亮暗)
            HAND_STYLE      = 2,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 2,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
            OUT_TABLE_CARD_STYLE  = 1,          ---出牌摆放(1四方，2非四方)
            INSERT_STYLE    = 2,                ---插牌动画
        },
    },
    PLAYER_TYPE = {1, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
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

-- 宝宝杭麻
tab[7115] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 2,                ---特效
        },
        --经典方案
        [2] = {
            CARD_WORD_SIZE  = 0.72,             ---牌花大小(0-1)
            CARD_WIDTH      = 0,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.68,             ---牌高度(0-1)
            WORD_TYPE       = 2,                ---牌花(字体)
            BACK_TYPE       = 3,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 1,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 2,                ---特效
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 2},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 金华
tab[7108] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.5,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.5,                ---牌高度(0-1)
            WORD_TYPE       = 3,                ---牌花(字体)
            BACK_TYPE       = 3,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 3,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 舟山
tab[7133] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.5,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.3,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.8,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 1,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 衢州
tab[7103] = {
     CUSTOM_STYLE = {
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.3,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.5,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.1,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 4,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 熟客
tab[7105] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 0.3,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.25,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.6,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 1,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 1,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 1,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, MAH_FACE_TYPE.FACE_3 ,normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
    OUT_TABLE_CARD_STYLE = {1, 2, normal = 1},
}

-- 绍兴麻将
tab[7136] = {
     CUSTOM_STYLE = {
        --默认方案
        [1] = {
            CARD_WORD_SIZE  = 0.72,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.89,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.59,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_1,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 1,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 1,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效
        },
        ---经典风格
        [2] = {
            CARD_WORD_SIZE  = 1,         ---牌花大小(0-1)
            CARD_WIDTH      = 0.3,                ---牌厚度(0-1)
            CARD_HEIGHT     = 0.5,                ---牌高度(0-1)
            WORD_TYPE       = MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
            BACK_TYPE       = MAH_BACK_COLOR_TYPE.YELLOW,                ---牌背(颜色)
            BODY_TYPE       = 2,                ---牌身(圆方)
            FACE_TYPE       = 2,                ---牌面(亮暗)
            HAND_STYLE      = 2,                ---吃碰杠摆放(箭头/牌)
            HAND_SORT_STYLE = 1,                ---手牌摆放(左右)
            TABLE_STYLE     = 5,                ---桌布
            OUT_MOVE_STYLE  = 2,                ---轨迹 
            OUT_STYLE       = 2,                ---大牌
            OUT_EFFECTS     = 1,                ---特效（没的选，只有1个）
        },
    },
    PLAYER_TYPE = {1, 2, normal = 1},
    CARD_HEIGHT = {normal = 0.59},
    CARD_WIDTH = {normal = 0.89},
    CARD_WORD_SIZE = {normal = 0.72},
    WORD_TYPE = {MAH_FACE_TYPE.FACE_1, MAH_FACE_TYPE.FACE_2, normal = MAH_FACE_TYPE.FACE_2},
    BACK_TYPE = {MAH_BACK_COLOR_TYPE.ORANGE, MAH_BACK_COLOR_TYPE.YELLOW, MAH_BACK_COLOR_TYPE.GREEN, normal = MAH_BACK_COLOR_TYPE.YELLOW},
    BODY_TYPE = {MAH_SHAPE_TYPE.CIRCLE, MAH_SHAPE_TYPE.SQUARE, normal = NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE},
    FACE_TYPE = {MAH_LIGHT_TYPE.LIGHT, MAH_LIGHT_TYPE.DARK, normal = MAH_LIGHT_TYPE.DARK},
    TABLE_STYLE = {1, 2, 3, 4, 5, normal = 2},
    OUT_MOVE_STYLE = {1, 2, normal = 2},
    OUT_STYLE = {1, 2, normal = 2},
    OUT_EFFECTS = {1, 2,normal = 1},
    HAND_STYLE = {COMB_LIE_TYPE.ARROW_BY_ICON, COMB_LIE_TYPE.ARROW_BY_MAH, normal = COMB_LIE_TYPE.ARROW_BY_MAH},
    HAND_SORT_STYLE = {HANDAREA_PLACE_TYPE.COMB_AT_LEFT, HANDAREA_PLACE_TYPE.COMB_AT_RIGHT, normal = HANDAREA_PLACE_TYPE.COMB_AT_RIGHT},
    TAB_LABEL_TEXT = {"默认方案" , "经典风格",},
}

return tab