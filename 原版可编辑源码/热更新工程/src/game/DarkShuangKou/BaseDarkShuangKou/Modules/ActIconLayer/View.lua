local ActIconLayer = CF.gameClass("ActIconLayer", CF.ViewBase)

function ActIconLayer:ctor(param)
    param = param or {}
    ActIconLayer.super.ctor(self, param)
    self._icons = {}
    self:init()
end

function ActIconLayer:getCSBPath()
    return "res/cocosStudio/DarkShuangKou/GameLayer/CSB/ActIconLayer.csb"
end

function ActIconLayer:getBindingInfo()
    return {["_KW_PANEL_LT"] = {varName = "_KW_PANEL_LT"}, ["_KW_POS_BJ_RANK"] = {varName = "_posBJRank"}}
end

function ActIconLayer:getProxyEvents()
    local eventTable = {{module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_END", callBack = "onGameEnd"}}
    return eventTable
end

function ActIconLayer:getAdaptationConfig()
    return {{node = self._KW_PANEL_LT, bRight = false, bHalf = true}}
end

function ActIconLayer:init()
    local m = CF.getLobbyModule("GoldNew")
    self._icons["BaoJiRank"] = m:checkCreateActIconInGame("BaoJiRank", self._posBJRank)
        -- self._posBJRank:addChild(require(CF.NewGoldHallSubModulePath .. ".ActBaoJiRank.ActBaoJiRankBtn").new())
end

function ActIconLayer:onGameEnd(event)
    local m = CF.getLobbyModule("GoldNew.SubModules.ActBaoJiRank")
    if m and m:isValid() then
        self:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.CallFunc:create(function()
            m:reqUserActInfo()
        end)))
    end
end

function ActIconLayer:onExit()
    for _, v in pairs(self._icons) do
        v:removeFromParent()
    end
end

return ActIconLayer
