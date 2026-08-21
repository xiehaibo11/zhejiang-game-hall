
local ServerMainRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R
local NameStr = "三人两房"


local XZddMjIni = {
    ServerMainRule = ServerMainRule,
    GameType = g_gameConstant.GAME_TYPE_MJ,
    CoverTablePlayer = true, --有没有覆盖重写TablePlayer**的lua

    HelpImg = {
        {"bigImg/help_mj_3p2r_%d.png", 3, NameStr},
    },
    
    CreationViewTable = {
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R] = "newgold.MatchGames.subMjGame.xzddMjGame.lobby.GameCreationView3p2r",
    },

    -- Hown 是否添加托管机制，加的话，改状态要置为true，不然有些值无法过滤，具体玩法可以参照麻将
    tuoGuanTime = g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_MINI_TIME,

    GoldGameID = {
        name = NameStr,
        id = 2009,
    },

    LocalToServerMainRuleSMappingTable ={
    },

    WanfaCreateTable = {
        {
            {
                {g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R,                       {3} },

                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN          },   

                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN          },     
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN          },      
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_5_FAN          },      
                {g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_DI             },         
                {g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN            }, 

                {g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO   },  
                {g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO      },
                {g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI        },  
                {g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG     },  
                {g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU               }, 

                {g_gameConstant.GAME_SUB_RULE_MJ_DIAN_PAO_PING_HU         },  
                {g_gameConstant.GAME_SUB_RULE_MJ_DUI_DUI_HU_2_FAN         },  
                {g_gameConstant.GAME_SUB_RULE_MJ_JIA_XIN_WU               },   
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG             },  
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG          },  

                {g_gameConstant.GAME_SUB_RULE_AUTO_READY                  },
                {g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND       },
                {g_gameConstant.GAME_SUB_RULE_JIE_MEI_DUI                },
                {g_gameConstant.GAME_SUB_RULE_YI_TIAO_LONG               },
                {g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI            },

                {g_gameConstant.GAME_SUB_RULE_2_REN_WAN                  },
                {g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM},
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO},
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO},
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME},

                -- {g_gameConstant.GAME_PLAY_RULE_DELAY_NTF},
            },
        },
    },

         
 

    WanfaDescTable = {
        [ServerMainRule]      =   {NameStr, NameStr},

        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN]           =   {"2番", "勾选后，最高胡的番数为2番。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN]           =   {"3番", "勾选后，最高胡的番数为3番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN]           =   {"4番", "勾选后，最高胡的番数为4番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_5_FAN]           =   {"5番", "勾选后，最高胡的番数为4番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_DI]              =   {"自摸加底", "勾选后，加 1 底。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN]             =   {"自摸加番", "勾选后，加 1 番。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO]    =   {"点杠花（点炮）", "玩家胡牌后，从剩余牌堆中依次翻2只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO]       =   {"点杠花（自摸）", "玩家胡牌后，从剩余牌堆中依次翻4只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI]         =   {"幺九将对", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG]      =   {"门清中张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU]                =   {"天地胡", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_DIAN_PAO_PING_HU]          =   {"点炮可平胡", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_DUI_DUI_HU_2_FAN]          =   {"对对胡两番", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_JIA_XIN_WU]                =   {"夹心五", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG]              =   {"换三张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI]           =   {"听牌提示", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        
        [g_gameConstant.GAME_SUB_RULE_AUTO_READY]                   =   {"自动准备", "勾选后进入房间自动准备"},
        [g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND]        =   {"", "勾选后所有玩家同意才可解散。"},
        [g_gameConstant.GAME_SUB_RULE_JIE_MEI_DUI]        =   {"姊妹对", "勾选后，若玩家胡牌后手牌有连续三对的对子，则算姊妹对，额外加1番。"},
        [g_gameConstant.GAME_SUB_RULE_YI_TIAO_LONG]       =   {"一条龙", "勾选后若胡牌时手牌有同花色123、456、789的顺子则算1条龙，额外加1番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG]    =   {"换四张", "勾选后换四张牌。"},

        [g_gameConstant.GAME_SUB_RULE_2_REN_WAN]          =   {"2人玩法", "勾选后，2人即可开局。"},
        [g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM]  =   {"换三张动画", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO]           =   {"全局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO]            =   {"单局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME]       =   {"秒后托管(30~300)", "勾选后，换三张时播放动画。"},

        -- [g_gameConstant.GAME_PLAY_RULE_DELAY_NTF         ]            = { "延时提醒" , "注释"  },
    },
    
    QuickChatCfg = {
        {
            name="putonghua",
            prefix = "pth_player_speak_",
            fileSubPath = "",
            count = 12
        },
        {
            name="sichuanhua",
            prefix = "sch_player_speak_",
            fileSubPath = "",
            count = 18
        },
    },
}


return XZddMjIni