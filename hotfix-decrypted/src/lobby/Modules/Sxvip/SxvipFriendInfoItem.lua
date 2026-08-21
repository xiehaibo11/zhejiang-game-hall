local SxvipFriendInfoItem = class("SxvipFriendInfoItem", XH.ViewBase)
local IMG_PATH = "hall/Image/Sxvip/friendInfo/"
local SxvipConfig = require("lobby.Modules.Sxvip.Config")

function SxvipFriendInfoItem:getCSBPath()
    return "cocosStudio/hall/CSB/Sxvip/SxvipFriendInfoItem.csb"
end

function SxvipFriendInfoItem:getBindingInfo()
    return {
        ["_KW_VIP_ROOT"] = {varName = "_root"},
        ["_KW_CONTENT_LIST"] = {varName = "_contentList"},
        ["_KW_CONTENT_LIST2"] = {varName = "_contentList2"},
        ["_KW_ITEM"] = {varName = "_item"},
        ["_KW_NORMAL"] = {varName = "_itemNormal"},
        ["_KW_BLUR"] = {varName = "_itemBlur"},
        ["_KWA_NO_ITEM_TIPS"] = {varName = "_noItemTips"},
        ["_KW_INPUT_PANEL"] = {varName = "_nodeSearch"},
        ["_KW_LEFT_TIP"] = {varName = "_txtLeftTip"},
        ["_KW_IMG_XH"] = {varName = "_imgXH"},
        ["_KW_EDITBOX"] = {varName = "_editSearch"},
        ["_KW_IMG_BG"] = {varName = "_imgBack"},
        ["_KW_Btns"] = {varName = "_btnsArrow"},
        ["_KW_BtnArrow"] = {varName = "_btnArrow", type = XH.UI_TYPE.BUTTON, beginIndex = 1, endIndex = 6, onTouchEnded = "onClickArrow"},
        ["_KW_BTN_SEARCH"] = {varName = "_btnSearch", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnSearch"},
        -- ["_KW_btn_TIP3"] = {varName = "_btnTip", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnTip"}
    }
end

function SxvipFriendInfoItem:getProxyEvents()
    return {
        {module = XH.lobby:getModule("Sxvip"), eventKeyName = "SXVIP_EVENT_FRIEND_INFO_UPDATE", callBack = "onFriendInfoUpdate"}
    }
end

function SxvipFriendInfoItem:ctor()
    SxvipFriendInfoItem.super.ctor(self)
    -- self:scheduleUpdate(self.onUpdate, 0)
    self:scheduleUpdateWithPriorityLua(
        function(dt)
            self:onUpdate(dt)
        end,
        0
    )
    self._sortInfo = {mainKey = 1, subKey = 1}
    self._itemData = {}
    self._items = {}
    self:changeArrowShow(self._btnArrow1, self._sortInfo.subKey)
    self.curPage = 1 --当前页
    self:initView()
    self._configCenterData = SxvipConfig:getFriendParams()
    -- 无数据则请求
    local friendInfo = XH.lobby:getModule("Sxvip"):getFriendInfoData()
    if friendInfo and next(friendInfo) then
        self:onFriendInfoUpdate()
    else
        XH.lobby:getModule("Sxvip"):reqFriendInfo()
    end

    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.zyt2024032805)
end

function SxvipFriendInfoItem:initView()
    local size = self._root:getContentSize()
    self:setContentSize(size)

    self._contentList:setScrollBarEnabled(false)
    self._contentList2:setScrollBarEnabled(false)
    self._contentList2:addScrollViewEventListener(
        function(sender, eventType)
            if eventType == 4 then
                if self:isExpire() and not XH.viewManager:getView("SxvipShopView") then
                    self._contentList2:setTouchEnabled(false)
                    performWithDelay(self._contentList2, function() 
                        self._contentList2:setTouchEnabled(true)
                    end, 2)
                    -- XH.viewManager:closeView("SxvipView")
                    XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.friendData)
                    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090615, {item_id=self._winRateForMe})
                end
            end
        end
    )
end

