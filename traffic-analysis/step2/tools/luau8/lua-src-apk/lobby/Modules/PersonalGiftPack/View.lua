local PersonalGiftPackView = class("PersonalGiftPackView", XH.ViewBase)

function PersonalGiftPackView:getCSBPath()
    return "cocosStudio/hall/CSB/PersonalGiftPack/PersonalGiftPackLayer.csb"
end

function PersonalGiftPackView:getBindingInfo()
    return {
        -- ["_KW_PANEL_BG"] = { varName = "_panelBg" },
        ["_KW_IMG_BG"] = { varName = "_imgBg" },
        -- ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_BTN_ARR_LEFT"] = { varName = "_btnArrLeft", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventArrLeft" },
        ["_KW_BTN_ARR_RIGHT"] = { varName = "_btnArrRight", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventArrRight" },
        ["_KW_BTN_ARR_LEFT_1"] = { varName = "_btnArrLeft1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventArrLeft" },
        ["_KW_BTN_ARR_RIGHT_1"] = { varName = "_btnArrRight1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventArrRight" },
        ["_KW_PAGEVIEW_WEB_CONFIG"] = { varName = "_pageViewWebConfig" },
        ["_KW_PANEL_MASK"] = { varName = "_maskLayer" },
    }
end

function PersonalGiftPackView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PersonalGiftPack"), eventKeyName = "EVENT_CONFIG_DATA_CHANGED",  callBack = "onConfigDataChanged" },
        { module = XH.lobby:getModule("PersonalGiftPack"), eventKeyName = "EVNET_GIFTPACK_BUY_RESULT",  callBack = "onGiftpackBuyResult" },
    }
end

function PersonalGiftPackView:ctor(param)
    param = param or {}
    PersonalGiftPackView.super.ctor(self)
    self._closeToPos = param.closeToPos
end

function PersonalGiftPackView:onEnter()
    PersonalGiftPackView.super.onEnter(self)
    XH.lobby:getModule("PersonalGiftPack"):reqWebActivity()
end

function PersonalGiftPackView:updateClosePos(closeToPos)
    if not closeToPos then
        return
    end
    self._closeToPos = closeToPos
end

function PersonalGiftPackView:createViewItem(conf)
    if not conf then
        return
    end
    if not self._pageViewSize then
        self._pageViewSize = self._pageViewWebConfig:getContentSize()
    end
    local viewItem = require("lobby.Modules.PersonalGiftPack.GiftPackViewItem").new(self._pageViewSize)
    viewItem:updateInfo(conf)
    if conf.bgConf and conf.bgConf.name then
        viewItem:setName(conf.bgConf.name)
    end
    return viewItem
end

function PersonalGiftPackView:setPlayerCanDo(bCanDo)
    if bCanDo then
        self._maskLayer:setVisible(false)
    else
        self._maskLayer:setVisible(true)
    end
end

function PersonalGiftPackView:onConfigDataChanged(event)
    local confData = event.msg.configData or {}
    if #confData <= 0 then
        self:close()
        return
    end
    self._pageViewWebConfig:removeAllItems()

    local finalConf = self:getFinalConf(confData)
    for _, singleConf in pairs(finalConf) do
        local viewItem = self:createViewItem(singleConf)
        self._pageViewWebConfig:addPage(viewItem)
    end
    self:updateArrBtnVisible()
    self:setPlayerCanDo(true)
end

function PersonalGiftPackView:getFinalConf(confData)
    local sceneTag = ""
    if XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.TEAHOUSE then
        sceneTag = "tea"
    elseif XH.SceneManager:getInstance():getTopSceneTag() == XH.SCENE_TAG.LOBBY then
        if XH.lobby:getModule("Lobby"):isOpenGoldView() then
            sceneTag = "gold"
        else
            sceneTag = "lobby"
        end
    end

    local conf1 = {}
    local conf2 = {}
    for _, singleConf in ipairs(confData) do
        if self:checkIsInPopScenes(sceneTag, singleConf.pop_scene) then
            table.insert(conf1, singleConf)
        else
            table.insert(conf2, singleConf)
        end
    end
    return XH.TableTool.mergeTwoTable(conf1, conf2)
end

function PersonalGiftPackView:checkIsInPopScenes(sceneTag, popScenes)
    if not sceneTag or sceneTag == "" or not popScenes then
        return false
    end
    for _, scene in ipairs(popScenes) do
        if string.find(scene, sceneTag) then
            return true
        end
    end
    return false
end

function PersonalGiftPackView:onTouchEventClose(send, eventType)
    if not self._closeToPos then
        self:close()
        return
    end
    local closeToPos = self:convertToNodeSpace(self._closeToPos)
    self._imgBg:runAction(cc.Sequence:create(cc.Spawn:create(cc.MoveTo:create(0.2, closeToPos),cc.ScaleTo:create(0.2,0)),cc.CallFunc:create(
        function ()
            self:close()
        end
    )))
    -- self._panelBg:setVisible(false)
end

local ARROW_BTN_COLOR = {
    UN_ENABLED = cc.c3b(140, 140, 140),
    NORMAL = cc.c3b(255, 255, 255)
}
function PersonalGiftPackView:updateArrBtnVisible(nowIndex)
    if not nowIndex then
        nowIndex = self._pageViewWebConfig:getCurrentPageIndex()
    end
    nowIndex = nowIndex > 0 and nowIndex or 0
    local pageCount = #self._pageViewWebConfig:getChildren()
    -- self._btnArrLeft:setVisible(pageCount > 1)
    -- self._btnArrLeft:setEnabled(nowIndex > 0)
    -- self._btnArrLeft:setColor(nowIndex > 0 and ARROW_BTN_COLOR.NORMAL or ARROW_BTN_COLOR.UN_ENABLED)
    -- self._btnArrRight:setVisible(pageCount > 1)
    -- self._btnArrRight:setEnabled(nowIndex < pageCount - 1)
    -- self._btnArrRight:setColor(nowIndex < pageCount - 1 and ARROW_BTN_COLOR.NORMAL or ARROW_BTN_COLOR.UN_ENABLED)
    self._btnArrLeft1:setVisible(pageCount > 1 and nowIndex > 0)
    self._btnArrRight1:setVisible(pageCount > 1 and nowIndex < pageCount - 1)

    local pageItem = self._pageViewWebConfig:getItem(nowIndex)
    local data = {}
    data.userid = XH.playerData:getNumberID()
    if pageItem then
        data.pageName = pageItem:getName()
    end
    XH.throwDataManager:throwData(XH.ThrowDataDefine.PersonalGiftPackView,data)
end

function PersonalGiftPackView:onTouchEventArrLeft(send, eventType)
    local nowIndex = self._pageViewWebConfig:getCurrentPageIndex()
    self._pageViewWebConfig:scrollToPage(nowIndex - 1)
    self:updateArrBtnVisible(nowIndex - 1)
end

function PersonalGiftPackView:onTouchEventArrRight(send, eventType)
    local nowIndex = self._pageViewWebConfig:getCurrentPageIndex()
    nowIndex = nowIndex >= 0 and nowIndex or 0
    self._pageViewWebConfig:scrollToPage(nowIndex + 1)
    self:updateArrBtnVisible(nowIndex + 1)
end

function PersonalGiftPackView:onGiftpackBuyResult(event)
    if event.msg and event.msg.bSuccess then
        --购买成功打开遮罩，等待加载新的界面
        self:setPlayerCanDo(false)
    else
        self:setPlayerCanDo(true)
    end
end

return PersonalGiftPackView