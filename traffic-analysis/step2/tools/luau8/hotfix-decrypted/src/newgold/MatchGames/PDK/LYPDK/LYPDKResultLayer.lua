
------------------------------跑得快小计分界面----------------------------
local LYPDKResultLayer = class("LYPDKResultLayer", cc.load("mvc").ViewBase)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")
local spriteCard  = require("newgold.MatchGames.PDK.LYPDK.common.PDKNewCard")


--csb文件
LYPDKResultLayer.RESOURCE_FILENAMEAH = "game/lyPuKe/LYPDKResultLayer.csb"

--节点绑定及事件
LYPDKResultLayer.RESOURCE_BINDING = {
    listitem = {
        varname="listitem",
    },
    Panel_4 = {
        varname="bg"
    },
    Button_share = {
        varname="Button_share",
        events={
            {event="click",method="on_btn_click"}
        }
    },

    ["Button_share/prize"] = {
        varname="prize",
    },
    

    Button_record = {
        varname="Button_record",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    Button_continue = {
        varname="Button_continue",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    Button_close = {
        varname="Button_close",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    Label_des = {
        varname="Label_des",
    },

    ["bg/Label_score"] = {
        varname="Label_score",
    },
    Label_time = {
        varname="Label_time",
    },
    ["bg/ListView_1"] = {
        varname="listView",
    },

    Image_title = {
        varname = "Image_title",
    },

    Button_xipai = {
        varname="Button_xipai",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Button_xipai/Text_1"] = {
        varname = "xipaiText",
    },
    
    ["Button_xipai/Image_3"] = {
        varname = "xipaiImg",
    },
}

function LYPDKResultLayer:ctor(params)

    LYPDKResultLayer.super.ctor(self)

    local params = params or {}

    self.gameOvertAck = params.gameOvertAck
    self.wanfa2 = params.wanfa2
    self.newPlayWay = params.newPlayWay
    self.vipTableID = params.vipTableID


    self.listitem:hide()
    self.listView:setTouchEnabled(false)
    self.Button_record:hide()

    -- self:createBaseMap()

    self:createContent()

    self.Button_share:setVisible(false)
    self.Button_xipai:hide()
    self:netEvent()
end

function LYPDKResultLayer:netEvent()
    self:addChild(netObj.new(g_msgDefinitions.MSG_TALKING_IN_GAME, function (event, msg)
        if msg.msgType == 6 then
            if msg.unused1 == 1 then
                ShowToastMsg("房卡不足，请到商城购买房卡！")
                if self.Button_xipai.isShare then
                    self.Button_xipai.oldVisible = true
                else
                    self.Button_xipai:show()
                end
                return
            elseif msg.unused1 == 2 then
                ShowToastMsg("金币不足")
                if self.Button_xipai.isShare then
                    self.Button_xipai.oldVisible = true
                else
                    self.Button_xipai:show()
                end
                return
            end
            --ShowToastMsg("发送洗牌成功,继续游戏")
            if self.Button_xipai.isShare then
                self.Button_xipai.oldVisible = false
            else
                self.Button_xipai:hide()
            end
            g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
                operation = g_gameConstant.MAHJONG_OPERTAION_GAME_OVER_CONTINUE,
            })
        end
    end))
end

function LYPDKResultLayer:getListItem(data)

    local listitem  = self.listitem:clone()
    listitem:setVisible(true)


    local Label_name = ccui.Helper:seekNodeByName(listitem, "Label_name") 
    local Label_des = listitem:getChildByName("Label_des")
    local Label_score = listitem:getChildByName("Label_score")

    local Label_bomb_num = listitem:getChildByName("Label_bomb_num")
    local Label_bomb_score = listitem:getChildByName("Label_bomb_score")
    local Label_yupai = listitem:getChildByName("Label_yupai")
    local Label_yupai = listitem:getChildByName("Label_yupai")

    local headbg = listitem:getChildByName("Image_headbg")
    local fangzhuFlag = listitem:getChildByName("Image_4")


    
    

    -- headbg:Addt

    -- Label_name:setString(data.palyerIndex .. " " .. g_gameGlobal:cutStringLength(data.playerName))
    
    -- data.playerName = "·｀#￥%+=｛｝¨"
    Label_name:setString( g_gameGlobal:cutStringLength(data.playerName))

    Label_des:setString(data.desc)
    Label_score:setString(( data.gold > 0 and "+" or "").. tostring(data.gold))
    
    if tonumber(data.gold) > 0 then
        Label_score:setTextColor(cc.c4b(211, 0, 0, 255))
    else
        Label_score:setTextColor(cc.c4b(0, 105, 249, 255))
    end

    -- local x,y = Label_name:getPosition()
    -- Label_des:setPosition(x+Label_name:getContentSize().width+20, y)

    local tablePos = data.tablePos
    local gameOvertAck = self.gameOvertAck or  g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    -- fangzhuFlag:setVisible(data.tablePos == gameOvertAck.dealerPos)
    fangzhuFlag:hide()

    local myplayer = g_gameGlobal:getMyselfInfo()
    local isMachine = data.headImg ~= 4


    if isMachine and false then 

        local isMan = data.sex == 1
        local id = data.palyerIndex%10
        local _headIcon = display.newSprite("head/" .. (isMan and "man" or "woman") .."/"..id..".jpg" )
        _headIcon = g_gameGlobal:clipImg(  headbg , _headIcon , 1 )
    
    else
        if myplayer.playerIndex == data.palyerIndex then 
            g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , true,nil , 1)

            local bg = listitem:getChildByName("Image_1")
            bg:loadTexture("game/lyPuKe/resultUIs/selfItemBg.png",ccui.TextureResType.localType)

        elseif string.len(data.headImgUrl)>5 then
            g_gameGlobal:requestHttpImage(data.headImgUrl, headbg , false , nil , 1)
        end
    end

    

    -- local handCards = gameOvertAck["player"..tostring(tablePos).."HandCards"] or {};    


    --余牌开始位置
    -- local yuPaiStartPos = listitem:getChildByName("start_pos")
    -- local center_x , center_y = yuPaiStartPos:getPosition();
    -- local scale_width = 0;
    -- if yuPaiStartPos and handCards and #handCards > 0 then
    --     if next(handCards) ~= nil then 
    --         PublicFunc.sortByCardLogic(handCards,1)
    --     end 
    --     local node = spriteCard.newHandCardPanel(handCards, 1, false);
    --     if node then
    --         local scale = 0.35;
    --         listitem:addChild(node)
    --         node:setScale(scale)
    --         scale_width  = node:getContentSize().width * scale;
    --         local scale_height = node:getContentSize().height * scale;
    --         node:setPosition(cc.p(center_x, center_y - scale_height / 2))
    --     end
    -- end

    --打出炸弹数量
    local bombNum = tonumber(data.maCard , 2)
    local bombScore = data.gameResult
    local yupaiNum = data.zhongMaIndex
    local isChuntian = data.canFriend

    Label_bomb_num:setString(bombNum)
    Label_bomb_score:setString(bombScore)
    Label_yupai:setString(yupaiNum)
    Label_des:setString(isChuntian == 1 and "是" or "否")

    


    return listitem
