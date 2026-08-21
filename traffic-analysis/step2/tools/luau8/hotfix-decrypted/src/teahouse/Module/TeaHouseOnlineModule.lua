---@class TeaHouseOnlineModule : Module
local TeaHouseOnlineModule = class("TeaHouseOnlineModule", TeaHouse.Module)

TeaHouseOnlineModule.EVENT_MEMBER_LIST_CHANGED = "EVENT_MEMBER_LIST_CHANGED"
TeaHouseOnlineModule.EVENT_LATELY_LIST_CHANGED = "EVENT_LATELY_LIST_CHANGED"
TeaHouseOnlineModule.EVENT_HIDE_ONLINE_LIST = "EVENT_HIDE_ONLINE_LIST"
TeaHouseOnlineModule.EVENT_SHOW_ONLINE_LIST = "EVENT_SHOW_ONLINE_LIST"

TeaHouseOnlineModule.InviteColdTime = 30 --邀请冷却时间
TeaHouseOnlineModule.SendReqColdTime = 60 --发送数据请求冷却时间减轻服务压力

function TeaHouseOnlineModule:onCreate()
    TeaHouseOnlineModule.super.onCreate(self)
end

function TeaHouseOnlineModule:onDestroy()
    TeaHouseOnlineModule.super.onDestroy(self)
end

function TeaHouseOnlineModule:reqUserInfo()
    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:resetOnlineInfos()
    local reqUserInfo = TeaHouse.TeaHouseProtocol.ReqUserInfo:new()
    reqUserInfo.nAskid = -1
    reqUserInfo.nTeaNumber = TeaHouse.manager.teahouseData:getTeaNumber()
    TeaHouse.manager.netManager:sendProtocol(reqUserInfo)
    local teahouseData = TeaHouse.manager.teahouseData
end

function TeaHouseOnlineModule:reqTeaMemberList()
    local sendReq = function( )
        local teahouseData = TeaHouse.manager.teahouseData
        local netReqTeaMemberList = TeaHouse.manager.reqManager:createReq("NetReqTeaMemberList")
        netReqTeaMemberList:addReqCallBack(self, self.onNetReqTeaMemberList)
        netReqTeaMemberList:start(teahouseData:getTeaNumber(), {}, 10)
    end
    if self:checkCanSendMemberListReq() then
        sendReq()
    else
        if self._memberListInfo then
            self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED, msg = { info = self._memberListInfo } })
            if TeaHouse.manager.teahouseData:isOwner() or TeaHouse.manager.teahouseData:isAdmin() then
                XH.lobby:getModule("RecallTeam"):queryReBackPlayersRequest(self._memberListInfo)
            end
        else
            sendReq()
        end
    end
end

function TeaHouseOnlineModule:onNetReqTeaMemberList(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._memberListInfo = data
        if TeaHouse.manager.teahouseData:isOwner() or TeaHouse.manager.teahouseData:isAdmin() then
            XH.lobby:getModule("RecallTeam"):queryReBackPlayersRequest(self._memberListInfo)
        end
        self:dispatchEvent({ name = self.EVENT_MEMBER_LIST_CHANGED, msg = { info = data } })
    else
        TeaHouse.TipTool.showTip(req:getMessage())
    end
end

function TeaHouseOnlineModule:reqSelfFightInfo()
    local sendReq = function( )
        local teahouseData = TeaHouse.manager.teahouseData
        local netReqSelfFightInfo = TeaHouse.manager.reqManager:createReq("NetReqSelfFightInfo")
        netReqSelfFightInfo:addReqCallBack(self, self.onNetReqSelfFightInfo)
        netReqSelfFightInfo:start(teahouseData:getTeaNumber(), 10)
    end
    if self:checkCanSendSelfFightInfoReq()  then
        sendReq()
    else
        if self._selfFightInfo then
            self:dispatchEvent({ name = self.EVENT_LATELY_LIST_CHANGED, msg = { info = self._selfFightInfo } })
        else
            sendReq()
        end
    end
end

function TeaHouseOnlineModule:onNetReqSelfFightInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._selfFightInfo = data
        self:dispatchEvent({ name = self.EVENT_LATELY_LIST_CHANGED, msg = { info = data } })
    else
        TeaHouse.TipTool.showTip(req:getMessage())
    end
end

function TeaHouseOnlineModule:inviteOffline(numID)
    if not self:checkCanInvite(numID) then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    local title = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name, 12))
    if nameExt and #nameExt > 0 then
        title = title .. string.format("(%s)", nameExt)
    end
    TeaHouse.BridgeData.getShareModule():setShareScene("比赛场", "大厅牌友列表")
    TeaHouse.SysTool.shareTeaHouse(teahouseData:getTeaHousePwd(), title)
end

function TeaHouseOnlineModule:checkCanInvite(numID)
    if not self._inviteTime then
        self._inviteTime = {}
    end
    numID = type(numID) == "table" and 0 or numID
    local nowTime = os.time()
    local lastTime = self._inviteTime[numID] or 0
    local leftTime = TeaHouseOnlineModule.InviteColdTime - (nowTime - lastTime)
    if self._inviteTime[numID] and leftTime > 0 then
        TeaHouse.TipTool.showToast("请" .. leftTime .. "S后重试")
        return false
    end
    self._inviteTime[numID] = nowTime
    local RecallNewConfig = require("lobby.Modules.RecallNew.Config")
    if CF and CF.isInGameScene and CF.isInGameScene() then
        XH.lobby:getModule("RecallNew"):notifyReBackTaskRequest(RecallNewConfig.ReBackTaskType.Rtt_InviteFriend)
    end
    return true
