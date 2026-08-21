local FinishBillCloseModule = class("FinishBillCloseModule", XH.ModuleBase)
FinishBillCloseModule.EVENT_RANK_LIKE_SUCCESS = "EVENT_RANK_LIKE_SUCCESS"

function FinishBillCloseModule:getReqConfig()
    return {
        ReqFinishBillClose = {reqPath = "lobby.Req.TeaHouse.ReqFinishBillClose", callBack = self.onRespFinishBillClose},
    }
end

function FinishBillCloseModule:reqFinishBillClose(filter_type, extData)
    local teahouseData = XH.teaHouseManager:getTeaHouseData()
    if not teahouseData then
        return
    end
    self:startReq("ReqFinishBillClose", {
        club_id = teahouseData:getTeaNumber(),
        to_user_id = extData and extData.to_user_id or 0,
        like_type = extData and extData.like_type or 0,
        filter_type = filter_type,
        scene = 1,
    }, XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function FinishBillCloseModule:onRespFinishBillClose(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local reqToUserId = tonumber(req and req._reqToUserId or 0) or 0
        if data.scene == "LikeFilter" and tonumber(data.filterType) == 1 and reqToUserId > 0 then
            self:dispatchEvent({ name = self.EVENT_RANK_LIKE_SUCCESS, data = data })
            return
        end
        if data.scene ~= "LikeFilter" or data.filterType > 0 then
            return
        end
        local isClose = data.support == 0
        local teahouseData = XH.teaHouseManager:getTeaHouseData()
        if teahouseData then
            teahouseData:setCloseFinishBill(isClose)
        end
    end
end

return FinishBillCloseModule
F