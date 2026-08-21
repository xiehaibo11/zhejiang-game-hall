local UrlConf = {}
local DEBUG = require("app.Config.GlobalConfig").IsDebug -- 灰度

UrlConf.First_Url = "https://transit.hzxuanming.com"
if DEBUG then
    UrlConf.First_Url = "http://112.126.81.124:80"
end

-- 配置中心接口
UrlConf.URL_CONFIG_DATA_MD5 = 'https://confapi.mychuguan.com/config_data/md5_list'
if XH and XH.userDefault and XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false) then
    UrlConf.URL_CONFIG_DATA_MD5 = 'https://hw-confapi.mychuguan.com:4445/config_data/md5_list'
end

UrlConf.URL_CONFIG_DATA_FILE = 'https://confapi.mychuguan.com/config_data/file_info'
if XH and XH.userDefault and XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false) then
    UrlConf.URL_CONFIG_DATA_FILE = 'https://hw-confapi.mychuguan.com:4445/config_data/file_info'
end

UrlConf.URL_PALMAPI = UrlConf.First_Url .. "/auth/palmapi"
UrlConf.URL_GOPALMAPI = UrlConf.First_Url .. "/auth/gopalmapi"
UrlConf.URL_ACT = UrlConf.First_Url .. "/auth/act"
UrlConf.URL_EXCHANGESHOP = UrlConf.First_Url .. "/auth/exchangeshop"
UrlConf.URL_APIHUB = UrlConf.First_Url .. "/auth/apihub"
UrlConf.URL_GAMECENTER = "https://gopalmapi.hzxuanming.com/joint_game_center/config"
UrlConf.URL_PLAYREACH = "https://gopalmapi.hzxuanming.com/play_management/list"
-- 获取token用于后续请求凭证
UrlConf.REQ_TOKEN = UrlConf.First_Url .. "/auth/get-token?"

UrlConf.URL_PARTENTS_SERVICE = "http://www.hzxuanming.com/jiazhang/index.html"
UrlConf.URL_USER_SERVICE = "http://www.bryouxi.com/protocol.html"
UrlConf.URL_PRIVACY_PROTOCOL = "http://bryouxi.com/game_center/game_rule/1/5040/7.html"
UrlConf.URL_PRIVACY_PROTOCOL_CHILDREN = "http://bryouxi.com/game_center/game_rule/1/5040/58.html"
UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST = "http://bryouxi.com/game_center/game_rule/1/5040/50.html"
UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST = "http://bryouxi.com/game_center/game_rule/1/5040/51.html"
-- 充值约定
UrlConf.HTTP_ID_CHONG_ZHI = "http://www.bryouxi.com/recharge.html"

UrlConf.URL_PARTENTS_SERVICE_IOS = "http://www.hzxuanming.com/jiazhang/index.html"
UrlConf.URL_USER_SERVICE_IOS = "http://www.hzxuanming.com/protocol.html"
UrlConf.URL_PRIVACY_PROTOCOL_IOS = "http://hzxuanming.com/game_center/game_rule/0/5040/8.html"
UrlConf.URL_PRIVACY_PROTOCOL_IOS_CHILDREN = "http://hzxuanming.com/game_center/game_rule/1/5040/58.html"
UrlConf.URL_PERSONAL_INFORMATION_COLLECTION_LIST_IOS = "http://hzxuanming.com/game_center/game_rule/2/5040/52.html"
UrlConf.URL_THIRD_SHARE_PERSONAL_INFORMATION_COLLECTION_LIST_IOS = "http://hzxuanming.com/game_center/game_rule/2/5040/53.html"
-- 充值约定
UrlConf.HTTP_ID_CHONG_ZHI_IOS = "http://hzxuanming.com/recharge_protocol.html"
-- VIP续费相关
UrlConf.URL_USER_VIPPROTOCOL_IOS = "http://www.hzxuanming.com/free/xm-hyfwxy.html"
UrlConf.URL_USER_VIPPROTOCOL_ANDROID = "http://www.bryouxi.com/free/br-hyfwxy.html"
UrlConf.URL_USER_RENEWPROTOCOL_IOS = "http://www.hzxuanming.com/free/xm-zdxfxy.html"
UrlConf.URL_USER_RENEWPROTOCOL_ANDROID = "http://www.bryouxi.com/free/br-zdxfxy.html"

-- 商城相关
-- 提审模式下 product_id 的前缀，如 iOStishen_7128_23 中的 iOStishen_
UrlConf.TISHEN_PRODUCT_PREFIX = "iOStishen_"
UrlConf.URL_STORE_PRODUCT_LIST = "https://shiming.hzxuanming.com/v1/shop/products"
UrlConf.URL_TICKETSTORE_EXCHANGE_HISTORY = "https://wechat.hzxuanming.com/exchange/combine/record/list"
UrlConf.URL_TICKETSTORE_EXCHANGE_KAMI = "https://wechat.hzxuanming.com/exchange/combine/get/cty_gift_secret"
UrlConf.URL_STORE_SPECIAL_SCENE_GOODS = "https://wechat.hzxuanming.com/exchange/combine/special_scene/goods_list"

