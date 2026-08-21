local BridgeThrowDataManager = class("BridgeThrowDataManager")

-- 比赛场数据埋点上抛
function BridgeThrowDataManager:throwDataClick(data,dataEx)
    local tmpData = {}
    local teahouseData = TeaHouse.manager.teahouseData
    tmpData.userid = XH.playerData:getNumberID()
    tmpData.teaHouseTitle = teahouseData:getTeaHouseTitle()
    if dataEx then
        table.merge(tmpData,dataEx)
    end
    XH.throwDataManager:throwData(data, tmpData)  
end

return BridgeThrowDataManager
