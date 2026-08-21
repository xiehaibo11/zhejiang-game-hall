local UIMahConfig2D = CF.gameClass("UIMahConfig2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.Config.UIMahConfigBase")

UIMahConfig2D.RootPath = "cocosStudio/MahjongNew/MahLayer/Image/"

UIMahConfig2D.MahGroundPlistPath = UIMahConfig2D.RootPath .. "mahlayer_mah_ground.plist"
UIMahConfig2D.MahIconPlistPath = UIMahConfig2D.RootPath .. "mahlayer_mah_icon.plist"

UIMahConfig2D.MahFacePlistPath = {
    [CF.GameDefine.MAH_FACE_TYPE.FACE_1] = UIMahConfig2D.RootPath .. "mahlayer_mah_face_1.plist",
    [CF.GameDefine.MAH_FACE_TYPE.FACE_2] = UIMahConfig2D.RootPath .. "mahlayer_mah_face_2.plist",
}

UIMahConfig2D.MahFrameNameStr = "mj_mah_face_%d_%d.png"   -- 牌花值资源名
UIMahConfig2D.MahTingIconFrameName = "mahlayer_mah_img_sign.png"    -- 麻将子上边的听icon资源名
UIMahConfig2D.MahBaoIconFrameName = "mahlayer_mah_img_bao.png"    -- 麻将子上包牌icon资源名
-- 财神标记资源名
UIMahConfig2D.MahJokerIconFrameName = {
    Circle = "mahlayer_mah_face_joker_circle.png",
    Square = "mahlayer_mah_face_joker_square.png"
}
-- 花标记资源名
UIMahConfig2D.MahFlowerIconFrameName = {
    Circle = "mahlayer_mah_face_flower.png",
    Square = "mahlayer_mah_face_flower.png"
}
UIMahConfig2D.MahRenYiFrameName = "mahlayer_mah_any.png"  -- 任意牌资源名

UIMahConfig2D.CombArrowImage = UIMahConfig2D.RootPath .. "mj_game_shpuuer_jian.png"

UIMahConfig2D.MahFaceMinScale = 0.85   -- 牌花最小缩放比例
UIMahConfig2D.MahFaceMaxScale = 1.0   -- 牌花最大缩放比例

UIMahConfig2D.HandMahMinHeight = 170  -- 麻将牌最小高度
UIMahConfig2D.HandMahMaxHeight = 190  -- 麻将牌最大高度

UIMahConfig2D.MahMaxAddThick = 15  -- 麻将牌最大增加厚度

UIMahConfig2D.MahLightColor = {
    [CF.GameDefine.MAH_LIGHT_TYPE.LIGHT] = cc.c3b(255,255,255),
    [CF.GameDefine.MAH_LIGHT_TYPE.DARK] = cc.c3b(229,229,229)
}

UIMahConfig2D.MahGroundColorStr = {
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = "orange",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW] = "yellow",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = "green",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.BLUE] = "blue",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.CHANGECARD] = "change",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ] = "xg",
}

UIMahConfig2D.MahGroundLightStr = {
    [CF.GameDefine.MAH_LIGHT_TYPE.LIGHT] = "light",
    [CF.GameDefine.MAH_LIGHT_TYPE.DARK] = "dark",
}

UIMahConfig2D.MahGroundShapeStr = {
    [CF.GameDefine.MAH_SHAPE_TYPE.CIRCLE] = "circle",
    [CF.GameDefine.MAH_SHAPE_TYPE.SQUARE] = "square",
}

--UIMahConfig2D.MahGroundPatternStr = {
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.FU_QI] = "fuqi",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.JIN_LI] = "jinli",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.KAI_YUN_XIAO_BAO] = "kaiyunxiaobao",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.NIAN_NIAN_YOU_YU] = "niannianyouyu",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.SHU_NI_HAO_YUN] = "shunihaoyun",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.YUN_WANG_QI_WANG] = "yunwangqiwang",
--    [CF.GameDefine.MAH_BACK_PATTERN_TYPE.ZHAO_CAI] = "zhaocai",
--}

