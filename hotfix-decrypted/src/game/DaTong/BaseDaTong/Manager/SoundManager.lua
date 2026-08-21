local SoundManager  = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")
local CardEnum      = CF.gameRequire("Define.CardEnum")
local CardLogic     = CF.gameRequire("Logic.CardLogic")

local ENUM_AUDIO_STATUS_PLAYING = "AUDIO_PLAYING"
local ENUM_AUDIO_STATUS_STOPED = "AUDIO_STOPED"
--目录
local PATH_DATONG = "res/audio/DaTong"

local sexPath = {
    [1] = "Man/",
    [2] = "Women/",
}

local languageType = {
    [1] = "standard/",
    [2] = "dialect/",
}

--文件格式
local musicType = {
    [1] = ".mp3"
}

local KW_MP3_CARD_TYPE_XIAN = {
    [1]="",
    [2]="",
    [3]="",
    [4]="",
    [5]="xian_5.mp3",
    [6]="xian_6.mp3",
    [7]="xian_7.mp3", 
    [8]="xian_8.mp3",
    [9]="xian_9.mp3",
    [10]="xian_10.mp3",
    [11]="xian_11.mp3",
    [12]="xian_12.mp3",
}

local KW_MP3_CARD_TYPE_BOOM = {
    [1]="",
    [2]="",
    [3]="",
    [4]="bomb_4_5.mp3",
    [5]="bomb_4_5.mp3",
    [6]="bomb_6_7.mp3",
    [7]="bomb_6_7.mp3", 
    [8]="bomb_8_9.mp3",
    [9]="bomb_8_9.mp3",
    [10]="bomb_10_12.mp3",
    [11]="bomb_10_12.mp3",
    [12]="bomb_10_12.mp3",
    [13]="bomb_10_12.mp3",
    [14]="bomb_10_12.mp3",
}

local KW_PATH_SOUND_FILE = PATH_DATONG .. "/GameLayer/" --除俏皮话之外的路径
local FILE_BOMB_SOUND_MP3 = "0/Other/"
local FILE_START_SOUND_MP3 = "0/Other/start.mp3"
local FILE_READY_SOUND_MP3 = "0/Other/OK.mp3"
local FILE_PASS_SOUND_MP3 = "0/Other/pass.mp3"
local FILE_OUT_SOUND_MP3 = "0/Other/Out.mp3"
local FILE_END_SOUND_MP3 = "0/Other/end.mp3"
local FILE_CLOCK_SOUND_MP3 = "0/Other/Clock.mp3"
local FILE_CLICK_BUTTOM_MP3 = "0/Other/click_buttom.mp3"
local FILE_SELECT_SOUND_MP3 = "0/Other/Select.mp3"
local FILE_SORT_SOUND_MP3 = "0/Other/Sort.mp3"

local FILE_SOUND_COMMON_BG = "ffz_common_bg.mp3"
local FILE_SOUND_START_BG = "ffz_start_bg.mp3"
local FILE_SOUND_BATTLE_BG = "Snd_ForBattle.mp3"

local PATH_SPEAK = "res/audio/DaTong/Speak/"
local speakString = {
    [1] = "M_Speak%03d",
    [2] = "W_Speak%03d"
}

local currentMusic 
local backGroundMusicDic = {}  --path->audioid

function SoundManager:ctor()
    SoundManager.super.ctor(self)
    self._bMusiclimit  = false
end

--俏皮话音效
function SoundManager:playSoundWisecrack(seat ,bMan, bFangYan, gameID, index)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    if CF.roomData:isGoldRoom() then
        bFangYan = false
    end
    local path
    if gameID == nil then
        if bMan then
             path = PATH_SPEAK .. "0/" .. sexPath[1] .. string.format(speakString,index)  .. musicType[1]
        else
             path = PATH_SPEAK .. "0/" .. sexPath[2] .. string.format(speakString,index)  .. musicType[1]
        end
    else
        local speakConfig = self:getSpeakConfig()
        if not speakConfig[index] then
            return
        end
        local dialectPath
        local standardPath
        if bMan then
            standardPath = PATH_SPEAK .. gameID .. "/" .. languageType[1] ..sexPath[1] .. speakConfig[index].M_SpeakFileName
            dialectPath = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. sexPath[1] .. speakConfig[index].M_SpeakFileName
        else
            standardPath = PATH_SPEAK .. gameID .. "/" .. languageType[1] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
            dialectPath = PATH_SPEAK .. gameID .. "/" .. languageType[2] .. sexPath[2] .. speakConfig[index].W_SpeakFileName
        end
        if bFangYan then
            path = dialectPath
            if not cc.FileUtils:getInstance():isFileExist(path) then
                path = standardPath
            end
        else
            path = standardPath
            if not cc.FileUtils:getInstance():isFileExist(path) then
                path = dialectPath
            end
        end
    end
    
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

--设置音乐限制
function SoundManager:setPlayMusicLimit(bLimit)
    self._bMusiclimit = bLimit
end