end




function LYPDKResultLayer:updateListView(datas)

    self.listView:removeAllItems()
    for i,data in ipairs(datas) do
        -- local listitem = require("newgold.MatchGames.PDK.GameResultCell").new( {  listitem = self.listitem , data = data} ):get()
        local listitem = self:getListItem(data)
        self.listView:pushBackCustomItem(listitem)
    end

end




function LYPDKResultLayer:createContent()
    local gameOvertAck = self.gameOvertAck or  g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}
    self:updateListView(gameOvertAck.players)

    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    if not gameRequestAck then return end --最后一局存在延时过久缓存消息已经被清除的可能，by ruzibeil
    --VIP场没有返回大厅按钮
    if not g_gameGlobal:getIsPlayingGameLog() and gameRequestAck.vipTableID and gameRequestAck.vipTableID > 0 then 
        self.Button_close:hide()
        self.prize:hide()
    else
        if g_gameConstant.GOLD_GANE_ACTIVITE then
            self.prize:hide()
        else
            self.prize:hide()
        end
    end

    local desc = g_gameGlobal:parseWanfa( self.newPlayWay or  gameRequestAck.newPlayWay, " ", true, true, true)
    self.Label_des:setString(desc)

    local dateT = os.date("*t")
    local timeStr = string.format("%s-%s-%s  %s:%02d",
            dateT.year,
            dateT.month,
            dateT.day,
            dateT.hour,
            dateT.min)

    self.Label_time:setString(timeStr)

    local currentWanFa = g_gameGlobal:getCurrentWanFa()

    if g_gameGlobal:getIsPlayingGameLog() then 
        self.Button_continue:hide()
        self.Button_xipai:hide()
    end

    local resType = self:getResultType() or 0

    local imagePath = LYPDKResource.SmallResultWinRes;
    if resType == 2 then
        imagePath = LYPDKResource.SmallResultLostRes;
    elseif resType == 1 then 
        imagePath = LYPDKResource.SmallResultNoThingRes
    end

    self.Image_title:setSpriteFrame(imagePath)

    -- display.newSprite( "#"..imagePath):addTo(self.Image_title):setPosition(self.Image_title:getContentSize().width/2 , self.Image_title:getContentSize().height/2):anchor(0.5,0.5):setScale( resType == 1 and 0.7 or 1 )

    self.Label_score:setString("") --"底分："..gameOvertAck.unused0)

    if gameOvertAck.unused0 <= 1 then 
        self.Label_score:hide()
    end

--    self:createShareNode()
end




function LYPDKResultLayer:on_btn_click(sender)

    if sender == self.Button_close then 
        self:removeSelf()

        if not g_gameGlobal:getIsPlayingGameLog() then 
            g_gameGlobal:backToLobby()
        end
        
    elseif sender == self.Button_share then 
        self:shareImgToWx()
    elseif sender == self.Button_continue or sender == self.Button_record then 

        if sender == self.Button_continue then 
        end
        NG.goldLobby:getModule("PeakRaceDispatch"):reqJoinDispatchQueue(nil, nil, nil, true)
        self:removeSelf()
    elseif sender == self.Button_xipai then
        
    end

end


function LYPDKResultLayer:getResultType()

    -- if true then 
    --     return 1
    -- end

    local gameOvertAck = self.gameOvertAck or  g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    -- 显示输赢
    -- local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK) or {}
    local myTablePos = g_gameGlobal:getMyTablePos()

    for i,player in ipairs(gameOvertAck.players) do
        if player.tablePos == myTablePos then
            local res
            local gameResult = player.gameResult
            
            if player.gold > 0  then
                res = 3
            elseif player.gold < 0 then
                res = 2
            else
                res = 1
            end
            return res
        end
    end
end

function LYPDKResultLayer:createShareNode()
    
end

--分享到微信
function LYPDKResultLayer:shareImgToWx()

end


function LYPDKResultLayer:onEnter()
    g_UserDataTable.gameEmojCount = 0
end


function LYPDKResultLayer:onExit()

end


return LYPDKResultLayer�.