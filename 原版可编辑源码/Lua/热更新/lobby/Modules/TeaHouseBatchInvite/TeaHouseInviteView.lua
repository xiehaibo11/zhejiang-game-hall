local TeaHouseInviteView = class("TeaHouseInviteView",XH.ViewBase)
local GameSubConfiger = require("app.Config.Parse.GameSubConfiger")
local PlayModeShowCounts = 2

function TeaHouseInviteView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TeaBatchInvite/TeaBatchInviteLayer.csb"
end

function TeaHouseInviteView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName = "_bg" },
        ["_KW_BTN_REFUSE"] = { varName = "_btnRefuse", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRefuse" },
        ["_KW_BTN_AGREE"] = { varName = "_btnAgree", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree" },
        ["_KW_IMG_HEAD"] = { varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE },
        ["_KW_PLAYER_NAME"] = { varName = "_txtName" },
        ["_KW_MSG_LABEL_1"] = { varName = "_txtMsgLable1" },
        ["_KW_MSG_LABEL_2"] = { varName = "_txtMsgLable2" },
        ["_KW_MSG_LABEL_3"] = { varName = "_txtMsgLable3" },
        ["_KW_MSG_LABEL_4"] = { varName = "_txtMsgLable4" },
    }
end

function TeaHouseInviteView:ctor(param)
    param = param or {}
    TeaHouseInviteView.super.ctor(self, param)
    self._info = param.teaHouseInfo
    self:initUI()
end

function TeaHouseInviteView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_UPDATE_INVITE_INFO", callBack = "updeteInviteInfo" },
    }
end

function TeaHouseInviteView:initUI()
    self:setInviterName()
    self:setInviterHeadImg()
end

function TeaHouseInviteView:updeteInviteInfo(event)
    if not event.info then
        return
    end
    self._info = event.info
    self:setInviterName()
    self:setInviterHeadImg()
end

function TeaHouseInviteView:setInviterName()
    -- 您的牌友【领队昵称+序号】
    self._txtMsgLable1:setText(string.format("您的好友【%s %s】",XH.StringTool.cutStringByLength(self._info.szNickName or ""),self._info.numid))
    self._txtMsgLable2:setText(string.format("邀请您加入他的比赛场【%s】",self._info.teapwd))
    local tempPlayModeName
    local textStr
    tempPlayModeName = ""
    if next(self._info.playmodes) then
        for i=1,PlayModeShowCounts do
            if self._info.playmodes[i] then
                local gameName = GameSubConfiger:getGameNameByGameId(self._info.playmodes[i])
                tempPlayModeName = tempPlayModeName .. gameName
                if i ~= PlayModeShowCounts and self._info.playmodes[i+1] then
                    tempPlayModeName = tempPlayModeName .."、"
                end
            end
        end
        textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='46' color='#AE895D'>比赛场内常玩:<font color='#C84747'>" 
        .. tempPlayModeName .. "</font><font color='#AE895D'>等</font></font>"
    else
        textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='46' color='#AE895D'>比赛场内可选您常用的玩法</font>"
    end
    local richText = ccui.RichText:createWithXML(textStr, { })
    richText:setAnchorPoint(cc.p(0, 1))
    richText:ignoreContentAdaptWithSize(false)
    richText:setContentSize(921,54)
    richText:setHorizontalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_CENTER)
    richText:setPosition(cc.p(self._txtMsgLable3))
    self._txtMsgLable3:addChild(richText) 
    if self._info.friendcount < 1 then
        self._txtMsgLable4:setVisible(false)
    else
        local textMsg = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='46' color='#AE895D'>提示：比赛场内有<font color='#C84747'>"..self._info.friendcount.. "</font>位玩家曾与您对局</font>"
        local richText2 = ccui.RichText:createWithXML(textMsg, { })
        richText2:setAnchorPoint(cc.p(0, 1))
        richText2:ignoreContentAdaptWithSize(false)
        richText2:setContentSize(676,54)
        richText2:setHorizontalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_CENTER)
        richText2:setPosition(cc.p(self._txtMsgLable4))
        self._txtMsgLable4:addChild(richText2)
    end
end

function TeaHouseInviteView:setInviterHeadImg()
    if not self._info.szUrl then
        return
    end
    self._imgHead:setUrl(self._info.szUrl)
end

function TeaHouseInviteView:onTouchEventClose(send,eventType)
    self:close()
end

function TeaHouseInviteView:onTouchEventRefuse(send,eventType)
    -- 超过5次不再弹出问卷
    local key  = "PLAYE_REFUSE_INVITE_FIRST"
    local pop_num =  cc.UserDefault:getInstance():getIntegerForKey(key, 0)
    if pop_num <= 5 then
        cc.UserDefault:getInstance():setIntegerForKey(key, pop_num + 1)
        XH.viewManager:openView("TeaHouseInviteQuestionView", nil, {teaHouseInfo = self._info})
    else
        XH.lobby:getModule("TeaHouseBatchInvite"):reqDealRecomendInvitation(self._info.teaappid, false, self._info.numid, self._info.teaid)
    end
    self:close()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BATCH_INVITE_REFUSE)
end

function TeaHouseInviteView:onTouchEventAgree(send,eventType)
    XH.lobby:getModule("TeaHouseBatchInvite"):reqDealRecomendInvitation(self._info.teaappid, true, self._info.numid, self._info.teaid)
    self:close()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BATCH_INVITE_AGREE)
end

function TeaHouseInviteView:isUserRefuseInvite()
    return 
end

return TeaHouseInviteView