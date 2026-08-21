local LockTips = class("LockTips", XH.ViewBase)

function LockTips:getCSBPath()
    return "cocosStudio/hall/CSB/LockTips.csb"
end

function LockTips:getBindingInfo()
    return {
        ["_KW_USER_LOCK_INFO"] = { varName = "_playerInfo" },
        ["_KW_LOCK_CONTENT_DETAIL"] = { varName = "_conTentDetail" },
        ["_KW_LOCK_REASON_DETAIL"] = { varName = "_reasonDetail" },
        ["_KW_LOCK_CONFIRM"] = { varName = "_confirmBtn",onTouchEnded = "onTouchConfirm" },
        ["_KW_DEFAULT_PANEL"] = {varName = "_itemPanel"},
        ["_KW_BAN_REASON_TEXT"] = {varName = "_banReasonText"}
    }
end

local BAN_TYPE = {
    [0] = "无限制",
    [1] = "禁止对局",   
    [2] = "禁止加入,创建亲友圈",    
    [3] = "禁止登录",    
    [4] = "警告",    
    [5] = "禁止充值",    
    [6] = "禁止赠送好友房卡"
}

function LockTips:ctor(info)
    LockTips.super.ctor(self) 
    self._banSize = info.bansize
    self._banreason = info.banreason
    self._banendtime = info.banendtime
    self._bantype = info.bantype
    self:initUI()
end

function LockTips:initUI()
    local widthSize = self._itemPanel:getContentSize().width
    local heightSize = self._itemPanel:getContentSize().height
    self._conTentDetail:setInnerContainerSize(cc.size(widthSize,heightSize * self._banSize))
    self._reasonDetail:setInnerContainerSize(cc.size(widthSize,heightSize * self._banSize))
    for i=1, self._banSize do
        --封禁内容模块
        local temp =self._itemPanel:clone()
        temp:getChildByName("_KW_NUM_ID"):setString(i)
        temp:getChildByName("_KW_TEXT_CONTENT"):setString(BAN_TYPE[self._bantype[i]])
        local inviteTime = self:formatTime(self._banendtime[i])
        temp:getChildByName("_KW_BAN_TIME"):setString(inviteTime)
        self._conTentDetail:addChild(temp)                
    end
    self._playerInfo:setString("("..XH.playerData:getNumberID()..")")
    self._banReasonText:setString(self._banreason)
end



function LockTips:formatTime(time)
    if not time or time <= 0 then
        return ""
    end
    local year = os.date("%Y", time)
    local month = os.date("%m", time)
    local day = os.date("%d", time)
    local hour = os.date("%H", time)
    local minute = os.date("%M", time)
    local timeStr = year.."-"..month .. "-" .. day .. " " .. hour .. ":" .. minute
    return timeStr
end



function LockTips:onTouchConfirm(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    for i=1,self._banSize do
        if self._bantype[i] == XH.BoxDataProtocol.RespGetBanInfo.bantype.BAN_LOGIN then--禁止登录
            if not XH.lobby:getModule("Im"):judgePlayerInRoom() then--不在游戏中才会强退
                XH.playerData:stopVisitorHeart()
                XH.login:getModule("Login"):clearLoginStates()
                XH.Controller:getInstance():enterLogin()
                return
            end
        end
    end
    self:close()
end

return LockTips