local ReqSxvipGameStatistics = class("ReqSxvipGameStatistics", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipGameStatistics:ctor()
    ReqSxvipGameStatistics.super.ctor(self)
end

-- // 牌局统计
-- // xyid=2340
-- message GameStatisticsRequest{
--   int32 ask_id = 1;
--   int32 room_mode = 2; //房间模式 10:包房, 13 比赛场
--   int32 club_id = 3
--   int32 game_id = 4;
--   int32 ren = 5;
--   int64 start_time = 6; //开始时间 
--   int64 end_time = 7;   //结速时间
-- }

-- // xyid= 2341
-- message GameStatisticsReply{
--   CommonResp resp = 1;
--   int64 total_score = 2;    //总分数 优胜值
--   int32 total_count = 3;    //总场次
--   int32 champion_count = 4  //冠军数
--   int32 win_count = 5;      //赢的次数
--   repeated int32 game_ids = 6;    //游戏筛选
--   repeated int32 rens = 7;    //人数筛选
--   repeated RoomModeInfo modes = 8; //房间模式筛选
-- }

-- // 模式筛选
-- message RoomModeInfo {
--   int32 room_mode = 1;
--   int32 club_id = 2;
--   string name = 3;  // 房间模式名字 【全部模式】【好友房】【比赛场】【张三的比赛场】【李四的比赛场(888)】
-- }

function ReqSxvipGameStatistics:start(data , timeout)
    if ReqSxvipGameStatistics.super.start(self, timeout) == false then
        return
    end

    self._reqData = data

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.room_mode = data.room_mode or 0 --10包厢  13比赛场
    urlInfo.club_id = data.club_id or 0 --传入13roomm_mode为13时，可选传
    urlInfo.game_id = data.game_id or 0 --游戏id
    urlInfo.ren = data.ren or 0 --人数
    urlInfo.start_time = data.start_time or 0  --开始时间
    urlInfo.end_time = data.end_time or 0      --结束时间
    urlInfo.vip = data.vip or false

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_GAME_STATISTICS, UrlConf.URL_SXVIP_GAME_STATISTICS, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipGameStatistics:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_GAME_STATISTICS then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            response.reqData = self._reqData
            self:success(response)
        else
            self:setMessage(response.resp and response.resp.errReason)
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipGameStatistics
�
