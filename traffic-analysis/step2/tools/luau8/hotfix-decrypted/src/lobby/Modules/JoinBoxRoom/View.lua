local JoinBoxRoomView = class("JoinBoxRoomView",XH.ViewBase)

local INPUT_NUMBER_COUNT = 6
local DEFAULT_TEXT = {"请", "输", "入", "房", "间", "号"}
local FourToTwoConfig = require("lobby.Config.FourToTwoActConfig")

function JoinBoxRoomView:getCSBPath()
    return "cocosStudio/hall/CSB/JoinBoxRoom.csb"
end

function JoinBoxRoomView:getBindingInfo()
    return {
        ["_KW_BTN_BACK"] = {varName="_btnBack",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_PANEL_BG"] = {varName="_btnBG",onTouchEnded = "onTouchEventClose"},
        ["_KW_INPUT_CLEAR"] = {varName="_btnInputClear",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClearBtn"},
        ["_KW_INPUT_NUM_DELETE"] = {varName="_btnInputDelete",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventDeleteBtn"},
        ["_KW_INPUT_NUM_"] = {varName="_btnInputNum", beginIndex = 0, endIndex = 9, type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventNumBtn"},
        ["_KW_TEXT_INPUT_NUM_"] = {varName="_textInputNum", beginIndex = 1, endIndex = 6},
        ["_KW_IMG_AREA"] = { varName = "_areaImage" },
        ["_KW_TEXT_AREA"] = { varName = "_areaText" },

        ["_KW_FOUR_TO_TWO_BG"] = { varName = "_fourToTwoBg" },
        ["_KW_FOUR_TO_TWO_TEXT"] = { varName = "_fourToTwoText" },
    }
end

function JoinBoxRoomView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("JoinBoxRoom"),eventKeyName = "EVENT_HIDE_JOINBOXROOM", callBack = "closeView" },
    }
end

function JoinBoxRoomView:ctor(param)
    param = param or {}
	JoinBoxRoomView.super.ctor(self,param)
    self._inputData = {}
    self:initUI()
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.YUEJU_03)


    if device.platform == "windows" then
        local str = XH.SysTool:getCopyString()
        if type(str) == "string" and #str == 6 and str:match("^%d+$") ~= nil then
            for i = 1, 6 do
                local char = string.sub(str, i, i)
                table.insert(self._inputData, char)
            end
            self:updateAllTexts()
            self:checkReqJoinBoxRoom()
        end
    end
end

function JoinBoxRoomView:initUI()
    self:initAreaName()
    self:initFourToTwo()
end

function JoinBoxRoomView:initAreaName()
    if XH.ChannelTool.judgeIsChannel() then
        if self._areaImage and self._areaText then
            self._areaText:setString("")
            self._areaImage:setVisible(false)
        end
    else
        if self._areaImage and self._areaText then
            local areaString = XH.areaData:getAreaName()
            self._areaText:setString(areaString)
            self._areaImage:setVisible(true)
        end    
    end
end

function JoinBoxRoomView:initFourToTwo()
    local lobbyId = XH.areaData:getLobbyID()
    if FourToTwoConfig.AreaConfig[lobbyId].LobbyOpen then
        self._fourToTwoBg:setVisible(true)
        local text = FourToTwoConfig.getGuideText()
        self._fourToTwoText:setString("【小提示】" .. text)
    else
        self._fourToTwoBg:setVisible(false)
    end
end

function JoinBoxRoomView:onTouchEventNumBtn(send, eventType)
    local bottonName = send:getName()
    local splitStr = string.split(bottonName, "_")
    local num = splitStr[#splitStr]
    self:addInputText(num)
    if not self._inputTime then
        self._inputTime = os.time()
    end
end

function JoinBoxRoomView:onTouchEventClearBtn(send, eventType)
    self:removeAllInputTexts()
end

function JoinBoxRoomView:onTouchEventDeleteBtn(send, eventType)
    self:removeInputText()
end

function JoinBoxRoomView:addInputText(text)
    if not text then
        return
    end
    if #self._inputData >= INPUT_NUMBER_COUNT then
        return
    end
    table.insert(self._inputData, text)
    self:updateAllTexts()
    self:checkReqJoinBoxRoom()
end

function JoinBoxRoomView:removeInputText()
    if #self._inputData <= 0 then
        return
    end
    table.remove(self._inputData, #self._inputData)
    self:updateAllTexts()
end

function JoinBoxRoomView:removeAllInputTexts()
    self._inputData = {}
    self:updateAllTexts()
end

function JoinBoxRoomView:updateAllTexts()
    for index = 1, INPUT_NUMBER_COUNT do
        local text = self._inputData[index]
        text = text or DEFAULT_TEXT[index]
        if self["_textInputNum"..index] then
            self["_textInputNum"..index]:setString(text)
        end
    end
end

function JoinBoxRoomView:getInputRoomID()
    local strBoxRoomID = ""
    for _, numText in ipairs(self._inputData) do
        strBoxRoomID = strBoxRoomID .. numText
    end
    return strBoxRoomID
end

function JoinBoxRoomView:checkReqJoinBoxRoom()
    if #self._inputData == INPUT_NUMBER_COUNT then
        XH.TipTool.showLoading()
        XH.lobby:getModule("JoinBoxRoom"):reqJoinBoxRoom(self:getInputRoomID(), 1)
        XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.YUEJU_04)
    end
end

--点击关闭按钮
function JoinBoxRoomView:onTouchEventClose(send, eventType)
    self._closeTime = os.time()
    self:closeView()
end

function JoinBoxRoomView:closeView(event)
    if event and event.msg then
        self._joinResult = event.msg.msg
        self:RecordData()
        if event.msg.type == XH.Req.TYPE.SUCCESS then
            self:close()
        end
    else
        self:close()
    end
end

--记录数据到北极星
function JoinBoxRoomView:RecordData()
    --数据统计
    local data = {}
    data.userid = XH.playerData:getNumberID()
    data.time1 = self._inputTime
    data.time2 = self._closeTime
    data.result = self._joinResult
    XH.throwDataManager:throwData(XH.ThrowDataDefine.JionHomeSelected,data)
end

return JoinBoxRoomView