--[[
 * @Author: zhoufan
 * @Date: 2017年11月4日 11:31:19
 ]]

------------------------------计分界面----------------------------
local GameResultLayer = class("GameResultLayer", cc.load("mvc").ViewBase)

local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
local Utils = require("newgold.GoldLobby.Modules.PeakRaceGame.PDK.Utils")
local scheduler = require("cocos.framework.scheduler")


--csb文件
GameResultLayer.RESOURCE_FILENAME = "GameResultLayer.csb"

--节点绑定及事件
GameResultLayer.RESOURCE_BINDING = {
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
    Label_time = {
        varname="Label_time",
    },
    ["Image_2"] = {
        varname="listBg",
    },
    ["Image_2/ListView_1"] = {
        varname="listView",
    },

    ["Image_2/Image_title"] = {
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

    wuhuText = {
        varname="wuhuText",
    },
    wuhuText_0 = {
        varname="wuhuText_0",
    },
    wuhuJushu = {
        varname="wuhuJushu",
    },

    ZZPanel_1 = {
        varname="zzNiaoPanel",
    },

    masText_Dian = {
        varname="masText_Dian",
    },
    masText_Extra = {
        varname="masText_Extra",
    },
    masText_Total = {
        varname="masText_Total",
    },
    ["Button_xipai/Node_info"] = {
        varname="Node_info",
    },
    ["Button_xipai/Node_info/Button_info_close"] = {
        varname="Button_info_close",
        events={
            {event="click",method="on_btn_click"}
        }
    },
    ["Button_xipai/Node_info/Text_time"] = {
        varname="Text_time"
    }
}

function GameResultLayer:ctor(params)

    GameResultLayer.super.ctor(self)

    self.zzNiaoPanel:hide()

    local params = params or {}

    self.gameOvertAck = params.gameOvertAck
    self.wanfa2 = params.wanfa2
    self.newPlayWay = params.newPlayWay
    self.vipTableID = params.vipTableID

    self.listitem:hide()
    self.listView:setTouchEnabled(false)

    self.Button_record:hide()
    self.wuhuJushu:hide()
    self.wuhuText:hide()
    self.wuhuText_0:hide()
    self.masText_Dian:hide()
    self.masText_Extra:hide()
    self.masText_Total:hide()
    if g_gameGlobal:isWuHuMaJiang() then
        self.wuhuText:show()
        self.wuhuText_0:show()
    end
    if g_gameGlobal:isMaAnShan() then
        self.masText_Dian:show()
        self.masText_Extra:show()
        self.masText_Total:show()
    end

    self:createContent()

    self.Button_share:setVisible(false)
    self.bg:setTouchEnabled(true)
    self.bg:setSwallowTouches(true)
    self:netEvent()
end


function GameResultLayer:showNiaoPAI(maList , zhongmaIndex)

    self.zzNiaoPanel:show()
    for i,value in ipairs(maList) do
        local card = Utils.getCard(value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Laydown)
        card:addTo(self.zzNiaoPanel):setPosition( 5 + (i-1)*39  , self.zzNiaoPanel:getContentSize().height/2):setScale(0.7):anchor(0,0.5)

        local zhongMa=bit._and(bit._rshift(zhongmaIndex,i-1),0x1)
        if zhongMa ~= 1 then
            card:setColor(display.COLOR_GRAY)
        end
    end

end


function GameResultLayer:netEvent()
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
            -- g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, {
            --     operation = g_gameConstant.MAHJONG_OPERTAION_GAME_OVER_CONTINUE,
            -- })
        end
    end))
end

function GameResultLayer:updateListView(datas)

    self.listView:removeAllItems()
    for i,data in ipairs(datas) do
        local listitem = require("newgold.MatchGames.PDK.GameResultCell").new( { parentDeleGate = self, gameOvertAck = self.gameOvertAck,  listitem = self.listitem , data = data } ):get()
        -- listitem:setParentDelegate(self)
        self.listView:pushBackCustomItem(listitem)
    end

end




