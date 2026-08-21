local viewBase = require("lobby.Modules.IdentityCheck.View")
local HealthSystemView = class("HealthSystemView", viewBase)

local _KW_IMG_AUTH_DONE = "_KW_IMG_AUTH_DONE"
local _KW_IMG_AUTH_MASK = "_KW_IMG_AUTH_MASK"

function HealthSystemView:getCSBPath()
    if device.platform == "windows" or (device.platform == "android" and XH.SysTool:CompareToBundleVersion("1.2.5") )then
        return "cocosStudio/hall/CSB/PersonalCenter/PerCenterZFBHealthLayer.csb"
    end
    return "cocosStudio/hall/CSB/PersonalCenter/PerCenterHealthSysLayer.csb"
end

function HealthSystemView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("IdentityCheck"),eventKeyName = "EVNET_REAL_NAME_BACK", callBack = "refreshStatus" },
    }
end

function HealthSystemView:initUserID()
    self._textUserID:setText("序号：" .. XH.playerData:getNumberID())
    self._textUserID:setVisible(false)
end

function HealthSystemView:initLayerNode(isAutoBindUI,isRealnameIng,event)
    XH.UITool.setVisible(self._rootPanel,_KW_IMG_AUTH_DONE,false)
    XH.UITool.setVisible(self._rootPanel,_KW_IMG_AUTH_MASK,false)
    local bIdentityStatus = XH.playerData:getIdentityStatus()
    if (bIdentityStatus == 0 or bIdentityStatus == 1) or( event and event.msg) then
        XH.UITool.setVisible(self._rootPanel,_KW_IMG_AUTH_DONE,true)
        XH.UITool.setVisible(self._rootPanel,_KW_IMG_AUTH_MASK,true)
    end
end

function HealthSystemView:refreshStatus(event)
    self:initLayerNode(nil,nil,event)
end
return HealthSystemView