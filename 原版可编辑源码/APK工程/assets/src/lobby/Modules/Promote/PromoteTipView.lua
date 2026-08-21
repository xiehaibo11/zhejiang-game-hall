local PromoteTipView = class("PromoteTipView", XH.ViewBase)
local PromoteDefine = require("lobby.Modules.Promote.Define")
local PromoteConfig = require("lobby.Modules.Promote.Config")

function PromoteTipView:ctor(type, teanumber, text)
    PromoteTipView.super.ctor(self)
    self._type = type
    self._teaNumber = teanumber
    self._text = text or ""
    self._time = 5
    self:initUI()
end

function PromoteTipView:initUI()
    self.KW_TEXT:setString(XH.StringTool.replaceMatchStr(self._text))
    self.KW_PANEL_USER:setVisible(self._type == PromoteDefine.TIP_TYPE.TEA_TIP_USER)
    self.KW_PANEL_OWNER:setVisible(self._type == PromoteDefine.TIP_TYPE.TEA_TIP_OWNER)
    if self._type == PromoteDefine.TIP_TYPE.TEA_TIP_USER then
        self.KW_TEXT_LEFT:setString("我再想想")
        self.KW_TEXT_RIGHT:setString("立即加入")
        self.LABLE_USER_TIME:setString("（ 5s ）")
        -- 开始倒计时
        if self._time ~= nil then
            self.LABLE_USER_TIME:stopAllActions()
            local repeatAct2 = cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
                self._time = self._time - 1
                self.LABLE_USER_TIME:setString("（ " .. self._time .. "s ）")
                if self._time == 0 then
                    XH.lobby:getModule("Promote"):joinModeRoom()
                    self:close()
                end
            end)))
            self.LABLE_USER_TIME:runAction(repeatAct2)
        end

    elseif self._type == PromoteDefine.TIP_TYPE.TEA_TIP_OWNER then
        self.KW_TEXT_LEFT:setString("我再想想")
        self.KW_TEXT_RIGHT:setString("立即创建")
        local count = 1
        if PromoteConfig[XH.areaData:getLobbyID()] ~= nil then
            count = PromoteConfig[XH.areaData:getLobbyID()].hallViewClickUserNum
        end
        self.KW_TEXT_RED:setString("超过" .. count .. "个玩家请求创建广式红中癞子麻将牌桌")
    elseif self._type == PromoteDefine.TIP_TYPE.PLAYER_NOTICE then
        self.KW_TEXT_LEFT:setString("在线通知")
        self.KW_TEXT_RIGHT:setString("微信通知")
    elseif self._type == PromoteDefine.TIP_TYPE.OWNER_CREATE then
        self.KW_TEXT_LEFT:setString("前往")
        self.KW_TEXT_RIGHT:setString("一键创建")
    end
end

function PromoteTipView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Promote/PromoteTipLayer.csb"
end