UrlConf.URL_STORE_SAVE_ADRESS = "https://wechat.hzxuanming.com/exchange/combine/save/user/multi/info"

-- 身份认证相关
UrlConf.URL_REAL_NAME_GET_STATUS = "https://shiming.hzxuanming.com/v1/player/getRealName"
UrlConf.URL_REAL_NAME_DEFINE = "https://shiming.hzxuanming.com/v1/player/setRealName"
UrlConf.URL_REAL_NAME_GET_STATUS_NEW = "https://fcm.bflyhd.cn/realname/query"
UrlConf.URL_REAL_NAME_DEFINE_NEW = "https://fcm.bflyhd.cn/realname/check"

-- 规则文档
UrlConf.GAME_RULE_HTML_ADDR = "https://wechat.hzxuanming.com/game_center/game_rule"

-- 下载地址
UrlConf.DOWNLOAD_ADDRESS_IOS = "https://w.url.cn/s/ApB88pJ" -- 通过短链接，后台配置，可以根据手机类型自动跳转下载地址
UrlConf.DOWNLOAD_ADDRESS_ANDROID = "https://w.url.cn/s/ApB88pJ"
UrlConf.DOWNLOAD_ADDRESS_ANDROID_2 = "https://dwz.cn/kToxpBIt" -- 版本为1.2.8
UrlConf.DOWNLOAD_LOBBY_SHARE = "https://w.url.cn/s/ApB88pJ" -- 大厅分享

-- 礼券商城兑换话费接口
UrlConf.REQ_SHOP_FEE_PHONE_CODE_CHECK = "https://wechat.hzxuanming.com/award_center/check_phone/send_msg?"
UrlConf.REQ_SHOP_FEE_EXCHANGE = "https://wechat.hzxuanming.com/award_center/check_phone/exchange/cty_tel_fee?"

-- 客服系统
UrlConf.HTTP_ID_CUSTOMER_SERVICE = "https://kf.kkwan.cc/?"

-- 绑定功能
UrlConf.HTTP_ID_DOBIND_AGENT = "https://wechatapi.hzxuanming.com/api/agent/bind_from_aid?"
UrlConf.HTTP_ID_RELEASEBIND_AGENT = "https://wechatapi.hzxuanming.com/api/agent/unbind?"
UrlConf.HTTP_ID_GETBIND_INFO = "https://wechatapi.hzxuanming.com/api/agent/search-bind?"
UrlConf.HTTP_ID_GETAGENT_INFO = "https://wechatapi.hzxuanming.com/api/agent/info_from_aid?"

-- 浙江日报官网地址
UrlConf.HTTP_ID_ZHEJIANG_NEWS = "https://zj.zjol.com.cn/"

-- 奖励中心相关请求
UrlConf.HTTP_ID_AWARD_CENTER_RECORD = "https://wechat.hzxuanming.com/award_center/myorder?"
UrlConf.HTTP_ID_USER_ADDRESS_GET = "https://wechat.hzxuanming.com/exchange/combine/get/user/info?"
UrlConf.HTTP_ID_USER_ADDRESS_CHANGE = "https://wechat.hzxuanming.com/exchange/combine/edit/user/info?"
-- 杭麻圈分享活动
UrlConf.HTTP_ID_HANGMA_SHARE_AWARD = "https://act.hzxuanming.com/hmq_share_send/getAward?"

-- 数据抛送接口地址
UrlConf.HTTP_ID_THROW_DATA = "https://bfas.hzxuanming.com/v2/client"

-- H5入口配置
UrlConf.HTTP_ID_H5_GAME_SHOE_LIST = "https://palmapi.hzxuanming.com/joint_operation/list?"

UrlConf.HTTP_ID_COMPLIANCE = "https://hegui.bflyhd.cn/"

UrlConf.CUSSERVER_CONFIG_DOWNLOAD = "https://downloadpage.bfnbgame.com/zhanlong/crm/clientConfig.json?"

-- 车载h5支付链接
UrlConf.H5pay_LINK = "https://trade.hzxuanming.com/v2/trade/order"

UrlConf.URL_VERIFICATION_CODE_URL_1 = "https://palmapi.hzxuanming.com/spark/phone/login/send/code/msg"
UrlConf.URL_VERIFICATION_CODE_URL_2 = "https://palmapi.hzxuanming.com/spark/phone/login/send-code"
UrlConf.REQ_VERIFICATION_PHONE_PWD_1 = "https://palmapi.hzxuanming.com/spark/phone/login/pwd/get"
UrlConf.REQ_VERIFICATION_PHONE_PWD_2 = "https://palmapi.hzxuanming.com/spark/phone/login/check-code"

