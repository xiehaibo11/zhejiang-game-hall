local PromoteConfig = {
    [900023] = {
        AID = 3257,
        GAMEID = 30109,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[100],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"winLostType=\'1\';PayType=\'23\';lianZhuang=\'0\';duiDuiHuFourScore=\'0\';liaoDaZiBaoPai=\'0\';noShengPaiJieDuan=\'0\';buSiBao=\'0\';DelColor=\'0\';autoReady=\'1\';autoContinue=\'0\';maxQuanShu=\'4\';basescore=\'1\';ZhRule=\'不平搓,冠军消耗,自动准备,1\';TabeleColor=1;\",\"gameid\":30109,\"base\":1,\"tableCnt\":1,\"name\":\"台州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900038] = { -- 丽水
        AID = 3298,
        GAMEID = 30287,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        RULE = "wuzipai='1';",
        DELRULE = "wuzipai='0';",
        RULE_NAME = "广式麻将",
        DEFAULTRULE = "{\"cont\":[1],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"RoomType=\'0\';CanContinue=\'1\';betMahCount=\'0\';PayType=\'999\';PrevAA=1;Last4CanDianPao=\'1\';GangShangKaiHuaJiaBei=\'0\';GenPai=\'0\';HaiDiLaoYueJiaBei=\'0\';QiangGangHuJiaBei=\'0\';DelColor=\'0\';NoMix=\'1\';hasJoker=\'1\';wuzipai=\'1\';UserRule=\'AutoReady=false;\';IsSysTrust=\'0\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'自摸(平胡不可点炮),无马,平摊消耗,最后四张包牌,不洗牌,红中癞子,无字牌\';TabeleColor=1;\",\"gameid\":30287,\"base\":1,\"tableCnt\":1,\"name\":\"广式麻将无字牌\",\"nPlayerSize\":[4]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内广式麻将无字牌对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场广式麻将无字牌对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建广式麻将无字牌对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "广式麻将无字牌对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "广式麻将无字牌对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "广式麻将无字牌对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "广式麻将无字牌对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩1把广式麻将无字牌对局",
        userTitle2 = "每天玩6把广式麻将无字牌对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/promote_wzp_bt.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/promote_wzp_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行广式麻将无字牌对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建广式麻将无字牌对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建广式麻将无字牌对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖100场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900037] = { -- 温茶
        AID = 3264,
        GAMEID = 30314,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"BaseScore=\'0\';PayType=\'999\';PrevAA=1;HaveMDDi=\'1\';HaveGangSuanFen=\'0\';HaveGangShangHua=\'0\';NotHaveZhongFa=\'0\';HaveThreeBack=\'0\';HaveFollowMah=\'0\';BanQing=\'0\';QingYiSe=\'0\';DelColor=\'0\';JiaBei=\'0\';CanContinue=\'1\';ContinueKeepTime=\'3600\';ZhRule=\'普通1234,平摊消耗,买,顶底加倍,允许续桌\';TabeleColor=1;\",\"gameid\":30314,\"base\":0,\"tableCnt\":1,\"name\":\"温州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900017] = {
        AID = 3253,
        GAMEID = 30066, -- 熟客-温州麻将
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        NODENAME = "WuFengPai",
        RULE = "WuFengPai='1';",
        DELRULE = "WuFengPai='0';",
        RULE_NAME = "无风牌",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"PayType=\'0\';HaveGangSuanFen=\'0\';HaveGangShangHua=\'0\';HaveFollowMah=\'0\';BanQing=\'0\';QingYiSe=\'0\';DelColor=\'1\';NotHaveZhongFa=\'0\';HaveMDDi=\'1\';RandBanker=\'1\';GuoHuBuHu=\'0\';XianChiZhangDa=\'1\';WuFengPai=\'1\';SiLianBaoTing=\'0\';TimeoutTrustNew=\'0\';CanContinue=\'1\';ContinueKeepTime=\'3600\';ZhRule=\'冠军消耗,缺一色,随机庄(首局随机),无风牌,允许续桌\';TabeleColor=1;\",\"gameid\":30066,\"base\":1,\"tableCnt\":1,\"name\":\"温州麻将\",\"nPlayerSize\":[2]}	",
        teaView_ownerRightTitle_A = "活动期间，比赛场内创建无风牌玩法，每对局一场，即可获得z张房卡奖励，奖励次日可领",
        teaView_ownerLeftTitle_A ="活动期间，创建温州麻将无风牌玩法的桌子且完成y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，在温州麻将2/3/4人玩法中创建无风牌玩法桌且对局人数达10人",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "温州麻将新玩法，无风牌上线！",
        wxShareText = "温州麻将新玩法，无风牌，对局快速更刺激！现在体验还能领取超值奖励！！！",
        wxNotifyTitle = "温州麻将新玩法",
        wxNotifyText = "对局快还刺激，小伙伴已迫不及待，赶快去设置！",
        userTitle1 = "每天玩1把无风牌玩法",
        userTitle2 = "每天玩6把无风牌玩法",
        hallViewClickUserNum = 10,
        isFree = false,
        limitCnt = 4,
        imgTitle1="cocosStudio/hall/Image/Activity/Promote/tea/title_wfp.png",
        imgTitleUser1="cocosStudio/hall/Image/Activity/Promote/tea/title_user_wfp.png",
        TABLE_ICON="cocosStudio/TeaHouse/Image/Promote/promote_wfp_icon.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行勾选了无风牌的温州麻将对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建温州麻将无风牌的桌子且完成10场对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建无风牌玩法，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖200场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900021] = { -- 杭麻
        AID = 3271,
        GAMEID = 30145,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[4],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"playType=\'1\';isOpenJoker=\'0\';startBankerNum=\'3\';sanTanContract=\'0\';gameHuType=\'0\';PayType=\'22\';isQueYiMen=\'0\';isPungBuChow=\'0\';defenderLimit=\'0\';CanSanCai=\'0\';CanSiCai=\'0\';caiTiGang=\'1\';IsJokerBaoTou=\'0\';setPungAsChow=\'0\';isSuiJiFengWei=\'0\';shiFeng=\'1\';genZhuang=\'0\';AutoChange=\'0\';isWuZiPai=\'0\';CanAhead=\'0\';autoReady=\'0\';IsSysTrust=\'0\';basescore=\'1\';ZhRule=\'打局,白板财神,笃三老庄,不可吃三摊,自摸胡,平摊消耗,十风,1\';TabeleColor=1;\",\"gameid\":30145,\"base\":1,\"tableCnt\":1,\"name\":\"杭州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900043] = { -- 舟山 -- 没固定规则 todo
        AID = 3258,
        GAMEID = 30109,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        IGNORECREATE = true, -- 忽略寻找规则，因为没固定玩法
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[100],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"winLostType=\'1\';PayType=\'23\';lianZhuang=\'0\';duiDuiHuFourScore=\'0\';liaoDaZiBaoPai=\'0\';noShengPaiJieDuan=\'0\';buSiBao=\'0\';DelColor=\'0\';autoReady=\'1\';autoContinue=\'0\';maxQuanShu=\'4\';basescore=\'1\';ZhRule=\'不平搓,冠军消耗,自动准备,1\';TabeleColor=1;\",\"gameid\":30109,\"base\":1,\"tableCnt\":1,\"name\":\"台州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900008] = { -- 湖州
        AID = 3297,
        GAMEID = 30089,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        RULE = "",
        DELRULE = "",
        RULE_NAME = "杭州玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"ChengBaoType=\'1\';LaoZhuangType=\'0\';CaiShen=\'0\';CanDiscard=\'0\';PayType=\'22\';MustKaoXiang=\'0\';PengSuanTan=\'0\';CanCaiShenTiGang=\'0\';IsSysTrust=\'1\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'不可吃三摊,起手2倍,白板财,自摸胡,平摊消耗,自动托管\';TabeleColor=1;\",\"gameid\":30089,\"base\":1,\"tableCnt\":1,\"name\":\"杭州麻将\",\"nPlayerSize\":[4]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内杭州玩法对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场杭州玩法对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建杭州玩法对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "杭州玩法对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "杭州玩法对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "杭州玩法对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "杭州玩法对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩1把杭州玩法对局",
        userTitle2 = "每天玩6把杭州玩法对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/promote_hzmj_title_bt.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/promote_hzmj_user_title_2.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行杭州玩法对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建杭州玩法对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建杭州玩法对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖100场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900003] = { -- 衢州
        AID = 3270,
        GAMEID = 30016,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"RoomType=\'0\';PayType=\'23\';GrTurnBankerType=\'0\';DelColor=\'0\';IsSysTrust=\'1\';playerOptional=\'0\';countOptional=\'0\';IsJuMa=\'0\';ZhRule=\'段子胡,冠军消耗,自动托管\';TabeleColor=1;\",\"gameid\":30016,\"base\":1,\"tableCnt\":1,\"name\":\"衢州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900036] = { -- 瑞安
        AID = 3266,
        GAMEID = 30268,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"RoomType=\'1\';WinLostType=\'0\';PayType=\'0\';ModeType=\'0\';IsAddZijiaFeng=\'0\';IsAddEYiJieSan=\'0\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'3台封顶,50底,冠军消耗\';TabeleColor=1;\",\"gameid\":30268,\"base\":1,\"tableCnt\":1,\"name\":\"瑞安麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900020] = { -- 金华
        AID = 3269,
        GAMEID = 30100,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[998],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"dakun=\'1\';basescore=\'3\';fengding=\'0\';PayType=\'23\';sanchi=\'0\';qiuzhuang=\'0\';jokerback=\'0\';PrevCheat=\'0\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'打捆,3,6起庄,不封顶,冠军消耗\';TabeleColor=1;\",\"gameid\":30100,\"base\":3,\"tableCnt\":1,\"name\":\"金华麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900025] = { -- 宝宝
        AID = 3272,
        GAMEID = 30153,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"playType=\'1\';isOpenJoker=\'0\';startBankerNum=\'1\';gameHuType=\'0\';FengDingType=\'0\';PayType=\'23\';sanTanContract=\'0\';setPungAsChow=\'0\';IsJokerBaoTou=\'0\';defenderLimit=\'0\';CanSanCai=\'0\';CanSiCai=\'0\';caiTiGang=\'1\';isQueYiMen=\'0\';isPungBuChow=\'0\';unlimitChowAndPeng=\'0\';shiFeng=\'1\';genZhuang=\'0\';IsAutoReady=\'1\';isWuZiPai=\'0\';basescore=\'1\';ZhRule=\'打局,白板财神,平庄起,自摸胡,无,冠军消耗,十风,1\';TabeleColor=1;\",\"gameid\":30153,\"base\":1,\"tableCnt\":1,\"name\":\"杭州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900031] = { -- 乐清
        AID = 3267,
        GAMEID = 30220,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"FlowerSize=\'4\';QiFanCount=\'25\';PayType=\'23\';OnlyPeng=\'0\';ZouGangSi=\'0\';GameType=\'0\';ZhRule=\'虫草花,25台起翻,冠军消耗\';TabeleColor=1;\",\"gameid\":30220,\"base\":1,\"tableCnt\":1,\"name\":\"乐清麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900039] = { -- 青田
        AID = 3268,
        GAMEID = 30288,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[8],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"PingHuType=\'1\';PayType=\'23\';SiZhangBaoZhang=\'1\';ZiMoBeiShu=\'1\';YingQiaoHu=\'0\';DuiDuiHuFanTimes=\'0\';QingYiSeFanTimes=\'0\';QiDuiFanTimes=\'0\';HaoHuaQiDuiFanTimes=\'0\';DuDiaoFanTimes=\'0\';playerOptional=\'0\';countOptional=\'0\';ZhRule=\'点炮,冠军消耗,最后四张包牌\';TabeleColor=1;\",\"gameid\":30288,\"base\":1,\"tableCnt\":1,\"name\":\"放炮麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900006] = { -- 宁波 -- 无固定玩法 todo
        AID = 3263,
        GAMEID = 30109,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        IGNORECREATE = true, -- 忽略寻找规则，因为没固定玩法
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[100],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"winLostType=\'1\';PayType=\'23\';lianZhuang=\'0\';duiDuiHuFourScore=\'0\';liaoDaZiBaoPai=\'0\';noShengPaiJieDuan=\'0\';buSiBao=\'0\';DelColor=\'0\';autoReady=\'1\';autoContinue=\'0\';maxQuanShu=\'4\';basescore=\'1\';ZhRule=\'不平搓,冠军消耗,自动准备,1\';TabeleColor=1;\",\"gameid\":30109,\"base\":1,\"tableCnt\":1,\"name\":\"台州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900029] = { -- 余姚 -- 无固定玩法 todo
        AID = 3265,
        GAMEID = 30109,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        IGNORECREATE = true, -- 忽略寻找规则，因为没固定玩法
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[100],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"winLostType=\'1\';PayType=\'23\';lianZhuang=\'0\';duiDuiHuFourScore=\'0\';liaoDaZiBaoPai=\'0\';noShengPaiJieDuan=\'0\';buSiBao=\'0\';DelColor=\'0\';autoReady=\'1\';autoContinue=\'0\';maxQuanShu=\'4\';basescore=\'1\';ZhRule=\'不平搓,冠军消耗,自动准备,1\';TabeleColor=1;\",\"gameid\":30109,\"base\":1,\"tableCnt\":1,\"name\":\"台州麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [40165] = { -- 嘉兴
        AID = 3274,
        GAMEID = 30020,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[4],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"gamedID=\'30020\';gamedID=\'30020\';wuJiangYZM=\'0\';winLostLmt=\'12\';PayType=\'0\';openSanTan=\'0\';basescore=\'1\';isOpenJoker=\'1\';gameCamDiscard=\'0\';canChow=\'0\';taiTouHuQuanShu=\'0\';gameType=\'2\';openHuangFan=\'0\';followSanTan=\'0\';PrevCheat=\'0\';base=\'1\';ZhRule=\'硬自摸,嘉兴,12片,冠军消耗,1\';TabeleColor=1;\",\"gameid\":30020,\"base\":1,\"tableCnt\":1,\"name\":\"硬自摸\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    },
    [900046] = { -- 绍兴3D
        AID = 3275,
        GAMEID = 30412,
        HALLTIMES = 0, -- 大厅弹窗次数
        TEATIMES = 3, -- 比赛场弹窗次数
        TWOMODEALLGAME = true, -- 2人场且所有游戏
        RULE = "lianZhuang='0';",
        DELRULE = "lianZhuang='1';",
        RULE_NAME = "2人玩法",
        DEFAULTRULE = "{\"cont\":[4],\"bIsPlayerLock\":true,\"bIsCountLock\":true,\"type\":0,\"data\":\"nBaseFlower=1;PayType=\'23\';bBaoZiFanBei=0;bChaoYiJinShi=0;bForbiddenChi=0;isSuiJiFengWei=\'0\';DelColor=\'0\';PrevCheat=0;isAutoSit=1;autoReady=\'0\';nTrustTime=0;ZhRule=\'1花,冠军消耗,自动入座\';TabeleColor=1;\",\"gameid\":30412,\"base\":1,\"tableCnt\":1,\"name\":\"上虞花麻将\",\"nPlayerSize\":[2]}",
        teaView_ownerRightTitle_A = "活动期间，比赛场内2人模式对局一场，即可获得z张房卡奖励",
        teaView_ownerLeftTitle_A = "比赛场2人模式对局每日对局达y场对局，即可获得房卡奖励 奖励z房卡",
        teaView_ownerLeftNum_A = "房卡Xz",
        teaView_ownerLeftTitle_C = "活动期间，创建2人模式对局的桌子且完成10场对局即可获得房卡奖励",
        teaView_ownerLeftNum_C = "房卡X300",
        url = "https://downloadpage.bfnbgame.com/zhanlong/lishui/index.html",
        wxShareTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxShareText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyTitle = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        wxNotifyText = "2人模式对局，组局更快，对局更刺激，无作弊。快来创建玩法，小伙伴们等不及了！",
        userTitle1 = "每天玩2把2人模式对局",
        userTitle2 = "每天玩5把2人模式对局",
        hallViewClickUserNum = 10,
        isFree = false,
        imgTitle1 = "cocosStudio/hall/Image/Activity/Promote/tea/teahouse_title_4t2.png",
        imgTitleUser1 = "cocosStudio/hall/Image/Activity/Promote/tea/user_4t2_title.png",
        ActUserRule = [[1、活动期间，完成对局任务可获得一定奖励
2、玩家需要进行2人模式对局对局算作任务完成
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
        ActOwnerRule = [[1、活动期间，创建2人模式对局，即可获得房卡奖励。单个领队仅可领取一次，如有多个比赛场，累加计算。
2、活动期间，比赛场内创建2人模式对局，每对局一场，即可获得1张房卡奖励，单比赛场单日上限奖1000场。奖励需于第二日回到界面手动领取。
3、所有对局记录需要完整对局，提前解散的对局不计入任务进度]],
    }
}

return PromoteConfig