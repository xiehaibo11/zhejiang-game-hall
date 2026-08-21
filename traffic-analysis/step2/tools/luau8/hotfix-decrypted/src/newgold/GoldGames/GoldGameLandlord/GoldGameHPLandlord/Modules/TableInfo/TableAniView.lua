local TableAniView = NG.GAME.gameClass("TableAniView", NG.ViewBase)
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

-- 各种动画播放
function TableAniView:ctor()
    TableAniView.super.ctor(self)
    self:initAnis()
end

function TableAniView:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/TableInfo/TableAniLayer.csb"
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
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ON_MSG_FEE_BASE_SCORE", callBack = "showServiceAni"}
    }
end

function TableAniView:initAnis()

end

-- 封顶等提示动画
function TableAniView:showServiceAni()
    self._KW_TEXT_COST:setString(NG.StringTool.getScoreStr(NG.goldGame:getModule("GameMain"):getData():getServicePay()))
    self._KW_TEXT_FENGDING:setString(NG.StringTool.getScoreStr(NG.goldGame:getModule("GameMain"):getData():getMaxWin()))
    self:onShowServiceData()
end

-- 0.5移动进入，3秒停留，0.5移出
function TableAniView:onShowServiceData()
    if self._servicePosition == nil then
        self._servicePosition = self._KW_PANEL_BASETIP:getPositionX()
    end
    local actSequence = cc.Sequence:create(cc.MoveTo:create(0.5, cc.p(self._servicePosition - self._KW_PANEL_BASETIP:getContentSize().width, self._KW_PANEL_BASETIP:getPositionY())), cc.DelayTime:create(3), cc.MoveTo:create(0.5, cc.p(self._servicePosition, self._KW_PANEL_BASETIP:getPositionY())))
    self._KW_PANEL_BASETIP:runAction(actSequence)
end

return TableAniView
