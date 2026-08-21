local IMTeaHouseRoomInfoView = class("IMTeaHouseRoomInfoView", XH.ViewBase)
function IMTeaHouseRoomInfoView:getCSBPath()
    return "cocosStudio/hall/CSB/IMTeaHouse/IMTeaHouseRoomInfoLayer.csb"
end

function IMTeaHouseRoomInfoView:getBindingInfo()
    return {       
        ["_KWA_BTND_CLOSE"] = {varName = "_onClosebtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose"},
        ["_KW_JOIN_ROOM"] = {varName = "_onJoinRoom",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchJoin"},
        ["_KW_QUICK_CREATE"] = {varName = "_onCreateRoom",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchCreate"},
        ["_KW_ROOM_INFO"] = {varName = "_roomInfo"}
    }
end

function IMTeaHouseRoomInfoView:ctor(param)
    IMTeaHouseRoomInfoView.super.ctor(self)
    self._tableInfo = param.roominfo 
    self._nTeaId = param.nTeaId
    self._bShowCreate = param.bShowCreate
    self:showGameRule(self._tableInfo)
    if XH.lobby:getModule("Im"):isContainSelf(self._tableInfo) then
        self._onCreateRoom:setVisible(false)
        self._onJoinRoom:setVisible(false)
    end
    if not self._bShowCreate then
        self._onCreateRoom:setVisible(false)
        local x1 = self._onCreateRoom:getPositionX()
        local x2 = self._onJoinRoom:getPositionX()
        self._onJoinRoom:setPositionX((x1+x2)/2)
    end
end

function IMTeaHouseRoomInfoView:showGameRule(tableInfo)
    local baseText = ""
    local strTable
    local gameNames = XH.areaData:getAreaGameNameList()
    baseText = baseText .. gameNames[tableInfo.gameid] .. ","

    if tableInfo.gameRule then
        local luaString = "return {" .. tableInfo.gameRule .. "}"
        local luaFunction = loadstring(luaString)
        if luaFunction then
            local rule = luaFunction()
            strTable = string.split(rule.ZhRule,",")
            if rule["maxQuanShu"] then
                baseText = baseText .. rule["maxQuanShu"] .."圈,"
            else
                if self._bShowCreate then
                    baseText = baseText .. tableInfo.gameCount .."局,"
                elseif tableInfo.maxcount ~= 0 then
                    baseText = baseText .. tableInfo.maxcount .."局,"
                end
            end
        end
    end
    baseText = baseText .. tableInfo.chairs.."人,"
    if tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TEA_AA 
        or tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER_YUFU_MODE_AA
        or tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_AA
        or tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_PLAYER_OWNER_CARD_AA then
        baseText = baseText .. "平摊支付,"
    elseif tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TYPE_TEA_OWNER
        or tableInfo.paytype == XH.TeaHouseProtocol.ReqSetPayType.PayType.TEA_PLAYER_OWNER_TEACARD_WIN then
        baseText = baseText .. "冠军支付,"
    end
    
    local tmpStr =""
    if strTable then
        for i, v in pairs(strTable) do
            if tonumber(v) then
                v =v.."底分"
            end
            if strTable[i+1] then
                tmpStr = tmpStr ..v..","
            else
                tmpStr = tmpStr ..v
            end
        end    
    end
    baseText = baseText .. "玩法：".. tmpStr

    local groupList = XH.lobby:getModule("Im"):getIMData():getGroupList()
    for _,v in ipairs(groupList) do
        if self._nTeaId and (v.nTeaNumber == self._nTeaId) then
            baseText = v.szData .. ":" .. baseText
        end
    end
    self._roomInfo:setText(XH.StringTool.replaceMatchStr(baseText))
end

function IMTeaHouseRoomInfoView:getData()
    if not self._imData then
        self._imData = XH.lobby:getModule("Im"):getIMData()
    end
    return self._imData
end

function IMTeaHouseRoomInfoView:onTouchClose(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    XH.lobby:getModule("Im"):newThrowData(XH.NewThrowDataDefine.GROUP_ROOMINFO_CLOSE)
end

function IMTeaHouseRoomInfoView:onTouchJoin(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if self._tableInfo then
        XH.lobby:getModule("Im"):saveGameInfo(self._nTeaId,self._tableInfo)
        if cc.UserDefault:getInstance():getBoolForKey("BAN_PLAYER_CAN_GAME".. XH.playerData:getNumberID()) then
            XH.TipTool.showTip({
                type = XH.TipTool.TIP_TYPE.OK
            }, "您已被封禁对局，无法进入房间，如有疑问请联系客服。")
        else
            XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(self._nTeaId)
            XH.lobby:getModule("Im"):reqWillJoinTable(self._tableInfo,true)
        end
        XH.lobby:getModule("Im"):newThrowData(XH.NewThrowDataDefine.GROUP_ROOMINFO_JOINROOM,{item_id = self._tableInfo.gameid})
    end
    self:close()
end

function IMTeaHouseRoomInfoView:onTouchCreate(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.lobby:getModule("Im"):getIMData():setEnterTeaHouseID(self._nTeaId)
    local createBox = XH.lobby:getModule("Im"):saveGameInfo(self._nTeaId,self._tableInfo)
    XH.lobby:getModule("Im"):createBoxRoom(createBox)
    self:close()
    -- XH.TipTool.showToast("对不起，快速创房暂时无法使用~")
end

return IMTeaHouseRoomInfoView