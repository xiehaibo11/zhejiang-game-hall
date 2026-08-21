NG = {}

local CommonRootPath = "newgold.GoldCommon."

local initDefine = function()
    require(CommonRootPath .. "Define.GoldGlobalDefine")
    NG.GameID = require(CommonRootPath .. "Define.GoldGameID")
    NG.GoldThrowDataDefine = require(CommonRootPath .. "Define.GoldThrowDataMap")
end

local initConfig = function()
    NG.AreaConfig = require(CommonRootPath .. "Config.GoldAreaConfig")
    NG.NetConf = require(CommonRootPath .. "Config.GoldNetConf")
    NG.UrlConf = require(CommonRootPath .. "Config.GoldUrlConf")
end

local initBase = function()
    NG.EventReceive = XH.EventReceive
    NG.SceneBase = XH.SceneBase
    NG.ModuleBase = XH.ModuleBase
    NG.ManagerBase = require(CommonRootPath .. "Base.GoldManagerBase")
    NG.ViewBase = require(CommonRootPath .. "Base.GoldViewBase")
    NG.Req = require(CommonRootPath .. "Base.Req.GoldReq")
    NG.ReqHttp = require(CommonRootPath .. "Base.Req.GoldReqHttp")
    NG.httpManager50 = require(CommonRootPath .. "Manager.GoldHttpManager50"):getInstance()
    NG.HttpDefine = require(CommonRootPath .. "Define.GoldHttpDefine")
    NG.netEngine = XH.netEngine
    NG.GoldProtoBufReq = require(CommonRootPath .. "Req.GoldReqProtobuf")
    NG.GoldProtocolReq = require(CommonRootPath .. "Req.GoldReqProtocol")
end

local initTool = function()
    NG.UITool = require(CommonRootPath .. "Tool.GoldUITool")
    NG.BindUITool = require(CommonRootPath .. "Tool.GoldBindUITool")
    NG.SysTool = require(CommonRootPath .. "Tool.GoldSysTool")
    NG.TipTool = require(CommonRootPath .. "Tool.GoldTipTool")
    NG.FileTool = require(CommonRootPath .. "Tool.GoldFileTool")
    NG.StringTool = require(CommonRootPath .. "Tool.GoldStringTool")
    NG.ChannelTool = require(CommonRootPath .. "Tool.GoldChannelTool")
    NG.RoomTool = require(CommonRootPath .. "Tool.GoldRoomTool")
end

local initUI = function()
    NG.RemoteSprite = XH.RemoteSprite
    NG.RemoteImage = XH.RemoteImage
end

local initDatas = function()
    NG.playerData = require(CommonRootPath .. "Data.GoldPlayerData").new()
end

local initRemoteConfig = function()
    local configModule = XH.lobby:getModule("Configuration")
    if configModule then
        NG.remoteAllConfig = configModule:getConfigJsonData("zhejiang-all-total", "AllConfig")
    else
        NG.remoteAllConfig = {}
    end
end

local initManager = function()
    NG.sdkManager = require(CommonRootPath .. "Manager.GoldSdkManager")
    NG.sceneManager = require(CommonRootPath .. "Manager.GoldSceneManager").new()
    NG.viewManager = XH.viewManager
    NG.throwDataManager = require(CommonRootPath .. "Manager.GoldThrowDataManager").new()
    NG.audioManager = require(CommonRootPath .. "Manager.GoldAudioManager").new()
    NG.httpManager = require(CommonRootPath .. "Manager.GoldHttpManager").new()
    NG.userDefault = require(CommonRootPath .. "Manager.GoldUserDefault")
end

local initProtocol = function()
    NG.ToolProtocol = require(CommonRootPath .. "Protocols.GoldToolProtocol")
    NG.SRSProtocol = require(CommonRootPath .. "Protocols.GoldSRSProtocol")
    NG.LogicBaseProtocol = require(CommonRootPath .. "Protocols.LogicBaseProtocol")
    NG.GameMProtocol = require(CommonRootPath .. "Protocols.GameMProtocol")
    NG.PlayerPlaceProcess = require(CommonRootPath .. "Protocols.PlayerPlaceProcess")
end

initDefine()
initConfig()
initBase()
initTool()
initUI()
initManager()
initProtocol()
initRemoteConfig()