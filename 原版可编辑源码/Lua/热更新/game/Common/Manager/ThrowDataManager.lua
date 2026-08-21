local ThrowDataManager = class("ThrowDataManager")

ThrowDataManager.ROOM_TYPE = {
    NONE = 0,
    BOX = 1,
    TEA_BOX = 2,
    GOLD = 3
}

function ThrowDataManager:ctor()
    self._roomType = self.ROOM_TYPE.NONE
end

function ThrowDataManager:setRoomType(roomType)
    self._roomType = roomType
end

--记录用户ID的点击事件
function ThrowDataManager:throwDataClick(data,dataEx)
    local tmpData = self:judgeRoomType()
    if dataEx then
        table.merge(tmpData,dataEx)
    end
    XH.throwDataManager:throwDataClick(data,tmpData)
end

function ThrowDataManager:throwData(eventTable, otherData)
    XH.throwDataManager:throwData(eventTable, otherData)
end

function ThrowDataManager:recordButtonClick(buttonData,dataEx)
    local tmpData = self:judgeRoomType()
    if dataEx then
        table.merge(tmpData,dataEx)
    end
    XH.throwDataManager:recordButtonClick(buttonData,tmpData)
end

function ThrowDataManager:judgeRoomType()
    local tmpData = {}
    if self._roomType == self.ROOM_TYPE.GOLD then 
        tmpData.roomModel = "金币-包厢场"
    elseif self._roomType == self.ROOM_TYPE.TEA_BOX then 
        tmpData.roomModel = "比赛场-包厢场"
    elseif self._roomType == self.ROOM_TYPE.BOX then 
        tmpData.roomModel = "约局-包厢场"
    else
        tmpData.roomModel = "OTHER"
    end 
    return tmpData
end 

return ThrowDataManager