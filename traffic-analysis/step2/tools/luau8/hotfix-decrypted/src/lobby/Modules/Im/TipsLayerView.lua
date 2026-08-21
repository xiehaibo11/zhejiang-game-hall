local IMTipsLayerView = class("IMTipsLayerView", XH.ViewBase)

IMTipsLayerView.TIPSLAYERTYPE = {
    ["CreateTips"] = "_panelCreate",
    ["InviteTips"] = "_panelInvite",
    ["ShieldTips"] = "_panelShield",
}

IMTipsLayerView.SHIELDBTNIMG = {
    [0] = "friend_btn_shield.png",
    [1] = "friend_btn_cancel_shield.png"
}

function IMTipsLayerView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMTipsLayer.csb"
end

function IMTipsLayerView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = {varName="KWA_BTND_CLOSE",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onCloseClicked"},
        ["_KW_PANEL_BG"] = { varName = "_Bg",onTouchEnded = "onCloseClicked" },
        ["_KWA_BTND_CREATE_ROOM"] = { varName = "KWA_BTND_CREATE_ROOM",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onCreateRoomClicked" },
        ["_KW_PANEL_CREATE"] = { varName = "_panelCreate" },
        ["_KW_PANEL_INVITE"] = { varName = "_panelInvite" },
        ["_KW_PANEL_SHIELD"] = { varName = "_panelShield" },
        ["_KWA_PLAYER_NAME"] = { varName = "_txtName" },
        ["_KWA_BTND_INVITE"] = { varName = "_btnInvite",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onInviteClicked" },
        ["_KW_TXT_NUM"] = { varName = "_txtShieldNum" },
        ["_KW_TXT_NAME"] = { varName = "_txtShieldName" },
        ["_KW_IMG_HEAD"] = { varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE },
        ["_KWA_BTND_SHIELD"] = { varName = "_btnShield",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onShieldClicked" },
    }
end

--加载窗口所需资
function IMTipsLayerView:ctor(param)
    param = param or {}
	IMTipsLayerView.super.ctor(self,param)

    self._type = param.ctype
    self._playerName = param.name
    self._playerNum = param.num
    self._playerUrl = param.url
    self._playerState = param.flag or XH.IMProtocol.SHIELDTYPE.NOTSHIELD

    self:initUI()

    -- 抛送设置弹窗曝光数据
    if self._type == "ShieldTips" then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052704)
    end
end

--刷新UI
function IMTipsLayerView:initUI()
    if self._type and self.TIPSLAYERTYPE[self._type] and self[self.TIPSLAYERTYPE[self._type]] then
        self._panelCreate:setVisible(false)
        self._panelShield:setVisible(false)
        self._panelInvite:setVisible(false)
        self[self.TIPSLAYERTYPE[self._type]]:setVisible(true)
    end
    if self._playerName and self._txtName and self._txtShieldName then
        local playerName = XH.StringTool.cutStringByLength(clone(self._playerName))
        self._txtName:setString(playerName)
        self._txtShieldName:setString(playerName)
    end
    if self._playerNum and self._txtShieldNum then
        self._txtShieldNum:setString(self._playerNum)
    end
    if self._playerUrl and self._imgHead then
        self._imgHead:setUrl(self._playerUrl)
    end
    if self._playerState and self._btnShield then
        if self._playerState == XH.IMProtocol.SHIELDTYPE.NOTSHIELD or self._playerState == XH.IMProtocol.SHIELDTYPE.SHIELD then
            self._btnShield:loadTexture(self.SHIELDBTNIMG[self._playerState], ccui.TextureResType.plistType)
        end
    end
end

function IMTipsLayerView:onCloseClicked(send,eventType)
    self:close()
end

function IMTipsLayerView:onCreateRoomClicked(send,eventType)
    XH.viewManager:openView("CreateBoxRoomView")
    self:close()
end

function IMTipsLayerView:onInviteClicked(send,eventType)
    -- if not XH.sdkManager:isInstallWeChat() then
    --     XH.TipTool.showTip({
    --         type = XH.TIP_LAYER_TYPE.OK,
    --     }, "您还未安装微信")
    --     return
    -- end
    XH.lobby:getModule("Im"):onTouchShare()
    self:close()
end

function IMTipsLayerView:onShieldClicked(send,eventType)
    if not self._playerState or (self._playerState ~= XH.IMProtocol.SHIELDTYPE.NOTSHIELD and self._playerState ~= XH.IMProtocol.SHIELDTYPE.SHIELD) then
        self:close()
        return
    end
    local bShield = self._playerState == XH.IMProtocol.SHIELDTYPE.NOTSHIELD and XH.IMProtocol.SHIELDTYPE.SHIELD or XH.IMProtocol.SHIELDTYPE.NOTSHIELD
    XH.lobby:getModule("Im"):reqShield(self._playerNum, bShield)
    self:close()

    if bShield == XH.IMProtocol.SHIELDTYPE.SHIELD then
        -- 抛送设置弹窗屏蔽按钮数据
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052705)
    else
        -- 抛送设置弹窗取消屏蔽按钮数据
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052706)
    end
end
 
return IMTipsLayerView