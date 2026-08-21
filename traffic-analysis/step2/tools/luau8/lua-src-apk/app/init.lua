
XH = {}

cjson = require "cjson"

function coroutine_resume_with_debug(co, ...)
    local successed, result = coroutine.resume(co, ...)
	if not successed then
		print(debug.traceback(co, result))
	end
end

--------------------------------------------------
-- 全局枚举
-- 直接挂载在XH下
--------------------------------------------------

local addDefineToGlobal = function (defineTable)
    for key, val in pairs(defineTable) do
        XH[key] = val
    end
end

local initDefine = function ()
    XH.HttpDefine = require("app.Define.HttpDefine")
    XH.ThirdDefine = require("app.Define.ThirdDefine")
    XH.MonitorPoint = require("app.Define.MonitorPoint")
    XH.ThrowDataDefine = require("app.Define.ThrowDataDefine")
    XH.NewThrowDataDefine = require("app.Define.ThrowDataMap")
    addDefineToGlobal(require("app.Define.GlobalDefine"))
end

local initBase = function ()
    XH.EventReceive = require("app.Base.Event.EventReceive")
    XH.ScheduleInterface = require("app.Base.Schedule.ScheduleInterface")

    XH.ModuleBase = require("app.Base.ModuleBase")
    XH.ManagerBase = require("app.Base.ManagerBase")
    XH.ViewBase = require("app.Base.ViewBase")
    XH.SceneBase = require("app.Base.SceneBase")

    XH.Req = require("app.Base.Req.Req")
    XH.ReqHttp = require("app.Base.Req.ReqHttp")
    XH.ReqProtocol = require("app.Base.Req.ReqProtocol")
    XH.ReqProtobuf = require("app.Base.Req.ReqProtobuf")
end

local initTool = function ()
    XH.BindUITool = require("app.Tool.BindUITool")
    XH.DebugTool = require("app.Tool.DebugTool")
    XH.StringTool = require("app.Tool.StringTool")
    XH.EncryptTool = require("app.Tool.EncryptTool")
    XH.SysTool = require("app.Tool.SysTool")
    XH.TableTool = require("app.Tool.TableTool")
    XH.AnalyseTool = require("app.Tool.AnalyseTool")
    XH.TipTool = require("app.Tip.TipTool")
    XH.UITool = require("app.Tool.UITool")
    XH.ChannelTool = require("app.Tool.ChannelTool")
end

local initUI = function ()
    XH.UIButton = require("app.Base.UI.UIButton")
    XH.UIRemoteImage = require("app.Base.UI.UIRemoteImage")
    XH.RemoteImage = require("app.Base.UI.RemoteImage")
    XH.RemoteSprite = require("app.Base.UI.RemoteSprite")
    XH.PickerScrollView = require("app.Base.UI.PickerScrollView")
end

local initProtocol = function ()
    XH.ToolProtocol = require("app.Protocols.ToolProtocol")
    XH.SRSProtocol = require("app.Protocols.SRSProtocol")
    XH.RoomProtocol = require("app.Protocols.RoomProtocol")
    XH.GameProtocol = require("app.Protocols.GameProtocol")
    XH.GameProtocolGT = require("app.Protocols.GameProtocolGT")
    XH.TaskProtocol = require("app.Protocols.TaskProtocol")
    XH.AgBaseProtocol = require("app.Protocols.AgBaseProtocol")

    XH.ActiveProtocol = require("app.Protocols.ActiveProtocol")
    XH.MatchLinkProtocol = require("app.Protocols.MatchLinkProtocol")
    XH.BoxDataProtocol = require("app.Protocols.BoxDataProtocol")
    XH.IMProtocol = require("app.Protocols.IMProtocol")
    XH.DispatchProtocol = require("app.Protocols.DispatchProtocol")
    XH.BagSysProtocol = require("app.Protocols.BagSysProtocol")
    XH.TeaHouseProtocol = require("app.Protocols.TeaHouseProtocol")
    XH.AuthProtocol = require("app.Protocols.AuthProtocol")
end

local initThird = function ()
    XH.bugly = require("app.Third.Bugly.BuglyUtil")
    XH.dhsdk = require("app.Third.dhsdk.Sdk")()
end

local initDatas = function ()
    XH.loginData = require("app.Data.LoginData").new()
    XH.areaData = require("app.Data.AreaData").new()
    XH.playerData = require("app.Data.PlayerData").new()
    XH.propsData = require("app.Data.PropsData").new()
end

local initManager = function ()
    XH.SceneManager = require("app.Manager.SceneManager")
    XH.viewManager = require("app.Manager.ViewManager"):getInstance()
    XH.httpManager = require("app.Manager.HttpManager"):getInstance()
    XH.userDefault = require("app.Manager.UserDefault")
    XH.askIDManager = require("app.Manager.AskIDManager").new()
    XH.httpManager50 = require("app.Manager.HttpManager50"):getInstance()
end

local addModule = function(className)
	XH.__modules = XH.__modules or {}
	local mod = require(className).new()
	table.insert(XH.__modules, mod)
	return mod
end

--把所有模块都清理掉
local clearAllModules = function()
	if not XH.__modules then
		return
	end
	for _, v in pairs(XH.__modules) do
		if v.removeAllEventListeners then
			v:removeAllEventListeners()
		end
		if v.clearSelf then
			v:clearSelf()
		end
	end
	XH.__modules = {}
end

local initModules = function()	
	clearAllModules()

	XH.netEngine = addModule("app.Net.NetEngine")
	XH.sdkManager = addModule("app.Manager.SdkManager")
	XH.audioManager = addModule("app.Manager.AudioManager")
	XH.taskManager = addModule("app.Manager.TaskManager")
	XH.teaHouseManager = addModule("app.Manager.TeaHouseManager")
	XH.configerManager = addModule("app.Manager.ConfigerManager")
	XH.roomManager = addModule("app.Manager.RoomManager")
    XH.goldConfigManager = addModule("app.Manager.GoldConfigManager")
    XH.throwDataManager = addModule("app.Manager.ThrowDataManager")
    XH.NewThrowDataManager = addModule("app.Manager.NewThrowDataManager")
end

cjson = require "cjson"
require("app.hotupdate.universe.init")
require("app.Config.NetConf")

XH.ConstString = require("app.Config.Parse.ConstString")
XH.ConstString.addConf(require("app.Config.ConstStringConf"))
XH.ReadGameListAndRuleConfig = require("app.Config.ReadGameListAndRuleConfig")

initDefine()
initProtocol()
initBase()
initTool()
initUI()
initThird()
initDatas()
initManager()
initModules()

XH.login = require("login.Manager").new()
XH.lobby = require("lobby.Manager").new()
XH.Controller = require("app.Controller")
XH.Controller:onInit()

XH.TDSDK = require("app.Third.ThinkData.Sdk")
XH.TDSDK:init()

-- 安卓合并
if device.platform == "android" or device.platform == "windows" then
    local isFileEXist = cc.FileUtils:getInstance():isFileExist("src/android/androidInit.lua")
    local isFileluacEXist = cc.FileUtils:getInstance():isFileExist("src/android/androidInit.luac")
    if isFileEXist or isFileluacEXist then
        require("android.androidInit")
    end
end

XH.GT = require("app.GtInit")
XH.bf = XH.GT.bf
XH.GT.UIFunction = require("app.Lobby32.UIFunction")
require("app.Lobby32.LuaFileCache")
require("app.Lobby32.BoxRoomCacheMgr")
