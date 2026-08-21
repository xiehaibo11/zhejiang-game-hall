local ViewAniConfig = {}

-- 弹窗动画名
ViewAniConfig.AniName = {
    NORMAL = 0, -- 通用弹窗爆开光效（黄色系）
}

-- 动画展示位置
ViewAniConfig.Pos = {
    BOTTOM = 0,
    LEFTTOP = 1,
    RIGHTTOP = 2,
    LEFTDOWN = 3,
    RIGHTDOWN = 4,
}

-- 打开弹窗配置
-- popJson 弹窗动画
-- btnJson 弹窗中各个按钮动画
ViewAniConfig.AniConfig = {
    [ViewAniConfig.AniName.NORMAL] = {
        {
            path = "res/animation/Lobby/Base/pop_ani_base/",
            aniName = "zzb_ty_tcbk2",
            aniMation = "animation",
            loop = false,
            pos = ViewAniConfig.Pos.BOTTOM,
        },
        {
            path = "res/animation/Lobby/Base/pop_ani_base/",
            aniName = "zzb_ty_taiyangguang2",
            aniMation = "animation",
            loop = true,
            pos = ViewAniConfig.Pos.LEFTTOP,
        },
        {
            popJson = "res/animation/Lobby/Base/pop_ani_base/zzb_ty_pop.json",
            animationName = "animation",
            boneName = "pop",
            slotName = "pop",
        },
        {
            btnJson = "res/animation/Lobby/Base/pop_ani_base/zzb_ty_btn.json",
            animationName = "animation",
            boneName = "btn",
            slotName = "btn",
        }
    }
}

return ViewAniConfig