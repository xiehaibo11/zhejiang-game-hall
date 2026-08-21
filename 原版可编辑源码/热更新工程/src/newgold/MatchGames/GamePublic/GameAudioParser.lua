
local GameAudioParser = class('GameAudioParser')
local SCFyGame = {
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P2R ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_3P3R ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_4P2R ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDD_2P ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XLCH ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZDZ ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SC_LSMJ ] = 1,
    [g_gameConstant.GAME_PLAY_RULE_SC_MZMJ]  = 1,
    [g_gameConstant.GAME_PLAY_RULE_SC_DGKMJ]  = 1,
    [g_gameConstant.GAME_PLAY_RULE_RCMJ_RCWF]  = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_7]  = 1,
    [g_gameConstant.GAME_PLAY_RULE_SCMJ_XZ_JOKER]  = 1,
}
function GameAudioParser:ctor(mainRuler)
    self.mainRuler = ""
    if mainRuler then
        self.mainRuler = mainRuler
    end
    --self.GameCMD        = require(rootPath..".common.PDKCMD")
end

function GameAudioParser:isFyType()
    return g_gameGlobal:isFyType(self.mainRuler)
end

function GameAudioParser:getEffectFileForOperation( operationType , sex)
    local effectFile = nil
    local isFy = self:isFyType()

    if isFy then
        if self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ then
            effectFile = self:getPanzhihuaEffectFileForOperation(operationType, sex)
        elseif  SCFyGame and SCFyGame[self.mainRuler] and SCFyGame[self.mainRuler] == 1 then 
            effectFile = self:getSichuanEffectFileForOperation(operationType, sex)
        end
    end
    if effectFile == nil then
        effectFile = self:getPthEffectFileForOperation(operationType, sex)
    end
    return effectFile
end

function GameAudioParser:getEffectFileForName( fileName , sex)
    local effectFile = nil
    local isFy = self:isFyType()
    if isFy then
        if self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ then
            effectFile = self:getPanzhihuaEffectFileForName(fileName, sex)
        elseif  SCFyGame and SCFyGame[self.mainRuler] and SCFyGame[self.mainRuler] == 1 then 
            effectFile = self:getSichuanEffectFileForName(fileName, sex)
        end
    end
    if effectFile == nil then
        effectFile = self:getPthEffectFileForName(fileName, sex)
    end
    return effectFile
end

-- 根据牌值,性别获取音频文件路径
function GameAudioParser:getEffectFileForCardValue( cardValue , sex)
    local effectFile = nil
    local isFy = self:isFyType()
    if isFy then
        if self.mainRuler == g_gameConstant.GAME_PLAY_RULE_SC_PZHMJ then
            effectFile = self:getPanzhihuaEffectFileForCardValue(cardValue, sex)
        elseif  SCFyGame and SCFyGame[self.mainRuler] and SCFyGame[self.mainRuler] == 1 then 
            effectFile = self:getSichuanEffectFileForCardValue(cardValue, sex)
        end
    end
    if effectFile == nil then
        effectFile = self:getPthEffectFileForCardValue(cardValue, sex)
    end
    return effectFile
end

--攀枝花话
local panzhihuaDir = "subGame/pzhMjGame/sound/"
-- 根据类型,性别获取音频文件路径
function GameAudioParser:getPanzhihuaEffectFileForOperation(operationType, sex)
    local effectFile = panzhihuaDir

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "girl/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "boy/"
    end

    if operationType == g_gameConstant.OPERATION_CHI then
        effectFile = effectFile .. "chi0.mp3"
    elseif operationType == g_gameConstant.OPERATION_PENG then
        effectFile = effectFile .. "peng0.mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG then
        effectFile = effectFile .. "gangm.mp3"
    elseif operationType == g_gameConstant.OPERATION_AN_GANG then
        effectFile = effectFile .. "ganga.mp3"
    elseif operationType == g_gameConstant.OPERATION_HU then
        effectFile = effectFile .. "hu0.mp3"
    elseif operationType == g_gameConstant.OPERATION_ZIMO then
        effectFile = effectFile .. "zimo0.mp3"
    elseif operationType == g_gameConstant.OPERATION_BUHUA then