function PromoteTipView:getBindingInfo()
    return {
        -- rule
        ["_KW_BUTTON_HINT_CLOSE"] = {varName = "KW_BUTTON_HINT_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_KW_BUTTON_HINT_CANCEL"] = {varName = "KW_BUTTON_HINT_CANCEL", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickCancel"},
        ["_KW_BUTTON_HINT_OK"] = {varName = "KW_BUTTON_HINT_OK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickOk"},
        ["_KW_TEXT"] = {varName = "KW_TEXT"},
        ["_KW_TEXT_LEFT"] = {varName = "KW_TEXT_LEFT"},
        ["_KW_TEXT_RIGHT"] = {varName = "KW_TEXT_RIGHT"},
        ["_KW_PANEL_USER"] = {varName = "KW_PANEL_USER"},
        ["_KW_PANEL_OWNER"] = {varName = "KW_PANEL_OWNER"},
        ["_KW_TEXT_RED"] = {varName = "KW_TEXT_RED"},
        ["_LABLE_USER_TIME"] = {varName = "LABLE_USER_TIME"}
    }
end

-- right 微信通知 一键创建
function PromoteTipView:onClickOk()
    if self._type == PromoteDefine.TIP_TYPE.TEA_TIP_USER then
        XH.lobby:getModule("Promote"):joinModeRoom()
    elseif self._type == PromoteDefine.TIP_TYPE.TEA_TIP_OWNER then
        XH.lobby:getModule("Promote"):quickCreatePlayMode()
    elseif self._type == PromoteDefine.TIP_TYPE.OWNER_CREATE then
        local teaData = XH.teaHouseManager:getTeaHouseData()
        local nPasswd = self:getTeaHousePassword()
        if nPasswd == 0 then
            self:close()
            return
        end
        if teaData ~= nil and teaData:getTeaNumber() == self._teaNumber then
            XH.lobby:getModule("Promote"):quickCreatePlayMode(self._teaNumber)
        else
            XH.teaHouseManager:reJoinTeaHouse(nPasswd, nil, nil, XH.lobby:getModule("Promote").quickCreatePlayMode)
        end
    elseif self._type == PromoteDefine.TIP_TYPE.PLAYER_NOTICE then
        local hasMode = XH.lobby:getModule("Promote"):hasActPlayModes()
        if hasMode then
            XH.TipTool.showToast("桌子已创建！")
            self:close()
            return
        end
        XH.lobby:getModule("Promote"):shreToWx(1)
    end
    if self.close then
        self:close()
    end
end

function PromoteTipView:getTeaHousePassword()
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if teahouseData ~= nil then
        local teahouseInfo = teahouseData:getTeaHouseInfoByID(self._teaNumber)
        if teahouseInfo ~= nil then
            return teahouseInfo.nPasswd
        end
    end
    local nPasswd = 0
    local teahouseLists = XH.lobby:getModule("TeaHouseList"):getTeaHousePendingList()
    if teahouseLists == nil then
        return 0
    end
    if #teahouseLists > 0 then
        for i = 1, #teahouseLists do
            if teahouseLists[i].nTeaNumber == self._teaNumber then
                nPasswd = teahouseLists[i].nPasswd
                break
            end
        end
    end
    return nPasswd
end

-- left 在线通知 领队/副领队 前往
function PromoteTipView:onClickCancel()
    if self._type == PromoteDefine.TIP_TYPE.OWNER_CREATE then
        local teaData = XH.teaHouseManager:getTeaHouseData()
        local nPasswd = self:getTeaHousePassword()
        if nPasswd == 0 then
            self:close()
            return
        end
        local gameid = nil
        if PromoteConfig[XH.areaData:getLobbyID()] ~= nil then
            gameid = PromoteConfig[XH.areaData:getLobbyID()].GAMEID
        end
        if teaData ~= nil and teaData:getTeaNumber() == self._teaNumber then
            XH.lobby:getModule("Promote"):normalCreatePlayMode()
        else
            XH.teaHouseManager:reJoinTeaHouse(nPasswd, nil, nil, XH.lobby:getModule("Promote").normalCreatePlayMode)
        end
    elseif self._type == PromoteDefine.TIP_TYPE.PLAYER_NOTICE then
        local hasMode = XH.lobby:getModule("Promote"):hasActPlayModes()
        if hasMode then
            XH.TipTool.showToast("桌子已创建！")
            self:close()
            return
        end
        local toNumIDs = {}
        local teaData = XH.teaHouseManager:getTeaHouseData()
        if teaData == nil then
            self:close()
            return
        end
        local teahouseInfo = XH.lobby:getModule("Promote"):getPendTeahouseInfo(teaData:getTeaNumber())
        if teahouseInfo ~= nil and teahouseInfo.nTeaOwnerNumid ~= nil then
            toNumIDs[#toNumIDs + 1] = teahouseInfo.nTeaOwnerNumid
        end
        local msg = {}
        msg.type = PromoteDefine.TIP_TYPE.PLAYER_NOTICE
        msg.teaid = self._teaNumber
        msg.teaName = teaData._teaHouseNameExt or ""
        -- local memberInfo = teaData:getMemberInfoAll()
        -- for key, value in pairs(memberInfo) do
        --     local equ_back = string.split(key, ":")
        --     if equ_back == nil or table.nums(equ_back) ~= 2 then
        --         break
        --     end
        --     toNumIDs[#toNumIDs + 1] = tonumber(equ_back[2])
        -- end
        if #toNumIDs <= 0 then
            self:close()
            return
        end
        XH.teaHouseManager:reqPromoteInviteAll(XH.playerData:getNumberID(), toNumIDs, json.encode(msg))
        XH.TipTool.showToast("发送成功")
    end
    if self.close then
        self:close()
    end
end

function PromoteTipView:onClickClose()
    self:close()
end

return PromoteTipView
