-- local Platform = require("app.platform.Platform")
local TableWaiting = class("TableWaiting", cc.load("mvc").ViewBase)
local ExternalFunc = require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.ExternalFunc")
local eventType = import("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.EventType")

function TableWaiting:ctor(gameBase, ...)
    self.gameBase = gameBase
    self.isClubRoom = false
    TableWaiting.super.ctor(self, ...)
    self:addNetEvent()
end

function TableWaiting:onCreate()
    self:createResoueceNode("TableWaiting.csb")

    local data = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)
    local bgPanel = self.resourceNode_:getChildByName("bgPanel")

    -- 返回大厅按钮
    self.backLobbyBtn = bgPanel:getChildByName("backLobbyBtn")

    -- 解散房间按钮
    self.jiesuanBtn = bgPanel:getChildByName("jiesuanBtn")

    self.vipTableID = nil --data.vipTableID
    
    -- 邀请好友按钮
    self.inviteBtn_all = g_gameGlobal:findChildWithName(bgPanel, "inviteBtn_all")
    self.inviteBtn_all:onClick(handler(self, self.btnEventFunc))

    -- 邀请好友按钮
    self.inviteBtn = g_gameGlobal:findChildWithName(bgPanel, "inviteBtn")
    self.inviteBtn:onClick(handler(self, self.btnEventFunc))

    self.xlInviteBtn = g_gameGlobal:findChildWithName(bgPanel, "xlInviteBtn")
    self.xlInviteBtn:onClick(handler(self, self.btnEventFunc))
    self.xlInviteBtn:setVisible(false)

    self.cnInviteBtn = g_gameGlobal:findChildWithName(bgPanel, "cnInviteBtn")
    self.cnInviteBtn:onClick(handler(self, self.btnEventFunc))
    self.cnInviteBtn:setVisible(false)

    -- 邀请亲友圈按钮
    self.clubInviteBtn = g_gameGlobal:findChildWithName(bgPanel, "clubInviteBtn")
    self.clubInviteBtn:onClick(handler(self, self.btnEventFunc))
    self.clubInviteBtn:setVisible(self.isClubRoom)

    -- 复制房间号
    self.copyRoomIDBtn = g_gameGlobal:findChildWithName(bgPanel, "copyRoomIDBtn")
    self.copyRoomIDBtn:onClick(handler(self, self.btnEventFunc))
    self.copyRoomIDBtn:setVisible(false)
    
    
    -- 请稍等，牌局马上开始的三个点动画 
    self.waitLabel = g_gameGlobal:findChildWithName(bgPanel, "waitLabel")
    
    self.waitAnimalSpr = display.newSprite()
    :align(cc.p(0,0),self.waitLabel:getContentSize().width+5, 0)
    :addTo(self.waitLabel)

    -- 申请快速开局
    self.applayChangeBtn = g_gameGlobal:findChildWithName(bgPanel, "applayChangeBtn")
    self.applayChangeBtn:onClick(handler(self, self.applayChange))

    if g_gameGlobal:getVipTableID() and g_gameGlobal:getVipTableID() > 0 then 
        if g_gameGlobal:getMaxPlayerNum() == 4 and self.gameBase and self.gameBase:canQuickStart() then 
            self.applayChangeBtn:setVisible(true)
        else
            self.applayChangeBtn:setVisible(false)
        end 
    else 
        self.applayChangeBtn:setVisible(false)
    end 
    
    self.Panel_lijikaiju = g_gameGlobal:findChildWithName(bgPanel, "Panel_lijikaiju")
    self.Panel_lijikaiju:setVisible(false)
    
end

function TableWaiting:refreshJiesanBtnShow()
    
end

function TableWaiting:getPlayerNumDesc()
    local curP = self.gameBase:getCurrentPlayerNum()
    local maxP = g_gameGlobal:getMaxPlayerNum()

    if maxP>0 and curP>0 and curP<maxP then
        return ExternalFunc.numberToString(curP) .. "缺" .. ExternalFunc.numberToString(maxP-curP) .. ","
    end
    return ""
end

function TableWaiting:setDelegate( d )
    -- body
    self.delegate = d
end

function TableWaiting:btnEventFunc( target )

    local data = g_msgCache:getMsgByCmd(g_msgDefinitions.MSG_GAME_START_GAME_REQUEST_ACK)

    if target == self.inviteBtn or target == self.xlInviteBtn or target == self.cnInviteBtn or target == self.inviteBtn_all then
        
    elseif target == self.copyRoomIDBtn then
        -- 复制房间号
    elseif target == self.clubInviteBtn then
        -- 亲友圈邀请
    end
end

function TableWaiting:closeVipRoom( )
    local vipTableID = g_gameGlobal:getVipTableID()
    if vipTableID then
        local playerGameOpertaionMsg = {}
        playerGameOpertaionMsg.opertaionID = g_gameConstant.GAME_OPERATION_APPLY_CLOSE_VIP_ROOM;
        playerGameOpertaionMsg.opValue= vipTableID
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_GAME_OPERTAION, playerGameOpertaionMsg)

        if not g_gameGlobal:getIsMyFangZhu() then
            g_gameGlobal:switchLobbyScene()
            g_gameGlobal:setIsInPaiZhuo(false)
        end
    end
