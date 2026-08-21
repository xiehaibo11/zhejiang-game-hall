local UIMahConfig3D = CF.gameClass("UIMahConfig3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.Config.UIMahConfigBase")

UIMahConfig3D.RootPath = "cocosStudio/MahjongNew/MahLayer/Image/Mahjong3D/"

UIMahConfig3D.MahModelPathStr = UIMahConfig3D.RootPath .. "mahs/mah_%d.c3b"

UIMahConfig3D.EmptyMahModelPath = UIMahConfig3D.RootPath .. "mahs/mah_114.c3b"

UIMahConfig3D.ShadowModelPath = UIMahConfig3D.RootPath .. "yiny.c3t"

UIMahConfig3D.materialPath = UIMahConfig3D.RootPath .. "material/mahBatch_optimize.material"

UIMahConfig3D.materialPath_Hand = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_Hand.material"

UIMahConfig3D.materialPath_OutMah = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_OutMah.material"

UIMahConfig3D.materialPath_Other = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_Other.material"

UIMahConfig3D.materialPath_Shadow = UIMahConfig3D.RootPath .. "material/shadowBatch.material"

-- 桌面风位
UIMahConfig3D.CenterDiscBg = {
    [0] = UIMahConfig3D.RootPath .. "desk/EWSNe.jpg",
    [XH.XGSJ_PROP_ID.TABLE] = UIMahConfig3D.RootPath .. "desk/EWSNe2.jpg"
}

UIMahConfig3D.CenterDiscArrow = {
    [0] = UIMahConfig3D.RootPath .. "desk/EWSNe_01.jpg",
    [XH.XGSJ_PROP_ID.TABLE] = UIMahConfig3D.RootPath .. "desk/EWSNe2_01.jpg"
}

-- 桌子摄像机
UIMahConfig3D.DeskCameraMask = cc.CameraFlag.USER1
-- 自己玩家手牌摄像机
UIMahConfig3D.SelfHandCameraMask = cc.CameraFlag.USER2

-- 麻将模型尺寸
UIMahConfig3D.MahModelSize = {
    Width = 2.707,
    Height = 3.599,
    Thick = 1.895
}

UIMahConfig3D.DeskThick = 13.1
UIMahConfig3D.BasicRadio = 2/1 --基准是按2:1调的
UIMahConfig3D.WidestRadio = 16 / 9  -- 最宽的分辨率16:9
UIMahConfig3D.HighestRadio = 16 / 9 -- 最正的分辨率16:10.5

UIMahConfig3D.DeskCameraLayout = {
    CameraFlag = UIMahConfig3D.DeskCameraMask,
    FieldOfView = 14,
    NearPlane = 1,
    FarPlane = 1000
}
function  UIMahConfig3D.adaptDeskCameraLayoutFieldOfView()
    local fieldOfView = UIMahConfig3D.DeskCameraLayout.FieldOfView
    local winSize = cc.Director:getInstance():getWinSize()
    if winSize.width/winSize.height >= UIMahConfig3D.WidestRadio then
        return fieldOfView
    end 
    local scale = (winSize.width / winSize.height) / (UIMahConfig3D.HighestRadio)
    fieldOfView = fieldOfView * (1 / scale)
    return fieldOfView
end 

UIMahConfig3D.DeskCameraLayout.FieldOfView = UIMahConfig3D.adaptDeskCameraLayoutFieldOfView()

UIMahConfig3D.DeskCameraLayout.Position = cc.vec3(0, -168, 175)
UIMahConfig3D.DeskCameraLayout.Rotation = cc.vec3(45, 0, 0)

UIMahConfig3D.SelfHandCameraLayout = {
    CameraFlag = UIMahConfig3D.SelfHandCameraMask,
    ZoomX = 54,
    NearPlane = 1,
    FarPlane = 1000,
    Position = cc.vec3(-27, -92, 26.8), -- 24 = ZoomX/2
    Rotation = cc.vec3(74.8, 0, 0)
}

function UIMahConfig3D.adaptSelfHandCameraLayoutZoomX()
    local zoomX = UIMahConfig3D.SelfHandCameraLayout.ZoomX
    local winSize = cc.Director:getInstance():getWinSize()
    local scale = (winSize.width / winSize.height) / UIMahConfig3D.BasicRadio
    --if winSize.width/winSize.height < UIMahConfig3D.WidestRadio then
    if winSize.width/winSize.height > UIMahConfig3D.BasicRadio then 
        local addScale = (UIMahConfig3D.WidestRadio) / (UIMahConfig3D.BasicRadio)
        scale = scale * addScale
    else 
        local addScale = (UIMahConfig3D.WidestRadio) / (winSize.width/winSize.height)
        scale = scale * addScale
        --zoomX = 54
    end 
    --end 
    return zoomX * scale