-- 撤销注销（不用验证token）
UrlConf.URL_LOGOFF_DOCANCLE = "https://wechat.hzxuanming.com/api/user/logoff/docancel"
UrlConf.URL_GET_ACT = 'https://webact.tt2kj.com/'

UrlConf.First_Url_50 = "https://hz-hylas.mengyoutech.com/"
if XH and XH.userDefault and XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_DATA_IS_ABROAD_SRS, false) then
    UrlConf.First_Url_50 = 'https://hw-sibyl.mengyoutech.com:4446/'
end
if DEBUG then
    UrlConf.First_Url_50 = "https://test-sibyl.mengyoutech.com/"
end

UrlConf.URL_SIGN_DETAIL = UrlConf.First_Url_50.."nyx/SignDetail"
UrlConf.URL_SIGN = UrlConf.First_Url_50.."nyx/Sign"
UrlConf.URL_LUCK_TASK_ACTLIST = UrlConf.First_Url_50.."nyx/actList"
UrlConf.URL_LUCK_TASK_ACTDETAIL = UrlConf.First_Url_50 .. "nyx/ActDetail"
UrlConf.URL_LUCK_TASK_GETPAGE = UrlConf.First_Url_50.."nyx/getPage"
UrlConf.URL_LUCK_TASK_GETCONTENT = UrlConf.First_Url_50.."nyx/getContent"
UrlConf.URL_LUCK_TASK_GETDRAWLOGS = UrlConf.First_Url_50.."nyx/getDrawLogs"
UrlConf.URL_LUCK_TASK_GETREWARDS = UrlConf.First_Url_50.."nyx/getRewards"
UrlConf.URL_LUCK_TASK_Participate = UrlConf.First_Url_50.."nyx/participate"
UrlConf.URL_ACT_50_BANKRUPTCY_GIFT = UrlConf.First_Url_50.."nyx/GetBankruptcyGift"
UrlConf.URL_ACT_50_DEDUCTIBLE_GIFT = UrlConf.First_Url_50.."nyx/GetDeductibleGift"
UrlConf.URL_ACT_50_JOINROOM_GIFT = UrlConf.First_Url_50.."nyx/GetJoinRoomGift"
UrlConf.URL_LUCK_ARTICLE_LIST = UrlConf.First_Url_50.."themis/ArticleList"
UrlConf.URL_LUCK_ARTICLE_REPORT = UrlConf.First_Url_50.."themis/ArticleReport"
UrlConf.URL_SCORE_ASSISTANT = UrlConf.First_Url_50.."pallas/ScoreNote"
UrlConf.URL_DO_BANKRUPTCY_AD = UrlConf.First_Url_50.."nyx/DoBankruptcyAd"
UrlConf.URL_AUTH_GETCODE = UrlConf.First_Url_50.."auth/getCode"
UrlConf.URL_AUTH_BIND_PHONE = UrlConf.First_Url_50.."auth/bindPhone"

UrlConf.URL_WU_XIAN_JIN_BI_INFO = UrlConf.First_Url_50.."nyx/WuXianJinBiInfo"
UrlConf.URL_WU_XIAN_JIN_BI_OPT = UrlConf.First_Url_50.."nyx/WuXianJinBiOpt"
UrlConf.URL_WU_XIAN_DUI_JU_INFO = UrlConf.First_Url_50.."nyx/WuXianDuiJuInfo"
UrlConf.URL_WU_XIAN_DUI_JU_OPT = UrlConf.First_Url_50.."nyx/WuXianDuiJuOpt"

-- 福袋活动 分享
UrlConf.URL_LUCKY_BAG = UrlConf.First_Url_50.."nyx/ActivityLuckyBagDetail"
UrlConf.URL_CHANGE_CLUB_MODE = UrlConf.First_Url_50.."poros/ChangeClubMode"

UrlConf.URL_DOUBLE12_INFO = UrlConf.First_Url_50.."nyx/ActivityDetail"
UrlConf.URL_DOUBLE12_AWARD = UrlConf.First_Url_50.."nyx/ActivityPrizeGet"

-- 普通道具 转化为时效道具
UrlConf.URL_USE_EQUIP_CARD = UrlConf.First_Url_50.."rhea/UseEquipCard"

-- 获取金币战绩
UrlConf.URL_GET_GOLD_BILL = UrlConf.First_Url_50.."nyx/GoldZhanji"

-- 获取金币统计
UrlConf.URL_GET_GOLD_STATISTICS = UrlConf.First_Url_50.."nyx/GoldTongji"

UrlConf.URL_SHAREMULTIPLEDETAIL = UrlConf.First_Url_50 .. "/nyx/ShareMultipleDetail"
UrlConf.URL_SHAREMULTIPLERECEIVE = UrlConf.First_Url_50 .. "/nyx/ShareMultipleReceive"