--        effectFile = effectFile .. "buhua0.mp3"
    elseif operationType == g_gameConstant.OPERATION_TIAO_WU then
        effectFile = effectFile .. "tw.mp3"
    elseif operationType == g_gameConstant.OPERATION_CHANG_GE then
        effectFile = effectFile .. "cg.mp3"
    else
        effectFile = nil
    end

    return effectFile
end

function GameAudioParser:getPanzhihuaEffectFileForName( fileName , sex)
    return nil
end

-- 根据牌值,性别获取音频文件路径
function GameAudioParser:getPanzhihuaEffectFileForCardValue( cardValue , sex)
    local paimianType = bit._and(cardValue*(2^(-4)), 0x3)
    local paimianValue = bit._and(cardValue, 0xf)
    if paimianType < 0 or paimianType > 3  then
        -- 只有万条筒字牌，0-4
        return
    end 

    local effectFile = panzhihuaDir


    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "girl/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "boy/"
    end

    if paimianType == 0 then
        effectFile = effectFile .. paimianValue .. "wan.mp3"
    elseif paimianType == 1 then
        effectFile = effectFile .. paimianValue .. "tiao.mp3"
    elseif paimianType == 2 then
        effectFile = effectFile .. paimianValue .. "tong.mp3"
    elseif paimianType == 3 then
--        effectFile = effectFile .. "3" .. paimianValue .. "_0.mp3"
    else
        effectFile = nil
    end
    return effectFile
end

------------- 四川话
GameAudioParser.siChuanHuaFile = "sound/sichuanhua/"
function GameAudioParser:getSichuanEffectFileForName(fileName , sex)

end 

function GameAudioParser:getSichuanEffectFileForOperation( operationType , sex)
    local effectFile = self.siChuanHuaFile

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "women/sc_girl_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "men/sc_boy_"
    end

    local sign = ""
    local randomNum = math.random(-1,2)
    if randomNum >= 0 then 
        sign = tostring(randomNum)
    end 

    if operationType == g_gameConstant.OPERATION_CHI then
        effectFile = effectFile .. "chi0.mp3"
    elseif operationType == g_gameConstant.OPERATION_PENG then
        effectFile = effectFile .. "peng"..sign..".mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG then
        effectFile = effectFile .. "guafeng.mp3"
    elseif operationType == g_gameConstant.OPERATION_AN_GANG then
        effectFile = effectFile .. "xiayu.mp3"
    elseif operationType == g_gameConstant.OPERATION_HU then
        effectFile = effectFile .. "hu"..sign..".mp3"
    elseif operationType == g_gameConstant.OPERATION_ZIMO then
        --effectFile = effectFile .. "zimo"..sign..".mp3"
        -- 暂时用胡来替代
        effectFile = effectFile .. "zimo"..sign..".mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG_LSMJ then
        effectFile = effectFile .. "gang"..".mp3"
    else
        effectFile = nil
    end

    return effectFile
end 

function GameAudioParser:getSichuanEffectFileForCardValue(cardValue , sex)
    local paimianType = bit._and(cardValue*(2^(-4)), 0x3)
    local paimianValue = bit._and(cardValue, 0xf)
    local effectFile = self.siChuanHuaFile
    -- 只有万条筒字牌，0-4
    if paimianType < 0 or paimianType > 3  then
        return
    end 

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "women/sc_girl_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "men/sc_boy_"
    end

    local sign = ""
    local randomNum = math.random(-1,2)
    if randomNum >= 0 then 
        sign = tostring(randomNum)
    end 

    if paimianType == 0 then
        effectFile = effectFile .. paimianValue .. "wan" .. sign .. ".mp3"
    elseif paimianType == 1 then
        effectFile = effectFile .. paimianValue .. "tiao" .. sign .. ".mp3"
    elseif paimianType == 2 then
        effectFile = effectFile .. paimianValue .. "tong" .. sign .. ".mp3"
    elseif paimianType == 3 then
        effectFile = effectFile .. paimianValue .. "feng" .. ".mp3"
    else 
        effectFile = nil 
    end

    return effectFile
