--麻将掷骰子、吃碰杠听胡等动画
local AnimationLayer = CF.gameClass("AnimationLayer", CF.ViewBase)

local convertTpyeList = {} --actionid 转powerid
convertTpyeList[CF.GameDefine.COMB_FLAG.CHOW] = CF.GameDefine.POWER.CHOW
convertTpyeList[CF.GameDefine.COMB_FLAG.PUNG] = CF.GameDefine.POWER.PUNG
convertTpyeList[CF.GameDefine.COMB_FLAG.MKONG] = CF.GameDefine.POWER.MKONG
convertTpyeList[CF.GameDefine.COMB_FLAG.TKONG] = CF.GameDefine.POWER.TKONG
convertTpyeList[CF.GameDefine.COMB_FLAG.CKONG] = CF.GameDefine.POWER.CKONG
convertTpyeList[CF.GameDefine.POWER.HU] = CF.GameDefine.POWER.HU
local MAH_ACTION_MAP = {} --powerid 和 动画名字对应表
MAH_ACTION_MAP[CF.GameDefine.POWER.CHOW] = "chi" --吃
MAH_ACTION_MAP[CF.GameDefine.POWER.PUNG] = "peng" --碰
MAH_ACTION_MAP[CF.GameDefine.POWER.MKONG] = "gang" -- 明杠
MAH_ACTION_MAP[CF.GameDefine.POWER.TKONG] = "gang" -- 补杠
MAH_ACTION_MAP[CF.GameDefine.POWER.CKONG] = "angang"    --暗杠
MAH_ACTION_MAP[CF.GameDefine.POWER.HU] = "hu"    --胡
--以下是没有对应起来的动画名字
    --"ruanbao" --软报
    --"yingbao" --硬报
    --"menhu"   --闷胡
    --"tianting" --天听
local MAHJONG_ANI_PATH = "animation/Mahjong/Base/" --麻将动画文件路径
local POS_SHAI_ZI = {} --key值代表骰子数，value代表骰子位置
POS_SHAI_ZI[1] = {cc.p(-145, 290)}
POS_SHAI_ZI[2] ={cc.p(-200, 290), cc.p(-90, 290)}
--设置界面，UI下标为1是闪光的那套动画,没有下划线，UI下标为2的是_1的那套动画,以此类推
local SETTING_UI_INDEX_MAP = {[1] = nil, [2] = 1, [3] = 2, [4] = 3, [5] = 4, [6] = 5, [7] = 6, [8] = 7, [9] = 8, [10] = 9,}

function AnimationLayer:ctor(param)
    param = param or {}
    AnimationLayer.super.ctor(self,param)
    self._gameMahAnimationCfg = nil
    self._chipsList = {}
    self._chipsSpeedScaleList = {}
    self._curChipSpeedScale = 1
    self._isStartChipAni = false  
    self:initData()
end

function AnimationLayer:getCSBPath()
    return "cocosStudio/MahjongNew/GameLayer/CSB/MahjongAniLayer.csb"
end

function AnimationLayer:getBindingInfo()
    return {
        ["_KW_ROOT_PANEL"] = {varName = "_panelRoot", onTouchEnded = "onBgClick"},
        ["_KW_PANEL_SHUFFLE_ANI_POS"] = {varName = "_panelShuffleAniPos"},
        ["_KW_IMG_SHUFFLE_PLAYER"] = {varName = "_imgShufflePlayerBg"},
        ["_KW_TXT_SHFFULE_PLAYER"] = {varName = "_txtshufflePlayers"},
        ["_KW_PANEL_BG"] = {varName = "_BG"},
        ["_KW_PLAYER_HEAD_"] = {varName = "_posPlayerHead_", beginIndex = 1, endIndex = 4},
        ["_KW_PANEL_SHAI_ZI_"] = {varName = "_panelShaiZi_", beginIndex = 1, endIndex = 2},
        ["_KW_KUNG_SCORE_"] = {varName = "_panelKungScore_", beginIndex = 1, endIndex = 4},
    }
