local AnimationLayer = CF.gameClass("AnimationLayer", CF.ViewBase)
local CardEnum = CF.gameRequire("Define.CardEnum")

local spinePath = CF.gameResourceRootPath .. "DarkShuangKou/Spine/"

function AnimationLayer:ctor(param)
    param = param or {}
    AnimationLayer.super.ctor(self, param)
    self._spineActions = {}
    self:init()

    self._listenerEventSpineEvent = cc.EventListenerCustom:create("KW_SPINE_ANI_NODE_EVENT", handler(self, self.onSpineAniNodeEvent))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerEventSpineEvent, 1)

    self._listenerForeground = cc.EventListenerCustom:create("APP_ENTER_FOREGROUND_EVENT", handler(self, self.onEnterForeground))
    cc.Director:getInstance():getEventDispatcher():addEventListenerWithFixedPriority(self._listenerForeground, 1)
end

function AnimationLayer:onExit()
    AnimationLayer.super.onExit(self)

    if self._listenerEventSpineEvent then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerEventSpineEvent)
    end

    if self._listenerForeground then
        cc.Director:getInstance():getEventDispatcher():removeEventListener(self._listenerForeground)
    end
end

function AnimationLayer:getCSBPath()
    return CF.gameResourceRootPath .. "DarkShuangKou/GameLayer/CSB/AnimationLayer.csb"
end

function AnimationLayer:getBindingInfo()
    return {
        ["_KW_PANEL_0_1"] = {varName = "_KW_PANEL_0_1"},
        ["_KW_PANEL_0_3"] = {varName = "_KW_PANEL_0_3"},
        ["_KW_PANEL_1_1"] = {varName = "_KW_PANEL_1_1"},
        ["_KW_PANEL_1_3"] = {varName = "_KW_PANEL_1_3"},
        ["_KW_LEFT_TOP_PANEL"] = {varName = "_KW_LEFT_TOP_PANEL"},
        ["_KW_GRAY_BACK"] = {varName = "_grayBack"},
        ["_KW_FULL_PANEL"] = {varName = "_fullPanel"},
        ["_HEAD_ANI_"] = {varName = "_headPanel", beginIndex = 0, endIndex = 3},
        ["_KW_POS_OUT_SIGN_ANI_"] = {varName = "_posOutSignAni", beginIndex = 1, endIndex = 4},
        ["_KW_POS_BAOJI_ANI_"] = {varName = "_posBaoJiAni", beginIndex = 1, endIndex = 4},
        ["_KW_POS_SCORE_ANI_"] = {varName = "_posScoreAni", beginIndex = 1, endIndex = 4},
        ["_HEAD_ANI_ATTACK_"] = {varName = "_headAniAttack", beginIndex = 1, endIndex = 4},
        ["_CARD_ANI_ATTACK_"] = {varName = "_cardAniAttack", beginIndex = 1, endIndex = 4},
        ["_HEAD_ANI_GOLD_"] = {varName = "_headAniGold", beginIndex = 1, endIndex = 4},
        ["_HEAD_ANI_GOLD_SCORE_"] = {varName = "_headAniGoldScore", beginIndex = 1, endIndex = 4},
        ["_KW_POS_MULT_ANI_"] = {varName = "_posMultAni", beginIndex = 1, endIndex = 4},
        ["_HEAD_ANI_SCORE_2"] = {varName = "_HEAD_ANI_SCORE_2"},
        ["_KW_POS_WIN_ANI"] = {varName = "_posWinAni"},
        ["_KW_POS_ATTACK_ANI_CENTER"] = {varName = "_posAttackAniCenter"},
        ["_KW_POS_TIP_CARD_TYPE_ANI"] = {varName = "_posTipCardTypeAni"},
        ["_KW_POS_TIP_RESULT_TYPE"] = {varName = "_posTipResultType"},
        ["_KW_POS_TIP_BASE_SCORE_MULT"] = {varName = "_posTipBaseScoreMult"},
        ["_KW_TEXT_TIP_BASE_SCORE_MULT"] = {varName = "_textTipBaseScoreMult"},
        ["_KW_POS_FULL_SCREEN_ANI"] = {varName = "_posFullScreenAni"},
        ["_KW_POS_TIP_DUIJUE"] = {varName = "_posTipDuiJue"},
        ["_KW_POS_TIP_BOOM"] = {varName = "_posTipBoom"},
        ["_KW_FNT_RECHARGE_"] = {varName = "_fntRecharge", beginIndex = 1, endIndex = 4},
        ["_KW_IMG_DIE_"] = {varName = "_imgDie", beginIndex = 1, endIndex = 4}
    }
end

