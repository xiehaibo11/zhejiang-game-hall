local PersonalCenterGiveLayer = class("PersonalCenterGiveLayer", XH.ViewBase)

function PersonalCenterGiveLayer:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterGiveLayer.csb"
end

function PersonalCenterGiveLayer:getBindingInfo()
    return{
        ["_KW_BTN_GIVE_PROP"] = { varName = "_btnGiveProp", onTouchEnded = "onTouchEventTabBtn", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_GIVE_LOG"] = { varName = "_btnGiveLog", onTouchEnded = "onTouchEventTabBtn", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_CHANG_WARD"] = { varName = "_btnChangeWard", onTouchEnded = "onTouchEventTabBtn", type = XH.UI_TYPE.BUTTON },
        ["_KW_LAYER_NODE"] = { varName = "_nodeLayer" },
    }
end

function PersonalCenterGiveLayer:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalCenter"),eventKeyName = "EVENT_GIVE_LAYER_SHOW_TAB_LAYER", callBack = "eventShowTabLayer" },
    }
end

function PersonalCenterGiveLayer:ctor(param)
    param = param or {}
    PersonalCenterGiveLayer.super.ctor(self, param)

    self._btnList = {self._btnGiveProp, self._btnGiveLog, self._btnChangeWard}
    self._btnGiveProp:setTag(1)
    self._btnGiveLog:setTag(2)
    self._btnChangeWard:setTag(3)
    self._layerNameList = {"GivePropLayer","GiveLogLayer","ChangePasswordView"}
    self._threeData = {
        XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_GIVE_TIP_CLICK,
        XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_LOG_TIP_CLICK,
        XH.ThrowDataDefine.ButtonEnumTable.PERSONAL_CENTET_PWD_TIP_CLICK
    }
    self._layerList = {}
    self:initUI()
end

function PersonalCenterGiveLayer:initUI()
    self:showLayer(self._btnGiveProp)
end

function PersonalCenterGiveLayer:onTouchEventTabBtn(send, eventType)
    self:showLayer(send)
end

function PersonalCenterGiveLayer:showLayer(touchBtn, data)
    touchBtn = touchBtn or self._btnGiveProp
    self:changeTabBtn(touchBtn)
    local index = touchBtn:getTag()
    if self._layerList[index] == nil then
        self._layerList[index] = require("lobby.Modules.PersonalCenter.VIPCenter." .. self._layerNameList[index]).new(nil, self, data)
        self._nodeLayer:addChild(self._layerList[index])
        self._layerList[index]:setVisible(true)
        XH.throwDataManager:recordButtonClick(self._threeData[index])
    else
        self._layerList[index]:setVisible(true)
        if self._layerList[index].flush then
            self._layerList[index]:flush(data)
        end
    end

    for i, node in pairs(self._layerList) do
        if i ~= index then
            node:setVisible(false)
        end
    end

end

function PersonalCenterGiveLayer:changeTabBtn(btn)
    for i = 1, #self._btnList do
        if btn == self._btnList[i] then
            self._btnList[i]:setEnabled(false)
            self._btnList[i]:setTitleColor(cc.c3b(161,92,25))
            self._btnList[i]:setTitleFontSize(38)
        else
            self._btnList[i]:setEnabled(true)
            self._btnList[i]:setTitleColor(cc.c3b(170,136,92))
            self._btnList[i]:setTitleFontSize(36)
        end
    end
end

function PersonalCenterGiveLayer:eventShowTabLayer(event)
    if event and event.data then
        for i = 1,#self._layerNameList do
            if event.data.tabName == self._layerNameList[i] then
                self:showLayer(self._btnList[i],event.data.data)
                break
            end
        end
    end
end

return PersonalCenterGiveLayer