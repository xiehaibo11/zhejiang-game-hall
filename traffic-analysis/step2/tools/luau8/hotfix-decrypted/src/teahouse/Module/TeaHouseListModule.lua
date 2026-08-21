---@class TeaHouseListModule : Module
local TeaHouseListModule = class("TeaHouseListModule", TeaHouse.Module)

TeaHouseListModule.EVENT_TEA_HOUSE_LIST_ADD = "EVENT_TEA_HOUSE_LIST_ADD"
TeaHouseListModule.EVENT_TEA_HOUSE_LIST_CHANGED = "EVENT_TEA_HOUSE_LIST_CHANGED"
TeaHouseListModule.EVENT_TEA_HOUSE_LIST_REMOVE = "EVENT_TEA_HOUSE_LIST_REMOVE"
TeaHouseListModule.EVENT_TEA_HOUSE_LIST_RELOAD = "EVENT_TEA_HOUSE_LIST_RELOAD"
TeaHouseListModule.EVENT_TEA_HOUSE_LIST_INFO_UPDATE = "EVENT_TEA_HOUSE_LIST_INFO_UPDATE"
TeaHouseListModule.EVENT_TEA_HOUSE_CLOSE = "EVENT_TEA_HOUSE_CLOSE"
TeaHouseListModule.EVENT_REMODEL_TEA_HOUSE_REGISTER_AGENT = "EVENT_REMODEL_TEA_HOUSE_REGISTER_AGENT"
TeaHouseListModule.EVENT_REMODEL_TEA_HOUSE_UPDATE_CREATE_CONDITION = "EVENT_REMODEL_TEA_HOUSE_UPDATE_CREATE_CONDITION"

function TeaHouseListModule:onCreate()
    TeaHouseListModule.super.onCreate(self)

    self._isReqList = false

    self._nAskid = 0

    self._teaHouseFilter = {}
    ---还未显示的比赛场信息
    self._teaHousePendingList = {}
    ---是否在创建比赛场
    self._isCreateTeaHouse = false

    self._isCloseTeaHouse = false

    self._activeValue = 0 --比赛场活跃值

    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespTeaHouseInfoByPlayerType, self, self.onRespTeaHouseInfoByPlayerType)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespDismissTeaHouse, self, self.onRespDismissTeaHouse)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespCancelDismissTeaHouse, self, self.onRespCancelDismissTeaHouse)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespCloseTeaHouse, self, self.onRespCloseTeaHouse)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.TeaLevelConfig, self, self.onTeaLevelConfig)
end

function TeaHouseListModule:onDestroy()
    TeaHouse.manager.netManager:removeEventListener(self)

    TeaHouseListModule.super.onDestroy(self)
end

function TeaHouseListModule:getTeaHousePendingList()
    return self._teaHousePendingList
end

function TeaHouseListModule:getAskId()
    return self._nAskid
end

function TeaHouseListModule:setIsCreateTeaHouse(isCreateTeaHouse)
    self._isCreateTeaHouse = isCreateTeaHouse
end