end 

--------普通话
GameAudioParser.putonHuaFile = "sound/putonghua/"
-- 根据类型,性别获取音频文件路径
function GameAudioParser:getPthEffectFileForOperation( operationType , sex)
    local effectFile = self.putonHuaFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "female/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/"
    end

    if operationType == g_gameConstant.OPERATION_CHI then
        effectFile = effectFile .. "chi.mp3"
    elseif operationType == g_gameConstant.OPERATION_PENG then
        effectFile = effectFile .. "peng0.mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG then 
        effectFile = effectFile .. "guafeng.mp3"
    elseif operationType == g_gameConstant.OPERATION_AN_GANG then
        effectFile = effectFile .. "xiayu.mp3"
    elseif operationType == g_gameConstant.OPERATION_HU then
        --effectFile = effectFile .. "hu".. math.random(2) .. ".mp3"
        effectFile = effectFile .. "hu1.mp3"
    elseif operationType == g_gameConstant.OPERATION_ZIMO then
       -- effectFile = effectFile .. "zimo".. math.random(2) .. ".mp3"
        effectFile = effectFile .. "zimo2.mp3"
    elseif operationType == g_gameConstant.GAME_OPERATION_PLAYER_SHOW_CARDS then
        effectFile = effectFile .. "mingpai.mp3"
    elseif operationType == g_gameConstant.OPERATION_BUHUA then
        effectFile = effectFile .. "buhua.mp3"
    elseif operationType == g_gameConstant.OPERATION_1_YOU then
        effectFile = effectFile .. "1you.mp3"
    elseif operationType == g_gameConstant.OPERATION_2_YOU then
        effectFile = effectFile .. "2you.mp3"
    elseif operationType == g_gameConstant.OPERATION_3_YOU then
        effectFile = effectFile .. "3you.mp3"
    elseif operationType == g_gameConstant.OPERATION_QIANGJIN then
        effectFile = effectFile .. "qiangjin.mp3"
    elseif operationType == g_gameConstant.OPERATION_SHI_SAN_YAO then
        effectFile = effectFile .. "dahu.mp3"
    elseif operationType == g_gameConstant.OPERATION_SHANG_GA_1 then
        effectFile = effectFile .. "shangga_1.mp3"
    elseif operationType == g_gameConstant.OPERATION_SHANG_GA_2 then
        effectFile = effectFile .. "shangga_2.mp3"
    elseif operationType == g_gameConstant.OPERATION_SHANG_GA_3 then
        effectFile = effectFile .. "shangga_3.mp3"
    elseif operationType == g_gameConstant.OPERATION_SHANG_GA_5 then
        effectFile = effectFile .. "shangga_5.mp3"
    elseif operationType == g_gameConstant.OPERATION_GANG_LSMJ then
        effectFile = effectFile .. "gang0"..".mp3"
    
    elseif operationType == g_gameConstant.OPERATION_PIAO then
        effectFile = effectFile .. "piao"..".mp3"
    elseif operationType == g_gameConstant.OPERATION_PIAO_NO then
        effectFile = effectFile .. "bupiao"..".mp3"
    end

    return effectFile
end

function GameAudioParser:getPthEffectFileForName( fileName , sex)
    local effectFile = self.putonHuaFile

    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "female/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/"
    end

    effectFile = effectFile .. tostring(fileName)

    return effectFile
end

