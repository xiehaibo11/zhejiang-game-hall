return [[
syntax = "proto3";

package Zeus.pyrrla.v1;

enum MatchState {
  MATCH_FALSE = 0;
  MATCH_SUCCESS = 1;   // 匹配成功
}

message LogClothoMatch {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 num_id = 3; //匹配主目标玩家id
  int64 gold = 4;   //匹配主目标玩家携带货币
  int64 join_time = 5; //匹配主目标玩家加入队列时间
  string content = 6; //匹配数据 json
  int64 cost_time = 7; //匹配耗时
  string order_id = 8; //订单id
  int64 gold_maxdiff = 9; //金币最大差值
  MatchState match_state = 10;
  int32 session = 11; //房间等级
  int32 player_count = 12; //对局人数
  int32 queue_len = 13; // 匹配队列人数
  int32 game_id = 14;
}

// 以上是客户端自己定义服务端没有import进来的结构,下面使用的地方记得改一下
// 游戏配置
message GameConfig {
  int32 tenant_id = 1;                            // 租户id，区分不同租户
  int32 area_id = 2;                              // 区域id，区分不通区域
  int32 game_id = 3;                              // 游戏id，区分不同游戏
  string name = 4;                                // 游戏名称
  repeated GameSessionConfig sessions = 5;        // 游戏场次配置
}

// 游戏场次配置
message GameSessionConfig {
  int32 session_id = 1;                     //场次id
  int32 session_level = 2;                  //场次等级(新增)
  string session_name = 3;                  //场次名称(新增)
  int32 session_sort = 4;                   //场次排序(新增)
  int32 session_flag = 5;                   //场次是否开启(显示但置灰、看需求修改含义或者改成显示开关？)
  int32 min_score = 6;                      //场次入场金币下限
  int32 max_score = 7;                      //场次入场金币上限(新增)
  int32 cost = 8;                           //场次服务费(新增)
  int32 cost_mode = 9;                      //场次扣除方式(新增)
  int32 base_online = 10;                   //场次基础展示人数(新增)
  int32 chair_cnt = 12;                     //桌子椅子数
  int32 base_score = 13;                    //底分
  string game_rule = 14;                    //玩法规则
  int64 big_min_score = 15;                 //场次入场金币下限
  int64 big_max_score = 16;                 //场次入场金币上限(新增)
  int64 robot_max_score = 17;               //机器人最大金币数
  bool dynamic_cost = 18;                   //是否开启动态底分+动态手续费
  string base_score_cfg = 19;               //动态底分配置   门槛|底分,门槛|底分
  double rate_to_cost = 20;                 //动态手续费比例
  string extra_cost_cfg = 21;               //动态手续费特殊配置 门槛|手续费,门槛|手续费
  string key_of_cost = 22;                  //手续费gamerule的key(不配就用默认的)
  string key_of_base_score= 23;             //底分gamerule的key(不配就用默认的)
  repeated int32 cost_limit = 24;           //动态手续费上下限  下限,上限
  bool continue_room = 25;                  //是否是续桌房间
  int32 max_continue_num = 26;              //最大续桌局数

}

message GameConfigRequest {
  int32 tenant_id = 1;                            // 租户id，区分不同租户
  int32 area_id = 2;                              // 区域id，区分不通区域
  int32 game_id = 3;                              // 游戏id，区分不同游戏
  int32 session_id = 4;                           //场次id
}
message GameConfigReply {
  repeated GameConfig game_config_list = 1;
}

// 请求--场次在线人数
message ListOnlineCountRequest
{
  int32 tenant_id = 1;    // 租户ID
  int32 area_id = 2;      // 地区id
  int32 game_id = 3;      // 游戏id
}

// 应答--场次在线人数
message ListOnlineCountReply
{
  CODE code = 1;           // 状态码
  int32 tenant_id = 2;    // 租户ID
  int32 area_id = 3;      // 地区id
  repeated GameOnlineCount game_online_list = 4; //场次在线人数列表
}

message SessionOnlineCount
{
  int32 session_id = 1;
  int32 count = 2;
}

message GameOnlineCount
{
  int32 game_id = 1;      // 游戏id
  int32 game_count = 2;   // 游戏总在线人数
  repeated SessionOnlineCount session_online_list = 3; //场次在线人数列表
}
enum AIType {
AI_NONE = 0;
AI_SUPHX = 1;
}

// 请求--加入匹配队列
message PlayerJoinRequest
{
  int32 tenant_id = 1;              //租户ID 根据消息头获取 不用客户端传值
  int32 area_id = 2;                 //地区id 根据消息头获取 不用客户端传值
  int32 game_id = 3;                //游戏id
  int32 session_id = 4;               //场次id
  bool robot = 5;                    //客户端是否机器人
  int32 user_id = 6;                  //玩家id 根据消息头获取 不用客户端传值
  int32 room_id = 7;               // 房间号, 用来标记玩家是否“继续游戏”(续桌)
  int32 chair_cnt = 8;           // 游戏人数
  string srs_ip = 9;            // srs_ip
  AIType ai_type = 10; // ai 类型
  int64 gold = 11;  //玩家携带货币（客户端不用传）
  int32 use_prop_id = 12;     // 当前进匹配前玩家使用的道具id （例如暗斗的入场券）
}

// 应答--加入匹配队列
message PlayerJoinReply
{
  CODE code = 1;                   // 状态码
  int32 tenant_id = 2;             // 租户ID
  int32 area_id = 3;               // 地区id
  int32 game_id = 4;               // 游戏id
  int32 session_id = 5;            // 场次id
  int32 gold_count = 6;            // 金币数量
  int64 gold_big_count = 7;        // int64 金币数量
  int32 chair_cnt = 8;           // 游戏人数
}

// 请求--离开匹配队列
message PlayerLeaveRequest
{
  int32 tenant_id = 1;    // 租户ID 根据消息头获取 不用客户端传值
  int32 area_id = 2;      // 地区id 根据消息头获取 不用客户端传值
  int32 game_id = 3;      // 游戏id
  int32 session_id = 4;      // 场次id
  int32 user_id = 5;      // 玩家id 根据消息头获取 不用客户端传值
  int32 chair_cnt = 6;           // 游戏人数
}

// 应答--离开匹配队列
message PlayerLeaveReply
{
  CODE code = 1;          // 状态码
  int32 tenant_id = 2;    // 租户ID
  int32 area_id = 3;      // 地区id
  int32 game_id = 4;      // 游戏id
  int32 session_id = 5;      // 场次id
  int32 chair_cnt = 6;           // 游戏人数
}

// 通知--匹配结果
message GameNotify
{
  CODE code = 1;                   //状态码
  int32 tenant_id = 2;             //租户ID
  int32 area_id = 3;               //地区id
  int32 game_id = 4;               //游戏id
  int32 session_id = 5;            //场次id
  int32 chair_cnt = 6;             // 游戏人数
  int32 chair_id = 7;              // 位置id
  int32 room_id = 8;               // 房间号
  int32 game_app_id = 9;           // GameProcess的appid
  int32 room_mode = 10;            //
  int32 srs_group_id = 11;         //
  int32 user_id = 12;              // 用户id
  bool robot = 13;                 // 是否机器人
  string srs_ip = 14;               //srs_ip
  int32 level = 15;               // 等级
  AIType ai_type = 16; // ai 类型
}

// 通知--匹配结果
message CostNotify
{
  int32 tenant_id = 1;             //租户ID
  int32 area_id = 2;               //地区id
  int32 game_id = 3;               //游戏id
  int32 session_id = 4;            //场次id
  int32 cost = 5;                  //手续费
  int32 base_score = 6;            //底分
}

// 通知--匹配结果
message EnterGameNotifyRequest
{
  repeated GameNotify notify = 1;
  int32 gold_room_id = 2;
  CODE code = 3;                   //状态码
  repeated LogClothoMatch logs = 4;
}

// 通知--匹配结果
message EnterGameNotifyReply
{
  CODE code = 1;                   //状态码
  int32 gp_room_id = 2;            //gp房间号
}

// 请求--牌局结束
message GameOverRequest
{
  int32 tenant_id = 1;                //租户ID
  int32 area_id = 2;                  //地区id
  int32 game_id = 3;                  //游戏id
  int32 session_id = 4;               //场次id
  repeated int32 users = 5;           // 用户列表
}

// 应答--牌局结束
message GameOverReply
{
  CODE code = 1;                   //状态码
}

// 请求--破产校验
//xyid=8
message GoldBrokeRequest
{
  int32 tenant_id = 1;                //租户ID
  int32 area_id = 2;                  //地区id
  int32 user_id = 3;                  //玩家id
}
// 应答--破产校验返回
//xyid=9
message GoldBrokeReply
{
  CODE code = 1;                   // 状态码
  int32 tenant_id = 2;             // 租户ID
  int32 area_id = 3;               // 地区id
  int32 floor = 4;                 // 破产条件
  int32 times = 5;                 // 第x次赠送
  int32 day_times = 6;             // 每天x次
  int32 gold_count = 7;            // 送x金币
  int64 gold_big_count = 8;        // 送x金币 int64
}

//请求--踢人
//xyid = 11
message PlayerKickRequest{
  int32 tenant_id = 1;  //根据消息头获取 不用客户端传值
  int32 area_id = 2;    //根据消息头获取 不用客户端传值
  int32 user_id = 3;    //根据消息头获取 不用客户端传值
  Player target_player= 4;
  enum KickType {
    OWNER = 0;  // 房主踢人
    FORCE = 1;  // 强制离开
    PLAYER = 2; // 玩家踢人
  }
  KickType kick_type = 5;
}

//应答--踢人
//xyid = 12
message PlayerKickReply{
  CODE code = 1;                   // 状态码
}

//时钟通知
//xyid = 13
message ClockNotify{
  int32 time = 1;
  int32 seat= 2;
  enum Flag {
    NONE =0;
    TIMEOUT_KICK=1; //超时踢人
  }
  Flag flag = 3;
}

message DismissNotify {
  CODE code = 1;                   //状态码
  int32 tenant_id = 2;             //租户ID
  int32 area_id = 3;               //地区id
  int32 game_id = 4;               //游戏id
  int32 session_id = 5;            //场次id
  int32 chair_cnt = 6;             // 游戏人数
  int32 chair_id = 7;              // 位置id
  int32 room_id = 8;               // 房间号
  int32 game_app_id = 9;           // GameProcess的appid
  enum DismissType {
    NONE = 0;
    NOT_SUITABLE_CONTINUE=1; //不满足续桌条件
    PLAYER_NOT_ENOUGH = 2; //人不足解散
  }
  DismissType dismiss_type = 10; //解散类型
}

message PlayerReadyNotify {
  int32 tenant_id = 1;             //租户ID
  int32 area_id = 2;               //地区id
  int32 user_id = 3;               // 玩家id
  int32 chair_id = 4;              // 位置id
  enum ReadyState {
    NONE = 0;
    READY = 1; //玩家准备
    NOT_READY = 2; //玩家未准备
  }
    ReadyState ready_state = 5; // 准备状态
}

message PlayerLeaveNotify {
  int32 tenant_id = 1;             //租户ID
  int32 area_id = 2;               //地区id
  int32 user_id = 3;               // 玩家id
  int32 chair_id = 4;              // 位置id
  enum LeaveWay {
    NONE = 0;
    SELF = 1; //玩家主动离开
    PLAYER_KICK = 2; //被玩家踢出
    TIME_OUT = 3; //玩家超时离开
	SYSTEM_KICK = 4;//被系统踢出
  }

  LeaveWay leave_way = 5; //离开方式
  Player kick_player = 6;  //踢人的玩家
}

message Player {
  int32 tenant_id = 1;             //租户ID
  int32 area_id = 2;               //地区id
  int32 user_id = 3;               // 玩家id
  string user_name = 4;            //玩家名称
  int32 chair_id = 5;              // 位置id
}

//xyid=20
message GoldSettingRequest{
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 opt = 4;//0获取 1设置
  int32 type = 5;
  repeated int32 val = 6;
}
  
//xyid=21
message GoldSettingReply{
  repeated int32 val = 1;
}


message CommonResp {
  int32 err_code = 1;
  string err_reason = 2;
  int32 ask_id = 3;
}

message GoldGameInfo{
  int32 game_id = 1;
  int32 room_level = 2;
  int32 player_cnt = 3;
}

// 请求金币玩家信息
//xyid=22
message GoldPlayerInfoRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;//租户ID
  int32 area_id = 3;//地区id
  int32 user_id = 4;// 玩家id
}

//xyid=23
message GoldPlayerInfoReply{
  CommonResp resp = 1;
  string gold_nick = 2; //昵称
  int32 gold_sex = 3; //性别
  int32 gold_head_idx = 4;//头像索引
  string gold_head_url = 5;//头像地址
  int64 total_play_cnt = 6;//总局数
  int64 total_win_cnt = 7;//胜利的局数
  repeated GoldGameInfo gold_game_info = 8;//常玩游戏
}

// 设置金币玩家个人信息
//xyid=24
message GoldPlayerInfoSetRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;//租户ID
  int32 area_id = 3;//地区id
  int32 user_id = 4;// 玩家id
  enum OptType {
    NONE = 0;
    SET_GOLD_NICK = 1; //设置昵称
    SET_GOLD_SEX = 2; //设置性别
    SET_GOLD_HEAD_IDX = 3; //设置头像索引
  }
  int32 opt_type = 5;
  string gold_nick = 6;//昵称
  int32 gold_sex = 7;//性别
  int32 gold_head_idx = 8;//头像索引
}

