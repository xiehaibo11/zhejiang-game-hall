local RoundLayer = CF.gameClass("RoundLayer", CF.ViewBase)

local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/"

function RoundLayer:ctor(param)
    param = param or {}
    RoundLayer.super.ctor(self, param)
    self._totalRound = 5
    self:init()
end

function RoundLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/RoundLayer.csb"
end

function RoundLayer:getBindingInfo()
    return {
        ["_KW_PANEL_ROUND"] = {varName = "_panelRound"},
        ["_KW_TEXT_ROUND"] = {varName = "_textRound"},
        ["_KW_PANEL_ROUND_DIBAN"] = {varName = "_panelRoundDiBan"},
        ["_KW_IMG_ROUND_BACK_"] = {varName = "_imgRoundBack", beginIndex = 1, endIndex = 6},
        ["_KW_IMG_ROUND_SHOW_"] = {varName = "_imgRoundShow", beginIndex = 1, endIndex = 6},
        ["_KW_POS_ROUND_ANI"] = {varName = "_posRoundAni"},
        ["_KW_POS_TIP_ROUND"] = {varName = "_posTipRound"},
        ["_KW_POS_TIP_ROUND_BACK"] = {varName = "_posTipRoundBack"},
        ["_KW_POS_ROUND_ANI_DIBAN"] = {varName = "_posRoundAniDiBan"},
        ["_KW_TEXT_TIP_ROUND"] = {varName = "_textTipRound"}
    }
end

function RoundLayer:getProxyEvents()
    local eventTable = {
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_STATUS_CHANGE", callBack = "onMatchStatusEvent"},
        {module = CF.goldManager, eventKeyName = "EVENT_MATCH_FLAG_SHOW", callBack = "onMatchFlagShowEvent"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROUND_TEXT", callBack = "onShowRoundText"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ROUND_ANI", callBack = "onShowRoundAni"}
    }
    return eventTable
end

function RoundLayer:getAdaptationConfig()
    return {
        {node = self._panelRound, bRight = false, bHalf = true}
    }
end

function RoundLayer:init()
    for i = 1, 6 do
        self["_imgRoundShow" .. i]:setVisible(false)
    end

    if self._diBanAni == nil then
        self._diBanAni = CF.SpineManager:playAni(self._posRoundAniDiBan, spinePath .. "Round/", "zzb_ap_lunci", "diban", true)
    end

    if self._roundAniPos == nil then
        self._roundAniPos = cc.p(self._posRoundAni:getPosition())
    end
    self:initRoundBack()
end

function RoundLayer:initRoundBack()
    for i = 1, 6 do
        if i <= self._totalRound then
            self["_imgRoundBack" .. i]:setVisible(true)
        else
            self["_imgRoundBack" .. i]:setVisible(false)
        end
    end
    if self._totalRound > 5 then
        self._panelRoundDiBan:setContentSize(cc.size(443, self._panelRoundDiBan:getContentSize().height))
    else
        self._panelRoundDiBan:setContentSize(cc.size(383, self._panelRoundDiBan:getContentSize().height))
    end
end

function RoundLayer:onMatchStatusEvent(event)
    local show = event.msg.show or false
    self:setVisible(not show)
end

function RoundLayer:onMatchFlagShowEvent(event)
    local show = event.msg.show or false
    self:setVisible(not show)
end

function RoundLayer:onShowRoundText(event)
    local round = event.msg.round
    self._totalRound = event.msg.totalround
    self:initRoundBack()

    self._textRound:setString(string.format("%d/%d", round, self._totalRound))
    for i = 1, 6 do
        self["_imgRoundShow" .. i]:removeAllChildren()
        if i < round then
            self["_imgRoundShow" .. i]:setVisible(true)
        else
            self["_imgRoundShow" .. i]:setVisible(false)
        end
    end

    if round > 0 then
        local roundImg = self["_imgRoundShow" .. round]
        local roundImgCenterPos = cc.p(roundImg:getContentSize().width / 2, roundImg:getContentSize().height / 2)
        roundImg:setVisible(true)

        local aniNode = CF.SpineManager:playAni(roundImg, spinePath .. "Round/", "zzb_ap_lunci", "huomiao", true, nil, nil, false)
        if aniNode then
            aniNode:setScale(0.66)
            aniNode:setPosition(roundImgCenterPos)
        end
    end