function AnimationLayer:getProxyEvents()
    local eventTable = {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_GAME_PLAYER_START", callBack = "clearTable"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_CLEAR_TIME_RECHARGE", callBack = "clearRechargeTime"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_OUT_CARD_SIGN", callBack = "onPlayOutCardsSignAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_TIP_CARD_TYPE", callBack = "onShowTipCardTypeAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_DOUBLE_ANI", callBack = "onShowDoubleAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_START_RESULT_ANI", callBack = "onShowStartResultAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_BOOM_RESULT_TYPE_ANI", callBack = "onShowBoomResultTypeAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_RESULT_TYPE_ANI", callBack = "onShowResultTypeAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_WIN_MULT_ANI", callBack = "onShowWinMultAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_WIN_WIN_ANI", callBack = "onShowWinWinAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ATTACK_ANI", callBack = "onShowAttackAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_ATTACK_MULT_ANI", callBack = "onShowAttackMultAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_SCORE_ANI", callBack = "onShowScoreAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SHOW_GOLD_ANI", callBack = "onShowGoldAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_START_SHOW_WINLOST", callBack = "onStartShowWinLost"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAYER_REVIVESTATE", callBack = "onPlayerReviveState"}
    }
    return eventTable
end

function AnimationLayer:getAdaptationConfig()
    return {
        {node = self._KW_PANEL_0_1, bRight = false, bHalf = false},
        {node = self._KW_PANEL_0_3, bRight = true, bHalf = false},
        {node = self._KW_PANEL_1_1, bRight = false, bHalf = false},
        {node = self._KW_PANEL_1_3, bRight = true, bHalf = false},
        {node = self._KW_LEFT_TOP_PANEL, bRight = false, bHalf = true},
        {node = self["_imgDie" .. 1], bRight = false, bHalf = false},
        {node = self["_imgDie" .. 3], bRight = true, bHalf = false},
        {node = self["_fntRecharge" .. 1], bRight = false, bHalf = false},
        {node = self["_fntRecharge" .. 3], bRight = true, bHalf = false}
    }
end

function AnimationLayer:init()
    self._grayBack:setVisible(false)
    self._grayBack:setSwallowTouches(false)
    self._posMultAniOriginX = {}
    for i = 1, 4 do
        self._posMultAniOriginX[i] = self["_posMultAni" .. i]:getPosition()
    end
end

function AnimationLayer:insertSpineAction(aniNode)
    self._spineActions[#self._spineActions + 1] = aniNode
end

function AnimationLayer:deleteSpineAction(aniNode)
    for i = 1, #self._spineActions do
        if self._spineActions[i].node == aniNode then
            table.remove(self._spineActions, i)
            break
        end
    end
end

function AnimationLayer:onSpineAniNodeEvent(event)
    local fileList = {
        "zzb_ap_djcp",
        "zzb_ap_pingju",
        "zzb_ap_shuangying",
        "zzb_ap_dfjb",
        "zzb_ap_lcbb",
        "zzb_ap_jsbb",
        "zzb_ap_fgj",
        "zzb_ap_bgj",
        "zzb_ap_hgj",
        "zzb_ap_dgj",
        "zzb_ap_baoji",
        "zzb_ap_fjbgx"
    }
    local eventName = event.eventName
    local file = event.file
    local aniNode = event.aniNode
    if table.has(fileList, file) then
        if eventName == "enter" then
            self:insertSpineAction({node = aniNode, file = file})
        elseif eventName == "exit" then
            self:deleteSpineAction(aniNode)
        end
    end
end

function AnimationLayer:stopAllAnimation()
    for i = 1, #self._spineActions do
        self._spineActions[i].node:clearTracks()
    end
    local stopActions = function()
        for localSeat = 1, 4 do
            self["_posOutSignAni" .. localSeat]:removeAllChildren()
            self["_posMultAni" .. localSeat]:removeAllChildren()
            self["_posBaoJiAni" .. localSeat]:removeAllChildren()
            self["_headAniGold" .. localSeat]:removeAllChildren()
            self["_headAniAttack" .. localSeat]:removeAllChildren()
            self["_cardAniAttack" .. localSeat]:removeAllChildren()
        end
        self._posWinAni:removeAllChildren()
        self._posTipCardTypeAni:removeAllChildren()
        self._posTipBaseScoreMult:removeAllChildren()
        self._posTipDuiJue:removeAllChildren()
        self._posTipBoom:removeAllChildren()
        self._posTipResultType:removeAllChildren()
        self._posAttackAniCenter:removeAllChildren()

        self._grayBack:setVisible(false)
        self._textTipBaseScoreMult:setVisible(false)
    end
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0), cc.CallFunc:create(stopActions)))
end

