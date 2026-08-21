

local UIMahConfig2D = CF.gameClass("UIMahConfig2D", "game.Mahjong.BasicMahjong.Modules.GameLayer.Config.UIMahConfig2D")

UIMahConfig2D.WaHuaRootPath = "cocosStudio/MahjongNew/MahLayer/Image/TaiZhouWaHua/" --挖花路径

UIMahConfig2D.MahIconPlistPath = UIMahConfig2D.WaHuaRootPath .. "action_wahua.plist"

UIMahConfig2D.MahFacePlistPath = {
    [CF.GameDefine.MAH_FACE_TYPE.FACE_1] = UIMahConfig2D.WaHuaRootPath .. "wahua_mah_face.plist",
    [CF.GameDefine.MAH_FACE_TYPE.FACE_2] = UIMahConfig2D.WaHuaRootPath .. "wahua_mah_face_2.plist",
}

UIMahConfig2D.MahFrameNameStr = "wahua_mah_%d.png"   -- 牌花值资源名
UIMahConfig2D.MahFrameNameStr2 = "wahua_mah_2_%d.png"   -- 牌花值资源名

UIMahConfig2D.MahFrameSongFlag = "tz_wahua_game_song_flag.png"

UIMahConfig2D.MaxHandMahsCount = 21
UIMahConfig2D.MaxCombsCount = 10

UIMahConfig2D.MahMaxAddThick = 0  -- 麻将牌最大增加厚度

--摇张配置
UIMahConfig2D.YaoZhangMahScaleSize = 0.5
--花牌双排配置
UIMahConfig2D.FlowerMahScaleSize = 1.3
--吃杠牌权牌配置
UIMahConfig2D.ActionMahScaleSize = 0.6

UIMahConfig2D.DoubleCombCount = 5

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
        CombScale = 1,
        CombDistance = 20,
        CombDistance2 = 25,
        --CombTotalLength = 405,
        AnchorPoint = display.LEFT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = 1,

        CombAnchorPointAtRight = display.RIGHT_BOTTOM,
        CombStartPosAtRight = cc.p(1910, 0),
        CombMoveDisX = 0,
        CombMoveDisY = -200,

        HandMoveDisX = 0,
        HandMoveDisY = 55,

        HandAreaScale = 0.85,
        HandAreaScale21 = 0.66,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        HandMahScale = 1,
        DanFangDistance = 40,
        CombScale = 0.93,
        CombDistance = 2,
        CombDistance2 = 15,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = false,
        AddDirection = 1,

        CombMoveDisX = 200,
        CombMoveDisY = 0,

        HandMoveDisX = 80,
        HandMoveDisY = 0,

        HandAreaScale = 0.7,
        HandAreaScale21 = 0.7,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, 100),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, 100),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        HandMahScale = 1,
        DanFangDistance = 15,
        CombScale = 1,
        CombDistance = 20,
        CombDistance2 = 20,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = -1,

        CombMoveDisX = 0,
        CombMoveDisY = 200,

        HandMoveDisX = 0,
        HandMoveDisY = 55,

        HandAreaScale = 0.7,
        HandAreaScale21 = 0.7,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(-50, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(-50, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(-50, 0),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(-50, 0),
        },
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        HandMahScale = 1,
        DanFangDistance = 40,
        CombScale = 0.93,
        CombDistance = 2,
        CombDistance2 = 15,
        AnchorPoint = display.LEFT_TOP,
        IsHorizontalAdd = false,
        AddDirection = -1,

        CombMoveDisX = -200,
        CombMoveDisY = 0,

        HandMoveDisX = 80,
        HandMoveDisY = 0,

        HandAreaScale = 0.7,
        HandAreaScale21 = 0.7,

        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, -50),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TEN] = cc.p(0, -50),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.TWENTYONE] = cc.p(0, 0),
        },
    }
}


UIMahConfig2D.FlowerAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        MahScale = 1,
        AnchorPoint = display.LEFT_BOTTOM,
        IsHorizontalAdd = true,
        AddDirection = 1,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        MahScale = 0.8,
        AnchorPoint = display.RIGHT_BOTTOM,
        IsHorizontalAdd = false,
        AddDirection = 1,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        MahScale = 0.8,
        AnchorPoint = display.RIGHT_TOP,
        IsHorizontalAdd = true,
        AddDirection = -1,
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        MahScale = 0.8,
        AnchorPoint = display.LEFT_TOP,
        IsHorizontalAdd = false,
        AddDirection = -1,
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
            AddDirectionY = 1,
        },
        [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.LEFT_BOTTOM,
            IsHorizontalAdd = false,
            AddDirectionX = -1,
            AddDirectionY = 1,
        },
        [CF.GameDefine.LOCAL_SEAT.TOP] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(1,0),--display.RIGHT_BOTTOM,
            IsHorizontalAdd = true,
            AddDirectionX = -1,
            AddDirectionY = -1,
        },
        [CF.GameDefine.LOCAL_SEAT.LEFT] = {
            OutMahScale = 1,
            AnchorPoint = cc.p(0,1),--display.RIGHT_TOP,
            IsHorizontalAdd = false,
            AddDirectionX = 1,
            AddDirectionY = -1,
        },
    }
}

UIMahConfig2D.MahTopEdgeWidth = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = 135,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = 135,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = 116,
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = 116,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = 135,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = 135,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = 116,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = 116,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = 137,
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = 108,
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
            CapInsets = cc.rect(45, 20, 50, 28),
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
            CapInsets = cc.rect(45, 20, 50, 28),
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

return UIMahConfig2D