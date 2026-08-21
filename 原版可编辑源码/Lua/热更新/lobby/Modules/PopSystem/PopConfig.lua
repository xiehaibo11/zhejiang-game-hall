local PopConfig = {}

-- 弹窗动画列表
-- 可配参数
-- midSize 中间点击区域 cc.size(1,2)
-- closePos 关闭按钮位置 cc.p(1,2)
PopConfig.POP_ANI_CONFIG = {
    -- 资源删了，后面新出更换
    -- ["RENRENBUYU"] = {
    --     path = "",
    --     ske = "animation/Lobby/Base/zzb_dt_bosslx/zzb_dt_bosslx.atlas",
    --     tex = "animation/Lobby/Base/zzb_dt_bosslx/zzb_dt_bosslx.json",
    --     armatureName = "cx",
    --     scale = 1,
    --     loop = false,
    --     lastArmatureName = "loop",
    -- },
    ["openSxvip"] = {
        path = "",
        ske = "animation/Lobby/Base/zzb_hy_banner/zzb_hy_banner.atlas",
        tex = "animation/Lobby/Base/zzb_hy_banner/zzb_hy_banner.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
        closePos = cc.p(1700, 960),
        midSize = cc.size(1400, 960)
    },
    ["CHANGECARD"] = {
        path = "",
        ske = "animation/Lobby/Base/zzb_dtxc_huanpai/zzb_dtxc_huanpai.atlas",
        tex = "animation/Lobby/Base/zzb_dtxc_huanpai/zzb_dtxc_huanpai.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
        closePos = cc.p(1700, 960),
    },
    ["XIAGUANG"] = {
        path = "",
        ske = "animation/Common/xiaguangshengjing/zzb_dt_xgtc.atlas",
        tex = "animation/Common/xiaguangshengjing/zzb_dt_xgtc.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
        closePos = cc.p(1700, 960),
    },
    ["ZUOJIA"] = {
        path = "",
        ske = "animation/Common/xiaguangshengjing/zzb_dt_xgtc.atlas",
        tex = "animation/Common/xiaguangshengjing/zzb_dt_xgtc.json",
        armatureName = "cx",
        scale = 1,
        loop = false,
        lastArmatureName = "loop",
        closePos = cc.p(1700, 960),
    }
}

-- 弹窗类型
PopConfig.POP_TYPE = {
    FIX = 0, --固定
    RANDOM = 1, --随机
}

PopConfig.SCENE_TYPE = {
    NONE = 0,
    LOBBY = 1, -- 大厅
    GOLD = 2, -- 金币场大厅
    TEA = 3, -- 比赛场大厅
    MATCH = 4,
}

-- 单个web配置的按钮配置数据结构
PopConfig.WebSingleBtnConf =
{
    imageUrl = "",
    link = "",
    width = 0,
    height = 0,
    posX = 0,
    posY = 0,

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end
}

-- 单个web配置的界面数据结构
PopConfig.WebSingleConf =
{
    imageUrl = "",
    name = "",
    btns = {}, --按钮资源，放置WebSingleBtnConf对象
    shareImg = "",
    isFull = false,

    new = function( self, o )
        o = o or {}
        setmetatable( o, { __index = self })
        return o
    end
}

-- 所有区都生效并且不会频繁改动的配置可以考虑放客户端
-- ViewName 在ViewsConfig中配置的弹窗名
-- PopType 弹窗类型 固定or随机
-- Weight 权重，随机时生效
-- PopScenes 弹出的场景，可配多个
-- SelectTag 有页签的弹窗可以控制具体显示哪个页签
PopConfig.ClientPopList = {
}

-- 需要校验数据的弹窗，比如签到过后不再强弹签到界面
-- 值为”弹窗名字“,如果是有页签的弹窗则值为”弹窗名字_页签名字“
PopConfig.PopIsNeedCheckData = {
    "PrayActView",
    "TabsActivityView_everyDaySign",
    "TabsActivityView_personalGift",
    "TabsActivityView_prayAct",
    "PersonalGiftPackView",
}

PopConfig.LianYunLinks = {
    BUYU = true,
    LEGEND = true,
    KNIFELEGEND = true,
    DATIANSHIZHIJIAN = true,
    LINGMENGZHIBO = true,
    REXUEFENGSHEN = true,
    DOULUODALU = true,
    JIEJISANGUO = true,
    SHEISHISHOUFU = true,
    WEIJINGCHUANQI = true,
    ZHUOYUECHUANSHUO = true,
    YUANZHENGJIANGSHI = true,
    RONGYAOZHINU = true,
    BAIZHANSHACHENG = true,
    HUANXIANGMINGJIANGLU = true,
    SHENYUANQIYUE = true,
    FUMOZHANGE = true,
    BAZHETIANXIA = true,
    LONGJIZHICHENG = true,
}

PopConfig.IopLianYunGameNameTransfer = {
    renrenbuyu = "RENRENBUYU",
    JUEZHANSHAYI = "LEGEND", --LEGEND
    YIDAOCHUANSHI = "KNIFELEGEND", --KNIFELEGEND
    juezhanshayi = "LEGEND", --LEGEND
    yidaochuanshi = "KNIFELEGEND", --KNIFELEGEND
    datianshizhijian = "DATIANSHIZHIJIAN",
    rexuefengshen = "REXUEFENGSHEN",
    weijingchuanqi = "WEIJINGCHUANQI",
    zhuoyuechuanshuo = "ZHUOYUECHUANSHUO",
    rongyaozhinu = "RONGYAOZHINU",
    baizhanshacheng = "BAIZHANSHACHENG",
    huanxiangmingjiang = "HUANXIANGMINGJIANGLU",
    shenyuanqiyue = "SHENYUANQIYUE",
    fumozhange = "FUMOZHANGE",
    bazhetianxia = "BAZHETIANXIA",
    longjizhicheng = "LONGJIZHICHENG",
}

PopConfig.RRBYLinks = {
    RENRENBUYU = true,
}

return PopConfig