-- 以A为原点，B相对A的角度
function AnimationLayer:calculateAngleBetweenPoints(pointA, pointB)
    local dx = pointB.x - pointA.x -- 首先计算两点间的差分
    local dy = pointB.y - pointA.y
    local angleInRadians = math.atan2(dy, dx) -- 使用atan2计算角度的弧度值
    local angleInDegrees = angleInRadians * 180 / math.pi -- 将弧度转换为度
    return angleInDegrees
end

-- 播放出牌动画
function AnimationLayer:onPlayOutCardsSignAni(event)
    if event and event.msg then
        local localSeat = event.msg.localSeat
        local show = event.msg.show
        if localSeat then
            if show then
                CF.SpineManager:playAni(self["_posOutSignAni" .. localSeat], CF.gameResourceRootPath .. "DarkShuangKou/Spine/OutCards/", "zzb_ap_djcp", "animation")
                CF.soundManager:playSoundOut()
            else
                self["_posOutSignAni" .. localSeat]:removeAllChildren()
            end
        end
    end
end

-- 显示双赢、三赢、平局动画
function AnimationLayer:onShowWinWinAni(event)
    local callback = function()
        -- 动画播放完成：双赢
        -- 接下来播放：攻击动画
        self._grayBack:setVisible(false)
        CF.game:getModule("GameLayer"):showAttackAni()
    end

    local winType = event.msg.winType
    if winType == 0 then
        local aniNode
        local aniCompleteFunc = function()
            aniNode:delayRemoveFromParent()
            callback()
        end
        self._grayBack:setVisible(true)
        aniNode = CF.SpineManager:playAni(self._posWinAni, spinePath .. "Compare/", "zzb_ap_pingju", "animation", false, aniCompleteFunc)
    else
        local aniName = "shuang"
        if winType == 3 then
            aniName = "san"
        end
        local aniNode
        local aniCompleteFunc = function()
            aniNode:delayRemoveFromParent()
            callback()
        end
        self._grayBack:setVisible(true)
        aniNode = CF.SpineManager:playAni(self._posWinAni, spinePath .. "Compare/", "zzb_ap_shuangying", aniName, false, aniCompleteFunc)
        CF.soundManager:playSoundWinWin()
    end
end

-- 选中牌时，提示牌型及倍数
function AnimationLayer:onShowTipCardTypeAni(event)
    local CardTypeAniLayer = CF.gameRequire("Modules.AniNode.CardTypeAniView")
    self._posTipCardTypeAni:removeAllChildren()
    if event.msg.cardTypeID == 0 then
        return
    end
    local cardArea = CardTypeAniLayer.new(event.msg)
    self._posTipCardTypeAni:addChild(cardArea)
end

-- 播报-本轮加倍的动画
function AnimationLayer:onShowDoubleAni(event)
    local mult = event.msg.mult
    local callback = function()
        self._textTipBaseScoreMult:setVisible(false)
        if event.msg.callback then
            event.msg.callback()
        end
    end
    if self._textTipBaseScoreMultPosX == nil then
        self._textTipBaseScoreMultPosX = self._textTipBaseScoreMult:getPositionX()
    end
    self._textTipBaseScoreMult:setPositionX(self._textTipBaseScoreMultPosX)
    self._textTipBaseScoreMult:setString("x" .. mult)
    self._textTipBaseScoreMult:setVisible(true)
    self._textTipBaseScoreMult:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = spinePath .. "zzb_ap_dfjb_sz.json", animationName = "animation", boneName = "sz", slotName = "sz"})
    CF.SpineManager:playAni(self._posTipBaseScoreMult, spinePath, "zzb_ap_dfjb", "animation", false, callback)
    CF.soundManager:playSoundResultBobao()
end

-- 播报-对决时刻
function AnimationLayer:onShowStartResultAni(event)
    local aniNode
    local callback = function()
        if aniNode then
            aniNode:delayRemoveFromParent()
        end
        if event.msg.callback then
            event.msg.callback()
        end
    end

    aniNode = CF.SpineManager:playAni(self._posTipDuiJue, spinePath, "zzb_ap_lcbb", "djsk", false, callback)
    CF.soundManager:playSoundShowdownMoment()
end

-- 播报-本轮有炸弹，本轮无炸弹
function AnimationLayer:onShowBoomResultTypeAni(event)
    local aniNode
    local callback = function()
        local callback2 = function()
            if aniNode then
                aniNode:delayRemoveFromParent()
            end
            self._grayBack:setVisible(false)
            if event.msg.callback then
                event.msg.callback()
            end
        end
        self:delayOnce(0.5, callback2)
    end

    self._grayBack:setVisible(true)
    local bHaveBoom = event.msg.bHaveBoom
    aniNode = CF.SpineManager:playAni(self._posTipBoom, spinePath, "zzb_ap_lcbb", bHaveBoom == true and "youzhadan" or "wuzhadan", false, callback)
    CF.soundManager:playSoundBoomBobao()