-- acExtraData: "{"teatype":0,"createtime":1586400606,"askcnt":0,"canquit":0}"
function TeaHouseListModule:onRespTeaHouseInfoByPlayerType(msgData)
    if msgData.nAskid ~= self._nAskid then
        return
    end
    local isFirst = msgData.nCurrent <= 1
    local isLast = msgData.nTotal == msgData.nCurrent
    if msgData.teahouseSummery.nTeaNumber == 0 then
        if isLast then
            self._teaHouseFilter = { }
        end
        self:dispatchEvent( { name = self.EVENT_TEA_HOUSE_LIST_CHANGED, msg = { isFirst = isFirst, isLast = isLast } })
        return
    end
    if self._teaHouseFilter[msgData.teahouseSummery.nTeaNumber] ~= nil then
        if isLast then
            self._teaHouseFilter = { }
        end
        return
    end
    self._teaHouseFilter[msgData.teahouseSummery.nTeaNumber] = true
    if isLast then
        self._teaHouseFilter = { }
    end

    if msgData.teahouseSummery then
        msgData.teahouseSummery.bUseBuyedProp = msgData.bUseBuyedProp
    end
    if self._isCreateTeaHouse then
        local teaHouseInfo = clone(msgData.teahouseSummery)
        TeaHouse.manager.teahouseData:addTeaHouse(msgData.teahouseSummery.nTeaNumber, teaHouseInfo)
        self._isCreateTeaHouse = false
        self:dispatchEvent( { name = self.EVENT_TEA_HOUSE_LIST_ADD, msg = { info = teaHouseInfo } })
    else
        local teaHouseInfo = clone(msgData.teahouseSummery)
        TeaHouse.manager.teahouseData:addTeaHouse(msgData.teahouseSummery.nTeaNumber, teaHouseInfo)
        table.insert(self._teaHousePendingList, teaHouseInfo)
        self:dispatchEvent( { name = self.EVENT_TEA_HOUSE_LIST_CHANGED, msg = { isFirst = isFirst, isLast = isLast } })
    end
end

function TeaHouseListModule:onRespDismissTeaHouse(msgData)
    if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespDismissTeaHouse.FLAG.DISMISSED then
        -- self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_LIST_RELOAD })
    end
end

function TeaHouseListModule:onRespCancelDismissTeaHouse(msgData)
    --TODO
end

function TeaHouseListModule:onRespCloseTeaHouse(msgData)
    if msgData.flag ~= TeaHouse.TeaHouseProtocol.RespCloseTeaHouse.FLAG.SUCCESS then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    TeaHouse.StorageTool.removeOwnerTeaHouse(TeaHouse.BridgeData.getNumberID(), teahouseData:getTeaNumber())
    local msg = self._isCloseTeaHouse and "YOU_HAVE_CLOSETEAHOUSE" or "YOU_HAVE_SUSPENDTEAHOUSE"
    if not teahouseData:isOwner() then
        msg = "OWNER_HAVE_SUSPENDTEAHOUSE"
    end
    self._isCloseTeaHouse = false
    self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CLOSE, msg = { data = msg } })
end

function TeaHouseListModule:initReq()
    self._isReqList = false
end

---请求进入比赛场服务
function TeaHouseListModule:reqInit()
    if self._isReqList then
        return
    end
    self._isReqList = true
    self._isCreateTeaHouse = false
    ---重新请求比赛场列表前初始化数据
    TeaHouse.manager.teahouseData:resetTeaHouseList()
    self._teaHousePendingList = {}

    -- if  TeaHouse.BridgeData.IsAgent() or TeaHouse.BridgeData.IsVirtualAgent() then
    self:reqServerAppid()
    -- else
    --     self:reqTeaHouseInfoByPlayerType(TeaHouse.BridgeData.getTeahouseAppid(), false)
    -- end
end

---请求比赛场服务id
function TeaHouseListModule:reqServerAppid()
    local netReqServerAppid = TeaHouse.manager.reqManager:createReq("NetReqServerAppid")
    netReqServerAppid:addReqCallBack(self, self.onNetReqServerAppid)
    netReqServerAppid:start(30)
end

function TeaHouseListModule:onNetReqServerAppid(req, type, appID)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:reqTeaHouseInfoByPlayerType(appID, true)
        if TeaHouse.BridgeData.isRemodelArea() then
            self:reqUserActiveNum()
        end
    else
        TeaHouse.manager.teahouseList:closeSuitableTeaHouseListView()
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "REQ_SERVERID_TIMEOUT")
    end
end