-- 根据牌值,性别获取音频文件路径
function GameAudioParser:getPthEffectFileForCardValue( cardValue , sex)
    local paimianType = bit._and(cardValue*(2^(-4)), 0x3)
    local paimianValue = bit._and(cardValue, 0xf)
    if paimianType < 0 or paimianType > 3  then
        -- 只有万条筒字牌，0-4
        return
    end 

    local effectFile = self.putonHuaFile


    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "female/"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/"
    end
    if paimianType == 0 then
        effectFile = effectFile .."wan_" .. paimianValue .. ".mp3"
    elseif paimianType == 1 then
        effectFile = effectFile .."tiao_" .. paimianValue .. ".mp3"
    elseif paimianType == 2 then
        effectFile = effectFile .. "tong_" .. paimianValue .. ".mp3"
    elseif paimianType == 3 then
        effectFile = effectFile .. "zi" .. paimianValue .. ".mp3"
    end
    return effectFile
end

--------跑得快普通话
GameAudioParser.PDKFile = "sound/pdk/"
-- GameAudioParser.GamePdkCMD        = require("newgold.MatchGames.subPKGame.pdkPokerGame.game.common.PDKCMD")
-- 根据类型,性别获取音频文件路径
function GameAudioParser:getPdkEffectFileForOperation( operationType , sex)
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    if operationType == self.GamePdkCMD.OUTTYPE_FEIJI then
        effectFile = effectFile .. "Feiji.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_SIDAISAN then
        effectFile = effectFile .. "Sidaisan.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_SIDAIER then
        effectFile = effectFile .. "Sidaier.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_THREEWITHTWO then
        effectFile = effectFile .. "Sandaier.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_THREEWITHONE then
        effectFile = effectFile .. "Sandaiyi.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_BOMB or operationType == self.GamePdkCMD.OUTTYPE_BOMBAAA  then
        effectFile = effectFile .. "Zhadan.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_DOUBLELINK then
        effectFile = effectFile .. "Liandui.mp3"
    elseif operationType == self.GamePdkCMD.OUTTYPE_SHUNZI then
        effectFile = effectFile .. "Shunzi.mp3"
    end
    
    return effectFile
end

function GameAudioParser:getPdkPaiValue( cardValue,outCardType, sex )
    if not cardValue then return end
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    local outType = ""
    if outCardType == self.GamePdkCMD.OUTTYPE_SINGLE then
        outType = "Single"
    elseif outCardType == self.GamePdkCMD.OUTTYPE_DOUBLE then
        outType = "Double"
    elseif outCardType == self.GamePdkCMD.OUTTYPE_THREE then
        outType = "San"
    end
    if cardValue > 13 then
        cardValue = cardValue - 13
    end
    effectFile = effectFile .. outType .. cardValue .. ".mp3"
    return effectFile
end

function GameAudioParser:getPdkSingleEnd( sex )
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    effectFile = effectFile .. "SingleEnd0.mp3"
    return effectFile 
end

function GameAudioParser:getPdkPass( sex )
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_Pass"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_Pass"
    end
    local sign = ""
    local randomNum = math.random(0,2)
    if randomNum >= 0 then 
        sign = tostring(randomNum)
    end 
    effectFile = effectFile .. sign .. ".mp3"

    return effectFile
end