end

function AnimationLayer:getProxyEvents()
    return {
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_CHIPS", callBack = "onShowChipsEvent"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_MAHLAYER_SHOW_ACTION_ANIMATION", callBack = "onShowMahAcitonAni"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_PLAY_CAISHEN", callBack = "playGodOfWealthAnimation"},
        {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_SPECIAL_HU_ANI", callBack = "playSpecialHuAnimation"},
    }
end

function AnimationLayer:initData()
    local GameMahAnimationConfiger = CF.gameRequire("Config.Parse.GameMahAnimationConfiger").new()
    self._gameMahAnimationCfg = GameMahAnimationConfiger:getMahAnimationCfg()
end

function AnimationLayer:onShowChipsEvent(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local tChips = event.data
    local speedScale = event.speedScale or 1
    if speedScale <= 0 then
        speedScale = 1
    end
    table.insert( self._chipsList, tChips )
    table.insert( self._chipsSpeedScaleList, speedScale )
    self:showChip()
end

function AnimationLayer:onShowMahAcitonAni(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = event.data.localSeat
    local actionID = event.data.actionID
    local bZiMo = event.data.bZiMo
    self:playMahActionAnimation(localSeat, actionID, bZiMo)
end

function AnimationLayer:showChip()
    if not CF.game then
        return
    end
    if CF and CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    if #self._chipsList == 0 then
        CF.game:getModule("GameLayer"):sendEventChipsAniFinish()
        return
    end
    if self._isStartChipAni then
        return
    end
    self._curChipSpeedScale = self._chipsSpeedScaleList[1] or 1
    if self._curChipSpeedScale <= 0 then
        self._curChipSpeedScale = 1
    end
    if not CF.settingData:getIsMahlayer3D() then
        self:playShaiZiAnimation(self._chipsList[1])
    else
        self:playShaiZiAnimation3D(self._chipsList[1])
    end
end

function AnimationLayer:_applyShaiziSpeedScale(panel, exportJsonName)
    if not panel or not exportJsonName then
        return
    end
    local speedScale = self._curChipSpeedScale or 1
    if speedScale == 1 then
        return
    end
    local armature = panel:getChildByName(exportJsonName)
    if armature and armature.getAnimation then
        armature:getAnimation():setSpeedScale(speedScale)
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
    local speedScale = self._curChipSpeedScale or 1
    for i = 1, chipsCount do
        CF.UITool.playJsonAnimationByName(self["_panelShaiZi_" .. i],exportJsonName,exportJsonFilePath, -1, aniName, POS_SHAI_ZI[chipsCount][i])
        self:_applyShaiziSpeedScale(self["_panelShaiZi_" .. i], exportJsonName)
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
    -- 音效仍按原时机立即播放，不受加速影响
    self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(0.5 / speedScale), fun))
    CF.soundManager:playSoundChip()
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
    local speedScale = self._curChipSpeedScale or 1
    
    for i = 1, #chips do
        local aniName = aniNameList[chips[i] + 1]
        CF.UITool.playJsonAnimationByName(self["_panelShaiZi_" .. i],exportJsonName,exportJsonFilePath,-1, aniName, POS_SHAI_ZI[#chips][i])
        self:_applyShaiziSpeedScale(self["_panelShaiZi_" .. i], exportJsonName)
    end

    local fun = cc.CallFunc:create(function()
        for i = 1, #chips do
            if not self["_panelShaiZi_" .. i] then
                return
            end
            self["_panelShaiZi_" .. i]:removeAllChildren()
        end
        table.remove( self._chipsList, 1 )
        table.remove( self._chipsSpeedScaleList, 1 )
        self._isStartChipAni = false
        --播放队列里的骰子动画
        self:showChip()
    end)
    --延时消失骰子
    self._panelRoot:stopAllActions()
    self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(0.7 / speedScale), fun))
end

--play 骰子滚动的3D动画
function AnimationLayer:playShaiZiAnimation3D(tChips)
    if self._isStartChipAni == false then 
        CF.game:getModule("GameLayer"):showChips3D(tChips, self._curChipSpeedScale)
        CF.soundManager:playSoundChip()
        self._isStartChipAni = true
        local speedScale = self._curChipSpeedScale or 1
        local fun = cc.CallFunc:create(function()
            table.remove( self._chipsList, 1 )
            table.remove( self._chipsSpeedScaleList, 1 )
            if #self._chipsList > 0 then 
                self._curChipSpeedScale = self._chipsSpeedScaleList[1] or 1
                CF.game:getModule("GameLayer"):showChips3D(self._chipsList[1], self._curChipSpeedScale)
                CF.soundManager:playSoundChip()
            elseif #self._chipsList == 0 then 
                self._isStartChipAni = false
            end 
        end)
        self._panelRoot:stopAllActions()
        self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(2.5 / speedScale), fun))
    end 
