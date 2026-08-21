local RightBtnsView = CF.gameClass("RightBtnsView", CF.ViewBase)
local FIRSTVOICETIPINGAME = "FIRST_GETSEX" ..  CF.areaData:getAreaID()

function RightBtnsView:ctor()
    RightBtnsView.super.ctor(self)
    self._imMessageIcon = nil
    self:initUI()
    self:onUpdateBtnVisible()
end

function RightBtnsView:getCSBPath()
    if CF and CF.roomData and CF.roomData:isNewUI() then
        return "cocosStudio/Common/CSB/GameBase/RightBtnsLayerNew.csb"
    end
    return "cocosStudio/Common/CSB/GameBase/RightBtnsLayer.csb"
end

function RightBtnsView:getBindingInfo()
    return {
        ["_KW_GAMELAYER_BG"] = {varName = "_imgTableBg"},
        ["_KW_BTN_MSG"] = {varName = "_msgBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onMsgBtnClicked"},
        ["_KW_BTN_SPEAK"] = {varName = "_speakBtn", type = CF.UI_TYPE.BUTTON, onTouch = "onSpeakBtnClicked"},
        ["_KW_BTN_SET"] = {varName = "_setBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onSetBtnClicked"},
        ["_KW_BTN_ROBOT"] = {varName = "_robotBtn", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onRobotBtnClicked"},
        ["_KW_UI_FINGER_NODE"] = {varName = "_aniGuideNode"},
        ["_KW_IMG_SETTIPS"] = {varName = "_KW_IMG_SETTIPS"},
        ["_KW_ANI_FINGER_NEW_NODE"] = {varName = "_fingerAniNewNode"},
    }
end

function RightBtnsView:getProxyEvents()
    return {
        {module = CF.game:getModule("Match"), eventKeyName = "EVENT_MATCH_STATE_CHANGED", callBack = "onMatchStateChanged"},
        {module = CF.roomData, eventKeyName = "EVENT_GAME_UPDATE_SEER", callBack = "onUpdateBtnVisible"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_START", callBack = "onGameStart"},
    }
end

function RightBtnsView:onUpdateBtnVisible()
    self._msgBtn:setVisible(not CF.roomData:getIsSeer())
    self._speakBtn:setVisible(not CF.roomData:getIsSeer())
end

function RightBtnsView:getAdaptationConfig()
    return {
        {node = self._speakBtn, bRight = true, bHalf = false},
        {node = self._setBtn, bRight = true, bHalf = true},
        {node = self._robotBtn, bRight = true, bHalf = true},
        {node = self._msgBtn, bRight = true, bHalf = false}
    }
end

function RightBtnsView:initUI()
    self:checkPermission()
    self:updateRobotBtn()
    self:updateSpeakBtn()
    self:updateMsgBtn()
    self:initAnimtion()
    self:onUpdateBtnVisible()
end

function RightBtnsView:updateRobotBtn()
    if self._robotBtn then
        self._robotBtn:setVisible(self:isShowRobotBtn())
    end
end

function RightBtnsView:isShowRobotBtn()
    return CF.roomData:isGoldRoom()
end

function RightBtnsView:isShowSpeakBtn()
    -- 匹配中不显示
    if CF.roomData:isMatching() then
        return false
    end
    if CF.roomData:is220Model() then
        return false
    end
    return true
end

function RightBtnsView:isShowMsgBtn()
    -- 匹配中不显示
    if CF.roomData:isMatching() then
        return false
    end
    return true
end

function RightBtnsView:updateSpeakBtn()
    if self._speakBtn then
        self._speakBtn:setVisible(self:isShowSpeakBtn())
    end
end

function RightBtnsView:updateMsgBtn()
    if self._msgBtn then
        self._msgBtn:setVisible(self:isShowMsgBtn())
    end
end

function RightBtnsView:onMatchStateChanged()
    self:updateSpeakBtn()
    self:updateMsgBtn()
end

function RightBtnsView:onGameStart()
    if not CF.roomData then
        return
    end
    if CF.roomData:is220Model() then
        self:onMatchStateChanged()
    end
end

function RightBtnsView:onSpeakBtnClicked(send, eventType)
    if eventType == ccui.TouchEventType.began then
        --先判断系统,android和ios分开处理
        local function startSpeakVoice()
            self._touchStartPos = send:getTouchBeganPosition()
            CF.game:getModule("Voice"):startSpeak()
        end
        if device.platform == "android" then
            --检查持久化存储中是已经授权
            if CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_FAST_VOICE_STATE, false)  then
                startSpeakVoice()
            else 
                --未授权的玩家,检查是否已经勾选禁止提示
                if CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_FAST_VOICE_STATE_DENY, false) then
                    --已经勾选的弹窗提示,玩家可以去系统中手工开启
                    local openPermission = function()
                        CF.sdkManager:callFunction("jump_permission_system")
                    end
                    self:showPermissionDialog("您已经关闭了录音权限,需要您在系统设置中重新开启",openPermission)
                else 
                    local size = cc.Director:getInstance():getWinSize()
                    CF.TipTool.showToast("权限说明：用于启用语音交流功能,需要获取您的麦克风权限", 2, cc.p(size.width/2,size.height - 80),true)
                    CF.SysTool.performDelayOnce(function()
                        if device.platform == "android" then
                            CF.sdkManager:callFunction("user_initiative")
                        end
                        local args = {
                            ["0"] = CF.sdkManager.AndroidPermission.RECORD_AUDIO,
                        }
                        CF.sdkManager:setCurrnetCheckPermission(CF.sdkManager.AndroidPermission.RECORD_AUDIO)
                        CF.sdkManager:callFunctionWithMap("add_permission",args)
                    end, 0.2)
                end
            end
        else 
            startSpeakVoice()
        end
        CF.game:getModule("IconAnimationManager"):reportData("语音")
    elseif eventType == ccui.TouchEventType.ended then
        CF.game:getModule("Voice"):endSpeak()
        CF.throwDataManager:throwDataClick(CF.ThrowDataDefine.TABLE_15)
    elseif eventType == ccui.TouchEventType.canceled then
        CF.game:getModule("Voice"):cancelSpeak()
    elseif eventType == ccui.TouchEventType.moved then
        if self._touchStartPos then
            local endPos = send:getTouchMovePosition()
            local distance = cc.pGetDistance(endPos, self._touchStartPos)
            CF.game:getModule("Voice"):touchMoved(distance)
        end
    end
