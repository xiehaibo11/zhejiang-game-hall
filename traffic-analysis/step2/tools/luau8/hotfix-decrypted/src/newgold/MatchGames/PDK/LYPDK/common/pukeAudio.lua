
--ganpengjin
local _pukeAudio = {}

local SOUND_PATH = {}
SOUND_PATH[LYPDKResource.SexMan] = "sound/ddz/man/"
SOUND_PATH[LYPDKResource.SexWoman] = "sound/ddz/woman/"

--播放多张牌声音
function _pukeAudio:playCardsSound(sex, soundType, value, isNew)
    -- body

    if isNew ~= true and ( not PublicFunc.isBomb(soundType) and 
            soundType ~= GameCMD.OUTTYPE_SINGLE
            and
            soundType ~= GameCMD.OUTTYPE_DOUBLE
            and
            soundType ~= GameCMD.PLAYER_YAO_BU_QI
            and
            soundType ~= GameCMD.ALERR_SOUND 
            and
            soundType ~= GameCMD.PLAYER_FUJI
            and 
            soundType ~= GameCMD.OUTTYPE_ERROR and
            soundType ~= GameCMD.OUTTYPE_BKING and 
            soundType == GameCMD.OUTTYPE_SKING and
            soundType ~= GameCMD.OUTTYPE_BDKING and 
            soundType == GameCMD.OUTTYPE_SDKING
        ) then

        math.randomseed(os.time())  
        local index = math.random(1, 3);
        if index < 3 then
            soundType = GameCMD.PLAYER_DA_PAI
        end
    end

    if soundType == GameCMD.OUTTYPE_SINGLE or 
        soundType == GameCMD.OUTTYPE_BKING or soundType == GameCMD.OUTTYPE_SKING 
    then
        self:playSingleCardSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_DOUBLE or
        soundType == GameCMD.OUTTYPE_BDKING or soundType == GameCMD.OUTTYPE_SDKING
        then
        self:playDoubleSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_DOUBLELINK then
        self:playDoubleLinkSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_THREEWITHTWO then
        self:playSanDaiTwoSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_THREEWITHONE then
        self:playSanDaiOneSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_THREE then
        self:playSanDaiXSound(sex, value)

    elseif soundType == GameCMD.OUTTYPE_FEIJI or soundType == GameCMD.OUTTYPE_FEIJINOMORE then
        self:playFeiJiSound(sex, value);

    elseif soundType == GameCMD.OUTTYPE_SHUNZI then
        self:playShunZiSound(sex, value);

    elseif PublicFunc.isBomb(soundType) then 
        self:playBoomSound(sex, value);
    elseif soundType == GameCMD.OUTTYPE_SIDAISAN then
        self:playSiDaiSanSound(sex, value);

    elseif soundType == GameCMD.OUTTYPE_SIDAIER then
        self:playSiDaiTwoSound(sex, value);

    elseif soundType == GameCMD.OUTTYPE_SIDAIYI then
        self:playSiDaiYiSound(sex, value);
    
    elseif soundType == GameCMD.PLAYER_FUJI then
        self:playPlayerFuJi(sex)

    elseif soundType == GameCMD.PLAYER_YAO_BU_QI then
        self:playYaoBuQiSound(sex);

    elseif soundType == GameCMD.PLAYER_DA_PAI then
        self:playPlayerDaPai(sex);
    
    elseif soundType == GameCMD.ALERR_SOUND then
        self:playAlertSFX();
    elseif soundType == GameCMD.BAN_JU_DA then
        self:playBenJuDaSound(sex, value)
    elseif soundType == GameCMD.OUTTYPE_TONGHUASHUN then
        self:playTonghuashunSound(sex)

    end
end

--播放炸弹
function _pukeAudio:playBoomSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "zhadan.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--播放单张牌
function _pukeAudio:playSingleCardSound(sex, value)
    -- body
    local prefx = "Man_"
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        prefx = "Woman_"
        path = LYPDKResource.SoundWomanRes
    end
    
    local t_value = value[1] % 16;
    if value[1] == 65 then
        t_value = 16
    end
    if value[1] == 66 then
        t_value = 17
    end
    local musice_name = path .. prefx .. t_value..".mp3";
    NG.soundManager:playMatchEffect(musice_name); 
end

--对子
function _pukeAudio:playDoubleSound(sex, value)
    -- body
    local prefx = "Man_dui"
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        prefx = "Woman_dui"
        path = LYPDKResource.SoundWomanRes
    end
    
    local t_value = value[1] % 16;
    if value[1] == 65 then
        t_value = 16
    end
    if value[1] == 66 then
        t_value = 17
    end
    local musice_name = path .. prefx .. t_value ..".mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--连对
function _pukeAudio:playDoubleLinkSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "liandui.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--三个***(除AAA)
function _pukeAudio:playSanDaiXSound(sex, value)
    -- body

    math.randomseed(os.time())  
    local default_path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then
        default_path = LYPDKResource.SoundWomanRes
    end
    
    local index = math.random(1, 2);
    local file_path = default_path .. "sange" .. tostring(index) .. ".mp3"
    NG.soundManager:playMatchEffect(file_path);
end

