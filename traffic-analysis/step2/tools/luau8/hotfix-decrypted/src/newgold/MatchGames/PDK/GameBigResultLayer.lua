--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------大计分界面----------------------------
local GameBigResultLayer = class("GameBigResultLayer", cc.load("mvc").ViewBase)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
--csb文件
GameBigResultLayer.RESOURCE_FILENAME = "GameBigResultLayer.csb"

--节点绑定及事件
GameBigResultLayer.RESOURCE_BINDING = {
    
    game_big_result_bg_2 = {
        varname="bg"
    },
    Text_room = {
        varname="roomLabel"
    },
    Text_time = {
        varname="timeLabel"
    },
    Text_wanfa = {
        varname="wanfaLabel"
    },
    ["game_big_result_bg_2/listitem"] = {
        varname="listitem"
    },
    Button_share = {
        varname="Button_share",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    Button_back = {
        varname="Button_back",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    Button_back_0 = {
        varname="Button_star",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    copyRecordBtn = {
        varname="copyRecordBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    Image_2 = {
        varname="liquanBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Image_2/Image_11"] = {
        varname="liquanRedDot",
    },

    screenshotBtn = {
        varname="screenshotBtn",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["KW_TAG_BG"] = {
        varname = "tagBg"
    },
    ["KW_TAG_BG/KW_TXT_TAG"] = {
        varname = "txtTag"
    },



    
    -- Button_close = {
    --     varname="Button_close",
    --     events={
    --         {event="click",method="on_btn_click"}
    --     }
    -- },
 
}

function GameBigResultLayer:ctor(params)
    GameBigResultLayer.super.ctor(self)
    local params = params or {}
    self.gameType = params.gameType or 0   --0 麻将，1 跑得快，2 三副 ,3 掼蛋 , 4 托三字

    self:createContent()

    self.Button_share:setVisible(false)

    self:setName("GameBigResultLayer")
    self.liquanRedDot:hide()

    self:netEvent()

    local  cfg = g_gameGlobal:getSystemParaInfo(10013)
    self.screenshotBtn:hide()
    if cfg and cfg.pro_1 == 1 then
        self.screenshotBtn:show()
    end
end


function GameBigResultLayer:addPdkItem(i , data , dismissState,number)


    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)

    -- local data = vipRoomClose["player"..i.."Pdk"]

    local tablePos = data.tablePos
    local playerdata = vipRoomClose["player"..tablePos.."Pdk"]

    local tmps = {
        "总余牌数　　%s",
        "打出炸弹数　%s",
        "春天次数　　%s",
        "被春天次数　%s",
        "胜负局数 %s",
    }

    --[[
        "被春天次数　%s",
        "春天数　　　%s",
        "打出炸弹数　%s",
        "总余牌数　　%s",
        "胜负局数 %s",
    ]]

    --local posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end

    local listitem = self.listitem:clone()
    listitem:addTo(self.bg)
    listitem:show()
    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")

   

    local offtimebg = listitem:getChildByName("offtimebg")

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end


    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end


    local headbg = listitem:getChildByName("Image_head_bg")
    
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)


    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_5:setString( string.format("乐卡消耗　　%s" , lekaCost))
    else
        Label_txt_5:hide()
    end

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end


    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 

    Label_txt_1:setString(string.format(tmps[1], playerdata[4]))
    Label_txt_2:setString(string.format(tmps[2], playerdata[3]))
    Label_txt_3:setString(string.format(tmps[3], playerdata[2]))
    Label_txt_4:setString(string.format(tmps[4], playerdata[1]))
    
    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起		11
    -- 2: 同意		01
    -- 3: 拒绝		10
    -- 4: 等待		00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }
    local strs = {
        [4] = "托管解散",
    }
    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state]  .. " ".. g_gameGlobal:timeConvert(data.inTable) , fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end


end