function GameResultLayer:createContent()


    local gameOvertAck = self.gameOvertAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK) or {}
    self:updateListView(gameOvertAck.players)

    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    local isVipTable = false

    --VIP场没有返回大厅按钮
    if gameRequestAck and gameRequestAck.vipTableID and gameRequestAck.vipTableID > 0 then 
        isVipTable = true
        self.prize:hide()
    else
        if g_gameConstant.GOLD_GANE_ACTIVITE then
            self.prize:hide()
        else
            self.prize:hide()
        end
    end

    if g_gameGlobal:getIsPlayingGameLog() then 
        isVipTable = true
    end

    if isVipTable and not g_gameGlobal:getIsPlayingGameLog() then 
        self.Button_close:hide()
    end

    local desc = ""
    if g_gameGlobal:isPaofengMjDBZ() then  
        desc = g_gameGlobal:parseWanfa(self.newPlayWay or gameRequestAck.newPlayWay, " ", true, true)

        desc = desc .. " 第"..gameOvertAck.currHandNum .."局" 
    elseif g_gameGlobal:isWuHuMaJiang() then
        desc = g_gameGlobal:parseWanfa(self.newPlayWay or gameRequestAck.newPlayWay, " ", true, true)
        if gameRequestAck and gameRequestAck.totalHand then
            if gameRequestAck.totalHand  == g_gameConstant.WUHU_JUSHU_SET[1] then
                desc = desc .. " 1底" 
            elseif gameRequestAck.totalHand  == g_gameConstant.WUHU_JUSHU_SET[2] then
                desc = desc .. " 2底"
            elseif gameRequestAck.totalHand  == g_gameConstant.WUHU_JUSHU_SET[3] then
                desc = desc .. " 3底"
            end
        else
            if gameOvertAck.handsTotal then
                if gameOvertAck.handsTotal  == g_gameConstant.WUHU_JUSHU_SET[1] then
                    desc = desc .. " 1底" 
                elseif gameOvertAck.handsTotal  == g_gameConstant.WUHU_JUSHU_SET[2] then
                    desc = desc .. " 2底"
                elseif gameOvertAck.handsTotal  == g_gameConstant.WUHU_JUSHU_SET[3] then
                    desc = desc .. " 3底"
                end
            end
        end
        self.wuhuJushu:show()
        self.wuhuJushu:setString("第"..gameOvertAck.currHandNum .."局")

        --desc = desc .. " 第"..gameOvertAck.currHandNum .."局" 
    else
        desc = g_gameGlobal:parseWanfa( self.newPlayWay or gameRequestAck.newPlayWay, " ", true, true, isVipTable , nil , not isVipTable)
    end
    

    local dateT = os.date("*t")
    local timeStr = string.format("%s-%s-%s  %s:%02d",
            dateT.year,
            dateT.month,
            dateT.day,
            dateT.hour,
            dateT.min)


    self.Label_des:setString(timeStr.."　"..desc)

    -- self.Label_time:setString(timeStr)

    local currentWanFa = g_gameGlobal:getCurrentWanFa()
    if g_gameGlobal:isTongLing() and bit._and(currentWanFa, g_gameConstant.GAME_PLAY_TONGLING_FAN_LAIZI) == 0 then 
        gameOvertAck.baoCard = 0
    end

    if gameOvertAck.baoCard ~= 0 then 
        if g_gameGlobal:isZongYang() then
            local img = ccui.ImageView:create("game/zuanCard.png", ccui.TextureResType.localType):addTo(self)
            img:setPosition(60,display.height - 42)
            local value = g_gameGlobal:getFanCard()
            local card = Utils.getCard(value, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Normal)
            card:addTo(self):setPosition( 90, display.height - 10):setScale(0.6):anchor(0,1)

            local textLabel = ccui.Text:create("翻牌", "fonts/huakangyuanti.ttf", 16)
            textLabel:addTo(self):setPosition(167,display.height - 13)
            textLabel:setColor(cc.c3b(200, 223, 202))

            local card = Utils.getCard(gameOvertAck.baoCard, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Normal)
            card:addTo(self):setPosition( 150, display.height - 25):setScale(0.45):anchor(0,1)
        else
            local card = Utils.getCard(gameOvertAck.baoCard, g_gameConstant.MajongPosType.Self, g_gameConstant.MajongType.Normal)
            card:addTo(self):setPosition( 90, display.height - 10):setScale(0.6):anchor(0,1)
        end
        -- g_gameGlobal:fixPosX(card)
    end

    local msgGameStart = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME)
    if g_gameGlobal:getIsPlayingGameLog() then 
        self.Button_continue:hide()
        self.Button_xipai:hide()
    elseif  msgGameStart.quanNum == bit._and(msgGameStart.baoCard, 0xff) then
        
        self.Button_continue:hide()
        self.Button_record:show()
    end
    self.Button_xipai:hide()


    local resType = self:getResultType() or 0
    local resTypeCfg = {
        [1] = "nothing",
        [2] = "lose",
        [3] = "js_yl",
        [4] = "liuju",
    }
    display.newSprite( "#game_result/"..resTypeCfg[resType] ..".png"):addTo(self.Image_title):setPosition(self.Image_title:getContentSize().width/2 , self.Image_title:getContentSize().height/2-8):anchor(0.5,0.5):setScale( resType == 1 and 0.7 or 1 )
    
    if resType == 2 then 
        self.Image_title:setSpriteFrame("game_result/title_bg1.png")
    end

    --洗牌卡的部分
    --self:updateButtonXipaiInfo(gameOvertAck)
    self:checkIsShowOrHideXipaiInfo(gameOvertAck,resType)

    --self:createShareNode()
