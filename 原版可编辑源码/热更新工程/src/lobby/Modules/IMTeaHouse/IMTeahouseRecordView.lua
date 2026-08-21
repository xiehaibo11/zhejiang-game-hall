local IMTeahouseRecordView = class("IMTeahouseRecordView", XH.ViewBase)
function IMTeahouseRecordView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseRecord.csb"
end

function IMTeahouseRecordView:getBindingInfo()
    return {       
        ["_KW_PANEL_ITEM"] = {varName = "_itemLog"},
        ["_KW_LOG_LIST"] = {varName = "_logList" },

        ["_KW_SEARCH_BTN"] = {varName = "_searchBtn", type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchSearch"},
        
        --玩家头像模块
        ["_KW_IMG_HEAD"] = {varName = "_headImg",type = XH.UI_TYPE.REMOTEIMAGE},
        ["_KW_PLAYER_NAME"] = {varName = "_nameText"},
        ["_KW_PLAYER_ID"] = {varName = "_numText"},
        ["_KW_INFO_TEXT"] = {varName = "_infoText"},
        ["_KW_TIME_INFO_TEXT"] = {varName = "_timeInfoText"},
        ["_KW_BTND_CLOSE"] = {varName = "_onClosebtn", type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchClose"},
    }
end

IMTeahouseRecordView.KW_PLAYER_STATE_PIC = {
    --此处需要等服务给接口按具体的数据来展示在线还是离线
    [1] = "friend_state_off_line.png",
    [4] = "friend_state_on_line.png",
}

IMTeahouseRecordView.LOG_TYPE = {
    APPLY = 0,--申请加入
    JOIN = 1, --加入
    OWNERINVITE = 5,
    QUIT = 3, --退出
    MQUIT = 8, --自己退出
}

function IMTeahouseRecordView:ctor(parm)
    IMTeahouseRecordView.super.ctor(self)

    -- if info.type == VIEWTYPE.ADDGROUP then
    --     self._viewType = info.type
    -- elseif info.type == VIEWTYPE.ADDMEMBER then
    --     print("nothing")
    -- end
    self._memberlogList = {}
    XH.lobby:getModule("Im"):reqTeaHouseLog(parm)
    -- self:initView(info)
end

-- function IMTeahouseRecordView:initView()
--     -- self:initLogInfo(self:createTestData())

-- end

function IMTeahouseRecordView:getProxyEvents()
    return {
        --此处监听请求玩家信息的协议，回调加载玩家头像id等信息
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_UPDATE_PLAYER_INFO", callBack = "updetePlayerInfo" },
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_UPDATE_TEA_RECORD", callBack = "initLogInfo" },
    }
end

function IMTeahouseRecordView:createTestData()
    local testPlayerData = {}
    for i =1 ,27 do
        local tem  = {}
        tem.nPlayerNumId = 10000000 + i
        tem.acNickName = "00001" .. i 
        tem.url = ""
        tem.nTime = 1658918873
        tem.cOperType = 1
        table.insert(testPlayerData,tem)
    end
    return testPlayerData
end

function IMTeahouseRecordView:initLogInfo(event)
    if not event then
        return
    end
    self._memberlogList = event.info
    local widthSize = self._itemLog:getContentSize().width
    local heightSize = self._itemLog:getContentSize().height
    self._logList:setInnerContainerSize(cc.size(widthSize,heightSize * #self._memberlogList))
    for _, v in ipairs(self._memberlogList) do
        local temp =self._itemLog:clone()
        temp:getChildByName("_KW_PLAYER_NAME"):setString("序号:" .. v.nPlayerNumId)
        temp:getChildByName("_KW_PLAYER_ID"):setString("昵称:" .. v.acNickName)
        if v.cOperType == IMTeahouseRecordView.LOG_TYPE.JOIN or v.cOperType == IMTeahouseRecordView.LOG_TYPE.OWNERINVITE then
            --根据服务下发的玩家状态标记颜色
            --1.已邀请
            temp:getChildByName("_KW_INFO_TEXT"):setString("加入分组")
            temp:getChildByName("_KW_INFO_TEXT"):setColor(cc.c3b(0,255,255))
        elseif v.cOperType == IMTeahouseRecordView.LOG_TYPE.QUIT then
            --2.已拒绝、邀请失败
            temp:getChildByName("_KW_INFO_TEXT"):setString("被移出分组")
            temp:getChildByName("_KW_INFO_TEXT"):setColor(cc.c3b(255,0,0))
            --3.已同意
        elseif v.cOperType == IMTeahouseRecordView.LOG_TYPE.MQUIT then
            temp:getChildByName("_KW_INFO_TEXT"):setString("自己退出了分组")
            temp:getChildByName("_KW_INFO_TEXT"):setColor(cc.c3b(128,128,128))
        elseif v.cOperType == IMTeahouseRecordView.LOG_TYPE.APPLY then
            temp:getChildByName("_KW_INFO_TEXT"):setString("申请加入分组")
            temp:getChildByName("_KW_INFO_TEXT"):setColor(cc.c3b(0,255,255))
        end
        self:updateImg(temp:getChildByName("_KW_IMG_HEAD"), v.acUrl)
        local inviteTime = self:formatTime(v.nTime)
        temp:getChildByName("_KW_TIME_INFO_TEXT"):setString(inviteTime)
        self._logList:addChild(temp)
    end
end

function IMTeahouseRecordView:formatTime(time)
    if not time or time <= 0 then
        return ""
    end
    local month = os.date("%m", time)
    local day = os.date("%d", time)
    local hour = os.date("%H", time)
    local minute = os.date("%M", time)
    local timeStr = month .. "-" .. day .. " " .. hour .. ":" .. minute
    return timeStr
end

function IMTeahouseRecordView:updateImg(node,url)
    if (not url) or (url == "")  then
        return
    end
    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new()
        :setPosition(size.width/2, size.height/2)
        :setContentSize(size.width,size.height)
        :ignoreContentAdaptWithSize(false)
        :addTo(node)
    imageNode:setUrl(url)
end


function IMTeahouseRecordView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return IMTeahouseRecordView