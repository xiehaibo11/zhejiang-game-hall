
local ServerMainRule = g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD              -- Hown 游戏类型————主玩法
local NameStr = "血战到底"                  -- Hown 创建房间选择按钮标题


local XZddMjIni = {
    ServerMainRule = ServerMainRule,
    GameType = g_gameConstant.GAME_TYPE_MJ,
    CoverTablePlayer = true, --有没有覆盖重写TablePlayer**的lua

    HelpImg = {
        {"bigImg/help_mj_xxdd_%d.png", 3, NameStr},
    },
    
    CreationViewTable = {
        [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD] = "newgold.MatchGames.subMjGame.xzddMjGame.lobby.GameCreationView",      -- Hown 对应的csb创建面板中选择解析文件
    },

    -- Hown 托管时间，主要针对麻将。该值为托管初始的值
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
                -- 常规玩法所有选项
                {g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD,                       {4} },

                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN          },     
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN          },     
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN          },  
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_5_FAN          },  
                {g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_DI             }, 

                {g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN            }, 
                {g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO   }, 
                {g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO      }, 
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG             },  
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW         },  
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG             },
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW         },  

                {g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI        },  
                {g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG     },  
                {g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU               }, 
                {g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU      },
                {g_gameConstant.GAME_SUB_RULE_MJ_GUO_SHOU_PENG            },

                {g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM           },
                {g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI          }, 
                {g_gameConstant.GAME_SUB_RULE_AUTO_READY                  },

                {g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND       },
    
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO         },
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO          },
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME     },

                -- {g_gameConstant.GAME_PLAY_RULE_DELAY_NTF},
                
                
            },
        },
    },

    WanfaDescTable = {
        [ServerMainRule]      =   {NameStr, NameStr},
        -- 常规玩法所有选项说明
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN]           =   {"2番", "勾选后，最高胡的番数为2番。"},         -- 第一个数据为checkbox显示内容，第二个数据为该选项的解释信息
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN]           =   {"3番", "勾选后，最高胡的番数为3番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN]           =   {"4番", "勾选后，最高胡的番数为4番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_5_FAN]           =   {"5番", "勾选后，最高胡的番数为4番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_DI]              = 	{"自摸加底", "勾选后，加 1 底。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN]             =   {"自摸加番", "勾选后，加 1 番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_DIAN_PAO]    =   {"点杠花（点炮）", "玩家胡牌后，从剩余牌堆中依次翻2只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_DIAN_GANG_HUA_ZI_MO]       =   {"点杠花（自摸）", "玩家胡牌后，从剩余牌堆中依次翻4只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG]              =   {"换三张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG_NEW]          =   {"任意换三张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG]              =   {"换四张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_4_ZHANG_NEW]          =   {"任意换四张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},

        [g_gameConstant.GAME_SUB_RULE_MJ_YAO_JIU_JIANG_DUI]         =   {"幺九将对", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_MEN_QING_ZHONG_ZHANG]      =   {"门清中张", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_TIAN_DI_HU]                =   {"天地胡", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU]       =   {"放牛过庄胡", ""},
        [g_gameConstant.GAME_SUB_RULE_MJ_GUO_SHOU_PENG]             =   {"过手碰", "其他玩家打出一张牌，有玩家可碰，但是没碰，选择过，则在该玩家打出一张牌之前都不可以再碰同一张牌"},

        [g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM]            =   {"换三张动画", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI]           =   {"听牌提示", "玩家胡牌后，从剩余牌堆中依次翻6只鸟，若所抓鸟牌中，有1/5/9、红中则算中鸟，每中一鸟+1分。"},
        [g_gameConstant.GAME_SUB_RULE_AUTO_READY]                   =   {"自动准备", "勾选后进入房间自动准备"},
        
        [g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND]        =   {"", "勾选后所有玩家同意才可解散"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO]           =   {"全局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO]            =   {"单局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME]       =   {"秒后托管(30~300)", "勾选后，换三张时播放动画。"},

        -- [g_gameConstant.GAME_PLAY_RULE_DELAY_NTF         ]            = { "延时提醒" , "注释"  },
        --[g_gameConstant.GAME_SUB_RULE_FANG_NIU_GUO_ZHUANG_HU]        =   {"放牛过庄胡", ""},
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


return XZddMjIni �  