-- sxvip 剩余时间
UrlConf.URL_SXVIP_REMAINDER = UrlConf.First_Url_50.."rhea/getPropsCount"
-- sxvip 配置
UrlConf.URL_SXVIP_CONFIG = UrlConf.First_Url_50.."hacaba/VIPConfig"
-- sxvip 牌友信息
UrlConf.URL_SXVIP_FRIEND_INFO = UrlConf.First_Url_50.."nyx/GetUserTagDrawInfo"
-- sxvip 牌局统计
UrlConf.URL_SXVIP_GAMEPLAY_STATISTICS = UrlConf.First_Url_50.."nyx/GetUserDrawInfo"
-- sxvip 领取每日奖励
UrlConf.URL_SXVIP_DAILY_REWARD = UrlConf.First_Url_50.."eos/GetVipAward"
-- sxvip 赠送索要
UrlConf.URL_SXVIP_FELLOW_SEND = UrlConf.First_Url_50.."hacaba/FellowSend"
-- sxvip 订阅商品(先订阅再扣款)，走服务接口
UrlConf.URL_SXVIP_PAY_AFTER_SIGN = UrlConf.First_Url_50.."themis/SubscriptionGoods"
-- 50所有道具信息
UrlConf.URL_LIST_LABEL_REQ = UrlConf.First_Url_50.."rhea/ListLabel"
UrlConf.URL_GETPROPSATTR = UrlConf.First_Url_50.."rhea/GetPropsAttr"
-- 巅峰赛信息
UrlConf.URL_PEAK_RACE_INFO = UrlConf.First_Url_50.."nyx/PeakMatchInfo"
-- sxvip 上抛游戏数据
UrlConf.URL_SXVIP_REPORT_DATA = UrlConf.First_Url_50.."nyx/SavePlayInfo"
-- sxvip优化 牌局统计
UrlConf.URL_SXVIP_GAME_STATISTICS = UrlConf.First_Url_50.."minos/GameStatistics"
-- sxvip优化 战绩统计
UrlConf.URL_SXVIP_GAME_RECORD = UrlConf.First_Url_50.."minos/RecordStatistics"
-- sxvip优化 获取单次权益
UrlConf.URL_SXVIP_GET_SINGLE_RIGHT = UrlConf.First_Url_50.."hecaba/GetSignleRight"
-- sxvip优化 解锁单词权益
UrlConf.URL_SXVIP_LOCK_SINGLE_RIGHT = UrlConf.First_Url_50.."hecaba/LockSignleRight"

UrlConf.URL_USER_LOCATION = UrlConf.First_Url_50 .. "themis/GetUserLocation"

UrlConf.URL_REQ_KICK_TIMES = UrlConf.First_Url_50 .. "nyx/OptKickCnt"

-- 预洗牌接口
UrlConf.URL_PRE_SHUFFLE = UrlConf.First_Url_50 .. "nyx/shufflePre"
-- 洗牌5.0
UrlConf.URL_SHUFFLE5 = UrlConf.First_Url_50 .. "nyx/disCountAct"
UrlConf.URL_SHUFFLE_PLAN = UrlConf.First_Url_50 .. "nyx/shufflePlan"

UrlConf.URL_PROP_DISCOUNT = UrlConf.First_Url_50 .. "nyx/getPropsDiscount"
UrlConf.URL_ACCEPT_PRESENTER = UrlConf.First_Url_50 .. "nyx/acceptPresenter"

-- 聚宝盆接口
UrlConf.URL_JUBAOPEN = UrlConf.First_Url_50 .. "/nyx/Treasure"

UrlConf.URL_LIST_HALL_FRIEND = UrlConf.First_Url_50 .. "poros/ListHallFriends"
UrlConf.URL_CLUBSET = UrlConf.First_Url_50 .. "poros/BBClubSet"
UrlConf.URL_CLUBAPPLYFRIENDS = UrlConf.First_Url_50 .. "poros/BBClubApplyFriends"
UrlConf.URL_APPLYJOINCLUB = UrlConf.First_Url_50 .. "poros/BBApplyJoinClub"
UrlConf.URL_DEALJOINCLUB = UrlConf.First_Url_50 .. "poros/BBDealJoinClub"

-- 会员免费使用道具
UrlConf.URL_VIP_PROP_USE_FREE = UrlConf.First_Url_50 .. "rhea/transferProps"

-- 反诈骗问答URL
UrlConf.URL_FANZHA_QUES = "https://ks.wjx.top/vm/QwBI7a2.aspx"

