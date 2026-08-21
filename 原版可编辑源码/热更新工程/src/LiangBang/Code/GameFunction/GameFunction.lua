local GameFunCtion = import("GameCommon.Code.GameFunction.GameFunction")
--通过优胜值判断等级
function GameFunCtion.getLvByTypeScore(TypeScore)
    if TypeScore <= 0 then
        return "列兵"
    elseif TypeScore >= 1 and TypeScore <= 10 then
        return "上等兵"
    elseif TypeScore >= 11 and TypeScore <= 30 then
        return "下士"
    elseif TypeScore >= 31 and TypeScore <= 70 then
        return "中士"
    elseif TypeScore >= 71 and TypeScore <= 150 then
        return "上士"
    elseif TypeScore >= 151 and TypeScore <= 310 then
        return "少尉"
    elseif TypeScore >= 311 and TypeScore <= 630 then
        return "中尉"
    elseif TypeScore >= 631 and TypeScore <= 1270 then
        return "上尉"
    elseif TypeScore >= 1271 and TypeScore <= 2550 then
        return "少校"
    elseif TypeScore >= 2551 and TypeScore <= 5110 then
        return "中校"
    elseif TypeScore >= 5111 and TypeScore <= 10230 then
        return "上校"
    elseif TypeScore >= 10231 and TypeScore <= 20470 then
        return "大校"
    elseif TypeScore >= 20471 and TypeScore <= 40950 then
        return "少将"
    elseif TypeScore >= 40951 and TypeScore <= 81910 then
        return "中将"
    elseif TypeScore >= 81911 and TypeScore <= 163830 then
        return "上将"
    elseif TypeScore >= 163831 and TypeScore <= 327670 then
        return "五星上将"
    elseif TypeScore >= 327671 and TypeScore <= 655350 then
        return "双扣元帅"
    elseif TypeScore >= 655351 and TypeScore <= 1310710 then
        return "双扣王"
    elseif TypeScore >= 1310711 and TypeScore <= 2621430 then
        return "扣神"
    elseif TypeScore >= 2621431 and TypeScore <= 5242870 then
        return "扣圣"
    elseif TypeScore >= 5242871 and TypeScore <= 10485750 then
        return "扣王之王"
    elseif TypeScore >= 10485751 then
        return "双扣无敌"
    end
end

function GameFunCtion.isVoiceLimitVersion()
    return false
end

function GameFunCtion.stopSoundInSpeaking()
    AudioEngine.pauseMusic()
end

return GameFunCtion
