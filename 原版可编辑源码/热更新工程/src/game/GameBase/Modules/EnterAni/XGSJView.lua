local XGSJView = CF.gameClass("XGSJView", CF.ViewBase)

function XGSJView:ctor()
    XGSJView.super.ctor(self)
    self:AdaptationIphoneX()

    local module = CF.game:getModule("IconAnimationManager")
    local isGoldRoom = (CF and CF.roomData and CF.roomData:isGoldRoom())
    if module:GetPlayAnimationIndex() == module.PlayType.XiaGuang or isGoldRoom then
        local config = {
            path = "",
            ske = "animation/Common/xiaguangshengjing/zzb_xgsj_icon.atlas",
            tex = "animation/Common/xiaguangshengjing/zzb_xgsj_icon.json",
            armatureName = "animation",
            scale = 1,
            loop = true,
        }
        local dargonBones = display.playDargonBonesSpine(config)
        dargonBones:setAnchorPoint(cc.p(0.5, 0.5))
        local size = self._icon:getContentSize()
        dargonBones:setPosition(cc.p(size.width / 2, 0))
        self._icon:addChild(dargonBones)
        self._imagIcon:setVisible(false)
    else
        self._imagIcon:setVisible(true)
    end

    if isGoldRoom then
        local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID())
        local pos = isMah and cc.p(self._mahPos:getPosition()) or cc.p(self._cardPos:getPosition())
        self._layout:setPosition(pos)
    end
    self._layout:setVisible(true)
end

function XGSJView:getAdaptationConfig()
    return {
        { node = self._mahPos, bRight = false, bHalf = true },
        { node = self._cardPos, bRight = false, bHalf = true },
    }
end

function XGSJView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/XGSJIcon.csb"
end

function XGSJView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"}
    }
end

function XGSJView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = { varName = "_panelRoot" },
        ["_KW_PANEL_ICON"] = { varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClick" }, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = { varName = "_layout" }, --进行移动的
        ["_KW_MAH_POS"] = { varName = "_mahPos" },
        ["_KW_CARD_POS"] = { varName = "_cardPos" },
        ["_KW_IMG_ICON"] = {varName = "_imagIcon"},
    }
end

function XGSJView:onWinSizeChange()
    -- local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID())
    -- local pos = isMah and cc.p(self._mahPos:getPosition()) or cc.p(self._cardPos:getPosition())
    -- self._layout:setPosition(pos)
end

function XGSJView:onClick(send, fun, icon)
    print("onClick")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25061201, { page = "准备界面", game_id = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), room_mode = CF.roomData:getRoomMode2()})
    XH.viewManager:openView("XiaGuangView", CF.ZORDER.DIALOG, {scene = "准备界面", gameId = XH.areaData:getAreaID() .. "_" .. CF.roomData:getGameID(), roomMode = CF.roomData:getRoomMode2()})
end

function XGSJView:onGameStartChanged()
    self._layout:setVisible(false)
end

function XGSJView:updatePositionX(posX)
    self._layout:setPositionX(posX)
end

return XGSJView