-- 贡献榜
UrlConf.URL_RANK_CONTRIBUTE = UrlConf.First_Url_50 .. "nyx/Contribute"
-- 巅峰赛选拔
UrlConf.URL_RANK_CHOOSERANK = UrlConf.First_Url_50 .. "minos/ChooseRank"
-- 月相关排行榜
UrlConf.URL_RANK_MONTH_RECORD = UrlConf.First_Url_50 .. "minos/GetClubRankRecord"

UrlConf.GOLDFIRSTPAYGIFT_REQUEST = UrlConf.First_Url_50.."nyx/GoldFirstPayGift"
UrlConf.GOLD_PEGP_INFO_REQUEST = UrlConf.First_Url_50.."nyx/ZhouQiTeHuiLiBaoInfo"
UrlConf.GOLD_PEGP_GETAWARD_REQUEST = UrlConf.First_Url_50.."nyx/ZhouQiTeHuiLiBaoReward"
-- 定时登录活动
UrlConf.URL_GET_LOGIN_REWARD = UrlConf.First_Url_50 .. "nyx/GetLoginReward"
UrlConf.URL_CLAIM_LOGIN_REWARD = UrlConf.First_Url_50 .. "nyx/ClaimLoginReward"
-- 查询玩家信息
UrlConf.URL_SEARCH_USERO = UrlConf.First_Url_50.."juno/SearchUser"
UrlConf.URL_USER_IS_SUB_VIP = UrlConf.First_Url_50.."juno/UserIsSubVip"

UrlConf.ACT_VIP_DISCOUNT = UrlConf.First_Url_50 .. "nyx/ActVipDiscount"
UrlConf.ACT_DETAILS = UrlConf.First_Url_50 .. "nyx/ActDetailss"
UrlConf.URL_GOLD_RECORD_REQUEST = UrlConf.First_Url_50 .. "nyx/GoldRecord"

UrlConf.URL_GOLD_CRITHOFRANKLIST = UrlConf.First_Url_50 .. "nyx/CritHofRankList"
UrlConf.URL_GOLD_CRITHOFUSERINFO = UrlConf.First_Url_50 .. "nyx/CritHofUserInfo"
UrlConf.URL_GOLD_CRITHOFGETUSERRANKINFO = UrlConf.First_Url_50 .. "nyx/CritHofGetUserRankInfo"
UrlConf.URL_GOLD_CRITHOFBASEINFO = UrlConf.First_Url_50 .. "nyx/CritHofBaseInfo"
UrlConf.URL_GOLD_CRITHOFGETCRITAWARD = UrlConf.First_Url_50 .. "nyx/CritHofGetCritAward"
UrlConf.URL_SHOP_GOODS_LIST = UrlConf.First_Url_50 .. "nike/ShopGoodsList"
UrlConf.URL_EXCHANGE_GOODS_LISTV2 = UrlConf.First_Url_50 .. "nike/ExchangeGoodsList"
UrlConf.URL_EXCHANGE_GOODSV2 = UrlConf.First_Url_50 .. "nike/ExchangeGoods"
UrlConf.URL_SHOP_REPORT_ORDER = UrlConf.First_Url_50 .. "nike/ReportOrder"
UrlConf.URL_SHOP_CHECK_ORDER = UrlConf.First_Url_50 .. "nike/CheckOrder"
UrlConf.URL_SHOP_PAY_CONSULT = UrlConf.First_Url_50 .. "nike/AliPayConsult"
-- 包厢转化
UrlConf.URL_BOX_GUIDE_INFO = UrlConf.First_Url_50 .. "nyx/BoxGuideInfo"
UrlConf.URL_BOX_CREATE_FREE_CHECK = UrlConf.First_Url_50 .. "nyx/BoxCreateFreeCheck"
UrlConf.URL_BOX_CREATE_FREE_GAIN = UrlConf.First_Url_50 .. "nyx/BoxCreateFreeGain"

-- 请求点赞功能是否关闭
UrlConf.URL_REQ_FINISHBILL_CLOSE = UrlConf.First_Url_50 .. "minos/CheckScoreFilter"

-- 通用请求URL
UrlConf.URL_REQ_ROUTE_URL = UrlConf.First_Url_50 .. "cyane/route"

