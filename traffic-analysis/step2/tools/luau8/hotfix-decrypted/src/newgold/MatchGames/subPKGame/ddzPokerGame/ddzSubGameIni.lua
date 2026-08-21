
local ServerMainRule = g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ
local NameStr = "斗地主"


local HNzzMjIni = {
    ServerMainRule = ServerMainRule, --主玩法id
    GameType = g_gameConstant.GAME_TYPE_POKER,
    CoverTablePlayer = true,        --有没有覆盖重写TablePlayer**的lua


    HelpImg = {
        {"bigImg/ddz_help_%d.png", 2, NameStr},
    },
    
    CreationViewTable = { --房间创建界面 如果需要拆成多个入口时，key为Client_local_main_rule，此时LocalToServerMainRuleSMappingTable必须填
        [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ] = "newgold.MatchGames.subPKGame.ddzPokerGame.lobby.GameCreationView",
    },

    GoldGameID = {      --暂时没有金币场
        -- name = NameStr,
        -- id = 2009,
    },

    LocalToServerMainRuleSMappingTable ={--当一个主玩法id在客户端要拆aaa多个入口的时候填这里
        --[Client_local_main_rule] = Server_main_rule,
    },

    WanfaCreateTable = {--创建房间选项的顺序，
        {
            -- creationViewKind = 2, --创建页放到第几个子页
            {
                 {ServerMainRule,                                        {3} }, --第二个元素代表可选人数，第二个参数为nil时代表默认{4, 3, 2}
                 {g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_16_BEI,          },         -- 16倍封顶
                 {g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_32_BEI,          },         -- 32倍封顶
                 {g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_64_BEI,          },         -- 64倍封顶
                 {g_gameConstant.GAME_SUB_PK_RULE_FIRST_RANDOM_LANDLORD,     },         -- 随机首叫
                 {g_gameConstant.GAME_SUB_PK_RULE_SAN_DA_BI_ZHUA,            },         -- 三大必抓
                 {g_gameConstant.GAME_SUB_PK_RULE_SI_DAI_ER,                 },         -- 四带二
                 {g_gameConstant.GAME_SUB_PK_RULE_SAN_DAI_DUI,               },         -- 三带二
                 {g_gameConstant.GAME_SUB_PK_RULE_SAN_BU_DAI,                },         -- 三张
                 {g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND,        },
                 {g_gameConstant.GAME_SUB_RULE_AUTO_READY,                   },         -- 自动准备
                 {g_gameConstant.DDZ_RULE_JIAO_FEN,          },
                 {g_gameConstant.DDZ_RULE_JIAO_DIZHU,        },
                 {g_gameConstant.DDZ_RULE_UNCHANGED,        },
                 {g_gameConstant.DDZ_RULE_JIA_BEI,           },
            },
        },
    },
    


    WanfaDescTable = {--玩法选项描述
        [ServerMainRule]      =   {NameStr, NameStr},

        [g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_16_BEI]          =   {"16倍封顶", "底分为1分"},
        [g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_32_BEI]          =   {"32倍封顶", "底分为2分"},
        [g_gameConstant.GAME_SUB_PK_RULE_FENG_DING_64_BEI]          =   {"64倍封顶", "底分为3分"},
        [g_gameConstant.GAME_SUB_PK_RULE_FIRST_RANDOM_LANDLORD]     =   {"随机首叫", "底分为5分"},
        [g_gameConstant.GAME_SUB_PK_RULE_SAN_DA_BI_ZHUA]            =   {"三大必抓", "勾选有牌型奖励"},
        [g_gameConstant.GAME_SUB_PK_RULE_SI_DAI_ER]                 =   {"四带二", "勾选可显示剩余张数"},
        [g_gameConstant.GAME_SUB_PK_RULE_SAN_DAI_DUI]               =   {"三带二", "勾选可显示剩余张数"},
        [g_gameConstant.GAME_SUB_PK_RULE_SAN_BU_DAI]                =   {"三张", "勾选可显示剩余张数"},
        [g_gameConstant.GAME_PLAY_RULE_ALL_AGREEN_4_DISBAND]        =   {"", "勾选后所有玩家同意才可解散。"},
        [g_gameConstant.GAME_SUB_RULE_AUTO_READY]                   =   {"自动准备", "勾选后进入房间自动准备"},
        [g_gameConstant.DDZ_RULE_JIAO_DIZHU]                        =   {"叫地主", "勾选后采用叫地主模式决定地主"},
        [g_gameConstant.DDZ_RULE_JIAO_FEN]                          =   {"叫分", "勾选后采用叫分模式决定地主"},
        [g_gameConstant.DDZ_RULE_UNCHANGED]                         =   {"固定地主", "勾选后第一个叫地主则为地主"},
        [g_gameConstant.DDZ_RULE_JIA_BEI]                           =   {"加倍", "勾选后可选加倍"},
        
        -- [g_gameConstant.DDZ_SUB_RULE_UC_1_FEN]                      =   {"1分", ""},
        -- [g_gameConstant.DDZ_SUB_RULE_UC_2_FEN]                      =   {"2分", ""},
        -- [g_gameConstant.DDZ_SUB_RULE_UC_3_FEN]                      =   {"3分", ""},

        [g_gameConstant.GAME_SUB_RULE_DIFEN+1]                      =   {"1底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+2]                      =   {"2底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+3]                      =   {"3底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+4]                      =   {"4底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+5]                      =   {"5底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+6]                      =   {"6底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+7]                      =   {"7底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+8]                      =   {"8底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+9]                      =   {"9底分", ""},
        [g_gameConstant.GAME_SUB_RULE_DIFEN+10]                     =   {"10底分", ""},
    },
    

    QuickChatCfg = {
        {
            name="sound_LYPDK",
            prefix = "lypdk_player_speak_",
            fileSubPath = "",
            count = 10
        },
    },
}

return HNzzMjIni