end

--play吃碰杠胡的动画
function AnimationLayer:playMahActionAnimation(localSeat, actionID, bZiMo)
    if CF and CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end

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

    local outEffect = CF.settingData:getOutEffects()
    if CF.settingData:getIsMahlayer3D() then
        outEffect = CF.settingData:getOutEffectStyle()
    end
     --aniIndex 指定使用哪套动画，用下划线+数字表示(如chi_1, peng_1)
    local aniIndex = SETTING_UI_INDEX_MAP[outEffect]
    if aniIndex and aniIndex > 0 then
        aniName = aniName .. "_" .. aniIndex
    end

    --自摸动画
    if powerid == CF.GameDefine.POWER.HU and bZiMo then
        aniName = "zimo"
    end
    local exportJsonName = cardtypeAniCfg.JsonName
    local exportDirName = cardtypeAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    local currMahCfg = CF.settingData:getDefaultData(nil, true)
    local aninScale = currMahCfg.mahOutEffectsSize or 1
    if not (CF.GameDefine.POWER.HU == powerid and CF.configData:useSpecialHuAni()) then
        CF.UITool.playJsonAnimationByName(self["_posPlayerHead_" .. localSeat],exportJsonName,exportJsonFilePath, -1, aniName,nil, nil,nil,aninScale)
    end 

    self:performWithDelay(function ()
        if not self["_posPlayerHead_" .. localSeat] then 
            return
        end
        self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    end, 0.9)
end

--根据胡牌类型播放特殊胡牌动画
function AnimationLayer:playSpecialHuAnimation(event)
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local fanNames = event.msg.fanNames or ""
    local seat = event.msg.seat
    local gameid = event.msg.gameid
    local localSeat = CF.roomData:seatToLocal(seat)
    local specialHuGLConfig = CF.gameRequire("Config.SpecialHuGLConfig"):new()
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
        local MahLogic = CF.gameRequire("Modules.GameLayer.MahLogic")
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
    if CF.roomData and CF.roomData:getIsFastPlay() then
        return
    end
    local localSeat = CF.roomData:seatToLocal(msg.data.seat)

    local aniName = "hu"

    local godOfWealthAniCfg = self._gameMahAnimationCfg.caishen_ani
    if not godOfWealthAniCfg then
        return
    end
    local exportJsonName = godOfWealthAniCfg.JsonName
    local exportDirName = godOfWealthAniCfg.DirName
    local exportJsonFilePath = MAHJONG_ANI_PATH .. exportDirName .. "/" .. exportJsonName .. ".ExportJson"
    self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    CF.UITool.playJsonAnimationByName(self["_posPlayerHead_" .. localSeat], exportJsonName,exportJsonFilePath, -1, aniName,nil, nil, function()
        if not self["_posPlayerHead_" .. localSeat] then 
            return
        end
        self["_posPlayerHead_" .. localSeat]:removeAllChildren()
    end)
end

 function AnimationLayer:getAnimationIndex(index)
    return SETTING_UI_INDEX_MAP[index] 
 end

return AnimationLayer
�5  