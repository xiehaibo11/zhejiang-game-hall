local TableAniView = NG.GAME.gameClass("TableAniView", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

-- 各种动画播放
function TableAniView:ctor()
    TableAniView.super.ctor(self)
    self:initAnis()
    self._initPos = cc.p(self._KW_PANEL_BASETIP:getPosition())
end

function TableAniView:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/TableInfo/TableAniLayer.csb"
end

function TableAniView:getBindingInfo()
    return {
        --
        ["_KW_PANEL_BASETIP"] = {varName = "_KW_PANEL_BASETIP"},
        ["_KW_TEXT_FENGDING"] = {varName = "_KW_TEXT_FENGDING"},
        ["_KW_TEXT_COST"] = {varName = "_KW_TEXT_COST"},
        ["_KW_ANI"] = {varName = "_KW_ANI"}
    }
end

function TableAniView:getProxyEvents()
    return {
        --
        {module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ROOM_BASE_SCORE", callBack = "showServiceAni"}
    }
end

function TableAniView:initAnis()

end

-- 封顶等提示动画
function TableAniView:showServiceAni()
    local info = NG.RoomTool.getGoldLevelInfo50()
    if info then
        self._KW_TEXT_COST:setString(NG.StringTool.getScoreStr(info.cost))
        local fdInfo = NG.goldGame:getModule("GameMain"):getData():getData("FengDing") or {}
        self._KW_TEXT_FENGDING:setString(fdInfo.nMaxFan == -1 and "无限制" or fdInfo.nMaxFan)
        self:onShowServiceData()
    end
end

-- 0.5移动进入，3秒停留，0.5移出
function TableAniView:onShowServiceData()
    if self._servicePosition == nil then
        self._servicePosition = self._KW_PANEL_BASETIP:getPositionX()
    end
    self._KW_PANEL_BASETIP:setPosition(self._initPos)
    self._KW_PANEL_BASETIP:stopAllActions()
    local actSequence = cc.Sequence:create(cc.MoveTo:create(0.5, cc.p(self._servicePosition - self._KW_PANEL_BASETIP:getContentSize().width, self._KW_PANEL_BASETIP:getPositionY())), cc.DelayTime:create(3), cc.MoveTo:create(0.5, cc.p(self._servicePosition, self._KW_PANEL_BASETIP:getPositionY())))
    self._KW_PANEL_BASETIP:runAction(actSequence)
end

return TableAniView
