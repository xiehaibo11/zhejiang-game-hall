local PKAnimation = class("PKAnimation")
local GameCMD = import(".DDZCMD")

local rootPath = "poker/ddzGame/CardTypeImg/"
local csbRootPath = "poker/animation/"

local tmieScheduler

local POS_SELF  = 1     -- 自己方位
local POS_RIGHT = 2     -- 右家方位    
local POS_OPP   = 3     -- 对家方位
local POS_LEFT  = 4     -- 左家方位
local POS_TIPS  = 5     -- 自己出牌提示位置
local POS_CENTER = 6    -- 正中间播放

local fntRes = "fonts/fzcyjt.ttf"

local POS_CONFIG = {
    [POS_SELF] = { 
            img     = {moveBy = cc.p(0,50) , playPos = cc.p(0,20) ,scale = 1},
            csb     = {
                        [GameCMD.OUTTYPE_BOMB]          = {playPos = cc.p(-135,130) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_SHUNZI]        = {playPos = cc.p(0,50) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_DOUBLELINK]    = {playPos = cc.p(0,50) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_FEIJI_DAN]     = {playPos = cc.p(0,50) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_FEIJI_DUI]     = {playPos = cc.p(0,50) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_FEIJI]         = {playPos = cc.p(0,50) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_WANGZHA]       = {playPos = cc.p(0,150) ,scaleX = 1,scaleY = 1},
                        [GameCMD.OUTTYPE_CHUNTIAN]      = {playPos = cc.p(0,150) ,scaleX = 1,scaleY = 1},  
            },
            clock   = {bgPos = cc.p(0,100) , timePos = cc.p(0,20) ,scale = 1}
    },
    [POS_RIGHT] = { 
            img     = {moveBy = cc.p(-50,0) , playPos = cc.p(-60,0) ,scale = 1},
            csb     = {
                        [GameCMD.OUTTYPE_BOMB]          = {playPos = cc.p(0,70) ,scaleX = -0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_SHUNZI]        = {playPos = cc.p(-100,0) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_DOUBLELINK]    = {playPos = cc.p(-100,0) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI_DAN]     = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI_DUI]     = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI]         = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_WANGZHA]       = {playPos = cc.p(-55,10) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_CHUNTIAN]      = {playPos = cc.p(-55,10) ,scaleX = 0.6,scaleY = 0.6},
            },
            clock   = {bgPos  = cc.p(-50,0) , timePos = cc.p(-60,0) ,scale = 1}
    },
    [POS_OPP] = { 
            img     = {moveBy = cc.p(-50,0) , playPos = cc.p(-60,0) ,scale = 1},
            csb     = {
                        [GameCMD.OUTTYPE_BOMB]          = {playPos = cc.p(-135,0) ,scaleX = 1,scaleY = 0.6   },
                        [GameCMD.OUTTYPE_SHUNZI]        = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6   },
                        [GameCMD.OUTTYPE_DOUBLELINK]    = {playPos = cc.p(-135,0) ,scaleX = 1,scaleY = 0.6   },
                        [GameCMD.OUTTYPE_FEIJI_DAN]     = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI_DUI]     = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI]         = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6},
                        [GameCMD.OUTTYPE_WANGZHA]       = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6},
                        [GameCMD.OUTTYPE_CHUNTIAN]      = {playPos = cc.p(-135,0) ,scaleX = 1, scaleY = 0.6},
            },
            clock   = {bgPos  = cc.p(-50,0) , timePos = cc.p(-60,0) ,scale = 1}
    },
    [POS_LEFT] = { 
            img     = {moveBy = cc.p(50,0) , playPos = cc.p(60,0) ,scale = 1},
            csb     = {
                        [GameCMD.OUTTYPE_BOMB]          = {playPos = cc.p(30,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_SHUNZI]        = {playPos = cc.p(100,0) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_DOUBLELINK]    = {playPos = cc.p(100,0) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI_DAN]     = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI_DUI]     = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_FEIJI]         = {playPos = cc.p(0,70) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_WANGZHA]       = {playPos = cc.p(55,10) ,scaleX = 0.6,scaleY = 0.6},
                        [GameCMD.OUTTYPE_CHUNTIAN]      = {playPos = cc.p(55,10) ,scaleX = 0.6,scaleY = 0.6},
            },
            clock   = {bgPos  = cc.p(50,0) , timePos = cc.p(60,0) ,scale = 1}
    },
    [POS_TIPS] = { moveBy = cc.p(0,20) , playPos = cc.p(0,100) ,scale = 1},
} 

