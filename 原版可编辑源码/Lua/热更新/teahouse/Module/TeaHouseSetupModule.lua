----------------------------------------
--@class TeaHouseSetupModule : Module
--@author hejiafeng
--@date 2019-09-10
----------------------------------------
local TeaHouseSetupModule = class("TeaHouseSetupModule", TeaHouse.Module)
local MutiVersionGameConfig =  require("teahouse.Config.MutiVersionGameConfig")
local GameNewTypeConfiger = require("app.Config.Parse.GameNewTypeConfiger")

TeaHouseSetupModule.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS = "EVENT_SETUP_REQ_USEPROPCNT_SUCCESS"
TeaHouseSetupModule.EVENT_SETUP_REQ_PAYTYPE_SUCCESS = "EVENT_SETUP_REQ_PAYTYPE_SUCCESS"
TeaHouseSetupModule.EVENT_SETUP_UPDATE_PLAYMODEINFO = "EVENT_SETUP_UPDATE_PLAYMODEINFO"
TeaHouseSetupModule.EVENT_SETUP_UPDATE_SINGLE_PLAYMODE = "EVENT_SETUP_UPDATE_SINGLE_PLAYMODE"
TeaHouseSetupModule.EVENT_SETUP_UPDATE_AGENTPROPCNT = "EVENT_SETUP_UPDATE_AGENTPROPCNT"
TeaHouseSetupModule.EVENT_SETUP_UPDATE_OTHER = "EVENT_SETUP_UPDATE_OTHER"
TeaHouseSetupModule.EVENT_SETUP_UPDATE_NOTIFY = "EVENT_SETUP_UPDATE_NOTIFY"
TeaHouseSetupModule.EVENT_UPDATE_CHOICEVIEW_TEAHOUSE_NUMBER = "EVENT_UPDATE_CHOICEVIEW_TEAHOUSE_NUMBER"
TeaHouseSetupModule.EVENT_CREATE_TEAHOUSE_ROOM = "EVENT_CREATE_TEAHOUSE_ROOM"
TeaHouseSetupModule.EVENT_REQ_INVITE_ACT = "EVENT_REQ_INVITE_ACT"

local KW_SETUP_VIEW_TYPE = {
    CREATE = 1,
    SETUP = 2
}

function TeaHouseSetupModule:onCreate()
    TeaHouseSetupModule.super.onCreate(self)

    self:initData()

    self._viewType = nil--KW_SETUP_VIEW_TYPE.SETUP

    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_ADD, handler(self, self.onTeaHouseListAdd))
end

function TeaHouseSetupModule:initData()
    self._nAskid = 0
    self._agentPropCnt = 0
    self._teaNumber = 0
    self._stModeList = {}
    self._teaHouseNotes = ""

    --支付类型
    self._teaPayType = 0
    self._teaPayModeType = 0
    self._payTypeTable = {}
    self._bCurrencyFirst = false
    self._bLastCost = false

    self._createTeaHouseMessage = "创建比赛场成功"
    self._setupTeaHouseMessage = "设置比赛场成功"

    self._nDailyUsePropCnt = 0
    self._nNewerUsePropCnt = 0
    self._nSubPropCnt = 0
    self._bStrangerCanSee = false
    self._bAutoAddRoomCard = false
    self._nRemindLowCardNum = 0
    self._nTransferCardNum = -1

    -- self._bReqPropCntSuccess = false
    self._bReqUsePropCntSuccess = false
    self._bReqPlayerCostSuccess = false

    -- 方案新增
    self._stFangAnModeList = {}
    self._stModifyFangAn = {}
    self._createTeaHouseInfo = nil
end

function TeaHouseSetupModule:openTeaHouseCreate()
    self:initData()
    self._viewType = KW_SETUP_VIEW_TYPE.CREATE
end

function TeaHouseSetupModule:openRemodelCreate()
    self._viewType = nil
end

function TeaHouseSetupModule:openTeaHouseSetup(teaNumber, teaHouseNotes)
    self:initData()
    self._viewType = KW_SETUP_VIEW_TYPE.SETUP
    self._teaNumber = teaNumber
    self._teaHouseNotes = teaHouseNotes
end

function TeaHouseSetupModule:getTeaNumber()
    return self._teaNumber
end

function TeaHouseSetupModule:setTeaNumber(teaNumber)
    self._teaNumber = teaNumber
end

function TeaHouseSetupModule:getTeaHouseNotes()
    return self._teaHouseNotes
end

function TeaHouseSetupModule:getPlayModeList()
    return self._stModeList
end

function TeaHouseSetupModule:getPlayModeByPlayModeId(playModeId)
    if not playModeId then
        return nil
    end
    for _, v in pairs(self._stModeList) do
        if v.nPlayModeId == playModeId then
            return v
        end
    end
    return nil
end