---请求比赛场列表信息
function TeaHouseListModule:reqTeaHouseInfoByPlayerType(nAppid, bAgent)
    local reqTeaHouseInfoByPlayerType = TeaHouse.TeaHouseProtocol.ReqTeaHouseInfoByPlayerType:new()
    self._nAskid = os.time()
    reqTeaHouseInfoByPlayerType.nAskid = self._nAskid
    reqTeaHouseInfoByPlayerType.szUrl = TeaHouse.BridgeData.getWeChatURL()
    reqTeaHouseInfoByPlayerType.szName = TeaHouse.BridgeData.getNickName()
    reqTeaHouseInfoByPlayerType.nAgentAreaid = TeaHouse.BridgeData.getApiHubRid()
    reqTeaHouseInfoByPlayerType.nGameLobbyid = TeaHouse.BridgeData.getLobbyID()
    local reqAppid = nAppid or TeaHouse.manager.teahouseData:getAppID()
    if bAgent then
        reqTeaHouseInfoByPlayerType.nPlayerType = reqTeaHouseInfoByPlayerType.PLAYER_TYPE.PT_TEAHOUSEOWN
    else
        reqTeaHouseInfoByPlayerType.nPlayerType = reqTeaHouseInfoByPlayerType.PLAYER_TYPE.PT_PLAYER
    end
    -- 请求是否可以退出比赛场
    reqTeaHouseInfoByPlayerType.nReqBit = 2
    TeaHouse.manager.netManager:sendProtocol(reqTeaHouseInfoByPlayerType, reqAppid)
end

function TeaHouseListModule:relaunchTeaHouse(teaHouseID, appID)
    TeaHouse.showLoading()
    TeaHouse.manager.teahouseData:setAppID(appID)
    local netReqReUseTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqReUseTeaHouse")
    netReqReUseTeaHouse:addReqCallBack(self, self.onNetReqReUseTeaHouse)
    netReqReUseTeaHouse:start(teaHouseID, 10)
end

function TeaHouseListModule:onNetReqReUseTeaHouse(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teaHouseInfo = TeaHouse.manager.teahouseData:getTeaHouseInfoByID(data.nTeaid)
        if teaHouseInfo ~= nil then
            teaHouseInfo.ucState = TeaHouse.TeaHouseProtocol.RespTeaHouseInfo.FLAG.OPEN
            self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_LIST_INFO_UPDATE, msg = { teaHouseID = data.nTeaid } })
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseListModule:pauseTeaHouse(nTeaNumber)
    TeaHouse.showLoading()
    self._isCloseTeaHouse = false
    local teahouseData = TeaHouse.manager.teahouseData
    local teaNumber = nTeaNumber or teahouseData:getTeaNumber()
    local netReqPauseTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqPauseTeaHouse")
    netReqPauseTeaHouse:addReqCallBack(self, self.onNetReqPauseTeaHouse)
    netReqPauseTeaHouse:start(teaNumber, 10)
end

function TeaHouseListModule:onNetReqPauseTeaHouse(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CLOSE, msg = { data = "YOU_HAVE_SUSPENDTEAHOUSE" } })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseListModule:closeTeaHouse(nTeaNumber)
    TeaHouse.showLoading()
    self._isCloseTeaHouse = true
    local teahouseData = TeaHouse.manager.teahouseData
    local teaNumber = nTeaNumber or teahouseData:getTeaNumber()
    local netReqCloseTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqCloseTeaHouse")
    netReqCloseTeaHouse:addReqCallBack(self, self.onNetReqCloseTeaHouse)
    netReqCloseTeaHouse:start(teaNumber, 10)
end

function TeaHouseListModule:onNetReqCloseTeaHouse(req, type, teaNumber)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        if SetupConfig.IsOpenNewTeahouseSetupView then
            TeaHouse.manager.viewManager:closeView("TeaHouseSetupViewNew")
        else
            TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
        end
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CLOSE, msg = { data = req:getMessage() } })
        TeaHouse.manager.teahouseData:removeTeaHouse(teaNumber)
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_LIST_REMOVE, msg = { teaHouseID = teaNumber } })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