end 

function UIMahConfig3D.adaptSelfHandCameraPosition()
    local winSize = cc.Director:getInstance():getWinSize()
    local scale = (winSize.width / winSize.height) / UIMahConfig3D.BasicRadio
    local pos = UIMahConfig3D.SelfHandCameraLayout.Position
    local zoomX = UIMahConfig3D.adaptSelfHandCameraLayoutZoomX()
    --if winSize.width/winSize.height < UIMahConfig3D.WidestRadio then
        -- local addScale = (UIMahConfig3D.WidestRadio) / (winSize.width/winSize.height)
        -- scale = scale * addScale
    --    pos.x = -54 / 2
    --end 

    if winSize.width/winSize.height > UIMahConfig3D.BasicRadio then 
        local addScale = (UIMahConfig3D.WidestRadio) / (UIMahConfig3D.BasicRadio)
        scale = scale * addScale
    else 
        local addScale = (UIMahConfig3D.WidestRadio) / (winSize.width/winSize.height)
        scale = scale * addScale
    end 
    pos.x = pos.x * scale
    pos.y = pos.y * scale
    pos.z = pos.z * scale
    return pos
end

UIMahConfig3D.SelfHandCameraLayout.ZoomX = UIMahConfig3D.adaptSelfHandCameraLayoutZoomX()
UIMahConfig3D.SelfHandCameraLayout.Position = UIMahConfig3D.adaptSelfHandCameraPosition()

UIMahConfig3D.MahLayerSpriteLayout = {
    Floor = {
        ResPath = UIMahConfig3D.RootPath .. "d.c3t",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1.16,
        Position3D = cc.vec3(0,25, -10),
        Rotation3D = cc.vec3(8, 0, 180),
    },
    Desk = {
        ResPath = UIMahConfig3D.RootPath .. "desk/zuoz.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1.16,
        Position3D = cc.vec3(0, 7, -10),
        Rotation3D = cc.vec3(8, 0, 180),
    },
    LiftingPlatform = {
        ResPath = UIMahConfig3D.RootPath .. "desk/zuoz1.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1.16,
        Position3D = cc.vec3(0, 7, -10),
        Rotation3D = cc.vec3(8, 0, 180),
    },
    -- 风位
    CenterDisc = {
        ResPath = UIMahConfig3D.RootPath .. "desk/desk_s.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(90, 0, 0),
    },
    DiceBox = {
        ResPath = UIMahConfig3D.RootPath .. "desk/desk_sz.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 0),
    },
    -- 骰子
    DiceAct = {
        ResPath = UIMahConfig3D.RootPath .. "desk/dicedz.c3t",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0,13.1),
        Rotation3D = cc.vec3(0, 0, 0),
    },
    Dice = {
        ResPath = UIMahConfig3D.RootPath .. "desk/dice.c3t",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 0),
    },
    DiceBoxTop = {
        ResPath = UIMahConfig3D.RootPath .. "desk/desk_h.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 0),
        VisibleFalse = true, --初始化不可见
    }
}


UIMahConfig3D.MahLayerFntLayout = {
    ColckStr = {
        ResPath = UIMahConfig3D.RootPath .. "sz.fnt",
        XGSJResPath = "cocosStudio/MahjongNew/GameLayer/Image/CenterDis/Fnt_maj-export.fnt",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT0,
        Scale = 0.1,
        ScaleXGSJ = 0.08,
        Position3D = cc.vec3(0, 0, 13.9),
        Rotation3D = cc.vec3(0, 0, 0),
        Visible = true,
        String = "",
    },
    ColckStrUrgent = {
        ResPath = UIMahConfig3D.RootPath .. "sz_1.fnt",
        XGSJResPath = "cocosStudio/MahjongNew/GameLayer/Image/CenterDis/Fnt_maj2-export.fnt",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT0,
        Scale = 0.1,
        ScaleXGSJ = 0.08,
        Position3D = cc.vec3(0, 0, 13.9),
        Rotation3D = cc.vec3(0, 0, 0),
        Visible = true,
        String = "",
    },
}

UIMahConfig3D.MahTextureConf = {
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = UIMahConfig3D.RootPath .. "mahs/mah1.png",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = UIMahConfig3D.RootPath .. "mahs/mah4.png",
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ] = UIMahConfig3D.RootPath .. "mahs/mah5.png"
}