end




function GameResultLayer:on_btn_click(sender)

    if sender == self.Button_close then 
        if not tolua.isnull(self) then
            self.Button_close:setTouchEnabled(false)
            self:removeSelf()

            if not g_gameGlobal:getIsPlayingGameLog() then 
                g_gameGlobal:backToLobby()
            end
        end
    elseif sender == self.Button_share then 
        self:shareImgToWx()
    elseif sender == self.Button_continue or sender == self.Button_record then 
        
        if sender == self.Button_continue then 
        end
        NG.goldLobby:getModule("PeakRaceDispatch"):reqJoinDispatchQueue(nil, nil, nil, true)
        self:removeSelf()
    elseif sender == self.Button_xipai then
        
    elseif sender == self.Button_info_close then
        if(self.Node_info) then
            self.Node_info:setVisible(false)
        end
    end
end


function GameResultLayer:getResultType()

    -- if true then 
    --     return 1
    -- end

    local gameOvertAck = self.gameOvertAck or g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_GAME_OVER_ACK)
    -- 显示输赢
    local gameRequestAck = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK) or {}
    local myTablePos = g_gameGlobal:getMyTablePos()
    local res
    if g_gameGlobal:isWuHuMaJiang() then
        local flag = true
        for i,player in ipairs(gameOvertAck.players) do
            local gameResult = player.gameResult
            
            if player.gold > 0  then
                flag = false
            elseif player.gold < 0 then
                flag = false
            end
        end
        if flag then
            return 4
        end

    end
    for i,player in ipairs(gameOvertAck.players) do
        if player.tablePos == myTablePos then
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

function GameResultLayer:createShareNode()
    
end

--分享到微信
function GameResultLayer:shareImgToWx()

end


function GameResultLayer:onEnter()
    g_UserDataTable.gameEmojCount = 0
end


function GameResultLayer:onExit()

end

function GameResultLayer:checkIsShowOrHideXipaiInfo(gameOvertAck,resType)
    --如果连续输了，就弹出气泡
    self.Node_info:setVisible(false)
    if(not g_gameGlobal:isGoldRoom()and (g_UserDataTable.m_enterType == g_gameConstant.GAME_MJ)) then
        local _id = g_gameGlobal:getMyselfInfo().playerIndex
        if (resType == 2) then
            local _num = cc.UserDefault:getInstance():getIntegerForKey(g_gameConstant.XIPAI_QIPAO_INFO.._id,0)
            cc.UserDefault:getInstance():setIntegerForKey(g_gameConstant.XIPAI_QIPAO_INFO.._id,_num+1)
        end
        local _num = cc.UserDefault:getInstance():getIntegerForKey(g_gameConstant.XIPAI_QIPAO_INFO.._id,0)
        if(_num>=g_gameGlobal:getWashCardLoseTimes())then
            local _sumtime = 5
            cc.UserDefault:getInstance():setIntegerForKey(g_gameConstant.XIPAI_QIPAO_INFO.._id,0)
            self.Node_info:setVisible(true)

            performWithDelay(self.Node_info, function()
                if(self.Node_info)then
                    self.Node_info:setVisible(false)
                end
            end, _sumtime)

            self.scheduleDownTime = scheduler.scheduleGlobal(function(dTime)
                _sumtime = _sumtime - 1
                if(self.Text_time)then
                    self.Text_time:setString(_sumtime.."s")
                end
                if(_sumtime <=0) then
                    if(self.Node_info)then
                        self.Node_info:setVisible(false)
                    end
                    if self.scheduleDownTime then
                        scheduler.unscheduleGlobal(self.scheduleDownTime)
                        self.scheduleDownTime = nil
                    end
                end
            end,1)
        end
        if gameOvertAck.isNextHandWashCard == 1 then
            self.Button_xipai:hide()
            if(self.Node_info)then
                self.Node_info:setVisible(false)
            end
        end
    else
        self.Button_xipai:hide()
    end
end

-- function GameResultLayer:updateButtonXipaiInfo(gameOvertAck)
--     if(not g_gameGlobal:isGoldRoom()and (g_UserDataTable.m_enterType == g_gameConstant.GAME_MJ)) then
--         if gameOvertAck.washCardFreeNum > 0 then
--             self.xipaiText:setString("免费")
--         else
--             if  gameOvertAck.leftWashCardQuan > 0 then
--                 self.xipaiImg:loadTexture("propSystem/washcard.png", ccui.TextureResType.localType)
--                 self.xipaiText:setString("剩余"..gameOvertAck.leftWashCardQuan)
--             else
                
--                 self.xipaiImg:loadTexture("propSystem/Result1.png", ccui.TextureResType.localType)
--                 self.xipaiText:setString("x" ..gameOvertAck.washRoomCardCost )
--             end
--         end
--     end
-- end

return GameResultLayer   �A  