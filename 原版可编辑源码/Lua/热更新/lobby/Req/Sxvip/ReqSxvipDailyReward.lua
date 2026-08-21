local ReqSxvipDailyReward = class("ReqSxvipDailyReward", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipDailyReward:ctor()
    ReqSxvipDailyReward.super.ctor(self)
    self._askId = 0
end

function ReqSxvipDailyReward:start(timeout, opt, chooseIndex)
    if ReqSxvipDailyReward.super.start(self, timeout) == false then
        return
    end

    local urlInfo = {}
    urlInfo.awardType = 1
    urlInfo.opt = opt or 0
    urlInfo.ask_id = 1605
    urlInfo.chooseIndex = chooseIndex or 0

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_DAILY_REWARD, UrlConf.URL_SXVIP_DAILY_REWARD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipDailyReward:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_DAILY_REWARD then
        return
    end
    if status == 200 then
        if response.resp.errCode == 0 then
            self:success(response)
        else
            if response.resp.errCode == 15014 then
                self:setMessage("奖励已领取")
            elseif response.resp.errCode == 15010 then
                self:setMessage("非vip或权限已超时")
            elseif response.resp.errCode == 15013  then
                self:setMessage("没找到奖励配置")
            else
                self:setMessage("领取奖励失败")
            end
            self:fail()
        end
    else
        self:setMessage("领取奖励失败")
        self:fail()
    end
end

return ReqSxvipDailyReward
