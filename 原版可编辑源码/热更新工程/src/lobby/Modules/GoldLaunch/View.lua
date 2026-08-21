local GoldLaunchView = class("GoldLaunchView", XH.ViewBase)
local GoldLaunchConfig = require("lobby.Modules.GoldLaunch.Config")

function GoldLaunchView:ctor(param)
    self._param = param or {}
    GoldLaunchView.super.ctor(self, param)
    self:initUI()
end

function GoldLaunchView:getCSBPath()
    return "cocosStudio/GoldNew/Lobby/CSB/GoldLaunch/GoldLaunchLayer.csb"
end

function GoldLaunchView:getBindingInfo()
    return {
        --
        ["_KW_PANEL_START"] = { varName = "_KW_PANEL_START" },
        ["_KW_TEXT_NAME"] = { varName = "_KW_TEXT_NAME" },
        ["_KW_PANEL_GAME"] = { varName = "_KW_PANEL_GAME" },
        ["_KW_PANEL_AWARD"] = { varName = "_KW_PANEL_AWARD" },
        ["_KW_PANEL_LIST"] = { varName = "_KW_PANEL_LIST" },
        ["_KW_PANEL_SINGLE"] = { varName = "_KW_PANEL_SINGLE" },
        ["_KW_PANEL_IMG"] = { varName = "_KW_PANEL_IMG" },
        ["_KW_TEXT_COUNT"] = { varName = "_KW_TEXT_COUNT" },
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", onTouchEnded = "onClickClose" },
        ["_KW_BTN_EXIT"] = { varName = "_KW_BTN_EXIT", onTouchEnded = "onClickExit" },
        ["_KW_BTN_JOIN"] = { varName = "_KW_BTN_JOIN", onTouchEnded = "onClickJoin" },
        ["_KW_BTN_CONTINUE"] = { varName = "_KW_BTN_CONTINUE", onTouchEnded = "onClickContinue" },
        ["_KW_BTN_GET"] = { varName = "_KW_BTN_GET", onTouchEnded = "onClickGet" },
    }
end

function GoldLaunchView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

function GoldLaunchView:initUI()
    if self._param.type == GoldLaunchConfig.Type.LOBBY then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_QUICK_THROW_21, nil, { la_numid = 0 })
    end
    self._KW_PANEL_START:setVisible(self._param.type == GoldLaunchConfig.Type.LOBBY)
    self._KW_PANEL_GAME:setVisible(self._param.type == GoldLaunchConfig.Type.EXIT)
    self._KW_PANEL_AWARD:setVisible(self._param.type == GoldLaunchConfig.Type.AWARD)
    if self._param.type == GoldLaunchConfig.Type.AWARD then
        XH.lobby:getModule("GoldLaunch"):reqGetGift()
    end
    self:flushItem()
    self:initAni()
end

function GoldLaunchView:flushItem()
    if self._initImg then
        return
    end
    local actInfo = XH.lobby:getModule("GoldLaunch"):getActInfo()
    if actInfo == nil then
        return
    end
    self._KW_PANEL_LIST:removeAllChildren()
    for i = 1, #actInfo.discounts do
        local prize = actInfo.discounts[i]
        local info = XH.lobby:getModule("GoldLaunch"):getPropInfoByPropId(prize.propId)
        local tempNode = self._KW_PANEL_SINGLE:clone()
        local name = ""
        if info ~= nil then
            name = info.chTitle
            if info.remoteImg and info.remoteImg ~= "" then
                self._initImg = true
                local head = tempNode:getChildByName("_KW_PANEL_IMG")
                local size = self._KW_PANEL_IMG:getContentSize()
                local headImage = XH.RemoteImage.new():setPosition(head:getContentSize().width / 2, head:getContentSize().height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(head)
                headImage:setUrl(info.remoteImg)
            end
        end
        local propCnt = prize.count
        if prize.propId == XH.areaData:getPropList().freeRoomCardID then
            local freeRoomCardRatio = XH.areaData:getPropFreeRoomCardRatio()
            if freeRoomCardRatio then
                propCnt = propCnt / freeRoomCardRatio
            end
        end
        tempNode:getChildByName("_KW_TEXT_COUNT"):setString("x" .. XH.lobby:getModule("GoldLaunch"):getScoreStr(propCnt))
        tempNode:getChildByName("_KW_TEXT_NAME"):setString(name)
        tempNode:setVisible(true)
        self._KW_PANEL_LIST:addChild(tempNode)
        self:flushPos(tempNode, i, #actInfo.discounts)
    end
end

function GoldLaunchView:onGetConfiguration()
    self:flushItem()
end

function GoldLaunchView:initAni()
    self._KW_BTN_JOIN:runAction(cc.RepeatForever:create(
    cc.Sequence:create(
    cc.ScaleTo:create(0.5, 1.05),
    cc.ScaleTo:create(0.5, 0.95),
    cc.DelayTime:create(0.5)
    )))
    self._KW_BTN_CONTINUE:runAction(cc.RepeatForever:create(
    cc.Sequence:create(
    cc.ScaleTo:create(0.5, 1.05),
    cc.ScaleTo:create(0.5, 0.95),
    cc.DelayTime:create(0.5)
    )))
    self._KW_BTN_GET:runAction(cc.RepeatForever:create(
    cc.Sequence:create(
    cc.ScaleTo:create(0.5, 1.05),
    cc.ScaleTo:create(0.5, 0.95),
    cc.DelayTime:create(0.5)
    )))
end

function GoldLaunchView:flushPos(node, index, all)
    -- 懒得调了，直接UI对应写死
    local posVec = {
        { 540 },
        { 366, 724 },
        { 196, 494, 796 },
        { 126, 394, 666, 940 },
    }
    local defaultHeight = 110
    if posVec[all] == nil then
        return
    end
    node:setPosition(posVec[all][index], defaultHeight)
end

-- 关闭界面
function GoldLaunchView:onClickClose()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_QUICK_THROW_23, nil, { la_numid = 0 })
    self:onClickCloseView()
end

-- 确认退出
function GoldLaunchView:onClickExit()
    if NG == nil or NG.goldGame == nil then
        self:onClickCloseView()
        return
    end
    if NG.goldGame:getModule("GameMain") == nil then
        NG.goldGame:exit()
        self:onClickCloseView()
        return
    end
    NG.goldGame:getModule("GameMain"):reqLeaveRoom()
    self:onClickCloseView()
end

-- 马上开一局
function GoldLaunchView:onClickJoin()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_QUICK_THROW_22, nil, { la_numid = 0 })
    self:onClickCloseView()
    local param = {
        NewUserGift = true
    }
    local newGoldController = require("newgold.NewGoldController")
    newGoldController:getInstance():enter(param)
end

-- 继续对局
function GoldLaunchView:onClickContinue()
    self:onClickCloseView()
end

-- 领取奖励
function GoldLaunchView:onClickGet()
    self:onClickCloseView()
end

function GoldLaunchView:onClickCloseView()
    self._KW_BTN_JOIN:stopAllActions()
    self._KW_BTN_CONTINUE:stopAllActions()
    self._KW_BTN_GET:stopAllActions()
    self:close()
end

return GoldLaunchView