function TeaHouseSetupModule:setPlayModeByPlayModeId(modeId)
    if not modeId then
        return
    end
    if self._curStMode.nPlayModeId > 0 then
        self._curStMode.nModeId = modeId
    else
        self._curStMode.nPlayModeId = modeId
    end
    if not self._curStMode.nPlayModeId then
        return
    end
    for i, v in pairs(self._stModeList) do
        if v.nPlayModeId == self._curStMode.nPlayModeId then
            local remainTime = self._stModeList[i].aRemainTime
            self._stModeList[i] = self._curStMode
            self._stModeList[i].aRemainTime = remainTime
            return
        end
    end
    table.insert(self._stModeList, self._curStMode)
end

function TeaHouseSetupModule:getPlayModeDataById(playModeId)
    for i, v in pairs(self._stModeList) do
        if v.nPlayModeId == playModeId then
            return v
        end
    end
    return nil
end

function TeaHouseSetupModule:setPlayModeEnable(playModeId, bEnable)
    if not playModeId then
        return
    end
    for i, v in pairs(self._stModeList) do
        if v.nPlayModeId == playModeId then
            v.bIsEnable = bEnable
        end
    end
end

function TeaHouseSetupModule:getPayModeType()
    return self._teaPayModeType
end

function TeaHouseSetupModule:getPayTypeTable()
    return self._payTypeTable
end

--是否优先使用一卡通
function TeaHouseSetupModule:getCurrencyFirstBool()
    return self._bCurrencyFirst
end

--每日消耗限制
function TeaHouseSetupModule:getDailyUsePropCnt()
    return self._nDailyUsePropCnt
end

function TeaHouseSetupModule:getAgentPropCount()
    return self._agentPropCnt
end

function TeaHouseSetupModule:getSubPropCnt()
    return self._nSubPropCnt
end

--陌生人可见
function TeaHouseSetupModule:getStrangerCanSeeBool()
    return self._bStrangerCanSee
end

--自动转房卡
function TeaHouseSetupModule:getAutoAddRoomCardBool()
    return self._bAutoAddRoomCard
end

function TeaHouseSetupModule:getAutoAddRoomCardNum()
    return self._nTransferCardNum
end

function TeaHouseSetupModule:getLackCardNotifyNum()
    return self._nRemindLowCardNum
end

function TeaHouseSetupModule:addPlayMode(openLayer, gameid, isPromote)
    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    if #self._stModeList >= SetupConfig.PlayModeMaxCount then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, string.format("最多只能设置%d个固定玩法！", SetupConfig.PlayModeMaxCount))
        return
    end
    -- 初级场只能有1个玩法
    if #self._stModeList >= 1 and TeaHouse.manager.teahouseMain:isShowPhoneBindTip("绑定手机后可以升级至高级比赛场，增加创建比赛玩法数量，是否绑定？", self._teaNumber) then
        return 
    end
    openLayer = openLayer or ""
    TeaHouse.manager.viewManager:openView("TeaHouseCreatePlayModeView", 0, { playModeId = 0, payModeType = self._teaPayModeType, payTypeTable = self._payTypeTable, openLayer = openLayer, nGameId = gameid, isPromote = isPromote})
end

function TeaHouseSetupModule:addFourToTwoPlayMode(nGameId)
    TeaHouse.manager.viewManager:openView("TeaHouseCreatePlayModeView", 0, {
        playModeId = 0,
        nGameId = nGameId,
        payModeType = self._teaPayModeType,
        payTypeTable = self._payTypeTable
    })
end
function TeaHouseSetupModule:modifyPlayMode(playModeId)
    local nowData = self:getPlayModeDataById(playModeId) or {}
    TeaHouse.manager.viewManager:openView("TeaHouseCreatePlayModeView", 0, {
        playModeId = playModeId,
        acData = nowData.acData,
        nGameId = nowData.nGameId,
        anCount = nowData.anCount,
        anPlayerCount = nowData.anPlayerCount,
        bIsCountLock = nowData.bIsCountLock,
        bIsPlayerLock = nowData.bIsPlayerLock,
        payModeType = self._teaPayModeType,
        payTypeTable = self._payTypeTable
    })
end

function TeaHouseSetupModule:modifyTableColor(playModeId)
    local nowData = self:getPlayModeDataById(playModeId) or {}
    TeaHouse.manager.viewManager:openView("TeaHouseTableColorSetView", 0, {
       data = nowData
    })
end

