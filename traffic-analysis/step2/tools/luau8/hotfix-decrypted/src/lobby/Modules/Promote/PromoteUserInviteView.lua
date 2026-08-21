local PromoteUserInviteView = class("PromoteUserInviteView", XH.ViewBase)

function PromoteUserInviteView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Promote/PromoteUserInviteLayer.csb"
end

function PromoteUserInviteView:getBindingInfo()
    return {
        --
        ["_KW_IMG_BG"] = {varName = "_bg"},
        ["_KW_BTN_REFUSE"] = {varName = "_btnRefuse", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRefuse"},
        ["_KW_BTN_AGREE"] = {varName = "_btnAgree", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree"},
        ["_KW_IMG_HEAD"] = {varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE},
        ["_KW_PLAYER_NAME"] = {varName = "_txtName"},
        ["_KW_MSG_LABEL_1"] = {varName = "_txtMsgLable1"},
        ["_KW_MSG_LABEL_2"] = {varName = "_txtMsgLable2"},
        ["_KW_MSG_LABEL_3"] = {varName = "_txtMsgLable3"},
        ["_KW_MSG_LABEL_4"] = {varName = "_txtMsgLable4"},
        ["_KW_ROOM_RULE"] = {varName = "_txtRule"}
    }
end

function PromoteUserInviteView:ctor(param)
    PromoteUserInviteView.super.ctor(self, param)
    self._info = param
    self:initUI()
end

function PromoteUserInviteView:initUI()
    self:setInviterName()
    self:setInviterHeadImg()
end

function PromoteUserInviteView:setInviterName()
    -- 您的牌友【领队昵称+序号】
    self._txtMsgLable1:setText(string.format("【%s %s】", XH.StringTool.cutStringByLength(self._info.nick or ""), self._info.numid))
    self._txtMsgLable2:setText(XH.StringTool.replaceMatchStr(string.format("邀请您加入他的比赛场【%s】", self._info.teaPasswd)))

    -- 玩法：丽水广式麻将
    -- 房间号：123456  2人8局
    -- 色的得瑟得瑟/色的得瑟得瑟/色的得瑟得瑟/色的得瑟得瑟/色的得瑟得瑟/色的得瑟得瑟/
    local ruleText = "玩法：" .. self._info.gameName .. "  "
    if self._info.tableId ~= nil then
        ruleText = ruleText .. "房间号：" .. self._info.tableId .. "  "
    end
    ruleText = ruleText .. self._info.playerCont .. "人" .. self._info.cont .. "局\n" .. self._info.rule
    self._txtRule:setText(ruleText)
end

function PromoteUserInviteView:setInviterHeadImg()
    if not self._info.url then
        return
    end
    self._imgHead:setUrl(self._info.url)
end

function PromoteUserInviteView:onTouchEventRefuse(send, eventType)
    self:close()
end

-- 查询是否在这个比赛场中
function PromoteUserInviteView:isInTeaHouse()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        local teahouseInfo = teahouseData:getTeaHouseList()
        for _, info in pairs(teahouseInfo) do
            if info.nPasswd == self._info.teaPasswd then
                return true
            end
        end
    end
    local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teahouseLists == nil then
        return false
    end
    if #teahouseLists > 0 then
        for i = 1, #teahouseLists do
            if teahouseLists[i].nPasswd == self._info.teaPasswd then
                return true
            end
        end
    end
    return false
end

function PromoteUserInviteView:onTouchEventAgree(send, eventType)
    local isFind = self:isInTeaHouse()
    if not isFind then
        self:close()
        return
    end
    if self._info.tableId ~= nil then
        XH.teaHouseManager:reJoinTeaHouse({
            teaHousePwd = self._info.teaPasswd,
            tableID = self._info.tableId,
        })
    elseif self._info.modeId ~= nil then
        XH.teaHouseManager:reJoinTeaHouse({
            teaHousePwd = self._info.teaPasswd,
            playModeId = self._info.modeId,
        })
    end
    if self.close then
        self:close()
    end
end

return PromoteUserInviteView
)