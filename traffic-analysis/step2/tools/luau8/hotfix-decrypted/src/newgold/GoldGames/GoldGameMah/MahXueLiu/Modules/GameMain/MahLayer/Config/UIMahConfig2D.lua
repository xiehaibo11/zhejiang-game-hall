local UIMahConfig2D = NG.GAME.gameClass("UIMahConfig2D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.Config.UIMahConfigBase")

UIMahConfig2D.RootPath = "NewGoldRes/Image/MahXueLiu/Mahjong2D/"

UIMahConfig2D.MahGroundPlistPath = UIMahConfig2D.RootPath .. "mahlayer_mah_ground.plist"
UIMahConfig2D.MahIconPlistPath = UIMahConfig2D.RootPath .. "mahlayer_mah_icon.plist"

UIMahConfig2D.MahFacePlistPath = {
    [NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_1] = "cocosStudio/GoldNew/Game/MahXueLiu/Image/Mah/mahlayer_mah_face_1.plist",
    [NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_2] = "cocosStudio/GoldNew/Game/MahXueLiu/Image/Mah/mahlayer_mah_face_2.plist",
}

UIMahConfig2D.MahFrameNameStr = "mj_mah_face_%d_%d.png"   -- 牌花值资源名
UIMahConfig2D.MahTingIconFrameName = "mahlayer_mah_img_sign.png"    -- 麻将子上边的听icon资源名
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
    [NG.GAME.GameDefine.MAH_LIGHT_TYPE.LIGHT] = cc.c3b(255,255,255),
    [NG.GAME.GameDefine.MAH_LIGHT_TYPE.DARK] = cc.c3b(229,229,229)
}

UIMahConfig2D.MahGroundColorStr = {
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = "orange",
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW] = "yellow",
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = "green",
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.BLUE] = "blue",
}

UIMahConfig2D.MahGroundLightStr = {
    [NG.GAME.GameDefine.MAH_LIGHT_TYPE.LIGHT] = "light",
    [NG.GAME.GameDefine.MAH_LIGHT_TYPE.DARK] = "dark",
}

UIMahConfig2D.MahGroundShapeStr = {
    [NG.GAME.GameDefine.MAH_SHAPE_TYPE.CIRCLE] = "circle",
    [NG.GAME.GameDefine.MAH_SHAPE_TYPE.SQUARE] = "square",
}

--UIMahConfig2D.MahGroundPatternStr = {
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.FU_QI] = "fuqi",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.JIN_LI] = "jinli",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.KAI_YUN_XIAO_BAO] = "kaiyunxiaobao",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.NIAN_NIAN_YOU_YU] = "niannianyouyu",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.SHU_NI_HAO_YUN] = "shunihaoyun",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.YUN_WANG_QI_WANG] = "yunwangqiwang",
--    [NG.GAME.GameDefine.MAH_BACK_PATTERN_TYPE.ZHAO_CAI] = "zhaocai",
--}

-- Back 表示牌背的资源
-- FaceGround 表示牌面的资源
UIMahConfig2D.MahFrameName = {
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
        Back = "mahlayer_mahback_%s_%s_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_1.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
        Back = "mahlayer_mahback_%s_%s_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_2.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_1.png"
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
        Back = "mahlayer_mahback_%s_%s_1_3.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_3.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
        Back = "mahlayer_mahback_%s_%s_1_4.png",
        FaceGround = "mahlayer_mahface_%s_%s_1_4.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
        Back = "mahlayer_mahback_%s_%s_2_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_1.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
        Back = "mahlayer_mahback_%s_%s_2_1_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_1.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
        Back = "mahlayer_mahback_%s_%s_2_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_2.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
        Back = "mahlayer_mahback_%s_%s_2_1_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_1_2.png",
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
        Back = "mahlayer_mahback_%s_%s_2_2_1.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_2_1.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_1.png"
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
        Back = "mahlayer_mahback_%s_%s_2_2_2.png",
        FaceGround = "mahlayer_mahface_%s_%s_2_2_2.png",
        --BackPattern = "mahlayer_mahbackpattern_%s_2.png"
    },
    ["default"] = {
        -- Back = "mahlayer_mahback_%s_%s_1_1.png",
        -- FaceGround = "mahlayer_mahface_%s_%s_1_1.png",
        Back = "pai_small.png",
        FaceGround = "pai_small.png",
        -- FaceGround = "mahlayer_mahface_%s_%s_1_1.png",
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
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = 135,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = 135,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = 116,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = 116,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = 135,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = 135,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = 108,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = 108,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = 137,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = 108,
}