function SxvipFriendInfoItem:isExpire()
    return XH.lobby:getModule("Sxvip"):isExpire() --or true
end

function SxvipFriendInfoItem:onUpdate(dt)
    -- print('update')
    local idx = self._loopIdx or -1
    local data = self._itemData[idx] or {nickName = "xxx", userId = 110}
    local item = self._items[idx]
    if data and item then
        -- data.nickName = idx
        -- print(idx, socket.gettime())
        self:updateItem(item, data, idx)
        -- print(idx, socket.gettime())
        self._loopIdx = self._loopIdx + 1
    end
end

function SxvipFriendInfoItem:onFriendInfoUpdate(event)
    -- if self._md5 == XH.lobby:getModule("Sxvip"):getFriendInfoMD5() then
    --     print("same md5: ignore update")
    --     return
    -- end
    -- self._md5 = XH.lobby:getModule("Sxvip"):getFriendInfoMD5()
    local isExpire = self:isExpire()
    self._imgBack:setContentSize(cc.size(1439, isExpire and 910 or 825))
    self._nodeSearch:setVisible(not isExpire)
    self._txtLeftTip:setVisible(not isExpire)
    local data = XH.lobby:getModule("Sxvip"):getFriendInfoData() or {}
    local sortData = clone(data)
    self._imgXH:setVisible(isExpire and #sortData > 3)
    self._btnsArrow:setVisible(not isExpire)
    -- self._btnTip:setVisible(isExpire)
    if isExpire then
        math.randomseed(XH.playerData:getNumberID())
        self._sortInfo = {mainKey = 1, subKey = 1}
        self._contentList:setTouchEnabled(false)
    else
        self._contentList:setTouchEnabled(true)
        local searchData = self._editSearch:getText()
        if searchData and searchData ~= "" then
            for i = #sortData, 1, -1 do
                if string.find(sortData[i].nickName, searchData) == nil and string.find(sortData[i].userId, searchData) == nil then
                    table.remove(sortData, i)
                end
            end
        end
    end

    for _, v in ipairs(sortData) do
        v.userWinRate = v.userWin / (v.userTotal == 0 and 1 or v.userTotal) * 100
        v.winRate = v.winCount / (v.totalCount == 0 and 1 or v.totalCount) * 100
        --test
        v.score = v.totalScore
        if v.totalScore <= -2147483648 then
            v.scoreSort = self._sortInfo.subKey == 1 and -v.totalScore or v.totalScore -- -2147483648表示无对局
        else
            v.scoreSort = v.totalScore
        end
        v.offline = v.offlineCnt
        v.dismiss = v.dismissCnt
        v.speed = v.playTotal > 0 and v.playTime / v.playTotal or 0
    end
    local mainKeyToDataKey = {
        "winRate", --对我的
        "userWinRate", --总数据
        "speed",
        "offline",
        "dismiss",
        "scoreSort"
    }
    --self._sortInfo = {mainKey=typeMain, subKey=typeSub}--主key:字段类型  副key:正序、逆序
    if self._sortInfo then
        print("mainKey:", mainKeyToDataKey[self._sortInfo.mainKey])
        table.sort(
            sortData,
            function(a, b)
                local aValue = a[mainKeyToDataKey[self._sortInfo.mainKey]] or 0
                local bValue = b[mainKeyToDataKey[self._sortInfo.mainKey]] or 0
                if aValue == bValue then
                    if self._sortInfo.subKey == 1 then
                        return a.totalCount < b.totalCount
                    else
                        return a.totalCount > b.totalCount
                    end
                else
                    if self._sortInfo.subKey == 1 then
                        return aValue < bValue
                    else
                        return aValue > bValue
                    end
                end
            end
        )
    end

    -- dump(sortData)
    local itemNum = #sortData
    self._contentList:stopAllActions()
    self._contentList:removeAllItems()
    self._headRandIdxs = {}
    for i = 1, 8 do
        self._headRandIdxs[i] = i
    end
    for _ = 1, 8 do
        local a = math.random(1, 8)
        local b = math.random(1, 8)
        if a ~= b then
            self._headRandIdxs[a], self._headRandIdxs[b] = self._headRandIdxs[b], self._headRandIdxs[a]
        end
    end

    local items = {}
    for i = 1, itemNum do
        local item = self._item:clone()
        self._contentList:pushBackCustomItem(item)
        items[i] = item
        items[i]:setVisible(true)
    end
    self._contentList:jumpToTop()
    self._itemData = sortData
    self._items = items
    self._loopIdx = 1
    self:onUpdate()
    self:onUpdate()
    self:onUpdate()
    self:onUpdate()

    self._item:setVisible(false)
    self._itemNormal:setVisible(false)
    self._itemBlur:setVisible(false)
    self._noItemTips:setVisible(#sortData == 0)
    self._noItemTips:setString(self:isExpire() and "开通会员，可查看牌友数据~" or "暂无牌友数据，快去邀请好友游戏吧~")
end

function SxvipFriendInfoItem:refreshView()
end

function SxvipFriendInfoItem:onBtnLook(sender, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    -- XH.viewManager:closeView("SxvipView")
    XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.friendData)
    XH.lobby:getModule("Sxvip.ThrowData"):throwData(XH.NewThrowDataDefine.hy24090614, {item_id=self._winRateForMe})
end

function SxvipFriendInfoItem:getHeadRandIdx(curItemIdx)
    return self._headRandIdxs[curItemIdx] or math.random(1, 8)
end

function SxvipFriendInfoItem:updateItem(itemNode, data, idx)
    local nameTxt = data.nickName or ""
    local totalCountTxt = data.totalCount or 0
    local vipModule = XH.lobby:getModule("Sxvip")
    local winRateForMe = vipModule:getFriendWinRateForMe(data)
    local winRateTotal = vipModule:getFriendWinRateTotal(data)
    local winScore = vipModule:getFriendWinScore(data)

    local item = nil --itemNode:getChildByName("_KW_NORMAL")
    -- local item2 = itemNode:getChildByName("_KW_BLUR")
    if self:isExpire() then
        -- item:setVisible(false)
        item = self._itemBlur:clone()
        local btnLook = item:getChildByName("_KW_FIRST_LOOK")
        btnLook:setVisible(idx == 1)
        self._winRateForMe = winRateForMe
        btnLook:addTouchEventListener(handler(self, self.onBtnLook))
        XH.UITool.seekNodeByName(item, "_KW_TXT_WIN_RATE"):setString(winRateForMe)
        item:getChildByName("_KW_HEAD"):loadTexture(string.format("%sImg_tx%d.png", IMG_PATH, self:getHeadRandIdx()), ccui.TextureResType.plistType)
        item:getChildByName("_KW_SCORE2"):loadTexture(string.format("%sImg_sx%d.png", IMG_PATH, math.random(1, 4)), ccui.TextureResType.plistType)
        item:getChildByName("_KW_SCORE3"):loadTexture(string.format("%sImg_s%d.png", IMG_PATH, math.random(1, 4)), ccui.TextureResType.plistType)
        item:getChildByName("_KW_SCORE7"):loadTexture(string.format("%sImg_s%d.png", IMG_PATH, math.random(1, 4)), ccui.TextureResType.plistType)

        item:getChildByName("_KW_SCORE1"):setVisible(idx == 1)
        item:getChildByName("_KW_SCORE2"):setVisible(idx ~= 1)
        if idx == 1 then
            local aniPath = "animation/Lobby/Base/shoudianji/"
            local params = {path = aniPath, tex = "ShouDianJi.json", ske = "ShouDianJi.atlas", armatureName = "ShouDianJi", scale = 1}
            local spineNode = display.playDargonBonesSpine(params)
            if spineNode then
                spineNode:setPosition(100, 10)
                item:getChildByName("_KW_FIRST_LOOK"):addChild(spineNode)
            end
        end
    else
        item = self._itemNormal:clone()
        if string.len(nameTxt) > 12 then
            local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nameTxt, 12)
            nameTxt = string.sub(nameTxt, 1, validBytes) .. "..."
        end
        item:getChildByName("_KW_TXT_NAME"):setString(nameTxt)
        item:getChildByName("_KW_TXT_ID"):setString(data.userId)
        item:getChildByName("_KW_TXT_JUS"):setString(totalCountTxt)
        XH.UITool.seekNodeByName(item, "_KW_TXT_WIN_RATE"):setString(winRateForMe)
        item:getChildByName("_KW_TXT_JUS_TOTAL"):setString('')
        item:getChildByName("_KW_TXT_WIN_RATE_TOTAL"):setString(winRateTotal)
        item:getChildByName("_KW_IMG_SPEED"):loadTexture(string.format("%s%s.png", IMG_PATH, vipModule:getOutCardSpeedImg(data.speed or 0)), ccui.TextureResType.plistType)
        item:getChildByName("_KW_TXT_OFFLINE"):setString(vipModule:getOffLineDes(data.offline or 0) )
        item:getChildByName("_KW_TXT_DISMISS"):setString(vipModule:getDismissDes(data.dismiss or 0))
        item:getChildByName("_KW_TXT_SCORE"):setString(winScore)
        -- 头像
        local headItem = item:getChildByName("_KWA_HEAD_PANEL"):getChildByName("_KWA_IMAGE_HEAD")
        local itemIcon = headItem:getChildByName("ITEM_ICON")
        if itemIcon == nil then
            local size = headItem:getContentSize()
            itemIcon = XH.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):setName("ITEM_ICON"):addTo(headItem)
        end
        itemIcon:setUrl(data.headIcon)

        item:getChildByName("_KW_TXT_TIP1"):addTouchEventListener(
            function(send, eventType)
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end
                XH.TipTool.showToast(SxvipConfig.ToastMsg.friendInfoTotalWinRate)
            end
        )

        item:getChildByName("_KW_TXT_TIP2"):addTouchEventListener(
            function(send, eventType)
                if eventType ~= ccui.TouchEventType.ended then
                    return
                end
                XH.TipTool.showToast(SxvipConfig.ToastMsg.friendInfoWinScore)
            end
        )
        item:getChildByName("_KW_TXT_TIP2"):setVisible(false)
    end
    item:setPosition(0, 0)
    item:setVisible(true)
    itemNode:addChild(item)
