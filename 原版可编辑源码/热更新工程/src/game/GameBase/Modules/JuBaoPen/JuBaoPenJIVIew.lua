local JuBaoPenJIVIew = CF.gameClass("JuBaoPenJIVIew", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenJIVIew:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenJIVIew.csb"
end

function JuBaoPenJIVIew:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot", onTouchEnded = "onClick"},
        ["_KW_POS_MAH"] = {varName = "_posMah"},
        ["_KW_POS_DATONG"] = {varName = "_posDaTong"},
        ["_KW_POS_CENTER"] = {varName = "_posCenter"},
        ["_KW_TXT_NUM"] = {varName = "_txtNum"},
        ["_KW_NODE_ANI"] = {varName = "_nodeAni"},
        ["_KW_JI_ICON"] = {varName = "_jiIcon"},
        ["_KW_POS_START"] = {varName = "_posStart"},
        ["_KW_POS_START_DATONG"] = {varName = "_posStartDaTong"},
    }
end

function JuBaoPenJIVIew:getProxyEvents()
    return {
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_UPDATE_YS", callBack = "updateYS"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_PLAY_JI_ANI", callBack = "playJiAnimation"},
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_TIEM_EXPIRE", callBack = "updateYS"},
        { module = CF.game:getModule("CaiYunProp"), eventKeyName = "EVENT_PROP_BCS_EXPIRE", callBack = "updateYS" },
        { module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"},
    }
end

function JuBaoPenJIVIew:ctor(param)
    JuBaoPenJIVIew.super.ctor(self)
    self:initUI()
end

function JuBaoPenJIVIew:initUI()

    local module = CF.game:getModule("JuBaoPen")
    if CF.roomData:getIsGameStart() then
        self:updateStartPos()
    else
        if CF.gameSub:isMahjong(CF.roomData:getGameID()) then
            self._panelRoot:setPosition(cc.p(self._posMah:getPosition()))
        elseif CF.gameSub:isDaTong(CF.roomData:getGameID()) then
            self._panelRoot:setPosition(cc.p(self._posDaTong:getPosition()))
        else
            self._panelRoot:setPosition(cc.p(self._posCenter:getPosition()))
        end
        self:updateItemPos()
    end
    self._txtNum:setText("+"..module:getTotalYS())
end

function JuBaoPenJIVIew:updateItemPos()
    self:stopAllActions()
    self:runAction(cc.Sequence:create(cc.DelayTime:create(1.2), cc.CallFunc:create(function () 
        if CF == nil or CF.game == nil then
            return
        end
        local module = CF.game:getModule("JuBaoPen")
        module:updateItemPos(cc.p(self._panelRoot:convertToWorldSpaceAR(cc.p(0, 0))))
    end)))
end

function JuBaoPenJIVIew:onWinSizeChange()
    self:initUI()
end

function JuBaoPenJIVIew:updateYS()
    self:playJiAnimation({isPlay = false})
end

function JuBaoPenJIVIew:onGameStartChanged(event)
    self:updateStartPos()
end

function JuBaoPenJIVIew:updateStartPos()
    local isDaTong = CF.gameSub:isDaTong(CF.roomData:getGameID())
    local pos = isDaTong and cc.p(self._posStartDaTong:getPosition()) or cc.p(self._posStart:getPosition())
    self._panelRoot:setPosition(pos)
    self:updateItemPos()
end

function JuBaoPenJIVIew:playJiAnimation(event)
    local module = CF.game:getModule("JuBaoPen")
    local mewYS = module:getTotalYS()
    self._txtNum:setText("+"..mewYS)
    if event.isPlay then
        self:playAni()
    end
end

function JuBaoPenJIVIew:onClick()
    CF.gameRequire("Modules.JuBaoPen.JuBaoPenYSView").new():showSelf()
end

function JuBaoPenJIVIew:getJiIcon()
    return self._jiIcon
end

function JuBaoPenJIVIew:playAni()
    CF.SpineManager:playAni(self._nodeAni, "res/animation/Common/", "zzb_ty_szbh", "animation", false)
end

return JuBaoPenJIVIew
