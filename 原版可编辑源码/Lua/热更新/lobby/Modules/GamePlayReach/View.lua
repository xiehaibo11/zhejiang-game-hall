--[[
    玩法触达标准弹窗
    复用 MessageBox 布局：标题 + 富文本正文 + 关闭/反馈/客服/玩法创建按钮
    领队视角（showCreateBtn=true）仅展示「玩法创建」；玩家视角展示「玩法反馈」「联系客服」
]]
local GamePlayReachView = class("GamePlayReachView", XH.ViewBase)
local GamePlayReachConfig = require("lobby.Modules.GamePlayReach.Config")

local LOG_TAG = "[GamePlayReachView]"

function GamePlayReachView:getCSBPath()
    return "cocosStudio/hall/CSB/PlayReach/TipLayer.csb"
end

function GamePlayReachView:getBindingInfo()
    return {
        ["_KWA_BTND_CLOSE"] = { varName = "KWA_BTND_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchClose" },
        ["_KWA_BTND_WFFK"] = { varName = "KWA_BTND_WFFK", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchFeedback" },
        ["_KWA_BTND_WFCJ"] = { varName = "KWA_BTND_WFCJ", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchCreate" },
        ["_KWA_BTND_LXKF"] = { varName = "KWA_BTND_LXKF", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchCustomerService" },
        ["_KWA_PANEL_BUTTON_LIST_1"] = { varName = "KWA_PANEL_BUTTON_LIST_1" },
        ["_KWA_PANEL_BUTTON_LIST_2"] = { varName = "KWA_PANEL_BUTTON_LIST_2" },
        ["_KWA_MSG_TITLE"] = { varName = "KWA_MSG_TITLE" },
        ["_KWA_MSG_CONTENT"] = { varName = "KWA_MSG_CONTENT" },
    }
end

function GamePlayReachView:ctor(param)
    param = param or {}
    GamePlayReachView.super.ctor(self, param)
    self._conf = param.conf
    self._gameId = param.gameId
    self._gameName = param.gameName
    self._showCreateBtn = param.showCreateBtn
    self._location = param.location
    self:initUI()
end

function GamePlayReachView:initUI()
    if not self._conf then
        print(LOG_TAG, "initUI failed: conf is nil")
        self:close(true)
        return
    end
    if not self.KWA_MSG_TITLE then
        print(LOG_TAG, "initUI failed: KWA_MSG_TITLE missing")
        self:close(true)
        return
    end

    self.KWA_MSG_TITLE:setString(self._conf.title)
    self.KWA_MSG_CONTENT:setString(self._conf.content)
    -- self.KWA_MSG_TITLE:setTextHorizontalAlignment(cc.TEXT_ALIGNMENT_CENTER)

    -- 富文本解析失败时降级为纯文本，避免弹窗打不开
    -- local content = self._conf.content or ""
    -- local ok, richText = pcall(function()
    --     return ccui.RichText:createWithXML(content, {})
    -- end)
    -- if ok and richText then
    --     richText:setAnchorPoint(cc.p(0.5, 0.5))
    --     richText:ignoreContentAdaptWithSize(false)
    --     richText:setHorizontalAlignment(cc.TEXT_ALIGNMENT_LEFT)
    --     local contentSize = self.KWA_MSG_TITLE:getContentSize()
    --     richText:setContentSize(cc.size(contentSize.width, contentSize.height - 40))
    --     richText:setPosition(cc.p(contentSize.width / 2, contentSize.height / 2 - 20))
    --     self.KWA_MSG_TITLE:addChild(richText)
    -- else
    --     print(LOG_TAG, "RichText create failed, fallback to plain text:", richText)
    --     self.KWA_MSG_TITLE:setString((self._conf.title or "") .. "\n" .. content)
    -- end

    if self.KWA_BTND_CLOSE then
        self.KWA_BTND_CLOSE:setVisible(true)
    end
    self.KWA_BTND_WFCJ:setVisible(self._showCreateBtn)
    self.KWA_BTND_LXKF:setVisible(not self._showCreateBtn)
    if self._showCreateBtn then
        if self.KWA_PANEL_BUTTON_LIST_1 then self.KWA_PANEL_BUTTON_LIST_1:setVisible(true) end
        if self.KWA_PANEL_BUTTON_LIST_2 then self.KWA_PANEL_BUTTON_LIST_2:setVisible(false) end
    else
        if self.KWA_PANEL_BUTTON_LIST_1 then self.KWA_PANEL_BUTTON_LIST_1:setVisible(false) end
        if self.KWA_PANEL_BUTTON_LIST_2 then self.KWA_PANEL_BUTTON_LIST_2:setVisible(true) end
    end
end

function GamePlayReachView:getModule()
    if not XH or not XH.lobby then
        return nil
    end
    return XH.lobby:getModule("GamePlayReach")
end

function GamePlayReachView:onTouchBGClose(send, eventType)
    if eventType == ccui.TouchEventType.ended then
        self:onTouchClose()
    end
end

function GamePlayReachView:onTouchCustomerService()
    local mod = self:getModule()
    if mod and self._conf then
        mod:throwUpdateClick("联系客服", self._conf)
    end
    -- if XH.viewManager then
    --     XH.viewManager:openView("CusServiceView")
    -- end
    XH.lobby:getModule("CusService"):oponCusServerView(nil,"CHUDA")
end

--- 关闭按钮与点击蒙层均计入展示次数（在 Module:recordPopupShown 中已记录）
function GamePlayReachView:onTouchClose()
    local mod = self:getModule()
    if mod and self._conf then
        mod:throwUpdateClick("关闭", self._conf)
    end
    self:close()
end

function GamePlayReachView:onTouchFeedback()
    local mod = self:getModule()
    if mod and self._conf then
        mod:throwUpdateClick("玩法反馈", self._conf)
    end
    local gameNameList = XH.areaData:getAreaGameNameList() or {}
    local gameName = self._gameName or gameNameList[self._gameId] or ""
    if XH.viewManager then
        XH.viewManager:openView("FeedBackView", nil, gameName)
    end
end

function GamePlayReachView:onTouchCreate()
    local mod = self:getModule()
    if mod and self._conf then
        mod:throwUpdateClick("玩法创建", self._conf)
    end
    local ok, err = pcall(function()
        if XH.teaHouseManager and XH.teaHouseManager:isInTeaHouse() and TeaHouse and TeaHouse.manager then
            TeaHouse.manager.teahouseSetup:addPlayMode("GamePlayReachView", self._gameId)
        elseif XH.viewManager then
            XH.viewManager:openView("CreateBoxRoomView", nil, { gameid = self._gameId })
        end
    end)
    if not ok then
        print(LOG_TAG, "onTouchCreate error:", err)
    end
    self:close(true)
end

function GamePlayReachView:refreshReachContent(conf, gameId)
    self._conf = conf
    self._gameId = gameId
    local gameNameList = XH.areaData:getAreaGameNameList() or {}
    self._gameName = gameNameList[gameId]
    self:initUI()
end

function GamePlayReachView:close(forceClose)
    if not forceClose and self._location == GamePlayReachConfig.LOCATION.TEA_SETUP_PLAYMODE then
        local mod = self:getModule()
        if mod and mod:tryAdvanceSetupPlayModeReach(self) then
            return
        end
        if mod then
            mod:dispatchEvent({ name = mod.EVENT_CONFIG_UPDATED })
        end
    end
    GamePlayReachView.super.close(self)
end

return GamePlayReachView
