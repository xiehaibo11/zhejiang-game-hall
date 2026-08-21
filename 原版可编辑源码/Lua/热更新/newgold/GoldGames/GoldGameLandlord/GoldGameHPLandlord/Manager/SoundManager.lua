local SoundManager = NG.GAME.gameClass("SoundManager", "newgold.GoldGames.GoldGameBase.Manager.SoundManager")
local GameMainDefine = NG.GAME.gameRequire("Modules.GameMain.Define.GameMainDefine")
local GoldSoundConfig = NG.GAME.gameRequire("Config.GoldSoundConfig")

function SoundManager:ctor()
    SoundManager.super.ctor(self)
end

function SoundManager:getSoundBasePath()
    return self._basePath .. "42210/"
end

-- 普通播放音效
function SoundManager:playNormalEffect(path)
    self:playEffect(path)
end

-- 播放俏皮话音效
function SoundManager:playTalkEffect(index)
    local path = GameMainDefine.ChatListSound[index]
    if path == nil then
        return
    end
    local soundPath = self:getSoundBasePath() .. "talk/man/Man" .. path
    if not self:isManSound() then
        soundPath = self:getSoundBasePath() .. "talk/woman/Woman" .. path
    end
    self:playEffect(soundPath)
end

function SoundManager:get_num_by_cardVal(val)
    if val == GameMainDefine.CardValue.CV_A then
        return 14
    elseif val == GameMainDefine.CardValue.CV_SJ then
        return 15
    elseif val == GameMainDefine.CardValue.CV_BJ then
        return 16
    else
        return val
    end
end

function SoundManager:getCardSoundPath()
    local soundPath = self:getSoundBasePath() .. "Dialect/PTH/Man/Man"
    if not self:isManSound() then
        soundPath = self:getSoundBasePath() .. "Dialect/PTH/Woman/Woman"
    end
    return soundPath
end

-- 播放其他类型音效(阶段等)
function SoundManager:playOtherEffect(type)
    local path = self:getOtherSoundPath(type)
    if path == "" then
        return
    end
    self:playEffect(path)
end

function SoundManager:getOtherSoundPath(type)
    if type == nil then
        return ""
    end
    if type == GoldSoundConfig.otherRob then -- 不叫地主
        local name = ""
        local idx = math.floor(math.random() * 3)
        if idx == 0 then
            name = "_Rob1" -- 第1轮抢地主
        elseif idx == 1 then
            name = "_Rob2" -- 第2轮抢地主
        elseif idx == 2 then
            name = "_Rob3" -- 第3轮抢地主
        end
        return self:getCardSoundPath() .. name
    elseif type == GoldSoundConfig.otherBuyao then -- 不要
        local name = ""
        local idx = math.floor(math.random() * 4)
        if idx == 0 then
            name = "_buyao1" -- 不要
        elseif idx == 1 then
            name = "_buyao2" -- PASS
        elseif idx == 2 then
            name = "_buyao3" -- 过
        elseif idx == 3 then
            name = "_buyao4" -- 要不起
        end
        return self:getCardSoundPath() .. name
    end
    return self:getCardSoundPath() .. type
    -- 压牌-大你*/ 没看到使用
    -- get dani() {
    --   let name = ""
    --   let idx = Math.floor(Math.random() * 3)
    --   if (idx == 0) {
    --       name = "_dani1"--压牌-大你
    --   } else if (idx == 1) {
    --       name = "_dani2"--压牌-管上
    --   } else if (idx == 2) {
    --       name = "_dani3"--压牌-压死
    --   }
    --   return self:getCardSoundPath() .. name
    -- },
end

-- 播放牌类音效
function SoundManager:playCardEffect(type, cards)
    if type == nil or cards == nil then
        return
    end
    local path = ""
    local soundEffectPath = ""
    local cardVal = self:get_num_by_cardVal(GameMainDefine.ucCardValue[cards[1]])
    if type == GameMainDefine.CardType.CTID_YI_ZHANG then
        path = self:getCardSoundPath() .. "_" .. cardVal
    elseif type == GameMainDefine.CardType.CTID_ER_ZHANG then
        path = self:getCardSoundPath() .. "_dui" .. cardVal
    elseif type == GameMainDefine.CardType.CTID_SAN_ZHANG then
        path = self:getCardSoundPath() .. "_tuple" .. cardVal
    elseif type == GameMainDefine.CardType.CTID_SI_ZHANG then -- 炸
        path = self:getCardSoundPath() .. "_zhadan"
        soundEffectPath = GoldSoundConfig.boom1
    elseif type == GameMainDefine.CardType.CTID_YI_SHUN then -- 单顺
        path = self:getCardSoundPath() .. "_shunzi"
    elseif type == GameMainDefine.CardType.CTID_ER_SHUN then -- 二顺
        path = self:getCardSoundPath() .. "_liandui"
    elseif type == GameMainDefine.CardType.CTID_SAN_SHUN then -- 飞机
        path = self:getCardSoundPath() .. "_feiji"
        soundEffectPath = GoldSoundConfig.feiJi
    elseif type == GameMainDefine.CardType.CTID_SAN_DAI_YI then -- 三带一
        path = self:getCardSoundPath() .. "_sandaiyi"
    elseif type == GameMainDefine.CardType.CTID_SAN_DAI_ER then -- 三带对子
        path = self:getCardSoundPath() .. "_sandaiyidui"
    elseif type == GameMainDefine.CardType.CTID_FEI_JI then -- 飞机带翅膀
        path = self:getCardSoundPath() .. "_feijichibang"
        soundEffectPath = GoldSoundConfig.feiJi
    elseif type == GameMainDefine.CardType.CTID_HUO_JIAN then --	王炸
        path = self:getCardSoundPath() .. "_wangzha"
        soundEffectPath = GoldSoundConfig.boom1
    elseif type == GameMainDefine.CardType.CTID_SI_DAI_ER then -- 四带二张 
        path = self:getCardSoundPath() .. "_sidaier"
    elseif type == GameMainDefine.CardType.CTID_SI_DAI_ER_DUI then -- 四带二对(四带二个对)		 
        path = self:getCardSoundPath() .. "_sidailiangdui"
    elseif type == GameMainDefine.CardType.CTID_SI_SHUN then -- 连炸
        local len = #cards / 4
        path = self:getCardSoundPath() .. "_zhadan" .. len
        -- todo
        -- sound.playMusic(GameSoundConfig.bgMusic2, true, GameSoundConfig.bundleName)
    end
    if soundEffectPath ~= "" then
        self:playEffect(soundEffectPath)
    end
    if path ~= "" then
        self:playEffect(path)
    end
    if #cards == 1 then
        self:playEffect(GoldSoundConfig.outCard)
    elseif #cards > 1 then
        self:playEffect(GoldSoundConfig.outCard2)
    end
end

return SoundManager