if DEBUG then
    UrlConf.REQ_SHOP_FEE_PHONE_CODE_CHECK = "http://appstore.racyqp.com:8090/award_center/check_phone/send_msg?"
    UrlConf.REQ_SHOP_FEE_EXCHANGE = "http://appstore.racyqp.com:8090/award_center/check_phone/exchange/cty_tel_fee?"
    UrlConf.URL_TICKETSTORE_EXCHANGE_HISTORY = "http://appstore.racyqp.com:8090/exchange/combine/record/list"
    UrlConf.URL_VERIFICATION_CODE_URL_2 = "http://47.111.89.252:8088/spark/phone/login/send-code"
    UrlConf.URL_LOGOFF_DOCANCLE = "http://appstore.racyqp.com:8090/api/user/logoff/docancel"
    UrlConf.REQ_VERIFICATION_PHONE_PWD_2 = "http://47.111.89.252:8088/spark/phone/login/check-code"
    UrlConf.URL_STORE_SAVE_ADRESS = "http://appstore.racyqp.com:8090/exchange/combine/save/user/multi/info"
    UrlConf.HTTP_ID_USER_ADDRESS_CHANGE = "http://appstore.racyqp.com:8090/exchange/combine/edit/user/info?"
    UrlConf.HTTP_ID_USER_ADDRESS_GET = "http://appstore.racyqp.com:8090/exchange/combine/get/user/info?"
    UrlConf.HTTP_ID_AWARD_CENTER_RECORD = "http://appstore.racyqp.com:8090/award_center/myorder?"
    UrlConf.URL_REAL_NAME_GET_STATUS_NEW = "http://39.106.78.116/realname/query"
    UrlConf.URL_REAL_NAME_DEFINE_NEW = "https://39.106.78.116/realname/check"
    UrlConf.HTTP_ID_HANGMA_SHARE_AWARD = "http://appstore.racyqp.com:8009/hmq_share_send/getAward?"
    UrlConf.URL_GET_ACT = 'http://appstore.racyqp.com:8009/'
    UrlConf.URL_GAMECENTER = "http://47.111.89.252:9095/joint_game_center/config"
    UrlConf.URL_PLAYREACH = "http://47.111.89.252:9095/play_management/list"
end

UrlConf.URL_SECOND_DOMAIN = {
    REQ_CACHE_WINDOW = "common/popup/list", -- 旧的弹窗列表
    REQ_WEB_POP_LIST = "common/popup_combo/list", -- 新的弹窗列表
    REQ_NOTIFY_INFO = "bulletin/common/list", -- 公告
    REQ_DYNAMIC_URL = "app_url/all", -- 所有区走风信后台进行分享链接的配置
    REQ_H5_WECAHT_USERID = "h5game/login/get_user_id", -- 请求H5 游戏 微信注册的UserID接口
    REQ_H5_WECAHT_ALL_USERID = "h5game/login/get_all_user_id", -- 获取所有web维护的联运游戏id
    REQ_LEISURE_ENTRANCE = "resource_state/entrance/list", -- 请求大厅休闲场入口包括联运入口
    REQ_WEB_ICONS = "resource_state/all_list", -- 请求大厅Icon
    REQ_HANGMA_SHARE_ACT = "hmq_share_send/info", -- 杭麻圈分享活动
    REQ_VERIFICATION_PHONE_BIND = "spark/phone/login/session/bind", -- 手机号绑定
    REQ_PHONE_VERIFCATION_STATE = "spark/phone/login/user/info",
    REQ_VERIFICATION_PHONE_REBIND = "spark/phone/login/session/rebind",
    REQ_PHONE_VERIFY_CODE = "common/send_verify_msg",
    REQ_POOLS_AID_PID = "base/pool", -- 请求奖池某一期数所有奖池
    REQ_VERIFICATION_CODE_1 = "spark/phone/login/send/code/msg", -- 手机号绑定
    REQ_VERIFICATION_CODE_2 = "spark/phone/login/send-code",
    REQ_VERIFICATION_PHONE_PWD_1 = "spark/phone/login/pwd/get",
    REQ_VERIFICATION_PHONE_PWD_2 = "spark/phone/login/check-code",
    REQ_SHOP_PRODUCTS_CONFIG = "exchange/combine/page_mark/config", -- 商城相关
    REQ_STORE_EXCHANGE_PRODUCT = "exchange/combine/exchange",
    REQ_STORE_EXCHANGE_PRODUCT_LIST = "exchange/combine/goods/list",
    REQ_STORE_PRODUCT_TYPE_LIST = "exchange/combine/tags/list",
    REQ_STORE_MODIFY_USER_INFO = "exchange/combine/edit/user/info",
    REQ_SHOP_PAGE_MARK = "exchange/combine/page_mark/top/list", -- 商城标签列表
    REQ_COUPON_LIST = "coupon_sys/app_send_list",
    REQ_WRITE_OFF_STATUS = "api/user/logoff/check",
    REQ_WRITE_OFF_CANCEL = "api/user/logoff/cancel",
    REQ_LEGITIMACY = "no_version/config", -- 合规白名单
    REQ_TEA_RECHARGE_AUTO_AWARD_INFO = "tea_house_recall_card/info", -- B端充值奖励发放工具
    -- 推广活动
    REQ_TEAHOUSE_SPREAD_INFO = "teahouse_spread_new/info",
    REQ_TEAHOUSE_SPREAD_TASK = "teahouse_spread_new/task",
    REQ_TEAHOUSE_SPREAD_AWARD = "teahouse_spread_new/award",
    REQ_TEAHOUSE_SPREAD_DRAW = "teahouse_spread_new/draw",
    REQ_TEAHOUSE_SPREAD_AWARD_LIST = "teahouse_spread_new/award/list",
    REQ_TEAHOUSE_SPREAD_INVITE_LIST = "teahouse_spread_new/invite/list",
    REQ_TEAHOUSE_SPREAD_INVITE_CLICK = "teahouse_spread_new/invite/click"
}

