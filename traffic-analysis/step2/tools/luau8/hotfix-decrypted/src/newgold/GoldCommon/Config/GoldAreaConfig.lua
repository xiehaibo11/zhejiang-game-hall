local GoldAreaConfig = {}

GoldAreaConfig.BridgeTenantID = XH.areaData:getTenantid()
GoldAreaConfig.BridgeAreaID = XH.areaData:getAreaID()
GoldAreaConfig.BridgeLobbyID = XH.areaData:getLobbyID()
GoldAreaConfig.BridgeDiamndID = XH.areaData:getPropDiamndID()
GoldAreaConfig.BridgeGroupID = XH.areaData:getSrsGroupID()
GoldAreaConfig.BridgeGameID = XH.areaData:getConfigGameID()
local GlobalCfg = require("app.Config.GlobalConfig")
GoldAreaConfig.BridgeIsDebug = GlobalCfg.IsDebug

GoldAreaConfig.TenantID = 7
GoldAreaConfig.AreaID = 5162
GoldAreaConfig.GroupID = 7160
GoldAreaConfig.JoyBeanID = 101788 -- 欢乐豆ID
GoldAreaConfig.WindId = 1352 -- 风信ID
GoldAreaConfig.LZDDZ = 42210 -- 连炸斗地主gameid
GoldAreaConfig.MAH_BBXL = 20801 -- 百变血流gameid
GoldAreaConfig.PEAKRACE = 1 -- 巅峰赛gameid

GoldAreaConfig.PEAKRACE_XZDD = 20479 -- 巅峰赛血战到底gameid
GoldAreaConfig.PEAKRACE_DDZ = 20496 -- 巅峰赛斗地主gameid
GoldAreaConfig.PEAKRACE_PDK = 20503 -- 巅峰赛跑得快gameid

if GoldAreaConfig.BridgeIsDebug then
    GoldAreaConfig.GroupID = 5009
end

return GoldAreaConfig
p