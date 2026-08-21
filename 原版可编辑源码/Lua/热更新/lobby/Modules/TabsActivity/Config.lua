local TabsActivityConfig = {}

TabsActivityConfig.NewTaskSystem = {
    [XH.LOBBY_ID.TAIZHOU] = 1,
    [XH.LOBBY_ID.SHAOXING] = 1,
    [XH.LOBBY_ID.YUEQING] = 1,
    [XH.LOBBY_ID.HUZHOU] = 1,
    [XH.LOBBY_ID.NINGBO] = 1,
    [XH.LOBBY_ID.YUYAO] = 1,
    [XH.LOBBY_ID.RUIAN] = 1,
    [XH.LOBBY_ID.HANGMAQUAN] = 1,
    [XH.LOBBY_ID.BAOBAO] = 1,
    [XH.LOBBY_ID.SHUKE] = 1,
    [XH.LOBBY_ID.JIAXING] = 1,
    [XH.LOBBY_ID.JINHUA] = 1,
    [XH.LOBBY_ID.QUZHOU] = 1,
}

TabsActivityConfig.NewUserSignInActConfig = {

    [XH.LOBBY_ID.WENZHOU] = 1,
    [XH.LOBBY_ID.HANGMAQUAN] = 1,
    [XH.LOBBY_ID.HUZHOU] = 1,
    [XH.LOBBY_ID.TAIZHOU] = 1,
    [XH.LOBBY_ID.LISHUI] = 1,
    [XH.LOBBY_ID.SHUKE] = 1,
    [XH.LOBBY_ID.QUZHOU] = 1,
    [XH.LOBBY_ID.RUIAN] = 1,
    [XH.LOBBY_ID.YUEQING] = 1,
    [XH.LOBBY_ID.QINGTIAN] = 1,
    [XH.LOBBY_ID.JIAXING] = 1,
    [XH.LOBBY_ID.SHAOXING] = 1,
    [XH.LOBBY_ID.JINHUA] = 1,
    [XH.LOBBY_ID.NINGBO] = 1,
    [XH.LOBBY_ID.YUYAO] = 1,
    [XH.LOBBY_ID.ZHOUSHAN] = 1,
    [XH.LOBBY_ID.BAOBAO] = 1,
    [XH.LOBBY_ID.SHAOXING3D] = 0,
    
}

TabsActivityConfig.TaskRecordLogin = {
    [XH.LOBBY_ID.QINGTIAN] = 1,
    [XH.LOBBY_ID.SHAOXING] = 1,
    [XH.LOBBY_ID.YUEQING] = 1,
    [XH.LOBBY_ID.HUZHOU] = 1,
    [XH.LOBBY_ID.SHUKE] = 1,
    [XH.LOBBY_ID.NINGBO] = 1,
    [XH.LOBBY_ID.YUYAO] = 1,
    [XH.LOBBY_ID.RUIAN] = 1,
    [XH.LOBBY_ID.HANGMAQUAN] = 1,
    [XH.LOBBY_ID.BAOBAO] = 1,
    [XH.LOBBY_ID.JIAXING] = 1,
    [XH.LOBBY_ID.JINHUA] = 1,
    [XH.LOBBY_ID.ZHOUSHAN] = 1,
	[XH.LOBBY_ID.LISHUI] = 1,
    [XH.LOBBY_ID.QUZHOU] = 1,
}

TabsActivityConfig.actsPath = {
    ["SHAREFORCARD"] = { path = "lobby.Modules.TabsActivity.ShareHmqNode" },
    ["LUCKYTURNTABLE"] = { path = "lobby.Modules.TabsActivity.LuckyTurnTableNode" },
    ["TASKSYS"] = { path = "lobby.Modules.TabsActivity.TaskNode" },
    ["NEWUSERSIGN"] = { path = "lobby.Modules.TabsActivity.NewUserSignInNode" },
    ["DAILYSIGN"] = { path = "lobby.Modules.ToponAct.ToponDailySignView" },
    ["LUCKYTASK"] = { path = "lobby.Modules.TabsActivity.CommonActView" },
    ["ANTI_HACK"] = { path = "lobby.Modules.TabsActivity.CommonActView" },
    ["PERSONALGIFT"] = { path = "lobby.Modules.PersonalGiftPack.View"--[[, param = {closeToPos = send:getTouchBeganPosition()} ]]},
    -- ["FREEDRAW"] = { path = "lobby.Modules.TabsActivity.TabFreeDrawView" },
    ["FREEDRAW"] = { path = "lobby.Modules.DailyLuckyDraw.View", scale = 0.75},
    ["DAILYFORYUNE"] = { path = "lobby.Modules.TabsActivity.TabPrayActView" },
    ["BACKGIFT"] = { path = "lobby.Modules.BackActivity.View" },
    ["VIPGIFT"] = { path = "lobby.Modules.NewVip.View" },
    ["TOPONPHONEFEE"] = { path = "lobby.Modules.ToponAct.ToponPhoneFeeView" },
    ["UNIUNGAME"] = { path = "lobby.Modules.UniunGame.View"},
    ["REXUEUNIUNGAME"] = { path = "lobby.Modules.UniunGame.ReXueView"},
    ["NEWPLAYTYPEDRAW"] = { path = "lobby.Modules.TabsActivity.NewPlayTypeDrawNode" },
    ["LZDDZ"] = { path = "lobby.Modules.TabsActivity.NewGoldNode" },
    ["FANZHA"] = { path = "lobby.Modules.TabsActivity.FanZhaNode" },
    ["RRBY"] = { path = "lobby.Modules.TabsActivity.RRBYNode" },
    ["GAMECENTER"] = { path = "lobby.Modules.TabsActivity.GameCenterAdNode" },
}