-- 暗斗双扣
UrlConf.URL_REVIVE_GIFT = UrlConf.First_Url_50.."nyx/GetResurrectionGift"
UrlConf.URL_GET_TEACHING_INFO = UrlConf.First_Url_50.."nyx/GetTeachingInfo"
UrlConf.URL_COMPLETE_TEACHING = UrlConf.First_Url_50.."nyx/CompleteTeaching"
UrlConf.URL_GAME_ROUND_CHALLENGE = UrlConf.First_Url_50.."nyx/JuShuTiaoZhanInfo"
UrlConf.URL_CARD_SKILL_CHALLENGE = UrlConf.First_Url_50.."nyx/PaiJiTiaoZhanInfo"
UrlConf.URL_DAILY_QUIZ_CHALLENGE = UrlConf.First_Url_50.."nyx/MeiRiDaTiInfo"
UrlConf.URL_ANSWER = UrlConf.First_Url_50.."nyx/DaTi"
UrlConf.URL_CHALLENGE_GET_AWARD = UrlConf.First_Url_50.."nyx/XinShouTiaoZhanReward"
-- 战令
UrlConf.URL_BATTLE_PASS = UrlConf.First_Url_50.."nyx/ZhanLing"
UrlConf.URL_GET_POOL_PRIZES = UrlConf.First_Url_50.."nyx/GetPoolPrizes"

-- 50金币回放
UrlConf.URL_GOLD50_PLAYBACK = UrlConf.First_Url_50 .. "minos/GetDetailReplayFor33"

UrlConf.URL_UNLIMITED_GIFT_INFO = UrlConf.First_Url_50.."nyx/WuXianJingXiInfo"
UrlConf.URL_UNLIMITED_GIFT_REWARD = UrlConf.First_Url_50.."nyx/WuXianJingXiReward"
UrlConf.URL_QUERY_BANKRUPT = UrlConf.First_Url_50 .. "nyx/QueryBankruptcySubsidy"
UrlConf.URL_GET_BANKRUPT = UrlConf.First_Url_50 .. "nyx/GetBankruptcySubsidy"

-- 操作穿戴
UrlConf.URL_OPERATE_EQUIP = UrlConf.First_Url_50 .. "props/OperateEquip"
-- 获取玩家是否穿戴状态
UrlConf.URL_GET_EQUIP_STATE = UrlConf.First_Url_50 .. "props/GetEquipProps"
-- 道具推送 RecommendProp（宝宝 PropPush / 请神等级回包）
UrlConf.URL_PROPPUSH = UrlConf.First_Url_50 .. "nyx/RecommendProp"
UrlConf.URL_SYSTIME_50 = UrlConf.First_Url_50 .. "/nyx/GetUnix"

-- 回归
UrlConf.URL_RECALL_NEW_BASE_INFO = UrlConf.First_Url_50 .. "nyx/GetReBackBaseInfo"
UrlConf.URL_RECALL_NEW_BACK_GIFT = UrlConf.First_Url_50 .. "nyx/RewardReBackGift"
UrlConf.URL_RECALL_NEW_SIGN_INFO = UrlConf.First_Url_50 .. "nyx/GetReBackSignInfo"
UrlConf.URL_RECALL_NEW_SIGN = UrlConf.First_Url_50 .. "nyx/ReBackSign"
UrlConf.URL_RECALL_NEW_TASK_INFO = UrlConf.First_Url_50 .. "nyx/GetReBackTaskInfo"
UrlConf.URL_RECALL_NEW_NOTIFY_TASK = UrlConf.First_Url_50 .. "nyx/NotifyReBackTask"
UrlConf.URL_RECALL_NEW_REWARD_TASK = UrlConf.First_Url_50 .. "nyx/RewardReBackTask"
UrlConf.URL_RECALL_NEW_TASK_STAGE = UrlConf.First_Url_50 .. "nyx/RewardReBackTaskStage"
UrlConf.URL_RECALL_NEW_SUPPORT_INFO = UrlConf.First_Url_50 .. "nyx/GetReBackSupportInfo"
UrlConf.URL_RECALL_NEW_SUPPORT = UrlConf.First_Url_50 .. "nyx/RewardReBackSupport"
UrlConf.URL_RECALL_NEW_LIST_CLUB = UrlConf.First_Url_50 .. "nyx/ListClubReBackPlayers"
UrlConf.URL_RECALL_NEW_QUERY_CLUB = UrlConf.First_Url_50 .. "nyx/QueryReBackPlayers"
UrlConf.URL_RECALL_NEW_REWARD_CLUB = UrlConf.First_Url_50 .. "nyx/RewardClubReBack"
UrlConf.URL_RECALL_NEW_NOTIFY_INVITE = UrlConf.First_Url_50 .. "nyx/NotifyClubReBackPlayerInvite"
UrlConf.URL_RECALL_NEW_RED_POINT = UrlConf.First_Url_50 .. "nyx/GetReBackRedPoint"
UrlConf.URL_RECALL_NEW_CLICK_BACK = UrlConf.First_Url_50 .. "nyx/ClickReBack"
UrlConf.URL_TRANSFER_PROP_FREE = UrlConf.First_Url_50 .. "eos/TransferPropsFree"
UrlConf.URL_RECALL_Fee_Info = UrlConf.First_Url_50 .. "nyx/GetRebackHuaFei"
UrlConf.URL_RECALL_Fee_Recharge = UrlConf.First_Url_50 .. "nyx/RewardRebackHuaFei"

