local MesBox = class("MesBox", XH.ViewBase)

function MesBox:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TaskSystemMesBox.csb"
end

function MesBox:getBindingInfo()
    return {
        ["_KW_PANEL_GET_AWARD"] = {varName="_getAward"},
        ["_KW_PANEL_CHOOSE_AWARD"] = {varName="_chooseAward"},
        ["_KW_PANEL_CHOOSE_MODEL"] = {varName="_chooseModel"},
        ["_KW_TEXT_AWARD_COUNT"] = {varName="_awardCount"},
        ["_KW_BTN_GET_AWARD"] = {varName="_btnGetAward",type = XH.UI_TYPE.BUTTON,onTouch = "onTouchEventGetAward"},
        ["_KW_IMG_AWARD_BG"] = {varName="_imageAwardBg"},
        ["_KW_TEXT_AWARD_NAME"] = {varName="_textAwardName"},
        ["_KW_BTN_SURE"] = {varName="_btnSure",type = XH.UI_TYPE.BUTTON,onTouchEnded = "onTouchEventClose"},
        ["_KW_IMG_BOX_ROOM"] = {varName="_imgGoBoxRoom",type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "onTouchEventDoTask"},
        ["_KW_IMG_TEA_HOUSE"] = {varName="_imgGoTeaHouse",type = XH.UI_TYPE.IMAGE_TOBUTTON,onTouchEnded = "onTouchEventDoTask"},
		["_KW_PANEL_BG"] = {varName="_btnBG",onTouchEnded = "onTouchEventBG"},
		["_KW_ACTIVITY_BTND_CLOSE"] = {varName="_btnClose",type = XH.UI_TYPE.BUTTON,onTouch = "onTouchEventClose"},

        ["_KW_PANEL_MODEL_AWARD_"] = { beginIndex = 4, endIndex = 4, varName = "_awardModel_"},
    }
end

function MesBox:ctor(param)
    self._param = param or {}
    MesBox.super.ctor(self, self._param)
    self:initUI(self._param)
end

function MesBox:initUI(param)
   if param.type == "getAward" then
       self:flushAward(param.data)
       self._getAward:setVisible(true)
   elseif param.type == "chooseAward" then
       self:flushChooseAward(param.data)
       self._chooseAward:setVisible(true)
   elseif param.type == "doTask" then
       self._chooseModel:setVisible(true)
   end
end

function MesBox:flushAward(data)
    self:updateImg(self._imageAwardBg, data.list[1].image_url)
    self._textAwardName:setText(data.list[1].prize_name)
end

function MesBox:updateImg(node, url)
    if not url then
        return 
    end

    local size = node:getContentSize()
    local imageNode = XH.RemoteImage.new()
        :setTouchEnabled(true)
        :setPosition(size.width/2, size.height/2)
        :setContentSize(size.width, size.height)
        :addTo(node)

    imageNode:setUrl(url, true)
end

function MesBox:flushChooseAward(data)
end

function MesBox:onTouchEventClose(send, eventType)
    if self._param.type == "getAward" then
        XH.playerData:flushPlayerDrop()
        XH.playerData:flushGoldCoin()
        XH.lobby:getModule("TabsActivity"):dispatchEvent({name = XH.lobby:getModule("TabsActivity").EVENT_FLUSH_TASK_LIST})
    end
    self:close()
end

function MesBox:onTouchEventDoTask(send, eventType)
    if send:getName() == "_KW_IMG_BOX_ROOM" then
        if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
        XH.viewManager:openView("CreateBoxRoomView")
    elseif send:getName() == "_KW_IMG_TEA_HOUSE" then
		--已经在比赛场内,不跳转
        if XH.playerData:checkNewRealName() ~= 0 then return end--实名限制
        if XH.playerData:checkNewRealNameVisitor() ~= 0 then return end--游客登陆
        if XH.SceneManager:getInstance():getTopSceneTag() ~= XH.SCENE_TAG.TEAHOUSE then
            XH.teaHouseManager:openTeaHouseList()
        end
    end
    XH.lobby:getModule("TabsActivity"):onDoTask()
    self:close()
end

--点击背景
function MesBox:onTouchEventBG(send, eventType)
    self:close()
end

return  MesBox 