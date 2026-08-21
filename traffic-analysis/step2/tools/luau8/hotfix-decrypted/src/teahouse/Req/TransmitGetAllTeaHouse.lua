---@class TransmitGetAllTeaHouse : Req
local TransmitGetAllTeaHouse = class("TransmitGetAllTeaHouse", TeaHouse.Req)

local KW_TYPE_OWNER = 1
local KW_TYPE_ENTER = 2

function TransmitGetAllTeaHouse:ctor()
    TransmitGetAllTeaHouse.super.ctor(self)

    self._curInfo = nil
    self._teaHouseOwnerIndex = 1
    self._teaHouseEnterIndex = 1
    self._teaHouseInfoOwner = {}
    self._teaHouseInfoEnter = {}
    self._teaHouseOwnerIDList = {}
    self._teaHouseEnterIDList = {}
end

function TransmitGetAllTeaHouse:start(numID, isAgent, timeoutTime)
    if not TransmitGetAllTeaHouse.super.start(self, timeoutTime) then
        return
    end

    self._numID = numID
    self._isAgent = isAgent
    if isAgent then
        self:reqPlayerConnect()
    else
        self:reqTeaHouseRight()
    end
end

function TransmitGetAllTeaHouse:reqPlayerConnect()
    local netReqPlayerConnect = TeaHouse.manager.reqManager:createReq("NetReqPlayerConnect")
    netReqPlayerConnect:addReqCallBack(self, self.onNetReqPlayerConnect)
    netReqPlayerConnect:start(self._timeoutTime)
end

function TransmitGetAllTeaHouse:onNetReqPlayerConnect(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._teaHouseOwnerIDList = data
        self._teaHouseOwnerIndex = 1
        self:reqOwnerTeaHouseInfo()
    elseif type == TeaHouse.Req.TYPE.FAIL then
        self:reqTeaHouseRight()
    else
        self:timeout()
    end
end

function TransmitGetAllTeaHouse:reqTeaHouseInfo(teaNumber, type)
    local netReqTeaHouseInfo = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseInfo")
    netReqTeaHouseInfo:addReqCallBack(self, self.onNetReqTeaHouseInfo)
    netReqTeaHouseInfo.houseType = type
    netReqTeaHouseInfo:start(teaNumber, math.min(self._timeoutTime))
end

function TransmitGetAllTeaHouse:onNetReqTeaHouseInfo(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if req.houseType == KW_TYPE_OWNER then
            if self._isAgent then
                self:reqTeaHouseCost(data)
            else
                table.insert(self._teaHouseInfoOwner, data)
                self:reqOwnerTeaHouseInfo()
            end
        else
            table.insert(self._teaHouseInfoEnter, data)
            self:reqEnterTeaHouseInfo()
        end
    elseif type == TeaHouse.Req.TYPE.FAIL then
        if req.houseType == KW_TYPE_OWNER then
            self:reqOwnerTeaHouseInfo()
        else
            self:reqEnterTeaHouseInfo()
        end
    else
        self:success()
    end
end

function TransmitGetAllTeaHouse:reqTeaHouseCost(info)
    self._curInfo = info
    local netReqTeaHouseCost = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseCost")
    netReqTeaHouseCost:addReqCallBack(self, self.onNetReqTeaHouseCost)
    netReqTeaHouseCost:start(info.teaNumber, nil, self._timeoutTime)
end

function TransmitGetAllTeaHouse:onNetReqTeaHouseCost(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        self._curInfo.nDailyUseAllProps = data.nTodaycost --每日消耗
        table.insert(self._teaHouseInfoOwner, self._curInfo)
    end
    self._curInfo = nil
    self:reqOwnerTeaHouseInfo()
end

function TransmitGetAllTeaHouse:reqOwnerTeaHouseInfo()
    if self._teaHouseOwnerIndex > 0 and self._teaHouseOwnerIndex <= #self._teaHouseOwnerIDList then
        local teaNumber = self._teaHouseOwnerIDList[self._teaHouseOwnerIndex]
        self:reqTeaHouseInfo(teaNumber, KW_TYPE_OWNER)
        self._teaHouseOwnerIndex = self._teaHouseOwnerIndex + 1
    else
        TeaHouse.StorageTool.saveOwnerTeaHouseList(self._numID, self._teaHouseInfoOwner)
        self:reqTeaHouseRight()
    end
end

function TransmitGetAllTeaHouse:reqEnterTeaHouseInfo()
    if self._teaHouseEnterIndex > 0 and self._teaHouseEnterIndex <= #self._teaHouseEnterIDList then
        local teaNumber = self._teaHouseEnterIDList[self._teaHouseEnterIndex]
        self:reqTeaHouseInfo(teaNumber, KW_TYPE_ENTER)
        self._teaHouseEnterIndex = self._teaHouseEnterIndex + 1
    else
        self:success()
    end
end

function TransmitGetAllTeaHouse:reqTeaHouseRight()
    self._teaHouseEnterIDList = {}
    --TODO
    if self._isAgent then
        self:reqEnterTeaHouseInfo()
    else
        local netReqTeaHouseRight = TeaHouse.manager.reqManager:createReq("NetReqTeaHouseRight")
        netReqTeaHouseRight:addReqCallBack(self, self.onNetReqTeaHouseRight)
        netReqTeaHouseRight:start(TeaHouse.BridgeData.getAreaID(), self._numID, self._timeoutTime)
    end
end

function TransmitGetAllTeaHouse:onNetReqTeaHouseRight(req, type, data)
    self._teaHouseEnterIDList = {}
    if type == TeaHouse.Req.TYPE.SUCCESS then
        for i = 0, data.nSize do
            if data.nTeaHouseId[i] ~= 0 then
                table.insert(self._teaHouseEnterIDList, data.nTeaHouseId[i])
            end
        end
        TeaHouse.StorageTool.saveEnterTeaHouseList(self._numID, data.nTeaHouseId)
    else
        local infoList = TeaHouse.StorageTool.getEnterTeaHouseList(self._numID)
        if infoList and #infoList > 0 then
            for i = 1, #infoList do
                local teaHouseID = tonumber(infoList[i])
                if teaHouseID ~= 0 then
                    table.insert(self._teaHouseEnterIDList, teaHouseID)
                end
            end
        end
    end
    self:reqEnterTeaHouseInfo()
end

return TransmitGetAllTeaHouse