--麻将掷骰子、吃碰杠听胡等动画
local AnimationLayer = NG.GAME.gameClass("AnimationLayer", NG.ViewBase)

local convertTpyeList = {} --actionid 转powerid
convertTpyeList[NG.GAME.GameDefine.COMB_FLAG.CHOW] = NG.GAME.GameDefine.POWER.CHOW
convertTpyeList[NG.GAME.GameDefine.COMB_FLAG.PUNG] = NG.GAME.GameDefine.POWER.PUNG
convertTpyeList[NG.GAME.GameDefine.COMB_FLAG.MKONG] = NG.GAME.GameDefine.POWER.MKONG
convertTpyeList[NG.GAME.GameDefine.COMB_FLAG.TKONG] = NG.GAME.GameDefine.POWER.TKONG
convertTpyeList[NG.GAME.GameDefine.COMB_FLAG.CKONG] = NG.GAME.GameDefine.POWER.CKONG
convertTpyeList[NG.GAME.GameDefine.POWER.HU] = NG.GAME.GameDefine.POWER.HU
local MAH_ACTION_MAP = {} --powerid 和 动画名字对应表
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.CHOW] = "chi" --吃
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.PUNG] = "peng" --碰
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.MKONG] = "gang" -- 明杠
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.TKONG] = "gang" -- 补杠
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.CKONG] = "angang"    --暗杠
MAH_ACTION_MAP[NG.GAME.GameDefine.POWER.HU] = "hu"    --胡
--以下是没有对应起来的动画名字
--"ruanbao" --软报
--"yingbao" --硬报
--"menhu"   --闷胡
--"tianting" --天听
local MAHJONG_ANI_PATH = "animation/Mahjong/Base/" --麻将动画文件路径
local POS_SHAI_ZI = {} --key值代表骰子数，value代表骰子位置
POS_SHAI_ZI[1] = { cc.p(-145, 290) }
POS_SHAI_ZI[2] = { cc.p(-200, 290), cc.p(-90, 290) }
--设置界面，UI下标为1是闪光的那套动画,没有下划线，UI下标为2的是_1的那套动画,以此类推
local SETTING_UI_INDEX_MAP = {[1] = nil, [2] = 1, [3] = 2, [4] = 3, [5] = 4, [6] = 5, [7] = 6, [8] = 7, [9] = 8, [10] = 9,}

local DA_HU = {
    [3001] = { "Qixinglianzhu" }, [3002] = { "wushuangdui" }, [3003] = { "Jiulianbaodeng" }, [3004] = { "Shisanyao" }, [3005] = { "Shuanglongxizhu" }, [3006] = { "Tianhu" }, [3007] = { "Jiangqixing" }, [3008] = { "Yizhibaiwan" },

    [3015] = { "caidingsifang" }, [3017] = { "caiyuangungun" }, [3020] = { "dasanyuan" }, [3014] = { "dasixi" }, [3009] = { "dihu" }, [3013] = { "hainabaichuan" },
    [3026] = { "heiyise" }, [3022] = { "hongkongque" }, [3011] = { "huangjinbaiwan" }, [3021] = { "jiangdui" }, [3027] = { "xiaosixi" }, [3016] = { "xibeiwanjun" },
    [3010] = { "jiuwuzhizun" }, [3018] = { "kongquedongnanfei" }, [3023] = { "lvyise" }, [3025] = { "qingqidui" }, [3012] = { "wanguanzhicai" }, [3024] = { "shiquanshimei" },
    [3019] = { "zhengzhonghongxin" }
}

function AnimationLayer:ctor(param)
    param = param or {}
    AnimationLayer.super.ctor(self, param)
    self._gameMahAnimationCfg = nil
    self._chipsList = {}
    self._isStartChipAni = false
    self._kungScoreNode = {}
    self._bankrupNode = {}
    self._bankrupTime = {}
    self._topAniNode = cc.Node:create()
    self._topAniNode:setPosition(display.cx, display.cy)
    self:addChild(self._topAniNode, 999)
    self:initBankrupNode()
    self:initKungScoreNode()
    self:initData()
end

function AnimationLayer:getCSBPath()
    return "cocosStudio/GoldNew/Game/MahXueLiu/CSB/GameMain/MahjongAniLayer.csb"
end

