local TransmitBindUser = class("TransmitBindUser", XH.Req)

function TransmitBindUser:start(userType, strName, pwd, areaid, lobbyid, info, srsGroupID, timeout)
    if TransmitBindUser.super.start(self, timeout, srsGroupID) == false then
        return
    end

    self._srsGroupID = info.srsGroupID
    self._areaID = info.areaID
    self._numID = info.numID
    self._data = {
        sdkType = info.sdkType,
        sdkData = info.sdkData,
    }

    local ReqPlayerData = require("app.Req.PlayerMessage.ReqPlayerData")
    local reqPlayerData = ReqPlayerData:new()
    reqPlayerData:addReqCallBack(self, self.onReqPlayerData)
    reqPlayerData:start(userType, strName, pwd, areaid, lobbyid, srsGroupID, timeout)
end

function TransmitBindUser:onReqPlayerData(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local ReqBindUser = require("app.Req.PlayerMessage.ReqBindUser")
        local reqBindUser = ReqBindUser:new()
        reqBindUser:addReqCallBack(self, self.onReqBindUser)
        reqBindUser:start(self._areaID, self._numID, nil, nil, nil , self._srsGroupID, 10)
    else
        self:setMessage("绑定失败！")
        self:fail()
    end
end

function TransmitBindUser:onReqBindUser(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self:success(self._data)
    else
        self:setMessage("绑定失败！")
        if data then
            if data.flag == XH.ToolProtocol.RespBindUser.FLAG.NOUSER then
                self:setMessage("绑定的用户不存在！")
            elseif data.flag == XH.ToolProtocol.RespBindUser.FLAG.BINDED then
                self:setMessage("绑定的用户已绑定其他账号！")
            elseif data.flag == XH.ToolProtocol.RespBindUser.FLAG.SRC_BINDED then
                self:setMessage("你已经绑定！")
            elseif data.flag == XH.ToolProtocol.RespBindUser.FLAG.OVERLIMIT then
                self:setMessage("超过限制次数！")
            end
        end
        self:fail()
    end
end

return TransmitBindUser 