end

-- 播报-三带结算、对子结算、单牌结算、炸弹结算
function AnimationLayer:onShowResultTypeAni(event)
    local aniNode
    local callback = function()
        self._grayBack:setVisible(false)
        if aniNode then
            aniNode:delayRemoveFromParent()
        end
        CF.game:getModule("GameLayer"):showWinMultAni()
    end

    local aniName = ""
    if event.msg.resultType == 1 then
        aniName = "feng"
    elseif event.msg.resultType == 2 then
        aniName = "bing"
    elseif event.msg.resultType == 3 then
        aniName = "huo"
    elseif event.msg.resultType == 4 then
        aniName = "dian"
    end
    if aniName ~= "" then
        self._grayBack:setVisible(true)
        aniNode = CF.SpineManager:playAni(self._posTipResultType, spinePath .. "Compare/", "zzb_ap_jsbb", aniName, false, callback)
        CF.soundManager:playSoundResultBobao()
    else
        self:runAction(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(callback)))
    end
end

-- 播放赢N倍动画
function AnimationLayer:onShowWinMultAni(event)
    local callback = function()
        CF.game:getModule("GameLayer"):winMultAniCallback()
    end

    local isPingJu = true
    local mults = event.msg.mults
    for _, v in pairs(mults) do
        local mult = v.mult
        if mult ~= 0 then
            isPingJu = false
            break
        end
    end
    if isPingJu then
        callback()
        return
    end
    local aniCompleteCnt = 0
    local aniCnt = 0
    for _, v in pairs(mults) do
        local localSeat = v.localSeat
        local mult = v.mult
        local cardCnt = v.cards and #v.cards or 0
        if mult > 0 then
            self["_posMultAni" .. localSeat]:removeAllChildren()

            local WinMultView = CF.gameRequire("Modules.AniNode.WinMultView")
            local winMultView = WinMultView.new()
            self["_posMultAni" .. localSeat]:addChild(winMultView)
            local posX = 43 * (cardCnt - 1) / 2
            if localSeat == 1 then
                self["_posMultAni" .. localSeat]:setPositionX(self._posMultAniOriginX[localSeat] + posX)
            elseif localSeat == 3 then
                self["_posMultAni" .. localSeat]:setPositionX(self._posMultAniOriginX[localSeat] - posX)
            end
            local aniCallback = function()
                winMultView:delayRemoveFromParent()
                aniCompleteCnt = aniCompleteCnt + 1
                if aniCompleteCnt == aniCnt then
                    callback()
                end
            end
            aniCnt = aniCnt + 1
            winMultView:onShowMultAni(mult, aniCallback)
        end
    end
    if aniCnt == 0 then
        callback()
    else
        CF.soundManager:playSoundWinMult()
    end
end

-- 获取针对 0,0点的世界坐标
function AnimationLayer:getAniLayerPosition(node)
    local nodePos = node:getParent():convertToWorldSpace(cc.p(node:getPositionX(), node:getPositionY()))
    return self._posAttackAniCenter:convertToNodeSpace(nodePos)
end

function AnimationLayer:onEnterForeground()
    if self._videoPlayer then
        self._videoPlayer:removeFromParent()
        CF.game:getModule("GameLayer"):showAttackMultAni()
        self._videoPlayer = nil
    end
end