--向服务端请求设置固定玩法
function TeaHouseSetupModule:setPlayModeInfo(data, playModeId, isFourToTwo, req, callBackFunc, nAutoCreate, nAwarded)
    TeaHouse.showLoading()
    local stMode = {}
    --是否固定局数
    stMode.bIsCountLock = data.bIsCountLock
    --是否固定玩法
    stMode.bIsPlayModeLock = true
    --是否固定人数
    stMode.bIsPlayerLock = data.bIsPlayerLock
    stMode.nPlayerSize = #data.nPlayerSize
    stMode.anPlayerCount = data.nPlayerSize

    stMode.anCount = data.cont
    stMode.nCountSize = #data.cont

    stMode.nGameId = data.gameid
    stMode.nBase = data.base
    stMode.nType = data.type
    stMode.acName = data.name
    stMode.acData = data.data
    stMode.nPropID = TeaHouse.BridgeData.getRoomCardID() --房卡id

    local existStMode = self:getPlayModeByPlayModeId(playModeId)
    if existStMode then
        stMode.nPlayModeId = existStMode.nPlayModeId
        stMode.bIsEnable = existStMode.bIsEnable
    else
        stMode.nPlayModeId = 0
        stMode.bIsEnable = true
    end

    stMode.aPlayModeType = nAutoCreate or 0
    stMode.aAwarded = nAwarded or 0

    self._curStMode = stMode

    callBackFunc = callBackFunc or self.onNetReqSetPlayModeEx
    req = req or self
    local netReqSetPlayModeEx = TeaHouse.manager.reqManager:createReq("NetReqSetPlayModeEx")
    netReqSetPlayModeEx:addReqCallBack(req, callBackFunc)
    netReqSetPlayModeEx:start(self._teaNumber, stMode, nAutoCreate, nAwarded, 10)
end

--向服务端请求设置颜色玩法
function TeaHouseSetupModule:setPlayModeColorInfo(data, playModeId, isFourToTwo)
    TeaHouse.showLoading()
    local stMode = {}
    --是否固定局数
    stMode.bIsCountLock = data.bIsCountLock
    --是否固定玩法
    stMode.bIsPlayModeLock = true
    --是否固定人数
    stMode.bIsPlayerLock = data.bIsPlayerLock
    stMode.nPlayerSize = data.nPlayerSize
    stMode.anPlayerCount = data.anPlayerCount
    stMode.anCount = data.anCount
    stMode.nCountSize = data.nCountSize
    stMode.nGameId = data.nGameId
    stMode.nBase = data.nBase
    stMode.nType = data.nType
    stMode.acName = data.acName
    stMode.acData = data.acData
    stMode.nPropID = TeaHouse.BridgeData.getRoomCardID() --房卡id

    local existStMode = self:getPlayModeByPlayModeId(playModeId)
    if existStMode then
        stMode.nPlayModeId = existStMode.nPlayModeId
        stMode.bIsEnable = existStMode.bIsEnable
    else
        stMode.nPlayModeId = 0
        stMode.bIsEnable = true
    end
    self._curStMode = stMode
    local netReqSetPlayModeEx = TeaHouse.manager.reqManager:createReq("NetReqSetPlayModeEx")
    netReqSetPlayModeEx:addReqCallBack(self, self.onNetReqSetPlayModeEx)
    netReqSetPlayModeEx:start(self._teaNumber, stMode, 10)
end

--服务端设置固定玩法回调
function TeaHouseSetupModule:onNetReqSetPlayModeEx(req, type, data)
    TeaHouse.hideLoading()

    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:setPlayModeByPlayModeId(data.nModeId)
        local getStMode = self._curStMode
        self._curStMode = {}
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "FIXEDMODE_SET_SUCCESS")
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_PLAYMODEINFO })
        TeaHouse.manager.viewManager:closeView("TeaHouseCreatePlayModeView")
        if TeaHouse.checkIsPromote2Open() then
            TeaHouse.updateSetup()
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

-- 请求所有的固定玩法(唯一固定)
function TeaHouseSetupModule:reqPlayModeInfo()
    local netReqPlayModeInfo = TeaHouse.manager.reqManager:createReq("NetReqPlayModeInfoEx")
    netReqPlayModeInfo:addReqCallBack(self, self.onReqPlayModeInfo)
    netReqPlayModeInfo:start(self._teaNumber, 10)
end

-- 请求所有的固定玩法回调
function TeaHouseSetupModule:onReqPlayModeInfo(req, type, data)
    if req._teaID == self._teaNumber then
        if type == TeaHouse.Req.TYPE.SUCCESS then
            self._stModeList = {}
            for i = 1, data.nSize do
                table.insert(self._stModeList, data.astMode[i])
            end
            self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_PLAYMODEINFO })
        end
    end
end

--请求删除固定模式
function TeaHouseSetupModule:deletePlayModeEx(nPlayModeId)
    TeaHouse.showLoading()

    local netReqDelPlayModeEx = TeaHouse.manager.reqManager:createReq("NetReqDelPlayModeEx")
    netReqDelPlayModeEx:addReqCallBack(self, self.onReqDelPlayModeEx)
    netReqDelPlayModeEx:start(self._teaNumber, nPlayModeId, 10)
end

--请求删除固定模式回调
function TeaHouseSetupModule:onReqDelPlayModeEx(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local index = 0
        for i = 1, #self._stModeList do
            if self._stModeList[i].nPlayModeId == data.nModeId then
                index = i
                break
            end
        end

        if index > 0 then
            table.remove(self._stModeList, index)
        end
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "FIXEDMODE_DELETE_SUCCESS")
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
    self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_PLAYMODEINFO })