//xyid=25
message GoldPlayerInfoSetReply{
  CommonResp resp = 1;
}

message GoldRecordItem{
  int32 area_id = 1;
  int32 user_id = 2;
  int64 end_time = 3;//结束时间
  int64 score = 4;// 分数
  enum Result{
    NONE = 0;
    LOSE = 1;
    WIN = 2;
    PING = 3;
  }
  int32 result = 5;
  GoldGameInfo gold_game_info = 6;
}

// 金币战绩
//xyid=26
message GoldRecordRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;//租户ID
  int32 area_id = 3;//地区id
  int32 user_id = 4;// 玩家id
  repeated int32 game_id = 5; //游戏筛选
  int32 page_idx = 6;//页码,从0开始
}

//xyid=27
message GoldRecordReply{
  CommonResp resp = 1;
  repeated GoldRecordItem gold_record_item = 2;
  int32 curr_page_idx = 3;//当前页码
  int32 total_page_num = 4;//总页数
  int32 total_num = 5;//总条数
}

enum PROTOCOL {
  START = 0;
  PLAYER_JOIN_REQUEST = 1;    //请求--加入匹配队列
  PLAYER_JOIN_REPLY = 2;         //应答--加入匹配队列
  PLAYER_LEAVE_REQUEST = 3;  //请求--离开匹配队列
  PLAYER_LEAVE_REPLY = 4;       //应答--离开匹配队列
  ONLINE_COUNT_REQUEST = 5;                //请求--场次在线人数
  ONLINE_COUNT_REPLY = 6;                     //应答--场次在线人数
  JOIN_DISPATCH_QUEUE_NOTIFY = 7;        //通知客户端匹配结果
  COST_NOTIFY = 10;                     //通知客户端手续费
  PLAYER_KICK_REQUEST = 11;             //请求--踢人
  PLAYER_KICK_REPLY = 12;               //应答--踢人
  DISMISS_NOTIFY = 13;                  //通知客户端解散
  PLAYER_READY_NOTIFY = 14;             //玩家准备通知
  PLAYER_LEAVE_NOTIFY = 15;             //玩家离开通知
}

