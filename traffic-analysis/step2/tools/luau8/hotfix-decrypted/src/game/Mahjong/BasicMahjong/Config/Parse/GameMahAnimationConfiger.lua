-- 麻将动画配置表解析处理

local GameMahAnimationCfg = CF.gameRequire("Config.GameMahAnimation").MahjongAnimationByConfID

local GameMahAnimationConfiger = CF.gameClass("GameMahAnimationConfiger")

function GameMahAnimationConfiger:ctor()
    self._gameMahAnimationCfg = {}
	self:initData()
end

function GameMahAnimationConfiger:initData()
	for _,v in pairs(GameMahAnimationCfg) do
        self._gameMahAnimationCfg[v.JsonName] = v
    end
end

function GameMahAnimationConfiger:getMahAnimationCfg()
    return self._gameMahAnimationCfg
end

return GameMahAnimationConfiger^