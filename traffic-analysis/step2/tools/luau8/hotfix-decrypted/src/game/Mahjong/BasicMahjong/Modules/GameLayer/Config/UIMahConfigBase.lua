local UIMahConfigBase = {}

UIMahConfigBase.RootPath = "cocosStudio/MahjongNew/MahLayer/Image/"

UIMahConfigBase.MahRenYiValue = 255 -- 任意牌的麻将牌值

--麻将牌颜色
UIMahConfigBase.MahColor = {
    Normal = cc.c3b(255,255,255),
    Selected = cc.c3b(255,201,170),
    SameValue = cc.c3b(255,201,170),
    Drag = cc.c3b(158,158,158),
    Limit = cc.c3b(119,121,125),
    ActionShader = cc.c3b(255,246,174),
    PreBao = cc.c3b(136,221,253),
}

UIMahConfigBase.MaxCombsCount = 6
UIMahConfigBase.MaxCombMahsCount = 8
UIMahConfigBase.CombAlignIndexConfig = {
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

UIMahConfigBase.MaxHandMahsCount = 17

-- 出牌动画配置
UIMahConfigBase.ChuPaiAniConfig = {
    [XH.XGSJ_PROP_ID.MAH_OUT] = {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/chupai/chupai.plist",
        fileName = "chupai_%05d.png",
        start = 0,
        endIdx = 19,
        interval = 0.05,
        scale = 2,
        loop = 1,
        endRemove = true,
    }
}

-- 胡牌动画配置上层
UIMahConfigBase.HuPaiAniUpConfig = {
    [XH.XGSJ_PROP_ID.MAH_HU] = {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/hupai/hupai.plist",
        fileName = "hupai_%05d.png",
        start = 0,
        endIdx = 16,
        interval = 0.1,
        scale = 1.25,
        loop = 1,
        endRemove = true,
    }
}

-- 胡牌动画配置下层
UIMahConfigBase.HuPaiAniDownConfig = {
    [XH.XGSJ_PROP_ID.MAH_HU] = {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/hupai/hupai_bottom.plist",
        fileName = "hupaiD_%05d.png",
        start = 0,
        endIdx = 16,
        interval = 0.1,
        scale = 1.25,
        loop = 1,
        endRemove = true,
    }
}

return UIMahConfigBase�	