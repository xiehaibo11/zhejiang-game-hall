local GameManager = CF.gameClass("GameManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:onAmapGetLocationCallBack(event)
    local code = event.data.code
    local msg = event.data.msg
    local gpsInfo = "get position failed"
    local localInfo = "get local failed"
    if code == CF.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS then
        local tData = msg
        local ok, msgEx = pcall(function()
            tData = cjson.decode(msg)
        end)

        if not ok then
            print("cjson failed: " .. msgEx)
            return
        end
        
        local sCountry = tData["country"] or ""
        local sProvince = tData["province"] or ""
        local sCity = tData["city"] or ""
        local sDistrict = tData["district"] or ""
        --local sStreet = tData["street"] or ""

        --315敏感信息
        local str = tData.street or ""
        if string.len(str) > 3 then
            str = string.sub(str, 1, 3) .. "***"
        end
        local sStreet = ""--str

        local fLongitude = tData["longitude"]
        local fLatitude = tData["latitude"]
        gpsInfo = "longitude=" .. fLongitude ..";latitude=" .. fLatitude .. ";address=" .. sCountry .. sProvince .. sCity .. sDistrict .. sStreet 
        localInfo = "address=" .. sCountry .. sProvince .. sCity .. sDistrict .. sStreet
        self:getModule("GameLayer"):getGameData():setSelfGPSInfo(gpsInfo)
        self:getModule("GameLayer"):getGameData():setSelfLocalInfo(localInfo)
    end
    CF.msgManager:sendAMapMsg(gpsInfo)
    CF.msgManager:sendGPSMsg(gpsInfo)
    CF.msgManager:sendLocationMsg(localInfo)
end

return GameManager