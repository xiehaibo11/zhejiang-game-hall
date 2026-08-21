local ShareView = CF.gameClass("ShareView", CF.ViewBase)

function ShareView:ctor(param)
    param = param or {}
    ShareView.super.ctor(self, param)
    self._shareType = param.shareType or CF.GameDefine.SHARE_SELECT.URL
    self._txtCopy:setString(self._shareType == CF.GameDefine.SHARE_SELECT.TEXT and "复制房间号" or "复制战绩")
    self._imgCopyTips:setVisible(false)
end

function ShareView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ShareLayer.csb"
end

function ShareView:getBindingInfo()
    return {
        ["_KW_BUTTON_HINT_CLOSE"] = { varName = "_Close", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClicked" },
        ["_KW_PANEL_BG"] = { varName = "_Close", type = CF.UI_TYPE.BUTTON, style = CF.UIButton.CLICK_STYLE.NOEFFECT, onTouchEnded = "onBtnCloseBGClicked" },
        ["_KW_PANEL_HINT_WX"] = { varName = "_panelWX", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShareWXClicked" },
        ["_KW_PANEL_HINT_COPY_TXT"] = { varName = "_panelCopy", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShareCopyClicked" },
        ["_KW_PANEL_SHARE_BG"] = { varName = "_panelShareBg" },
        ["_KW_IMG_SHARE_TITLE_BG"] = { varName = "_imgShareTitleBg" },
        ["_KW_BUTTON_HINT_COPY_TXT"] = { varName = "_txtCopy" },
        ["_KW_IMG_COPY_TIPS"] = { varName = "_imgCopyTips" }
    }
end

--微信分享
function ShareView:onBtnShareWXClicked(send, eventType)
    if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240117)
    end
    self:close()
    CF.game:getModule("Share"):doShareWX()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_25)
end

--复制文本
function ShareView:onBtnShareCopyClicked(send, eventType)
    if CF.roomData:getRoomMode2() == CF.ROOM_TYPE.BOX_ROOM then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.fj240116)
    end
    CF.game:getModule("Share"):doShareCopy()
    self:close()
    CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_26)
end

--将窗体显示到屏幕
function ShareView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.DIALOG
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
    end
    return self
end

--关闭按钮
function ShareView:onBtnCloseClicked(send, eventType)
    self:close()
end

function ShareView:onBtnCloseBGClicked(send, eventType)
    self:close()
end

return ShareView�	