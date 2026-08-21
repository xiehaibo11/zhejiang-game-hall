local ReqH5GameShowList = class("ReqH5GameShowList", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

--灰度
local DEBUG = require("app.Config.GlobalConfig").IsDebug
if DEBUG then
    UrlConf.HTTP_ID_H5_GAME_SHOE_LIST = "http://47.111.89.252:8088/joint_operation/list?"
end

function ReqH5GameShowList:start(timeout)
    if ReqH5GameShowList.super.start(self,timeout) == false then
        return
    end
    
    local appid = 10008--XH.areaData:getNotifAppid()
    local timestamp = os.time()

    local appKey = "63d7041eddeb1355c5ef14c01f3d8bed"--XH.areaData:getIsAgentReqSecret()
    local numid = XH.playerData:getNumberID()
    local wid = XH.areaData:getAreaWindID()

    local signatureStr = "app_id="..appid.."numid="..numid.."timestamp="..timestamp.."wid="..wid..appKey
    local signature = XH.SysTool:md5_encode(signatureStr)

    local param = "app_id=%d&timestamp=%s&signature=%s&wid=%d&numid=%d"

    param = string.format(param, appid, timestamp, signature, wid, numid)
    local strUrl = UrlConf.HTTP_ID_H5_GAME_SHOE_LIST .. param
    XH.httpManager:RequestGet(HttpDefine.HTTP_ID_H5_GAME_SHOE_LIST, strUrl, 4, handler(self, self.onHttpH5GameShowListCallBack))

end

function ReqH5GameShowList:onHttpH5GameShowListCallBack(eType, status, response)
    if eType == HttpDefine.HTTP_ID_H5_GAME_SHOE_LIST then
        if status == 200 then
            if response.code == 0 then
                self:success(response)
            else
                self:setMessage(response)
                self:fail()
            end
        else
            self:setMessage("PHONE_CODE_ERROR")
            self:fail()
        end
    end
end

return ReqH5GameShowList