function AnimationLayer:getBindingInfo()
    return {
        ["_KW_ROOT_PANEL"] = { varName = "_panelRoot", onTouchEnded = "onBgClick" },
        ["_KW_PANEL_SHUFFLE_ANI_POS"] = { varName = "_panelShuffleAniPos" },
        ["_KW_IMG_SHUFFLE_PLAYER"] = { varName = "_imgShufflePlayerBg" },
        ["_KW_TXT_SHFFULE_PLAYER"] = { varName = "_txtshufflePlayers" },
        ["_KW_PANEL_BG"] = { varName = "_BG" },
        ["_KW_PLAYER_HEAD_"] = { varName = "_posPlayerHead_", beginIndex = 1, endIndex = 4 },
        ["_KW_PANEL_SHAI_ZI_"] = { varName = "_panelShaiZi_", beginIndex = 1, endIndex = 2 },
        ["_KW_KUNG_SCORE_"] = { varName = "_panelKungScore_", beginIndex = 1, endIndex = 4 },
        ["_KW_BANKRUP_STATE_"] = { varName = "_panelBankrup_", beginIndex = 1, endIndex = 4 },
    }
end

function AnimationLayer:getProxyEvents()
    return {
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_CHIPS", callBack = "onShowChipsEvent" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION_ANIMATION", callBack = "onShowMahAcitonAni" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_PLAY_CAISHEN", callBack = "playGodOfWealthAnimation" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SPECIAL_HU_ANI", callBack = "playSpecialHuAnimation" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_SHOW_KUNG_SCORE_ANI", callBack = "onShowKungScoreAni" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_HU_FANIDS", callBack = "onEventHu" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_GAME_START_CHANGE", callBack = "onGameStart" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"), eventKeyName = "EVENT_ON_MSG_RESULT", callBack = "onGameEnd" },
        { module = NG.goldGame:getModule("GameMain.MahLayer"):getGameData(), eventKeyName = "EVENT_BANKRUP", callBack = "onEventBankrupState" },
        { module = NG.goldLobby:getModule("GoldCommon"), eventKeyName = "KW_NOTIFY_JOIN_MATCH_SUCCESS", callBack = "onEventClearAll" },
    }
end

function AnimationLayer:initData()
    -- local GameMahAnimationConfiger = NG.GAME.gameRequire("Modules.GameMain.BasicMahjong.Config.Parse.GameMahAnimationConfiger").new()
    -- self._gameMahAnimationCfg = GameMahAnimationConfiger:getMahAnimationCfg()


    self._gameMahAnimationCfg = {
        ["cardtype_ani"] = { ConfID = 1, AnimationDescription = "吃碰杠胡动画", DirName = "cardtype_ani", JsonName = "cardtype_ani", AniNameList = { "chi", "peng", "hu", "gang", "angang", "ruanbao", "yingbao", "menhu", "tianting" }    },
        ["saizi_ani"] = { ConfID = 2, AnimationDescription = "骰子动画", DirName = "saizi_ani", JsonName = "saizi_ani", AniNameList = { "loop", "1", "2", "3", "4", "5", "6" }    },
        ["caishen_ani"] = { ConfID = 3, AnimationDescription = "飘财动画", DirName = "caishen_ani", JsonName = "caishen_ani", AniNameList = { "caishen_ani" }    }
    }
end

function AnimationLayer:onShowChipsEvent(event)
    local tChips = event.data
    table.insert(self._chipsList, tChips)
    self:showChip()
end

function AnimationLayer:onShowMahAcitonAni(event)
    local localSeat = event.data.localSeat
    local actionID = event.data.actionID
    local bZiMo = event.data.bZiMo
    local aniName = {
        [NG.GAME.GameDefine.COMB_FLAG.CKONG] = "Fengtiaoyushun",
        [NG.GAME.GameDefine.COMB_FLAG.TKONG] = "guafeng",
    }
    if aniName[actionID] and not event.data.msgData.laizi then
        local aniNode = self:createSpine(aniName[actionID], "animation", false, true)
        self["_posPlayerHead_" .. localSeat]:addChild(aniNode)
        return
    end
    self:playMahActionAnimation(localSeat, actionID, bZiMo)
end

function AnimationLayer:showChip()
    -- if not CF.game then
    --     return
    -- end
    if #self._chipsList == 0 then
        NG.goldGame:getModule("GameMain.MahLayer"):sendEventChipsAniFinish()
        return
    end
    if self._isStartChipAni then
        return
    end
    NG.soundManager:playSoundChip()
    if not NG.GAME.settingData:getIsMahlayer3D() then
        self:playShaiZiAnimation(self._chipsList[1])
    else
        self:playShaiZiAnimation3D(self._chipsList[1])
    end
