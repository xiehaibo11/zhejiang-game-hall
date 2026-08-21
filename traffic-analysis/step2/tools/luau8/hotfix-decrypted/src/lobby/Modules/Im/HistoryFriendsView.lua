local IMHistoryFriendsView = class("IMHistoryFriendsView", XH.ViewBase)

local KW_LINE_COUNT = 2
local KW_MAX_SHOW_IN_LINE = 5
local KW_LINE_FISRT = 1
local KW_LINE_SECOND = 2
local KW_FRIEND_ITEM = "KW_FRIEND_ITEM_"
local KW_FRIEND_INFO = "_KW_FRIEND_INFO_"
local KW_FRIEND_NAME = "_KW_TXT_NAME"
local KW_FRIEND_HEAD = "_KW_PANEL_HEAD_IMG"
local KW_HEAD_IMG = "KW_HEAD_IMG"

function IMHistoryFriendsView:getCSBPath()
    return "cocosStudio/hall/CSB/IM/IMHistoryFriends.csb"
end

function IMHistoryFriendsView:getBindingInfo()
    return {
        ["_KW_BTN_OK"] = { varName = "_btnOK",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnOKClicked" },
        ["_KW_TXT_NUM"] = { varName = "_friendCount" },
        ["_KW_FIREND_ITEM"] = { varName = "_friendItem" },
        ["_KW_LISTVIEW_FRIENDS"] = { varName = "_friendsList" },
    }
end

--加载窗口所需资
function IMHistoryFriendsView:ctor(param)
    param = param or {}
	IMHistoryFriendsView.super.ctor(self,param)

    self:initUI()
end

--刷新UI
function IMHistoryFriendsView:initUI()
    local oldFriends = XH.lobby:getModule("Im"):getIMData():getHistoryFriendsInfo()
    self._friendCount:setString(#oldFriends)
    self:showOldFriendsInfo()
end

function IMHistoryFriendsView:onBtnOKClicked(send,eventType)
    XH.lobby:getModule("Im"):setCurFriendListPage(0)
    XH.lobby:getModule("Im"):setTotalFriendListPage(0)
    XH.lobby:getModule("Im"):getIMData():clearFriendList()
    XH.lobby:getModule("Im"):reqFriendListInfo()
    self:close()
end

function IMHistoryFriendsView:showOldFriendsInfo()
    local oldFriends = XH.lobby:getModule("Im"):getIMData():getHistoryFriendsInfo()
    for i = 1, #oldFriends do
        if i <= KW_MAX_SHOW_IN_LINE then
            local item = self._friendItem:clone()
            item:setName(KW_FRIEND_ITEM .. i)
            self:setFriendInfo(item, KW_LINE_FISRT, oldFriends[i])
            self._friendsList:addChild(item)
        elseif i <= KW_MAX_SHOW_IN_LINE * KW_LINE_COUNT then
            local item = self._friendsList:getChildByName(KW_FRIEND_ITEM .. (i - KW_MAX_SHOW_IN_LINE))
            if item then
                self:setFriendInfo(item, KW_LINE_SECOND, oldFriends[i])
            end
        else
            if math.floor( i/KW_LINE_COUNT ) ~= math.ceil( i/KW_LINE_COUNT ) then
                local item = self._friendItem:clone()
                item:setName(KW_FRIEND_ITEM .. (self._friendsList:getChildrenCount() + 1))
                self:setFriendInfo(item, KW_LINE_FISRT, oldFriends[i])
                self._friendsList:addChild(item)
            else
                local item = self._friendsList:getChildByName(KW_FRIEND_ITEM .. self._friendsList:getChildrenCount())
                if item then
                    self:setFriendInfo(item, KW_LINE_SECOND, oldFriends[i])
                end
            end
        end
    end
end

function IMHistoryFriendsView:setFriendInfo(parentNode, line, info)
    if not parentNode or not info or not line or line > KW_LINE_COUNT then
        return
    end
    local infoNode = XH.UITool.seekNodeByName(parentNode, KW_FRIEND_INFO .. line)
    if infoNode then
        XH.UITool.setText(infoNode, KW_FRIEND_NAME, XH.StringTool.cutStringByLength(info.nickname))
        parentNode = XH.UITool.seekNodeByName(infoNode, KW_FRIEND_HEAD)
        if parentNode then
            if info.url and info.url ~= "" then
                XH.UITool.reloadNodeRemoteImage(parentNode, info.url, KW_HEAD_IMG)
            end
            local imgNode = XH.UITool.seekNodeByName(parentNode, KW_HEAD_IMG)
            if imgNode then
                imgNode:setContentSize(parentNode:getContentSize().width, parentNode:getContentSize().height)
            end
        end

        infoNode:setVisible(true)
    end
end

return IMHistoryFriendsView9