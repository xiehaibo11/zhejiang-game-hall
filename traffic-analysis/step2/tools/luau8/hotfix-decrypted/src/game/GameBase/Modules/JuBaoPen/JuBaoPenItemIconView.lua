local JuBaoPenItemIconView = CF.gameClass("JuBaoPenItemIconView", CF.ViewBase)
local MoveExtend = require("game.GameBase.Modules.LuckyTaskIcon.MoveExtend")
local Define = require("game.GameBase.Modules.ChangeCard.Define")

local MAH_POS = "jbp_item_mah_pos"
local CARD_POS = "jbp_item_card_pos"

function JuBaoPenItemIconView:ctor()
    JuBaoPenItemIconView.super.ctor(self)
    self:AdaptationIphoneX()

    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS
    local str = cc.UserDefault:getInstance():getStringForKey(posKey, "")
    MoveExtend.extend(self, {root = self._panelRoot, icon = self._icon, layout = self._layout, key = posKey})
    if str ~= "" then
        self:updatPos()
    end
    self._layout:setVisible(false)
end

function JuBaoPenItemIconView:getAdaptationConfig()
    return {
        {node = self._startDaTongPos, bRight = false, bHalf = true},
    }
end

function JuBaoPenItemIconView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenItemIconView.csb"
end

function JuBaoPenItemIconView:getProxyEvents()
    return {
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_ADD_JUBAOPEN_ITEM", callBack = "updateBtnVisivble"},
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_TIEM_EXPIRE", callBack = "expire"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_UPDATE_ITEM_POS", callBack = "updatePostion"},
    }
end

function JuBaoPenItemIconView:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName = "_panelRoot"},
        ["_KW_PANEL_ICON"] = {varName = "_icon", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"}, --处理点击监听
        ["_KW_PANEL_LAYOUT"] = {varName = "_layout"}, --进行移动的
        ["_KW_IMG_JUBAOPEN"] = {varName = "_imgJubaoPen"},
        ["_KW_START_DATONG_POS"] = {varName = "_startDaTongPos"},
    }
end

function JuBaoPenItemIconView:updatePostion(event)
    local isMah = CF.gameSub:isMahjong(CF.roomData:getGameID()) 
    local posKey = isMah and MAH_POS or CARD_POS
    if cc.UserDefault:getInstance():getStringForKey(posKey, "") ~= "" then
        return
    end
    local isDaTong = CF.gameSub:isDaTong(CF.roomData:getGameID())
    if isDaTong and CF.roomData:getIsGameStart() then
        self._layout:setPosition(cc.p(self._startDaTongPos:getPosition()))
        return
    end

    local parent = self._panelRoot:getParent()
    local relativePos = parent:convertToNodeSpaceAR(event.pos)
    self._layout:setPosition(cc.p(relativePos.x - 20, relativePos.y + 20))
end

function JuBaoPenItemIconView:onGameStartChanged(event)
end

function JuBaoPenItemIconView:updateBtnVisivble(event)
    if not event then
        return
    end
    if event.placeItemIndex == 0 then
        self._layout:setVisible(false)
        return
    end
    self._layout:setVisible(true)
    self._imgJubaoPen:ignoreContentAdaptWithSize(true)
    self._imgJubaoPen:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_icon_%d.png", event.placeItemIndex), ccui.TextureResType.plistType)

    self._layout:setOpacity(0)
    self._layout:runAction(cc.Sequence:create(cc.DelayTime:create(1.5), cc.FadeIn:create(0.3)))
end

function JuBaoPenItemIconView:expire(event)
    if not event then
        return
    end
    if event.expire then
        local str = ""
        local module = CF.game:getModule("JuBaoPen")
        local placeItem = module:getOldPlaceItem()
        for k,v in pairs(event.expire) do
            if placeItem == v then
                local parent = display.getRunningScene()
                if parent:getChildByName("JuBaoPenMainView") == nil then
                    local config = module:getConfigById(v)
                    XH.TipTool.showToast(config.name.." 已到期，即将失效")
                end
                self._layout:setVisible(false)
                return
            end
        end
    end
end

function JuBaoPenItemIconView:onTouchProp(send, eventType)
    self:onTouch(send, eventType)
end

function JuBaoPenItemIconView:onMoved(send, endX, endY)
end

function JuBaoPenItemIconView:onMoveEnded(send, fun, icon)
end

return JuBaoPenItemIconView
_