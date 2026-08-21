local UIMahConfigBase = {}

UIMahConfigBase.RootPath = "cocosStudio/MahjongNew/MahLayer/Image/"

UIMahConfigBase.MahRenYiValue = 255 -- 任意牌的麻将牌值

--麻将牌颜色
UIMahConfigBase.MahColor = {
    Normal = cc.c3b(255,255,255),
    Selected = cc.c3b(255,201,170),
    SameValue = cc.c3b(255,201,170),
    Drag = cc.c3b(158,158,158),
    Limit = cc.c3b(200,200,200),
    ActionShader = cc.c3b(255,246,174),
    PreBao = cc.c3b(250,178,38),
}

UIMahConfigBase.MaxCombsCount = 6
UIMahConfigBase.MaxCombMahsCount = 8
UIMahConfigBase.CombAlignIndexConfig = {
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

UIMahConfigBase.MaxHandMahsCount = 17

return UIMahConfigBase