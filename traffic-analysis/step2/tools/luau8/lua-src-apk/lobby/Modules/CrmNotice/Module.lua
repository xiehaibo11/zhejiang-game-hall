local CrmNoticeModule = class("CrmNoticeModule", XH.ModuleBase)
local CrmNoticeProtobuf = require("app.Protobuf.CrmNoticeProtobuf")

function CrmNoticeModule:ctor()
    CrmNoticeModule.super.ctor(self)
    self._crmNoticeCount = 0
    self._crmNoticeTime = 0
    XH.netEngine:addProtocolScriptFuncByObj(self, self.onProtocolCallBack, CrmNoticeProtobuf.processid, XH.areaData:getSrsGroupID())
end

function CrmNoticeModule:getReqConfig()
    return {
        ReqCrmNotice = { reqPath = "lobby.Req.CrmNotice.ReqCrmNotice", callBack = self.onGetCrmNoticeReply },
    }
end

function CrmNoticeModule:reqCrmNotice()
    self:startReq("ReqCrmNotice", 10)
end

function CrmNoticeModule:onGetCrmNoticeReply(req, nType, vData)
    if nType == XH.Req.TYPE.SUCCESS then
        --print("CrmNoticeModule onGetCrmNoticeReply", json.encode(vData))
        local crmNoticeData = vData.nXYData or {}
        if not crmNoticeData.time or crmNoticeData.time <= 0 then
            return
        end
        local cacheCrmNoticeTime = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_CRM_NOTICE_TIME)
        if cacheCrmNoticeTime < crmNoticeData.time then
            self._crmNoticeTime = crmNoticeData.time
            --self._crmNoticeCount = crmNoticeData.count
            self:showCrmNotice()
        end
    end
end

function CrmNoticeModule:showCrmNotice()
    XH.SysTool.performDelayOnce(function()
		local LobbyConfig = require("lobby.Modules.Lobby.Config")
        XH.lobby:getModule("Lobby"):showIconRedPos(LobbyConfig.ICON_ID.KE_FU, true);
	end, 0.1)
end

function CrmNoticeModule:clearCrmNotice()
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    XH.lobby:getModule("Lobby"):showIconRedPos(LobbyConfig.ICON_ID.KE_FU, false);
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_CRM_NOTICE_TIME, self._crmNoticeTime)
end

return CrmNoticeModulep