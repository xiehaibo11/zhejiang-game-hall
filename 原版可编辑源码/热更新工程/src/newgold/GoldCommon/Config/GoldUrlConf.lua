local UrlConf = {}
local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度

UrlConf.First_Url = "https://transit.hzxuanming.com"
if DEBUG then
    UrlConf.First_Url = "http://112.126.81.124:80"
end

-- 钻石列表
UrlConf.URL_STORE_PRODUCT_LIST = "https://shiming.hzxuanming.com/v1/shop/products"
-- 充值约定
UrlConf.HTTP_ID_CHONG_ZHI = "http://www.bryouxi.com/recharge.html"
UrlConf.HTTP_ID_CHONG_ZHI_IOS = "http://hzxuanming.com/recharge_protocol.html"
UrlConf.URL_EXCHANGESHOP = UrlConf.First_Url .. "/auth/exchangeshop"

-- jwt token直连接口
UrlConf.JwtToken_Url = "https://wechat.hzxuanming.com"
if DEBUG then
    UrlConf.JwtToken_Url = "http://116.62.65.110:8090"
end
UrlConf.REQ_STORE_EXCHANGE_PRODUCT = UrlConf.JwtToken_Url .. "/exchange/combine/cross_region/exchange"

UrlConf.First_Url_50 = "https://hz-hylas.mengyoutech.com/"
if DEBUG then
    UrlConf.First_Url_50 = "https://test-sibyl.mengyoutech.com/"
end
UrlConf.URL_LUCK_TASK_GETPAGE = UrlConf.First_Url_50 .. "nyx/getPage"
UrlConf.URL_LUCK_TASK_GETCONTENT = UrlConf.First_Url_50 .. "nyx/getContent"
UrlConf.URL_LUCK_TASK_GETDRAWLOGS = UrlConf.First_Url_50 .. "nyx/getDrawLogs"
UrlConf.URL_LUCK_TASK_GETREWARDS = UrlConf.First_Url_50 .. "nyx/getRewards"
UrlConf.URL_LUCK_TASK_Participate = UrlConf.First_Url_50 .. "nyx/participate"
UrlConf.URL_LUCK_TASK_ACTLIST = UrlConf.First_Url_50 .. "nyx/actList"
UrlConf.URL_LUCK_TASK_ACTDETAIL = UrlConf.First_Url_50 .. "nyx/ActDetail"
UrlConf.URL_LUCK_TASK_GAME_REWARDS = UrlConf.First_Url_50 .. "nyx/GetGoldGameRewards"
UrlConf.URL_LUCK_TASK_GAME_STATUS = UrlConf.First_Url_50 .. "nyx/GetUserGoldGameStatus"
UrlConf.URL_LUCK_TASK_DISCOUNT_INFO = UrlConf.First_Url_50 .. "nyx/getLooseDiscount"
UrlConf.URL_BANKRUP_GET_LEFTCNT = UrlConf.First_Url_50 .. "nyx/GetBankruptCnt"
UrlConf.URL_GET_WEB_TOKEN = UrlConf.First_Url_50 .. "auth/getWebToken"

UrlConf.URL_SECOND_DOMAIN = {
    --
    REQ_STORE_EXCHANGE_PRODUCT_LIST = "exchange/combine/goods/list"
}

return UrlConf