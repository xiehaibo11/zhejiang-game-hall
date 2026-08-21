
local ServerMainRule = g_gameConstant.GAME_PLAY_RULE_SC_MZMJ
local NameStr = "绵竹麻将"


local XZddMjIni = {
    ServerMainRule = ServerMainRule,
    GameType = g_gameConstant.GAME_TYPE_MJ,
    CoverTablePlayer = true, --有没有覆盖重写TablePlayer**的lua

    HelpImg = {
        {"bigImg/help_mj_mz_%d.png", 1, NameStr},
    },
    
    CreationViewTable = {
        [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ] = "newgold.MatchGames.subMjGame.xzddMjGame.lobby.GameCreationViewMZ",
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
                {g_gameConstant.GAME_PLAY_RULE_SC_MZMJ,   {4, 3, 2} },

                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN    },
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN    },
                {g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN    },
                
                {g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN      },

                {g_gameConstant.GAME_SUB_RULE_MENQING               },
                
                {g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG       },
                {g_gameConstant.GAME_SUB_RULE_3_REN_WAN             },
                {g_gameConstant.GAME_SUB_RULE_2_REN_WAN             },
                
                {g_gameConstant.GAME_SUB_RULE_MENQING_KE_JIEPAO     },
                {g_gameConstant.GAME_SUB_RULE_PINGHU_KE_JIEPAO      },
                
                {g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI    },
                {g_gameConstant.GAME_SUB_RULE_AUTO_READY            },
                {g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM     },
                {g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND },
                
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO   },
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO    },
                {g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME},

                -- {g_gameConstant.GAME_PLAY_RULE_DELAY_NTF},
            },
        },
    },

         
 

    WanfaDescTable = {
        [ServerMainRule]      =   {NameStr, NameStr},

        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_2_FAN]        =   {"2番", "勾选后，最高胡的番数为2番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_3_FAN]        =   {"3番", "勾选后，最高胡的番数为3番。"},
        [g_gameConstant.GAME_SUB_RULE_MJ_FENG_DING_4_FAN]        =   {"4番", "勾选后，最高胡的番数为4番。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_ZI_MO_JIA_FAN]          =   {"自摸翻番", "勾选后，自摸胡牌，翻番。"},
        
        [g_gameConstant.GAME_SUB_RULE_MENQING]                   =   {"门清", "勾选后，门清有番。"},
        
        [g_gameConstant.GAME_SUB_RULE_MJ_HUAN_3_ZHANG]      =   {"换三张", "勾选后，房间为四人玩法，有换三张和定缺。"},
        [g_gameConstant.GAME_SUB_RULE_3_REN_WAN]            =   {"三人玩", "勾选后，2人即可开局。"},
        [g_gameConstant.GAME_SUB_RULE_2_REN_WAN]            =   {"二人玩", "勾选后，3人即可开局。"},
        
        [g_gameConstant.GAME_SUB_RULE_MENQING_KE_JIEPAO]    =   {"门清可接炮", "勾选后，门清时平胡可接炮。"},
        [g_gameConstant.GAME_SUB_RULE_PINGHU_KE_JIEPAO]     =   {"平胡可接炮", "勾选后，平胡可接炮。"},
                
        [g_gameConstant.GAME_SUB_RULE_MJ_TING_PAI_TI_SHI]       =   {"听牌提示", "勾选后，有听牌提示。"},
        [g_gameConstant.GAME_SUB_RULE_AUTO_READY]               =   {"自动准备", "勾选后进入房间自动准备"},
        [g_gameConstant.GAME_SUB_RULE_HUAN_3_ZHANG_ANIM]        =   {"换三张动画", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND]    =   {"", "勾选后所有玩家同意才可解散。"},
        
        
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_QUAN_TUO]      =   {"全局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO]       =   {"单局托管", "勾选后，换三张时播放动画。"},
        [g_gameConstant.GAME_CREATE_ROOM_RULE_MJ_DAN_TUO_TIME]  =   {"秒后托管(30~300)", "勾选后，换三张时播放动画。"},

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


    
if G_IS_TEST and device.platform == "windows" then
    XZddMjIni.WanfaDescTable[g_gameConstant.GAME_OPT_MJ_DING_QUE] = {"定缺", "勾选后，换三张时播放动画。"}
end

return XZddMjIni