end

--发送延迟解散比赛场
function TeaHouseSetupModule:onSendDelayDismissTeaHouseMsg()
    self._bIsShutDownTeaHouse = nil
    local netReqDismissTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqDismissTeaHouse")
    local globalData = self:getGlobalData()
    netReqDismissTeaHouse:addReqCallBack(self, self.onRespDelayDismissTeaHouseCallBack)
    netReqDismissTeaHouse:start(globalData.nTeaHouseTeaNumber, 10)
end

--发送延迟解散比赛场回调
function TeaHouseSetupModule:onReqDismissTeaHouse(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "TEAHOUSE_DISMISS_AFTERTWODAY")
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseSetupModule:setupTeaHouse(data)
    self._bPayTypeChanged = false
    if self._teaPayModeType ~= data.modeType then
        self._bPayTypeChanged = true
    end
    if #data.payTypeTable ~= #self._payTypeTable then
        self._bPayTypeChanged = true
    end
    for k, v in pairs(data.payTypeTable) do
        if v ~= self._payTypeTable[k] then
            self._bPayTypeChanged = true
        end
    end
    if data.bCurrencyFirst ~= self._bCurrencyFirst then
        self._bPayTypeChanged = true
    end
    if data.bLastCost ~= self._bLastCost then
        self._bPayTypeChanged = true
    end
    if self._bPayTypeChanged then
        self._teaPayModeType = data.modeType
        self._payTypeTable = data.payTypeTable
        self._teaPayType = data.payTypeTable[1]
        self._bCurrencyFirst = data.bCurrencyFirst
        self._bLastCost = data.bLastCost
    end
    self:reqSetupTeaHouse(data)
end

--请求修改比赛场设置
function TeaHouseSetupModule:reqSetupTeaHouse(setData)
    TeaHouse.showLoading()

    local SetupConfig = TeaHouse.manager.configManager.SetupConfig
    local transmitSetupTeaHouse = TeaHouse.manager.reqManager:createReq("TransmitSetupTeaHouse")
    transmitSetupTeaHouse:addReqCallBack(self, self.onReqSetupTeaHouseCallBack)
    local data = {}
    data.nSubRoomCard = setData.rechargeNum
    data.sRemarks = setData.notesNum
    data.nDailyUseProp = setData.everyDayCostLimitNum
    data.nNewerUseProp = setData.newerNum
    data.bOthersHiden = setData.bOthersHiden
    data.nEnableAutoTransferCard = setData.bAutoAddRoomCard and 1 or 0
    data.nLowCardNum = setData.nLowCardNum
    data.nTransferCardNum = setData.nTransferCardNum
    data.nRemindLowCardNum = setData.nRemindLowCardNum
    transmitSetupTeaHouse:start(self._teaNumber, data, 30)
end

--请求修改比赛场设置回调
function TeaHouseSetupModule:onReqSetupTeaHouseCallBack(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        teahouseData:setTeaHouseNameExt(req:getRemarks(), req:getTeaNumber()) --备注
        -- teahouseData:setSelfPropcount(teahouseData:getSelfPropcount() + req:getSubPropCnt(), req:getTeaNumber()) --总划卡数
        teahouseData:setMaxDailyPropCount(req:getDailyUseProp(), req:getTeaNumber()) --每日最大消耗
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_NOTIFY, msg = { teaNumber = req:getTeaNumber() } })
        --TODO 是否陌生人可见、是否自动转房卡
        self._setupTeaHouseMessage = req:getMessage()
        if self._bPayTypeChanged then
            self:reqSetTeaHousePayType()
        else
            local funOk = function()
                TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
            end
            if not TeaHouse.BridgeData.isTeaCreateGroup() then 
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,funcOK = funOk, funcClose = funOk, }, self._setupTeaHouseMessage)
            end
            TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
        end
        if TeaHouse.BridgeData.isRemodelArea() then
            TeaHouse.BridgeData.reqPlayerDrop()
        end
    else
        TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
        local funOk = function()
            TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
        end
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,funcOK = funOk, funcClose = funOk, }, req:getMessage())
    end
end

function TeaHouseSetupModule:createTeaHouse(data)
    self._teaPayModeType = data.modeType
    self._payTypeTable = data.payTypeTable
    self._teaPayType = data.payTypeTable[1]
    self:reqOpenTeaHouse(data)
end

function TeaHouseSetupModule:reqRegisterAgentAndCreate()
    TeaHouse.showLoading()
    local phoneNum = tonumber(XH.playerData:getPlayerPhone()) or 0
    local netReqRegisterAgent = TeaHouse.manager.reqManager:createReq("NetReqRegisterAgent")
    netReqRegisterAgent:addReqCallBack(self, self.onNetRespRegisterAgent)
    netReqRegisterAgent:start(TeaHouse.BridgeData.getApiHubRid(), phoneNum, TeaHouse.BridgeData.getWeChatURL(), TeaHouse.BridgeData.getNickName(), 10)
