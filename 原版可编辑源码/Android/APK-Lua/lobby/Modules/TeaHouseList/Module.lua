
local TeaHouseListModule = class("TeaHouseListModule", XH.ModuleBase)

TeaHouseListModule.EVENT_TEA_HOUSE_LIST_CHANGED = "EVENT_TEA_HOUSE_LIST_CHANGED"
TeaHouseListModule.EVENT_FREIND_GROUP_LIST_CHANGED = "EVENT_FREIND_GROUP_LIST_CHANGED"

function TeaHouseListModule:ctor() 
    TeaHouseListModule.super.ctor(self)
end

function TeaHouseListModule:getReqConfig()
    return {
        reqServerAppid = { reqPath = "lobby.Req.TeaHouse.ReqServerAppid", callBack = self.onRespServerAppid },
        reqTeaHouseInfoByPlayerType = { reqPath = "lobby.Req.TeaHouse.ReqTeaHouseInfoByPlayerType", callBack = self.onRespTeaHouseInfoByPlayerType },
    }
end

function TeaHouseListModule:reqTeaHouseList(bNotUpdateUI)
    self._teaHousePendingList = {}
    self._bNotUpdateUI = bNotUpdateUI or false
    if XH.playerData:getPlayerIsAgent() then
        self:reqServerAppid()
    else
        self:reqTeaHouseInfoByPlayerType(nil, false)
    end
end

function TeaHouseListModule:reqServerAppid()
     self:startReq("reqServerAppid", 15)
end

function TeaHouseListModule:reqTeaHouseInfoByPlayerType(nAppid, bAgent)
    self:startReq("reqTeaHouseInfoByPlayerType", nAppid, bAgent, 15)
end

function TeaHouseListModule:onRespServerAppid(cell, type, appID)
    if type == XH.Req.TYPE.SUCCESS then
        self:reqTeaHouseInfoByPlayerType(appID, true)
    end
end

function TeaHouseListModule:onRespTeaHouseInfoByPlayerType(cell,ctype,data)
    if ctype == XH.Req.TYPE.SUCCESS then
        local groupList = {}
        local teahouseList = {}
        for _,v in pairs(data) do
            local acExtraStr = v.acExtraData
            if acExtraStr and type(acExtraStr) == "string" and #acExtraStr > 0  then 
                local acExtra = cjson.decode(acExtraStr)
                if acExtra.level == 100  then
                    table.insert( groupList, v)
                else
                    table.insert( teahouseList, v)
                end
            end
        end
        -- 按加入时间和创建时间排序
        if next(groupList) then
            table.sort(groupList,function(a,b)
                if a.nTeaOwnerNumid == XH.playerData:getNumberID() and b.nTeaOwnerNumid ~= XH.playerData:getNumberID() then
                    return true 
                elseif a.nTeaOwnerNumid ~= XH.playerData:getNumberID() and b.nTeaOwnerNumid == XH.playerData:getNumberID() then
                    return false
                else
                    return a.nTeaNumber < b.nTeaNumber
                end
            end)
        end
        XH.lobby:getModule("Im"):getIMData():setGroupList(groupList)
        XH.lobby:getModule("Im"):getIMData():setTeahouseList(teahouseList)
        self._teaHousePendingList = teahouseList
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_LIST_CHANGED })
        self:dispatchEvent({ name = self.EVENT_FREIND_GROUP_LIST_CHANGED ,bNotUpdateUI = self._bNotUpdateUI })
    end
end

function TeaHouseListModule:getTeaHousePendingList()
    return self._teaHousePendingList
end

return TeaHouseListModule