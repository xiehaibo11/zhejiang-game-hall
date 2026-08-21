local AddMultipleModule = CF.gameClass("AddMultipleModule", CF.ModuleBase)
AddMultipleModule.EVENT_GAME_ADD_MULTIPLE = "EVENT_GAME_ADD_MULTIPLE"
AddMultipleModule.EVENT_RETURN_PROP = "EVENT_RETURN_PROP"
AddMultipleModule.EVENT_ADD_MULTIPLE_INFO = "EVENT_ADD_MULTIPLE_INFO"
AddMultipleModule.EVENT_CLEAR_ADD_MULTIPLE = "EVENT_CLEAR_ADD_MULTIPLE"
AddMultipleModule.EVENT_HIDE_SUPER_ADDMULTI = "EVENT_HIDE_SUPER_ADDMULTI"

local addMultipleCardPropID = 150741
local comsumeAddMultipleCardCount = 1
local comsumeAddMulitpleDiamondCount = 50

function AddMultipleModule:ctor()
    AddMultipleModule.super.ctor(self)
    self._addMultipleType = {}
end

function AddMultipleModule:getSubXYDealList()
    return {
        {callback = handler(self, self.onMsgAddMulti), msgClass = CF.GameProtocol.msgAddMulti}, --601
        {callback = handler(self, self.onMsgReturnProp), msgClass = CF.GameProtocol.msgReturnProp}, --602
        {callback = handler(self, self.onMsgAddMultiInfo), msgClass = CF.GameProtocol.msgAddMultiInfo}, --603
    }
end

function AddMultipleModule:getGameData()
    return CF.game:getModule("GameLayer"):getGameData()
end

function AddMultipleModule:clearAddMultipleType()
    self._addMultipleType = {}
end

function AddMultipleModule:setAddMultipleType(seat,multipleType)
    self._addMultipleType[seat] = multipleType
end

function AddMultipleModule:getAddMultipleType(seat)
    return self._addMultipleType[seat] or 0
end 

function AddMultipleModule:getAddMultipleCardPropID()
    return addMultipleCardPropID
end 

function AddMultipleModule:getComsumeAddMultipleCardCount()
    return comsumeAddMultipleCardCount
end 

function AddMultipleModule:getComsumeAddMulitpleDiamondCount()
    return comsumeAddMulitpleDiamondCount
end 

function AddMultipleModule:sendDeductAddMultipleProp(propID,count,custom)
    CF.msgManager:sendRequestUseProps(propID, count, nil , custom)
end 

function AddMultipleModule:canUseAddMultipleProp()
    local addMultipleCardCount = CF.game:getModule("PropUse"):getPropCnt(addMultipleCardPropID)  
    if addMultipleCardCount >= comsumeAddMultipleCardCount then 
        return true
    else
        local diamondPropID = CF.areaData:getPropDiamndID()
        if CF.game:getModule("PropUse"):getPropCnt(diamondPropID) >= comsumeAddMulitpleDiamondCount then 
            return true
        end
    end
    return false
end 


function AddMultipleModule:deductAddMultipleProp()
    local param = {}
    local addMultipleCardCount = CF.game:getModule("PropUse"):getPropCnt(addMultipleCardPropID)  
    if addMultipleCardCount >= comsumeAddMultipleCardCount then 
        local props = {
            prop_id = addMultipleCardPropID,         --道具id
            count = comsumeAddMultipleCardCount,           --道具数量
            burse_type = 1,  --钱包类型
        }
        param.props = props
    else
        local diamondPropID = CF.areaData:getPropDiamndID()
        if CF.game:getModule("PropUse"):getPropCnt(diamondPropID) >= comsumeAddMulitpleDiamondCount then 
            local props = {
                prop_id = CF.areaData:getPropDiamndID(),         --道具id
                count = comsumeAddMulitpleDiamondCount,           --道具数量
                burse_type = 1,  --钱包类型
            }
            param.props = props
        else 
            return
        end
    end 
    local strParam = "taskname=add_multi;add_multi=" .. CF.GameProtocol.msgAddMulti.ADDMULTITYPE.SUPER .. ";inst=" .. addMultipleCardPropID .. ";logtype=1601;"
    param.custom = strParam
    
    self:sendDeductAddMultipleProp(param.props.prop_id, param.props.count,param.custom)
end

function AddMultipleModule:onUpdateStepID(stepID)
    if stepID and stepID == CF.GameDefine.GAME_STEP.GAME_STEP_ADD_MULTIPLE_END then 
        self:dispatchEvent({name = self.EVENT_CLEAR_ADD_MULTIPLE})
    end 
end

function AddMultipleModule:onMsgAddMulti(msgData)
    self:setAddMultipleType(msgData.seat,msgData.multi)
    self:dispatchEvent({name = self.EVENT_GAME_ADD_MULTIPLE, msg = {seat = msgData.seat,multi = msgData.multi}})
end

function AddMultipleModule:onMsgReturnProp(msgData)
    self:dispatchEvent({name = self.EVENT_RETURN_PROP, msg = {data = msgData}})
end

function AddMultipleModule:onMsgAddMultiInfo(msgData)
    self:dispatchEvent({name = self.EVENT_ADD_MULTIPLE_INFO, msg = {data = msgData}})
end

function AddMultipleModule:updateLayout(hideSuper)
    self:dispatchEvent({name = self.EVENT_HIDE_SUPER_ADDMULTI, msg = {hideSuper = hideSuper}})
end

return AddMultipleModule;