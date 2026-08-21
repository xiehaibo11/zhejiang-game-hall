local CellPeakRankRequest = class("CellPeakRankRequest", NG.GoldProtoBufReq)
local GoldPlayerData = require("newgold.GoldCommon.Data.GoldPlayerData")
function CellPeakRankRequest:ctor()
    CellPeakRankRequest.super.ctor(self)
    self._protobuf = {
        --
        protobufFile = "nyx_client",
        packageName = "Zeus.nyx.v1",
        reqName = "GetPeakRankRequest",
        resqName = "GetPeakRankReply",
        reqxyid = 1677,
        respxyid = 1678,
        processid = 116
    }
end

function CellPeakRankRequest:start(data, timeoutTime)
    if CellPeakRankRequest.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    local protocol = {
        ask_id = self.ask_id,
        club_id = data.club_id,
        cur_area_id = XH.areaData:getAreaID(), --举办地areaid
        Season = data.Season, --赛季
        rank_type = data.rank_type, --榜单类型
        start_index = data.index,
        count = data.count,
    }

    self._curIndex = data.index
    local data = self:luaDataToProtobufData(protocol)
    self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive), 0)
end

function CellPeakRankRequest:onMsgReceive(msgData)
    local data = self:protobufDataToLuaData(msgData)
    data.index = self._curIndex
    if data and data.resp and data.resp.err_code == 0 then
        self:success(data)
    else
        self:fail(data)
    end
end

return CellPeakRankRequest