end

--play骰子抛下来转动的动画
function AnimationLayer:playShaiZiAnimation()
    local shaiziAniCfg = self._gameMahAnimationCfg.saizi_ani
    if not shaiziAniCfg then
        return
    end
    self._isStartChipAni = true
    local exportJsonName = shaiziAniCfg.JsonName
    local exportDirName = shaiziAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    local aniNameList = shaiziAniCfg.AniNameList
    local aniName = aniNameList[1] --第一个是抛骰子动画， 2-7 是骰子1-6点的动画
    local chipsCount = #self._chipsList[1]
    for i = 1, chipsCount do
        NG.UITool.playJsonAnimationByName(self["_panelShaiZi_" .. i], exportJsonName, exportJsonFilePath, -1, aniName, POS_SHAI_ZI[chipsCount][i])
    end
    local fun = cc.CallFunc:create(function()
        for i = 1, chipsCount do
            if not self["_panelShaiZi_" .. i] then
                return
            end
            self["_panelShaiZi_" .. i]:removeAllChildren()
        end
        self:playShaiZiAniFixedByChip(self._chipsList[1])
    end)
    self._panelRoot:stopAllActions()
    self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), fun))
end

--play骰子固定下来的动画
function AnimationLayer:playShaiZiAniFixedByChip(chips)
    local shaiziAniCfg = self._gameMahAnimationCfg.saizi_ani
    if not shaiziAniCfg then
        return
    end
    local exportJsonName = shaiziAniCfg.JsonName
    local exportDirName = shaiziAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    local aniNameList = shaiziAniCfg.AniNameList

    for i = 1, #chips do
        local aniName = aniNameList[chips[i] + 1]
        NG.UITool.playJsonAnimationByName(self["_panelShaiZi_" .. i], exportJsonName, exportJsonFilePath, -1, aniName, POS_SHAI_ZI[#chips][i])
    end

    local fun = cc.CallFunc:create(function()
        for i = 1, #chips do
            if not self["_panelShaiZi_" .. i] then
                return
            end
            self["_panelShaiZi_" .. i]:removeAllChildren()
        end
        table.remove(self._chipsList, 1)
        self._isStartChipAni = false
        --播放队列里的骰子动画
        self:showChip()
    end)
    --延时消失骰子
    self._panelRoot:stopAllActions()
    self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(0.7), fun))
end

--play 骰子滚动的3D动画
function AnimationLayer:playShaiZiAnimation3D(tChips)
    NG.goldGame:getModule("GameMain.MahLayer"):showChips3D(tChips)
end


function AnimationLayer:onEventHu(event)
    local msg = event.msg
    local localSeat = NG.GAME.roomTableData:seatToLocal(msg.nSeat)
    local huId = msg.nFanIds[1] or 4000
    local huNode = self:getHuAniNode(huId)

    local parent = self["_posPlayerHead_" .. localSeat]
    if DA_HU[huId] then
        parent = self._topAniNode
    end
    parent:addChild(huNode)
    -- NG.soundManager:playSoundMahAction("hu_2", false)
    self:performWithDelay(function()
        if tolua.isnull(huNode) then
            return
        end
        huNode:removeFromParent()
    end, 3)
end

--play吃碰杠胡的动画
function AnimationLayer:playMahActionAnimation(localSeat, actionID, bZiMo)
    local powerid = convertTpyeList[actionID]
    if not powerid then
        return
    end
    local aniName = MAH_ACTION_MAP[powerid]
    if not aniName then
        return
    end
    local cardtypeAniCfg = self._gameMahAnimationCfg.cardtype_ani
    if not cardtypeAniCfg then
        return
    end

    local outEffect = NG.GAME.settingData:getOutEffects()
    if NG.GAME.settingData:getIsMahlayer3D() then
        outEffect = NG.GAME.settingData:getOutEffectStyle()
    end
    --aniIndex 指定使用哪套动画，用下划线+数字表示(如chi_1, peng_1)
    local aniIndex = SETTING_UI_INDEX_MAP[outEffect]
    if aniIndex and aniIndex > 0 then
        aniName = aniName .. "_" .. aniIndex
    end

    --自摸动画
    if powerid == NG.GAME.GameDefine.POWER.HU and bZiMo then
        aniName = "zimo"
    end
    local exportJsonName = cardtypeAniCfg.JsonName
    local exportDirName = cardtypeAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    local currMahCfg = NG.GAME.settingData:getDefaultData(nil, true)
    local aninScale = currMahCfg.mahOutEffectsSize or 1
    local time = 0.9
    if NG.GAME.GameDefine.POWER.HU == powerid then
        local huNode = self:getHuAniNode(4000)
        self["_posPlayerHead_" .. localSeat]:addChild(huNode)
        time = 2
    else
        --if not (NG.GAME.GameDefine.POWER.HU == powerid and NG.GAME.configData:useSpecialHuAni()) then
        NG.UITool.playJsonAnimationByName(self["_posPlayerHead_" .. localSeat], exportJsonName, exportJsonFilePath, -1, aniName, nil, nil, nil, aninScale)
        -- end
    end
    self:performWithDelay(function()
        if not self["_posPlayerHead_" .. localSeat] then
            return
        end
        self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    end, time)