-- 播放攻击动画
function AnimationLayer:onShowAttackAni(event)
    local callback = function()
        -- 动画播放完成：攻击
        -- 接下来播放：暴击动画
        CF.game:getModule("GameLayer"):showAttackMultAni()
        self._videoPlayer = nil
    end
    local level2Mult = 1000
    local level3Mult = 2000

    local maxMult = event.msg.maxMult
    local isResultAttack = event.msg.isResultAttack
    local animationName
    if isResultAttack and maxMult >= level3Mult then
        local aniFiles = {"feng", "bing", "huo", "dian"}
        local localAttackFromList = event.msg.localAttackFromList
        local localAttackFrom = localAttackFromList[1]
        local cardTyeID = event.msg.cardTypeList[localAttackFrom].id
        local aniFile = aniFiles[cardTyeID]
        local path = string.format("audio/DarkShuangKou/Video/%s.mp4", aniFile)
        local callback2 = function(eventType)
            if eventType == ccexp.VideoPlayerEvent.COMPLETED then
                CF.audioManager:resumeMusic()
                callback()
            end
        end
        local success
        success, self._videoPlayer = CF.VideoManager:playVideo(self._fullPanel, path, cc.size(1928, 888), callback2)
        -- success, self._videoPlayer = CF.VideoManager:playVideo(self._fullPanel, path, cc.size(1928, 888), callback2, {delayTime = 3 - 5 / 30, scaleTime = 5 / 30, scale = 10})
        if success then
            CF.audioManager:pauseMusic()
            return
        else
            animationName = "gj2"
        end
    elseif maxMult >= level2Mult then
        animationName = "gj2"
    else
        animationName = "gj1"
    end

    local localAttackFromList = event.msg.localAttackFromList
    local localAttackToList = event.msg.localAttackToList

    local moveTime = 0.4
    local aniFiles = {"zzb_ap_fgj", "zzb_ap_bgj", "zzb_ap_hgj", "zzb_ap_dgj"}
    local aniCompleteCnt = 0
    local aniCnt = 0
    for _, localAttackFrom in pairs(localAttackFromList) do
        for localSeat = 1, 4 do
            if table.has(localAttackToList, localSeat) then
                local headaniAttackNode = self["_headAniAttack" .. localSeat]
                local aniNode
                local aniCompleteFunc = function()
                    aniNode:delayRemoveFromParent() -- 延迟一帧执行移除操作，防止动画播放完后立即移除，C++层仍然会有引用
                end
                local baoAniCompleteFunc = function()
                    aniCompleteCnt = aniCompleteCnt + 1
                    if aniCompleteCnt == 1 then
                        callback()
                    end
                end
                local cardTyeID = event.msg.cardTypeList[localAttackFrom].id
                local aniFile = aniFiles[cardTyeID]
                local baoAniFunc = function()
                    headaniAttackNode:runAction(
                        cc.Sequence:create(
                            cc.DelayTime:create(0),
                            cc.CallFunc:create(
                                function()
                                    CF.SpineManager:playAni(headaniAttackNode, spinePath .. "Attack/", aniFile, "bao", false, baoAniCompleteFunc)
                                end
                            )
                        )
                    )
                end
                aniCnt = aniCnt + 1
                if event.msg.cardTypeList[localAttackFrom] == CardEnum.CardType.BOOM and animationName == "gj2" then
                    -- 雷电2级动画，原点为重点，所以需要修改
                    aniNode = CF.SpineManager:playAni(headaniAttackNode, spinePath .. "Attack/", aniFile, animationName, false, aniCompleteFunc, {["bao"] = baoAniFunc}, false)
                    if aniNode then
                        local pos0 = self:getAniLayerPosition(self["_cardAniAttack" .. localAttackFrom])
                        local pos = self:getAniLayerPosition(headaniAttackNode)
                        local rotate = self:calculateAngleBetweenPoints(pos, pos0)
                        aniNode:setRotation(180 - rotate) -- 动画在左边，所以进行一次反转
                        local dis = cc.pGetDistance(pos0, pos)
                        aniNode:setScaleX(dis / 550)
                    end
                else
                    aniNode = CF.SpineManager:playAni(self._posAttackAniCenter, spinePath .. "Attack/", aniFile, animationName, false, aniCompleteFunc, {["bao"] = baoAniFunc}, false)
                    if aniNode then
                        local pos0 = self:getAniLayerPosition(self["_cardAniAttack" .. localAttackFrom])
                        local pos = self:getAniLayerPosition(headaniAttackNode)
                        local rotate = self:calculateAngleBetweenPoints(pos0, pos)
                        aniNode:setPosition(pos0)
                        aniNode:setRotation(-rotate) -- 动画在左边，所以进行一次反转
                        if event.msg.cardTypeList[localAttackFrom] == CardEnum.CardType.BOOM then
                            local dis = cc.pGetDistance(pos0, pos)
                            aniNode:setScaleX(-1 * dis / 600)
                        else
                            local scaleToTime = 0.1
                            if localSeat == 4 then
                                scaleToTime = 0.3
                            end
                            aniNode:setScale(0.1)
                            aniNode:runAction(cc.Sequence:create(cc.Spawn:create(cc.ScaleTo:create(scaleToTime, 1), cc.MoveTo:create(moveTime, pos))))
                        end
                    end
                end
            end
        end
    end
    if aniCnt == 0 then
        callback()
    else
        CF.soundManager:playSoundAttack()
    end
end

