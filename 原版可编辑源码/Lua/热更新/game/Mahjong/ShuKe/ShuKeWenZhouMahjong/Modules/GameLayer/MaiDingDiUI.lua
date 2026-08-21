local MaiDingDiUI = CF.gameClass("MaiDingDiUI", CF.ViewBase)

function MaiDingDiUI:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/ShuKe/MaiDingDi.csb"
end

function MaiDingDiUI:getBindingInfo()
    return {
        ["_KW_PANEL_MAI_DI"] = {varName="_maiDiPanel"},
        ["_KW_BTN_MAI_DI"] = {varName="_maiDiBtn",type = CF.UI_TYPE.BUTTON, onTouchEnded = "onMaiDiBtnClicked"},
        ["_KW_BTN_MAI_DI_CANCEL"] = {varName="_maiDiCancelBtn",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onMaiDiCancelBtnClicked"},
        ["_KW_PANEL_DING_DI"] = {varName="_dingDiPanel"},
        ["_KW_BTN_DING_DI"] = {varName="_dingDiBtn",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onDingDiBtnClicked"},
        ["_KW_BTN_DING_DI_CANCEL"] = {varName="_dingDiCancelBtn",type = CF.UI_TYPE.BUTTON,onTouchEnded = "onDingDiCancelBtnClicked"},
        ["_KW_PANEL_WAIT_MAI_DI"] = {varName="_waitMaiDiPanel"},
        ["_KW_PANEL_WAIT_DING_DI"] = {varName="_waitDingDiPanel"},
    }
end

function MaiDingDiUI:ctor(param)
    param = param or {}
    MaiDingDiUI.super.ctor(self,param)
end

function MaiDingDiUI:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MDD_BTN_STATE", callBack = "onMddBtnStateChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MDD_WAIT_STATE", callBack = "onMddWaitStateChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_MDD_INFO", callBack = "onMddInfoChanged"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MDD_STEP_END", callBack = "onMddStepEnd"},
    }
end

--将窗体显示到屏幕
function MaiDingDiUI:showSelf()
    local parent = display.getRunningScene()
    self:setName("MaiDingDiUI")
    parent:addChild(self, CF.ZORDER.WINDOW)
end

--移除窗口
function MaiDingDiUI:close()
    self:removeSelf()
end

function MaiDingDiUI:onMddStepEnd(event)
    self:close()
end

function MaiDingDiUI:onMddBtnStateChanged(event)
    local msg = event.msg
    if msg.bShow == false or (CF.roomData and CF.roomData:getIsSeer()) then
        self._maiDiPanel:setVisible(false)
        self._dingDiPanel:setVisible(false)
        return
    end
    if msg.nType == CF.GameDefine.MDDType.MAIDI then
        self._maiDiPanel:setVisible(true)
    elseif msg.nType == CF.GameDefine.MDDType.DINGDI then
        self._dingDiPanel:setVisible(true)
    end
end

function MaiDingDiUI:onMddWaitStateChanged(event)
    local msg = event.msg
    if msg.bShow == false then
        self._waitMaiDiPanel:setVisible(false)
        self._waitDingDiPanel:setVisible(false)
        return
    end
    if msg.nType == CF.GameDefine.MDDType.MAIDI then
        self._waitMaiDiPanel:setVisible(true)
    elseif msg.nType == CF.GameDefine.MDDType.DINGDI then
        self._waitDingDiPanel:setVisible(true)
    end
end

function MaiDingDiUI:onMddInfoChanged(event)
    
end

-- 买底
function MaiDingDiUI:onMaiDiBtnClicked(send, eventType)
    local nType = CF.GameDefine.MDDType.MAIDI
    self:sendMDdi(nType, true)
    self._maiDiPanel:setVisible(false)
end

-- 顶底
function MaiDingDiUI:onDingDiBtnClicked(send, eventType)
    local nType = CF.GameDefine.MDDType.DINGDI
    self:sendMDdi(nType, true)
    self._dingDiPanel:setVisible(false)
end

-- 取消买底
function MaiDingDiUI:onMaiDiCancelBtnClicked(send, eventType)
    local nType = CF.GameDefine.MDDType.MAIDI
    self:sendMDdi(nType, false)
    self._maiDiPanel:setVisible(false)
end

-- 取消顶底
function MaiDingDiUI:onDingDiCancelBtnClicked(send, eventType)
    local nType = CF.GameDefine.MDDType.DINGDI
    self:sendMDdi(nType, false)
    self._dingDiPanel:setVisible(false)
end

-- 发送是否买顶底
function MaiDingDiUI:sendMDdi(nType, bSure)
    CF.msgManager:sendMDdi(nType, bSure)
end

return MaiDingDiUI