end

-- 设置游戏模式，GOLD_GAME_MODEL表示金币场,VIP_GAME_MODEL表示vip等待
function TableWaiting:setGameModel( model )
    if model == g_gameConstant.GOLD_GAME_MODEL then
        self.vipTableID = nil
        self.inviteBtn_all:setVisible(false)
        self.inviteBtn:setVisible(false)
        self.xlInviteBtn:setVisible(false)
        self.cnInviteBtn:setVisible(false)
        self.copyRoomIDBtn:setVisible(false)
        self.clubInviteBtn:setVisible(false)
    elseif model == g_gameConstant.VIP_GAME_MODEL then
        if g_gameGlobal:isGuestLogin() then
            self.inviteBtn_all:setVisible(false)
            self.inviteBtn:setVisible(false)
            self.xlInviteBtn:setVisible(false)
            self.cnInviteBtn:setVisible(false)
            self.copyRoomIDBtn:setVisible(false)
            self.clubInviteBtn:setVisible(false)
        end
        self:fixBtnPos()
        self.waitAnimalSpr:playAnimationForever(g_gameGlobal:createEffectFromSinglePng("noplist/waitAnimal.png", 8 , 8))
    end
end

--[[
    按钮位置调整：
        优先级：
            复制房间号
            俱乐部邀请
            邀请微信好友
            三方邀请
--]]
function TableWaiting:fixBtnPos()
    local showNums = 0
    local showBtnList = {}

    local function isShowAddNums(btn)
      --  do return end 
        if btn and not tolua.isnull(btn) and btn:isVisible() then
            showNums = showNums + 1
            table.insert(showBtnList, btn)
        end
    end
    isShowAddNums(self.inviteBtn_all)
    isShowAddNums(self.inviteBtn)
    isShowAddNums(self.copyRoomIDBtn)
    isShowAddNums(self.clubInviteBtn)
    --isShowAddNums(self.xlInviteBtn)
    --isShowAddNums(self.cnInviteBtn)

    if showNums==0 then
        return
    end
    if showNums == 3 then
        showBtnList[1]:setPositionX(0.2*g_gameGlobal:getDisplayWidth())
        showBtnList[2]:setPositionX(0.5*g_gameGlobal:getDisplayWidth())
        showBtnList[3]:setPositionX(0.8*g_gameGlobal:getDisplayWidth())
    elseif showNums == 1 then
        showBtnList[1]:setPositionX(0.5*g_gameGlobal:getDisplayWidth())
    elseif showNums == 2 then
        showBtnList[1]:setPositionX(0.3*g_gameGlobal:getDisplayWidth())
        showBtnList[2]:setPositionX(0.7*g_gameGlobal:getDisplayWidth())
    end
end