-- Back 表示牌背的资源
-- FaceGround 表示牌面的资源
UIMahConfig2D.MahFrameName = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
        Back = "mahlayer_mahback_%s_%s_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_1.png",
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
        Back = "mahlayer_mahback_%s_%s_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_2.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_1.png"
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
        Back = "mahlayer_mahback_%s_%s_1_3.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_3.png",
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
        Back = "mahlayer_mahback_%s_%s_1_4.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_4.png",
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
        Back = "mahlayer_mahback_%s_%s_2_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_1.png",
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
        Back = "mahlayer_mahback_%s_%s_2_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_1.png",
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
        Back = "mahlayer_mahback_%s_%s_2_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_2.png",
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
        Back = "mahlayer_mahback_%s_%s_2_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_2.png",
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
        Back = "mahlayer_mahback_%s_%s_2_2_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_2_1.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_1.png"
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
        Back = "mahlayer_mahback_%s_%s_2_2_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_2_2.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_2.png"
    },
}

-- 层级配置
UIMahConfig2D.MahZorderConf = {
    Face = 3,       -- 牌花
    JokerIcon = 4,  -- 财神标记
    ArrowIcon = 5,  -- 进牌指向标记
    TingIcon = 6,   -- 听牌icon
    LastOutFlagIcon = 7,
}

UIMahConfig2D.MahTopEdgeWidth = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = 135,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = 135,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = 116,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = 116,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = 135,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = 135,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = 108,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = 108,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = 137,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = 108,
}

UIMahConfig2D.MahLeftRightEdgeWidth = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = 135,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = 169,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = 75,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = 75,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = 169,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = 169,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = 174,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = 174,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = 158,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = 177,
}

-- 麻将子布局配置
UIMahConfig2D.MahLayout = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
        Back = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,-48),
            CapInsets = cc.rect(45, 47, 45, 1),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 15,
            Position = cc.p(0 ,0),
            CapInsets = cc.rect(45, 20, 50, 28),
            Zorder = 1,
        },
        Face = {
            Rotation = 0,
        },
        JokerIcon = {
            Rotation = 0,
        }
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
        Back = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 12,
            Position = cc.p(0 ,0),
            CapInsets = cc.rect(50, 12, 38, 0.01),
            Zorder = 1,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,-48),
            Zorder = 0,
        },
        BackPattern = {
            AnchorPoint = display.CENTER,
            InitialThick = 12,
            Position = cc.p(0 ,-90),
            Zorder = 2,
        },
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
        Back = {
            AnchorPoint = display.LEFT_CENTER,
            InitialThick = 39,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        FaceGround = {
            AnchorPoint = display.RIGHT_CENTER,
            InitialThick = 38,
            Position = cc.p(0 ,0),
            Zorder = 0,
        }
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
        Back = {
            AnchorPoint = display.RIGHT_CENTER,
            InitialThick = 39,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        FaceGround = {
            AnchorPoint = display.LEFT_CENTER,
            InitialThick = 38,
            Position = cc.p(0 ,0),
            Zorder = 0,
        }
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
        Back = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 12,
            Position = cc.p(0 ,49),
            CapInsets = cc.rect(45, 20, 50, 28),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 15,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        Face = {
            Rotation = 0,
        },
        JokerIcon = {
            Rotation = 0,
        }
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
        Back = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 12,
            Position = cc.p(0 ,49),
            CapInsets = cc.rect(45, 20, 50, 28),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 15,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        Face = {
            Rotation = 180,
        },
        JokerIcon = {
            Rotation = 180,
        }
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
        Back = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 12,
            Position = cc.p(-1 ,48),
            CapInsets = cc.rect(45, 20, 50, 28),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 15,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        Face = {
            Rotation = -90,
        },
        JokerIcon = {
            Rotation = 270,
        }
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
        Back = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 12,
            Position = cc.p(-1 ,48),
            CapInsets = cc.rect(45, 20, 50, 28),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 15,
            Position = cc.p(0 ,0),
            Zorder = 1,
        },
        Face = {
            Rotation = 90,
        },
        JokerIcon = {
            Rotation = 90,
        }
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
        Back = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,0),
            CapInsets = cc.rect(50, 158, 38, 0.01),
            Zorder = 1,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,-12),
            Zorder = 0,
        },
        BackPattern = {
            AnchorPoint = display.CENTER,
            InitialThick = 12,
            Position = cc.p(0 ,90),
            Zorder = 2,
        },
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
        Back = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,0),
            CapInsets = cc.rect(50, 108, 77, 0.01),
            Zorder = 1,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 12,
            Position = cc.p(0 ,-12),
            Zorder = 0,
        },
        BackPattern = {
            AnchorPoint = display.CENTER,
            InitialThick = 12,
            Position = cc.p(0 ,0),
            Zorder = 2,
        },
    },
}