-- 播放暴击倍数动画
function AnimationLayer:onShowAttackMultAni(event)
    local callback2 = function()
        CF.game:getModule("GameLayer"):showScoreAni()
    end
    local callback = function()
        -- 动画播放完成：暴击
        -- 接下来播放：分数动画
        self:delayOnce(0.7, callback2)
        CF.game:getModule("GameLayer"):showFlyGoldAni()
    end

    local localAttackMult = event.msg.localAttackMult

    local aniCompleteCnt = 0
    local aniCnt = 0
    for i = 1, #localAttackMult do
        local localSeat = localAttackMult[i].localSeat
        local mult = localAttackMult[i].mult
        if mult == 5 or mult == 10 or mult == 15 then
            aniCnt = aniCnt + 1
            local aniNode
            local aniCompleteFunc = function()
                aniNode:delayRemoveFromParent()
                aniCompleteCnt = aniCompleteCnt + 1
                if aniCompleteCnt == aniCnt then
                    callback()
                end
            end
            aniNode = CF.SpineManager:playAni(self["_posBaoJiAni" .. localSeat], spinePath .. "Compare/", "zzb_ap_baoji", "x" .. mult, false, aniCompleteFunc)
        else
            print(os.date("%Y-%m-%d %H:%M:%S", os.time()) .. " [DarkShuangKou] onShowAttackMultAni 不支持的倍数：" .. mult)
        end
    end
    if aniCnt == 0 then
        callback()
    else
        CF.soundManager:playSoundBaoJi()
    end
end

-- 播放飘分动画
function AnimationLayer:onShowScoreAni(event)
    local callback = function()
        -- 动画播放完成：分数
        CF.game:getModule("GameLayer"):collectCards()
    end

    local isPingJu = true
    local scores = event.msg.scores
    for _, v in pairs(scores) do
        local score = v.score
        if score ~= 0 then
            isPingJu = false
            break
        end
    end
    if isPingJu then
        callback()
        return
    end
    local aniCompleteCnt = 0
    local aniCnt = 0
    for _, v in pairs(scores) do
        local localSeat = v.localSeat
        local score = v.score
        self["_posScoreAni" .. localSeat]:removeAllChildren()

        if score ~= 0 then
            local WinLostScoreView = CF.gameRequire("Modules.AniNode.WinLostScoreView")
            local winLostScoreView = WinLostScoreView.new()
            self["_posScoreAni" .. localSeat]:addChild(winLostScoreView)
            local aniCallback = function()
                winLostScoreView:delayRemoveFromParent()
                -- winLostScoreView:runAction(
                --     cc.Sequence:create(
                --         cc.DelayTime:create(1.2),
                --         cc.CallFunc:create(
                --             function()
                --                 -- 等飞完金币再移除
                --                 winLostScoreView:removeFromParent()
                --             end
                --         )
                --     )
                -- )
                aniCompleteCnt = aniCompleteCnt + 1
                if aniCompleteCnt == aniCnt then
                    callback()
                end
            end
            aniCnt = aniCnt + 1
            winLostScoreView:onShowScoreAni(score, v.flags, aniCallback)
        end
    end
    if aniCnt == 0 then
        callback()
    end
end

-- 播放金币动画
function AnimationLayer:onShowGoldAni(event)
    local callback2 = function()
    end
    local callback = function()
        -- 动画播放完成：飞金币
        -- 接下来播放：收牌
        self:delayOnce(0.5, callback2)
    end

    local localAttackFromList = event.msg.localAttackFromList
    local localAttackToList = event.msg.localAttackToList

    local aniCompleteCnt = 0
    local aniCnt = 0
    for index, localAttackFrom in pairs(localAttackFromList) do
        for localSeat = 1, 4 do
            if table.has(localAttackToList, localSeat) then
                local completeCallback = function()
                    aniCompleteCnt = aniCompleteCnt + 1
                    if aniCompleteCnt == aniCnt then
                        callback()
                    end
                end
                aniCnt = aniCnt + 1
                self:doFlyGoldAni(localSeat, localAttackFrom, completeCallback, index)
            end
        end
    end
    if aniCnt == 0 then
        callback()
    else
        CF.soundManager:playSoundFlyGold()
    end
end