-- 播放常规图片动画
local function playImgAction(node,path,vChairID,cardType,_isDel,noPlay)
    local isDel = _isDel
    display.loadSpriteFrames("poker/ddzGame/CardTypeImg/CardTypeImg.plist","poker/ddzGame/CardTypeImg/CardTypeImg.png")
    local img = ccui.ImageView:create("Match/"..path,ccui.TextureResType.plistType)
    if not tolua.isnull(node) then 
        local c = node:getChildByName("ResAction")
        if c then 
            c:removeSelf()
        end 
    end 

    if not tolua.isnull(img) and not tolua.isnull(node) then 
        -- 对应的配置信息
        local pos_con = POS_CONFIG[vChairID].img
        if not noPlay then 
            -- 确定播放位置
            local nodePos = pos_con.playPos
            node:addChild(img)
            img:setPosition(nodePos)
            img:setScale(pos_con.scale)
            img:setName("ResAction")
            local time = 0.2
            local delayTime = 0.7
            local moveAction = cc.MoveBy:create(time,pos_con.moveBy)
            local fadeIn = cc.FadeIn:create(time)

            local spawnAction = cc.Spawn:create(moveAction,fadeIn)

            local acitons = cc.Sequence:create(spawnAction,cc.DelayTime:create(delayTime),cc.CallFunc:create(function()
                if isDel then 
                    img:removeSelf()
                end 
            end))
            img:runAction(acitons)
        else
            -- 确定播放位置
            local nodePos = cc.p(pos_con.playPos.x + pos_con.moveBy.x,pos_con.playPos.y +pos_con.moveBy.y)
            node:addChild(img)
            img:setName("ResAction")
            img:setPosition(nodePos)
            img:setScale(pos_con.scale)
        end 
    end 
end 

-- 播放常规Csb动画
local function playCsbAction(node,path,vChairID,cardType)
    if cc.FileUtils:getInstance():isFileExist(path) then

        local csbChild = node:getChildByName("ResAction")

        if not tolua.isnull(csbChild) then 
            csbChild:removeSelf()
        end 

        local csbNode = cc.CSLoader:createNode(path)
        local actTimeLine = cc.CSLoader:createTimeline(path)
        csbNode:runAction(actTimeLine)
        actTimeLine:play("animation0", false) 
        local pos_con = POS_CONFIG[vChairID].csb[cardType]
        csbNode:setPosition(pos_con.playPos)
        csbNode:setScaleX(pos_con.scaleX)
        csbNode:setScaleY(pos_con.scaleY)
        node:addChild(csbNode)
        csbNode:setName("ResAction")
    end
end 

-- 播放提示类型动画
local function playTipAction(node,path)
    display.loadSpriteFrames("poker/ddzGame/CardTypeImg/CardTypeImg.plist","poker/ddzGame/CardTypeImg/CardTypeImg.png")
    local img = ccui.ImageView:create("Match/"..path,ccui.TextureResType.plistType)
    if not tolua.isnull(img) and not tolua.isnull(node) then 
        -- 对应的配置信息
        local pos_con = POS_CONFIG[POS_TIPS]
        -- 确定播放位置
        local nodePos = pos_con.playPos
        node:addChild(img)
        img:setPosition(nodePos)
        img:setScale(pos_con.scale)
        local time = 0.5
        local delayTime = 0.7
        local fadeIn = cc.FadeIn:create(time)

        local acitons = cc.Sequence:create(fadeIn,cc.DelayTime:create(delayTime),cc.CallFunc:create(function()
            img:removeSelf()
        end))
        img:runAction(acitons)
    end 
end 

-- 移除定时器
local function removeScheduler()
    if tmieScheduler ~= nil then 
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(tmieScheduler)
        tmieScheduler = nil 
    end 
end

