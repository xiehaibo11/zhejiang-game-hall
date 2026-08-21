-- 入场动画参数配置
local _M = {
    default = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-350,-10),
        },
        
        [3] = {
            position = cc.p(-250, -100),
            animName = "animation2",
        },
        
        [4] = {
            position = cc.p(350, -10),
            animName = "animation3",
        },
    },
    
    -- 断勾卡
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ] = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-350,-10),
        },
        
        [3] = {
            position = cc.p(-100, -100),
            animName = "animation2",
        },
        
        [4] = {
            position = cc.p(350, -10),
            animName = "animation3",
        },
    },
    
    
    -----
    -- 扑克
    default_poker = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-200,-10),
        },
        
        [3] = {
            position = cc.p(-200, -100),
            animName = "animation2",
        },
        
        [4] = {
            position = cc.p(200, -10),
            animName = "animation3",
        },
    },
    
    -- 昏地主
    [g_gameConstant.GAME_PLAY_RULE_SCPK_DDZ_HDZ] = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-200,-10),
        },
        
        [3] = {
            position = cc.p(200, -100),
            animName = "animation2",
            scaleX = -1,
        },
        
        [4] = {
            position = cc.p(200, -10),
            animName = "animation3",
        },
    },
    
    -- 德阳跑得快
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_DEYANG] = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-200,-10),
        },
        
        [3] = {
            position = cc.p(200, -100),
            animName = "animation2",
            scaleX = -1,
        },
        
        [4] = {
            position = cc.p(200, -10),
            animName = "animation3",
        },
    },
    
    -- 10张跑得快
    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_CHONGZHOU] = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-200,-10),
        },
        
        [3] = {
            position = cc.p(200, -100),
            animName = "animation2",
            scaleX = -1,
        },
        
        [4] = {
            position = cc.p(200, -10),
            animName = "animation3",
        },
    },
    
    -- 二人跑得快
--    [g_gameConstant.GAME_PLAY_RULE_SCPK_PDK_2P] = {
--        [1] = {
--            position = cc.p(display.cx, 0),
--            animName = "animation3",
--        },
        
--        [2] = {
--            position = cc.p(-200,-10),
--        },
        
--        [3] = {
--            position = cc.p(-200, -100),
--            animName = "animation2",
--        },
        
--        [4] = {
--            position = cc.p(200, -10),
--            animName = "animation3",
--        },
--    },
    
    -----
    -- 斗十四
    [g_gameConstant.GAME_PLAY_RULE_SCCP_DSS] = {
        [1] = {
            position = cc.p(display.cx, 0),
            animName = "animation3",
        },
        
        [2] = {
            position = cc.p(-200,-10),
        },
        
        [3] = {
            position = cc.p(200, -100),
            animName = "animation2",
            scaleX = -1,
        },
        
        [4] = {
            position = cc.p(200, -10),
            animName = "animation3",
        },
    },
}

return _M