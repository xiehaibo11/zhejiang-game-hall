local TeaHouseAutoAwardView = class("TeaHouseAutoAwardView", XH.ViewBase)

local KW_TEXT_WHITE_DIS = 5

function TeaHouseAutoAwardView:getCSBPath()
    return "cocosStudio/hall/CSB/window/TeaAutoAward.csb"
end

function TeaHouseAutoAwardView:getBindingInfo()
    return {
        ["_KW_BTN_CHECK"] = { varName = "_btnCheck", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_TEXT_CONTACT"] = { varName = "_btnContact", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnContact"},
        ["_KW_TEXT_NAME"] = { varName = "_textName"},
        ["_KW_TEXT_DEAR"] = { varName = "_textDear"},
        ["_KW_TEXT_NAME_LINE"] = { varName = "_textNameLine"},
        ["_KW_TEXT_WELCOME"] = { varName = "_textWelcome"},
        ["_KW_TEXT_TEA_PWD"] = { varName = "_textPwd"},
        ["_KW_TEXT_END"] = { varName = "_textEndTime"},
        ["_KW_TEXT_COUNT"] = { varName = "_textCount"},
        ["_KW_TEA_FRONT"] = { varName = "_textPwdFront"},
        ["_KW_TEA_BACK"] = { varName = "_textPwdBack"},
        ["_KW_ENDTIME_FRONT"] = { varName = "_textEndTimeFront"},
        ["_KW_ENDTIME_BACK"] = { varName = "_textEndTimeBack"},
    }
end

function TeaHouseAutoAwardView:ctor(param)
    param = param or {}
    TeaHouseAutoAwardView.super.ctor(self, param)
    self:initUI(param)
end

function TeaHouseAutoAwardView:initUI(param)
    if self._textName and self._textDear and self._textNameLine and self._textWelcome then
        self._textName:setString(XH.StringTool.cutStringByLength(XH.playerData:getNickName(), 12))
        self:updateNameLineLenth()
        self:updateNamePos()
    end
    if self._textPwd and param.passwd then
        self._textPwd:setString(param.passwd)
        self:updateTeaPwdPos()
    end
    if self._textEndTime and param.expire_card_at then
        self._textEndTime:setString(param.expire_card_at)
        self:updateEndTimePos()
    end
    if self._textCount and param.add_card_cnt then
        self._textCount:setString(param.add_card_cnt)
    end
end

function TeaHouseAutoAwardView:updateNamePos()
    local lineSize = self._textNameLine:getContentSize()
    self._textNameLine:setPositionX(self._textDear:getPositionX() + KW_TEXT_WHITE_DIS + lineSize.width / 2)
    self._textName:setPositionX(self._textNameLine:getPositionX())
    self._textWelcome:setPositionX(self._textNameLine:getPositionX() + KW_TEXT_WHITE_DIS + lineSize.width / 2)
end

function TeaHouseAutoAwardView:updateTeaPwdPos()
    local pwdSize = self._textPwd:getContentSize()
    if self._textPwdFront and self._textPwdBack then
        self._textPwdFront:setPositionX(self._textPwd:getPositionX() - KW_TEXT_WHITE_DIS - pwdSize.width / 2)
        self._textPwdBack:setPositionX(self._textPwd:getPositionX() + KW_TEXT_WHITE_DIS + pwdSize.width / 2)
    end
end

function TeaHouseAutoAwardView:updateEndTimePos()
local endTimeSize = self._textEndTime:getContentSize()
    if self._textEndTimeFront and self._textEndTimeBack then
        self._textEndTimeFront:setPositionX(self._textEndTime:getPositionX() - KW_TEXT_WHITE_DIS - endTimeSize.width / 2)
        self._textEndTimeBack:setPositionX(self._textEndTime:getPositionX() + KW_TEXT_WHITE_DIS + endTimeSize.width / 2)
    end
end

function TeaHouseAutoAwardView:updateNameLineLenth()
    self._textNameLine:setString("")
    while self._textNameLine:getContentSize().width < self._textName:getContentSize().width do
        self._textNameLine:setString(self._textNameLine:getString() .. "——")
    end
end

function TeaHouseAutoAwardView:onBtnClose(send, event)
    self:close()
end

function TeaHouseAutoAwardView:onBtnContact(send, event)
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"GAMELOBBY")
end

return TeaHouseAutoAwardView