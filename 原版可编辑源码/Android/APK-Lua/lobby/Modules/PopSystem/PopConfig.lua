local PopConfig = {}

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
    -- {
    --     ViewName = "LaborDayGiftView",
    --     PopType = PopConfig.POP_TYPE.RANDOM,
    --     PopScenes = {1,2,3},
    --     Weight = 80
    -- }
}

-- 需要校验数据的弹窗，比如签到过后不再强弹签到界面
-- 值为”弹窗名字“,如果是有页签的弹窗则值为”弹窗名字_页签名字“
PopConfig.PopIsNeedCheckData = {
    "PrayActView",
    "TabsActivityView_everyDaySign",
    "TabsActivityView_personalGift",
    "TabsActivityView_prayAct",
    "LaborDayGiftView",
    "TeaHouseBusinessActView",
    --"DailyLuckyDrawView",
    "PersonalGiftPackView",
    "FourToTwoTeaPopView",
    "CreateTeaHouseView"
}

return PopConfig