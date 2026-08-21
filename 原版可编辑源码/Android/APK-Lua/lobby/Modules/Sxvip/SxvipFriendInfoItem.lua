local SxvipFriendInfoItem = class("SxvipFriendInfoItem" , XH.ViewBase)

function SxvipFriendInfoItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipFriendInfoItem.csb"
end

function SxvipFriendInfoItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KW_CONTENT_LIST"] = {varName = "_contentList"},
        ["_KW_ITEM"] = {varName = "_item"},
        ["_KWA_NO_ITEM_TIPS"] = {varName = "_noItemTips"},
    }
end

function SxvipFriendInfoItem:getProxyEvents()
    return {
       { module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_FRIEND_INFO_UPDATE", callBack = "onFriendInfoUpdate" },
    }
end

function SxvipFriendInfoItem:ctor()
    SxvipFriendInfoItem.super.ctor(self)

    self.curPage = 1 --当前页
    self:initView()

    -- 无数据则请求
    local friendInfo = XH.lobby:getModule("Sxvip"):getFriendInfoData()
    if friendInfo and next(friendInfo) then
        self:onFriendInfoUpdate()
    else
        XH.lobby:getModule("Sxvip"):reqFriendInfo()
    end
end

function SxvipFriendInfoItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)

    self._contentList:setScrollBarEnabled(false)
    -- self._contentList:addTouchEventListener(function(target , event)
    --     if event ~= 2 then
    --         return
    --     end
    --     local y = target:getInnerContainer():getPositionY()
    --     if y >= 0 then
    --         print("下一页数据")
    --     end
    -- end)
end

function SxvipFriendInfoItem:onFriendInfoUpdate(event)
    local data = XH.lobby:getModule("Sxvip"):getFriendInfoData()
    self._contentList:stopAllActions()
    self._contentList:removeAllItems()
    for i, v in ipairs(data) do
        performWithDelay(self._contentList, function()
            local item = self._item:clone()
            self._contentList:pushBackCustomItem(item)
            self:updateItem(item , v)
        end,  0.1)
    end
    self._noItemTips:setVisible(#data == 0)
    self._noItemTips:setString(XH.lobby:getModule("Sxvip"):isExpire() and "开通会员，可查看牌友数据~" or "暂无牌友数据，快去邀请好友游戏吧~")
end

function SxvipFriendInfoItem:refreshView()
  
end

function SxvipFriendInfoItem:updateItem(item , data)
    local nameTxt = data.nickName or ""
    local totalCountTxt = data.totalCount  or 0
    local winRate = (data.winCount or 0) / totalCountTxt * 100
    winRate =  math.floor(winRate) .. "%"
    local userTotalCountTxt = data.userTotal or 0
    local userWinRate =  (data.userWin or 0) / userTotalCountTxt * 100
    userWinRate = self:getRateDesc(userWinRate)
    local showIcon = true
    if XH.lobby:getModule("Sxvip"):isExpire() then
        nameTxt = "**"
        totalCountTxt = "**"
        winRate = "**%"
        showIcon = false
        userTotalCountTxt = "**"
        userWinRate = "**%"
    else
        if string.len(nameTxt) > 12 then
            local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nameTxt, 12)
            nameTxt = string.sub(nameTxt,1,validBytes) .. "..."
        end
        totalCountTxt = self:getDescByCount(totalCountTxt)
        userTotalCountTxt = self:getDescByCount(userTotalCountTxt)
    end
    item:getChildByName("_KW_TXT_NAME"):setString(nameTxt)
    item:getChildByName("_KW_TXT_JUS"):setString(totalCountTxt)
    item:getChildByName("_KW_TXT_WIN_RATE"):setString(winRate)
    item:getChildByName("_KW_TXT_JUS_TOTAL"):setString(userTotalCountTxt)
    item:getChildByName("_KW_TXT_WIN_RATE_TOTAL"):setString(userWinRate)
    -- 头像
    local headItem = item:getChildByName("_KWA_HEAD_PANEL"):getChildByName("_KWA_IMAGE_HEAD")
    local itemIcon = headItem:getChildByName("ITEM_ICON")
    if itemIcon == nil then
        local size = headItem:getContentSize()
        itemIcon = XH.RemoteImage.new()
        :setPosition(size.width / 2, size.height / 2)
        :ignoreContentAdaptWithSize(false)
        :setContentSize(size.width, size.height)
        :setName("ITEM_ICON")
        :addTo(headItem)
    end
    itemIcon:setUrl(data.headIcon)
    itemIcon:setVisible(showIcon)
end

function SxvipFriendInfoItem:getDescByCount(count)
    if count < 10 then
        count = "<10"
    elseif count >= 10 and count <= 50 then
        count = "10~50"
    elseif count >= 51 and count <= 100 then
        count = "51~100"
    elseif count >= 101 and count <= 500 then
        count = "101~500"
    elseif count >= 501 and count <= 1000 then
        count = "501~1000"
    else
        count = ">1000"
    end
    return count
end

function SxvipFriendInfoItem:getRateDesc(rate)
    rate = rate or 0
    if rate < 30 then
        return "<30%"
    elseif rate >= 30 and rate <= 50 then
        return "30%~50%"
    else
        return ">50%"
    end
end

return SxvipFriendInfoItem