function TableWaiting:addNetEvent( ... )
    local netObj,eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))
    self:addChild(netObj.new(g_msgDefinitions.MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX, function (event, msg)
        if msg.operationList[1] == g_gameConstant.GAME_OPERATION_START_GAME_ADVANCE then
            if msg.unused0 == 2 or msg.unused0 == 3 then

                self:closeChangeView()

                -- 弹出提示
                local refuseStr = "选择超时，请等候其他小伙伴的加入~！"
                if msg.unused0 == 2 then
                    local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.value)
                    if posState and self.gameBase.tablePlayerInfoTable[posState] ~= 0 then 
                        local refuseName = g_gameGlobal:cutStringLength(self.gameBase.tablePlayerInfoTable[posState].playerName)
                        refuseStr =  "【"..refuseName.."】".." 未同意立即开房，建议等等其他小伙伴再开局哦~！"
                    end 
                end 
                g_gameGlobal:setLijiKaiJuState(false)
                g_gameGlobal:upTipBarLabel(refuseStr)
                ExternalFunc.sendCustomEvent(eventType.ROOM_QUICK_START_STATE_CHANGED, false)
            
            elseif msg.unused0 == 4 then
                self:closeChangeView()
                ShowConfirmBox("牌桌已有玩家离开或进来新玩家！")
                g_gameGlobal:setLijiKaiJuState(false)
                ExternalFunc.sendCustomEvent(eventType.ROOM_QUICK_START_STATE_CHANGED, false)
                
            else
                if not display.getRunningScene() then
                    return
                end
                -- local gameBase = display.getRunningScene():getChildByName("gameBase")
                -- if not gameBase then
                --     return 
                -- end
                local gameScene = g_gameGlobal:getGameScene()
                if tolua.isnull(gameScene) then
                    print("gameScene err...\n" .. debug.traceback())
                end
                
                local LiJiKaiJuLayer = gameScene:getChildByName("LiJiKaiJuLayer")
                if not LiJiKaiJuLayer then 
                    LiJiKaiJuLayer = require("newgold.MatchGames.subMjGame.MJGamePublic.LiJiKaiJuLayer"):create(msg.unused1,msg.unused2 == g_gameGlobal:getMyTablePos())
                    LiJiKaiJuLayer:setName("LiJiKaiJuLayer")
                    LiJiKaiJuLayer:addTo(gameScene, g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER + 3)
                    --g_gameGlobal:getGameScene():add(LiJiKaiJuLayer,g_gameConstant.CLUB_INVITE_ROOM_POP_ZORDER + 3)
                end 

                for i=1, g_gameGlobal:getMaxPlayerNum() do 
                    local tablePos = i-1
                    local tableState = msg.valueList[i]
                    if tableState ~= -1 then 
                        local posState = g_gameGlobal:getTablePlayerPosWithTablePos(tablePos)
                        local playerName = "玩家"
                        if self.gameBase and self.gameBase.tablePlayerInfoTable[posState] ~= 0 then
                            playerName = g_gameGlobal:cutStringLength(self.gameBase.tablePlayerInfoTable[posState].playerName)
                        end
                        
                        LiJiKaiJuLayer:updatePanelTextInfo(playerName,tablePos,tableState,tablePos == msg.unused2)
                    end 
                end     
                g_gameGlobal:setLijiKaiJuState(true)
                ExternalFunc.sendCustomEvent(eventType.ROOM_QUICK_START_STATE_CHANGED, true)
                do return end 

                if ChangeWanfaView then
                    ChangeWanfaView:updatePanelTextInfo(msg,self.gameBase)
                    return 
                end
                local curP = self.gameBase:getCurrentPlayerNum()
                local ChangeWanfaView = require("app.lobby.ChangeWanfaView"):create(curP,msg,g_gameGlobal:getIsMyFangZhu())
                ChangeWanfaView:setName("ChangeWanfaView")
                display.getRunningScene():add(ChangeWanfaView,901)
                ChangeWanfaView:refreshUI(msg,self.gameBase)
            end
        elseif msg.operationList[1] == g_gameConstant.GAME_OPERATION_NOTIFY_CHANGE_CREATOR then
            --房主有变化的通知
            self:closeChangeView()
            local posState = g_gameGlobal:getTablePlayerPosWithTablePos(msg.player_table_pos)
            local createPlayerID = self.gameBase.tablePlayerInfoTable[posState].playerIndex
            local myPlayerID = self.gameBase.tablePlayerInfoTable[1].playerIndex
            g_gameGlobal:setIsMyFangZhu((myPlayerID == createPlayerID) and true or false)
            local isHainanFourWanfa = self.gameBase.MainGamePlayRule == g_gameConstant.GAME_PLAY_RULE_HAI_NAN
            local maxNum = g_gameGlobal:getMaxPlayerNum()
            if maxNum and isHainanFourWanfa and maxNum == 4 then
                self:setApplayBtn()
            end
        end
    end))
end

function TableWaiting:applayChange()

    local curP = self.gameBase:getCurrentPlayerNum()
    if curP < 2 then 
        g_gameGlobal:upTipBarLabel("人数不够，请等小伙伴加入房间~！")
        return
    end 

    local applayChangeMsg = {}
    applayChangeMsg.operation = g_gameConstant.GAME_OPERATION_START_GAME_ADVANCE
    applayChangeMsg.opValue = 1     --【0表示房主开始切换】，【1表示房主申请提前开局】，【2表示房主取消申请】
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, applayChangeMsg)
    
    do return end 

    local curP = self.gameBase:getCurrentPlayerNum()
    local wanfaList = self.gameBase.MinorGamePlayRuleList
    local msg = {}
    msg.keyList = wanfaList
    if not display.getRunningScene() then
        return
    end
    local ChangeWanfaView = require("app.lobby.ChangeWanfaView"):create(curP,msg,g_gameGlobal:getIsMyFangZhu())
    ChangeWanfaView:setName("ChangeWanfaView")
    display.getRunningScene():add(ChangeWanfaView,901)
end

function TableWaiting:setApplayBtn()
    local maxPlayerNum = g_gameGlobal:getMaxPlayerNum()
    local curP = self.gameBase:getCurrentPlayerNum()
    if curP and curP >=2 and curP <= 3 and curP ~= maxPlayerNum then
        self.applayChangeBtn:setVisible(true)
        self.Panel_lijikaiju:setVisible(false)
        --查询是否处于切换房间过程中
        local applayChangeMsg = {}
        applayChangeMsg.operation = g_gameConstant.GAME_OPERATION_QUERY_START_GAME_ADVANCE_INFO
        g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, applayChangeMsg)
    else
        self.applayChangeBtn:setVisible(false)
        self.Panel_lijikaiju:setVisible(g_gameGlobal:getIsMyFangZhu())
    end
end

--关闭切换房间界面
function TableWaiting:closeChangeView()
    if not g_gameGlobal:getGameScene() then
        return
    end
    -- local gameBase = display.getRunningScene():getChildByName("gameBase")
    -- if not  gameBase then
    --     return 
    -- end
    local ChangeWanfaView = g_gameGlobal:getGameScene():getChildByName("LiJiKaiJuLayer")
    if ChangeWanfaView then
        ChangeWanfaView:removeFromParent()
        ChangeWanfaView = nil
    end
end

return TableWaiting