end

--根据胡牌类型播放特殊胡牌动画
function AnimationLayer:playSpecialHuAnimation(event)
    local fanNames = event.msg.fanNames or ""
    local seat = event.msg.seat
    local gameid = event.msg.gameid
    local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
    local specialHuGLConfig = NG.GAME.gameRequire("Modules.GameMain.BasicMahjong.Config.SpecialHuGLConfig"):new()
    local picAni, txtSize = specialHuGLConfig:getImageByFanNames(fanNames, gameid)
    local maxScale = 3.25 - 0.25 * txtSize

    if picAni then
        picAni:setGlobalZOrder(999)
        local nodeParent = self["_posPlayerHead_" .. localSeat]:clone()
        nodeParent:setName("_posPlayerHead_" .. localSeat .. "cloneForAni")
        if txtSize > 4 then
            nodeParent:setScale(1.5 - 0.125 * txtSize)
        end
        self["_posPlayerHead_" .. localSeat]:getParent():addChild(nodeParent)
        nodeParent:addChild(picAni)
        local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
        MahLogic.playGLActionAni(picAni, function()
            if picAni then
                picAni:removeFromParent()
            end
            if nodeParent then
                nodeParent:removeFromParent()
            end
        end, maxScale)
    end
end

--飘财动画
function AnimationLayer:playGodOfWealthAnimation(msg)
    local localSeat = NG.GAME.roomTableData:seatToLocal(msg.data.seat)

    local aniName = "hu"

    local godOfWealthAniCfg = self._gameMahAnimationCfg.caishen_ani
    if not godOfWealthAniCfg then
        return
    end
    local exportJsonName = godOfWealthAniCfg.JsonName
    local exportDirName = godOfWealthAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    NG.UITool.playJsonAnimationByName(self["_posPlayerHead_" .. localSeat], exportJsonName, exportJsonFilePath, -1, aniName, nil, nil, function()
        if not self["_posPlayerHead_" .. localSeat] then
            return
        end
        self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    end)
end

function AnimationLayer:getAnimationIndex(index)
    return SETTING_UI_INDEX_MAP[index]
end

--低级动画
function AnimationLayer:getHuAniNode(huId)
    if DA_HU[huId] then
        return self:getBigHuEffectNode(DA_HU[huId][1])
    end
    NG.soundManager:playNewEffect("hu_flash_card")
    local node = cc.Node:create()
    local params = { path = "NewGoldRes/Spine/MahXueLiu/", tex = "putwenzi.json", ske = "putwenzi.atlas", armatureName = "animation", loop = false }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        spineNode:setScale(1)
        spineNode:setPosition(0, 0)
        node:addChild(spineNode)
    end

    -- local path = {
    --     "NewGoldRes/Image/MahXueLiu/ani/hu/drer.png",
    -- -- "NewGoldRes/Image/MahXueLiu/ani/hu/title_yssts.png",
    -- -- "NewGoldRes/Image/MahXueLiu/ani/hu/title_yzbw.png"
    -- }
    local img = ccui.ImageView:create()
    img:loadTexture("NewGoldRes/Image/MahXueLiu/ani/hu/" .. huId .. ".png", ccui.TextureResType.localType)
    -- img:setPosition(960, 540)
    node:addChild(img)
    local perTime = 1 / 24;
    local params = { { 5, 0.8 }, { 7, 2 }, { 27, 2 }, { 7, 0.8 } }
    img:setScale(2)
    img:runAction(cc.Sequence:create(
    -- cc.Hide:create(),
    -- cc.DelayTime:create(5*perTime),
    -- cc.Show:create(),
    cc.ScaleTo:create(params[1][1] * perTime, params[1][2]),
    cc.EaseBackOut:create(cc.ScaleTo:create(params[2][1] * perTime, params[2][2])),
    cc.DelayTime:create(params[3][1] * perTime),
    --    cc.EaseBackInOut:create(cc.ScaleTo:create(params[3][1]*perTime, params[3][2])), 
    cc.EaseBackIn:create(cc.ScaleTo:create(params[4][1] * perTime, params[4][2]))))

    img:runAction(cc.Sequence:create(
    cc.DelayTime:create(39 * perTime),
    cc.FadeOut:create(params[4][1] * perTime),
    cc.CallFunc:create(function()
        node:removeFromParent()
    end)))
    node:setScale(0.5)
    return node
