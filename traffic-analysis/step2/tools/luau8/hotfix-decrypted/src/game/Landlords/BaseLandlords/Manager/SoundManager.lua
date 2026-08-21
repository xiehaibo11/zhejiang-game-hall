local SoundManager  = CF.gameClass("SoundManager", "game.GameBase.Manager.SoundManager")
local CardType      = CF.gameRequire("Define.CardType")

local ENUM_AUDIO_STATUS_PLAYING = "AUDIO_PLAYING"
local ENUM_AUDIO_STATUS_STOPED = "AUDIO_STOPED"

local KW_GAME_PATH = "res/audio/Landlords"
local KW_PATH_SOUND_FILE = KW_GAME_PATH .. "/Base/"
local KW_PATH_GAMESOUND_FILE = KW_GAME_PATH .. "/GameLayer/"
local PATH_SPEAK = "res/audio/Speak/"

local FILE_START_SOUND_MP3 = "start.mp3"
local FILE_READY_SOUND_MP3 = "OK.mp3"
local FILE_OUT_SOUND_MP3 = "Out.mp3"
local FILE_CLOCK_SOUND_MP3 = "time1.mp3"
local FILE_CARD_TYPE_BOOM_MP3 = "boom.mp3"
local FILE_CLICK_BUTTOM_MP3 = "click_buttom.mp3"
local FILE_FUXING_SOUND_MP3 = "EndWin.mp3"
local FILE_SORT_CARD_MP3 = "sort_card.mp3"
local FILE_SELECT_CARD_MP3 = "select_card.mp3"
local FILE_CLICK_CARD_MP3 = "click_card.mp3"
local FILE_WIN_SOUND_MP3 = "win.mp3"
local FILE_LOSE_SOUND_MP3 = "lose.mp3"
local FILE_SHUNZI_LIANDUI_BG = "shunzi_liandui_bg.mp3"
local FILE_FEIJI_BG = "feiji_bg.mp3"
local FILE_ZHADAN_BG = "zhadan_bg.mp3"
local FILE_MINGPAI_BG = "mingpai_bg.mp3"

local speakString = "M_Speak%02d"

local languageType = {
    [1] = "standard/",
    [2] = "dialect/",
}

local musicType = {
    [1] = ".mp3"
}

local currentMusic
local bMusicLimit = false

local sexPath = {
    [1] = "Man/",
    [2] = "Women/",
}

--俏皮话音效
function SoundManager:playSoundWisecrack(seat ,bMan, bFangYan, gameID, index)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    if CF.roomData:isGoldRoom() then
        bFangYan = false
    end
    local path = ""
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
        local dialectPath = ""
        local standardPath = ""
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
    bMusicLimit = bLimit
end

--获取音乐限制
function SoundManager:getPlayMusicLimit()
    return bMusicLimit
end

--设置语音声音
function SoundManager:setPlayMusicVolme(volume)
    if currentMusic and currentMusic.status == ENUM_AUDIO_STATUS_PLAYING then
        CF.audioManager:SetMusicVolume(currentMusic.id,volume)
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
    end
end

function SoundManager:playButtonClick()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLICK_BUTTOM_MP3)   
end

function SoundManager:playSortCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE..FILE_SORT_CARD_MP3)   
end

function SoundManager:playSoundSelectCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE..FILE_SELECT_CARD_MP3)   
end

function SoundManager:playClickCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLICK_CARD_MP3)   
end

function SoundManager:playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_START_SOUND_MP3)
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

function SoundManager:playSoundWin()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_WIN_SOUND_MP3)
end

function SoundManager:playSoundLose()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_LOSE_SOUND_MP3)
end

function SoundManager:playSoundFuXing()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_FUXING_SOUND_MP3)
end

function SoundManager:playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_CLOCK_SOUND_MP3)
end

function SoundManager:playSoundBoom()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    self:playEffect(KW_PATH_SOUND_FILE .. FILE_CARD_TYPE_BOOM_MP3)   
end

function SoundManager:playSoundCards(bMan, sCardType, sStartPower, gameID, first)
    local boxGameId = CF.gameSub:getGoldToBoxGameId(gameID)
    
    if boxGameId then
        gameID = boxGameId
    end
    local normal = CF.settingData:getLandlordsIsNormalVoice()
    local path = nil 
    if gameID == nil or normal then 
        path =  KW_PATH_GAMESOUND_FILE .. "0/"
    else 
        path =  KW_PATH_GAMESOUND_FILE .. gameID .. "/"
    end

    if bMan then
        path = path .. sexPath[1]
    else
        path = path .. sexPath[2]
    end

    local isBoom = false
    local daniEffect = false
    local cardIndex = math.floor(sCardType / 1000)

    local tempCardTypeID = CardType.MappingTable[sCardType]
    if CardType:isShunZi(tempCardTypeID) then
        self:playShunziLianduiBgSound()
        path = path .. "shunzi"
        daniEffect = true
    elseif CardType:isLianDui(tempCardTypeID) then
        self:playShunziLianduiBgSound()
        path = path .. "liandui"
        daniEffect = true
    elseif CardType:isFeiJi(tempCardTypeID) then
        self:playFeiJiBgSound()
        path = path .. "feiji"
        daniEffect = true
    elseif CardType:isN3Dai1(tempCardTypeID) then
        path = path .. "sandaiyi"
        daniEffect = true
    elseif CardType:isN3Dai1Dui(tempCardTypeID) then
        path = path .. "sandaiyidui"
        daniEffect = true
    elseif CardType:isBoom(tempCardTypeID) then
        self:playZhaDanBgSound()
        path = path .. "zhadan"
        isBoom = true
    elseif CardType:isWangZha(tempCardTypeID) then
        self:playZhaDanBgSound()
        path = path .. "wangzha"
    elseif CardType:isN4Dai2(tempCardTypeID) then
        path = path .. "sidaier"
        daniEffect = true
    elseif CardType:isN4Dai2Dui(tempCardTypeID) then
        path = path .. "sidaier"
        daniEffect = true
    else
        path = path .. cardIndex .. "_" .. sStartPower
    end
    path = path .. ".mp3"
         
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if isExist then 
        if not first and daniEffect then
            self:playEventSound(bMan, SoundManager.EventEffect.DaNi)
        else
            self:playEffect(path)
        end
        
        if isBoom then
            self:playSoundBoom()
        end
    else 
        if gameID ~= 0 then 
            self:playSoundCards(bMan, sCardType, sStartPower, 0, first)
        end
    end