UIMahConfig2D.MahLeftRightEdgeWidth = {
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = 135,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = 169,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = 75,
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = 75,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = 169,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = 169,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = 174,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = 174,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = 158,
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = 177,
}

-- 麻将子布局配置
UIMahConfig2D.MahLayout = {
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
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
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
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
    ["default"] = {
        Back = {
            AnchorPoint = display.CENTER_BOTTOM,
            InitialThick = 0,
            Position = cc.p(0 ,0),
            CapInsets = cc.rect(45, 47, 45, 1),
            Zorder = 0,
        },
        FaceGround = {
            AnchorPoint = display.CENTER_TOP,
            InitialThick = 0,
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
}


UIMahConfig2D.CombMahLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        FaceUp = {
            Normal = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            Rotate = {
                [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 0
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 3
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 2
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 1
                }
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        FaceUp = {
            Normal = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            Rotate = {
                [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
                    MahIndex = 1
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 0
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 3
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 2
                }
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        FaceUp = {
            Normal = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            Rotate = {
                [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 2
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 3
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 0
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
                    MahIndex = 1
                }
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        FaceUp = {
            Normal = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            Rotate = {
                [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
                    MahIndex = 1
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 2
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
                    MahIndex = 3
                },
                [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                    MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
                    MahIndex = 0
                }
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL
    }
}

UIMahConfig2D.CombArrowLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        IconPosition = cc.p(0.5, 1),
        IconScale = 1,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        IconPosition = cc.p(0, 0.6),
        IconScale = 1.6,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        IconPosition = cc.p(0.5, 1),
        IconScale = 1.6,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
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
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
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
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(418, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(418, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
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
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, 500),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, 500),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
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
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(-418, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(-418, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
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
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, -500),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT] = cc.p(0, -500),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 0),
        },
    }
}

UIMahConfig2D.HandAreaPlayConf = {
    DragZorder = 20,
    SelectedAddY = 40
}

-- 出牌区麻将牌类型
UIMahConfig2D.OutMahsMahType = {
    Together = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
    FourDirection = {
        [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
        [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
    }
}

UIMahConfig2D.OutMahsLayout = {
    Together = 1,
    FourDirection = {
        [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(0,0),--display.LEFT_TOP,
            IsHorizontalAdd = true,
            AddDirectionX = 1,
            AddDirectionY = -1,
        },
        [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.LEFT_BOTTOM,
            IsHorizontalAdd = false,
            AddDirectionX = 1,
            AddDirectionY = 1,
        },
        [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.RIGHT_BOTTOM,
            IsHorizontalAdd = true,
            AddDirectionX = -1,
            AddDirectionY = 1,
        },
        [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
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
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        MahScale = 1,
        AnchorPoint = display.LEFT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = 1,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        MahScale = 1,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = false,
        AddDirection = 1,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        MahScale = 1,
        AnchorPoint = display.RIGHT_TOP,
        IsHorizontalAdd = true,
        AddDirection = -1,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
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
    [UIMahConfig2D.MahSettingKey.PlaceType] = NG.GAME.GameDefine.HANDAREA_PLACE_TYPE.COMB_AT_LEFT,
    [UIMahConfig2D.MahSettingKey.LieType] = NG.GAME.GameDefine.COMB_LIE_TYPE.ARROW_BY_MAH,
    [UIMahConfig2D.MahSettingKey.ShapeType] = NG.GAME.GameDefine.MAH_SHAPE_TYPE.CIRCLE,
    [UIMahConfig2D.MahSettingKey.LightType] = NG.GAME.GameDefine.MAH_LIGHT_TYPE.LIGHT,
    [UIMahConfig2D.MahSettingKey.BackColorType] = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,
    [UIMahConfig2D.MahSettingKey.FaceType] = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_1,
    [UIMahConfig2D.MahSettingKey.FaceSizeRatio] = 0.5,
    [UIMahConfig2D.MahSettingKey.HeightRatio] = 0.5,
    [UIMahConfig2D.MahSettingKey.ThickRatio] = 0,
    [UIMahConfig2D.MahSettingKey.PlayType] = NG.GAME.GameDefine.HANDMAHS_PLAY_TYPE.SINGLE_CLICK,
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

UIMahConfig2D.SimpleMah = {
    QuePai = {
        bg="ng_mah_table_pai_small.png", 
        plist = "cocosStudio/GoldNew/Game/MahXueLiu/Image/table.plist", 
        isSimple = true,
        faceScale = 0.4
    }
}
return UIMahConfig2D�k