end

--高级动画
function AnimationLayer:getBigHuEffectNode(huName)
    local aniPath = "NewGoldRes/Spine/MahXueLiu/SpecialHu/"
    local aniName = huName -- "Qixinglianzhu"
    local node = cc.Node:create()
    local params = { path = aniPath, tex = aniName .. ".json", ske = aniName .. ".atlas", armatureName = "animation", loop = false }
    local spineNode = display.playDargonBonesSpine(params)
    if spineNode then
        local scale = 1.5
        -- local bili = display.width / display.height
        -- if bili > 1920 / 1080 then
        --     scale = scale * bili / (1920 / 1080)
        -- else
        --     scale = scale * (1920 / 1080) / bili
        -- end
        spineNode:setScale(scale)
        -- spineNode:setPosition(960, 540)
        node:addChild(spineNode)

        spineNode:registerSpineEventHandler(function(event)
            if event.eventData.name ~= "end" then
                NG.audioManager:playEffect(aniPath .. event.eventData.name .. ".MP3")
            end
        end, sp.EventType.ANIMATION_EVENT)
        spineNode:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                node:runAction(cc.Sequence:create(
                cc.DelayTime:create(0.1),
                cc.CallFunc:create(function()
                    node:removeFromParent(true)
                end)
                ))
            end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
    NG.soundManager:playNewEffect("sound_bighu")
    -- self:addChild(node)
    return node
end



function AnimationLayer:initBankrupNode()
    for i = 1, 4 do
        if self._bankrupNode[i] == nil and self["_panelBankrup_" .. i] then
            self._bankrupNode[i] = ccui.ImageView:create("ng_mah_table_bdz.png", ccui.TextureResType.plistType)
            self._bankrupNode[i]:setVisible(false)
            self["_panelBankrup_" .. i]:addChild(self._bankrupNode[i])


            self._bankrupTime[i] = ccui.TextBMFont:create()
            self._bankrupTime[i]:setFntFile("NewGoldRes/Image/MahXueLiu/font/fnt_pipeitime_export.fnt")
            self._bankrupTime[i]:setAnchorPoint(0, 0.5)
            self["_panelBankrup_" .. i]:addChild(self._bankrupTime[i])
            self._bankrupTime[i]:setScale(1.1)
            self._bankrupTime[i]:setPosition(150, 0)
            self._bankrupTime[i]:setVisible(false)
            self._bankrupTime[i]:setString('')
        end
    end
end

function AnimationLayer:updateBankrupState(localSeat, state, time)
    if self._bankrupNode[localSeat] then
        self._bankrupNode[localSeat]:setVisible(true)
        if state == NG.GAME.GameDefine.BANKRUP_STATE.WAITE then
            self._bankrupNode[localSeat]:loadTexture("ng_mah_table_bdz.png", ccui.TextureResType.plistType)
            self._bankrupTime[localSeat]:stopAllActions()
            self._bankrupTime[localSeat]:setString(time .. '秒')
            self._bankrupTime[localSeat]:setVisible(true)
            if time > 0 then
                local actSequence = cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
                    time = time - 1
                    if time >= 0 then
                        self._bankrupTime[localSeat]:setString(time .. '秒')
                    else
                        self._bankrupTime[localSeat]:stopAllActions()
                    end
                end))
                local repeatAct = cc.RepeatForever:create(actSequence)
                self._bankrupTime[localSeat]:runAction(repeatAct)
            end

        elseif state == NG.GAME.GameDefine.BANKRUP_STATE.GIVEUP then
            self._bankrupNode[localSeat]:loadTexture("ng_mah_table_pc.png", ccui.TextureResType.plistType)
            self._bankrupTime[localSeat]:stopAllActions()
            self._bankrupTime[localSeat]:setVisible(false)
        else
            self._bankrupNode[localSeat]:setVisible(false)
            self._bankrupTime[localSeat]:stopAllActions()
            self._bankrupTime[localSeat]:setVisible(false)
        end
    end
