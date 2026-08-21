local UIMahConfig3D = NG.GAME.gameClass("UIMahConfig3D", "newgold.GoldGames.GoldGameMah.MahXueLiu.Modules.GameMain.MahLayer.Config.UIMahConfigBase")

UIMahConfig3D.RootPath = "NewGoldRes/Image/MahXueLiu/Mahjong3D/"
UIMahConfig3D.GoldRootPath = "NewGoldRes/Image/MahXueLiu/"

UIMahConfig3D.MahModelPathStr = UIMahConfig3D.RootPath .. "mahs/mah_%d.c3b"

UIMahConfig3D.EmptyMahModelPath = UIMahConfig3D.RootPath .. "mahs/mah_114.c3b"

UIMahConfig3D.ShadowModelPath = UIMahConfig3D.RootPath .. "yiny.c3t"

UIMahConfig3D.materialPath = UIMahConfig3D.RootPath .. "material/mahBatch_optimize.material"

UIMahConfig3D.materialPath_Hand = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_Hand.material"

UIMahConfig3D.materialPath_OutMah = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_OutMah.material"

UIMahConfig3D.materialPath_Other = UIMahConfig3D.RootPath .. "material/mahBatch_optimize_Other.material"

UIMahConfig3D.materialPath_Shadow = UIMahConfig3D.RootPath .. "material/shadowBatch.material"

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

function UIMahConfig3D.getSelfHandCameraPositionZ()
    local posZ = 27.8
    local winSize = cc.Director:getInstance():getWinSize()
    if winSize.width/winSize.height > 2 then
        posZ = 26.8
    end
    return posZ
end

function  UIMahConfig3D.getDeskCameraPositionAndRotation()
    local winSize = cc.Director:getInstance():getWinSize()
    if winSize.width/winSize.height > 2 then
        return cc.vec3(0, -125, 96),cc.vec3(54, 0, 0)
    end
    
    local ratio = (winSize.height / winSize.width - 9/16) / 0.1875
    if ratio<0 then
        ratio = 0
    end
    local pos = cc.vec3(0, -120, 115)
    local rot = cc.vec3(48.2, 0, 0)
    
    local pos2 = cc.vec3(0, -135.35, 169.1)
    local rot2 = cc.vec3(40.5, 0, 0)
    
    pos.x = pos.x + (pos2.x - pos.x) * ratio
    pos.y = pos.y + (pos2.y - pos.y) * ratio
    pos.z = pos.z + (pos2.z - pos.z) * ratio
    
    rot.x = rot.x + (rot2.x - rot.x) * ratio
    rot.y = rot.y + (rot2.y - rot.y) * ratio
    rot.z = rot.z + (rot2.z - rot.z) * ratio
    
    return pos, rot
end

local DeskCameraPosition, DeskCameraRotation = UIMahConfig3D.getDeskCameraPositionAndRotation()
UIMahConfig3D.DeskCameraLayout = {
    CameraFlag = UIMahConfig3D.DeskCameraMask,
    FieldOfView = 20,
    NearPlane = 1,
    FarPlane = 1000
}
UIMahConfig3D.DeskCameraLayout.Position = DeskCameraPosition
UIMahConfig3D.DeskCameraLayout.Rotation = DeskCameraRotation

UIMahConfig3D.SelfHandCameraLayout = {
    CameraFlag = UIMahConfig3D.SelfHandCameraMask,
    ZoomX = 48,
    NearPlane = 1,
    FarPlane = 1000,
    Position = cc.vec3(-24, -90, 0), -- 24 = ZoomX/2
    Rotation = cc.vec3(74.8, 0, 0)
}
UIMahConfig3D.SelfHandCameraLayout.Position.z = UIMahConfig3D.getSelfHandCameraPositionZ()

UIMahConfig3D.MahLayerSpriteLayout = {
    Floor = {
        ResPath = UIMahConfig3D.RootPath .. "d.c3t",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 10, 0),
        Rotation3D = cc.vec3(0, 0, 180),
    },
    Desk = {
        ResPath = UIMahConfig3D.RootPath .. "desk/zuoz.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 180),
    },
    LiftingPlatform = {
        ResPath = UIMahConfig3D.RootPath .. "desk/zuoz1.c3b",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT2,
        Scale = 1,
        Position3D = cc.vec3(0, 0, 0),
        Rotation3D = cc.vec3(0, 0, 0),
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
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT0,
        Scale = 0.1,
        Position3D = cc.vec3(0, 0, 13.9),
        Rotation3D = cc.vec3(0, 0, 0),
        Visible = true,
        String = "",
    },
    ColckStrUrgent = {
        ResPath = UIMahConfig3D.RootPath .. "sz_1.fnt",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT0,
        Scale = 0.1,
        Position3D = cc.vec3(0, 0, 13.9),
        Rotation3D = cc.vec3(0, 0, 0),
        Visible = true,
        String = "",
    },
    DeskBaseScore = {
        ResPath = UIMahConfig3D.GoldRootPath .. "font/baseFnt.fnt",
        CameraMask = UIMahConfig3D.DeskCameraMask,
        LightMask = cc.LightFlag.LIGHT0,
        Scale = 0.1,
        Position3D = cc.vec3(0, 12, 13.2),
        Rotation3D = cc.vec3(0, 0, 180),
        Visible = true,
        String = "",
    },
}

