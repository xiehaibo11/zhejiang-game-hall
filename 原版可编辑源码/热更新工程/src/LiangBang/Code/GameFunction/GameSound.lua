local GameSoundBase = import("GameCommon.Code.GameFunction.GameSound")
local GameSound = class("GameSound",GameSoundBase)
local CURRENT_MOUDLE_NAME = ...
local MyCardsType = import("..GameAlgorithmTZ.MyCardsType",CURRENT_MOUDLE_NAME)
local GameSceneDefine = import("..GameScene.GameSceneDefine",CURRENT_MOUDLE_NAME)
local gameID = '30227'

local KW_MP3_QIAO_PI_HUA = {
    [101]="_Speak101.mp3",
    [102]="_Speak102.mp3",
    [103]="_Speak103.mp3",
    [104]="_Speak104.mp3",
    [105]="_Speak105.mp3",
    [106]="_Speak106.mp3",
    [107]="_Speak107.mp3",
    [108]="_Speak108.mp3",
    [109]="_Speak109.mp3",
    [110]="_Speak110.mp3",
    [111]="_Speak111.mp3",
    [112]="_Speak112.mp3",
    [113]="_Speak113.mp3",
    [114]="_Speak114.mp3",
    [115]="_Speak115.mp3",
    [116]="_Speak116.mp3",
    [117]="_Speak117.mp3",
    [118]="_Speak118.mp3",
    [119]="_Speak119.mp3",
    [120]="_Speak120.mp3",

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
    [11]="",
    [12]="",
    [13]="",
    [14]="",
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

local KW_PATH_SOUND_FILE = GameSceneDefine.KW_GAME_PATH .. "/Sound/" 
local PATH_SPEAK_FILE = "Speak/"
local PATH_MAN_FILE = "Men/"
local SEX_MAN = "M_Speak"
local PATH_WOMAN_FILE = "Women/"
local SEX_WOMAN = "W_Speak"
local PATH_CARDLAYER_FILE = "CardLayer/"
local PATH_CARDTYPE_MAN_FILE = "Men/"
local PATH_CARDTYPE_WOMAN_FILE = "Women/"

local FIX_MSG = 'fix_msg_'

local shuffleEffectHandle = nil

function GameSound.playSoundQiaoPiHua(seat,index,gameID,isFangYan)
    isFangYan = false
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    local player = Game.PlayerData.getPlayerBySeat(seat)
    if player == nil then
        return
    end
    local playerSex = player:getSex()
    local path = ""
    if playerSex == 1 then
        if isFangYan then
            path = PATH_SPEAK_FILE .. PATH_MAN_FILE .. FIX_MSG .. index ..".mp3"
        else
            path = "0/" .. PATH_SPEAK_FILE .. PATH_MAN_FILE .. FIX_MSG .. index ..".mp3"
        end
    else
        if isFangYan then
            path = PATH_SPEAK_FILE .. PATH_WOMAN_FILE .. FIX_MSG .. index ..".mp3"
        else
            path = "0/" .. PATH_SPEAK_FILE .. PATH_WOMAN_FILE .. FIX_MSG .. index ..".mp3"
        end
    end
    if gameID ~= nil then   --走默认的
        if GameSound:isSoundHotUpdateMenuExist(gameID) == true then
            if GameSound:isSoundHotUpdateFileExist(KW_PATH_SOUND_FILE..path,gameID) == false and gameID ~= 0 then
                --热更新目录存在,热更新文件不存在,就不播放
                return 
            end
        end    
    end

    local isExist = cc.FileUtils:getInstance():isFileExist(KW_PATH_SOUND_FILE..path)
    if isExist then
        GameSound.playEffect(KW_PATH_SOUND_FILE..path)
    else
        if isFangYan then
            GameSound.playSoundQiaoPiHua(seat,index,gameID,false)
        end
    end
end

function GameSound:isSoundHotUpdateMenuExist(gameID)
    return cc.FileUtils:getInstance():isFileExist(cc.FileUtils:getInstance():getWritablePath() .. gameID .. "/" .. tostring(cc.UserDefault:getInstance():getIntegerForKey("KW_DATA_VERSION_INDEX" .. gameID,0)) .. "/")
end

function GameSound.playSoundPlayCardType(sex,cardGroup,isFollow)
    print('hcc>> KW_PATH_SOUND_FILE' .. tostring(KW_PATH_SOUND_FILE))
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    local SetData = import("GameCommon.Code.GameData.SetData")
    print('hcc>>cardGroup.tType: '.. tostring(cardGroup.tType))

    if SetData.getDialectOpen() == true then
        GameSound.playSoundPlayCardTypeFangYan(sex, cardGroup,isFollow)
        return
    end

    local path = nil 
    if sex == 49 or sex == 1 then
        path = "0/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_MAN_FILE
    else
        path = "0/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_WOMAN_FILE
    end
    -- 三带二 飞机带连对没有音效
    if not cardGroup.tType then
        return
    end

    if cardGroup.tType >= MyCardsType.CardsType.CT_3_JUNKO_2_CONTINUOUS and cardGroup.tType <= MyCardsType.CardsType.CT_3_JUNKO_8_CONTINUOUS then
        return
    end

    if cardGroup.tType >= MyCardsType.CardsType.FEIJIDAILIANDUI_1_CONTINUOUS and cardGroup.tType <= MyCardsType.CardsType.FEIJIDAILIANDUI_5_CONTINUOUS then
        return
    end

    if cardGroup.tType < MyCardsType.CardsType.CT_4_JUNKO_1_CONTINUOUS then
        if cardGroup.tType % 100 == 1 then      
            path = path..math.floor(cardGroup.tType / 100).."_"..cardGroup.tPower..".mp3"
        else
            if cardGroup.tType == MyCardsType.CardsType.CT_2_JUNKO_2_CONTINUOUS then
                path = path.."s_22.mp3"
            else
                path = path.."s_"..math.floor(cardGroup.tType / 100)..".mp3"
            end
        end       
    else
        local CardFunction = import("..GameAlgorithmTZ.CardAlgorithm",CURRENT_MOUDLE_NAME)
        local boomXian = CardFunction.GetXianByType( cardGroup.tType)
        if boomXian > 0 then
            GameSound.playEffect(KW_PATH_SOUND_FILE..KW_MP3_CARD_TYPE_BOOM[boomXian])
        end
        if cardGroup.tType % 100 == 1 then          
            local tmpPath = path..math.floor(cardGroup.tType / 100).."_"..cardGroup.tPower..".mp3"
            if KW_MP3_CARD_TYPE_XIAN[math.floor(cardGroup.tType / 100)] ~= "" then
                tmpPath = path..KW_MP3_CARD_TYPE_XIAN[math.floor(cardGroup.tType / 100)]    
            end
            path = tmpPath
        else
            if cardGroup.tType > MyCardsType.CardsType.CT_0_KING then
                local count = cardGroup.tType - MyCardsType.CardsType.CT_3_KING + 3 
                path = path.."wang_"..count..".mp3"                       
            else
                path = path.."lian_"..math.floor(cardGroup.tType % 100).."_"..math.random(2)..".mp3"
            end
        end     
    end
    print('hcc>> playSoundPlayCardType333')
    local soundpath = KW_PATH_SOUND_FILE..path
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end
end

function GameSound.playSoundPlayCardTypeFangYan(sex,cardGroup,isFollow)
    if not cardGroup.tType then
        return
    end

    local path = nil 
    if sex == 49 or sex == 1 then
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_MAN_FILE
    else
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_WOMAN_FILE
    end

    if cardGroup.tType < MyCardsType.CardsType.CT_4_JUNKO_1_CONTINUOUS then
        -- 单张，对子，连对，单顺，三张,三代二，连三张,连三张带连对
        if cardGroup.tType % 100 == 1  then -- 单张，对子，三张
            if cardGroup.tType == MyCardsType.CardsType.CT_1_JUNKO_1_CONTINUOUS then --单张
                local randStr = '_1'
                local power = cardGroup.tPower
                local junko = math.floor(cardGroup.tType / 100)
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
                path = path .. math.floor(cardGroup.tType / 100) .. "_" .. tostring(cardGroup.tPower) .. randStr .. ".mp3"
            elseif cardGroup.tType == MyCardsType.CardsType.CT_2_JUNKO_1_CONTINUOUS then --对子
                local randStr = '_' .. math.random(2)
                path = path .. math.floor(cardGroup.tType / 100) .. "_" .. tostring(cardGroup.tPower) .. randStr .. ".mp3"
            elseif cardGroup.tType == MyCardsType.CardsType.CT_3_JUNKO_1_CONTINUOUS then --三张
                local randStr = '_1'
                local power = cardGroup.tPower
                if power == 11 then
                    randStr = '_' .. math.random(3)
                elseif power == 12 then
                    randStr = '_' .. math.random(2)
                end
                path = path .. math.floor(cardGroup.tType / 100) .. "_" .. tostring(cardGroup.tPower) .. randStr .. ".mp3"
            end
        elseif cardGroup.tType == MyCardsType.CardsType.CT_1_JUNKO_5_CONTINUOUS then 
            -- 单顺
            path = path .. "1_0_5.mp3"
        elseif cardGroup.tType >= MyCardsType.CardsType.CT_2_JUNKO_2_CONTINUOUS and cardGroup.tType <= MyCardsType.CardsType.CT_2_JUNKO_12_CONTINUOUS then
            --连对
            path = path .. "2_0_2.mp3"
        elseif cardGroup.tType == MyCardsType.CardsType.FEIJIDAILIANDUI_1_CONTINUOUS then
            --三代二
            path = path .. "3_2_1.mp3"
        elseif cardGroup.tType >= MyCardsType.CardsType.CT_3_JUNKO_2_CONTINUOUS and cardGroup.tType <= MyCardsType.CardsType.CT_3_JUNKO_8_CONTINUOUS then
            --连三张
            path = path .. "3_0_2.mp3"
        elseif cardGroup.tType >= MyCardsType.CardsType.FEIJIDAILIANDUI_2_CONTINUOUS and cardGroup.tType <= MyCardsType.CardsType.FEIJIDAILIANDUI_5_CONTINUOUS then
            --连三张带连对
            path = path .. "3_2_2.mp3"
        end
    else
        -- 炸弹，连炸，天王炸
        if cardGroup.tType == MyCardsType.CardsType.CT_4_JUNKO_1_CONTINUOUS then
            --4线单炸
            local randStr = '_1'
            local power = cardGroup.tPower
            if power == 11 then
                randStr = '_' .. math.random(3)
            elseif power == 12 then
                randStr = '_' .. math.random(2)
            end
            path = path .. '4_' .. tostring(cardGroup.tPower) .. randStr .. ".mp3"
        elseif cardGroup.tType % 100 == 1 and cardGroup.tType >= MyCardsType.CardsType.CT_5_JUNKO_1_CONTINUOUS then
            --5线以上单炸
            local randStr = '_' .. math.random(3)
            path = path .. 'xian_' .. tostring(math.floor(cardGroup.tType/100)) .. randStr .. ".mp3"
        elseif cardGroup.tType % 100 >= 3 and cardGroup.tType < MyCardsType.CardsType.CT_0_KING then
            --连炸
            path = path .. '4_0_' .. tostring(cardGroup.tType % 100) .. ".mp3"
        elseif cardGroup.tType == MyCardsType.CardsType.CT_4_KING then
            --天王炸
            local randStr = '_' .. math.random(2)
            path = path .. '10007' .. randStr .. ".mp3"
        end
        -- 纯炸弹音效
        -- path = path .. '4_0_1.mp3'  --TEMP
    end
    local soundpath = KW_PATH_SOUND_FILE .. path
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> fangyan>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end
end

function GameSound.playSoundPass(sex)
    if KW_PATH_SOUND_FILE == nil then
        return
    end

    local SetData = import("GameCommon.Code.GameData.SetData")
    if SetData.getDialectOpen() == false then
        return
    end

    local path = nil 
    if sex == 49 or sex == 1 then
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_MAN_FILE
    else
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_WOMAN_FILE
    end

    path = path .. 'buyao_' .. math.random(4) .. '.mp3'

    local soundpath = KW_PATH_SOUND_FILE .. path
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundPass>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end
end
--音效: 大你
function GameSound.playSoundBigger(sex)
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    
    local SetData = import("GameCommon.Code.GameData.SetData")
    if SetData.getDialectOpen() == false then
        return
    end

    local path = nil
    if sex == 49 or sex == 1 then
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_MAN_FILE
    else
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_WOMAN_FILE
    end

    path = path .. 'dani_' .. math.random(3) .. '.mp3'

    local soundpath = KW_PATH_SOUND_FILE .. path
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundBigger>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end
end
--音效: 报警
function GameSound.playSoundAlert(sex)
    if KW_PATH_SOUND_FILE == nil then
        return
    end
    
    local SetData = import("GameCommon.Code.GameData.SetData")
    if SetData.getDialectOpen() == false then
        return
    end

    local path = nil
    if sex == 49 or sex == 1 then
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_MAN_FILE
    else
        path = gameID .. "/" .. PATH_CARDLAYER_FILE .. PATH_CARDTYPE_WOMAN_FILE
    end

    path = path .. 'baojing_' .. math.random(2) .. '.mp3'

    local soundpath = KW_PATH_SOUND_FILE .. path
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundAlert>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end
end

function GameSound.playSoundBomb()
    local soundpath = KW_PATH_SOUND_FILE .. 'bomb_6_7.mp3'
   local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundBomb>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        GameSound.playEffect(soundpath)
    end 
end

function GameSound.playBackGroundMusic()
    local soundpath = KW_PATH_SOUND_FILE .. 'ffz_music_bg.mp3'
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundBomb>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist then
        AudioEngine.playMusic(soundpath, true)
    end
end

function GameSound.playSoundShuffle(flag)
    local soundpath = KW_PATH_SOUND_FILE .. 'ffz_takefirst.mp3'
    local isExist = cc.FileUtils:getInstance():isFileExist(soundpath)
    print('hcc>> playSoundBomb>> soundpath: ' .. tostring(soundpath) .. ' ,isExist>> ' .. tostring(isExist))
    if isExist and flag then
        shuffleEffectHandle = AudioEngine.playEffect(soundpath,true)
    end
    if not flag and shuffleEffectHandle then
        AudioEngine.stopEffect(shuffleEffectHandle)
    end
end

function GameSound.stopAllEffects()
    AudioEngine.stopAllEffects()
end

return GameSound