-- 执行飞金币动画
function AnimationLayer:doFlyGoldAni(localFlyFrom, localFlyTo, callback, index)
    local tmpScale = 2 -- 调试使用的

    local aniInitScale = 0.35 / tmpScale -- 生成金币初始缩放
    local aniBoomScaleTo = 1.32 / tmpScale -- 爆开动画最大缩放
    local aniBoomScaleTime = 0.2
    local aniFlyScale = 1 / tmpScale -- 飞行过程中的缩放

    -- local goldCnt = 30 -- 金币个数
    -- local goldBoomMoveTime = 16 / 30 -- 金币爆开时移动时间
    -- local goldBoomAfterTime = 0 / 30 -- 爆炸后停留时间

    -- -- 大圈
    -- local goldBoomOuterRadius = 180 -- 金币爆开的外圈半径
    -- local goldBoomInerRadius = 140 -- 金币爆开的内圈半径
    -- -- 小圈
    -- local goldBoomOuterRadius2 = 150 -- 金币爆开的外圈半径2
    -- local goldBoomInerRadius2 = 50 -- 金币爆开的内圈半径2

    local goldCnt = 50 -- 金币个数
    local goldBoomMoveTime = 16 / 30 -- 金币爆开时移动时间
    local goldBoomAfterTime = 0 / 30 -- 爆炸后停留时间

    -- 大圈
    local goldBoomOuterRadius = 240 -- 金币爆开的外圈半径
    local goldBoomInerRadius = 210 -- 金币爆开的内圈半径
    -- 小圈
    local goldBoomOuterRadius2 = 200 -- 金币爆开的外圈半径2
    local goldBoomInerRadius2 = 80 -- 金币爆开的内圈半径2

    local flyGoldFirstTime = 0.5 -- 飞金币的初始时间，用于计算速度，也用于预估大概飞金币时间
    local flyGoldSpeed = 0 -- 飞金币的速度，速度恒定，根据第一个金币飞的时间决定

    if not self["_headAniGold" .. localFlyFrom]:getChildByName("GoldAniNode" .. index) then
        local node = cc.Node:create()
        node:setPosition(cc.p(0, 0))
        node:setName("GoldAniNode" .. index)
        self["_headAniGold" .. localFlyFrom]:addChild(node)
    end
    local aniFatherNode = self["_headAniGold" .. localFlyFrom]:getChildByName("GoldAniNode" .. index)
    aniFatherNode:removeAllChildren()
    aniFatherNode:setPosition(cc.p(0, 0))

    -- 在内圈和外圈 之间 的随机位置
    local function randomPointInCircle(outerRadius, innerRadius)
        innerRadius = innerRadius or 0
        local angle = math.random() * 2 * math.pi -- 生成一个随机的角度
        local r = innerRadius + (outerRadius - innerRadius) * math.sqrt(math.random()) -- 计算随机半径
        local x = r * math.cos(angle) -- 将极坐标转换为直角坐标
        local y = r * math.sin(angle)
        return cc.p(x, y)
    end

    -- 计算距离
    local function calculateDistance(point1, point2)
        local dx = point2.x - point1.x
        local dy = point2.y - point1.y
        local distance = math.sqrt(dx * dx + dy * dy)
        return distance
    end

    -- 获取随机起始帧
    local function getRandomStartTime()
        return math.random(0, 14) / 30
    end

    local completeAniCnt = 0
    for i = 1, goldCnt do
        local moveToPos = randomPointInCircle(goldBoomOuterRadius, goldBoomInerRadius)
        if i < goldCnt / 3 then -- 1/3 金币分布在小圈内，以免看上去特别分散或者特别集中
            moveToPos = randomPointInCircle(goldBoomOuterRadius2, goldBoomInerRadius2)
        end
        local aniNode = CF.SpineManager:playAni(aniFatherNode, spinePath .. "Score/", "skeleton", "animation", true, nil, nil, false)
        if aniNode then
            aniNode:update(getRandomStartTime()) -- 更新开始播放的帧数，传进去是一个时间值
            -- aniNode:setPosition(randomPointInCircle(30))
            aniNode:setPosition(cc.p(0, 0))
            aniNode:setRotation(math.random(0, 180))
            aniNode:runAction(
                cc.Sequence:create(
                    cc.EaseSineOut:create(cc.MoveTo:create(goldBoomMoveTime, moveToPos)), -- 爆的时候，向外移动距离
                    cc.DelayTime:create(goldBoomAfterTime), -- 爆完等待
                    cc.CallFunc:create(
                        function()
                            -- 第二阶段，飞
                            local toNode = self["_headAniGold" .. localFlyTo]
                            local nodePos = toNode:getParent():convertToWorldSpace(cc.p(toNode:getPositionX(), toNode:getPositionY()))
                            local pos = aniNode:getParent():convertToNodeSpace(nodePos)

                            -- 计算一下飞行用的时间，使用第一个金币飞到终点 计算速度，后续使用速度计算时间
                            local aniNodeWorldPosition = aniNode:getParent():convertToWorldSpace(cc.p(aniNode:getPositionX(), aniNode:getPositionY()))
                            local distance = calculateDistance(nodePos, aniNodeWorldPosition)
                            local flyTime = flyGoldFirstTime
                            if i == 1 then
                                flyGoldSpeed = distance / flyGoldFirstTime
                            else
                                flyTime = distance / (flyGoldSpeed == 0 and 1 or flyGoldSpeed)
                            end

                            aniNode:runAction(
                                cc.Sequence:create(
                                    cc.DelayTime:create(i % 10 / 60), -- 等待一下，以免一堆金币 看上去一大坨
                                    cc.Spawn:create( -- 飞的时候同步动画，移动+缩放
                                        cc.EaseSineOut:create(cc.MoveTo:create(flyTime, cc.p(pos.x + math.random(-20, 20), pos.y + math.random(-20, 20)))), -- 移动到终点附近
                                        cc.Sequence:create(cc.DelayTime:create(flyTime * 2 / 3), cc.ScaleTo:create(flyTime * 1 / 3, aniFlyScale)) -- 2/3的时间原大小，1/3的时间缩放到0.5
                                    ),
                                    cc.CallFunc:create(
                                        function()
                                            aniNode:removeFromParent()
                                            completeAniCnt = completeAniCnt + 1
                                            if completeAniCnt == 1 then
                                                local aniNode2
                                                local removeCallback = function()
                                                    aniNode2:delayRemoveFromParent()
                                                end
                                                aniNode2 =
                                                    CF.SpineManager:playAni(
                                                    self["_headAniGoldScore" .. localFlyTo],
                                                    spinePath .. "Score/",
                                                    "zzb_ap_fsgx",
                                                    "animation",
                                                    false,
                                                    removeCallback,
                                                    nil,
                                                    false
                                                )
                                            elseif completeAniCnt == goldCnt then
                                                if callback then
                                                    callback()
                                                end
                                            end
                                        end
                                    )
                                )
                            )
                        end
                    )
                )
            )
        end
    end
    aniFatherNode:setScale(aniInitScale)
    aniFatherNode:runAction(cc.Sequence:create(cc.EaseSineOut:create(cc.ScaleTo:create(aniBoomScaleTime, aniBoomScaleTo))))
    local aniNode3
    local removeCallback2 = function()
        aniNode3:delayRemoveFromParent()
    end
    aniNode3 = CF.SpineManager:playAni(aniFatherNode, spinePath .. "Score/", "zzb_ap_fjbgx", "animation", false, removeCallback2, nil, false)
