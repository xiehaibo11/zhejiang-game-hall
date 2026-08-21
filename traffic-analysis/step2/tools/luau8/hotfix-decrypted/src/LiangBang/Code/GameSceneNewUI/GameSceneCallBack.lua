local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine", CURRENT_MODULE_NAME)
local Cell = import("GameCommon.Code.GameTea.Cell")
function GameScene:onLinkGameCallBack(cell, success, flag)

    if success == Cell.TYPE.SUCCESS then

    else
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK,
        }, cell:getMessage())
    end

    local wifiStateNode = ccui.Helper:seekWidgetByName(self:getRootNode(), GameSceneDefine.KW_UI_WIFI_STATE)
    if wifiStateNode then
        wifiStateNode:stopAllActions()
        local delay = cc.DelayTime:create(3)
        local sequence = cc.Sequence:create(delay, cc.CallFunc:create(function()
            if self._clientData._sendMobileSignalMsgTime == 0 then
            else
                self:showWifiState(3000)
                self:showDelayTime(9999)
            end
            self:sendMobileSignalMsg()
        end))
        local action = cc.RepeatForever:create(sequence)
        wifiStateNode:runAction(action)
    end
end

return GameSceneQ