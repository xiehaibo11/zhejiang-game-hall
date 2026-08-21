local TeaHouseInputView = import(".TeaHouseInputView")
---@class TeaHouseInputView : TeaHouseInputView
local TeaHouseJoinView = class("TeaHouseJoinView", TeaHouseInputView)

local KW_MAX_NUM_COUNT = 6

TeaHouseJoinView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseInputView.csb",
    binding = {
        ["_KW_IMG_JOIN_TITLE"] = { tag = "_KW_IMG_JOIN_TITLE", name = "_imgJoinTitle", class = "img" },
        ["_KW_IMG_JOIN_INPUT"] = { tag = "_KW_IMG_JOIN_INPUT", name = "_imgJoinInput", class = "img" },
    }
}

TeaHouse.SysTool.mergeCsbBinding(TeaHouseJoinView.RAW_RES_BINDING_CSB, {
    preKey = "_KW_TEXT_NUM_", startNum = 1, endNum = KW_MAX_NUM_COUNT, preName = "_textNum", class = "btn"
})

function TeaHouseJoinView:ctor()
    self._inputTexts = {}
    self._defaultTexts = {}

    TeaHouseJoinView.super.ctor(self)
end

function TeaHouseJoinView:initUI()
    TeaHouseJoinView.super.initUI(self)

    if self._imgJoinTitle then
        self._imgJoinTitle:setVisible(true)
    end
    if self._imgJoinInput then
        self._imgJoinInput:setVisible(true)
    end
    for i = 1, KW_MAX_NUM_COUNT do
        local textNum = self["_textNum" .. i]
        if textNum then
            self._defaultTexts[i] = textNum:getString()
        end
    end
end

function TeaHouseJoinView:onEnter()
    TeaHouseJoinView.super.onEnter(self)

    self:initEvents()
end

function TeaHouseJoinView:initEvents()
    local teahouseGeneral = TeaHouse.manager.teahouseGeneral
    self:createListener(teahouseGeneral)
    :addEventListener(teahouseGeneral.EVENT_TEA_HOUSE_JOIN_FAILED, handler(self, self.onTeaHouseJoinFailed))
    :addEventListener(teahouseGeneral.EVENT_CLOSE_INPUT_VIEW, handler(self, self.onCloseView))    
end

function TeaHouseJoinView:onTeaHouseJoinFailed(event)
    if event.msg then
        self._error = event.msg
    end
    self:onResetInput()
end

function TeaHouseJoinView:onDeleteInput()
    if #self._inputTexts <= 0 then
        return
    end
    table.remove(self._inputTexts)
    self:refreshNums()
end

function TeaHouseJoinView:onResetInput()
    self._inputTexts = {}
    self:refreshNums()
end

function TeaHouseJoinView:onNumInput(num)
    if not self._inputTime then
        self._inputTime = os.time()
    end
    if #self._inputTexts >= KW_MAX_NUM_COUNT then
        return
    end

    self._inputTexts[#self._inputTexts + 1] = tostring(num)
    self:refreshNums()

    if #self._inputTexts == KW_MAX_NUM_COUNT then
        local teaHousePwd = ""
        for i = 1, #self._inputTexts do
            teaHousePwd = teaHousePwd .. self._inputTexts[i]
        end
        TeaHouse.manager.teahouseGeneral:reqAskAppidByPassword(teaHousePwd)
    end
end

function TeaHouseJoinView:refreshNums()
    for i = 1, KW_MAX_NUM_COUNT do
        local textNum = self["_textNum" .. i]
        if textNum then
            if self._inputTexts[i] ~= nil then
                textNum:setString(self._inputTexts[i])
            elseif self._defaultTexts[i] ~= nil then
                textNum:setString(self._defaultTexts[i])
            else
                textNum:setString("")
            end
        end
    end
end

function TeaHouseJoinView:onCloseClicked(send, eventType)
    self._closeTime = os.time()
    self:RecordData()
    self.super.onCloseClicked(self,send,eventType)
end

--记录数据到北极星
function TeaHouseJoinView:RecordData()
    --数据统计
    local data = {}
    data.userid = XH.playerData:getNumberID()
    data.time1 = self._inputTime
    data.time2 = self._closeTime
    data._error = self._error
    XH.throwDataManager:throwData(XH.ThrowDataDefine.TeaFriendsSelected,data)
end

function TeaHouseJoinView:onCloseView(event)
    self:close()
end

return TeaHouseJoinView$