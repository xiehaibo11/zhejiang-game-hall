local BindPhoneView = class("BindPhoneView", XH.ViewBase)
local ViewAniConfig = require("app.Base.ViewAniConfig")

local KW_PANEL_TIEM = "_KW_PANEL_TIEM"
local KW_ICON = "_KW_ICON"
local KW_TEXT_ACCOUNT = "_KW_TEXT_ACCOUNT"

-- UI名字定义
function BindPhoneView:getCSBPath()
    return "cocosStudio/hall/CSB/BindPhoneLayer/BindPhoneLayer.csb"
end

function BindPhoneView:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, popNode = self._rootPanel}
end

--- 获得节点的绑定信息
function BindPhoneView:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_rootPanel"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_GET_CODE"] = {varName = "_btnGetCode", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGetCode"},
        ["_KW_BTN_ONE_BIND"] = {varName = "_btnOneBind", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventGeYan"},
        ["_KW_BTN_COMMIT"] = {varName = "_btnCommit", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCommit"},
        ["_KW_BTN_COMMIT_2"] = {varName = "_btnCommit2", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCommit"},
        ["_KW_LIST_REWARD"] = {varName = "_awardInfoList", type = XH.UI_TYPE.LISTVIEW},
        ["_KW_EDIT_PHONE_NUMBER"] = {varName = "_editPhoneNumber"},
        ["_KW_EDIT_IDENTIFY_NUMBER"] = {varName = "_editCodeNumber"},
        ["_GET_CODE_TEXT"] = {varName = "_getCodeText"},
        ["_KW_ONE_BIND_TIP"] = {varName = "_tipOneBind"},
        ["_KW_PANEL_TIEM"] = {varName = "_awardItemPanel"}
    }
end

function BindPhoneView:ctor(param, isAutoPop)
    param = param or {}
    BindPhoneView.super.ctor(self, param)
    self._awardInfoList:removeAllChildren()
    self._awardItemPanel:setVisible(false)
    self._awardInfoList:setItemModel(self._awardItemPanel)

    self._editPhoneNumber:setInputMode(cc.EDITBOX_INPUT_MODE_PHONENUMBER)
    self._editCodeNumber:setInputMode(cc.EDITBOX_INPUT_MODE_PHONENUMBER)
    self._isAutoPop = isAutoPop
    if isAutoPop then
        XH.lobby:getModule("PopSystem"):initPopClickInfo("bindPhone")
    end
end

function BindPhoneView:onEnter()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sjbd24122603)
    local awardInfo = XH.lobby:getModule("BindPhone"):getAwardInfo()
    for key, var in pairs(awardInfo) do
        self._awardInfoList:pushBackDefaultItem()
        local items = self._awardInfoList:getItems()
        local item = items[#items]
        item:setName(KW_PANEL_TIEM .. "_CLONE" .. key)
        item:setVisible(true)
        local showPropCnt = var.count
        if var.propId == XH.areaData:getPropLimitedTimeRoomCardID() then
            if XH.areaData:getPropLimitedTimeRoomCardRatio() then
                showPropCnt = showPropCnt / XH.areaData:getPropLimitedTimeRoomCardRatio()
            end
        end
        XH.UITool.setText(item, KW_TEXT_ACCOUNT, "x" .. showPropCnt)
        self._awardInfoList:setScrollBarEnabled(false)

        local addNode = item:getChildByName(KW_ICON)
        local headImage =
            XH.RemoteImage.new():setAnchorPoint(cc.p(0.5, 0.5)):setPosition(addNode:getContentSize().width * 0.5, addNode:getContentSize().height * 0.5):ignoreContentAdaptWithSize(false):setContentSize(
            addNode:getContentSize().width,
            addNode:getContentSize().height
        ):addTo(addNode)
        headImage:setMaxContentSize(cc.size(addNode:getContentSize().width, addNode:getContentSize().height))
        headImage:setUrl(XH.propsData:getExtendPropImgUrlByPropid(tonumber(var.propId)) or "")
    end

    local itemCnt = #self._awardInfoList:getItems()
    self._awardInfoList:setContentSize(self._awardItemPanel:getContentSize().width * itemCnt + 146 * (itemCnt - 1), self._awardInfoList:getContentSize().height)

    local support = false -- XH.lobby:getModule("BindPhone"):isSupportGeYan()
    self._btnCommit:setVisible(not support)
    self._btnCommit2:setVisible(support)
    self._btnOneBind:setVisible(support)
    self._tipOneBind:setVisible(support)
end

function BindPhoneView:onTouchEventGetCode(send, event)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("getcode", {id="bindPhone"})
    end
    local strPhone = self._editPhoneNumber:getText()
    if self:specialCodeBind(strPhone) then
        return
    end
    if strPhone == "" then
        XH.TipTool.showToast(XH.ConstString.getStr("ERROR_PHONE"), 3)
        return
    end
    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showToast(XH.ConstString.getStr("ERROR_PHONE"), 3)
        return
    end
    XH.lobby:getModule("BindPhone"):reqIdentifyCode(strPhone)
    self:showCodeText()
end

function BindPhoneView:onTouchEventCommit(send, event)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("commit", {id="bindPhone"})
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sjbd24122604, {block_item_id = "确认"})
    local strPhone = self._editPhoneNumber:getText()
    if self:specialCodeBind(strPhone) then
        return
    end
    if strPhone == "" then
        XH.TipTool.showToast(XH.ConstString.getStr("ERROR_PHONE"), 3)
        return
    end
    if not self:checkPhoneLegality(strPhone) then
        XH.TipTool.showToast(XH.ConstString.getStr("ERROR_PHONE"), 3)
        return
    end
    local strCode = self._editCodeNumber:getText()
    if strCode == "" then
        XH.TipTool.showToast(XH.ConstString.getStr("ERROR_PHONE_CODE"), 3)
        return
    end

    local bindType = XH.lobby:getModule("BindPhone").BindType.BIND_TYPE_UNSPECIFIED
    XH.lobby:getModule("BindPhone"):reqPhoneBind({phone = strPhone, code = strCode, passwd = "", type = bindType})
end

function BindPhoneView:onTouchEventGeYan(send, event)
end

--- 关闭按钮
function BindPhoneView:onTouchEventClose(send, event)
    if self._isAutoPop then
        XH.lobby:getModule("PopSystem"):setClick("close", {id="bindPhone"})
    end
    self:close()
end

-- * 输入特殊号码，视为绑定成功
function BindPhoneView:specialCodeBind(phone)
    return false
end

function BindPhoneView:checkPhoneLegality(strPhone)
    if strPhone == nil then
        return
    end
    if not string.match(strPhone, "^%d+$") or string.len(strPhone) < 11 then
        return false
    end
    return true
end

function BindPhoneView:showCodeText()
    local sendbtn = self._btnGetCode
    local timeTxtNode = self._getCodeText
    if sendbtn and timeTxtNode then
        sendbtn:setBright(false)
        sendbtn:setEnabled(false)
        timeTxtNode:setString(tonumber(string.format("%02d", 60)))
        timeTxtNode:setVisible(true)
        local nTime = 60
        timeTxtNode:stopAllActions()
        timeTxtNode:runAction(
            cc.RepeatForever:create(
                cc.Sequence:create(
                    cc.DelayTime:create(1),
                    cc.CallFunc:create(
                        function()
                            nTime = nTime - 1
                            if nTime > 0 then
                                local strTime = tonumber(string.format("%02d", nTime))
                                timeTxtNode:setString(strTime)
                            else
                                timeTxtNode:stopAllActions()
                                timeTxtNode:setString("获取验证码")
                                sendbtn:setBright(true)
                                sendbtn:setEnabled(true)
                            end
                        end
                    )
                )
            )
        )
    end
end

return BindPhoneView