end

function SxvipFriendInfoItem:getDescByCount(count)
    return count
end

function SxvipFriendInfoItem:getRateDesc(rate)
    rate = rate or 0
    return rate
end

function SxvipFriendInfoItem:onBtnSearch(send, eventType)
    self:onFriendInfoUpdate()
end
function SxvipFriendInfoItem:onBtnTip(send, eventType)
    XH.TipTool.showToast(SxvipConfig.ToastMsg.friendInfoWinScore)
end

function SxvipFriendInfoItem:changeArrowShow(node, type)
    local top = node:getChildByName("top") --1
    local bottom = node:getChildByName("bottom") --2
    top:setVisible(type ~= 2)
    bottom:setVisible(type ~= 1)
    if type ~= -1 then
        top:setPositionY(40)
        bottom:setPositionY(40)
    else
        top:setPositionY(56)
        bottom:setPositionY(24)
    end
end

function SxvipFriendInfoItem:onClickArrow(send, eventType)
    if self:isExpire() then
        -- XH.viewManager:closeView("SxvipView")
        XH.viewManager:openView("SxvipShopView", nil, SxvipConfig.ThrowData.source.friendData)
        return
    end
    local nodeName = send:getName()
    local typeMain = tonumber(string.match(nodeName, "_KW_BtnArrow(%d+)"))
    local typeSub = self._sortInfo.mainKey == typeMain and 3 - self._sortInfo.subKey or 1
    self._sortInfo = {mainKey = typeMain, subKey = typeSub} --主key:字段类型  副key:正序、逆序
    print(typeMain, typeSub)
    for i = 1, 6 do
        local btn = self["_btnArrow" .. i]
        self:changeArrowShow(btn, send == btn and typeSub or -1)
    end
    self:onFriendInfoUpdate()
end

return SxvipFriendInfoItem
t;  