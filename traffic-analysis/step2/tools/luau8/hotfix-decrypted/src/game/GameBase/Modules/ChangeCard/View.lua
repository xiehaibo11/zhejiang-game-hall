local ChangeCardView = CF.gameClass("ChangeCardView", CF.ViewBase)
local MoveExtend = require("game.GameBase.Modules.LuckyTaskIcon.MoveExtend")
local Define = require("game.GameBase.Modules.ChangeCard.Define")

local MAH_POS = "changecard_mah_pos"
local CARD_POS = "changecard_card_pos"

function ChangeCardView:ctor()
    ChangeCardView.super.ctor(self)
    self:AdaptationIphoneX()

    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS
    if cc.UserDefault:getInstance():getStringForKey(posKey, "") == "" then
        local pos = isMah and cc.p(self._mahPos:getPosition()) or cc.p(self._cardPos:getPosition())
        self._layout:setPosition(pos)
    end
    MoveExtend.extend(self, {root = self._panelRoot, icon = self._icon, layout = self._layout, key = posKey})
    self:updatPos()
    self._layout:setVisible(false)
end

function ChangeCardView:onWinSizeChange()
    local iconPos = self:__getLocalPos()
    local viewSize = self._panelRoot:getContentSize()
    local btnSize = self._layout:getContentSize()
    if iconPos.x < btnSize.width/2 then
        iconPos.x = btnSize.width/2
    elseif iconPos.x > viewSize.width - btnSize.width/2 then
        iconPos.x = viewSize.width - btnSize.width/2
    end
    if iconPos.y < btnSize.height/2 then
        iconPos.y = btnSize.height/2
    elseif iconPos.y > viewSize.height - btnSize.height/2 then
        iconPos.y = viewSize.height - btnSize.height/2
    end
    self._layout:setPosition(iconPos)
    self:__setLocalPos()
end

function ChangeCardView:getAdaptationConfig()
    return {
        {node = self._mahPos, bRight = true, bHalf = true},
        {node = self._cardPos, bRight = true, bHalf = true},
    }
end

function ChangeCardView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ChangeCardIcon.csb"
end

function ChangeCardView:getProxyEvents()
    return {
        {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_BTN_VISIBLE", callBack = "updateBtnVisivble"},
        {module = CF.game:getModule("ChangeCard"), eventKeyName = "EVENT_PLAY_ANI", callBack = "playChangeCardAni"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function ChangeCardView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_NODE_ANI"] = {varName = "_nodeAni"},
        ["_KW_PANEL_ICON"] = {varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"}, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = {varName = "_layout"}, --进行移动的
        ["_KW_IMG_DIAMOND"] = {varName = "_imgDiamond"},
        ["_KW_IMG_ROOMCARD"] = {varName = "_imgRoomCard"},
        ["_KW_TEXT_COST"] = {varName = "_txtCost"},
        ["_KW_TEXT_COST_CARD"] = {varName = "_txtCostCard"},
        ["_KW_BG_ROOT"] = {varName = "_bgRoot"},
        ["_KW_MAH_POS"] = {varName = "_mahPos"},
        ["_KW_CARD_POS"] = {varName = "_cardPos"},
    }
end

function ChangeCardView:updateBtnVisivble(event)
    if not event or not event.data then
        return
    end
    if event.data.isShow == false then
        self._layout:setVisible(false)
        return
    end
    self._layout:setVisible(true)

    if event.data.type == Define.ShowType.ROOM_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(true)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.DIAMOND then
        self._imgDiamond:setVisible(true)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(true)
        self._txtCost:setString(tostring(event.data.price))
        self._txtCostCard:setVisible(false)
    elseif event.data.type == Define.ShowType.CHANGE_CARD then
        self._imgDiamond:setVisible(false)
        self._imgRoomCard:setVisible(false)
        self._txtCost:setVisible(false)
        self._txtCostCard:setVisible(true)
        self._txtCostCard:setString("x"..tostring(event.data.price))
    end
end

function ChangeCardView:onTouchProp(send, eventType)
    self:onTouch(send, eventType)
end

function ChangeCardView:onMoved(send, endX, endY)
end

function ChangeCardView:onMoveEnded(send, fun, icon)
end

function ChangeCardView:onClick(send, fun, icon)
    print("onClick")

    CF.game:getModule("ChangeCard"):reservedChangeCard()
end

function ChangeCardView:playChangeCardAni()
    self._nodeAni:removeAllChildren()
    local aniPath = "animation/Mahjong/Base/huanpai_mj/"
    local fileName = "zzb_huanpai_mj"
    if not CF.gameSub:isMahjong(CF.roomData:getGameID()) then
        aniPath = "animation/GameCommon/PokerGame/zzb_huanpai_pk/"
        fileName = "zzb_huanpai_pk"
    end

    if not cc.FileUtils:getInstance():isFileExist(aniPath..fileName..".json") then
        CF.game:getModule("ChangeCard"):continueShuffle()
        return
    end
    math.randomseed(os.time())
    -- 定义动画列表
    local animations = {
        "animation1",
        "animation2",
        "animation3"
    }
    -- 随机选择一个动画（索引 1~3）
    local randomIndex = math.random(1, #animations)
    local selectedAnimation = animations[randomIndex]
    local aniNode = CF.SpineManager:playAni(self._nodeAni, aniPath, fileName, selectedAnimation, false, function()
        CF.game:getModule("ChangeCard"):continueShuffle()
        self._bgRoot:setVisible(false)
    end)
    if aniNode then
        if not CF.gameSub:isMahjong(CF.roomData:getGameID()) then
            aniNode:setPositionY(-80)
        end
        self._bgRoot:setVisible(true)
    end
end

return ChangeCardView
