local ReqSxvipGameRecord = class("ReqSxvipGameRecord", XH.ReqHttp)
local UrlConf = require("app.Config.UrlConf")

function ReqSxvipGameRecord:ctor()
    ReqSxvipGameRecord.super.ctor(self)
end

-- // 战绩统计
-- // xyid= 2342
-- message RecordStatisticsRequest{
--   int32 ask_id = 1;
--   int32 room_mode = 2; //房间模式 10:包房, 13 比赛场
--   int32 game_id = 3;
--   int32 page = 4;
--   int32 page_size = 5;
-- }

-- // xyid= 2343
-- message RecordStatisticsReply{
--   CommonResp resp = 1;
--   int32 total = 2;                    //总条数 分页用
--   int64 today_score = 3;              //今日优胜值
--   int64 yesterday_score = 4;          //昨日优胜值
--   int64 before_score = 5;             //前日优胜值
--   int64 nears_score = 6;              //近7日优胜值
--   repeated RecordInfo infos = 7;      //近7天对局数据
--   repeated int32 game_ids = 8;        //游戏ids
--   repeated RoomModeInfo modes = 9;    //房间模式 
-- }

-- // 模式筛选
-- message RoomModeInfo {
--   int32 room_mode = 1;
--   int32 club_id = 2;
--   string name = 3;  // 房间模式名字 【全部模式】【好友房】【比赛场】【张三的比赛场】【李四的比赛场(888)】
-- }

-- // 战绩详情
-- message RecordInfo {
--   int64 ledger_id = 1;    //总单id
--   int32 game_id = 2;      //游戏id
--   int32 room_mode = 3;    //房间模式
--   int32 cur_count = 4;    //当前局数
--   int32 total_count = 5;  //总局数
--   int32 ren = 6;          //人数
--   int32 club_id = 7;      //比赛场id
--   int64 score = 8;        //分数 优胜值
--   int64 start_time = 9;   //开始时间
-- }

function ReqSxvipGameRecord:start(data , timeout)
    if ReqSxvipGameRecord.super.start(self, timeout) == false then
        return
    end

    self._reqData = data

    local urlInfo = {}
    urlInfo.ask_id = os.time()
    urlInfo.room_mode = data.room_mode or 0 --10包厢  13比赛场
    urlInfo.club_id = data.club_id or 0 --传入13roomm_mode为13时，可选传
    urlInfo.game_id = data.game_id or 0 --游戏id
    urlInfo.page = data.page or 1
    urlInfo.page_size = data.page_size or 10

    local headmap = {}
    headmap["Content-Type"] = "application/json"
    local jsonStr = cjson.encode(urlInfo)

    XH.httpManager50:RequestPost(XH.HttpDefine.URL_SXVIP_GAME_RECORD, UrlConf.URL_SXVIP_GAME_RECORD, jsonStr, XH.HttpDefine.HTTP_CALLBACK_TYPE.CALL_BACK_JSON, handler(self, self.onHttpCallBack), headmap)
end

function ReqSxvipGameRecord:onHttpCallBack(httpID, status, response)
    if not httpID or httpID ~= XH.HttpDefine.URL_SXVIP_GAME_RECORD then
        return
    end
    if status == 200 then
        if response.resp and response.resp.errCode == 0 then
            response.reqData = self._reqData
            self:success(response)
        elseif response.resp and response.resp.errCode == 9 then
            self:setMessage("正在加载，请稍后..")
            self:fail()
        else
            self:setMessage("请求战绩列表失败")
            self:fail()
        end
    else
        self:fail()
    end
end

return ReqSxvipGameRecord