end
function RightBtnsView:onMsgBtnClicked(send, eventType)
    CF.gameRequire("Modules.Chat.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("聊天")
end

function RightBtnsView:onSetBtnClicked(send, eventType)
    local voiceTip = self._setBtn:getParent()
    :getChildByName("KW_IMG_BUBBLETIP")
    if  voiceTip ~= nil then
        self._setBtn:getParent():removeChildByName("KW_IMG_BUBBLETIP")
        cc.UserDefault:getInstance():setBoolForKey(FIRSTVOICETIPINGAME, true)
    end
    if CF.userDefault:getValue(CF.userDefault.KEY_ID.KW_SETTING_GUIDE_STATUS, 0) == 0 then
        if CF.areaData:isOpenSimpleSettingGuide() then
            CF.userDefault:setValue(CF.userDefault.KEY_ID.KW_SETTING_GUIDE_STATUS, 1)
        end
        self._aniGuideNode:setVisible(false)
    end
    if CF.game:getModule("RightBtns"):checkNeedShowGuideAnimNew() then
        self._fingerAniNewNode:removeAllChildren()
        self._KW_IMG_SETTIPS:setVisible(false)
        cc.UserDefault:getInstance():setBoolForKey("ALREADY_OPEN_SETVIEW", true)
    end
    CF.gameRequire("Modules.Setting.View").new():showSelf()
    CF.game:getModule("IconAnimationManager"):reportData("菜单")
end

function RightBtnsView:onRobotBtnClicked(send, eventType)
    CF.game:getModule("RightBtns"):doStartTrust()
    CF.game:getModule("IconAnimationManager"):reportData("托管")
end

function RightBtnsView:showPermissionDialog(text,func)
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer", {CF.TipLayer.ENUM_TIP_TYPE.OK_CANCEL})
    tipPlayer:setTouchBackGround(false)
    tipPlayer:setText(text)
    if func then
        tipPlayer:setButtonMoreEvent(tipPlayer.ENUM_BUTTON_TYPE.OK, func)
    end
end

function RightBtnsView:checkPermission()
    local args = {
        ["0"] = CF.sdkManager.AndroidPermission.RECORD_AUDIO,
    }
    CF.sdkManager:setCurrnetCheckPermission(CF.sdkManager.AndroidPermission.RECORD_AUDIO)
    CF.sdkManager:callFunctionWithMap("check_has_permission",args)
end

function RightBtnsView:initAnimtion()
    if CF.game:getModule("RightBtns"):checkNeedShowGuideAnimNew() then
        local path = "res/animation/Common/qgb_ty_xsdj/"
        local filename = "qgb_ty_xsdj"
        local aniName = "animation"
        CF.SpineManager:playAni(self._fingerAniNewNode, path, filename, aniName, true)
        self._KW_IMG_SETTIPS:setVisible(true)
        return
    end
    if CF.game:getModule("RightBtns"):checkNeedShowGuideAnim() then
        if self._aniGuideNode then
            self._aniGuideNode:setVisible(true)
        end
   end
end

return RightBtnsView
   Q#  