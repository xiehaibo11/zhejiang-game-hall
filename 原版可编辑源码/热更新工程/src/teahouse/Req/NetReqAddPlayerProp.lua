---@class NetReqAddPlayerProp : NetReq
local NetReqAddPlayerProp = class("NetReqAddPlayerProp", TeaHouse.NetReq)

function NetReqAddPlayerProp:ctor()
    NetReqAddPlayerProp.super.ctor(self)

    self._nAskid = 0
    self._areaID = 0
    self._numID = 0
    self._propCount = 0
end

function NetReqAddPlayerProp:start(areaID, numID, propCount, teaNumber, timeoutTime, playerProps)
    if not NetReqAddPlayerProp.super.start(self, timeoutTime) then
        return
    end

    local reqAddPlayerProp = TeaHouse.TeaHouseProtocol.ReqAddPlayerProp:new()
    self._nAskid = os.time()
    self._areaID = areaID
    self._numID = numID
    self._propCount = propCount
    self._playerProps = playerProps
    reqAddPlayerProp.nAskid = self._nAskid
    reqAddPlayerProp.nTeaid = teaNumber
    reqAddPlayerProp.nAreaid = areaID
    reqAddPlayerProp.nNumid = numID
    reqAddPlayerProp.nAddCnt = propCount
    self:sendPacket(reqAddPlayerProp, TeaHouse.TeaHouseProtocol.RespAddPlayerProp, self.onRespAddPlayerProp)
end

function NetReqAddPlayerProp:onRespAddPlayerProp(msgData)
    if msgData.nAskid == self._nAskid then
        if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.SUCCESS then
            msgData.areaid = self._areaID
            msgData.numid = self._numID
            msgData.playerProps = self._playerProps
            self:success(msgData)
        else
            if msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NO_MINUS then
                if self._propCount > 0 then
                    self:setMessage("输入的数据不正确，无法加卡")
                else
                    self:setMessage("这位玩家没有那么多比赛场房卡，无法扣除！")
                end
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NO_RIGHT then
                self:setMessage("您已不是副领队，请联系领队")
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NO_USER then
                self:setMessage("没有该用户，无法加卡")
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NOT_FENGXIN_RIGHT then
                self:setMessage("副领队功能已经关闭，请联系客服")
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NOT_ENOUGH then
                self:setMessage("比赛场房卡不足，请充值~")-- self:setMessage("房卡不足啦~\n【1】  库存房卡：游戏账户房卡\n【2】  占用房卡：总桌卡/桌卡设置值\n【3】 合理经营条件：库存房卡≥占用房卡\n【4】  当前房卡不足，请充入哦")
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NOT_ENOUGH_BY_FREEZE then
                self:setMessage("房卡不足，您的部分房卡因桌子正在第一局游戏被冻结")
            elseif msgData.ucFlag == TeaHouse.TeaHouseProtocol.RespAddPlayerProp.FLAG.NOT_ENOUGH_BY_TIMECARD then
                self:setMessage("加卡失败，请您划卡的数量减一张房卡划入")
            else
                self:setMessage("未知错误，无法加卡 -- " .. msgData.ucFlag)
            end
            self:fail(msgData)
        end
    end
end

return NetReqAddPlayerProp