end

function TeaHouseSetupModule:onNetRespRegisterAgent(req, type, teaID)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        XH.areaData:setVirtualAgentState(true)
        self:dispatchEvent({ name = self.EVENT_CREATE_TEAHOUSE_ROOM })
    else
        TeaHouse.TipTool.showTip( { type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseSetupModule:reqOpenTeaHouse(createData)
    TeaHouse.showLoading()
    self._currentTeaLevel = createData.nLevel or 0
    local transmitCreateTeaHouse = TeaHouse.manager.reqManager:createReq("TransmitCreateTeaHouse")
    transmitCreateTeaHouse:addReqCallBack(self, self.onCreateTeaHouseCallBack)
    local data = {}
    data.nSubRoomCard = createData.rechargeNum
    data.sRemarks = createData.notesNum
    data.nDailyUseProp = createData.everyDayCostLimitNum
    data.nNewerUseProp = createData.newerNum
    data.bOthersHiden = createData.bOthersHiden or false
    data.nEnableAutoTransferCard = createData.bAutoAddRoomCard and 1 or 0
    data.nLowCardNum = createData.nLowCardNum
    data.nTransferCardNum = createData.nTransferCardNum
    data.nRemindLowCardNum = createData.nRemindLowCardNum
    data.nLevel = self._currentTeaLevel
    transmitCreateTeaHouse:start(data, TeaHouse.manager.teahouseList:getAskId(), 8)
end

function TeaHouseSetupModule:onCreateTeaHouseCallBack(req, type, teaNumber)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._teaNumber = teaNumber
        self._createTeaHouseMessage = req:getMessage()
        if TeaHouse.BridgeData.isRemodelArea() then
            TeaHouse.BridgeData.reqPlayerDrop()
        end
        self:reqSetTeaHousePayType()
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.oh25041502, {club_id = XH.areaData:getAreaID() .. "_" .. (teaNumber or "")})
    else
        TeaHouse.manager.teaHouseRemodeCreate:cleanRemodelCreateInfo()
        -- 通过返回值确认
        local isShowTipRemodel = false
        if req:getMessage() == "CREATE_JUNIOR_MAX" then
            self._currentTeaLevel = TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR
            isShowTipRemodel = true
        end
        if req:getMessage() == "CREATE_SENIOR_MAX" then
            self._currentTeaLevel = TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR
            isShowTipRemodel = true
        end
        if TeaHouse.BridgeData.isRemodelArea() and isShowTipRemodel then
            local condition = teaNumber.nUnLockActiveValue or  3000 --解锁比赛场的默认数值
            local activeValue = tonumber(TeaHouse.manager.teahouseData:getTeaActiveValue())
            
            if  self._currentTeaLevel == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR  then
                local createConditionData = TeaHouse.manager.teahouseData:getTeaLevelConfig()
                local tipMsg = "您的高级比赛场数量已达上限。"
                local info = {}
                local list = TeaHouse.manager.teahouseData:getTeaHouseList()
                local nCnt = 0
                for k, v in pairs(list) do
                    if v.nTeaOwnerNumid == XH.playerData:getNumberID() and TeaHouse.manager.teahouseData:getTeaHouseLevelByNumber(v.nTeaNumber) == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.SENIOR  then
                        nCnt = nCnt + 1
                    end
                end
                if nCnt < createConditionData[self._currentTeaLevel].tCanCreateTeaCount then
                    nCnt = createConditionData[self._currentTeaLevel].tCanCreateTeaCount
                end
                if nCnt < createConditionData[self._currentTeaLevel].tMaxTeaCount then
                    tipMsg = string.format("您的高级比赛场数量已达上限，活跃值达到%s即可解锁一个高级比赛场创建权限，当前活跃值为%s，是否解锁？",condition,activeValue)
                    info.type = XH.TIP_LAYER_TYPE.OK_CANCEL
                    info.funcOK  = function()
                        if activeValue >= tonumber(condition) then
                            self:reqUnLockTeaHouseNumber()
                        else
                            TeaHouse.TipTool.showToast("TEAHOUSE_ACTIVE_VALUE_NOT_ENOUGH")
                        end
                    end
                else
                    info.type = XH.TIP_LAYER_TYPE.OK
                end
                TeaHouse.TipTool.showTip(info,tipMsg)
            elseif self._currentTeaLevel == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.INTERMEDIATE  then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的中级比赛场数量已达上限")
            elseif self._currentTeaLevel == TeaHouse.manager.configManager.remodelConfig.TEAHOUSELEVEL.JUNIOR  then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "您的初级比赛场数量已达上限")
            end
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
        end
    end
end

--请求设置比赛场支付类型
function TeaHouseSetupModule:reqSetTeaHousePayType()
    TeaHouse.showLoading()

    local netReqSetPayType = TeaHouse.manager.reqManager:createReq("NetReqSetPayType")
    netReqSetPayType:addReqCallBack(self, self.onSetTeaHousePayType)
    netReqSetPayType:start(self._teaNumber, self._payTypeTable, 10, self._teaPayType, self._teaPayModeType, self._bCurrencyFirst, self._bLastCost)
