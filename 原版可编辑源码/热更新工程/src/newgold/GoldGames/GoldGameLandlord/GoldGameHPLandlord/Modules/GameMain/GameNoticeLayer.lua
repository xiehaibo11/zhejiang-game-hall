local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local ClockAniNode = NG.GAME.gameRequire("Modules.GameMain.ClockAniNode")
local GameNoticeLayer = NG.GAME.gameClass("GameNoticeLayer", NG.ViewBase)
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

local SpineAniRootPath = "NewGoldRes/Spine/HPLandlord/GameMain/"
local ActionResNameConf = {
    [GameMainDefine.ActionType.CALL_LANDLORD] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_y_jdz.png"}},
    [GameMainDefine.ActionType.NOT_CALL_LANDLORD] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_b_bj.png"}},
    [GameMainDefine.ActionType.ROB_LANDLORD] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_y_qdz.png"}},
    [GameMainDefine.ActionType.NOT_ROB_LANDLORD] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_b_bq.png"}},
    [GameMainDefine.ActionType.ADD_DOUBLE] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_y_jb.png"}},
    [GameMainDefine.ActionType.NOT_ADD_DOUBLE] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_b_bjb.png"}},
    [GameMainDefine.ActionType.SUPER_ADD_DOUBLE] = {ResType = "SpineAni", ResInfo = {path = SpineAniRootPath, tex = "Hp_cjjb.json", ske = "Hp_cjjb.atlas", armatureName = "animation"}},
    [GameMainDefine.ActionType.NOT_OUT] = {ResType = "Plist", ResInfo = {PngName =  "ng_hp_gamemain_txt_b_bc.png"}},
}
local CardTypeAniConf = {
    --炸弹
    [GameMainDefine.CardType.CTID_SI_ZHANG..""] = {path = SpineAniRootPath, tex = "Px_zhadan.json", ske = "Px_zhadan.atlas"},
    --飞机带翅膀
    [GameMainDefine.CardType.CTID_FEI_JI..""] = {path = SpineAniRootPath, tex = "Px_feiji02.json", ske = "Px_feiji02.atlas"},
    --飞机
    [GameMainDefine.CardType.CTID_SAN_SHUN..""] = {path = SpineAniRootPath, tex = "Px_feiji01.json", ske = "Px_feiji01.atlas"},
    --火箭
    [GameMainDefine.CardType.CTID_HUO_JIAN..""] = {path = SpineAniRootPath, tex = "Px_wangzha.json", ske = "Px_wangzha.atlas"},
    --2连玄武现世
    [GameMainDefine.CardType.CTID_SI_SHUN.."_2"] = {path = SpineAniRootPath, tex = "Px_2l.json", ske = "Px_2l.atlas"},
    --3连虎啸山林
    [GameMainDefine.CardType.CTID_SI_SHUN.."_3"] = {path = SpineAniRootPath, tex = "Px_3l.json", ske = "Px_3l.atlas"},
    --4连火凤燎原
    [GameMainDefine.CardType.CTID_SI_SHUN.."_4"] = {path = SpineAniRootPath, tex = "Px_4l.json", ske = "Px_4l.atlas"},
    --5连飞龙在天
    [GameMainDefine.CardType.CTID_SI_SHUN.."_5"] = {path = SpineAniRootPath, tex = "Px_5l.json", ske = "Px_5l.atlas"},
}
local PlistPath = "cocosStudio/GoldNew/Game/HPLandlord/Image/GameMain/GameMain.plist"

function GameNoticeLayer:ctor()
    GameNoticeLayer.super.ctor(self)

    self:initView()
end

function GameNoticeLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/HPLandlord/CSB/GameMain/GameNoticeLayer.csb"
end

function GameNoticeLayer:getBindingInfo()
    return {
        ["_KW_NODE_NORMAL_NOTICE_"] = {varName = "_normalNoticeNode", beginIndex = 1, endIndex = 3},
        ["_KW_NODE_CENTER"] = {varName = "_centerNode"},
        ["_KW_TEXT_FLY_EFFECT"] = {varName = "_KW_TEXT_FLY_EFFECT"},
        ["_KW_ANI_FLY_EFFECT"] = {varName = "_KW_ANI_FLY_EFFECT"},
        ["_KW_NODE_ON_SELF_CARD"] = {varName = "_KW_NODE_ON_SELF_CARD"},
        ["_KW_PANEL_BG"] = {varName = "_KW_PANEL_BG"},
    }
