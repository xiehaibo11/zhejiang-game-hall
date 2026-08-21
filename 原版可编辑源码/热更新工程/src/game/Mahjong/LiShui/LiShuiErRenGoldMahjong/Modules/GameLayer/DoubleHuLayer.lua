
local DoubleHuLayer = class("DoubleHuLayer", CF.ViewBase)

function DoubleHuLayer:getCSBPath()
    return "res/cocosStudio/MahjongNew/GameLayer/CSB/LiShui/DoubleHuLayer.csb"
end

function DoubleHuLayer:getBindingInfo()
    return {
        ["_KW_PANEL_ROOT"] = {varName="_panelRoot"},
        ["_KW_DOUBLE_HU_BG"] = {varName="_panelHuBg"},
        ["_KW_PANEL_MAH"] = {varName="_panelMahjong"},
        ["_KW_DOUBLE_HU_TOUCH_BG"] = {varName="_panelBtnBg"},
        ["_KW_ERREN_PANEL_JIABEI"] = {varName="_panelJiaBeiAni"},
        ["_KW_TEXT_HU_FAN"] = {varName="_textHuFan"},
        ["_BTN_HU"] = {varName="_btnHu", type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onBtnClickedHu"},
        ["_BTN_DOUBLE"] = {varName="_btnHuDouble", type = CF.UI_TYPE.BUTTON, onTouchEnded  = "onBtnClickedHuDouble"},
    }
end

function DoubleHuLayer:ctor(param)
    param = param or {}
    DoubleHuLayer.super.ctor(self, param)
    self._param = param
    self._showActionMah = nil
    self:createChildren()
end

function DoubleHuLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_SHOW_HU_DOUBLE_ANI", callBack = "onMsgErRenShowHuDoubleAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_HU_MAH_FAN", callBack = "onMsgHuMahFan"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_HU", callBack = "onMsgHu"},
    }
end

function DoubleHuLayer:createChildren()
    if self._panelMahjong then
        local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
        local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
        self._showActionMah = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_FORWARD,config)
        self._showActionMah:setMahValue(CF.GameDefine.MAH_VALUE.BACK)
        self._showActionMah:setAnchorPoint(cc.p(0.5, 0.5))
        local conSize = self._panelMahjong:getContentSize()
        self._showActionMah:setPosition(cc.p(conSize.width / 2, conSize.height / 2 - 3))
        self._panelMahjong:addChild(self._showActionMah)
    end
    self:showDoubleOrHuBtnLayer(false)
    self:showJiaBeiAniLayer(false)
end

--二人加倍动画
function DoubleHuLayer:onMsgErRenShowHuDoubleAni(event)
    local msg = event.msg
    if not msg then  return end
    local times = msg.data.times
    self:showJiaBeiJson(times)
end

function DoubleHuLayer:onMsgHuMahFan(event)
    local msg = event.msg
    if not msg then  return end
    local msgData = msg.data
    local mah = msgData.mah
    local fan = msgData.fan

    if self._showActionMah and mah then
        self._showActionMah:setMahValue(mah)
    end

    if self._textHuFan and fan then
        self._textHuFan:setString("胡" .. tostring(fan) .. "番")
    end
    self:showDoubleOrHuBtnLayer(true)
end

function DoubleHuLayer:onMsgHu()
    self:showDoubleOrHuBtnLayer(false)
    self:showJiaBeiAniLayer(false)
end

function DoubleHuLayer:showJiaBeiJson(ntimes)
    if not ntimes then return end

    local jiaBeiChose = 0
    --加倍特效选择
    if ntimes == 2 then 
        jiaBeiChose = 1
    elseif ntimes > 2 then
        jiaBeiChose = 2
    end
    
    local jiaBeiAni = CF.UITool.seekNodeByName(self._panelJiaBeiAni,"_KW_JIABEI_DONGHUA")
    if jiaBeiAni and cc.FileUtils:getInstance():isFileExist("res/animation/Mahjong/LiShui/erren_jiabei_ani/lishui_jiabei_ani.ExportJson") then
        self:showJiaBeiAniLayer(true)
        ccs.ArmatureDataManager:getInstance():addArmatureFileInfo( 
            "res/animation/Mahjong/LiShui/erren_jiabei_ani/lishui_jiabei_ani0.png",
            "res/animation/Mahjong/LiShui/erren_jiabei_ani/lishui_jiabei_ani0.plist",
            "res/animation/Mahjong/LiShui/erren_jiabei_ani/lishui_jiabei_ani.ExportJson")

        local lastArmature = ccs.Armature:create("lishui_jiabei_ani")
        jiaBeiAni:addChild(lastArmature)
        local posNode = jiaBeiAni:getChildByName("_KW_POS_JIABEI_DONGHUA")
        if posNode then
            lastArmature:setPosition(posNode:getPosition())
            lastArmature:getAnimation():playWithIndex(jiaBeiChose)        --0,1,2为加倍动画三种状态
            lastArmature:getAnimation():setMovementEventCallFunc(function()
                lastArmature:removeFromParent(true)
                self:showJiaBeiAniLayer(false)
            end)
        end
    end

    local textAni = CF.UITool.seekNodeByName(self._panelJiaBeiAni,"_KW_POS_JIABEI_TEXT")
    if textAni then
        --加倍数字显示
        CF.UITool.setText(self._panelJiaBeiAni,"_KW_POS_JIABEI_TEXT",tostring(ntimes) .. "次")
        textAni:stopAllActions()
        textAni:setScale(1.5,1.5)
        local testAniAction = cc.Sequence:create(
            cc.DelayTime:create(0.3),
            cc.FadeIn:create(0.08),
            cc.Spawn:create(cc.FadeIn:create(0.08),cc.ScaleTo:create(0.08,1,1)),
            cc.DelayTime:create(0.6),
            cc.FadeOut:create(0.07)
        )
        textAni:runAction(testAniAction)
    end

end

function DoubleHuLayer:onBtnClickedHu(send, eventType)
    CF.game:getModule("GameLayer"):doActionHu()
    self:showDoubleOrHuBtnLayer(false)
end

function DoubleHuLayer:onBtnClickedHuDouble(send, eventType)
    CF.msgManager:sendErRenJiaBei()
    --点过，自动出牌
    self:performWithDelay(function()
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local mah = gameData:getHandDfData(CF.GameDefine.LOCAL_SEAT.BOTTOM)
        gameData:setPlayPower(true)
        if mah and mah ~= 0 then
            CF.msgManager:sendPlayMahs(mah, self:getGameData():getActionID())
        end
    end, 1)
    self:showDoubleOrHuBtnLayer(false)
end

--显示胡或者加倍的层级
function DoubleHuLayer:showDoubleOrHuBtnLayer(isShow)
    if self._panelBtnBg then
        self._panelBtnBg:setVisible(isShow)
    end
end

--动画层
function DoubleHuLayer:showJiaBeiAniLayer(isShow)
    if self._panelJiaBeiAni then
        self._panelJiaBeiAni:setVisible(isShow)
    end
end

return DoubleHuLayer