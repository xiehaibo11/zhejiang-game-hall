local _M = {}

local ROOTACTIONPATH = "Match/spine/xzddGame/"

_M.ACTION_BUTTON        = 1         -- 按钮特效
_M.SELECTINGSTATE       = 2         -- 选缺中
_M.SELECTEDSTATE        = 3         -- 已选缺
_M.SELECTINGCARD        = 4         -- 选牌中
_M.SELECTEDCARD         = 5         -- 已选牌

_M.EXPORTJSON = {
    [_M.ACTION_BUTTON] = {
        base = ROOTACTIONPATH.."button/button_effects0",
        path = ROOTACTIONPATH.."button/button_effects.ExportJson",
        name = "button_effects",
    },
}


-- 选缺时加载的csb文件
_M.CSBACTION = {
    [_M.SELECTINGSTATE] = {
        path = "Match/xuezhanGame/Actions/TxtAction_Selecting.csb"
    },
    [_M.SELECTEDSTATE] = {
        path = "Match/xuezhanGame/Actions/TxtAction_Selected.csb"
    },
    [_M.SELECTINGCARD] = {
        path = "Match/xuezhanGame/Actions/TxtAction_SelectCarding.csb"
    },
    [_M.SELECTEDCARD] = {
        path = "Match/xuezhanGame/Actions/TxtAction_SelectedCard.csb"
    }
}

--

_M.XUANQUEIMGPLISTPATH = {
    [g_gameConstant.GAME_QUE_COLOUR_WAN]    = {                     -- 索引万的图片路径
        big     = "Match/xuezhanGame/Images/big_wan_img.png",             -- 大图标
        small   = "Match/xuezhanGame/Images/que_icon_wan.png",            -- 小图标
    },
    [g_gameConstant.GAME_QUE_COLOUR_TONG]   = {                     -- 索引筒的图片路径
        big     = "Match/xuezhanGame/Images/big_tong_img.png",            -- 大图标
        small   = "Match/xuezhanGame/Images/que_icon_tong.png",           -- 小图标
    },
    [g_gameConstant.GAME_QUE_COLOUR_TIAO]   = {                     -- 索引条的图片路径
        big     = "Match/xuezhanGame/Images/big_tiao_img.png",            -- 大图标
        small   = "Match/xuezhanGame/Images/que_icon_tiao.png",           -- 小图标
    },
}


-- 血战胡牌
_M.XZZIMOINDEX              = 1                 -- 自摸胡
_M.XZHUINDEX                = 2                 -- 放炮胡
_M.XZHUJIAOZHUANGYIINDEX    = 3                 -- 呼叫转移
_M.XZGUAFENGINDEX           = 4                 -- 刮风 
_M.XZXIAYUINDEX             = 5                 -- 下雨
_M.XZYIPAODUOXIANGINDEX     = 6                 -- 一炮多响
_M.XZWEITINGPAIINDEX        = 7                 -- 未听牌
_M.XZQIANGGANGHUINDEX       = 8                 -- 抢杠胡

_M.XZHUCSBCONFIG = {
    [_M.XZZIMOINDEX] = {
        path = "Match/animation/xz_zimo.csb",
        format = "Match/xuezhanGame/Images/xz_zimo_hu_%d.png"
    },
    [_M.XZHUINDEX] = {
        path = "Match/animation/xz_hu.csb",
        format = "Match/xuezhanGame/Images/xz_hu_%d.png"
    },
    [_M.XZHUJIAOZHUANGYIINDEX] = {
        path = "Match/animation/xz_hu.csb",
        format = "Match/xuezhanGame/Images/hujiaozhuanyi.png"
    },
    [_M.XZGUAFENGINDEX] = {
        path = "Match/animation/guafeng.csb",
        scale = 0.76,
    },
    [_M.XZXIAYUINDEX] = {
        path = "Match/animation/xiayu.csb",
        scale = 0.76,
    },
    [_M.XZYIPAODUOXIANGINDEX] = {
        path = "Match/animation/xz_hu.csb", 
        format = "Match/xuezhanGame/Images/hujiaozhuanyi.png"
    },
    [_M.XZWEITINGPAIINDEX] = {
        path = "Match/animation/xz_hu.csb", 
        format = "Match/xuezhanGame/Images/weitingpai.png"
    },
    [_M.XZQIANGGANGHUINDEX] = {
        path = "Match/animation/xz_hu.csb", 
        format = "Match/xuezhanGame/Images/qinggang_img.png"
    },
}

-------------------- 断勾卡

_M.ACTION_D_BAO_QING        = 12                -- 报请
_M.ACTION_D_GANG            = 13
_M.ACTION_D_LIU_JU          = 14
_M.ACTION_D_GUO             = 15
_M.ACTION_D_PENG            = 16
_M.ACTION_D_QING            = 17
_M.ACTION_D_ZHUA_BAO_QING   = 18                -- 抓报请
_M.ACTION_D_CHI             = 19

_M.ACTION_D_DIAN_PAO        = g_gameConstant.DUAN_GOU_KA_HU_INFO_DIANPAO
_M.ACTION_D_HU              = g_gameConstant.DUAN_GOU_KA_HU_INFO_NORMAL
_M.ACTION_D_BAO_HU          = g_gameConstant.DUAN_GOU_KA_HU_INFO_BAOHU
_M.ACTION_D_QING_HU         = g_gameConstant.DUAN_GOU_KA_HU_INFO_QINGHU
_M.ACTION_D_GANG_SHANG_HUA  = g_gameConstant.DUAN_GOU_KA_HU_INFO_GANGSHANGHUA
_M.ACTION_D_ZHUA_QING_HU    = g_gameConstant.DUAN_GOU_KA_HU_INFO_ZHUAQINGHU
_M.ACTION_D_ZHUA_BAO_HU     = g_gameConstant.DUAN_GOU_KA_HU_INFO_ZHUABAOHU
_M.ACTION_D_GANG_SHANG_PAO  = g_gameConstant.DUAN_GOU_KA_HU_INFO_GANGSHANGPAO
_M.ACTION_D_ZI_MO           = g_gameConstant.DUAN_GOU_KA_HU_INFO_ZIMO
_M.ACTION_D_DI_HU           = g_gameConstant.DUAN_GOU_KA_HU_INFO_DIHU
_M.ACTION_D_TIAN_HU         = g_gameConstant.DUAN_GOU_KA_HU_INFO_TIANHU

return _Mu