-- 麻将子布局
UIMahConfig3D.MahLayout = {
    [CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
        Rotation3D = cc.vec3(90, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Thick,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
        Rotation3D = cc.vec3(-90, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Thick,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
        Rotation3D = cc.vec3(-90, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Thick,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [CF.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
        Rotation3D = cc.vec3(90, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Thick,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
        Rotation3D = cc.vec3(0, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
        Rotation3D = cc.vec3(0, 0, 180),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
        Rotation3D = cc.vec3(0, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
        Rotation3D = cc.vec3(0, 0, 90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
        Rotation3D = cc.vec3(180, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
        Rotation3D = cc.vec3(180, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN] = {
        Rotation3D = cc.vec3(180, 0, 180),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL_TORIGHT] = {
        Rotation3D = cc.vec3(180, 0, 90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
}

UIMahConfig3D.MahShadowLayout = {
    ModelPath = UIMahConfig3D.RootPath .. "yiny.c3t",
    Scale = 1,
    Position3D = cc.vec3(0, 0, 0),
    Rotation3D = cc.vec3(270, 0, 0),
}

UIMahConfig3D.MahIconLayout = {
    Joker = {
        Is3D = true,
        ModelPath = UIMahConfig3D.RootPath .. "mahIcons/Cong.c3t",
        Texture = UIMahConfig3D.RootPath .. "mahIcons/CongCai.png",
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 0),
    },
    Ting = {
        Is3D = false,
        ImagePath = UIMahConfig3D.RootPath .. "mahIcons/TingTipIcon.png",
        Scale = 0.02,
        Position3D = cc.vec3(0, 2.4, 0),
    }
}

-- 牌墙布局
UIMahConfig3D.WallAreaPosition = cc.vec3(0, 0, UIMahConfig3D.DeskThick)
UIMahConfig3D.WallLiftingPlatformDis = {
    v = 5,
    h = 5
}
UIMahConfig3D.WallAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL_TORIGHT,
        OpenMahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
        IsAddY = true,
        CenterPos = cc.vec3(-28.3,0,0),
        IsForwardAdd = true,
    },
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        OpenMahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        IsAddX = true,
        CenterPos = cc.vec3(0,-28.3,0),
        IsForwardAdd = false,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        OpenMahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
        IsAddY = true,
        CenterPos = cc.vec3(28.3,0,0),
        IsForwardAdd = false,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN,
        OpenMahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
        IsAddX = true,
        CenterPos = cc.vec3(0,28.3,0),
        IsForwardAdd = true,
    }
}

UIMahConfig3D.MaxCombsCount = 6
UIMahConfig3D.MaxCombMahsCount = 8
UIMahConfig3D.CombAlignIndexConfig = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        [0] = {2,1,3,4,5},
        [1] = {2,3,4,5,6},
        [2] = {2,1,3,4,5},
        [3] = {2,1,4,5,6},
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        [0] = {2,1,3,4,5},
        [1] = {2,3,4,5,6},
        [2] = {2,1,3,4,5},
        [3] = {2,1,4,5,6},
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        [0] = {2,3,1,4,6},
        [1] = {2,3,4,5,6},
        [2] = {2,3,1,4,6},
        [3] = {2,1,4,5,6},
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        [0] = {2,3,1,4,6},
        [1] = {2,3,4,5,6},
        [2] = {2,3,1,4,6},
        [3] = {2,1,4,5,6},
    }
}

UIMahConfig3D.CombMahLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        FaceUp = {
            [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [CF.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        IsAddX = true,
        IsForwardAdd = true,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        FaceUp = {
            [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            },
            [CF.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        IsAddY = true,
        IsForwardAdd = true,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        FaceUp = {
            [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [CF.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        IsAddX = true,
        IsForwardAdd = false,
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        FaceUp = {
            [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [CF.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [CF.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            }
        },
        FaceDown = CF.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        IsAddY = true,
        IsForwardAdd = false,
    }
}

UIMahConfig3D.HandAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        PositionInLayer = cc.vec3(-3, -35, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = true,
        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(-20.5, -3),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(-20.5, -3),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(-41, -3),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(-41, -3),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.2,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.2,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        PositionInLayer = cc.vec3(39, 0, UIMahConfig3D.DeskThick),
        RotationInLayer = cc.vec3(-6, 0, 0),
        IsAddY = true,
        IsForwardAdd = true,
        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, -21.2),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, -25),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, -27),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, -31),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        PositionInLayer = cc.vec3(3, 35, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = false,
        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(19, -4),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(19, -4),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(23, -4),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(23, -4),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        PositionInLayer = cc.vec3(-39, 0, UIMahConfig3D.DeskThick),
        RotationInLayer = cc.vec3(-6, 0, 0),
        IsAddY = true,
        IsForwardAdd = false,
        HandMahsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 21.2),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 25),
        },
        CombsStartPos = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 27),
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 31),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    }
}

UIMahConfig3D.OutMahsLayout = {
    Together = {
        MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
    },
    FourDirection = {
        [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
            MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            PositionInLayer = cc.vec3(-9, -11.5, UIMahConfig3D.DeskThick),
            IsAddX = true,
            AddDirectionX = 1,
            AddDirectionY = -1,
            MahsCount = {
                {StartIndex = 0, Count = 6},
                {StartIndex = -1, Count = 9},
                {StartIndex = -2, Count = 12},
            },
            MahsCount2 = {
                {StartIndex = -5, Count = 16},
                {StartIndex = -5, Count = 16},
                {StartIndex = -5, Count = 16},
            }
        },
        [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
            MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            PositionInLayer = cc.vec3(11.5, -9, UIMahConfig3D.DeskThick),
            IsAddY = true,
            AddDirectionX = 1,
            AddDirectionY = 1,
            MahsCount = {
                {StartIndex = 0, Count = 6},
                {StartIndex = -1, Count = 9},
                {StartIndex = -2, Count = 12},
            }
        },
        [CF.GameDefine.LOCAL_SEAT.TOP] = {
            MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            PositionInLayer = cc.vec3(9, 11.5, UIMahConfig3D.DeskThick),
            IsAddX = true,
            AddDirectionX = -1,
            AddDirectionY = 1,
            MahsCount = {
                {StartIndex = 0, Count = 6},
                {StartIndex = -1, Count = 9},
                {StartIndex = -2, Count = 12},
            },
            MahsCount2 = {
                {StartIndex = -5, Count = 16},
                {StartIndex = -5, Count = 16},
                {StartIndex = -5, Count = 16},
            }
        },
        [CF.GameDefine.LOCAL_SEAT.LEFT] = {
            MahType = CF.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            PositionInLayer = cc.vec3(-11.5, 9, UIMahConfig3D.DeskThick),
            IsAddY = true,
            AddDirectionX = -1,
            AddDirectionY = -1,
            MahsCount = {
                {StartIndex = 0, Count = 6},
                {StartIndex = -1, Count = 9},
                {StartIndex = -2, Count = 12},
            }
        },
    }
}

UIMahConfig3D.OutMahCursorLayout = {
    ModelPath = UIMahConfig3D.RootPath .. "xuanf.c3t",
    Scale = 1,
    Rotation3D = cc.vec3(0, 0, 0),
    LightMask = cc.LightFlag.LIGHT1,
    ActionMoveDis = 1,
    ActionMoveTime = 0.6
}

UIMahConfig3D.FlowerAreaLayout = {
    [CF.GameDefine.LOCAL_SEAT.BOTTOM] = {
        PositionInLayer = cc.vec3(-21, -23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = true,
    },
    [CF.GameDefine.LOCAL_SEAT.RIGHT] = {
        PositionInLayer = cc.vec3(23.5, -21, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = true,
    },
    [CF.GameDefine.LOCAL_SEAT.TOP] = {
        PositionInLayer = cc.vec3(21, 23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = false,
    },
    [CF.GameDefine.LOCAL_SEAT.LEFT] = {
        PositionInLayer = cc.vec3(-23.5, 21, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = false,
    }
}
UIMahConfig3D.FlowerSingleLineMaxCount = 14

UIMahConfig3D.MahColorConf2D = {
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = {
        mahFaceSizeRatio  = 0.72,         ---牌花大小(0-1)
        mahThickRatio      = 0.2,                ---牌厚度(0-1)
        mahHeightRatio     = 0.6,                ---牌高度(0-1)
        mahFaceType       = CF.GameDefine.MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
        mahBackColorType       = CF.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
        mahShapeType       = 2,                ---牌身(圆方)
        mahLightType       = 1,                ---牌面(亮暗)
    },
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = {
        mahFaceSizeRatio  = 0.72,
        mahThickRatio      = 0.2,
        mahHeightRatio     = 0.6,
        mahFaceType       = CF.GameDefine.MAH_FACE_TYPE.FACE_2,
        mahBackColorType       = CF.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW,
        mahShapeType       = 2,
        mahLightType       = 1,
    },
    [CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ] = {
        mahFaceSizeRatio  = 0.72,
        mahThickRatio      = 0.2,
        mahHeightRatio     = 0.6,
        mahFaceType       = CF.GameDefine.MAH_FACE_TYPE.FACE_2,
        mahBackColorType       = CF.GameDefine.MAH_BACK_COLOR_TYPE.XGSJ,
        mahShapeType       = 2,
        mahLightType       = 1,
    }
}

return UIMahConfig3D�g  