end

function GameNoticeLayer:getProxyEvents()
    return {
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER_INFO", callBack = "onPowerInfo"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_POWER", callBack = "onPower"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_PLAY_CARD", callBack = "onPlayCard"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_CLOCK", callBack = "onClock"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_RESET_TABLE", callBack = "onResetTable"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameResult"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_TAKE_FIRST", callBack = "onTakeFirst"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_SHOW_CARDTYPE_WAIT", callBack = "onShowCardTypeWait"},
        {module = NG.goldGame:getModule("GameMain"), eventKeyName = "EVENT_OUT_CARDS", callBack = "onOutCards"},
        
    }
end

function GameNoticeLayer:initView()

end

local ClockNodeName = "ClockNodeName"
function GameNoticeLayer:clearClock(localSeat)
    if not self["_normalNoticeNode"..localSeat] then
        return
    end
    self["_normalNoticeNode"..localSeat]:removeChildByName(ClockNodeName)
end

function GameNoticeLayer:showClock(localSeat, time, callBack)
    self:clearAllNotice(localSeat)
    if not self["_normalNoticeNode"..localSeat] then
        return
    end
    local node = ClockAniNode.create(time, self["_normalNoticeNode"..localSeat], callBack)
    node:setName(ClockNodeName)
end

local ActionImgName = "ActionImgName"
local ActionAniName = "ActionAniName"
function GameNoticeLayer:showActionNotice(localSeat, actionType)
    self:clearAllNotice(localSeat)
    if not actionType or not self["_normalNoticeNode"..localSeat] then
        return
    end
    local resConf = ActionResNameConf[actionType]
    if not resConf then
        return
    end
    if resConf.ResType == "Plist" then
        cc.SpriteFrameCache:getInstance():addSpriteFrames(PlistPath)
        local actionImg = ccui.ImageView:create()
        actionImg:loadTexture(resConf.ResInfo.PngName, ccui.TextureResType.plistType)
        actionImg:setAnchorPoint(cc.p(0.5, 0.5))
        actionImg:setName(ActionImgName)
        actionImg:setScale(1.5)
        self["_normalNoticeNode"..localSeat]:addChild(actionImg)
    elseif resConf.ResType == "SpineAni" then
        local spineNode = NG.UITool.playDargonBonesSpine(resConf.ResInfo.path, resConf.ResInfo.tex, resConf.ResInfo.ske, resConf.ResInfo.armatureName, false)
        if spineNode then
            spineNode:setName(ActionAniName)
            spineNode:setScale(2.16)
            self["_normalNoticeNode"..localSeat]:addChild(spineNode)
        end
    end
end

function GameNoticeLayer:clearActionNotice(localSeat)
    if not self["_normalNoticeNode"..localSeat] then
        return
    end
    self["_normalNoticeNode"..localSeat]:removeChildByName(ActionImgName)
    self["_normalNoticeNode"..localSeat]:removeChildByName(ActionAniName)
end

function GameNoticeLayer:clearAllNotice(localSeat)
    if not self["_normalNoticeNode"..localSeat] then
        return
    end
    self["_normalNoticeNode"..localSeat]:removeAllChildren()
end

function GameNoticeLayer:onPowerInfo(event)
    local localSeat = event.msg.localSeat
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local gameStep = gameData:getGameStep()
    local power = event.msg.power
    if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_BANKER then
        if power == GameMainDefine.ENUM_CALL_BANKER.PID_CB_NOT_CALL then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.NOT_CALL_LANDLORD)
            self:playEffect(localSeat, GoldSoundConfig.otherNoOrder)
        elseif power == GameMainDefine.ENUM_CALL_BANKER.PID_CB_CALL_BANKER then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.CALL_LANDLORD)
            self:playEffect(localSeat, GoldSoundConfig.otherOrder)
        end
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_ROB_BANKER then
        if power == GameMainDefine.ENUM_ROB_BANKER.PID_RB_NOT_ROB then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.NOT_ROB_LANDLORD)
            self:playEffect(localSeat, GoldSoundConfig.otherNoRob)
        elseif power == GameMainDefine.ENUM_ROB_BANKER.PID_RB_ROB_BANKER then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.ROB_LANDLORD)
            self:playEffect(localSeat, GoldSoundConfig.otherRob)
        end
    elseif gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_CALL_DOUBLE then
        if power == GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NOT_DOUBLE then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.NOT_ADD_DOUBLE)
            self:playEffect(localSeat, GoldSoundConfig.otherBujiabei)
        elseif power == GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_NORMAL_DOUBLE then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.ADD_DOUBLE)
            self:playEffect(localSeat, GoldSoundConfig.otherJiabei)
        elseif power == GameMainDefine.ENUM_ADD_DOUBLE.PID_CD_SUPER_DOUBLE then
            self:showActionNotice(localSeat, GameMainDefine.ActionType.SUPER_ADD_DOUBLE)
            self:playEffect(localSeat, GoldSoundConfig.otherChaojijiabei)
        end
    end