UIMahConfig2D.CombMahLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        FaceUp = {
            Normal = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            Rotate = {
                [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 0
                },
                [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 3
                },
                [CF.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 2
                },
                [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 1
                }
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        FaceUp = {
            Normal = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            Rotate = {
                [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
                    MahIndex = 1
                },
                [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 0
                },
                [CF.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 3
                },
                [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 2
                }
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        FaceUp = {
            Normal = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            Rotate = {
                [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 2
                },
                [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 3
                },
                [CF.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 0
                },
                [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 1
                }
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        FaceUp = {
            Normal = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            Rotate = {
                [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
                    MahIndex = 1
                },
                [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 2
                },
                [CF.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 3
                },
                [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 0
                }
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
    }
}

UIMahConfig2D.CombArrowLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        IconPosition = cc.p(0.5, 1),
        IconScale = 1,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        IconPosition = cc.p(0, 0.6),
        IconScale = 1.6,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        IconPosition = cc.p(0.5, 1),
        IconScale = 1.6,
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        IconPosition = cc.p(1, 0.6),
        IconScale = 1.6,
    }
}

-- HandMahScale 手牌缩放值
-- DanFangDistance 单放牌和手牌间隙
-- CombScale comb缩放值
-- CombDistance comb之间的间隙
-- AnchorPoint 手牌和comb的锚点
-- IsHorizontalAdd 是否是水平增长的
-- AddDirection 增长方向
UIMahConfig2D.HandAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        HandMahScale = 1,
        DanFangDistance = 15,
        CombScale = 0.93,
        CombDistance = 20,
        CombTotalLength = 405,
        AnchorPoint = display.LEFT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = 1,

        CombAnchorPointAtRight = display.RIGHT_BOTTOM,
        CombStartPosAtRight = cc.p(1910, 0),
        CombStartPosAtRight8 = cc.p(1492, 0),
        CombStartPosAtRight17 = cc.p(2330, 0),
        CombMoveDisX = 0,
        CombMoveDisY = -200,

        HandAreaScale = 1,
        HandAreaScale17 = 0.82,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(418, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(418, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        HandMahScale = 1,
        DanFangDistance = 15,
        CombScale = 1,
        CombDistance = 2,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = false,
        AddDirection = 1,

        CombMoveDisX = 200,
        CombMoveDisY = 0,

        HandAreaScale = 0.46,
        HandAreaScale17 = 0.4,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, 500),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, 500),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        HandMahScale = 1,
        DanFangDistance = 15,
        CombScale = 1,
        CombDistance = 20,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = -1,

        CombMoveDisX = 0,
        CombMoveDisY = 200,

        HandAreaScale = 0.5,
        HandAreaScale17 = 0.44,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(-418, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(-418, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        HandMahScale = 1,
        DanFangDistance = 15,
        CombScale = 1,
        CombDistance = 2,
        AnchorPoint = display.LEFT_TOP,
        IsHorizontalAdd = false,
        AddDirection = -1,

        CombMoveDisX = -200,
        CombMoveDisY = 0,

        HandAreaScale = 0.46,
        HandAreaScale17 = 0.4,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, -500),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, -500),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    }
}

UIMahConfig2D.HandAreaPlayConf = {
    DragZorder = 20,
    SelectedAddY = 40
}

-- 出牌区麻将牌类型
UIMahConfig2D.OutMahsMahType = {
    Together = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
    FourDirection = {
        [CF.GameDefine.LOCAL_SEAT.BOTTOM] = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        [CF.GameDefine.LOCAL_SEAT.RIGHT] = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
        [CF.GameDefine.LOCAL_SEAT.TOP] = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        [CF.GameDefine.LOCAL_SEAT.LEFT] = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
    }
}

UIMahConfig2D.OutMahsLayout = {
    Together = 1,
    FourDirection = {
        [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(0,0),--display.LEFT_TOP,
            IsHorizontalAdd = true,
            AddDirectionX = 1,
            AddDirectionY = -1,
        },
        [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.LEFT_BOTTOM,
            IsHorizontalAdd = false,
            AddDirectionX = 1,
            AddDirectionY = 1,
        },
        [CF.GameDefine.LOCAL_SEAT.TOP] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.RIGHT_BOTTOM,
            IsHorizontalAdd = true,
            AddDirectionX = -1,
            AddDirectionY = 1,
        },
        [CF.GameDefine.LOCAL_SEAT.LEFT] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(0,1),--display.RIGHT_TOP,
            IsHorizontalAdd = false,
            AddDirectionX = -1,
            AddDirectionY = -1,
        },
    }
}