--获取音乐限制
function SoundManager:getPlayMusicLimit()
    return self._bMusiclimit
end

--设置语音声音
function SoundManager:setPlayMusicVolme(volume)
    if currentMusic and currentMusic.status == ENUM_AUDIO_STATUS_PLAYING then
        CF.audioManager:SetMusicVolume(currentMusic.id,volume)
    end
    for _, id in pairs(backGroundMusicDic) do
        CF.audioManager:SetMusicVolume(id,volume)
    end
end

--播放音乐
function SoundManager:playMusic(path, callback)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then
        return
    end
    if not self:getPlayMusicLimit() then
        local handle = {}
        handle.name = path
        handle.status = ENUM_AUDIO_STATUS_PLAYING
        local audioID = CF.audioManager:playMusic(path,true,function()
            handle.status = ENUM_AUDIO_STATUS_STOPED
            if callback then
                callback()
            end
        end)
        handle.id = audioID
        currentMusic = handle
        backGroundMusicDic[path] = audioID
    end
end

function SoundManager:stopMusic()
    if currentMusic then
        ccexp.AudioEngine:stop(currentMusic.id)
    end
    for _, id in pairs(backGroundMusicDic) do
       ccexp.AudioEngine:stop(id)
    end
end

function SoundManager:resumeMusic()
    if currentMusic then
        ccexp.AudioEngine:resume(currentMusic.id)
    end
    for _, id in pairs(backGroundMusicDic) do
       ccexp.AudioEngine:resume(id)
    end
end

function SoundManager:pauseMusicLobby()
    CF.audioManager:pauseMusic()
end

function SoundManager:resumeMusicLobby()
    CF.audioManager:resumeMusic()
end

function SoundManager:playButtonClick()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLICK_BUTTOM_MP3)   
end

function SoundManager:playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_START_SOUND_MP3)
end

function SoundManager:playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_END_SOUND_MP3)
end

function SoundManager:playSoundReady()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_READY_SOUND_MP3)
end

function SoundManager:playSoundOut()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_OUT_SOUND_MP3)
end

function SoundManager:playSoundPass()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_PASS_SOUND_MP3)
end

function SoundManager:playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLOCK_SOUND_MP3)
end

function SoundManager:playSoundSelectCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_SELECT_SOUND_MP3)
end

function SoundManager:playSoundSortCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_SORT_SOUND_MP3)
end

function SoundManager:playSoundBomb()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_BOMB_SOUND_MP3..KW_MP3_CARD_TYPE_BOOM[6])
end

--翻翻炸背景,还没开始翻炸音乐
function SoundManager:playFFZBackGroundMusic()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    if CF.settingData:getMusicPercent() <= 0 then
        return
    end

    self:stopMusic()
    self:playMusic(KW_PATH_SOUND_FILE .. FILE_SOUND_COMMON_BG)
end

--翻翻炸 开始翻炸音音乐
function SoundManager:playFFZStartMusic()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    if CF.settingData:getMusicPercent() <= 0 then
        return
    end

    self:stopMusic()
    self:playMusic(KW_PATH_SOUND_FILE .. FILE_SOUND_START_BG)
end

--翻翻炸 开牌音效
function SoundManager:PlayEffectFFZStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE .. FILE_SOUND_BATTLE_BG)
end