end

function GameNoticeLayer:playEffect(localSeat, type)
    -- if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
    NG.soundManager:playOtherEffect(type)
    -- end
end

function GameNoticeLayer:onPower(event)
    local localSeat = event.msg.localSeat
    self:clearActionNotice(localSeat)
    self:clearSelfNoBig()
    
    if localSeat == GameMainDefine.SELF_LOCAL_SEAT then
        local gameData = NG.goldGame:getModule("GameMain"):getData()
        local tipData = gameData:getTipData()
        local prePlayerSeat = gameData:getPrePlayerSeat()
        local nowPlayerSeat = gameData:getNowPlayerSeat()
        local gameStep = gameData:getGameStep()
        if gameStep == GameMainDefine.ENUM_GAME_STEP.GAME_STEP_PLAY_CARD 
        and prePlayerSeat ~= nowPlayerSeat 
        and (not tipData or not tipData.tipArr or #tipData.tipArr <= 0) then
            self:showSelfNoBig()
        end
    end
end

local NoBigImgName = "NoBigImgName"
function GameNoticeLayer:showSelfNoBig()
    self:clearSelfNoBig()
    cc.SpriteFrameCache:getInstance():addSpriteFrames(PlistPath)
    local actionImg = ccui.ImageView:create()
    actionImg:loadTexture("ng_hp_gamemain_txt_meiyoudaguoshangjia.png", ccui.TextureResType.plistType)
    actionImg:setAnchorPoint(cc.p(0.5, 0.5))
    actionImg:setName(NoBigImgName)
    self._KW_NODE_ON_SELF_CARD:addChild(actionImg)
end

function GameNoticeLayer:clearSelfNoBig()
    self._KW_NODE_ON_SELF_CARD:removeChildByName(NoBigImgName)
end

function GameNoticeLayer:onPlayCard(event)
    local localSeat = event.msg.localSeat
    self:clearAllNotice(localSeat)

    local gameData = NG.goldGame:getModule("GameMain"):getData()
    for i = 1, GameMainDefine.MAX_PLAYER do
        if gameData:getPassState(i) then
            self:showActionNotice(i, GameMainDefine.ActionType.NOT_OUT)
        end
    end

    local outCards = gameData:getOutCards(localSeat)
    local preLocalSeat = gameData:getPrePlayCardSeat()
    if preLocalSeat == -1 then --首出的时候需要特殊处理
        preLocalSeat = localSeat
    end
    self:showCardTypeAni(localSeat, outCards.nTypeID, outCards.nCards, preLocalSeat)
end

function GameNoticeLayer:onOutCards(event)
    local localSeat = event.msg.localSeat
    self:clearAllNotice(localSeat)

    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local outCards = gameData:getOutCards(localSeat)
    if #outCards.nCards <= 0 then
        self:showActionNotice(localSeat, GameMainDefine.ActionType.NOT_OUT)
    end
end

local CardTypeAniName = "CardTypeAniName"
function GameNoticeLayer:clearCardTypeAni()
    self._centerNode:removeChildByName(CardTypeAniName)
end

function GameNoticeLayer:showCardTypeAni(fromSeat, cardType, cards, toSeat)
    self:clearCardTypeAni()
    local aniConfKey = tostring(cardType)
    if cardType == GameMainDefine.CardType.CTID_SI_SHUN then
        aniConfKey = aniConfKey .. "_" .. (#cards / 4)
    end
    local aniConf = CardTypeAniConf[aniConfKey]
    if not aniConf then
        -- 无需播放动画则直接告诉服务进行下一操作
        NG.msgManager:sendMsgEndWait()
       return 
    end
    local armatureName = "animation"
    local aniParentNode = self._centerNode
    local isPlayBeiAni = false --是否播放倍数动画
    if cardType == GameMainDefine.CardType.CTID_SI_ZHANG then
        armatureName = "animation"
        aniParentNode = self["_normalNoticeNode"..toSeat]
        isPlayBeiAni = true
    elseif cardType == GameMainDefine.CardType.CTID_FEI_JI then
        if fromSeat == 3 then
            armatureName = "animation3"
        elseif fromSeat == 1 then
            armatureName = "animation2"
        else
            armatureName = "animation1"
        end
    elseif cardType == GameMainDefine.CardType.CTID_SAN_SHUN then
        if fromSeat == 3 then
            armatureName = "animation3"
        elseif fromSeat == 1 then
            armatureName = "animation2"
        else
            armatureName = "animation1"
        end
    elseif cardType == GameMainDefine.CardType.CTID_HUO_JIAN then
        if fromSeat == 2 then
            armatureName = "animation2"
            self:clearHuoJianWait()
        else
            armatureName = "animation3"
        end
        isPlayBeiAni = true
    elseif cardType == GameMainDefine.CardType.CTID_SI_SHUN then
        armatureName = "animation"
        isPlayBeiAni = true
        self._KW_PANEL_BG:setVisible(true)
    end

    local spineNode = NG.UITool.playDargonBonesSpine(aniConf.path, aniConf.tex, aniConf.ske, armatureName, false)
    if spineNode and aniParentNode then
        spineNode:setName(CardTypeAniName)
        spineNode:setScale(1.44)
        aniParentNode:addChild(spineNode)
        -- 播放加倍动画
        if isPlayBeiAni then
            NG.SysTool.performDelayOnce(function()
                if self.onMultDataByBomb ~= nil then
                    self:onMultDataByBomb()
                end
            end, 1)
        end
    end

    local spineNode = sp.SkeletonAnimation:create(aniConf.path .. aniConf.tex, aniConf.path .. aniConf.ske, 1)
    if spineNode then
        aniParentNode:addChild(spineNode)
        spineNode:setName(CardTypeAniName)
        spineNode:setScale(1.44)
        spineNode:setAnimation(0, armatureName, false)
        spineNode:registerSpineEventHandler(function(event)
            self._KW_PANEL_BG:setVisible(false)
            NG.msgManager:sendMsgEndWait()
            -- if cardType == GameMainDefine.CardType.CTID_FEI_JI 
            -- or cardType == GameMainDefine.CardType.CTID_SAN_SHUN then
            --     NG.msgManager:sendMsgEndWait()
            -- end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
end

function GameNoticeLayer:onShowCardTypeWait(event)
    print("onShowCardTypeWait:"..event.msg.cardType)
    if event.msg.cardType == GameMainDefine.CardType.CTID_HUO_JIAN then
        self:showHuoJianWait()
    else
        self:clearHuoJianWait()
    end
end

--显示火箭-等待状态
local HuoJianWaitAniName = "HuoJianWaitAniName"
function GameNoticeLayer:showHuoJianWait()
    self:clearHuoJianWait()
    local spineNode = NG.UITool.playDargonBonesSpine("NewGoldRes/Spine/HPLandlord/GameMain/", "Px_wangzha.json", "Px_wangzha.atlas", "animation1", true)
    if spineNode then
        spineNode:setName(HuoJianWaitAniName)
        spineNode:setScale(2)
        spineNode:setPositionY(-80)
        self._centerNode:addChild(spineNode)
    end
end

function GameNoticeLayer:clearHuoJianWait()
    self._centerNode:removeChildByName(HuoJianWaitAniName)
end

-- 播放加倍的动画
function GameNoticeLayer:onMultDataByBomb()
    self._KW_TEXT_FLY_EFFECT:setString("x" .. NG.goldGame:getModule("GameMain"):getData():getBoomMult())
    self._KW_TEXT_FLY_EFFECT:setScale(2)
    self._KW_TEXT_FLY_EFFECT:setVisible(true)
    local actSequence = cc.Sequence:create(cc.ScaleTo:create(0.1, 0.66), cc.ScaleTo:create(0.13, 1), cc.DelayTime:create(1), cc.FadeOut:create(0.1), cc.CallFunc:create(function()
        self._KW_TEXT_FLY_EFFECT:setVisible(false)
        self._KW_TEXT_FLY_EFFECT:setOpacity(255)
        self._KW_ANI_FLY_EFFECT:setVisible(true)
        -- 加倍动画
        self._KW_ANI_FLY_EFFECT:removeAllChildren()
        local params = {path = "NewGoldRes/Spine/HPLandlord/GameMain/", tex = "Shuzi.json", ske = "Shuzi.atlas", armatureName = "animation"}
        local spineNode = display.playDargonBonesSpine(params)
        if spineNode then
            self._KW_ANI_FLY_EFFECT:addChild(spineNode)
        end
        local actSequence2 = cc.Sequence:create(cc.DelayTime:create(0.4), cc.CallFunc:create(function()
            self._KW_ANI_FLY_EFFECT:setVisible(false)
            NG.soundManager:playNormalEffect(GoldSoundConfig.mult)
        end))
        self._KW_ANI_FLY_EFFECT:runAction(actSequence2)
    end))
    self._KW_TEXT_FLY_EFFECT:runAction(actSequence)
end

function GameNoticeLayer:onClock(event)
    local localSeat = event.msg.localSeat
    if localSeat ~= GameMainDefine.SELF_LOCAL_SEAT then
        self:showClock(localSeat, event.msg.time)
        self:clearSelfNoBig()
    end
end

function GameNoticeLayer:clearAll()
    for localSeat = 1, GameMainDefine.MAX_PLAYER do
        self:clearAllNotice(localSeat)
        self:clearClock(localSeat)
    end
    self._centerNode:removeAllChildren()
    self:clearHuoJianWait()
end

function GameNoticeLayer:onResetTable()
    self:clearAll()
end

local ChunTianAniInfo = {path = SpineAniRootPath, tex = "Px_chuntian.json", ske = "Px_chuntian.atlas", armatureName = "animation"}
function GameNoticeLayer:showChunTianAni()
    local spineNode = sp.SkeletonAnimation:create(ChunTianAniInfo.path .. ChunTianAniInfo.tex, ChunTianAniInfo.path .. ChunTianAniInfo.ske, 1)
    if spineNode then
        self._centerNode:addChild(spineNode)
        spineNode:setScale(1.44)
        spineNode:setAnimation(0, ChunTianAniInfo.armatureName, false)
        spineNode:registerSpineEventHandler(function(event)
            spineNode:setVisible(false)
            NG.goldGame:showWinlost(true)
        end, sp.EventType.ANIMATION_COMPLETE)
    end
end

local WinLostAniInfo = {path = SpineAniRootPath, tex = "Hp_slsb.json", ske = "Hp_slsb.atlas"}
function GameNoticeLayer:showWinLostAni()
    local isWin = false
    local isBanker = false
    local selfSeat = NG.GAME.roomTableData:getSelfSeat()
    local gameData = NG.goldGame:getModule("GameMain"):getData()
    local resultData = gameData:getResult()
    if resultData and resultData.nResult and resultData.nResult[selfSeat + 1] == 1 then
        isWin = true
    end
    if gameData:getBankerSeat() == GameMainDefine.SELF_LOCAL_SEAT then
        isBanker = true
    end

    local aniName = "animation1_1"
    if isBanker and isWin then
        aniName = "animation1_1"
    elseif isBanker and not isWin then
        aniName = "animation1_2"
    elseif not isBanker and isWin then
        aniName = "animation2_1"
    elseif not isBanker and not isWin then
        aniName = "animation2_2"
    end

    local spineNode = sp.SkeletonAnimation:create(WinLostAniInfo.path .. WinLostAniInfo.tex, WinLostAniInfo.path .. WinLostAniInfo.ske, 1)
    if spineNode then
        self._centerNode:addChild(spineNode)
        spineNode:setScale(1.44)
        spineNode:setAnimation(0, aniName, false)
        spineNode:registerSpineEventHandler(function(event)
            spineNode:setVisible(false)
            local gameData = NG.goldGame:getModule("GameMain"):getData()
            local chunTianMult = gameData:getChunTianMult()
            if chunTianMult == 0 then
                NG.goldGame:showWinlost(true)
            else
                self:showChunTianAni()
                NG.soundManager:playNormalEffect(GoldSoundConfig.spring)
                NG.goldGame:getModule("GameMain"):updateMultSingle()
            end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
end

function GameNoticeLayer:onGameResult()
    self:clearAll()
    self:showWinLostAni()
end

function GameNoticeLayer:onTakeFirst()
    self:clearAll()
end

return GameNoticeLayer