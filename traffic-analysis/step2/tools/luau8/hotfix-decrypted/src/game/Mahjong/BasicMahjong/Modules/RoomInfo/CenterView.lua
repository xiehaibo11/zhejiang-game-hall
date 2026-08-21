local RoomCenterInfoView = CF.gameClass("RoomCenterInfoView", "game.GameBase.Modules.RoomInfo.CenterView")

local TableBgRes = 
{
    [1] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_1.jpg",
    [2] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_2.jpg",
    [3] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_3.jpg",
    [4] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_4.jpg",
    [5] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_5.jpg",
    [6] = "cocosStudio/MahjongNew/GameLayer/Image/mahjong_scene_bg_new_6.jpg",
    [7] = "", -- 霞光胜境，动画里带了 
}

function RoomCenterInfoView:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/RoomCenterInfoLayer.csb"
end

function RoomCenterInfoView:ctor()
    RoomCenterInfoView.super.ctor(self)
    self:initGameRule()
    self:showHealthGame()
end

function RoomCenterInfoView:getBindingInfo()
    local tableBindingInfo = RoomCenterInfoView.super.getBindingInfo(self)
    tableBindingInfo["_KW_IMG_HEALTH_GAME"] = {varName = "_healthGame"}
    return tableBindingInfo
end

--游戏规则更新
function RoomCenterInfoView:onGameRuleChanged(event)
    RoomCenterInfoView.super.onGameRuleChanged(self, event)
    if CF.settingData:getIsMahlayer3D() then
        self:setGameRuleLabelVisible(false)
        self._centerTopPanel:setVisible(false)
    else
        self:setGameRuleLabelVisible(true)
        self._centerTopPanel:setVisible(true and not CF.roomData:isGoldRoom())
    end
end

function RoomCenterInfoView:setGameRuleLabelVisible(visible)
    if self._gameRuleLabel then
        self._gameRuleLabel:setVisible(visible)
    end
end

function RoomCenterInfoView:initGameRule()
    -- 麻将隐藏桌面规则背景，改变字体颜色
    self._gameRuleBg:setVisible(false)
    self._gameRuleLabel:setTextColor(cc.c3b(0,0,0))
    self._gameRuleLabel:setFontSize(42)
    self._gameRuleLabel:ignoreContentAdaptWithSize(false)
    self._gameRuleLabel:setContentSize(cc.size(1200,150))
end

function RoomCenterInfoView:showHealthGame()
    local isVisible = not CF.configData:getHaveMahlayer3D()
    self._healthGame:setVisible(isVisible)
end

function RoomCenterInfoView:getProxyEvents()
    local proxyEvents = RoomCenterInfoView.super.getProxyEvents(self)
    proxyEvents[#proxyEvents + 1] = { module = CF.settingData, eventKeyName = "EVENT_TABLE_STYLE", callBack = "onTableBgChanged" }
    proxyEvents[#proxyEvents + 1] = { module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_2D_BG_STATE", callBack = "onEvent2DBGState" }
    return proxyEvents
end

function RoomCenterInfoView:getTableBgFileStr()
    --3D不显示2D图片桌面
    if CF.settingData:getIsMahlayer3D() then
        return ""
    end
    local resIndex = CF.settingData:getMahTableStyle() or 1
    return TableBgRes[resIndex]
end

function RoomCenterInfoView:onTableBgChanged()
    self:updateTableBg()
    self:updateTableBgProp()
end

function RoomCenterInfoView:onEvent2DBGState(event)
    if not event or event.msg == nil then
        return
    end
    if event.msg then
        self:updateTableBg()
        -- self._imgTableBg:setVisible(true)
    else
        self._imgTableBg:setVisible(false)
    end
end

return RoomCenterInfoView;