end

function AnimationLayer:onPlayerReviveState(event)
    local msg = event.msg
    for seat = 0, 3 do
        local localSeat = CF.roomData:seatToLocal(seat)
        self["_imgDie" .. localSeat]:setVisible(false)
        local rechargeFnt = self["_fntRecharge" .. localSeat]
        rechargeFnt:setVisible(false)

        if msg.iState[seat] == CF.GameDefine.tagReviveState.REVIVE_STATE_REVIVE or msg.iState[seat] == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING then
            local stringformat = "充值中(%d秒)"
            if msg.iState[seat] == CF.GameDefine.tagReviveState.REVIVE_STATE_RECHARGING then
                stringformat = "正在充值(%d秒)"
            end
            rechargeFnt:stopAllActions()
            rechargeFnt:setVisible(true)
            local deadTime = msg.deadTime[seat]
            rechargeFnt:setString(string.format(stringformat, deadTime - os.time()))
            rechargeFnt:runAction(
                cc.RepeatForever:create(
                    cc.Sequence:create(
                        cc.DelayTime:create(1),
                        cc.CallFunc:create(
                            function()
                                local time = deadTime - os.time()
                                rechargeFnt:setString(string.format(stringformat, time))
                                if time <= 0 then
                                    rechargeFnt:stopAllActions()
                                    if msg.timeoutCallback then
                                        msg.timeoutCallback()
                                    end
                                end
                            end
                        )
                    )
                )
            )
        elseif msg.iState[seat] == CF.GameDefine.tagReviveState.REVIVE_STATE_DIE then
            self["_imgDie" .. localSeat]:setVisible(true)
        end
    end
end

-- 清除充值倒计时，不清除认输状态
function AnimationLayer:clearRechargeTime()
    for localSeat = 1, 4 do
        self["_fntRecharge" .. localSeat]:setVisible(false)
        self["_fntRecharge" .. localSeat]:stopAllActions()
    end
end

function AnimationLayer:clearTable()
    for localSeat = 1, 4 do
        self["_imgDie" .. localSeat]:setVisible(false)
        self["_posOutSignAni" .. localSeat]:removeAllChildren()
        self["_fntRecharge" .. localSeat]:setVisible(false)
        self["_fntRecharge" .. localSeat]:stopAllActions()
    end
end

function AnimationLayer:delayOnce(time, callback)
    self:runAction(cc.Sequence:create(cc.DelayTime:create(time), cc.CallFunc:create(callback)))
end

function AnimationLayer:onStartShowWinLost()
    self:stopAllAnimation()
end

return AnimationLayer