function GameBigResultLayer:addWuWeiMjItem(i , data , dismissState,number)
    
    local tmps = {
        "　胡牌次数　%s",
        "　点炮次数　%s",
    }

    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end
    local listitem = self.listitem:clone()
    listitem:show()
    listitem:addTo(self.bg)

    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")
    Label_txt_4:hide()

    local Label_fanbei = Label_score:getChildByName("Label_fanbei")

    local offtimebg = listitem:getChildByName("offtimebg")

    local isMe = false
    local player = g_gameGlobal:getMyselfInfo()
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end

    
    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end

    local headbg = listitem:getChildByName("Image_head_bg")

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local scores = vipRoomClose["player".. data.tablePos .."Sorce"]
    local totalHand = startGameRequestAck.totalHand

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)


    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    Label_txt_5:hide()
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_3:setString(string.format( "　乐卡消耗　%s" , lekaCost))
    else
        Label_txt_3:hide()
    end
   

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end

    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_fanbei:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_fanbei:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 


    Label_txt_1:setString(string.format(tmps[1], data.winCount))
    Label_txt_2:setString(string.format(tmps[2], data.dianpaoCount))

    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end

    --小局详情
    local button = ccui.Button:create()
    button:setTouchEnabled(true)
    button:loadTextures("game_result/chakanxiaojufen.png", "game_result/chakanxiaojufen.png", "game_result/chakanxiaojufen.png",ccui.TextureResType.localType)
    button:setPressedActionEnabled(true)
    button:onClick(function()

        local BigResultScoreDetail = require("newgold.MatchGames.PDK.BigResultScoreDetail").new({
            scores = scores,
            quanNum = totalHand,
        })

        g_gameGlobal:getGameScene():add(BigResultScoreDetail, g_gameConstant.ROOMCLOSEVIEW_ZORDER + 1 )

    end)
    button:addTo(listitem):setPosition( listitem:getContentSize().width/2 , 135 )

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起		11
    -- 2: 同意		01
    -- 3: 拒绝		10
    -- 4: 等待		00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }

    local strs = {
        [4] = "托管解散",
    }

    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end

    
    if vipRoomClose.fanbei == 1 then 
        Label_fanbei:show()
        local width = Label_score:getContentSize().width
        local posx = Label_score:getPosition()
        Label_score:setPositionX( posx - width/2 )
        Label_fanbei:setPositionX( width  )
    end

end



function GameBigResultLayer:addItem(i , data , dismissState,number)
    
    local tmps = {
        "　胡牌  　 　%s",
        "　点炮  　 　%s",
        "　公杠  　 　%s",
        "　暗杠  　 　%s",
        "　中马  　 　%s",
    }
    if g_gameGlobal:isNewTongLing() or g_gameGlobal:isTongLing() then
        tmps = {
            "　胡牌  　    　%s",
            "　杠开胡  　 　%s",
            "　公杠  　    　%s",
            "　暗杠  　    　%s",
            "　中马  　    　%s",
        }
    end
    if g_gameGlobal:isWuHuMaJiang() then
        tmps = {
            "和牌次数  %s",
            "自摸次数  %s",
            "总交分数  %s",
            "当前底分  %s",
        }
    elseif g_gameGlobal:isZZMaJiang() then 
        tmps = {
            "坐庄次数  %s",
            "胡牌次数  %s",
            "赢分次数  %s",
            "超时次数  %s",
        }
    elseif g_gameGlobal:isMaAnShan() then
        tmps = {
            "和牌次数  %s",
            "自摸次数  %s",
            "额外奖励  %s",
            "当前点数  %s",
        }
    end
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end
    local listitem = self.listitem:clone()
    listitem:show()
    listitem:addTo(self.bg)

    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")


    

    local Label_fanbei = Label_score:getChildByName("Label_fanbei")

    local offtimebg = listitem:getChildByName("offtimebg")

    local isMe = false
    local player = g_gameGlobal:getMyselfInfo()
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end

    

    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end

    local headbg = listitem:getChildByName("Image_head_bg")

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)


    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_5:setString(string.format( "　乐卡消耗　%s" , lekaCost))
    else
        Label_txt_5:hide()
    end
   

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end

    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_fanbei:setTextColor(cc.c4b(204, 1, 0, 255))
        if g_gameGlobal:isMaAnShan() then
            Label_score:setString("+"..(data.gold/10))
        elseif g_gameGlobal:isSuanZui() then
            Label_score:setString("+"..(data.gold/100))
        else
            Label_score:setString("+"..data.gold)
        end
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_fanbei:setTextColor(cc.c4b(1, 103, 229, 255))

        if g_gameGlobal:isMaAnShan() then
            Label_score:setString(data.gold/10)
        elseif g_gameGlobal:isSuanZui() then
            Label_score:setString((data.gold/100))
        else
            Label_score:setString(data.gold)
        end
        
    end 


    Label_txt_1:setString(string.format(tmps[1], data.winCount))
    Label_txt_2:setString(string.format(tmps[2], data.dianpaoCount))
    Label_txt_3:setString(string.format(
        tmps[3],
        bit._and( bit._rshift(data.hitHorseCount, 8), 0xff)
    ))

    Label_txt_4:setString(string.format(
        tmps[4],
        bit._and( bit._rshift(data.hitHorseCount, 16), 0xff)
    ))

    if g_gameGlobal:isWuHuMaJiang() or g_gameGlobal:isMaAnShan() then
        Label_txt_1:setPositionX(15)
        Label_txt_2:setPositionX(15)
        Label_txt_3:setPositionX(15)
        Label_txt_4:setPositionX(15)
        Label_txt_1:setFontSize(23)
        Label_txt_2:setFontSize(23)
        Label_txt_3:setFontSize(23)
        Label_txt_4:setFontSize(23)
        Label_txt_1:setString(string.format(tmps[1], data.winCount))
        Label_txt_2:setString(string.format(tmps[2], data.dianpaoCount))
        Label_txt_3:setString(string.format(tmps[3], data.gangCount))
        Label_txt_4:setString(string.format(tmps[4], data.desc))

    elseif g_gameGlobal:isZZMaJiang() then 
        Label_txt_1:setString(string.format(tmps[1], data.zhuangCount))
        Label_txt_2:setString(string.format(tmps[2], data.winCount))
        Label_txt_3:setString(string.format(tmps[3], data.dianpaoCount))
        Label_txt_4:setString(string.format(tmps[4], data.gangCount))
    end

    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起		11
    -- 2: 同意		01
    -- 3: 拒绝		10
    -- 4: 等待		00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }

    local strs = {
        [4] = "托管解散",
    }

    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end

    
    if vipRoomClose.fanbei == 1 then 
        Label_fanbei:show()
        local width = Label_score:getContentSize().width
        local posx = Label_score:getPosition()
        Label_score:setPositionX( posx - width/2 )
        Label_fanbei:setPositionX( width  )
    end

