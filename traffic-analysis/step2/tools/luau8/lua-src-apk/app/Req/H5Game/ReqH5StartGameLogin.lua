local ReqH5StartGameLogin = class("ReqH5StartGameLogin")
require("cocos.cocos2d.json")

ReqH5StartGameLogin.GameList = {
    LEGEND = 1,
    BUYU = 2,
    KNIFELEGEND = 3,
    BUYUDAJIANGSAI = 5,
    DATIANSHIZHIJIAN = 6,
    LINGMENGZHIBO = 7,
    REXUEFENGSHEN = 8, --热血封神
    DOULUODALU = 9, --斗罗大陆
    JIEJISANGUO = 10, --街机三国
    SHEISHISHOUFU = 11, --谁是首富
    WEIJINGCHUANQI = 12, -- 维京传奇
    ZHUOYUECHUANSHUO = 13, -- 卓越传说
    YUANZHENGJIANGSHI = 14, -- 远征将士
    RONGYAOZHINU = 15, -- 荣耀之怒
    BAIZHANSHACHENG = 16, -- 百战沙城
    HUANXIANGMINGJIANGLU = 17,
}

ReqH5StartGameLogin.GameConfig = {
    [ReqH5StartGameLogin.GameList.LEGEND] = { gameid = "810000", shopid = "8" },
    [ReqH5StartGameLogin.GameList.BUYU] = { gameid = "810004", shopid = "10" },
    [ReqH5StartGameLogin.GameList.KNIFELEGEND] = { gameid = "810005", shopid = "12" },
    [ReqH5StartGameLogin.GameList.BUYUDAJIANGSAI] = { gameid = "810002",shopid = "9"},
    [ReqH5StartGameLogin.GameList.DATIANSHIZHIJIAN] = { gameid = "810013",shopid = "1007"},
    [ReqH5StartGameLogin.GameList.LINGMENGZHIBO] = { gameid = "810011",shopid = "19"},
    [ReqH5StartGameLogin.GameList.REXUEFENGSHEN] = { gameid = "810014",shopid = "1020"},
    [ReqH5StartGameLogin.GameList.DOULUODALU] = { gameid = "810015",shopid = "1021"},
    [ReqH5StartGameLogin.GameList.JIEJISANGUO] = { gameid = "810016",shopid = "1022"},
    [ReqH5StartGameLogin.GameList.SHEISHISHOUFU] = { gameid = "810017",shopid = "1023"},
    [ReqH5StartGameLogin.GameList.WEIJINGCHUANQI] = { gameid = "810018",shopid = "1024"},
    [ReqH5StartGameLogin.GameList.ZHUOYUECHUANSHUO] = { gameid = "810019",shopid = "1025"},
    [ReqH5StartGameLogin.GameList.YUANZHENGJIANGSHI] = { gameid = "810020",shopid = "1026"},
    [ReqH5StartGameLogin.GameList.RONGYAOZHINU] = { gameid = "810023",shopid = "1027"},
    [ReqH5StartGameLogin.GameList.BAIZHANSHACHENG] = { gameid = "810025",shopid = "1029"},
    [ReqH5StartGameLogin.GameList.HUANXIANGMINGJIANGLU] = { gameid = "810027",shopid = "1031"},
}

ReqH5StartGameLogin.ACTION_RET_OPEN_GAME_SUCCESS = 92004 -- 打开游戏成功
ReqH5StartGameLogin.ACTION_RET_OPEN_GAME_FAILED = 92005 -- 打开游戏失败
ReqH5StartGameLogin.ACTION_RET_CLOSE_GAME_SUCCESS = 92006 -- 关闭游戏成功
if device.platform == "android" then
    ReqH5StartGameLogin.ACTION_RET_OPEN_GAME_SUCCESS = 910003  -- 打开游戏成功
    ReqH5StartGameLogin.ACTION_RET_OPEN_GAME_FAILED = 910004 -- 打开游戏失败
    ReqH5StartGameLogin.ACTION_RET_CLOSE_GAME_SUCCESS = 910005 -- 关闭游戏成功
end

function ReqH5StartGameLogin:ctor()
    self._callBacks = {}
    self._isStart = false
    self._ThirdResultScriptFuncID = 0
end

function ReqH5StartGameLogin:stop()
    self._callBacks = {}
    self._isStart = false
    if self._ThirdResultScriptFuncID then
        XH.sdkManager:removeSDKCallBackOld(self._ThirdResultScriptFuncID)
    end
end

function ReqH5StartGameLogin:start(numid, nickname, sex, wechaturl, gametag, bNeedConfigID, isWeChatId)
    if self._isStart then
        return false
    end
    self._isStart = true

    self._ThirdResultScriptFuncID = XH.sdkManager:addSDKCallBackOld(function(flag, data)
        self:onThirdResultCallBack(flag, data)
    end)

    local ext = {}
    ext.cp = XH.areaData:getH5CpID() or ""
    if bNeedConfigID then
        ext.config_id = tostring(XH.areaData:getH5ConfigID() or 0)
    end
    if isWeChatId then 
        numid = tostring(numid)
    else
        local startTime = os.time({day = 1, month = 4, year = 2021, hour = 0, minute = 0, second = 0}) 
        if XH.playerData:getRegTime() >  startTime then
            --为没有AA1_的用户加AA1_
            local matchid = string.match(tostring(numid),"(%d+)")
            if tostring(numid) == tostring(matchid)  then
                numid="AA1_"..tostring(numid)
            end
        end
    end
    local mapData = {
        ["0"] = self.GameConfig[gametag].gameid,
        ["1"] = tostring(numid),
        ["2"] = tostring(nickname),
        ["3"] = tostring(sex),
        ["4"] = tostring(wechaturl),
        ["5"] = self.GameConfig[gametag].shopid,
        ["6"] = json.encode(ext)
    }
    if gametag == ReqH5StartGameLogin.GameList.LINGMENGZHIBO then
        XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_JOIN_LINGMENG_ZHIBO)
    end
    XH.sdkManager:callFunctionWithMap("start_game_login", mapData)
end

function ReqH5StartGameLogin:addReqCallBack(cell, callbackFunc)
    local t = { f = callbackFunc, c = cell }
    for _, v in ipairs(self._callBacks) do
        if v.f == t.f and v.c == t.c then
            return
        end
    end
    self._callBacks[#self._callBacks + 1] = t
end

function ReqH5StartGameLogin:success(data)
    ReqH5StartGameLogin.super.success(self, data)
end

function ReqH5StartGameLogin:fail(data)
    ReqH5StartGameLogin.super.success(self, data)
end

function ReqH5StartGameLogin:onThirdResultCallBack(flag, data)
    if flag == ReqH5StartGameLogin.ACTION_RET_OPEN_GAME_FAILED then
        self:fail(data)
        self:stop()
    elseif flag == ReqH5StartGameLogin.ACTION_RET_CLOSE_GAME_SUCCESS then
        --self:setMessage("")
        self:success(data)
        self:stop()
    end
end

return ReqH5StartGameLoginX