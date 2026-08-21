---@class TeaHouseRemodelCtreateModule : Module
local TeaHouseRemodelCtreateModule = class("TeaHouseRemodelCtreateModule", TeaHouse.Module)
local KW_LEVEL_TEXT = {
    "初级",
    "中级",
    "高级",
    "无"
}

function TeaHouseRemodelCtreateModule:onCreate()
    TeaHouseRemodelCtreateModule.super.onCreate(self)
    self._teaHouseLevel = #KW_LEVEL_TEXT or 4
    local teahouseList = TeaHouse.manager.teahouseList
    self:createListener(teahouseList)
    :addEventListener(teahouseList.EVENT_TEA_HOUSE_LIST_ADD, handler(self, self.onTeaHouseListAdd))
end

function TeaHouseRemodelCtreateModule:getRemodelSetupConfig()
    local remodelSetupConfig = require("teahouse.Config.RemodelConfig")
    if remodelSetupConfig then
        return TeaHouse.manager.configManager.remodelConfig._createSetupConfig
    else
        return {}
    end
end

function TeaHouseRemodelCtreateModule:createRemodelTeaHouse(createMomentLevel)
    local createConfig = self:getRemodelSetupConfig()
    if createConfig and next(createConfig) then
        TeaHouse.manager.teahouseList:setIsCreateTeaHouse(true)
        local SetupConfig = TeaHouse.manager.configManager.SetupConfig
        local data = {}
        data.notesNum = createConfig.notesNum or "888"
        data.everyDayCostLimitNum = 888888
        data.newerNum = 8888
        data.rechargeNum = createConfig.rechargeNum or 0
        data.bOthersHiden = false
        data.bAutoAddRoomCard = false
        data.nLowCardNum = SetupConfig.AutoAddRoomCardLowCardNum
        data.nTransferCardNum = 0
        data.nRemindLowCardNum = -1
        -- 优先读取等级配置
        if createConfig.creatInfoWithLevel and createConfig.creatInfoWithLevel[createMomentLevel] then
            data.modeType = createConfig.creatInfoWithLevel[createMomentLevel].modeType or TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
            data.payTypeTable = createConfig.creatInfoWithLevel[createMomentLevel].payTypeTable or {[1]=TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN }
        else
            data.modeType = createConfig.modeType or TeaHouse.TeaHouseProtocol.ReqSetPayType.PayModePype.TYPE_PAY_MODEL_BEHID
            data.payTypeTable = createConfig.payTypeTable or {[1]=TeaHouse.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN }
        end
        data.nLevel = createMomentLevel
        self._teaHouseLevel = createMomentLevel
        self._createRemodelTeaHouse = true
        TeaHouse.manager.teahouseSetup:openRemodelCreate()
        TeaHouse.manager.teahouseSetup:createTeaHouse(data)
    else
        TeaHouse.TipTool.showTip({type = TeaHouse.TipTool.TIP_TYPE.OK}, "创建参数错误")
    end
end

function TeaHouseRemodelCtreateModule:onTeaHouseListAdd(event)
    if self._createRemodelTeaHouse then
        self._info = event.msg.info
        XH.lobby:getModule('Legitimacy'):reqIsUserHideGame(self._info.nTeaOwnerNumid, self._info.nTeaNumber)
        TeaHouse.manager.teahouseData:setAppID(self._info.nTeaHouseAppid)
        local isOwner = self._info.nTeaOwnerNumid == TeaHouse.BridgeData.getNumberID()
        TeaHouse.manager.teahouseGeneral:joinTeaHouse(isOwner and self._info.nTeaNumber or 0, self._info.nPasswd,nil,self._teaHouseLevel)
    end
end

function TeaHouseRemodelCtreateModule:firstJoinNewRemodelTeaHouse()
    if self._createRemodelTeaHouse then
        if TeaHouse.manager.teaHouseGuide:isCreateGuideFlowShowTip() then
            TeaHouse.manager.teaHouseGuide:startCreateTeaHouseGuide()
        else
            TeaHouse.manager.teahouseMain:showSetupTip()
        end
        self._info = nil
        self._createRemodelTeaHouse = nil
        TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_86,{TEAHOUSELEVEL = KW_LEVEL_TEXT[self._teaHouseLevel] })
        return true
    end
    return false
end

function TeaHouseRemodelCtreateModule:cleanRemodelCreateInfo()
    self._info = nil
    self._createRemodelTeaHouse = nil
    self._teaHouseLevel = nil
end

return TeaHouseRemodelCtreateModule;