--------跑得快普通话
GameAudioParser.PDKFile = "sound/pdk/"
GameAudioParser.GameDDZCMD = require("newgold.MatchGames.subPKGame.ddzPokerGame.game.common.DDZCMD")
-- 根据类型,性别获取音频文件路径
function GameAudioParser:getDdzEffectFileForOperation( operationType , sex)
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    if operationType == self.GameDDZCMD.OUTTYPE_FEIJI_DAN or operationType == self.GameDDZCMD.OUTTYPE_FEIJI_DUI or operationType == self.GameDDZCMD.OUTTYPE_FEIJI then
        effectFile = effectFile .. "Feiji.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_SIDAISAN then
        effectFile = effectFile .. "Sidaisan.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_SIDAIER then
        effectFile = effectFile .. "Sidaier.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_THREEWITHTWO then
        effectFile = effectFile .. "Sandaier.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_THREEWITHONE then
        effectFile = effectFile .. "Sandaiyi.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_BOMB then
        effectFile = effectFile .. "Zhadan.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_DOUBLELINK then
        effectFile = effectFile .. "Liandui.mp3"
    elseif operationType == self.GameDDZCMD.OUTTYPE_SHUNZI then
        effectFile = effectFile .. "Shunzi.mp3"
    elseif   operationType ==  self.GameDDZCMD.OUTTYPE_WANGZHA then
        effectFile = effectFile .. "wangzha.mp3"
    end
    
    return effectFile
end

function GameAudioParser:getDdzPaiValue( cardValue,outCardType, sex )
    if not cardValue then return end
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
   
  
    local outType = ""
    if outCardType == self.GameDDZCMD.OUTTYPE_SINGLE then
        outType = "Single"
    elseif outCardType == self.GameDDZCMD.OUTTYPE_DOUBLE then
        outType = "Double"
    elseif outCardType == self.GameDDZCMD.OUTTYPE_THREE then
        outType = "San"
    end
    if cardValue == 16 then
        cardValue = "JokerS"
    elseif cardValue == 17 then
        cardValue = "JokerL"
    elseif cardValue > 13 then
        cardValue = cardValue - 13
    end
    effectFile = effectFile .. outType .. cardValue .. ".mp3"
    return effectFile
end

function GameAudioParser:getDdzSingleEnd( sex )
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    effectFile = effectFile .. "SingleEnd0.mp3"
    return effectFile 
end

function GameAudioParser:getDdzPass( sex )
    local effectFile = self.PDKFile
    math.randomseed(os.time())
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_Pass"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_Pass"
    end
    local sign = ""
    local randomNum = math.random(0,2)
    if randomNum >= 0 then 
        sign = tostring(randomNum)
    end 
    effectFile = effectFile .. sign .. ".mp3"

    return effectFile
end

function GameAudioParser:getDdzOp(op,sex)
    if not op then return end
    local sex = ((sex ~= nil and type(sex) == "number") and sex or 0)
    local effectFile = self.PDKFile
    if sex == 0 then
        -- 女性
        effectFile = effectFile .. "woman/F_"
    elseif sex == 1 then
        -- 男性
        effectFile = effectFile .. "man/M_"
    end
    local sign = ""

    if op == self.GameDDZCMD.BTNOPERATE_ROB_DZ then -- 抢地主
        sign = "Rob1.mp3"
    elseif op == self.GameDDZCMD.BTNOPERATE_NO_ROB then-- 不抢
        sign = "NoRob.mp3" 
    elseif op == self.GameDDZCMD.BTNOPERATE_CALL_DZ then -- 叫地主
        sign = "Order.mp3" 
    elseif op == self.GameDDZCMD.BTNOPERATE_NO_CALL then-- 不叫
        sign = "NoOrder.mp3" 
        
    elseif op == self.GameDDZCMD.BTNOPERATE_JIAO_FEN_1 then-- 叫1分
        sign = "callscore_1.mp3" 
    elseif op == self.GameDDZCMD.BTNOPERATE_JIAO_FEN_2 then-- 2分
        sign = "callscore_2.mp3" 
    elseif op == self.GameDDZCMD.BTNOPERATE_JIAO_FEN_3 then-- 3分
        sign = "callscore_3.mp3" 
        
    elseif op == self.GameDDZCMD.BTNOPERATE_JIA_BEI then-- 加倍
        sign = "jiabei1.mp3" 
    elseif op == self.GameDDZCMD.BTNOPERATE_JIA_BEI_NO then-- 不加倍
        sign = "bujiabei1.mp3" 
    end
    effectFile = effectFile .. sign
    return effectFile
end





return GameAudioParser
