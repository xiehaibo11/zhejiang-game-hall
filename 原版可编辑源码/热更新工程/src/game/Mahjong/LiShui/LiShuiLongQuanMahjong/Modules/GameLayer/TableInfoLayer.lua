local TableInfoLayer = CF.gameClass("TableInfoLayer", CF.ViewBase)

function TableInfoLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/LongQuan/TableInfo.csb"
end

function TableInfoLayer:getBindingInfo()
    return {
        ["_KW_ING_STATE_FLAG_1"] = { varName = "_stateFlag1" },
        ["_KW_ING_STATE_FLAG_2"] = { varName = "_stateFlag2" },
        ["_KW_ING_STATE_FLAG_3"] = { varName = "_stateFlag3" },
        ["_KW_ING_STATE_FLAG_4"] = { varName = "_stateFlag4" },
        ["_KW_BTN_BU_DA"] = {varName="_buDaBtn", onTouchEnded = "onBuDaBtnClicked"},
        ["_KW_BTN_QI_SHOU_KOU"] = {varName="_qiShouKouBtn",onTouchEnded = "onQiShouKouBtnClicked"},
    }
end

function TableInfoLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_STATE_FLAG", callBack = "onUpdateStateFlag"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_UPDATE_SPECIAL_BTN_STATE", callBack = "onUpdateSpecialBtnState"},
    }
end

function TableInfoLayer:ctor(param)
	param = param or {}
	TableInfoLayer.super.ctor(self,param)
	
end

function TableInfoLayer:onUpdateStateFlag(event)
    local msg = event.msg
    local stateFlagUI = {"_stateFlag1", "_stateFlag2", "_stateFlag3", "_stateFlag4"}
    local nodeUI = self[stateFlagUI[msg.seat]]
    if nodeUI ~= nil then
        if 1 == msg.status then
            nodeUI:loadTexture("mah_flag_qishoukou.png", ccui.TextureResType.plistType)
        elseif 2 == msg.status then
            nodeUI:loadTexture("mah_flag_buda.png", ccui.TextureResType.plistType)
        end
        
        if msg.status > 0 then
            nodeUI:setVisible(msg.show)
        else
            nodeUI:setVisible(false)
        end
    end
end

function TableInfoLayer:onUpdateSpecialBtnState(event)
    local msg = event.msg
    if msg.showall == true then
        self._buDaBtn:setVisible(true)
        self._qiShouKouBtn:setVisible(true)

    elseif msg.showall == false then
        self._buDaBtn:setVisible(false)
        self._qiShouKouBtn:setVisible(false)
    else
        if 1 == msg.type then
            self._qiShouKouBtn:setVisible(msg.show)
        elseif 2 == msg.type then
            self._buDaBtn:setVisible(msg.show)
        end
    end
end

function TableInfoLayer:onBuDaBtnClicked(send,eventType)
    CF.msgManager:sendGameState(2)
    CF.msgManager:sendCancel(CF.game:getModule("GameLayer"):getGameData():getActionID())
    self._buDaBtn:setVisible(false)
    self._qiShouKouBtn:setVisible(false)
end

function TableInfoLayer:onQiShouKouBtnClicked(send,eventType)
    CF.msgManager:sendGameState(1)
    CF.msgManager:sendCancel(CF.game:getModule("GameLayer"):getGameData():getActionID())
    self._buDaBtn:setVisible(false)
    self._qiShouKouBtn:setVisible(false)
end

return TableInfoLayer
