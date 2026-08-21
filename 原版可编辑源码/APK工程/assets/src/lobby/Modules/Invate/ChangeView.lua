local ChangeView = class("ChangeView", XH.ViewBase)

local inputNumCount = 6

function ChangeView:getCSBPath()
    return "cocosStudio/hall/CSB/ChangeInvateLayer.csb"
end

function ChangeView:getBindingInfo()
    return {
        ["_KW_UI_ROOT_LAYER"] = { varName = "_rootNode",onTouchEnded = "onTouchEvenKeyBoardtCancel" },
        ["_KW_BTN_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCloseBtn" },
        ["_KW_BTN_SUBMIT"] = { varName = "_submitBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSubmit" },
        ["_KW_BTN_BECOME_AGENT"] = { varName="_btnBecomeAgent",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventBecomeAgent"},
        ["_KW_YAOQING_KUANG"] = { varName = "_invateFram", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEvenShowKeyBoard"},
        ["_KW_KEYBOARD_SURE"] = { varName = "_sureBtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventOK" },
        ["_KW_KEYBOARD_DEL"] = { varName = "_delBtn",type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventDeleteBtn" },

        ["_KW_KEYBOARD_PANEL"] = { varName="_keyboardLayer"},
        ["_KW_TEXT_NEW_CODE"] = { varName="_newCodeText"},

        ["_KW_INPUT_NUM_TEXT_"] = { beginIndex = 0, endIndex = 6, varName = "_inputText_"},
        ["_KW_KEYBOARD_"] = { beginIndex = 0, endIndex = 9, varName = "_keyBoardBtn_", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventNumBtn"},
    }
end

function ChangeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Invate"), eventKeyName = "EVENT_CHANGE_BIND_PURVIEW", callBack = "onGetBindCheck" },
        { module = XH.lobby:getModule("Invate"), eventKeyName = "EVENT_CHANGE_BIND_REQ", callBack = "onChangeBindBack" },
    }
end

function ChangeView:ctor() 
    ChangeView.super.ctor(self)
    
    self._code = 0
    self._currentInputNumIndex = 1
    self._canChangeBind = false

    XH.lobby:getModule("Invate"):reqCheckChangeBindPurview()
end

------------------------------protocol-----------------------------------
function ChangeView:reqChangeBind(becomeAgent)
    becomeAgent = becomeAgent or false
    local tHttpInfo = XH.lobby:getModule("Invate"):createReqChangeBindInfo()
    tHttpInfo["code"] = self._code
    tHttpInfo["phone"] = 0
    tHttpInfo["verify_code"] = 0
    tHttpInfo["channel_id"] = 20001
    if becomeAgent then
        tHttpInfo["is_register"] = 1
        tHttpInfo["code"] = 0
        tHttpInfo["reason"] = 0
    else
        tHttpInfo["is_register"] = 0
        tHttpInfo["reason"] = 4
    end
    
    XH.lobby:getModule("Invate"):reqChangeBindState(tHttpInfo)
end
------------------------------touchEvent------------------------------------------
function ChangeView:onTouchEventCloseBtn(send, eventType)
    self:close()
end

function ChangeView:onTouchEventOK(send, eventType)
    if self._keyboardLayer then
        self._keyboardLayer:setVisible(false)
    end 

    local code = ""
    if self._currentInputNumIndex > inputNumCount then
        for i = 1,inputNumCount do
            local numStr = self["_inputText_"..i]:getString()
            code = code .. numStr
        end
    end
    local nCode = tonumber(code,10)
    if nCode == nil or nCode > 1000000 then
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		},"此邀请码不存在！")
        return 
    end
    self._code = nCode
end

function ChangeView:onTouchEventSubmit(send, eventType)
    local code = ""
    if self._currentInputNumIndex > inputNumCount then
        for i = 1,inputNumCount do
            local numStr = self["_inputText_"..i]:getString()
            code = code .. numStr
        end
    end
    if code ~= "" then
        code = tonumber(code)
    else
        code = 0
    end
    self._code = code
    XH.userDefault:setValue(XH.userDefault.KEY_ID.CHANGE_INVATE_CODE, code or 0)

    if self._code == 0 then
        XH.TipTool.showTip({
			type = XH.TIP_LAYER_TYPE.OK,
		},"请填入新的邀请码！")
    else
        if self._canChangeBind then
            self:reqChangeBind()
        else
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
            },"您不符合换绑要求，无法换绑！")
        end
    end
    
end

function ChangeView:onTouchEvenKeyBoardtCancel(send, eventType)
    if self._keyboardLayer then
        self._keyboardLayer:setVisible(false)
    end 
end

function ChangeView:onTouchEvenShowKeyBoard(send, eventType)
    if self._keyboardLayer then
        self._keyboardLayer:setVisible(true)
    end 
end

function ChangeView:onTouchEventDeleteBtn(send, eventType)
    if self._currentInputNumIndex == 1 then
        return
    end

    self._currentInputNumIndex = self._currentInputNumIndex - 1
    local inputText = self["_inputText_"..self._currentInputNumIndex]
    if inputText then
        inputText:setString("")
    end
end

function ChangeView:onTouchEventNumBtn(send, eventType)
    if not(self._currentInputNumIndex > 0 and self._currentInputNumIndex <= inputNumCount) then
        return
    end
    local bottonName = send:getName()
    local splitStr = string.split(bottonName, "_")
    local num = splitStr[#splitStr]

    local inputText = self["_inputText_"..self._currentInputNumIndex] 
        if inputText then
        inputText:setString(num)
    end
    self._currentInputNumIndex = self._currentInputNumIndex + 1
end

function ChangeView:onTouchEventBecomeAgent(send, eventType)
    self:reqChangeBind()
end

function ChangeView:onGetBindCheck(data)
    self._canChangeBind = data
end

function ChangeView:onChangeBindBack(event)
    local data = event.data
    if data.nType == XH.Req.TYPE.SUCCESS then
        if data.nData.errorCode == 0 then
            if data.nData.response.status == 1 then
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,
                }, "换绑成功！")
                XH.playerData:setInvateCode(self._code)
                XH.playerData:setBindDSB(true)
            else
                XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,
                }, "您的申请已提交，请等待处理！")
                XH.userDefault:setValue(XH.userDefault.KEY_ID.NEED_REQ_CHANGE_BIND_RESULT,false)
            end
        elseif data.nData.errorCode == 1075 then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
            }, "您已经提交过申请，用户尚未处理，请等待用户处理结果！")
        elseif data.nData.errorCode == 1059 then
            XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK,
            }, "输入的邀请码与原先绑定的一致！")
        end
    end
    self:close()
end

return ChangeView