end

--请求设置比赛场支付类型回调
function TeaHouseSetupModule:onSetTeaHousePayType(req, type)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if self._viewType == KW_SETUP_VIEW_TYPE.CREATE then
            local openTeahouseFun = function()
                if self._createTeaHouseInfo then
                    XH.lobby:getModule('Legitimacy'):reqIsUserHideGame(self._createTeaHouseInfo.nTeaOwnerNumid, self._createTeaHouseInfo.nTeaNumber)
                    TeaHouse.manager.teahouseData:setAppID(self._createTeaHouseInfo.nTeaHouseAppid)

                    local isOwner = self._createTeaHouseInfo.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()
                    TeaHouse.manager.teahouseGeneral:joinTeaHouse(isOwner and self._createTeaHouseInfo.nTeaNumber or 0, self._createTeaHouseInfo.nPasswd)
                end
            end
            if not TeaHouse.BridgeData.isTeaCreateGroup() then 
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK, funcOK = openTeahouseFun, funClose = openTeahouseFun }, self._createTeaHouseMessage)
            end
            TeaHouse.manager.viewManager:closeView("TeaHouseCreateView")
        elseif self._viewType == KW_SETUP_VIEW_TYPE.SETUP then
            local funOk = function()
                TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
            end
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,funcOK = funOk, funcClose = funOk, }, self._setupTeaHouseMessage)
            TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
        end
    else
        local funOk = function()
            TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
        end
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,funcOK = funOk, funcClose = funOk, }, req:getMessage())
        TeaHouse.manager.viewManager:closeView("TeaHouseCreateView")
        TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
    end
end

function TeaHouseSetupModule:reqTeaHousePropCnt(teaNum)
    local netReqTeaHouseUsePropCnt = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseUsePropCnt")
    netReqTeaHouseUsePropCnt:addReqCallBack(self, self.onReqTeaHouseUsePropCntCallBack)
    netReqTeaHouseUsePropCnt:start(teaNum or self._teaNumber, TeaHouse.TeaHouseProtocol.ReqTeaHouseUsePropCnt.ASK_TYPE.AT_ALL, 10)
    -- netReqTeaHouseUsePropCnt:start(teahouseData:getTeaNumber(), TeaHouse.TeaHouseProtocol.ReqTeaHouseUsePropCnt.ASK_TYPE.AT_ALL, 10)
end

function TeaHouseSetupModule:reqTeaHousePayType()
    TeaHouse.showLoading()
    local netReqTeaHousePayType = TeaHouse.manager.reqManager:createReq("NetReqTeaHousePayType")
    netReqTeaHousePayType:addReqCallBack(self, self.onTeaHousePayType)
    netReqTeaHousePayType:start(self._teaNumber, 10)
end

function TeaHouseSetupModule:onTeaHousePayType(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._teaPayType = data.nPayType
        self._payTypeTable = data.anPaySet
        self._bCurrencyFirst = data.bCurrencyFirst
        self._bLastCost = data.bLastCost

        --兼容服务端逻辑，当modetype为0时，需要根据不同区特判
        if data.nPayModeType == 0 then
            local payModeTypeConf = TeaHouse.manager.configManager:loadConfig("PayModeTypeConfig")
            local lobbyID = TeaHouse.BridgeData.getLobbyID()
            if payModeTypeConf[tonumber(lobbyID)] then
                data.nPayModeType = payModeTypeConf[tonumber(lobbyID)]
            else
                local bLiuTongMode = false
                for _, tempPayType in pairs(self._payTypeTable) do
                    if tempPayType == TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
                        bLiuTongMode = true
                    end
                end
                --如果是流通模式，则不处理
                --如果还是0，默认为后项付费
                if not bLiuTongMode then
                    data.nPayModeType = TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
                end
            end
        end
        self._teaPayModeType = data.nPayModeType
        -- self:judgeNeedFitOld(data.anPaySet)
        self:dispatchEvent({ name = self.EVENT_SETUP_REQ_PAYTYPE_SUCCESS })
    else
        TeaHouse.manager.viewManager:closeView("TeaHouseSetupView")
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseSetupModule:onReqTeaHouseUsePropCntCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._nDailyUsePropCnt = req._nDailyUseProp
        self._nNewerUsePropCnt = req._nNewerUseProp
        self._nSubPropCnt = req._nTeaProp

        self._bReqUsePropCntSuccess = true
        --房卡ID请求成功才显示房卡数（大小卡问题）
        if self._bReqPlayerCostSuccess then
            self:dispatchEvent({ name = self.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS })
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

--设置玩法是否可见
function TeaHouseSetupModule:reqEnablePlayModeEx(playModeId)
    TeaHouse.showLoading()

    local playModeData = self:getPlayModeByPlayModeId(playModeId)
    local netReqEnablePlayModeEx = TeaHouse.manager.reqManager:createReq("NetReqEnablePlayModeEx")
    netReqEnablePlayModeEx:addReqCallBack(self, self.onReqEnablePlayModeEx)
    netReqEnablePlayModeEx:start(self._teaNumber, playModeId, not playModeData.bIsEnable, 10)
    -- self:judgeNeedUpdateOldMode(playModeData)
end

function TeaHouseSetupModule:onReqEnablePlayModeEx(req, type, data)
    TeaHouse.hideLoading()

    if type == TeaHouse.Req.TYPE.SUCCESS then
        local playModeData = self:getPlayModeByPlayModeId(data.nModeId)
        local oldEnable = playModeData.bIsEnable
        self:setPlayModeEnable(data.nModeId, not oldEnable)
        if not oldEnable then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "FIXEDMODE_HAVE_ENABLE")
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "FIXEDMODE_HAVE_CANCEL")
        end
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_SINGLE_PLAYMODE, msg = { nPlayModeId = data.nModeId } })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

