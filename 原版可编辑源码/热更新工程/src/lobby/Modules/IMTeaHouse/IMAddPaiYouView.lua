local IMAddPaiYouView = class("IMAddPaiYouView", XH.ViewBase)
function IMAddPaiYouView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseAddFriend.csb"
end

function IMAddPaiYouView:getBindingInfo()
    return {       
        ["_KW_HEAD_PANEL"] = {varName = "_headPanel"},
        ["_KW_TIP_PANEL"] = {varName = "_tipPanel" },
        ["_KW_TIP_TITLE"] = {varName = "_tipTitle" , type = XH.UI_TYPE.IMAGE},
        ["_KW_INPUT_NUMID"] = {varName = "_inputText"},
        ["_KW_SEARCH_BTN"] = {varName = "_searchBtn", type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchSearch"},
        
        --玩家头像模块
        ["_KW_IMG_HEAD"] = {varName = "_headImg",type = XH.UI_TYPE.REMOTEIMAGE},
        ["_KW_PLAYER_NAME"] = {varName = "_nameText"},
        ["_KW_PLAYER_ID"] = {varName = "_numText"},
        ["_KW_BTND_CLOSE"] = {varName = "_onClosebtn", type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchClose"},
        ["_KW_PLAYER_STATE"] = {varName ="_userStateImg" , type = XH.UI_TYPE.IMAGE},
        ["_KW_BTN_ADD"] = {varName = "_addBtn",type = XH.UI_TYPE.BUTTON , onTouchEnded = "onTouchAddFriend"},
        ["_KW_APPLIED_TEXT"] = {varName = "_appliedText", type = XH.UI_TYPE.TEXT},
    }
end

IMAddPaiYouView.KW_PLAYER_STATE_PIC = {
    --此处需要等服务给接口按具体的数据来展示在线还是离线
    [0] = "friend_state_off_line.png",
    [1] = "friend_state_on_line.png",
}

IMAddPaiYouView.ADD_STATE = {
    --此处需要等服务给接口按具体的数据来展示在线还是离线
    [0] = "无",
    [1] = "已申请",
    [2] = "已拒绝",
    [3] = "已添加"
}

function IMAddPaiYouView:ctor(info)
    IMAddPaiYouView.super.ctor(self)

    -- if info.type == VIEWTYPE.ADDGROUP then
    --     self._viewType = info.type
    -- elseif info.type == VIEWTYPE.ADDMEMBER then
    --     print("nothing")
    -- end
    self._tmpPlayerID = 0
    self:initView(info)
end

function IMAddPaiYouView:initView()
    --文本编辑框脚本
    if self._inputText then
        self._inputText:setFontColor(cc.c3b(255, 255, 255))
        self._inputText:setInputMode(cc.EDITBOX_INPUT_MODE_PHONENUMBER)
    end
end

function IMAddPaiYouView:getProxyEvents()
    return {
        --此处监听请求玩家信息的协议，回调加载玩家头像id等信息
        { module = XH.lobby:getModule("Im"), eventKeyName = "EVENT_UPDATE_ADD_FRIEND_STATE", callBack = "updetePlayerInfo" },
    }
end


function IMAddPaiYouView:updetePlayerInfo(data)
    if data.info.bChangeState then
        self._addBtn:setVisible(false)
        self._appliedText:setVisible(true)
        self._appliedText:setString(IMAddPaiYouView.ADD_STATE[1])
        return
    end
    if data.info.playerinfo.bFind then
        self._headPanel:setVisible(true)
        self._tipPanel:setVisible(false)
    else
        self._headPanel:setVisible(false)
        self._tipPanel:setVisible(true)
        return
    end
    self._nameText:setString("昵称："..XH.StringTool.cutStringByLength(data.info.playerinfo.nickname,12))
    self._numText:setString("账号:"..data.info.playerinfo.numid)
    self._tmpPlayerID = data.info.playerinfo.numid
    self._headImg:setUrl(data.info.playerinfo.headurl)
    if data.info.playerinfo.online then
        XH.UITool.loadTexture(self._headPanel, "_KW_UI_STATE", self.KW_PLAYER_STATE_PIC[0], ccui.TextureResType.plistType)
    else
        XH.UITool.loadTexture(self._headPanel, "_KW_UI_STATE", self.KW_PLAYER_STATE_PIC[1], ccui.TextureResType.plistType)
    end
    XH.UITool.setVisible(self._headPanel, "_KW_UI_STATE", true)
    if IMAddPaiYouView.ADD_STATE[data.info.state] then
        self._addBtn:setVisible(data.info.state == 0)
        self._appliedText:setVisible(data.info.state ~= 0)
        self._appliedText:setString(IMAddPaiYouView.ADD_STATE[data.info.state])
        if data.info.state == 3 then
            XH.TipTool.showToast("该玩家已是您的牌友~")
        end
    end
end

function IMAddPaiYouView:onTouchSearch(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local tmpSearchNum = tonumber(self._inputText:getText())
    --请求搜索好友列表逻辑
    self._inputText:setText("")
    if tmpSearchNum then
        if XH.playerData:getNumberID() == tmpSearchNum then
            XH.TipTool.showToast("不能添加自己哦~")
            return
        elseif tmpSearchNum == "" then
            XH.TipTool.showToast("输入内容错误，请重试")
            return
        end
        if self._isGeting then
            XH.TipTool.showToast( "您的操作过于频繁，请稍后再试~", 2)
            return 
        end
        self._isGeting = true
        XH.lobby:getModule("Im"):reqFriendState(tmpSearchNum)
        XH.SysTool.performWithDelayGlobal(function ()
            self._isGeting = false
        end, 1)
    else
        XH.TipTool.showToast("输入内容有误，请重试")
    end
end

function IMAddPaiYouView:onTouchAddFriend(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._tmpPlayerID ~= 0 then
        XH.lobby:getModule("Im"):reqAddFriend(self._tmpPlayerID)
    else
        XH.TipTool.showToast("玩家ID有误，请尝试重新搜索添加")
    end
end

function IMAddPaiYouView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

return IMAddPaiYouView