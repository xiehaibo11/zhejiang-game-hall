local AgentTransferModule = class("AgentTransferModule", XH.ModuleBase)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")
local TaskDefine = require("app.Define.TaskDefine")
local Config = require("lobby.Modules.AgentTransfer.Config")

function AgentTransferModule:ctor()
	AgentTransferModule.super.ctor(self)
end

function AgentTransferModule:getReqConfig()
    return {
        ReqTransferTime = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.respTransferTime },
    }
end

function AgentTransferModule:reqIsTransferBind()
    local strUrl = UrlConf.REQ_ZJ_TRANSFER_CHECKBIND .. self:getTransferUrlParam()
    XH.httpManager:RequestGet(HttpDefine.REQ_ZJ_TRANSFER_CHECKBIND, strUrl, 4, handler(self, self.respIsTransferBind))
    XH.TipTool.showLoading()
end

function AgentTransferModule:respIsTransferBind(eType, status, response)
    XH.TipTool.hideLoading()
	if eType ~= HttpDefine.REQ_ZJ_TRANSFER_CHECKBIND then
		return
	end
    if status == 200 and response.status == 0 then
		local responseData = response.data
		if not responseData then return end
		if responseData.is_bind_agent then
			self:onRegisterTransferTime()
			XH.userDefault:getValue(XH.userDefault.KEY_ID.TRANSFER_BINDCHECK_STATE, true)
		end			
    end
end

function AgentTransferModule:onRegisterTransferTime()
    self:startReq("ReqTransferTime", TaskDefine.TASK_ID.TASK_TYPE_ZJCOLLECTION_TRANSFERFLAG, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function AgentTransferModule:respTransferTime(cell, type, data)
end

function AgentTransferModule:getTransferUrlParam()
    local from = "pc"
	local lobbyId = XH.areaData:getLobbyID()
	local aid = Config.ActivityID[lobbyId]
	local secret = Config.Secrets[lobbyId]
	local appid = Config.AppId[lobbyId]
	if aid and secret and appid then
		local timestamp = os.time()
		local numid = XH.playerData:getNumberID()
		local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
		local uuid = XH.areaData:getAreaID()..numid..timestamp..math.random(9999)
		local signatureStr = "app_id="..appid.."&numid="..numid.."&secret="..secret.."&timestamp="..timestamp.."&uuid="..uuid
		local signature = XH.SysTool:md5_encode(signatureStr)
		local param = "from=%s&app_id=%d&timestamp=%s&signature=%s&numid=%d&uid=%s&uuid=%s&aid=%d"
		param = string.format(param, from, appid, timestamp, signature, numid, uid, uuid, aid)
		return param
	end
	return ""
end

function AgentTransferModule:shareToInvitePlayer(inviteUrl)
	if inviteUrl == nil or inviteUrl == "" then
		return
	end
    local function shareCallback()
		XH.TipTool.showToast("发送邀请链接成功", 3)		
	end
    if device.platform == "windows" then
		shareCallback()
		return
    end
    local shareInfo = {
		textTitle = "浙江游戏大厅", --分享标题
		textTitleUrl = "", --微信不用
		site = "", --微信不用
		siteUrl = "", --微信不用
		imagePath = "", --微信不用
		url = self._inviteUrl, --微信网页模式分享的链接
		type = "url", --word是文字分享，url网页模式分享，pic分享图片
		scene = "0", --0是分享到好友会话，1是分享到朋友圈
		imageUrl = "com.xm.zjgamecenter", --分享图片地址（分享网页模式，需要传安卓包名）
		text = "更新后手感也太好了！", --分享内容 
		comment = "download", --微信不用, 用以区分直接分享下载地址和游戏内link
	}  
    XH.sdkManager:startShare(shareInfo,shareCallback,self)
end

return AgentTransferModule