-------- 用jwttoken代替以上请求 -----------
UrlConf.First_Url_EX = "https://wechat.hzxuanming.com"
if DEBUG then
    UrlConf.First_Url_EX = "http://appstore.racyqp.com:8090"
end
UrlConf.URL_EXCHANGE_EX = UrlConf.First_Url_EX .. "/exchange/combine/exchange" 
UrlConf.REQ_STORE_EXCHANGE_PRODUCT_LIST_EX = UrlConf.First_Url_EX .. "/exchange/combine/goods/list"
UrlConf.URL_PAGECONFIG_EX = UrlConf.First_Url_EX .. "/exchange/combine/page_mark/config"
UrlConf.REQ_SHOP_PAGE_MARK_EX = UrlConf.First_Url_EX .. "/exchange/combine/page_mark/top/list"

-- 50邮件
UrlConf.URL_MAIL_CHECKNEW = UrlConf.First_Url_50 .. "hermes/CheckNewMail"
UrlConf.URL_MAIL_LIST = UrlConf.First_Url_50 .. "hermes/GetPlayerMailList"
UrlConf.URL_MAIL_DETAIL = UrlConf.First_Url_50 .. "hermes/GetMailDetail"
UrlConf.URL_MAIL_READALL = UrlConf.First_Url_50 .. "hermes/ReadAll"
UrlConf.URL_MAIL_DEL = UrlConf.First_Url_50 .. "hermes/DelMail"
UrlConf.URL_MAIL_GETAWARD = UrlConf.First_Url_50 .. "hermes/GetAward"

UrlConf.URL_REAL_NAME_SUPPLEMENT = UrlConf.First_Url_50 .. "nyx/GetRealNameRequire"

-- 月卡
UrlConf.URL_MONTHLY_CARD = UrlConf.First_Url_50.."nyx/MonthlyCard"
UrlConf.URL_GET_MONTHLY_CARD = UrlConf.First_Url_50.."nyx/GetMonthlyCard"

UrlConf.URL_TASK_V2_REQUEST = UrlConf.First_Url_50 .. "nyx/GetTaskV2"
UrlConf.URL_ACT_POINT_REWARDS_REQUEST = UrlConf.First_Url_50 .. "nyx/ActPointReward"
UrlConf.URL_TASK_V2_REWARD_REQUEST = UrlConf.First_Url_50 .. "nyx/getRewards"
UrlConf.URL_TASK_V2_FINISH_REQUEST = UrlConf.First_Url_50 .. "nyx/ClientAddRes"

-- 大牌分享奖励
UrlConf.URL_SHARE_WIN_INFO = UrlConf.First_Url_50 .. "nyx/ShareMultipleDetail"
UrlConf.URL_GET_SHARE_WIN_AWARD = UrlConf.First_Url_50 .. "nyx/ShareMultipleReceive"


-- 推广活动 2.0
UrlConf.URL_NEW_GAME_SPREAD_INFO = UrlConf.First_Url_50 .. "nyx/NewGameSpreadActConf"
UrlConf.URL_NEW_GAME_SPREAD_TASK = UrlConf.First_Url_50 .. "nyx/NewGameSpreadTaskInfo"
UrlConf.URL_NEW_GAME_SPREAD_AWARD = UrlConf.First_Url_50 .. "nyx/NewGameSpreadAward"

-- 登陆相关
UrlConf.URL_GENERATE_TEMP_UUID = UrlConf.First_Url_50 .. "juno/GenerateTempUUID"
UrlConf.URL_QUERY_TOKEN = UrlConf.First_Url_50 .. "juno/GetTokenByTempUUID"
UrlConf.URL_GET_LAST_LOGIN_INFO = UrlConf.First_Url_50 .. "juno/GetLastLoginInfo"

return UrlConf
�`