// 错误码
enum CODE
{
  GOLD_SUCCESS = 0;                     // 正常
  GOLD_FAILED = 13001;                  //失败
  GOLD_LOW_LIMIT = 13002;               // 金币低于下限
  GOLD_HIGH_LIMIT = 13003;              // 金币超过上限
  GOLD_GAMING = 13004;                  // 加入失败,玩家还在游戏中
  GOLD_QUEUING = 13005;                 // 加入失败,玩家还在队列中
  GOLD_PARAM_ERROR = 13006;             // 参数错误
  GOLD_GAME_CONFIG_NOT_FOUND = 13007;   // 找不到游戏配置
  GOLD_OTHERS_GAMING = 13008;           // 正在其他场次游戏中
  GOLD_BROKE_TIMES_LIMIT = 13009;       // 破产补助已达上线
  GOLD_BROKE_INTERNAL_LIMIT = 13010;    // 破产补助冷却中
  GOLD_BROKE_SUPPLY = 13011;            // 破产补助成功
  MatchCountAbove = 13012;            // 比赛场对局上限
  MatchNotJoin = 13013;            // 比赛场不允许加入 没有报名
  MatchUnStart = 13014;            // 比赛场未开始
  GOLD_MATCH_TIMEOUT = 13015;            // 匹配超时
}

message GameSessionInfo {
  int32 session_id = 1;
  int64 big_min_score = 2;                 //场次入场金币下限
  int64 big_max_score = 3;                 //场次入场金币上限 (-1 代表没有上限)
  int32 base_score = 4;                    //底分
  bool dynamic_cost = 5;                   //动态底分 开启
  int32 chair_cnt = 6;                     //游戏人数
}
// 金币游戏配置信息获取
// xyid=28
message GoldGameConfRequest{
  int32 ask_id = 1;
  int32 game_id = 2; // 游戏
}
// 金币游戏配置信息返回
// xyid=29
message GoldGameConfReply {
  CommonResp resp = 1;
  repeated GameSessionInfo infos = 2;  // 场次信息
}

]]�A  