function SoundManager:playSoundPlayCardTypeFangYan(sex, cardType, cardPower, gameID)
    local path
    local bMan = false
    if sex == 1 then
        bMan = true
    end
    if bMan then
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[1]
    else
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[2]
    end

   if cardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        -- 单张，对子，连对，单顺，三张,三代二，连三张,连三张带连对
        if cardType % 100 == 1  then -- 单张，对子，三张
            if cardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_1_CONTINUOUS then --单张
                local randStr = '_1'
                local power = cardPower
                local junko = math.floor(cardType / 100)
                if junko == 1 then -- 单张
                    if power == 11 then
                        randStr = '_' .. math.random(3)
                    elseif power == 12 or power == 16 or power == 17 then
                        randStr = '_' .. math.random(2)
                    end
                elseif junko == 2 then -- 对子
                    randStr = '_' .. math.random(2)
                elseif junko == 3 then -- 三张
                    if power == 11 then
                        randStr = '_' .. math.random(3)
                    elseif power == 12 then
                        randStr = '_' .. math.random(2)
                    end
                end
                path = path .. math.floor(cardType / 100) .. "_" .. tostring(cardPower) .. randStr .. ".mp3"
            elseif cardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_1_CONTINUOUS then --对子
                local randStr = '_' .. math.random(2)
                path = path .. math.floor(cardType / 100) .. "_" .. tostring(cardPower) .. randStr .. ".mp3"
            elseif cardType == CardEnum.CARDS_TYPE.CT_3_JUNKO_1_CONTINUOUS then --三张
                local randStr = '_1'
                local power = cardPower
                if power == 11 then
                    randStr = '_' .. math.random(3)
                elseif power == 12 then
                    randStr = '_' .. math.random(2)
                end
                path = path .. math.floor(cardType / 100) .. "_" .. tostring(cardPower) .. randStr .. ".mp3"
            end
        elseif cardType == CardEnum.CARDS_TYPE.CT_1_JUNKO_5_CONTINUOUS then 
            -- 单顺
            path = path .. "1_0_5.mp3"
        elseif cardType >= CardEnum.CARDS_TYPE.CT_2_JUNKO_2_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_2_JUNKO_12_CONTINUOUS then
            --连对
            path = path .. "2_0_2.mp3"
        elseif cardType == CardEnum.CARDS_TYPE.FEIJIDAILIANDUI_1_CONTINUOUS then
            --三代二
            path = path .. "3_2_1.mp3"
        elseif cardType >= CardEnum.CARDS_TYPE.CT_3_JUNKO_2_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.CT_3_JUNKO_8_CONTINUOUS then
            --连三张
            path = path .. "3_0_2.mp3"
        elseif cardType >= CardEnum.CARDS_TYPE.FEIJIDAILIANDUI_2_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.FEIJIDAILIANDUI_5_CONTINUOUS then
            --连三张带连对
            path = path .. "3_2_2.mp3"
        end
    else
        -- 炸弹，连炸，天王炸
        if cardType == CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
            --4线单炸
            local randStr = '_1'
            local power = cardPower
            if power == 11 then
                randStr = '_' .. math.random(3)
            elseif power == 12 then
                randStr = '_' .. math.random(2)
            end
            path = path .. '4_' .. tostring(cardPower) .. randStr .. ".mp3"
        elseif cardType % 100 == 1 and cardType >= CardEnum.CARDS_TYPE.CT_5_JUNKO_1_CONTINUOUS then
            --5线以上单炸
            local randStr = '_' .. math.random(3)
            path = path .. 'xian_' .. tostring(math.floor(cardType/100)) .. randStr .. ".mp3"
        elseif cardType % 100 >= 3 and cardType < CardEnum.CARDS_TYPE.CT_0_KING then
            --连炸
            path = path .. '4_0_' .. tostring(cardType % 100) .. ".mp3"
        elseif cardType == CardEnum.CARDS_TYPE.CT_4_KING then
            --天王炸
            local randStr = '_' .. math.random(2)
            path = path .. '10007' .. randStr .. ".mp3"
        end
    end
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

function SoundManager:playSoundPlayCardType(sex, cardType, cardPower, bFangYan, gameID)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local path
    local bMan = false
    if sex == 1 then
        bMan = true
    end

    if bFangYan then
        self:playSoundPlayCardTypeFangYan(sex, cardType, cardPower, gameID)
        return
    else
        gameID = 0
    end

    if bMan then
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[1]
    else
        path = KW_PATH_SOUND_FILE .. gameID .."/CardType/" .. sexPath[2]
    end

    -- 三带二 飞机带连对没有音效
    if cardType >= CardEnum.CARDS_TYPE.FEIJIDAILIANDUI_1_CONTINUOUS and cardType <= CardEnum.CARDS_TYPE.FEIJIDAILIANDUI_5_CONTINUOUS then
        return
    end

    if cardType < CardEnum.CARDS_TYPE.CT_4_JUNKO_1_CONTINUOUS then
        if cardType % 100 == 1 then      
            path = path..math.floor(cardType / 100).."_"..cardPower..".mp3"
        else
            if cardType == CardEnum.CARDS_TYPE.CT_2_JUNKO_2_CONTINUOUS then
                path = path.."s_22.mp3"
            else
                local shunType = math.floor(cardType / 100) > 2 and 2 or 1
                path = path.."s_".. shunType ..".mp3"
            end
        end       
    else
        local isffz = CF.roomData:getIsFFZ()
        if not isffz then
            local boomXian = CardLogic.GetBombLineNumberByType(cardType)
            self:playEffect(KW_PATH_SOUND_FILE..FILE_BOMB_SOUND_MP3..KW_MP3_CARD_TYPE_BOOM[boomXian])
        end
        if cardType % 100 == 1 then          
            local tmpPath = path..math.floor(cardType / 100).."_"..cardPower..".mp3"
            if not cc.FileUtils:getInstance():isFileExist(tmpPath) then
                if KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)] ~= "" then
                    tmpPath = path..KW_MP3_CARD_TYPE_XIAN[math.floor(cardType / 100)]      
                end
            end
            path = tmpPath
        else
            if cardType > CardEnum.CARDS_TYPE.CT_0_KING then
                local count = cardType - CardEnum.CARDS_TYPE.CT_3_KING + 3 
                path = path.."wang_"..count..".mp3"                       
            else
                path = path.."lian_"..math.floor(cardType % 100).."_"..math.random(2)..".mp3"
            end
        end     
    end
    if cc.FileUtils:getInstance():isFileExist(path) then
        self:playEffect(path)
    end
end

function SoundManager:getSpeakConfigPath(gameID)
    return "game.DaTong.GameSpeakConfig.GameSpeak_" .. gameID
end

return SoundManager  �=  