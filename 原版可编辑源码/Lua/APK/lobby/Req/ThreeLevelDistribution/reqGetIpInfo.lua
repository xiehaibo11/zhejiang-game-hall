
local reqGetIpInfo = class("reqGetIpInfo", XH.Req)

-- checkbind
function reqGetIpInfo:start(thirdInfo,timeout)
    local svrName = XH.areaData:getAreaTypeID() > 1000 and "iplooker" or "iplooker"
    local apiName = "dat/find"

    local reqKey = XH.areaData:getIsAgentReqKey()
    local reqSecret = XH.areaData:getIsAgentReqSecret()
    local reqApihub = require("app.Req.ReqApihub")

    local lobbyId = XH.areaData:getLobbyID()
    --丽水、青田、舟山、宁波、嘉兴、余姚
    if lobbyId == XH.LOBBY_ID.LISHUI or lobbyId == XH.LOBBY_ID.QINGTIAN or lobbyId == XH.LOBBY_ID.ZHOUSHAN or lobbyId == XH.LOBBY_ID.NINGBO or lobbyId == XH.LOBBY_ID.JIAXING or lobbyId == XH.LOBBY_ID.YUYAO then
        reqKey = "50032.bmtlvhrsln"
        reqSecret = "28be92f892fa6c1e4f113045d64bacb6"
    end
    
    local client = reqApihub.createApihubClient(reqKey,reqSecret)
    local svr = client.createService(svrName)
    
    svr.get(apiName,thirdInfo,handler(self, self.onHttpGetIpInfoCallBack))
end

function reqGetIpInfo:onHttpGetIpInfoCallBack(httpid, status, response, origin)
    if status == 200 then
        local errorCode = tonumber(response.code)
        if errorCode == 0 then
            local isForeignIp = false
            if response.Country ~= "中国" then
                isForeignIp = true
            end
            self:success(isForeignIp)
        else
            self:fail()
        end
    end
end

return reqGetIpInfo