end



function GameBigResultLayer:createContent()

    --self:createShareNode()

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    print("____________________________________看看大计分数据")
    dump(vipRoomClose)

    local extJson = vipRoomClose.extJson

    extJson = g_gameGlobal:xpcallDecodeJson(extJson)

    local clubName = extJson.clubName
    local ordeOpen = extJson.clubIsOpenOrder

    self.tableID = extJson.tableID
    

    self.listitem:hide()


    --//1--房主扣钻 2--房卡均摊 3--代开房 
    local roomType = ""
    if vipRoomClose.roomType == 1 then 
        roomType = "房主扣钻"
    elseif vipRoomClose.roomType == 2 then
        roomType = "房卡均摊"
    elseif vipRoomClose.roomType == 3 then 
        roomType = "代开房"
    elseif vipRoomClose.roomType == 4 then 
        roomType = "亲友圈开房"
    end
    if vipRoomClose.roomType == 4 then
        self.Button_star:setVisible(true)
    else
        self.Button_star:setVisible(false)
        self.copyRecordBtn:setPositionX(self.copyRecordBtn:getPositionX()+250)
        self.Button_share:setPositionX(self.Button_share:getPositionX()+250)
    end

    local creator = vipRoomClose.players[1].ip
    creator = g_gameGlobal:formatNickName(creator, 16, '') 
    local currentWanfa = g_gameGlobal:getCurrentWanFa()

    local shareID = vipRoomClose.shareID
    local shareStr = ""
    if shareID > 0 then 
        shareStr = "　回放码:" .. shareID
    end

    self.roomLabel:setString("房间号："..vipRoomClose.unused0 .. "      " .. roomType .. shareStr)
    self.timeLabel:setString( os.date("%Y-%m-%d %H:%M",os.time()) .. "    " ..creator )

    if g_gameGlobal:isPaofengMjDBZ()  then 
        local desc = g_gameGlobal:parseWanfa(currentWanfa , " " , true , true)
        self.wanfaLabel:setString( desc.. vipRoomClose.currHandNum .."局"  )
    elseif g_gameGlobal:isWuHuMaJiang() then
        local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
        local totalHand = startGameRequestAck.totalHand
        local desc = g_gameGlobal:parseWanfa(currentWanfa , " " , true , true)
        if totalHand and totalHand  == g_gameConstant.WUHU_JUSHU_SET[1] then
            desc = desc .. " 1底 " 
        elseif totalHand and totalHand  == g_gameConstant.WUHU_JUSHU_SET[2] then
            desc = desc .. " 2底 "
        elseif totalHand and totalHand  == g_gameConstant.WUHU_JUSHU_SET[3] then
            desc = desc .. " 3底 "
        end
        self.wanfaLabel:setString( desc.. vipRoomClose.currHandNum .."局"  )
    elseif g_gameGlobal:isMaAnShan() then  
        local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
        local totalHand = startGameRequestAck.totalHand
        local desc = g_gameGlobal:parseWanfa(currentWanfa , " " , true , true)
        if totalHand and totalHand  == g_gameConstant.MAS_JUSHU_SET[1] then
            desc = desc .. " 第1倒 " 
        elseif totalHand and totalHand  == g_gameConstant.MAS_JUSHU_SET[2] then
            desc = desc .. " 第2倒 "
        elseif totalHand and totalHand  == g_gameConstant.MAS_JUSHU_SET[3] then
            desc = desc .. " 第3倒 "
        end
        self.wanfaLabel:setString( desc.. vipRoomClose.currHandNum .."局"  )
    else
        self.wanfaLabel:setString( g_gameGlobal:parseWanfa(currentWanfa , " " , true , true, true) )
    end

    local players = vipRoomClose.players
    

    local playerState = {}   			--key代表座位号，value代表同意或者拒绝的状态
    local dismissInfo = vipRoomClose.paoPos
    

    dump("self.gameType = " .. self.gameType)

    -- local tuoGuanJieSanPos = vipRoomClose.tuoGuanJieSanPos
    local tuoGuanJieSan = vipRoomClose.tuoGuanJieSan

    tuoGuanJieSan = g_gameGlobal:xpcallDecodeJson(tuoGuanJieSan)

    if next(tuoGuanJieSan) ~= nil  then 
        for i,v in ipairs(players) do
            for plindex,time in pairs(tuoGuanJieSan) do
                if v.palyerIndex == tonumber(plindex)  then 
                    playerState[v.tablePos] = 4
                    v.inTable = time
                    break
                end
            end
        end

    elseif dismissInfo > 0 then 

        for i = 0, #players-1 do
            local j = bit._and(dismissInfo, 3*(2^(2*i)))
            j = j * (2^(-2*i))
            playerState[i] = j
        end

    end

    self.vipTableID = vipRoomClose.unused0

    local desc = "房间号："..vipRoomClose.unused0
    local isDaikai = (vipRoomClose.unused0 >= 600000 and  vipRoomClose.unused0 <= 900000)
    local isClub = (vipRoomClose.unused0 >= 300000 and vipRoomClose.unused0 < 600000)
    if isDaikai then
        desc = desc.."  代开房\n创建人："..creator
    elseif isClub then
        desc = desc.."\n亲友圈名："..clubName
    end

    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local totalHand = startGameRequestAck.totalHand
    local way, wanfa2 = startGameRequestAck.newPlayWay, startGameRequestAck.unused0
    local wanfaInfo = g_gameGlobal.getWanfaString(way, wanfa2)
    local _rooname = string.format("\n%s %d人 %d局",wanfaInfo[1],#players,totalHand)

    desc = desc.._rooname..'\n'..os.date("%Y-%m-%d %H:%M",os.time())


    local copyStr = desc..'\n'


    -- local players = {1,2,3,4}
    for i,v in ipairs(players) do
        if g_gameGlobal:isWuWeiMj() then 
            self:addWuWeiMjItem(i,v , playerState,#players)
        elseif g_gameGlobal:isPdk() then 
            self:addPdkItem(i,v , playerState,#players)
        elseif g_gameGlobal:isSanfu() or g_gameGlobal:isLiangfu() then
            self:addSanfuItem(i,v , playerState,#players)
        elseif g_gameGlobal:isGuandan() then
            self:addGuanDanItem(i,v , playerState,#players)
        elseif g_gameGlobal:isTuosanzi() then 
            self:addTuosanziItem(i,v , playerState,#players)
        elseif g_gameGlobal:isDDZ() then
            self:addDDZItem(i,v , playerState,#players)
        else
            self:addItem(i,v , playerState,#players)
        end

        local score = v.gold>=0 and "+"..v.gold or tostring(v.gold)
        local playerName = g_gameGlobal:cutStringLength( v.playerName )
        --local str = string.format("一一一一一一一一一一一\n账号:%s | %s\n分数:[%s]\n",v.palyerIndex,playerName,score)
        local str = ""
        if g_UserDataTable.m_enterType == g_gameConstant.GAME_MJ then
            str = string.format("一一一一一一一一一一一\n账号:%s | %s\n胡牌 %d  点炮 %d  分数:[%s]\n",v.palyerIndex,playerName,v.winCount,v.dianpaoCount,score)
        else
            local tablePos = v.tablePos
            local playerdata = vipRoomClose["player"..tablePos.."Pdk"]
            str = string.format("一一一一一一一一一一一\n账号:%s | %s\n总余牌 %d  炸弹数 %d  分数:[%s]\n",v.palyerIndex,playerName,playerdata[4],playerdata[3],score)
        end
        copyStr = copyStr..str
    end

    self.copyStr = copyStr

    print(""..self.copyStr)

    -- 如果是亲友圈被管理员解散，则弹出提示 (unused_2 = 3时 ，亲友圈管理员 ; =2  代开房创建者)
    if vipRoomClose.unused2 == 2 then
        ShowConfirmBox("房间被管理员解散")
    end

    if vipRoomClose.unused2 == 3  then 
        ShowConfirmBox("游戏服务器重启，房间被解散")
    elseif vipRoomClose.unused2 == 4  then
        ShowConfirmBox("托管解散")
    elseif vipRoomClose.unused2 == 5  then
        ShowConfirmBox("系统解散牌局")
    elseif vipRoomClose.unused2 == 6  then
        ShowConfirmBox("游戏系统解散牌局")
    elseif vipRoomClose.unused2 == 7  then
        ShowConfirmBox("因超时系统解散牌局")
    end


    self.playerIds = ""
    for i,v in ipairs(players) do
        -- print(i,v)
        self.playerIds = self.playerIds .. v.palyerIndex
        if i ~= #players then 
            self.playerIds = self.playerIds .. ","
        end 
    end

    if isClub then
        if ordeOpen == "1" then
            self.tagBg:setVisible(true)
            self.txtTag:setString(vipRoomClose.serialNum)
        else
            self.tagBg:setVisible(false)
        end
    end
end


function GameBigResultLayer:copyRecord()

end



function GameBigResultLayer:on_btn_click(sender)

    if sender == self.Button_close then 
        self:removeSelf()
    elseif sender == self.Button_share then 
        self:shareImgToWx()
    elseif sender == self.Button_back then 
        -- self:removeSelf()
        g_gameGlobal:backToLobby()
    elseif sender == self.Button_star then 

        local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
        if vipRoomClose.clubId and vipRoomClose.clubId > 0 then
            g_longConnect:sendMsg(g_msgDefinitions.MSG_CLUB_FASTSTART, {
                clubId = vipRoomClose.clubId
            })
        else
            ShowToastMsg("请重新进入亲友圈！")
        end
        
    elseif sender == self.copyRecordBtn then 

        self:copyRecord()
    elseif sender == self.liquanBtn then 
        
    elseif sender == self.screenshotBtn then 
        
    end

end


function GameBigResultLayer:createShareNode()
    
end

--分享到微信
function GameBigResultLayer:shareImgToWx()
    
    --保存原来的显示状态 ， 分享成功后重置
    self.Button_share.oldVisible = self.Button_share:isVisible()
    self.copyRecordBtn.oldVisible = self.copyRecordBtn:isVisible()
    self.Button_star.oldVisible = self.Button_star:isVisible()
    self.liquanBtn.oldVisible = self.Button_star:isVisible()

    self.Button_share:hide()
    self.copyRecordBtn:hide()
    self.Button_star:hide()
    self.liquanBtn:hide()

    --self.shareNode:hide()

    local function callBack()
        --防止在调用 callback 的时候  界面关闭 ， 再调用会出现报错
        self.Button_share:setVisible(self.Button_share.oldVisible)
        self.copyRecordBtn:setVisible(self.copyRecordBtn.oldVisible)
        self.Button_star:setVisible(self.Button_star.oldVisible)
        self.liquanBtn:setVisible(self.liquanBtn.oldVisible)
        -- shareNode:removeSelf()
        --self.shareNode:hide()
    end

    -- game_share_data.shareImgToWx( {callBack = callBack} )
    local  cfg = g_gameGlobal:getSystemParaInfo(10013)
end


function GameBigResultLayer:onEnter()
    
end


function GameBigResultLayer:netEvent()

end

function GameBigResultLayer:addTuosanziItem(i , data , dismissState,number)
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    
    -- local data = vipRoomClose["player"..i.."Pdk"]
    
    local tablePos = data.tablePos
    local playerdata = vipRoomClose["player"..tablePos.."Pdk"]
    dump(playerdata)

    local tmps = {
        "双扣局数　%s",
        "单扣局数　%s",
        "拖三分数　%s",
        "关三分数　%s",
        -- "胜负局数   %s",
    }

    --[[
        "被春天次数　%s",
        "春天数　　　%s",
        "打出炸弹数　%s",
        "总余牌数　　%s",
        "胜负局数 %s",
    ]]

    --local posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end

    local listitem = self.listitem:clone()
    listitem:addTo(self.bg)
    listitem:show()
    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")

    local offtimebg = listitem:getChildByName("offtimebg")

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end



    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end


    local headbg = listitem:getChildByName("Image_head_bg")

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)


    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_5:setString(string.format( "乐卡消耗　%s" , lekaCost))
    else
        Label_txt_5:hide()
    end

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end

    

    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 

    Label_txt_1:setString(string.format(tmps[1], playerdata[4]))
    Label_txt_2:setString(string.format(tmps[2], playerdata[6]))
    Label_txt_3:setString(string.format(tmps[3], playerdata[2]))
    Label_txt_4:setString(string.format(tmps[4], playerdata[3]))

    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起       11
    -- 2: 同意        01
    -- 3: 拒绝        10
    -- 4: 等待        00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }
    local strs = {
        [4] = "托管解散",
    }
    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            -- dismissState
        end
    end
end

function GameBigResultLayer:addSanfuItem(i , data , dismissState,number)
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    
    -- local data = vipRoomClose["player"..i.."Pdk"]
    
    local tablePos = data.tablePos
    local playerdata = vipRoomClose["player"..tablePos.."Pdk"]
    dump(playerdata)

    local tmps = {
        "喜分      　%s",
        "炸弹分   　%s",
        "炸弹次数　%s",
        "首游次数　%s",
        "胜负局数 %s",
    }

    --[[
        "被春天次数　%s",
        "春天数　　　%s",
        "打出炸弹数　%s",
        "总余牌数　　%s",
        "胜负局数 %s",
    ]]

    --local posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end

    local listitem = self.listitem:clone()
    listitem:addTo(self.bg)
    listitem:show()
    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")

    local offtimebg = listitem:getChildByName("offtimebg")

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end

    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end

    local headbg = listitem:getChildByName("Image_head_bg")
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)

    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_5:setString(string.format( "乐卡消耗　%s" , lekaCost))
    else
        Label_txt_5:hide()
    end

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end

    

    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 

    Label_txt_1:setString(string.format(tmps[1], playerdata[3]))
    Label_txt_2:setString(string.format(tmps[2], playerdata[2]))
    Label_txt_3:setString(string.format(tmps[3], playerdata[6]))
    Label_txt_4:setString(string.format(tmps[4], playerdata[1]))

    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起       11
    -- 2: 同意        01
    -- 3: 拒绝        10
    -- 4: 等待        00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }
    local strs = {
        [4] = "托管解散",
    }
    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end
end


function GameBigResultLayer:addGuanDanItem(i , data , dismissState,number)
    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    
    -- local data = vipRoomClose["player"..i.."Pdk"]
    
    local tablePos = data.tablePos
    local playerdata = vipRoomClose["player"..tablePos.."Pdk"]
    dump(playerdata)

    
    local tmps = {
        "胜局          %s",
        "级数   　    %s",
        "炸弹分　    %s",
        "炸弹数　    %s",
        "头游次数    %s",
    }

    local playWay = g_gameGlobal:getCurrentWanFa()
    local isTTZhuan = g_gameGlobal:isTTZhuan(playWay)
    local ZDIndex = 4
    if g_gameGlobal:hasWanfa2(g_gameConstant.GR2_ANHUI_GUANDAN_BOMB_FEN) then
        ZDIndex = 3
    end


    --local posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end

    local listitem = self.listitem:clone()
    listitem:addTo(self.bg)
    listitem:show()
    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")

    local offtimebg = listitem:getChildByName("offtimebg")
    
    

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end


    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end


    local headbg = listitem:getChildByName("Image_head_bg")

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)

    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_5:setString(string.format( "乐卡消耗    %s" , lekaCost))
    else
        Label_txt_5:hide()
    end

    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end


    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 


    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end


-- local tmps = {
--         "胜局     %s",
--         "级数   　%s",
--         "炸弹分　 %s",
--         "炸弹数　 %s",
--         "头游次数 %s",
--     }

    if isTTZhuan then
        -- 胜局,炸弹分/炸弹数,头游次数
        local addHeight = 10
        Label_txt_1:setString(string.format(tmps[1], playerdata[4]))
        Label_txt_2:setString(string.format(tmps[ZDIndex], playerdata[ZDIndex == 3 and 2 or 6]))
        Label_txt_3:setString(string.format(tmps[5], playerdata[1]))
        -- Label_txt_4:setString(string.format(tmps[4], playerdata[1]))
        Label_txt_4:setVisible(false)
        
    else
        -- 胜局,级数,炸弹分2/炸弹数6,头游次数
        -- Label_txt_1:setString(string.format(tmps[1], playerdata[4]))
        -- local jishu_num = playerdata[3]
        -- jishu_num= jishu_num + 2
        -- if jishu_num >13 then jishu_num =jishu_num -13 end

        -- Label_txt_2:setString(string.format(tmps[2], require("newgold.MatchGames.PDK.LYPDK.common.GuanDanNewCard").getCardSimpleName(jishu_num)))
        -- Label_txt_3:setString(string.format(tmps[ZDIndex], playerdata[ZDIndex == 3 and 2 or 6]))
        -- Label_txt_4:setString(string.format(tmps[5], playerdata[1]))
        -- Label_txt_4:setVisible(true)
    end

    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起       11
    -- 2: 同意        01
    -- 3: 拒绝        10
    -- 4: 等待        00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }
    local strs = {
        [4] = "托管解散",
    }
    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end
end


function GameBigResultLayer:addDDZItem(i , data , dismissState,number)


    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local tablePos = data.tablePos
    local playerdata = vipRoomClose["player"..tablePos.."Pdk"]

    local tmps = {
        "胜利次数　　%s",
        "炸弹次数　   %s",
        "地主次数　　%s",
        "乐卡消耗　　%s"
        --"被春天次数　%s",
        --"胜负局数 %s",
    }

    --local posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    local posx ,posy 
    if number == 2 then
        posx ,posy = g_gameGlobal:getFixPosX(370+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    elseif number == 3 then
        posx ,posy = g_gameGlobal:getFixPosX(230+ (i-1)*280)  ,  g_gameGlobal:getFixPosY(348)
    else
        posx ,posy = g_gameGlobal:getFixPosX(116+ (i-1)*264)  ,  g_gameGlobal:getFixPosY(348)
    end

    local listitem = self.listitem:clone()
    listitem:addTo(self.bg)
    listitem:show()
    listitem:setPosition(posx , posy)


    local Image_zhuang  = listitem:getChildByName("Image_zhuang")
    local Image_win     = listitem:getChildByName("Image_win")
    local Label_name  = ccui.Helper:seekNodeByName( listitem, "Label_name")
    local Label_id    = listitem:getChildByName("Label_id")
    local Label_score = listitem:getChildByName("Label_score")
    local Label_txt_1 = listitem:getChildByName("Label_txt_1")
    local Label_txt_2 = listitem:getChildByName("Label_txt_2")
    local Label_txt_3 = listitem:getChildByName("Label_txt_3")
    local Label_txt_4 = listitem:getChildByName("Label_txt_4")
    -- Label_txt_4:setVisible(false)

    local offtimebg = listitem:getChildByName("offtimebg")

    local player = g_gameGlobal:getMyselfInfo()
    local isMe = false
    if player.playerIndex == data.palyerIndex then 
        isMe = true
    end


    local itemBg = listitem:getChildByName("Image_1")
    if isMe then 
        offtimebg:loadTexture("game_result/offtimebg1.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg_self.png", ccui.TextureResType.localType)
    else
        offtimebg:loadTexture("game_result/offtimebg.png", ccui.TextureResType.localType)
        itemBg:loadTexture("game_result/itemBg.png", ccui.TextureResType.localType)
    end



    local headbg = listitem:getChildByName("Image_head_bg")

    local vipRoomClose = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_VIP_ROOM_CLOSE)
    local startGameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    Image_zhuang:setVisible(startGameRequestAck.createPlayerID == data.playerID)
    -- 大赢家显示
    Image_win:setVisible(vipRoomClose.winPos==data.tablePos)


    --乐卡消耗
    local Label_txt_5 = listitem:getChildByName("Label_txt_5")
    Label_txt_5:hide()
    local extJson = vipRoomClose.extJson
    extJson = g_gameGlobal:xpcallDecodeJson(extJson)
    local leKaCosts = extJson.leKaCosts

    if leKaCosts then 
         leKaCosts = g_gameGlobal:xpcallDecodeJson(leKaCosts)
        local lekaCost = leKaCosts[data.palyerIndex..""]
        Label_txt_4:setString(string.format(tmps[4], lekaCost))
    else
        Label_txt_4:hide()
    end

    
    Label_name:setString('')
    Label_name:setString(g_gameGlobal:cutStringLength(data.playerName))

    if data.palyerIndex then
        Label_id:setString("账号: "..data.palyerIndex)
    else
        Label_id:setString("账号: "..data.playerIndex)
    end


    if data.gold and tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(204, 1, 0, 255))
        Label_score:setString("+"..data.gold)
    else
        Label_score:setTextColor(cc.c4b(1, 103, 229, 255))
        Label_score:setString(data.gold)
    end 

    Label_txt_1:setString(string.format(tmps[1], playerdata[5]))
    Label_txt_2:setString(string.format(tmps[2], playerdata[3]))
    Label_txt_3:setString(string.format(tmps[3], playerdata[2]))
    --Label_txt_4:setString(string.format(tmps[4], playerdata[1]))


    if data.canFriend > 0 then 
        local Label_txt_offline = offtimebg:getChildByName("Label_txt_4_0")
        Label_txt_offline:setString( "离线时间:".. g_gameGlobal:timeConvert1(data.canFriend))
    else
        Label_score:setPositionY(53)
        offtimebg:hide()
    end


    local offset = {x = 0 , y = 0}

    if isMe then 
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true, nil , 0.95 , nil ,  offset)
    elseif string.len(data.headImgUrl)>5 then
        g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 0.95 , nil , offset)
    end

    local strs = {}

    -- 1: 谁发起       11
    -- 2: 同意        01
    -- 3: 拒绝        10
    -- 4: 等待        00

    local imgStrs = {
        [3] = "game_result/request.png",
        [1] = "game_result/agreen.png",
        [2] = "game_result/refuse.png",
        [0] = "game_result/wait.png",
    }
    local strs = {
        [4] = "托管解散",
    }
    if dismissState[data.tablePos] then 
        local state = dismissState[data.tablePos]
        
        if imgStrs[state] then 
            local optImg = display.newSprite("#"..imgStrs[state]):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)

            --在线时间
            if data.inTable > 0 and state == 0 then
                optImg:setSpriteFrame("game_result/offline.png")
                g_gameGlobal:newLabel({ 
                    fontName ="fonts/huakangyuanti.ttf",
                    fontColor = cc.c3b(234,78,61), 
                    text = g_gameGlobal:timeConvert(data.inTable),  
                    fontSize = 20,
                }):setPosition(optImg:getContentSize().width + 5, optImg:getContentSize().height/2):addTo(optImg):anchor(0,0.5)
            end
        elseif strs[state] then 

            g_gameGlobal:newLabel({text = strs[state] or "", fontColor = cc.c3b(255, 255, 0), fontSize = 23,}):addTo(listitem):setPosition(listitem:getContentSize().width/2,-10):anchor(0.5,1)
            -- dismissState
        end
    end
end


function GameBigResultLayer:onExit()

end

function GameBigResultLayer:shareImageSave(sharebtn)
    
end

function GameBigResultLayer:saveCaptured()
    
end

function GameBigResultLayer:addGiftIconView()
    
end
return GameBigResultLayerr