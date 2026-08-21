local SoundManager = CF.gameClass("SoundManager", CF.gameScriptRootPath .. ".GameBase.Manager.SoundManager")

local KW_PATH_DARK_SHUANG_KOU_FILE = "audio/DarkShuangKou/Sound/"
local KW_PATH_SOUND_FILE = KW_PATH_DARK_SHUANG_KOU_FILE
local FILE_OUT_SOUND_MP3 = "Out.mp3"
local FILE_CLOCK_SOUND_MP3 = "Clock.mp3"
local FILE_SELECT_SOUND_MP3 = "Select.mp3"
local FILE_SEND_CARD_SOUND_MP3 = "SendCard.mp3"

local sexPath = {
    [1] = "Man/",
    [2] = "Women/"
}

function SoundManager:getSpeakConfigPath(gameID)
    return CF.gameScriptRootPath .. ".DarkShuangKou.GameSpeakConfig.GameSpeak_" .. gameID
end

function SoundManager:initSpeak(gameID)
    self._speakCfg = {}
    if not gameID then
        return
    end
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    if boxGameId then
        gameID = boxGameId
    end

    local confFileName = self:getSpeakConfigPath(gameID)
    if CF.FileTool.isFileExist(confFileName) then
        local config = CF.gameRequire(confFileName).GameSpeakConfigByConfID or {}
        for _, v in pairs(config) do
            if not self._speakCfg[v.listIndex] then
                self._speakCfg[v.listIndex] = {}
            end
            self._speakCfg[v.listIndex][v.index] = v
        end
    end
end

function SoundManager:playSoundSendCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SEND_CARD_SOUND_MP3)
end

function SoundManager:playSoundOut()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_OUT_SOUND_MP3)
end

function SoundManager:playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_CLOCK_SOUND_MP3)
end

local PATH_SPEAK = "audio/DarkShuangKou/Sound/Speak"

--俏皮话音效
function SoundManager:playSoundWisecrack(bMan, index)
    local speakConfig = self:getSpeakConfig()
    if not speakConfig[index] then
        return
    end
    local path
    if bMan then
        path = PATH_SPEAK .. "/" .. sexPath[1] .. speakConfig[index].M_SpeakFileName
    else
        path = PATH_SPEAK .. "/" .. sexPath[2] .. speakConfig[index].W_SpeakFileName
    end

    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

function SoundManager:getSpeakConfig()
    return self._speakCfg[1]
end

function SoundManager:playSoundSelectCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SELECT_SOUND_MP3)
end

function SoundManager:playSoundCardType(sex, cardTypeSoundid)
    cardTypeSoundid = cardTypeSoundid or 0
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. sex .. "/cardtype_" .. cardTypeSoundid .. ".mp3")
end

-- 决胜时刻
function SoundManager:playSoundShowdownMoment()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "ShowdownMoment.mp3")
end

-- 最终决胜
function SoundManager:playSoundLastShowdown()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "LastShowdown.mp3")
end

-- 暴击
function SoundManager:playSoundBaoJi()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "BaoJi.mp3")
end

-- 飞金币
function SoundManager:playSoundFlyGold()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "FlyGold.mp3")
end

-- 结束播报
function SoundManager:playSoundResultBobao()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "ResultBobao.mp3")
end

-- 大结束弹出
function SoundManager:playSoundResultPop()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "Result.mp3")
end

-- 开始匹配
function SoundManager:playSoundMatching()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "Matching.mp3")
end

-- 轮次播报
function SoundManager:playSoundRoundBobao()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "RoundBobao.mp3")
end

-- 胜利倍数
function SoundManager:playSoundWinMult()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "WinMult.mp3")
end

-- 攻击
function SoundManager:playSoundAttack()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "Attack.mp3")
end

-- beforeAttack
function SoundManager:playSoundBeforeAttack()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "BeforeAttack.mp3")
end

-- 有炸弹/无炸弹播报
function SoundManager:playSoundBoomBobao()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "BoomBobao.mp3")
end

-- 双赢/三赢
function SoundManager:playSoundWinWin()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "WinWin.mp3")
end

-- 复活礼包
function SoundManager:playSoundReviveGiftPop()
    self:playEffect(KW_PATH_DARK_SHUANG_KOU_FILE .. "RevivePop.mp3")
end

return SoundManager