end

-- 播报-轮次动画
function RoundLayer:onShowRoundAni(event)
    local aniStartTime = socket.gettime()
    local round = event.msg.round
    local totalRound = event.msg.totalround

    self._textRound:setString(string.format("%d/%d", round, totalRound))
    for i = 1, 6 do
        self["_imgRoundShow" .. i]:removeAllChildren()
        if i < round then
            self["_imgRoundShow" .. i]:setVisible(true)
        else
            self["_imgRoundShow" .. i]:setVisible(false)
        end
    end

    local callback = function()
        self._textTipRound:setVisible(false)
        print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [DarkShuangKou][AniTime] 第" .. string.format("%d/%d", round, totalRound) .. "轮次播报: " .. (socket.gettime() - aniStartTime))
        if event.msg.callback then
            event.msg.callback()
        end
    end

    local aniNode
    local aniNode3
    local callback2 = function()
        if aniNode then
            aniNode:delayRemoveFromParent()
        end
        if aniNode3 then
            aniNode3:delayRemoveFromParent()
        end
        self._textTipRound:setVisible(false)
        local roundImg = self["_imgRoundShow" .. round]
        local roundImgCenterPos = cc.p(roundImg:getContentSize().width / 2, roundImg:getContentSize().height / 2)

        self._posRoundAni:setPositionX(self._roundAniPos.x + round * 60)
        CF.SpineManager:playAni(
            self._posRoundAni,
            spinePath .. "Round/",
            "zzb_ap_feilizi",
            "animation",
            false,
            callback,
            {
                ["cx"] = function()
                    roundImg:setVisible(true)
                    -- 火苗显示
                    local aniNode2 = CF.SpineManager:playAni(roundImg, spinePath .. "Round/", "zzb_ap_lunci", "huomiao", true, nil, nil, false)
                    if aniNode2 then
                        aniNode2:setScale(0.66)
                        aniNode2:setPosition(roundImgCenterPos)
                    end

                    local boomAniNode
                    local function boomAniComplete()
                        if boomAniNode then
                            boomAniNode:delayRemoveFromParent()
                        end
                    end
                    boomAniNode = CF.SpineManager:playAni(roundImg, spinePath .. "Round/", "zzb_ap_feilizi", "animation2", false, boomAniComplete, nil, false)
                    if boomAniNode then
                        boomAniNode:setPosition(roundImgCenterPos)
                    end
                end
            }
        )
    end

    if round == totalRound then
        CF.soundManager:playSoundLastShowdown()
        aniNode = CF.SpineManager:playAni(self._posTipRound, spinePath .. "BoBao/", "zzb_ap_zzdj", "animation", false, callback2)
        aniNode3 = CF.SpineManager:playAni(self._posTipRoundBack, spinePath .. "BoBao/", "zzb_ap_zzdj", "animation2", false, nil, nil, false)
        if aniNode3 then
            local visibleSize = cc.Director:getInstance():getVisibleSize()
            aniNode3:setScaleX(visibleSize.width / 1920)
            aniNode3:setScaleY(visibleSize.height / 1080)
        end
    else
        CF.soundManager:playSoundRoundBobao()
        aniNode = CF.SpineManager:playAni(self._posTipRound, spinePath, "zzb_ap_lcbb", "lunci", false, callback2)
        if self._textTip1PosX == nil then
            self._textTip1PosX = self._textTipRound:getPositionX()
        end
        self._textTipRound:setPositionX(self._textTip1PosX)
        self._textTipRound:setString(round)
        self._textTipRound:setVisible(true)
        self._textTipRound:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_lcbb_sz.json", animationName = "lunci", boneName = "luncizi", slotName = "luncizi"})
    end
end

return RoundLayer
  b  