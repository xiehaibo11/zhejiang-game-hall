local GameManager = CF.gameClass("GameManager", "game.Mahjong.BasicMahjong.GameManager")

function GameManager:onAmapGetLocationCallBack(event)
    local code = event.data.code
    local msg = event.data.msg
    local gpsInfo = "get position failed"
    if code == CF.ThirdDefine.AMAP_CALLBACK_CODE.AMAP_SUCCESS then
        local tData = msg
        if true or device.platform == "ios" then
            local ok, errMsg = pcall(function()
                tData = cjson.decode(msg)
                end
            )

            if not ok then
                print("cjson failed: " .. errMsg)
                return
            end
        end

        local sCountry = tData["country"] or ""
        local sProvince = tData["province"] or ""
        local sCity = tData["city"] or ""
        local sDistrict = tData["district"] or ""
        --local sStreet = tData["street"] or ""

        local fLongitude = tData["longitude"]
        local fLatitude = tData["latitude"]
        gpsInfo = "longitude=" .. fLongitude .. ";latitude=" .. fLatitude .. ";address=" .. sCountry .. sProvince .. sCity .. sDistrict
    end
    CF.msgManager:sendAMapMsg(gpsInfo)
    CF.msgManager:sendLocationMsg(gpsInfo)
end

return GameManager