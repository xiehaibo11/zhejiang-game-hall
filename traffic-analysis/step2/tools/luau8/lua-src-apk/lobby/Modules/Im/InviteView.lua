local IMInviteView = class("IMInviteView",XH.ViewBase)

IMInviteView.KW_WHITE_WIDTH = 5
IMInviteView.KW_MAX_RULE_WIDTH = 39

function IMInviteView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMInviteLayer.csb"
end

function IMInviteView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName = "_bg" },
        ["_KW_BTND_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_REFUSE"] = { varName = "_btnRefuse", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRefuse" },
        ["_KW_BTN_WAIT"] = { varName = "_btnWaite", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventWaite" },
        ["_KW_BTN_AGREE"] = { varName = "_btnAgree", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree" },
        ["_KW_IMG_HEAD"] = { varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE },
        ["_KW_PLAYER_NAME"] = { varName = "_txtName" },
        ["_KW_ROOM_RULE"] = { varName = "_txtRule" },
        ["_KW_MSG_LABEL_3"] = { varName = "_txtMsgLable3" },
        ["_KW_MSG_LABEL_4"] = { varName = "_txtMsgLable4" },
    }
end

function IMInviteView:ctor(param)
    param = param or {}
    IMInviteView.super.ctor(self, param)

    self._info = param.info

    self:initUI()

    -- 抛送push邀请曝光数据
    local data = {
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052710, data)
end

function IMInviteView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_UPDATE_INVITE_INFO", callBack = "updeteInviteInfo" },
    }
end

function IMInviteView:initUI()
    XH.lobby:getModule("Im"):dispatchEvent({name = XH.lobby:getModule("Im").EVENT_HIDE_NOTIFY_INVITE})
    self:setInviterName()
    self:setInviterHeadImg()
    self:setInviteRule()
end

function IMInviteView:updeteInviteInfo(event)
    if not event.info then
        return
    end
    self._info = event.info
    self:setInviterName()
    self:setInviterHeadImg()
    self:setInviteRule()
end

function IMInviteView:setInviterName()
    self._txtName:setString(XH.StringTool.cutStringByLength(self._info.askName or ""))
    local tmpPosX = self._txtMsgLable3:getPositionX() + self._txtMsgLable3:getContentSize().width + self.KW_WHITE_WIDTH
    self._txtName:setPositionX(tmpPosX)
    self._txtMsgLable4:setPositionX(self._txtName:getPositionX() + self._txtName:getContentSize().width + self.KW_WHITE_WIDTH)
end

function IMInviteView:setInviterHeadImg()
    if not self._info.headUrl then
        return
    end
    self._imgHead:setUrl(self._info.headUrl)
end

function IMInviteView:setInviteRule()
    local ruleStr = XH.lobby:getModule("Im"):getRoomInfoStr(self._info.gameName, self._info.charis, self._info.payType)
    self._txtRule:setString(XH.StringTool.newLineStringByMaxLen(ruleStr, self.KW_MAX_RULE_WIDTH))
end

function IMInviteView:onTouchEventClose(send,eventType)
    self:close()
end

function IMInviteView:onTouchEventRefuse(send,eventType)
    if self._info.inviteId then
        XH.lobby:getModule("Im"):reqReplyInvite(self._info.inviteId, XH.IMProtocol.REPLYTYPE.REFUSE)
        XH.lobby:getModule("Im"):removeMessageFromData(self._info.invitePlayer, XH.IMProtocol.MESSAGE_TYPE.INVITE)
    else
        XH.lobby:getModule("Im"):reqReplyReserveGame(self._info.areaid, self._info.numid, XH.IMProtocol.REPLYTYPE.REFUSE)
        XH.lobby:getModule("Im"):removeMessageFromData(self._info.numid, XH.IMProtocol.MESSAGE_TYPE.ORDER)
    end

    -- 抛送拒绝按钮数据
    local data = {
        block_item_id = "拒绝",
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052711, data)

    self:close()
end

function IMInviteView:onTouchEventWaite(send,eventType)
    XH.lobby:getModule("Im"):reqReplyInvite(self._info.inviteId, XH.IMProtocol.REPLYTYPE.WAIT)
    XH.lobby:getModule("Im"):dispatchEvent({ name = XH.lobby:getModule("Im").EVENT_SHOW_JOIN_NOW, msg = {show = true, info = self._info} })

    -- 抛送等我一会按钮数据
    local data = {
        block_item_id = "等我一会",
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052711, data)

    self:close()
end

function IMInviteView:onTouchEventAgree(send,eventType)
    if self._info.inviteId then
        XH.lobby:getModule("Im"):reqReplyInvite(self._info.inviteId, XH.IMProtocol.REPLYTYPE.AGREE)
        XH.lobby:getModule("Im"):removeMessageFromData(self._info.invitePlayer, XH.IMProtocol.MESSAGE_TYPE.INVITE)
    else
        XH.lobby:getModule("Im"):reqReplyReserveGame(self._info.areaid, self._info.numid, XH.IMProtocol.REPLYTYPE.AGREE)
        XH.lobby:getModule("Im"):removeMessageFromData(self._info.numid, XH.IMProtocol.MESSAGE_TYPE.ORDER)
    end

    -- 抛送同意按钮数据
    local data = {
        block_item_id = "同意",
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052711, data)

    self:close()
end

return IMInviteViewd