local ContractRelationLayer = class("ContractRelationLayer", CF.ViewBase)

local KW_TXT_CHENG_BAO_ = "KW_TXT_CHENG_BAO_"
local KW_TXT_CHENG_BAO_LEFT = "KW_TXT_CHENG_BAO_LEFT"
local KW_TXT_CHENG_BAO_RIGHT = "KW_TXT_CHENG_BAO_RIGHT"
local KW_TXT_NO_CHENG_BAO = "KW_TXT_NO_CHENG_BAO"

function ContractRelationLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/HuZhou/ContractRelation.csb"
end

function ContractRelationLayer:getBindingInfo()
    return {
        ["_KW_UI_CHENG_BAO_NODE"] = {varName = "_contractRelationNode"},
        ["_KW_UI_CHENG_BAO_UP"] = {varName = "_contractUpBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onUpOrDownBtnClicked"},
        ["_KW_UI_CHENG_BAO_DOWN"] = {varName = "_contractDownBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onUpOrDownBtnClicked"},
    }
end

function ContractRelationLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_CONTRACT_INFO", callBack = "refreshContractInfo"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_CONTRACT_INFO", callBack = "clearContractInfo"}
    }
end

function ContractRelationLayer:ctor(param)
    param = param or {}
    ContractRelationLayer.super.ctor(self,param)
    self._isUpOrDown = false --up:true down:false
    self:clearContractInfo()
end

function ContractRelationLayer:refreshContractInfo(event)
    local index = event.data.showIndexArg
    local name1 = event.data.nameOne
    local name2 = event.data.nameTwo
    local visible = event.data.visible
    if not self._contractRelationNode then return end
    local txtPanel = self._contractRelationNode:getChildByName(KW_TXT_CHENG_BAO_ .. index)
    if not txtPanel then return end
    if visible then
        local left = txtPanel:getChildByName(KW_TXT_CHENG_BAO_LEFT)
        local right = txtPanel:getChildByName(KW_TXT_CHENG_BAO_RIGHT)
        if not left then return end
        if not right then return end
        left:setString(name1)
        right:setString(name2)
    end
    txtPanel:setVisible(visible)
    local txtNoChengBao = self._contractRelationNode:getChildByName(KW_TXT_NO_CHENG_BAO)
    if not txtNoChengBao then return end
    txtNoChengBao:setVisible(false)
end

--承包下拉框相关
function ContractRelationLayer:clearContractInfo(event)
    for index = 1, 4 do
        local tempInfo = {data={showIndexArg = index, nameOne = nil, nameTwo = nil, visible = false}}
        self:refreshContractInfo(tempInfo)
    end
    if not self._contractRelationNode then return end    
    local txtNoChengBao = self._contractRelationNode:getChildByName(KW_TXT_NO_CHENG_BAO)
    if not txtNoChengBao then return end
    txtNoChengBao:setVisible(true)
end

function ContractRelationLayer:onUpOrDownBtnClicked(send, eventType)
    self:showContractInfo(self._isUpOrDown)
end

function ContractRelationLayer:showContractInfo(arg)
    if self._contractUpBtn then self._contractUpBtn:setVisible(not arg) end
    if self._contractDownBtn then self._contractDownBtn:setVisible(arg) end
    if self._contractRelationNode then
        if arg then
            self._contractRelationNode:runAction(cc.MoveBy:create(0.2, cc.p(0, 210)))
        else
            self._contractRelationNode:runAction(cc.MoveBy:create(0.2, cc.p(0, -210)))
        end
    end
    self._isUpOrDown = not self._isUpOrDown
end

return ContractRelationLayer