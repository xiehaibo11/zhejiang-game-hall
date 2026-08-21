CF = CF or {}

local CpmmonRootPath = "game.Common."

local initDefine = function()
    require(CpmmonRootPath .. "Define.DefineBridge")
end

local initConfig = function()
    require(CpmmonRootPath .. "Config.ConfigBridge")
    CF.gameSub = require(CpmmonRootPath .. "Config.GameSubConfiger").new()
    CF.RequireConfig = require(CpmmonRootPath .. "Config.RequireConfig")
end

local initBase = function()
    require(CpmmonRootPath .. "Base.BaseBridge")
    CF.ModuleBase = require(CpmmonRootPath .. "Base.ModuleBase")
    CF.ViewBase = require(CpmmonRootPath .. "Base.ViewBase")
end

local initTool = function()
    require(CpmmonRootPath .. "Tool.ToolBridge")
    CF.FileTool = require(CpmmonRootPath .. "Tool.FileTool")
    CF.StringTool = require(CpmmonRootPath .. "Tool.StringTool")
    CF.SysTool = require(CpmmonRootPath .. "Tool.SysTool")
    CF.UITool = require(CpmmonRootPath .. "Tool.UITool")
end

local initTip = function()
    CF.TipLayer = require(CpmmonRootPath .. "Tip.TipLayer")
    CF.LeaveRoomLayer = require(CpmmonRootPath .. "Tip.LeaveRoomLayer")
    CF.TipTool = require(CpmmonRootPath .. "Tip.TipTool")
    CF.popLayerManager = require(CpmmonRootPath .. "Tip.PopLayerManager").new()
end

local initProtocols = function()
    require(CpmmonRootPath .. "Protocols.ProtocolBridge")
    CF.AgBaseProtocol = require(CpmmonRootPath .. "Protocols.AgBaseProtocol")
    CF.GameMProtocol = require(CpmmonRootPath .. "Protocols.GameMProtocol")
    CF.LogicBaseProtocol = require(CpmmonRootPath .. "Protocols.LogicBaseProtocol")
    CF.ToolMProtocol = require(CpmmonRootPath .. "Protocols.ToolMProtocol")
    CF.GameProtocolGT = require(CpmmonRootPath .. "Protocols.GameProtocolGT")
end

local initProtobuf = function()
    CF.Protobuf = require(CpmmonRootPath .. "Protobuf.Protobuf")
    CF.PyrrlaProtobuf = require(CpmmonRootPath .. "Protobuf.ProtoFile.PyrrlaProtobuf")
    CF.RheaProtobuf = require(CpmmonRootPath .. "Protobuf.ProtoFile.RheaProtobuf")
end

local initReq = function()
    require(CpmmonRootPath .. "Req.ReqBridge")
end

local initNet = function()
    require(CpmmonRootPath .. "Net.NetBridge")
end

local initManager = function()
    require(CpmmonRootPath .. "Manager.ManagerBridge")
    require(CpmmonRootPath .. "Manager.LobbyManager")
    require(CpmmonRootPath .. "Manager.LoginManager")
    CF.requireManager = require(CpmmonRootPath .. "Manager.RequireManager").new()
    CF.httpManager = require(CpmmonRootPath .. "Manager.HttpManager").new()
    CF.audioManager = require(CpmmonRootPath .. "Manager.AudioManager").new()
    CF.configerManager = require(CpmmonRootPath .. "Manager.ConfigerManager").new()
    CF.sdkManager = require(CpmmonRootPath .. "Manager.SdkManager")
    CF.teaHouseManager = require(CpmmonRootPath .. "Manager.TeaHouseManager").new()
    CF.askIDManager = require(CpmmonRootPath .. "Manager.AskIDManager").new()
    CF.throwDataManager = require(CpmmonRootPath .."Manager.ThrowDataManager").new()
end

local initData = function()
    CF.selfPlayerData = require(CpmmonRootPath .. "Data.SelfPlayerData").new()
    CF.areaData = require(CpmmonRootPath .. "Data.AreaData").new()
end

local initHotupdate = function()
    require(CpmmonRootPath .. "Hotupdate.HotupdateBridge")
end

initDefine()
initConfig()
initBase()
initTool()
initTip()
initProtocols()
initProtobuf()
initReq()
initNet()
initManager()
initData()
initHotupdate()

CF.gameRequire = function(fileName)
    return CF.requireManager:require(fileName)
end

CF.gameClass = function(className, baseClass)
    if baseClass == nil or type(baseClass) ~= "string" then
        return class(className, baseClass)
    end
    if type(baseClass) == "string" and CF.FileTool.isFileExist(baseClass) then
        return class(className, require(baseClass))
    end
end

initManager()

CF.gameResourceRootPath = "cocosStudio/"
CF.gameSoundHotUpdate = true
CF.gameScriptRootPath = "game"
CF.isSupport = {
    ["GameBag"] = true,
    ["Im"] = true,
    ["Voice"] = true,
    ["Sxvip"] = true,
    ["SxVipGuide"] = true,
}
4