TabsActivityConfig.LobbyActConfig = 
{
    --丽水
    [XH.LOBBY_ID.LISHUI] = 
    {
        ["appid"] = 10000,
        ["secret"] = "7dc04cecd8896d8211768321358e2228",
    },
    --温茶
    [XH.LOBBY_ID.WENZHOU] = 
    {
        ["appid"] = 10001,
        ["secret"] = "9d3d1dc3694b7bab91b2a9c56a792395",
    },
    --熟客
    [XH.LOBBY_ID.SHUKE] = 
    {
        ["appid"] = 10005,
        ["secret"] = "147461e4c4af7159c59c70e0ec17ff16",
    },
    --杭麻
    [XH.LOBBY_ID.HANGMAQUAN] = 
    {
        ["appid"] = 10006,
        ["secret"] = "93b8e3f475b69a8f1511dee024073e2f",
    },
    --湖州
    [XH.LOBBY_ID.HUZHOU] = 
    {
        ["appid"] = 10010,
        ["secret"] = "1bfed3d3fa6a776bb17f7c926ea4fe01",
    },
    --衢州
    [XH.LOBBY_ID.QUZHOU] = 
    {
        ["appid"] = 10016,
        ["secret"] = "8xylfc0p6evzihq7n5k3tudgwa9jbs24",
    },
    --瑞安
    [XH.LOBBY_ID.RUIAN] = 
    {
        ["appid"] = 10002,
        ["secret"] = "53a2d0b191a9a6b8c0e07ccb7b949562",
    },
    --乐清
    [XH.LOBBY_ID.YUEQING] = 
    {
        ["appid"] = 10004,
        ["secret"] = "6d72614565c05f530f85907d6d6a1d80",
    },
    -- 青田
    [XH.LOBBY_ID.QINGTIAN] = 
    {
        ["appid"] = 10003,
        ["secret"] = "54472a4ad2052d481f0b17e9c9050ffe",
    },
    -- 嘉兴
    [XH.LOBBY_ID.JIAXING] = 
    {
        ["appid"] = 10007,
        ["secret"] = "2d315b29c5b3f69193c33debdf0a24b5",
    },
    --绍兴
    [XH.LOBBY_ID.SHAOXING] = 
    {
        ["appid"] = 10008,
        ["secret"] = "6996e2f53835efd291315a6c7f09218a",
    },
    -- 浙中金华
    [XH.LOBBY_ID.JINHUA] = 
    {
        ["appid"] = 10009,
        ["secret"] = "753825079f8441387576b189b0880854",
    },
    --宝宝
    [XH.LOBBY_ID.BAOBAO] = 
    {
        ["appid"] = 10022,
        ["secret"] = "b2b73878887f67144b44bd80c81ece5d",
    },
    --宁波
    [XH.LOBBY_ID.NINGBO] = 
    {
        ["appid"] = 10020,
        ["secret"] = "dd11ad3ae19738ed648588b34065a61b",
    },
    -- 余姚
    [XH.LOBBY_ID.YUYAO] = 
    {
        ["appid"] = 10019,
        ["secret"] = "d25bcfc510859e757671d7d13dd12ec2",
    },
     -- 舟山
    [XH.LOBBY_ID.ZHOUSHAN] = 
    {
        ["appid"] = 10025,
        ["secret"] = "77bf2b2ddf6d5a4e1c54c88514c3bdc6",
    },
     --台州 
    [XH.LOBBY_ID.TAIZHOU] = 
    {
        ["appid"] = 10011,
        ["secret"] = "ca5ec0239fc8e45a969a0954871e8cb0",
    },
     --绍兴棋牌
    [XH.LOBBY_ID.SHAOXING3D] = 
    {
        ["appid"] = 10030,
        ["secret"] = "b52bd3f23f6d5a4e1ccd61de87e7c325",
    },
}

TabsActivityConfig.ActTabListNames = {
    {
        NameStr = "登录有礼",
        NameImg = "activityTitle_text_dengluyouli.png"
    },
    {
        NameStr = "分享送房卡",
        NameImg = "activityTitle_text_fenxiangsongfangka.png"
    },
    {
        NameStr = "复古三职业",
        NameImg = "activityTitle_text_fugusanzhiye.png"
    },
    {
        NameStr = "福利任务",
        NameImg = "activityTitle_text_fulirenwu.png"
    },
    {
        NameStr = "回归礼包",
        NameImg = "activityTitle_text_huiguilibao.png"
    },
    {
        NameStr = "会员好礼",
        NameImg = "activityTitle_text_huiyuanhaoli.png"
    },
    {
        NameStr = "看广告领话费",
        NameImg = "activityTitle_text_kanguanggaolinghuafei.png"
    },
    {
        NameStr = "每日运势",
        NameImg = "activityTitle_text_meiriyunshi.png"
    },
    {
        NameStr = "免费抽奖",
        NameImg = "activityTitle_text_mianfeichoujiang.png"
    },
    {
        NameStr = "特惠商城",
        NameImg = "activityTitle_text_tehuishangcheng.png"
    },
    {
        NameStr = "幸运转盘",
        NameImg = "activityTitle_text_xingyunzhuanpan.png"
    },
    {
        NameStr = "新手签到",
        NameImg = "activityTitle_text_xinshouqiandao.png"
    },
}

return TabsActivityConfig