UIMahConfig3D.MahTextureConf = {
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = UIMahConfig3D.RootPath .. "mahs/mah1.png",
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = UIMahConfig3D.RootPath .. "mahs/mah4.png"
}

-- 麻将子布局
UIMahConfig3D.MahLayout = {
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_FORWARD] = {
        Rotation3D = cc.vec3(90, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Thick,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD] = {
        Rotation3D = cc.vec3(-90, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Thick,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TOLEFT] = {
        Rotation3D = cc.vec3(-90, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Thick,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [NG.GAME.GameDefine.MAH_TYPE.STAND_FACE_TORIGHT] = {
        Rotation3D = cc.vec3(90, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Thick,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Height,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP] = {
        Rotation3D = cc.vec3(0, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN] = {
        Rotation3D = cc.vec3(0, 0, 180),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT] = {
        Rotation3D = cc.vec3(0, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT] = {
        Rotation3D = cc.vec3(0, 0, 90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL] = {
        Rotation3D = cc.vec3(180, 0, 0),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL] = {
        Rotation3D = cc.vec3(180, 0, -90),
        DistanceX = UIMahConfig3D.MahModelSize.Height,
        DistanceY = UIMahConfig3D.MahModelSize.Width,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN] = {
        Rotation3D = cc.vec3(180, 0, 180),
        DistanceX = UIMahConfig3D.MahModelSize.Width,
        DistanceY = UIMahConfig3D.MahModelSize.Height,
        DistanceZ = UIMahConfig3D.MahModelSize.Thick,
    },
    [NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL_TORIGHT] = {
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
        Is3D = false,
        ImagePath = UIMahConfig3D.GoldRootPath .. "mah_jb_lz.png",
        Scale = 0.023,
        Position3D = cc.vec3(0.6, 0.83, 0.95),
    },
    Ting = {
        Is3D = false,
        ImagePath = UIMahConfig3D.RootPath .. "mahIcons/TingTipIcon.png",
        Scale = 0.02,
        Position3D = cc.vec3(0, 2.4, 0)
    },
    BaiBian = {
        Is3D = false,
        ImagePath = UIMahConfig3D.GoldRootPath .. "mah_jb_bian.png",
        Scale = 0.023,
        Position3D = cc.vec3(0.6, 0.83, 0.95),
    },
    BaiBianBtn = {
        Is3D = false,
        ImagePath = UIMahConfig3D.GoldRootPath .. "bian_btn.png",
        Normal = UIMahConfig3D.GoldRootPath .. "bian_btn.png",
        Disable = UIMahConfig3D.GoldRootPath .. "bian_dis.png",
        Scale = 0.023,
        Position3D = cc.vec3(0, 3.0, 0.95),
        TouchEnable = true,
        EventName = "UIMahLayer.MahBaiBianClick",
        Children = {{type="text", content="%s/3", fontSize=32,position=cc.p(68,30), color = cc.c3b(192,51,8),name="text"}}
    },
}

-- 牌墙布局
UIMahConfig3D.WallAreaPosition = cc.vec3(0, 0, UIMahConfig3D.DeskThick)
UIMahConfig3D.WallLiftingPlatformDis = {
    v = 5,
    h = 5
}
UIMahConfig3D.WallAreaLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL_TORIGHT,
        OpenMahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
        IsAddY = true,
        CenterPos = cc.vec3(-28.3,0,0),
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        OpenMahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
        IsAddX = true,
        CenterPos = cc.vec3(0,-28.3,0),
        IsForwardAdd = false,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        OpenMahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
        IsAddY = true,
        CenterPos = cc.vec3(28.3,0,0),
        IsForwardAdd = false,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL_TODOWN,
        OpenMahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
        IsAddX = true,
        CenterPos = cc.vec3(0,28.3,0),
        IsForwardAdd = true,
    }
}

UIMahConfig3D.MaxCombsCount = 6
UIMahConfig3D.MaxCombMahsCount = 8
UIMahConfig3D.CombAlignIndexConfig = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        [0] = {2,1,3,4,5},
        [1] = {2,3,4,5,6},
        [2] = {2,1,3,4,5},
        [3] = {2,1,4,5,6},
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        [0] = {2,1,3,4,5},
        [1] = {2,3,4,5,6},
        [2] = {2,1,3,4,5},
        [3] = {2,1,4,5,6},
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        [0] = {2,3,1,4,6},
        [1] = {2,3,4,5,6},
        [2] = {2,3,1,4,6},
        [3] = {2,1,4,5,6},
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        [0] = {2,3,1,4,6},
        [1] = {2,3,4,5,6},
        [2] = {2,3,1,4,6},
        [3] = {2,1,4,5,6},
    }
}

UIMahConfig3D.CombMahLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        FaceUp = {
            [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        IsAddX = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        FaceUp = {
            [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        IsAddY = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        FaceUp = {
            [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_VERTICAL,
        IsAddX = true,
        IsForwardAdd = false,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        FaceUp = {
            [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            },
            [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
                MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            }
        },
        FaceDown = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_DOWN_HORIZONTAL,
        IsAddY = true,
        IsForwardAdd = false,
    }
}

UIMahConfig3D.HandAreaLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        PositionInLayer = cc.vec3(-3, -35, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = true,
        BankrupRotation = cc.vec3(90,0,0),
        HandMahsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(-19, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(-20.5, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(-33, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(-33, 0),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        PositionInLayer = cc.vec3(33.5, 0, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = true,
        BankrupRotation = cc.vec3(0,90,0),
        HandMahsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, -23),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, -25),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, -27),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, -31),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        PositionInLayer = cc.vec3(3, 35, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = false,
        BankrupRotation = cc.vec3(-90,0,0),
        HandMahsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(19, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(19, 0),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(23, 0),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(23, 0),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        PositionInLayer = cc.vec3(-33.5, 0, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = false,
        BankrupRotation = cc.vec3(0,-90,0),
        HandMahsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 23),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 25),
        },
        CombsStartPos = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(0, 27),
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(0, 31),
        },
        CombDistance = 0.5,
        HandMahsScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
        CombScale = {
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = 1.1,
            [NG.GAME.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = 1,
        },
    }
}

UIMahConfig3D.OutMahsLayout = {
    Together = {
        MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
    },
    FourDirection = {
        [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
            MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP,
            PositionInLayer = cc.vec3(-9, -11, UIMahConfig3D.DeskThick),
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
        [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
            MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TOLEFT,
            PositionInLayer = cc.vec3(11, -9, UIMahConfig3D.DeskThick),
            IsAddY = true,
            AddDirectionX = 1,
            AddDirectionY = 1,
            MahsCount = {
                {StartIndex = 0, Count = 6},
                {StartIndex = -1, Count = 9},
                {StartIndex = -2, Count = 12},
            }
        },
        [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
            MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TODOWN,
            PositionInLayer = cc.vec3(9, 11, UIMahConfig3D.DeskThick),
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
        [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
            MahType = NG.GAME.GameDefine.MAH_TYPE.LIE_FACE_UP_HORIZONTAL_TORIGHT,
            PositionInLayer = cc.vec3(-11, 9, UIMahConfig3D.DeskThick),
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
    LightMask = cc.LightFlag.LIGHT0,
    ActionMoveDis = 1,
    ActionMoveTime = 0.6
}

UIMahConfig3D.FlowerAreaLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        PositionInLayer = cc.vec3(-20, -23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        PositionInLayer = cc.vec3(23.5, -20, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        PositionInLayer = cc.vec3(20, 23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = false,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        PositionInLayer = cc.vec3(-23.5, 20, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = false,
    }
}
UIMahConfig3D.FlowerSingleLineMaxCount = 8

UIMahConfig3D.HuAreaLayout = {
    [NG.GAME.GameDefine.LOCAL_SEAT.BOTTOM] = {
        PositionInLayer = cc.vec3(13.5, -23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.RIGHT] = {
        PositionInLayer = cc.vec3(23.5, 13.5, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = true,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.TOP] = {
        PositionInLayer = cc.vec3(-13.5, 23.5, UIMahConfig3D.DeskThick),
        IsAddX = true,
        IsForwardAdd = false,
    },
    [NG.GAME.GameDefine.LOCAL_SEAT.LEFT] = {
        PositionInLayer = cc.vec3(-23.5, -13.5, UIMahConfig3D.DeskThick),
        IsAddY = true,
        IsForwardAdd = false,
    }
}
UIMahConfig3D.HuSingleLineMaxCount = 4

UIMahConfig3D.MahColorConf2D = {
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN] = {
        mahFaceSizeRatio  = 0.72,         ---牌花大小(0-1)
        mahThickRatio      = 0.2,                ---牌厚度(0-1)
        mahHeightRatio     = 0.6,                ---牌高度(0-1)
        mahFaceType       = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
        mahBackColorType       = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
        mahShapeType       = 2,                ---牌身(圆方)
        mahLightType       = 1,                ---牌面(亮暗)
    },
    [NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.ORANGE] = {
        mahFaceSizeRatio  = 0.72,
        mahThickRatio      = 0.2,
        mahHeightRatio     = 0.6,
        mahFaceType       = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_2,
        mahBackColorType       = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.YELLOW,
        mahShapeType       = 2,
        mahLightType       = 1,
    },
    ["default"] = {
        mahFaceSizeRatio  = 0.72,         ---牌花大小(0-1)
        mahThickRatio      = 0.2,                ---牌厚度(0-1)
        mahHeightRatio     = 0.6,                ---牌高度(0-1)
        mahFaceType       = NG.GAME.GameDefine.MAH_FACE_TYPE.FACE_2,                ---牌花(字体)
        mahBackColorType       = NG.GAME.GameDefine.MAH_BACK_COLOR_TYPE.GREEN,                ---牌背(颜色)
        mahShapeType       = 2,                ---牌身(圆方)
        mahLightType       = 1,                ---牌面(亮暗)
    },
}

return UIMahConfig3D