local PromoteConfig = {
    [900038] = {
        -- 推广活动配置
        AID = 3143,
        GAMEID = 30287,
        HALLTIMES = 3, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        NODENAME = "hasJoker",
        RULE = "hasJoker='1';",
        DELRULE = "hasJoker='0';",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"RoomType=\'0\';CanContinue=\'1\';betMahCount=\'0\';PayType=\'23\';Last4CanDianPao=\'1\';GangShangKaiHuaJiaBei=\'0\';GenPai=\'0\';HaiDiLaoYueJiaBei=\'0\';QiangGangHuJiaBei=\'0\';DelColor=\'0\';NoMix=\'1\';hasJoker=\'1\';UserRule=\'AutoReady=false;\';IsSysTrust=\'0\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'自摸(平胡不可点炮),无马,冠军消耗,最后四张包牌,不洗牌,红中癞子\';TabeleColor=5;\",\"gameid\":30287,\"base\":1,\"tableCnt\":1,\"name\":\"广式麻将\",\"nPlayerSize\":[2,4]}",
        teaView_ownerLeftTitle_A = "活动期间，在广式麻将2/3/4人玩法中创建红中癞子桌且对局5场",
        teaView_ownerLeftNum_A = "房卡X66",
        teaView_ownerLeftTitle_C = "活动期间，在广式麻将2/3/4人玩法中创建红中癞子桌且对局人数达10人",
        teaView_ownerLeftNum_C = "房卡X66",
        url = "https://weixinhlmj.37gjw.com/zhanlong/lishui/index.html",
        wxShareTitle = "广式麻将新玩法，红中癞子上线！",
        wxShareText = "广式麻将新玩法，红中癞子，对局快速更刺激！现在体验还能领取超值奖励！！！",
        wxNotifyTitle = "广式麻将新玩法",
        wxNotifyText = "对局快还刺激，小伙伴已迫不及待，赶快去设置！",
        hallViewClickUserNum = 10,
        isFree = false
    }
}

return PromoteConfig