end

function TeaHouseOnlineModule:reqInvite(numID)
    if not self:checkCanInvite(numID) then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    local name = teahouseData:getOwnerName()
    local nameExt = teahouseData:getTeaHouseNameExt()
    local teahouseName = ""
    if nameExt and #nameExt > 0 then
        teahouseName = string.format("%s的比赛场(%s)", TeaHouse.StringTool.getTrimName(name), nameExt)
    else
        teahouseName = string.format("%s的比赛场", TeaHouse.StringTool.getTrimName(name))
    end
    local msg = {
        sFromNickName = TeaHouse.BridgeData.getNickName(),
        sTeaHouseName = teahouseName,
        sTeaHouseID = teahouseData:getTeaHousePwd()
    }
    local playerInfo = teahouseData:getPlayerInfo(TeaHouse.BridgeData.getBrandID(), TeaHouse.BridgeData.getNumberID())
    if playerInfo and playerInfo.tableid > 0 and playerInfo.seat >= 0 then
        local tableInfo = teahouseData:getTableInfoByID(playerInfo.tableid)
        if tableInfo then
            msg.boxRoomID = string.format("%06d", playerInfo.tableid)
            msg.boxRoomName = tableInfo.name
            msg.boxRoomRule = self:updatePayModeText(tableInfo.data)
            msg.gameID = tableInfo.gameid
            msg.chairs = tableInfo.size
        end
    end
    TeaHouse.reqInvite(TeaHouse.BridgeData.getNumberID(), numID, json.encode(msg))
end

function TeaHouseOnlineModule:openTeaHouseOnlineListInGame(inviteOfflineFunc)
    if not inviteOfflineFunc then
        return
    end
    local onlineListView = TeaHouse.manager.viewManager:createView("TeaHouseOnlineListView", {
        inviteOfflineFunc = inviteOfflineFunc
    })
    if onlineListView == nil then
        return
    end
    onlineListView:showSelf()
end

function TeaHouseOnlineModule:checkCanSendMemberListReq()
    if not self._sendMemberListReqTime then
        self._sendMemberListReqTime = {}
    end
    local teaId = TeaHouse.manager.teahouseData:getTeaNumber() or 0
    local nowTime = os.time()
    local lastTime = self._sendMemberListReqTime[teaId] or 0
    local leftTime = TeaHouseOnlineModule.SendReqColdTime - (nowTime - lastTime)
    if self._sendMemberListReqTime[teaId]  and leftTime > 0 then
        return false
    end
    self._sendMemberListReqTime[teaId] = nowTime
    return true
end

function TeaHouseOnlineModule:checkCanSendSelfFightInfoReq()
    if not self._sendSelfFightInfoTime then
        self._sendSelfFightInfoTime = {}
    end
    local teaId = TeaHouse.manager.teahouseData:getTeaNumber() or 0
    local nowTime = os.time()
    local lastTime = self._sendSelfFightInfoTime[teaId] or 0
    local leftTime = TeaHouseOnlineModule.SendReqColdTime - (nowTime - lastTime)
    if self._sendSelfFightInfoTime[teaId]  and leftTime > 0 then
        return false
    end
    self._sendSelfFightInfoTime[teaId] = nowTime
    return true
end

--按照实际得支付信息重新显示支付方式
--解决固定玩法创建后切换了比赛场得支付方式,导致和实际得支付方式对不上
function TeaHouseOnlineModule:updatePayModeText(tableinfo)
    local ZhRule  = TeaHouse.SysTool.analysisZhRule(tableinfo)
    local payTypeText = self:getTablePayType(tableinfo)
    local payType
    if payTypeText and payTypeText ~= "" then 
        payType = tonumber(payTypeText)
    end
    local infoText 
    if payType and  not TeaHouse.manager.configManager.SetupConfig.IsFixedPayType then
        local strTable = string.split(ZhRule,",")
        for i, v in pairs(strTable) do
            if string.find(v,"消耗") then
                strTable[i] = nil 
            end
        end
        local pay_text = "冠军消耗" -- 默认冠军消耗
        -- 按照当前的实际支付方式显示
        if payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER then
            --预付模式显示支付名称为冠军
            local payModeType = TeaHouse.manager.teahouseData:getTeaHousePayMode()
            if payModeType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_FRON then
                pay_text = "冠军消耗"
            end
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_AA then
            pay_text = "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA then--areaconfig里有 isFixPayTypeArea参数的 领队平摊 走TEA_AA paytype=24。
            pay_text = "平摊消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_ROOM_OWNER then
            pay_text = "房主消耗"
        elseif payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
            pay_text = "平摊消耗"
        elseif  payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA  then
            pay_text = "平摊消耗"
        elseif  payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN  then
            pay_text = "冠军消耗"
        elseif  payType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA  then
            pay_text = "平摊消耗"
        end
        if pay_text == "冠军消耗" then
            if string.find(tableinfo, "loser_cost=1;") then
                pay_text = "末位消耗"
            end
        end
        table.insert( strTable, pay_text)
        for _, v in pairs(strTable) do
            if v and v ~= "" then
                if infoText then
                    infoText = infoText .. "," .. v
                else
                    infoText =  v
                end
            end
        end 
    end
    return infoText or ZhRule
end

function TeaHouseOnlineModule:getTablePayType(data)
    local luaString = "return {" .. data .. "}"
    local luaFunction = loadstring(luaString)
    if luaFunction then
        local rule = luaFunction()
        return rule.PayType or ""
    end
    return ""
end

return TeaHouseOnlineModule+,