end

function SoundManager:getCardSoundPath(bMan)
    local gameID = CF.roomData:getGameID()
    local fangyan = CF.settingData:getLandlordsIsNormalVoice()
    
    local getPathFun = function(gid)
        local path = nil 
        if gid == nil or not fangyan then 
            path =  KW_PATH_GAMESOUND_FILE .. "0/"
        else 
            path =  KW_PATH_GAMESOUND_FILE .. gid .. "/"
        end

        if bMan then
            path = path .. sexPath[1]
        else
            path = path .. sexPath[2]
        end
        return path
    end

    local path = getPathFun(gameID)
    local isExist = cc.FileUtils:getInstance():isFileExist(path)
    if not isExist then 
        path = getPathFun()
    end

    return path
end

SoundManager.EventEffect = {
    Pass = {name = "pass", count = 4}, -- 不要
    DaNi = {name = "dani", count = 3}, -- 大你
    NotQiangLandlord = {name = "buqiang", count = 1}, -- 不抢
    Double = {name = "saydouble", count = 1}, -- 我就两张牌了
    Single = {name = "saysingle", count = 1}, -- 我就一张牌了
    RobLandlord = {name = "jiaodizhu", count = 1}, -- 叫地主
    NotRobLandlord = {name = "bujiao", count = 1}, -- 不叫
    ShowHandCard = {name = "mingpai", count = 1}, --明牌
    IsDouble = {name = "isdouble",count = 1}, --加倍
    IsNotDouble = {name = "isnotdouble", count = 1}, --不加倍
}

function SoundManager:playEventSound(bMan, effect)
    if KW_PATH_SOUND_FILE == nil or nil == effect then
        return
    end
    local path = self:getCardSoundPath(bMan)
    local index = math.random(effect.count)
    if effect.count > 1 then
        path = path .. effect.name .. index .. ".mp3"
    else
        path = path .. effect.name .. ".mp3"
    end
    self:playEffect(path)
end

-- 抢地主
function SoundManager:playQiangLandlordSound(bMan, score)
    if KW_PATH_SOUND_FILE == nil or nil == score or score > 3 or score <= 0 then
        return
    end
    local path = self:getCardSoundPath(bMan)
    path = path .. "qiangdizhu" .. score .. ".mp3"
    self:playEffect(path)
end

function SoundManager:preloadBackground()
    local audioConf = {}

    audioConf["landlords_welcome"] = {name = "landlords_welcome", type = "MUSIC", file = "res/audio/Landlords/Base/welcome.mp3", volume = 1.0, preload = true}
    audioConf["landlords_bgm"] = {name = "landlords_bgm", type = "MUSIC", file = "res/audio/Landlords/Base/bgm.mp3", volume = 1.0, preload = true}
    audioConf["landlords_bgm1"] = {name = "landlords_bgm1", type = "MUSIC", file = "res/audio/Landlords/Base/bgm1.mp3", volume = 1.0, preload = true}
    CF.audioManager:addConfig(audioConf)
end

-- background music
function SoundManager:playBackgroundSound()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
 
    CF.audioManager:play("landlords_welcome", function()
        local index = math.random(2)
        if index == 1 then
            CF.audioManager:play("landlords_bgm")
        else
            CF.audioManager:play("landlords_bgm1")
        end
    end)
end

function SoundManager:playShunziLianduiBgSound()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_SHUNZI_LIANDUI_BG)
end

function SoundManager:playFeiJiBgSound()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_FEIJI_BG)
end

function SoundManager:playZhaDanBgSound()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE..FILE_ZHADAN_BG)
end

function SoundManager:playMingPaiBgSound()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    self:playEffect(KW_PATH_SOUND_FILE .. FILE_MINGPAI_BG)
end

function SoundManager:stopMusic()
    CF.audioManager:stopMusic()
end

function SoundManager:getSpeakConfigPath(gameID)
    return "game.Landlords.GameSpeakConfig.GameSpeak_" .. gameID
end

return SoundManager�2