--转型的比赛场又单独的比赛场列表界面
function TeaHouseListModule:openSuitableTeaHouseListView()
    if TeaHouse.BridgeData.isRemodelArea() then
        TeaHouse.manager.viewManager:openView("TeaHouseRemodelListView")
    else
        TeaHouse.manager.viewManager:openView("TeaHouseListView")
    end
end

function TeaHouseListModule:closeSuitableTeaHouseListView()
    if TeaHouse.BridgeData.isRemodelArea() then
        TeaHouse.manager.viewManager:closeView("TeaHouseRemodelListView")
    else
        TeaHouse.manager.viewManager:closeView("TeaHouseListView")
    end
end

function TeaHouseListModule:hideSuitableTeaHouseListView()
    if TeaHouse.BridgeData.isRemodelArea() then
        TeaHouse.manager.viewManager:hideView("TeaHouseRemodelListView")
    else
        TeaHouse.manager.viewManager:hideView("TeaHouseListView")
    end
end

function TeaHouseListModule:showSuitableTeaHouseListView() 
    if TeaHouse.BridgeData.isRemodelArea() then
        TeaHouse.manager.viewManager:showView("TeaHouseRemodelListView")
    else
        TeaHouse.manager.viewManager:showView("TeaHouseListView")
    end
end

function TeaHouseListModule:reqRegisterAgent()
    local phoneNum = TeaHouse.BridgeData.getPlayerPhone() 
    if phoneNum and phoneNum ~= "" then
        TeaHouse.showLoading()
        local netReqRegisterAgent = TeaHouse.manager.reqManager:createReq("NetReqRegisterAgent")
        netReqRegisterAgent:addReqCallBack(self, self.onNetRespRegisterAgent)
        netReqRegisterAgent:start(TeaHouse.BridgeData.getApiHubRid(),phoneNum,TeaHouse.BridgeData.getWeChatURL(), TeaHouse.BridgeData.getNickName(), 10)
    else
        local info = {}
        info.type = XH.TIP_LAYER_TYPE.OK_NO_CLOSE
        info.funcOK  = function()
            TeaHouse.BridgeUI.openPhoneBindView()
            TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_71)
        end
        TeaHouse.TipTool.showTip(info,"创建比赛场需要绑定手机号,\n点击确定前往绑定!")
    end
end

function TeaHouseListModule:onNetRespRegisterAgent(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.BridgeData.setAgent(true)
        self:dispatchEvent({ name = self.EVENT_REMODEL_TEA_HOUSE_REGISTER_AGENT, msg = {status = 1}})
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseListModule:getEveryLevelTeaNumberResult()
    return self._everyLevelTeaHouseData or {}
end

function TeaHouseListModule:setEveryLevelTeaNumberResult(data)
    self._everyLevelTeaHouseData = data or {}
end

--玩家比赛场活跃值
function TeaHouseListModule:reqUserActiveNum()
    local netReqUserActiveNum = TeaHouse.manager.reqManager:createReq("NetReqUserActiveNum")
    netReqUserActiveNum:addReqCallBack(self, self.onNetRespUserActiveNum)
    netReqUserActiveNum:start(10,false)
end

function TeaHouseListModule:onNetRespUserActiveNum(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:setTeaActiveValue(data.nValue)
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, req:getMessage())
    end
end

function TeaHouseListModule:onTeaLevelConfig(msgData)
    if msgData then
        self:dispatchEvent({ name = self.EVENT_REMODEL_TEA_HOUSE_UPDATE_CREATE_CONDITION, msg = msgData })
        TeaHouse.manager.teahouseData:setTeaLevelConfig(msgData.levelConfig)
        TeaHouse.manager.teahouseData:setUpTeaLevelActNum(msgData.nUpgradeActiveCount)
    end
end

--是否使用简单的人人比赛场模式,即取消旧的创建门槛
function TeaHouseListModule:isUsedSimpleRemodelTeaHouse()
    if TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.TAIZHOU then
        return true
    end
    return false
end

return TeaHouseListModule(9