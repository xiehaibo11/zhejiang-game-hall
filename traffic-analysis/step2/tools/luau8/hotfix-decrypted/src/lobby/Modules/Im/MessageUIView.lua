local IMMessageUIView = class("IMMessageUIView",XH.ViewBase)

local DEFAULT_TIME = 3600 --默认持续时间
local DEFAULT_WIDTH = 100 --左右留白

function IMMessageUIView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMMessageUI.csb"
end

function IMMessageUIView:getBindingInfo()
    return {
        ["_KW_INVITE_ITEM"] = { varName = "_uImgBg" },
        ["_KW_INVITE_PLAYER"] = { varName = "_textInvitePlayer" },
        ["_KW_INVITE_TIME"] = { varName = "_textInviteTime" },
        ["_KW_TEXT_CONTENT"] = { varName="_content" },
        ["_KW_UI_AGREE"] = { varName = "_btnAgree" },
        ["_KW_UI_REFUSE"] = { varName = "_btnRefuse" },
        ["_KW_ROOM_ID"] = { varName = "_textRoomID" },
        ["_KW_TEXT_ROOM_INFO"] = { varName = "_textRoomInfo" },
        ["_KW_IMG_HEAD"] = { varName = "_headImg" },
    }
end

function IMMessageUIView:ctor(msg, id, defultPos)
    IMMessageUIView.super.ctor(self)
    self._isAlive = false
    self._id = id or 0
    self._maxAliveTime = DEFAULT_TIME
    self._msg = {}
    self._defultPos = defultPos
    self:setup(msg)
end

function IMMessageUIView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_HIDE_NOTIFY_INVITE", callBack = "hideSelf" },
    }
end

--设置内容和显示时间
function IMMessageUIView:setup(msg)
    self._maxAliveTime = DEFAULT_TIME
    self._msg = msg
    if msg then
        self:updateUI()
    end
end

function IMMessageUIView:updateUI()
    self._textInvitePlayer:setString(XH.StringTool.cutStringByLength(clone(self._msg.data.askName), 5))
--    self._textInviteTime:setString(XH.lobby:getModule("Im"):changeTime2Str(self._msg.data.askTime))
--    if self._msg.type and XH.lobby:getModule("Im").MESSAGE_CONTENT[self._msg.type] then
--        self._content:setString(XH.lobby:getModule("Im").MESSAGE_CONTENT[self._msg.type])
--    end
    XH.lobby:getModule("Im"):updateHeadImg(self._headImg, self._msg.data.headUrl)
    self._textRoomID:setString(self._msg.data.roomid)
    self._textRoomInfo:setString(XH.lobby:getModule("Im"):getRoomInfoStr(self._msg.data.gameName, self._msg.data.charis, self._msg.data.payType))
    self._btnAgree:addTouchEventListener(handler(self, self.onTouchEventAgreeInvite))
    self._btnRefuse:addTouchEventListener(handler(self, self.onTouchEventRefuseInvite))

    self:setPosition(self._defultPos.x - self._uImgBg:getContentSize().width / 2 - DEFAULT_WIDTH, self._defultPos.y)
end

--移除toast
function IMMessageUIView:hideSelf()
    self._isAlive = false
    self:close()
end

--展示一个toast
function IMMessageUIView:showSelf(zorder)
    local parent = self:getParent()
    if parent == nil then
        self:addToScene(zorder)
    end
    self._isAlive = true
    self:setVisible(true)
end

--添加到当前场景,不显示出来
function IMMessageUIView:addToScene(zorder)
    zorder = zorder or 10001
    local parent = display.getRunningScene()
    self:setName("IMMessageUIView")
    self:setVisible(false)
    parent:addChild(self, zorder)
end

--获取最长存在时间
function IMMessageUIView:getMaxAliveTime()
    return self._maxAliveTime
end

--唯一标识
function IMMessageUIView:getID()
    return self._id
end

function IMMessageUIView:setAlive(isAlive)
    self._isAlive = isAlive or false
end

function IMMessageUIView:getAlive()
    return self._isAlive
end

--获取toast的大小
function IMMessageUIView:getSize()
    return self._uImgBg:getContentSize()
end

function IMMessageUIView:onTouchEventAgreeInvite(send, eventType)
    if eventType == ccui.TouchEventType.began then
        XH.audioManager:play("BUTTON_CLICK")
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = self._msg.data
    if self._msg.type == XH.IMProtocol.MESSAGE_TYPE.INVITE then
        XH.lobby:getModule("Im"):reqReplyInvite(data.inviteId, XH.IMProtocol.REPLYTYPE.AGREE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.invitePlayer, self._msg.type)
    elseif self._msg.type == XH.IMProtocol.MESSAGE_TYPE.FOLLOW then
        XH.lobby:getModule("Im"):reqReplyWillJoinTable(data.follow_areaid, data.follow_numid, XH.IMProtocol.REPLYTYPE.AGREE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.follow_numid, self._msg.type)
    elseif self._msg.type == XH.IMProtocol.MESSAGE_TYPE.ORDER then
        XH.lobby:getModule("Im"):reqReplyReserveGame(data.areaid, data.numid, XH.IMProtocol.REPLYTYPE.AGREE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.numid, self._msg.type)
    end

    -- 抛送同意按钮数据
    local data2 = {
        block_item_id = "同意",
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052712, data2)

    self:hideSelf()
end

function IMMessageUIView:onTouchEventRefuseInvite(send, eventType)
    if eventType == ccui.TouchEventType.began then
        XH.audioManager:play("BUTTON_CLICK")
        send:setScale(0.95)
        send:setColor(cc.c3b(160,160,160))
    elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
        send:setScale(1.0)
        send:setColor(cc.c3b(255, 255, 255))
    end
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local data = self._msg.data
    if self._msg.type == XH.IMProtocol.MESSAGE_TYPE.INVITE then
        XH.lobby:getModule("Im"):reqReplyInvite(data.inviteId, XH.IMProtocol.REPLYTYPE.REFUSE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.invitePlayer, self._msg.type)
    elseif self._msg.type == XH.IMProtocol.MESSAGE_TYPE.FOLLOW then
        XH.lobby:getModule("Im"):reqReplyWillJoinTable(data.follow_areaid, data.follow_numid, XH.IMProtocol.REPLYTYPE.REFUSE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.follow_numid, self._msg.type)
    elseif self._msg.type == XH.IMProtocol.MESSAGE_TYPE.ORDER then
        XH.lobby:getModule("Im"):reqReplyReserveGame(data.areaid, data.numid, XH.IMProtocol.REPLYTYPE.REFUSE)
        XH.lobby:getModule("Im"):removeMessageFromData(data.numid, self._msg.type)
    end

    -- 抛送拒绝按钮数据
    local data2 = {
        block_item_id = "拒绝",
        block_label = "大厅-牌友"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.hyxt24052712, data2)

    self:hideSelf()
end

return IMMessageUIViewz