--请求房卡总库存
function TeaHouseSetupModule:reqAgentPropCnt()
    local netReqPropCnt = TeaHouse.manager.reqManager:createReq("NetReqPropCnt")
    netReqPropCnt:addReqCallBack(self, self.onNetReqPropCnt)
    netReqPropCnt:start(self._teaNumber, 10)
end

function TeaHouseSetupModule:onNetReqPropCnt(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._agentPropCnt = data.nPropCnt

        -- self._bReqPropCntSuccess = true
        -- --房卡ID请求成功才显示房卡数（大小卡问题）
        -- if self._bReqPlayerCostSuccess then
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_AGENTPROPCNT })
        -- end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseSetupModule:reqPlayerTeaHouseCost(teaid)
    local netReqTeaHousePlayerCost = TeaHouse.manager.reqManager:createReq("NetReqTeaHousePlayerCost")
    netReqTeaHousePlayerCost:addReqCallBack(self, self.onNetReqTeaHousePlayerCost)
    netReqTeaHousePlayerCost:start(teaid or self._teaNumber, TeaHouse.BridgeData.getNumberID(), 15)
end

function TeaHouseSetupModule:onNetReqTeaHousePlayerCost(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._nPropid = data.nPropid

        self._bReqPlayerCostSuccess = true
        -- if self._bReqPropCntSuccess then
        --     self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_AGENTPROPCNT })
        -- end
        if self._bReqUsePropCntSuccess then
            self:dispatchEvent({ name = self.EVENT_SETUP_REQ_USEPROPCNT_SUCCESS })
        end
    end
end

function TeaHouseSetupModule:getExchangeRate()
    if self._nPropid and self._nPropid == TeaHouse.BridgeData.getSmallRoomCardID() then
        return TeaHouse.BridgeData.getSmallRoomCardRatio() or 1
    end
    return 1
end

--请求是否陌生人可见
function TeaHouseSetupModule:reqOthersHideTHInfo()
    local netReqOthersHideTHInfo = TeaHouse.manager.reqManager:createReq("NetReqOthersHideTHInfo")
    netReqOthersHideTHInfo:addReqCallBack(self, self.onNetReqOthersHideTHInfo)
    netReqOthersHideTHInfo:start(self._teaNumber, 10)
end

function TeaHouseSetupModule:onNetReqOthersHideTHInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._bStrangerCanSee = not data.bHide
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_OTHER })
    end
end

--请求是否开启自动划卡
function TeaHouseSetupModule:reqGetAutoTransferCard()
    local netReqGetAutoTransferCard = TeaHouse.manager.reqManager:createReq("NetReqGetAutoTransferCard")
    netReqGetAutoTransferCard:addReqCallBack(self, self.onNetReqGetAutoTransferCard)
    netReqGetAutoTransferCard:start(self._teaNumber, 10)
end

