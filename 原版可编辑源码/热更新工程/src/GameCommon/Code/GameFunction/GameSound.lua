local GameSound = class("GameSound")
local CURRENT_MOUDLE_NAME = ...

local KW_GAME_PATH = "GameCommon"

local KW_PATH_SOUND_FILE = KW_GAME_PATH .. "/Sound/" 
local KW_PATH_SOUND_FILE_PROP_ANI = KW_GAME_PATH .. "/Sound/Prop/%s.mp3"
local FILE_START_SOUND_MP3 = "start.mp3"
local FILE_READY_SOUND_MP3 = "OK.mp3"
local FILE_PASS_SOUND_MP3 = "pass.mp3"
local FILE_OUT_SOUND_MP3 = "Out.mp3"
local FILE_END_SOUND_MP3 = "end.mp3"
local FILE_CLOCK_SOUND_MP3 = "Clock.mp3"

local FILE_CHANGE_ROOM_SOUND_MP3 = "ChangeRoom.mp3"
local FILE_BOMB_SOUND_MP3 = "bomb.mp3"
local PATH_QIAOPIHUA_MAN_FILE = "Speak_M/M"
local PATH_QIAOPIHUA_WOMAN_FILE = "Speak_W/W"
local PATH_CARDTYPE_MAN_FILE = "Men/"
local PATH_CARDTYPE_WOMAN_FILE = "Women/"
local FILE_FUXING_SOUND_MP3 = "EndWin.mp3"
local FILE_TIPS_BUBBLE_MP3 = "tips_bubble.mp3"
local FILE_SELECE_GAME_MODE_MP3 = "select_game_mode.mp3"
local FILE_TIME_BOX_MP3 = "time_box.mp3"
local FILE_CHECK_BOX_ON_MP3 = "check_box_on.mp3"
local FILE_CHECK_BOX_CLOSE_MP3 = "check_box_close.mp3"
local FILE_FOCUS_TEXT_FIELD_MP3 = "focus_text_field.mp3"
local FILE_CLICK_BUTTOM_MP3 = "click_buttom.mp3"
local FILE_CLICK_CARD_MP3 = "click_card.mp3"
local FILE_SELECT_GAME_MP3 = "select_room.mp3"
local FILE_CLOSE_WINDOW_MP3 = "close_window.mp3"

local FILE_CARD_TYPE_BOOM_MP3 = "bomb_4_5.mp3"
local PATH_MAN_FILE = "Man/"
local PATH_WOMAN_FILE = "Women/"
local PATH_SPEAK_FILE = "Speak/"
local SEX_MAN = "M_Speak"
local SEX_WOMAN = "W_Speak"
local KW_PATH_CARD_RESOUCE = KW_GAME_PATH .. "/CardLayer/Sound/" 

math.randomseed(os.time())

GameSound.limit = false

function GameSound.setPlayEffectLimit(bLimit)
    GameSound.limit = bLimit
end

function GameSound.getPlayEffectLimit()
    return GameSound.limit
end

function GameSound.playEffect(path)
    if not GameSound.getPlayEffectLimit() then
        -- AudioEngine.playEffect(path)
        ccexp.AudioEngine:play2d(path)
    end
end

function GameSound.playChangeRoom()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CHANGE_ROOM_SOUND_MP3)
end

function GameSound.playSoundStart()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_START_SOUND_MP3)
end

function GameSound.playSoundReady()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_READY_SOUND_MP3)
end

function GameSound.playSoundFuXing()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_FUXING_SOUND_MP3)
end

function GameSound:isSoundHotUpdateMenuExist(gameID)
    return cc.FileUtils:getInstance():isFileExist(cc.FileUtils:getInstance():getWritablePath() .. gameID .. "/" .. tostring(cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_VERSION_INDEX" .. gameID,0)) .. "/")
end

function GameSound:isSoundHotUpdateFileExist(path,gameID)
    return cc.FileUtils:getInstance():isFileExist(cc.FileUtils:getInstance():getWritablePath() .. gameID .. "/" .. tostring(cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_VERSION_INDEX" .. gameID,0)) .. "/" .. path)
end

function GameSound.playSoundPass()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_PASS_SOUND_MP3)
end

function GameSound.playSoundOut()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_OUT_SOUND_MP3)
end

function GameSound.playSoundEnd()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_END_SOUND_MP3)
end

function GameSound.playSoundClock()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CLOCK_SOUND_MP3)
end

function GameSound.playTipsBubble()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_TIPS_BUBBLE_MP3)
end

function GameSound.playSoundGameMode()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_SELECE_GAME_MODE_MP3)
end

function GameSound.playButtonClick()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CLICK_BUTTOM_MP3)   
end

function GameSound.playSoundTimeBox()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_TIME_BOX_MP3)
end

function GameSound.playSoundClickCard()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CLICK_CARD_MP3)
end

function GameSound.playSoundSelectGame()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_SELECT_GAME_MP3)
end

function GameSound.playSoundCloseWindow()
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CLOSE_WINDOW_MP3)
end

function GameSound.playSoundCheckBox(isOn)
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    if isOn then
        GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CHECK_BOX_ON_MP3)
    else
        GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_CHECK_BOX_CLOSE_MP3)
    end

end

function GameSound.playSoundFoocusTextField()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    GameSound.playEffect(KW_PATH_SOUND_FILE..FILE_FOCUS_TEXT_FIELD_MP3)   
end

function GameSound.playSoundBoom()
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    GameSound.playEffect(KW_PATH_SOUND_FILE .. FILE_CARD_TYPE_BOOM_MP3)   
end

function GameSound.playPropAniMoveSound(soundName)
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    local propAni = string.format(KW_PATH_SOUND_FILE_PROP_ANI,soundName)
    GameSound.playEffect(propAni)
end

function GameSound.playPropAniEndSound(soundName)
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    local propAni = string.format(KW_PATH_SOUND_FILE_PROP_ANI,soundName)
    GameSound.playEffect(propAni)
end

return GameSound