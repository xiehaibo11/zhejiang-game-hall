return [[
  syntax = "proto3";

package Zeus.pyrrla.v1;

//processid = 1147

// 游戏配置
message GameConfig {
  int32 tenantId = 1;                            // 租户id，区分不同租户
  int32 areaId = 2;                              // 区域id，区分不通区域
  int32 gameId = 3;                              // 游戏id，区分不同游戏
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
  int32 player_count = 11;                  //场次人数
  int32 chair_cnt = 12;                     //椅子数
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
//xyid=5
message ListOnlineCountRequest
{
  int32 tenant_id = 1;    // 租户ID
  int32 area_id = 2;      // 地区id
  int32 game_id = 3;      // 游戏id
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

// 应答--场次在线人数
//xyid=6
message ListOnlineCountReply
{
  CODE code = 1;           // 状态码
  int32 tenant_id = 2;    // 租户ID
  int32 area_id = 3;      // 地区id
  repeated GameOnlineCount game_online_list = 4; //场次在线人数列表
}

// 请求--加入匹配队列
//xyid=1
message JoinDispatchQueueRequest
{
  int32 tenant_id = 1;              //租户ID
  int32 area_id = 2;                 //地区id
  int32 game_id = 3;                //游戏id
  int32 session_id = 4;               //场次id
  bool robot = 5;                    //客户端是否机器人
  int32 user_id = 6;                  //玩家id
  int32 room_id = 7;               // 房间号, 用来标记玩家是否“继续游戏”(续桌)
  int32 chair_cnt = 8;           // 游戏人数
}

// 应答--加入匹配队列
//xyid=2
message JoinDispatchQueueReply
{
  CODE code = 1;                   //状态码
  int32 tenant_id = 2;            //租户ID
  int32 area_id = 3;               //地区id
  int32 game_id = 4;             //游戏id
  int32 session_id = 5;            //场次id
  int32 gold_count = 6;            // 金币数量
}

// 请求--离开匹配队列
//xyid=3
message LeaveDispatchQueueRequest
{
  int32 tenant_id = 1;    // 租户ID
  int32 area_id = 2;      // 地区id
  int32 game_id = 3;      // 游戏id
  int32 session_id = 4;      // 场次id
  int32 user_id = 5;      // 玩家id
}

// 应答--离开匹配队列
//xyid=4
message LeaveDispatchQueueReply
{
  CODE code = 1;          // 状态码
  int32 tenant_id = 2;    // 租户ID
  int32 area_id = 3;      // 地区id
  int32 game_id = 4;      // 游戏id
  int32 session_id = 5;      // 场次id
}

// 通知--匹配结果
//xyid=7
message GameNotify
{
  CODE code = 1;                   //状态码
  int32 tenant_id = 2;            //租户ID
  int32 area_id = 3;               //地区id
  int32 game_id = 4;              //游戏id
  int32 session_id = 5;            //场次id
  int32 chair_cnt = 6;             // 游戏人数
  int32 chair_id = 7;               // 位置id
  int32 room_id = 8;               // 房间号
  int32 game_app_id = 9;        // GameProcess的appid
  int32 room_mode = 10;         //
  int32 srs_group_id = 11;         //
  int32 user_id = 12;              // 用户id
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
}

// 通知--匹配结果
message EnterGameNotifyRequest
{
  repeated GameNotify notify = 1;
  CODE code = 2;                   //状态码
}

// 通知--匹配结果
message EnterGameNotifyReply
{
  CODE code = 1;                   //状态码
}

enum PROTOCOL {
  START = 0;
  JOIN_DISPATCH_QUEUE_REQUEST = 1;    //请求--加入匹配队列
  JOIN_DISPATCH_QUEUE_REPLY = 2;         //应答--加入匹配队列
  LEVEL_DISPATCH_QUEUE_REQUEST = 3;  //请求--离开匹配队列
  LEVEL_DISPATCH_QUEUE_REPLY = 4;       //应答--离开匹配队列
  ONLINE_COUNT_REQUEST = 5;                //请求--场次在线人数
  ONLINE_COUNT_REPLY = 6;                     //应答--场次在线人数
  JOIN_DISPATCH_QUEUE_NOTIFY = 7;        //通知客户端匹配结果
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
}
]]L