-- 显示闹钟
local function showWalarmClockAction(node,path,vChairID,isShow,callFunc, secTimes)

    local function numToString(time)
        local str = tostring(time or "")
        if time < 10 then 
            str = tostring("0"..time)
        end 
        return str 
    end 

    -- 闹钟摇摆的动画
    local function playClockAction(bgNode)
        local actionToLeft = cc.RotateTo:create(0.03,-7)
        local actionToRight = cc.RotateTo:create(0.03,7)
        local actionBack = cc.RotateTo:create(0.03,0)
        local sequenceAction = cc.Sequence:create(actionToLeft,actionToRight)
        local repeatAction = cc.Repeat:create(sequenceAction,5)

        if not tolua.isnull(bgNode) then 
            bgNode:runAction(cc.Sequence:create(repeatAction,actionBack))
        end 
    end


    if not tolua.isnull(node) then 
        local child = node:getChildByName("clockNode")
        removeScheduler()
        if child and not tolua.isnull(child) then 
            child:removeSelf()
        end 
    end 

    if not isShow then 
        return 
    end 

    display.loadSpriteFrames("poker/ddzGame/CardTypeImg/CardTypeImg.plist","poker/ddzGame/CardTypeImg/CardTypeImg.png")
    local img = ccui.ImageView:create("Match/"..path,ccui.TextureResType.plistType)
    local fntObj = ccui.Text:create("", fntRes, 35)
    local imgSize = img:getBoundingBox()
    -- 对应的配置信息
    local pos_con = POS_CONFIG[vChairID].clock
    node:addChild(img)
    img:setName("clockNode")
    img:setPosition(pos_con.bgPos)
    img:setScale(pos_con.scale)
    img:addChild(fntObj)
    fntObj:setPosition(imgSize.width/2,imgSize.height/2)
    fntObj:setTextColor(cc.c4b(192, 119, 3, 255))
    local callBackTime = nil 

    local time = secTimes or GameCMD.DOWN_TIME
    local currTime = secTimes or GameCMD.DOWN_TIME
    if currTime < 0 then
        currTime = 0
    end
    fntObj:setString(numToString(currTime))

    tmieScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()

        if tolua.isnull(node) or tolua.isnull(img) or tolua.isnull(fntObj) then 
            removeScheduler()
            return 
        end 

        currTime = currTime - 1

        if currTime <= time then 

            if currTime >= 0 then
                fntObj:setString(numToString(currTime))
            end 

            if currTime <= 5 then 
                local absNum = math.abs(currTime-time)
                if absNum%3 == 0 or absNum == 1 then
                    -- 播放闹钟摇动的动画
                    playClockAction(img)
                end 
                
                -- 倒数3秒的时候振动
                if currTime <= 3 and currTime > 0 and vChairID == 1 and not g_gameGlobal:isWatchMode() then
                    g_gameGlobal:vibrate(0.5)
                end
            end 
        end 

    end,1,false)


end 