function TeaHouseSetupModule:onNetReqGetAutoTransferCard(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._bAutoAddRoomCard = data.nEnable == 1
        self._nRemindLowCardNum = data.nRemindLowCardNum
        self._nTransferCardNum = data.nTransferCardNum
        self:dispatchEvent({ name = self.EVENT_SETUP_UPDATE_OTHER })
    end
end

--解锁高级比赛场
function TeaHouseSetupModule:reqUnLockTeaHouseNumber()
    TeaHouse.showLoading()
    local netReqUnLockTeaInfo = TeaHouse.manager.reqManager:createReq("NetReqUnLockTeaInfo")
    netReqUnLockTeaInfo:addReqCallBack(self, self.onNetRespUnLockTeaInfo)
    netReqUnLockTeaInfo:start(TeaHouse.TeaHouseProtocol.ReqUnLockTeaInfo.UNLOCK_TYPE.TEACOUNT,nil,10)
end

function TeaHouseSetupModule:onNetRespUnLockTeaInfo(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.TipTool.showToast("UNLOCK_SUCCESS")
        local levelConfig = TeaHouse.manager.teahouseData:getTeaLevelConfig()
        local TeaHouseRemodelConfig = TeaHouse.manager.configManager.remodelConfig
        levelConfig[TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR].tCanCreateTeaCount = levelConfig[TeaHouseRemodelConfig.TEAHOUSELEVEL.SENIOR].tCanCreateTeaCount + 1
        self:dispatchEvent({ name = self.EVENT_UPDATE_CHOICEVIEW_TEAHOUSE_NUMBER })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

-- -- 绍兴3D完全迁移完毕后可删除
-- function TeaHouseSetupModule:judgeNeedUpdateOldMode(playMode)
--     self._stModifyFangAn = {}
--     if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
--         self._stModifyFangAn.acIndex = #self._stModeList + 1
--         for i = 1, #self._stModeList do
--             if self._stModeList[i].nPlayModeId == playMode.nPlayModeId and self._stModeList[i].itemIndex then
--                 self._stModifyFangAn.acIndex = self._stModeList[i].itemIndex
--                 break
--             end
--         end
--         self._stModifyFangAn.acPlayMode = playMode
--         self:reqAllFangAnMode()
--     end
-- end

--请求方案
function TeaHouseSetupModule:reqAllFangAnMode()
    TeaHouse.showLoading()
    local netReqPlayModeInfo = TeaHouse.manager.reqManager:createReq("NetReqPlayModeInfo")
    netReqPlayModeInfo:addReqCallBack(self, self.onReqAllFangAnMode)
    netReqPlayModeInfo:start(self._teaNumber, 10)
end

function TeaHouseSetupModule:onReqAllFangAnMode(req, type, data)
    TeaHouse.hideLoading()
    if req._teaNumber == self._teaNumber then
        if type == TeaHouse.Req.TYPE.SUCCESS then
            self._stFangAnModeList = {}
            for i = 1, data.nSize do
                table.insert(self._stFangAnModeList, data.astMode[i])
            end
            self:reqSetFangAnMode()
        end
    end
end

--设置方案
function TeaHouseSetupModule:reqSetFangAnMode()
    if self._stModifyFangAn.acIndex and self._stModifyFangAn.acPlayMode and self._stFangAnModeList then
        local nModeId = 0
        for i =1, #self._stFangAnModeList do
            if i == self._stModifyFangAn.acIndex then
                nModeId = self._stFangAnModeList[i].nModeId
            end
        end
        local stMode = self:getFangAnModeData(nModeId)
        TeaHouse.showLoading()
        local netReqSetFangAnMode = TeaHouse.manager.reqManager:createReq("NetReqSetPlayMode")
        netReqSetFangAnMode:addReqCallBack(self, self.onReqSetFangAnMode)
        netReqSetFangAnMode:start(self._teaNumber, stMode, 10)
    end
end

function TeaHouseSetupModule:onReqSetFangAnMode(req, type, data)
    TeaHouse.hideLoading()
end

function TeaHouseSetupModule:getFangAnModeData(nModeId)
    local acMode = self._stModifyFangAn.acPlayMode
    local stMode = {}
    stMode.nType = 0
    stMode.ucFlag = 0
    stMode.nTableCnt = 1
    stMode.nBase = acMode.nBase
    stMode.szName = acMode.acName
    stMode.szData = acMode.acData .. string.format("fangAn=%d;",self._stModifyFangAn.acIndex)
    stMode.nModeId = nModeId or 0
    stMode.nTeaId = self._teaNumber
    stMode.nGameid = acMode.nGameId
    stMode.nCont = acMode.anCount[1]
    stMode.nIsEnable = acMode.bIsEnable
    stMode.nSize = acMode.anPlayerCount[1]
    stMode.nPropID = TeaHouse.BridgeData.getRoomCardID()
    stMode.nPrePropID = TeaHouse.BridgeData.getRoomCardID()
    return stMode
end

-- -- 暂时加上特判,企业包未设置比赛场支付模式的情况
-- function TeaHouseSetupModule:judgeNeedFitOld(payTypeTable)
--     if TeaHouse.BridgeData.getLobbyID() == XH.LOBBY_ID.SHAOXING3D then
--         if #payTypeTable == 0 then
--             self._payTypeTable = { [1] = 1; }
--         end
--     end
-- end

function TeaHouseSetupModule:onTeaHouseListAdd(event)
    if event then
        self._createTeaHouseInfo = event.msg.info
    end
end

function TeaHouseSetupModule:reqTaskProtocol(taskid,specialStr,callBcak)
    local reqTaskPercent = require("app.Req.Task.ReqTaskProtocol")
    local TaskPercent = reqTaskPercent:new()
    local specialString = specialStr or ""
    TaskPercent:start(taskid, 1, 0, TeaHouse.BridgeData.getSRSGroupID(), 10, specialString)
    TaskPercent:addReqCallBack(self, callBcak)
end

return TeaHouseSetupModule