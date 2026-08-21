local GoldReqToken50 = class("GoldReqToken50", XH.ReqProtobuf)
local GoldAreaConfig = require("newgold.GoldCommon.Config.GoldAreaConfig")
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")

function GoldReqToken50:ctor()
    GoldReqToken50.super.ctor(self)
    self._protobuf = require("app.Protobuf.TeaHouseProtobuf")
    self._reqProtobuf = self._protobuf.TokenRequest
    self._ask_id = -1
end

function GoldReqToken50:start(tenanaid, areaid, numid, groupid, timeoutTime)
    if GoldReqToken50.super.start(self, timeoutTime) == false then
        return
    end
    self._ask_id = os.time()
    self._reqProtobuf.data.tenant_id = tenanaid
    self._reqProtobuf.data.area_id = areaid
    self._reqProtobuf.data.user_id = numid
    self._reqProtobuf.data.ask_id = self._ask_id
    -- if GoldAreaConfig.BridgeIsDebug then
    --     groupid = 5008
    -- end
    self:sendProtobufMsg(groupid)
end

function GoldReqToken50:onMsgReceive(msgData)
    if not msgData or not msgData.nXYData or not msgData.nXYData.cr then
        return
    end
    if msgData.nXYData.cr.ask_id ~= self._ask_id then
        return
    end
    if msgData.nXYData.cr.err_code == 0 then
        self:success(msgData)
    else
        self:fail(msgData)
    end
end

return GoldReqToken50