local CARDTYPE_CONFIG = {
    [GameCMD.OUTTYPE_SAN_DA_BI_ZHUA     ]   = { callFunc = playTipAction,          needdel = true,  path = rootPath.."san_da_bi_zhua.png", },  -- 三大必抓
    [GameCMD.OUTTYPE_BAODAN_MUST_MAX    ]   = { callFunc = playTipAction,          needdel = true,  path = rootPath.."must_out_max.png", },  -- 报单必出最大
    [GameCMD.OUTTYPE_UNSELECTED_CARD    ]   = { callFunc = playTipAction,          needdel = true,  path = rootPath.."no_selected.png", },   -- 未选牌
    [GameCMD.OUTTYPE_MUST_HEI3          ]   = { callFunc = playTipAction,          needdel = true,  path = rootPath.."must_out_3.png", },    -- 必须先出黑桃三
    [GameCMD.OUTTYPE_ERROR			    ] 	= { callFunc = playTipAction,          needdel = true,  path = rootPath.."type_error.png", },    -- 错误类型	
    [GameCMD.OUTTYPE_DOUBLELINK		    ] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."liandui.csb", },		-- 连对类型
    [GameCMD.OUTTYPE_THREEWITHTWO 	    ] 	= { callFunc = playImgAction,          needdel = true,  path = rootPath.."Sandaier.png", },		-- 三带二类型
    [GameCMD.OUTTYPE_FEIJI_DAN			] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."feiji.csb", },		        -- 飞机类型
    [GameCMD.OUTTYPE_FEIJI_DUI			] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."feiji.csb", },		        -- 飞机类型
    [GameCMD.OUTTYPE_FEIJI			    ] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."feiji.csb", },		        -- 飞机类型
    [GameCMD.OUTTYPE_SHUNZI			    ] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."shunzi.csb", },		-- 顺子类型
    [GameCMD.OUTTYPE_BOMB 			    ] 	= { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."zhadan.csb", },		        -- 四炸类型
    [GameCMD.OUTTYPE_SIDAISAN           ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."Sidaisan.png", },      -- 四带三类型
    [GameCMD.OUTTYPE_SIDAIER            ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."Sidaier.png", },       -- 四带二类型
    [GameCMD.OUTTYPE_SIDAIYI            ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."sidaiyi.png", },       -- 四带一类型
    [GameCMD.OUTTYPE_THREEWITHONE       ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."Sandaiyi.png", },      -- 三带一张类型
    [GameCMD.OUTTYPE_THREE              ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."Sanbudai.png", },           -- 三张不带类型
    [GameCMD.PLAYER_YAO_BU_QI           ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."Pass.png", },          -- 要不起上家牌
    [GameCMD.ALARM_CLOCK                ]   = { callFunc = showWalarmClockAction,  needdel = true,  path = rootPath.."timeout.png", },          -- 闹钟
    [GameCMD.PLAYER_ROB_DZ              ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."img_rob_dz.png", },          -- 抢地主
    [GameCMD.PLAYER_NO_ROB              ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."img_no_rob.png", },          -- 不抢
    [GameCMD.PLAYER_CALL_DZ             ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."img_call_dz.png", },          -- 叫地主
    [GameCMD.PLAYER_NO_CALL             ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."img_no_call.png", },          -- 不叫
    [GameCMD.OUTTYPE_WANGZHA            ]   = { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."huojian.csb", },          -- 王炸
    [GameCMD.OUTTYPE_CHUNTIAN           ]   = { callFunc = playCsbAction,          needdel = true,  path = csbRootPath.."chuntian.csb", },          -- 春天
    
    [GameCMD.BTNOPERATE_JIA_BEI         ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."img_jiabei.png", },          -- 加倍
    [GameCMD.BTNOPERATE_JIA_BEI_NO      ]   = { callFunc = playImgAction,          needdel = true,  path = rootPath.."img_jiabei_no.png", },          -- 不加倍
    
    [GameCMD.BTNOPERATE_JIAO_FEN_1      ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."fen_1.png", },          -- 1分
    [GameCMD.BTNOPERATE_JIAO_FEN_2      ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."fen_2.png", },          -- 2分
    [GameCMD.BTNOPERATE_JIAO_FEN_3      ]   = { callFunc = playImgAction,          needdel = false,  path = rootPath.."fen_3.png", },          -- 3分
}
 
--==============================--
--desc:
--time:2019-03-05 02:41:24
--@node:附加到的节点
--@vChairID:视图ID位置
--@cardType:播放类型
--@return 
--==============================--
function PKAnimation:showCardTypeAction(node,vChairID,cardType,noPlay)

    local con = CARDTYPE_CONFIG[cardType]
    if not tolua.isnull(node) and con and type(con.callFunc) == "function" and con.path then
        con.callFunc(node,con.path,vChairID,cardType,con.needdel, noPlay)
    end 
end 


function PKAnimation:showPassAction(node,vChairID,isShow,cardType,callFunc)
    local con = CARDTYPE_CONFIG[cardType]
    if not tolua.isnull(node) and con and type(con.callFunc) == "function" and con.path then
        showWalarmClockAction(node,con.path,vChairID,isShow,callFunc)
    end 
end 


function PKAnimation:showPassActionWithTime(node,vChairID,isShow,cardType,callFunc, time)
    local con = CARDTYPE_CONFIG[cardType]
    if not tolua.isnull(node) and con and type(con.callFunc) == "function" and con.path then
        showWalarmClockAction(node,con.path,vChairID,isShow,callFunc, time)
    end 
end 


























return PKAnimation