UIMahConfig2D.OutMahsCountConf = {
    SingleLineMaxCount = 16,
    EmptyCount = {0,8,8,8,0,0},
}

UIMahConfig2D.FlowerAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        MahScale = 1,
        AnchorPoint = display.LEFT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = 1,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        MahScale = 1,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = false,
        AddDirection = 1,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        MahScale = 1,
        AnchorPoint = display.RIGHT_TOP,
        IsHorizontalAdd = true,
        AddDirection = -1,
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        MahScale = 1,
        AnchorPoint = display.LEFT_TOP,
        IsHorizontalAdd = false,
        AddDirection = -1,
    }
}

-- 设置界面选项的key
UIMahConfig2D.MahSettingKey = {
    PlaceType = "handAreaPlaceType",
    LieType = "combLieType",
    ShapeType = "mahShapeType",-- 圆角、直角
    LightType = "mahLightType",-- 亮、暗
    BackColorType = "mahBackColorType",-- 牌背颜色
    FaceType = "mahFaceType",-- 牌花类型
    FaceSizeRatio = "mahFaceSizeRatio",-- 牌花缩放比例
    HeightRatio = "mahHeightRatio",-- 高度比例
    ThickRatio = "mahThickRatio",-- 厚度比例
    PlayType = "handMahsPlayType",
    BackPatternType = "mahBackPatternType"
}

UIMahConfig2D.MahPropKey = {
    BackPatternType = "mahBackPatternType",          --牌背图案
}

-- 设置界面选项的key对应的默认值
UIMahConfig2D.MahSettingDefault = {
    [UIMahConfig2D.MahSettingKey.PlaceType] = CF.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT,
    [UIMahConfig2D.MahSettingKey.LieType] = CF.GameDefine.COMB_LIE_TYPE.ARROW_BY_MAH,
    [UIMahConfig2D.MahSettingKey.ShapeType] = CF.GameDefine.MAH_SHAPE_TYPE.CIRCLE,
    [UIMahConfig2D.MahSettingKey.LightType] = CF.GameDefine.MAH_LIGHT_TYPE.LIGHT,
    [UIMahConfig2D.MahSettingKey.BackColorType] = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [UIMahConfig2D.MahSettingKey.FaceType] = CF.GameDefine.MAH_FACE_TYPE.FACE_1,
    [UIMahConfig2D.MahSettingKey.FaceSizeRatio] = 0.5,
    [UIMahConfig2D.MahSettingKey.HeightRatio] = 0.5,
    [UIMahConfig2D.MahSettingKey.ThickRatio] = 0,
    [UIMahConfig2D.MahSettingKey.PlayType] = CF.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,
}


UIMahConfig2D.QuanFeng = {
    [0] = "北",
    [1] = "东",
    [2] = "南",
    [3] = "西",
}

UIMahConfig2D.JokerSet = {
    [30412] = "mj_mah_face_long.png"
}

UIMahConfig2D.JokerColorSet = {
    [30412] = cc.c3b(255,255,119),
    [30415] = cc.c3b(255,255,119)
}

UIMahConfig2D.MahFlowerNumFrameName = { --花牌数字
    Black = "black_%d.png",
    Red = "red_%d.png",
}

UIMahConfig2D.MahFlowerNumPlistPath = UIMahConfig2D.RootPath .. "mahlayer_flower_number.plist"

return UIMahConfig2D ?e  