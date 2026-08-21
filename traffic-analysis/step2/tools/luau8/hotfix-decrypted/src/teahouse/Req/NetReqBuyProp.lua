---@class NetReqBuyProp : NetReq
local NetReqBuyProp = class("NetReqBuyProp", TeaHouse.NetReq)

function NetReqBuyProp:ctor()
    NetReqBuyProp.super.ctor(self)

    self._nAskid = 0
end

function NetReqBuyProp:start(teaNumber, timeoutTime, bNotShowTips)
    if not NetReqBuyProp.super.start(self, timeoutTime) then
        return
    end

    local reqBuyProp = TeaHouse.TeaHouseProtocol.ReqBuyProp:new()
    self._nAskid = os.time()
    self._bNotShowTips = bNotShowTips
    reqBuyProp.nAskid = self._nAskid
    reqBuyProp.nTeaid = teaNumber
    self:sendPacket(reqBuyProp, TeaHouse.TeaHouseProtocol.RespBuyProp, self.onRespBuyProp)
end

function NetReqBuyProp:onRespBuyProp(msgData)
    if msgData.nAskid == self._nAskid then
        msgData.bNotShowTips = self._bNotShowTips or false
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespBuyProp.FLAG.SUCCESS then
            self:success(msgData)
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespBuyProp.FLAG.NO_RIGHT then
                self:setMessage("非法用户，无法购买。")
            self:fail()
        elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespBuyProp.FLAG.NO_BUY then
            self:setMessage("无法购买，请联系领队！")
            self:fail()
        else
            self:setMessage("未知错误，无法购买 -- " .. msgData.ucFlag)
            self:fail()
        end
    end
end

return NetReqBuyProp