--三带一
function _pukeAudio:playSanDaiOneSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "sandaiyi.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--三带二
function _pukeAudio:playSanDaiTwoSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "sandaitwo.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--飞机
function _pukeAudio:playFeiJiSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "feiji.mp3";

    if g_gameGlobal:isGuandan() then
        musice_name =  path .. "gangban.mp3"
    end
    NG.soundManager:playMatchEffect(musice_name);
end

--顺子
function _pukeAudio:playShunZiSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "shunzi.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--四带一
function _pukeAudio:playSiDaiYiSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "sidaiyi.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--四带二
function _pukeAudio:playSiDaiTwoSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "sidaier.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--四带三
function _pukeAudio:playSiDaiSanSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "sidaisan.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end



--我先出
function _pukeAudio:playFirstOutSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "firstout.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end



--播放等待开始声音
function _pukeAudio:playWaitStartGameSound()
    -- body
    _pukeAudio:playBackGroundSound(LYPDKResource.SoundWaittingRes);
end

--播放打牌中声音
function _pukeAudio:playPlayingGameSound()
    -- body
    _pukeAudio:playBackGroundSound(LYPDKResource.SoundPlayGameRes);
end

--发牌声音
function _pukeAudio:playSendCardSound()
    -- body
    NG.soundManager:playMatchEffect(LYPDKResource.SoundSendCardRes);
end

--播放背景音乐
function _pukeAudio:playBackGroundSound(value)
    -- body
    if not value then
        return
    end
end

--停止背景音乐
function _pukeAudio:stopBackGroundSound()
    -- body
end

--播放音效
function _pukeAudio:playSFX(value)
    -- body
    if not value then
        return
    end

    NG.soundManager:playMatchEffect(value) 
end

--发牌要不起
function _pukeAudio:playYaoBuQiSound(sex)
    -- body
    local index = 1;
    math.randomseed(os.time())  
    local default_path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then
        default_path = LYPDKResource.SoundWomanRes
    end
    local file_path = default_path .. "buyao1" .. ".mp3"
    NG.soundManager:playMatchEffect(file_path);
end

function _pukeAudio:pauseBG()
end

--shengPaiAlarmClockSFX： 剩下牌警报音效
--sex: 性别
--sCardsCount： 剩下牌张数(1-2)张
function _pukeAudio:shengPaiAlarmClockSFX(sex, sCardsCount)
    -- body
    -- math.randomseed(os.time())  
    -- local index = math.random(1, 3);
    local default_path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then
        default_path = LYPDKResource.SoundWomanRes
    end
    local file_path = default_path .. "baojing1.mp3"
    NG.soundManager:playMatchEffect(file_path);
end

--春天
function _pukeAudio:playPlayerFuJi( sex )
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "fuji.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--大牌
function _pukeAudio:playPlayerDaPai( sex )
    -- body
    math.randomseed(os.time())  
    local default_path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then
        default_path = LYPDKResource.SoundWomanRes
    end
    
    local index = math.random(1, 2);
    local file_path = default_path .. "dani" .. tostring(index) .. ".mp3"
    NG.soundManager:playMatchEffect(file_path);
end

--警告声音
function _pukeAudio:playAlertSFX( sex )
    -- body
    local musice_name = LYPDKResource.SoundAlterCardRes;
    NG.soundManager:playMatchEffect(musice_name);
end

--本局打
function _pukeAudio:playBenJuDaSound(sex, value)
    -- body

    local prefx = "benjuda"
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        prefx = "benjuda"
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. prefx .. value ..".mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

--同花顺
function _pukeAudio:playTonghuashunSound(sex)
    -- body
    local path = LYPDKResource.SoundManRes
    if sex ~= LYPDKResource.SexMan then 
        --女
        path = LYPDKResource.SoundWomanRes
    end
    local musice_name = path .. "tonghuashun.mp3";
    NG.soundManager:playMatchEffect(musice_name);
end

function _pukeAudio:playOperationSound(sex, operation, opValue)
    
    if operation == g_gameConstant.MAHJONG_OPERTAION_SNATCH_DIZHU then
        self:playSnatchLandedSound(sex, opValue)
    elseif operation == g_gameConstant.MAHJONG_OPERTAION_CALL_SCORE then
        self:playCallScoreSound(sex, opValue)
    elseif operation == g_gameConstant.MAHJONG_OPERTAION_CALL_DIZHU then
        self:playCallLandedSound(sex, opValue)
    end 
end

--叫地主
function _pukeAudio:playCallLandedSound(sex, value)
    local soundPath = SOUND_PATH[sex]
    local name = "noOrder"
    if value == 1 then
        name = "order"
    end
    local soundName = soundPath .. name..".mp3"
    NG.soundManager:playMatchEffect(soundName)
end

--叫分
function _pukeAudio:playCallScoreSound(sex, value)
    local soundPath = SOUND_PATH[sex]
    local soundName = soundPath .. "callscore_"..value..".mp3"
    NG.soundManager:playMatchEffect(soundName)
end

--抢地主
function _pukeAudio:playSnatchLandedSound(sex, value)
    local soundPath = SOUND_PATH[sex]
    local name = "noRob"
    if value > 0 then
        name = "rob"..value
    end 
    local soundName = soundPath .. name..".mp3"
    NG.soundManager:playMatchEffect(soundName)
end

return _pukeAudio;M2