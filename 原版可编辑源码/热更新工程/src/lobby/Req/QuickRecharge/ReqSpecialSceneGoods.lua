local ReqSpecialSceneGoods = class("ReqSpecialSceneGoods", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")
local HttpDefine = require("app.Define.HttpDefine")

local URL = UrlConf.URL_STORE_SPECIAL_SCENE_GOODS .. "?areaid=%d&numid=%s&sid=%d&uid=%s&ssid=%s&scene=%s"

--灰度
--测试风信商城后台
local DEBUG = require("app.Config.GlobalConfig").IsDebug
if DEBUG then
    local URL_STORE_SPECIAL_SCENE_GOODS = "http://appstore.racyqp.com:8090/exchange/combine/special_scene/goods_list"
    URL = URL_STORE_SPECIAL_SCENE_GOODS .. "?areaid=%d&numid=%s&sid=%d&uid=%s&ssid=%s&scene=%s"
end

function ReqSpecialSceneGoods:start(scene, timeoutTime)
    if ReqSpecialSceneGoods.super.start(self, timeoutTime) == false then
        return
    end
    self._scene = scene
    local srsGroupID = XH.areaData:getSrsGroupID()
    local ReqSessionID = require("app.Req.ReqSessionID")
    local reqSessionID = ReqSessionID:new()
    reqSessionID:addReqCallBack(self, self.onTempSessionBack)
    reqSessionID:start(0,XH.playerData:getBrandID(),
        XH.playerData:getNumberID(),un.StringUtils.UTF8_TO_GB_18030_2000(XH.playerData:getUserID()),XH.playerData:getSessionID(false),srsGroupID,timeoutTime)
end

function ReqSpecialSceneGoods:onTempSessionBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        local areaId = XH.areaData:getAreaID()
        local numid = XH.playerData:getNumberID()
        local sid = XH.areaData:getAreaWindID()
        local uid = un.StringUtils.GB_18030_2000_TO_UTF8(XH.playerData:getUserID())
        local ssid = string.urlencode(data)
        local url = string.format(URL, areaId, numid, sid, uid, ssid, self._scene)
        print(url)
        XH.httpManager:RequestGet(HttpDefine.URL_STORE_SPECIAL_SCENE_GOODS, url, 4, handler(self, self.onHttpResult))
    end
end

function ReqSpecialSceneGoods:onHttpResult(httpID, code, httpData)
    if httpData and httpData.code == 0 then
        self:success(httpData.data)
    else
        self:setMessage(httpData.message)
        self:fail()
    end
end

return ReqSpecialSceneGoods