end

function AnimationLayer:onEventClearAll(event)
    for i = 1, 4 do
        if self._bankrupNode[i] then
            self._bankrupNode[i]:setVisible(false)
        end
    end
end

function AnimationLayer:createSpine(fileName, aniName, bLoop, autoRemove)
    local params = { path = "NewGoldRes/Spine/MahXueLiu/", tex = fileName .. ".json", ske = fileName .. ".atlas", armatureName = aniName, loop = bLoop }
    local aniNode = display.playDargonBonesSpine(params)
    if autoRemove then
        aniNode:registerSpineEventHandler(function(event)
            if event.type == 'complete' then
                aniNode:runAction(cc.Sequence:create(
                cc.DelayTime:create(0.1),
                cc.CallFunc:create(function()
                    aniNode:removeFromParent(true)
                end)
                ))
            end
        end, sp.EventType.ANIMATION_COMPLETE)
    end
    return aniNode
end

function AnimationLayer:onGameStart(event)

end

function AnimationLayer:onGameEnd(event)
    local aniNode = self:createSpine("paijujshu", "animation", false, true)
    aniNode:setPosition(display.cx, display.cy)
    self:addChild(aniNode)
end

function AnimationLayer:onEventBankrupState(event)
    local localSeat = NG.GAME.roomTableData:seatToLocal(event.data.nSeat)
    self:updateBankrupState(localSeat, event.data.nState, event.data.nTime)
end

function AnimationLayer:initKungScoreNode()
    -- for i = 1, 4 do
    --     if self._kungScoreNode[i] == nil then
    --         self._kungScoreNode[i] = ccui.TextBMFont:create()
    --         if self["_panelKungScore_" .. i] then
    --             self._kungScoreNode[i]:setAnchorPoint(0.5, 0)
    --             self["_panelKungScore_" .. i]:addChild(self._kungScoreNode[i])
    --         end
    --     end
    --     self._kungScoreNode[i]:setScale(0.7)
    --     self._kungScoreNode[i]:setVisible(false)
    -- end
    -- return self._kungScoreNode
end

function AnimationLayer:onShowKungScoreAni(event)
    NG.soundManager:playNewEffect("sound_score")
    local score = event.msg.iCurScore
    for i = 0, NG.GAME.roomTableData:getChairs() - 1 do
        local localSeat = NG.GAME.roomTableData:seatToLocal(i)
        local parent = self["_panelKungScore_" .. localSeat]
        if score[i] ~= 0 and parent then
            local allChildren = parent:getChildren()
            for i = 1, #allChildren do
                allChildren[i]:setPositionY(allChildren[i]:getPositionY() + 100)
            end

            local scoreNode = ccui.TextBMFont:create()
            scoreNode:setAnchorPoint(0.5, 0)
            scoreNode:setScale(0.7)
            parent:addChild(scoreNode)

            scoreNode:setVisible(true)
            local fntPath = "NewGoldRes/Image/MahXueLiu/font/zf_nums-export.fnt"
            if score[i] < 0 then
                fntPath = "NewGoldRes/Image/MahXueLiu/font/ff_nums-export.fnt"
            end
            scoreNode:setFntFile(fntPath)
            local scoreStr = NG.StringTool.getScoreStr(score[i], score[i] >= 1000000 and "%d" or "%.2f")
            if score[i] < 0 then
                scoreNode:setString(scoreStr)
            else
                scoreNode:setString("+" .. scoreStr)
            end
            local appearAction = cc.Sequence:create(
            cc.FadeIn:create(0.2),
            cc.DelayTime:create(1.8),
            cc.FadeOut:create(0.2)
            )
            scoreNode:runAction(appearAction)
            scoreNode:runAction(cc.Sequence:create(
            cc.DelayTime:create(2.2),
            cc.CallFunc:create(function()
                scoreNode:setOpacity(255)
                scoreNode:setVisible(false)
            end)
            ))
        end
    end
end
return AnimationLayer ob  