return [[
syntax = "proto3";

package Zeus.nyx.v1;


option go_package = "codeup.aliyun.com/5ed620b5405cdab50f3ff306/taishan/Zeus/themis/v1;v1";
// processid = 116

message UserInfo {
  int32 area_id = 1;
  int32 user_id = 2;
}

message CommonResp {
  int32 err_code = 1;
  string err_reason = 2;
  int32 ask_id = 3;
}

enum DeviceType {
  AC_DEFAULT = 0;  // 默认没传
  AC_IOS = 1;      // ios
  AC_AZ = 2;       // 安卓
  AC_H5 = 3;       // h5
}

// GameStyleOperateType 操作类型枚举
enum GameStyleOperateType {
  // GETDATA 获取数据
  GETDATA = 0;
  // ADDPOWER 增加权限
  ADDPOWER = 1;
  // TODAYFREEADDPOWER 每日免费增加权限
  TODAYFREEADDPOWER = 2;
}

//玩家游戏风格
// xyid = 1501
message GameStyleRequest {
  int32 ask_id = 1;
  UserInfo observe_user = 2;  // 被查看的玩家
  GameStyleOperateType operate_type = 3;
  int32 room_id = 4;
}

message GameStyleInfo {
  int32 speed = 1;  // 对局时长，单位秒
  int32 luck =
      2;  // 自摸分 * 100 (麻将类：自摸100分,不自摸0分。 扑克类： 30分) e.g.3000
  int32 defense = 3;  // 防守分 * 100 (麻将类：点炮0分,不点炮100分。 扑克类：
  // 30分) e.g.10000
  int32 win = 4;  // 获胜分 * 100 (小核算加分：100分，减分：0分) e.g.0
}

// xyid = 1502
message GameStyleReply {
  CommonResp cr = 1;
  UserInfo observe_user = 2;  //被查看的玩家
  GameStyleInfo game_style = 3;
  GameStyleOperateType operate_type = 4;
}

// UserTodayFreeCntOperateType 操作类型枚举
enum UserTodayFreeCntOperateType {
  // GET 获取数据
  GET = 0;
  // ADD 增加次数
  ADD = 1;
  // USE 使用次数
  USE = 2;
}

//玩家当天的免费次数
// xyid = 1503
message UserTodayFreeCntRequest {
  int32 ask_id = 1;
  int32 event_id = 2;  // 事件id
  UserTodayFreeCntOperateType operate_type = 3;
}

// xyid = 1504
message UserTodayFreeCntReply {
  CommonResp cr = 1;
  int32 event_id = 2;  // 事件id
  int32 Total = 3;     // 一天最多免费次数
  int32 Got = 4;       // 当天已获取次数
  int32 Used = 5;      // 当天已使用次数
  UserTodayFreeCntOperateType operate_type = 6;
}

// 亲友圈活动--------------------------------------------------------------------------------
//--查询活动信息--//
// xyid=1531
message GetRecallActivityProcessRequest {
  int32 tenant_id = 1;  // 租户ID
  int32 area_id = 2;    // 区域ID
  int32 club_id = 3;    // 亲友圈ID
  int32 ask_id = 4;
}

// xyid=1532
message GetRecallActivityProcessReply {
  int64 start_time = 1;                      // 活动开始时间(秒)
  int64 end_time = 2;                        // 活动截止时间(秒)
  repeated ActivityTask activity_tasks = 3;  // 任务列表
  CommonResp cr = 4;
  int32 finished_count = 5;            // 已完成数量
  int32 reach_count = 6;               // 任务所需总数
  int32 yesterday_finished_count = 7;  // 昨日召回数量
  int32 player_count = 8;  // 不活跃玩家数量(需要召回玩家数量)
  bool show_red = 9;       // 邀请记录是否显示红点
}

//--获取推荐召回玩家列表--//
// xyid=1533
message ListRecallPlayerRequest {
  int32 tenant_id = 1;  // 租户ID
  int32 area_id = 2;    // 区域ID
  int32 club_id = 3;    // 亲友圈ID
  int32 ask_id = 4;
}

// xyid=1534
message ListRecallPlayerReply {
  repeated Player player = 1;   // 玩家信息列表
  repeated UserTask tasks = 2;  // 任务
  CommonResp cr = 3;
}

//--分页获取召回记录--//
// xyid=1535
message PageRecallRecordRequest {
  int32 tenant_id = 1;             // 租户ID
  int32 area_id = 2;               // 区域ID
  int32 club_id = 3;               // 亲友圈ID
  int32 page_no = 4;               // 分页页码
  int32 page_size = 5;             // 分页大小
  RECALL_USER_TYPE user_type = 6;  // 召回用户类型
  int32 ask_id = 7;
}

// xyid=1536
message PageRecallRecordReply {
  repeated Player player = 1;    // 玩家信息列表
  repeated Rewards rewards = 2;  // 奖励列表
  CommonResp cr = 3;
  int32 play_count = 4;      // 昨日对局数
  int32 recalled_count = 5;  // 昨日召回人数
}

//--分页获取玩家列表--//
// xyid=1537
message PageRecallPlayerRequest {
  int32 tenant_id = 1;                // 租户ID
  int32 area_id = 2;                  // 区域ID
  int32 club_id = 3;                  // 亲友圈ID
  int32 page_no = 4;                  // 分页页码
  int32 page_size = 5;                // 分页大小
  RECALL_USER_TYPE user_type = 6;     // 召回用户类型
  AWAY_USER_TYPE away_user_type = 7;  // 流失用户类型
  int32 away_days = 8;                // 流失天数
  int32 ask_id = 9;
  int32 user_id = 10;           // 玩家ID(搜索功能)
  DeviceType device_type = 11;  // 玩家设备类型
}

// xyid=1538
message PageRecallPlayerReply {
  repeated Player player = 1;  // 玩家信息列表
  int32 curPage = 2;           // 当前页码
  int32 totalPage = 3;         // 总页数
  CommonResp cr = 4;
  int32 inaction_count = 5;  // 不活跃玩家总数
}

//--一键召回--//
// xyid=1539
message RecallRequest {
  int32 tenant_id = 1;             // 租户ID
  int32 area_id = 2;               // 区域ID
  int32 club_id = 3;               // 亲友圈ID
  repeated int32 user_id = 4;      // 被召回玩家ID列表
  RECALL_USER_TYPE user_type = 5;  // 召回用户类型
  int32 ask_id = 6;
}

// xyid=1540
message RecallReply {
  CommonResp cr = 1;
}

//--领取奖励--//
// xyid=1541
message AcceptRecallRewardsRequest {
  int32 tenant_id = 1;  // 租户ID
  int32 area_id = 2;    // 区域ID
  int32 club_id = 3;    // 亲友圈ID
  int32 user_id = 4;    // 玩家ID
  int32 ask_id = 5;
  int32 activity_task_id = 6;    // 大奖任务id
  int32 prop_id = 7;             // 道具ID
  int32 get_reward_user_id = 8;  // 领奖用户ID
  DeviceType device_type = 9;    // 玩家设备类型
}

// xyid=1542
message AcceptRecallRewardsReply {
  CommonResp cr = 1;
}

//--搜索玩家(精确匹配)--//
// xyid=1543
message SearchRecallPlayerRequest {
  int32 tenant_id = 1;             // 租户ID
  int32 area_id = 2;               // 区域ID
  int32 club_id = 3;               // 亲友圈ID
  int32 user_id = 4;               // 玩家ID
  RECALL_USER_TYPE user_type = 5;  // 召回用户类型
  int32 ask_id = 6;
}

// xyid=1544
message SearchRecallPlayerReply {
  Player player = 1;  // 玩家信息
  CommonResp cr = 2;
}

//--召回是否有奖励--//
// xyid=1545
message HasRecallRewardsRequest {
  int32 tenant_id = 1;  // 租户ID
  int32 area_id = 2;    // 区域ID
  int32 club_id = 3;    // 亲友圈ID
  int32 user_id = 4;    // 玩家ID
  int32 ask_id = 5;
}

// xyid=1546
message HasRecallRewardsReply {
  bool has = 1;            // 是否有可领取奖励
  int32 recall_count = 2;  // 可召回玩家数
  CommonResp cr = 3;
  bool is_club_manager =
      4;  // 是否圈子管理员，用于大厅召回，req clubId为0的时候才有效
}

//--数据统计--//
// xyid=1547
message StatisticsRequest {
  int32 tenant_id = 1;                 // 租户ID
  int32 area_id = 2;                   // 区域ID
  int32 club_id = 3;                   // 亲友圈ID
  RECALL_USER_TYPE activity_type = 4;  // 活动类型
  int32 ask_id = 5;
}

// xyid=1548
message StatisticsReply {
  int32 away_count = 1;                // 流失人数
  int32 player_added_percent = 2;      // 活跃玩家增加比例
  int32 month_added_card = 3;          // 月耗卡增加数量
  int32 month_added_card_percent = 4;  // 月耗卡增加比例
  CommonResp cr = 5;
}

// 活动任务
message ActivityTask {
  UserTask task = 1;                // 需要完成的任务列表
  RECALL_STATUS recall_status = 2;  // 阶段任务状态
  int32 activity_task_id = 3;       // 大奖任务id
}

// 任务信息
message UserTask {
  TASK_TYPE task_type = 1;          // 任务类型
  RECALL_STATUS recall_status = 2;  // 任务状态
  int32 task_reach = 3;             // 达到次数, 如: 召回6人
  string task_name = 4;             // 任务名称
  repeated Rewards rewards = 5;     // 奖励列表
  int32 task_id = 6;                // 任务ID
}

message Player {
  int32 user_id = 1;                 // 玩家ID
  string nick_name = 2;              // 玩家昵称
  string head_icon = 3;              // 玩家头像图片地址
  int64 last_login_time = 4;         // 上次登录时间(秒)
  int64 last_play_time = 5;          // 上次对局时间(秒)
  int64 quit_time = 6;               // 退出亲友圈时间(秒)
  int64 recall_time = 7;             // 召回邀请时间(秒)
  int64 recalled_time = 8;           // 召回时间(秒)
  int32 play_count = 9;              // 当日对局数
  RECALL_STATUS recall_status = 10;  // 召回状态
  int32 tenant_id = 11;
  int32 area_id = 12;
  int32 club_id = 13;
  string task_status_tips = 14;  // 状态提示
  string task_reward_tips = 15;  // 奖励提示
  // 2.0新增
  bool hot = 16;                  // 标记"热"
  int32 successRate = 17;         // 成功率
  repeated Rewards rewards = 18;  // 普通玩家奖励
  int64 expire_at = 19;           // 领奖过期时间, 时间戳(秒)
  int32 away_days = 20;           // 流失天数
  int32 from_user_id = 21;        // 召回发起玩家
  int32 club_owner = 22;          // 圈主ID
  Rewards ownerRewards = 23;      // 圈主/管理员奖励
  map<int32, int32> got_reward_players =
      24;                      // 已领奖玩家ID列表 map<玩家id, 1|0>
  bool in_charge = 25;         // 圈主是否在B端充值中
  int64 first_play_time = 26;  // 召回后首次对局时间
  repeated int32 club_managers = 27;  // 管理员列表
}

// 召回用户类型
enum RECALL_USER_TYPE {
  ACTIVITY = 0;  // 召回活动用户
  AWAY = 1;      // 常驻功能流失用户
  QUIT = 2;      // 常驻功能退圈用户
  AWAY2 = 3;     // 常驻功能-流失用户召回2.0
}

// 流失用户维度定义
enum AWAY_USER_TYPE {
  NOT_LOGIN = 0;  // N天未登录
  NOT_PLAY = 1;   // N天未对局
  QUIT_CLUB = 2;  // 退出亲友圈天数
}

// 任务类型
enum TASK_TYPE {
  LOGIN = 0;     // 登录
  PLAY = 1;      // 对局
  RECHARGE = 2;  // 充值
}

// 召回状态
enum RECALL_STATUS {
  INIT = 0;         // 待完成
  DOING = 1;        // 完成中
  DONE = 2;         // 已完成/待领奖
  REWARD_DONE = 3;  // 已领奖

  // 召回活动2.0需求
  RECALL_GOT_REWARD = 5;  // 已领奖 - 领奖后
  RECALL_RECALLED_OTHERS =
      6;  // 被他人召回 - 召回仅登录(玩家已经通过其他人的召回链接登录回来)
  RECALL_RECALLED =
      7;  // 已召回 - 召回仅登录(无奖励 AND 玩家已经通过本人的召回链接登录回来)
  RECALL_PLAY_REWARD = 8;  // 对局奖励 - 召回仅登录(有奖励)
  RECALL_LOGIN_PLAY = 9;   // 待领奖 - 已登录且已对局
}
//--end 亲友圈召回--//

message Rewards {
  int32 id = 1;
  int32 count = 2;
  string icon = 3;
  string name = 4;
}

// 大厅召回活动展开界面
// xyid = 1519
message LobbyBackOpenViewRequest {
  int32 ask_id = 1;
}

enum LOBBY_BACK_OPEN_VIEW_TYPE {
  VIEW_NONE = 0;           // 不展开
  VIEW_RECALL = 1;         // 召回页面
  VIEW_ACTIVE_FRIEND = 2;  // 活跃牌友页面
}

// xyid = 1520
message LobbyBackOpenViewReply {
  CommonResp resp = 1;
  LOBBY_BACK_OPEN_VIEW_TYPE view = 2;
}

message SimplePlayerInfo {
  int32 user_id = 1;
  string nick_name = 2;  //昵称
  string head_url = 3;   //头像
}

// 获取推荐牌友
// xyid = 1521
message RecommendFriendRequest {
  int32 ask_id = 1;
}

// xyid = 1522
message RecommendFriendReply {
  CommonResp resp = 1;
  repeated SimplePlayerInfo persons = 2;
}

// 道具 赠送/折扣 活动
// xyid = 1523
message GetPropsDiscountRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 user_id = 3;    //用户id
  int32 ask_id = 4;
  repeated string tags = 5;  //活动标签
}

// 打折信息
message DiscountInfo {
  int32 price_id = 1;      //价格的道具id 例如:钻石
  int32 price_count = 2;   //价格
  int32 price_before = 3;  //原价
  int32 prop_id = 4;       //折扣道具
  int32 count = 5;         //道具数量
}

//优惠列表
message DiscountList {
  repeated DiscountInfo discounts = 1;
  string tag = 2;           //标签
  int32 activity_id = 3;    //活动id
  int32 price_prop_id = 4;  //参与活动的消耗
  int32 price_burse = 5;
  int32 price = 6;
}

// xyid = 1524
message GetPropsDiscountReply {
  map<int32, DiscountList> activitys = 1;  //活动 map<活动id,优惠列表>
  CommonResp resp = 2;
  GodLabelDetail label_detail = 3;  //签详情
}

// 道具 领取赠送
// xyid = 1525
message AcceptPresenterRequest {
  int32 tenant_id = 1;    //租户id
  int32 area_id = 2;      //地区id
  int32 user_id = 3;      //用户id
  int32 activity_id = 4;  //活动id
  int32 ask_id = 5;
}

// 道具奖品
message PropAward {
  int32 prop_id = 1;     //道具奖励
  int32 count = 2;       //道具数量
  int32 burse_type = 3;  //钱包类型
}

// xyid = 1526
message AcceptPresenterReply {
  repeated PropAward awards = 1;  //奖品列表
  CommonResp resp = 2;
  int32 activity_id = 3;            //活动id
  string tag = 4;                   //活动标签
  GodLabelDetail label_detail = 5;  //签详情
}

//求签状态
enum LABEL_STATE {
  LABEL_NONE = 0;      //未求签
  LABEL_UNSOLVED = 1;  //已求未解签
  LABEL_SOLVED = 2;    //已解求签
  LABEL_DONE = 3;      //番型达成
  LABEL_DREW = 4;      //已领取
}

enum LABEL_FENG {
  LABEL_DONG = 0;  //东
  LABEL_NAN = 1;   //南
  LABEL_XI = 2;    //西
  LABEL_BEI = 3;   //北
}

//签详情
message GodLabelDetail {
  int32 id = 1;             //第几签索引
  int32 game_id = 2;        //游戏id
  repeated int32 fans = 3;  //番型列表
  LABEL_STATE state = 4;    //状态
  LABEL_FENG feng = 5;      //风
  int32 label_type = 6;     //签类型
  int32 user_id = 7;        //用户
  int64 end_time = 8;       //领取时间
  string nick = 9;          //昵称
}

enum BEG_TYPE {
  BEG_BEG = 0;     //求签
  BEG_UNLOCK = 1;  //解签
}

//求签解签
// xyid = 1527
message BegGodLabelRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 activity_id = 4;  //活动id
  int32 ask_id = 5;
  int32 label_type = 6;  //签类型
  BEG_TYPE type = 7;     //求签行为
}

// xyid = 1528
message BegGodLabelReply {
  GodLabelDetail label_detail = 1;      //签详情
  int32 activity_id = 2;                //活动id
  string tag = 3;                       //活动标签
  repeated DiscountInfo discounts = 4;  //奖励
  CommonResp resp = 5;
}

//求签解签
// xyid = 1529
message BegGodLabelRecordRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 day = 4;     //几天内
  int32 length = 5;  //共多少条
  int32 ask_id = 6;
}

// xyid = 1530
message BegGodLabelRecordReply {
  repeated GodLabelDetail record = 1;
  CommonResp resp = 2;
}

// 活动触发
// xyid = 1551
message TriggerDiscountRequest {
  int32 tenant_id = 1;           //租户id
  int32 area_id = 2;             //地区id
  int32 user_id = 3;             //用户id
  int32 activity_id = 4;         //活动id
  repeated PropAward props = 5;  //消耗触发
  int32 ask_id = 6;
}

// xyid = 1552
message TriggerDiscountReply {
  CommonResp resp = 1;
  DiscountList activity = 2;
}

// 每月登录天数排行榜
// xyid = 1549
message LoginDayRankRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
  int32 cur_index = 3;  // 当前页码，从1开始
  int32 count = 4;      // 本次最多请求多少个
}

message RankUser {
  int32 rank_id = 1;  // 玩家的排名，从1开始
  int32 user_id = 2;
  string user_name = 3;
  string head_url = 4;
  int32 value = 5;
}

// xyid = 1550
message LoginDayRankReply {
  CommonResp resp = 1;
  repeated RankUser users = 2;
  int32 user_rank_id = 3;  // 请求的玩家的排名，从1开始
  int32 cur_index = 4;     // 当前页码，从1开始
  int32 total_page = 5;    // 总页数
}

// 钻石卡查询
// xyid = 1553
message GetDiamondCardRequest {
  int32 tenant_id = 1;          //租户id
  int32 area_id = 2;            //地区id
  int32 user_id = 3;            //用户id
  repeated int32 prop_ids = 4;  //根据道具id查询钻石卡
  int32 ask_id = 5;
}

enum DiamondCardState {
  NO_ACCEPT = 0;  //未领取
  ACCEPTED = 1;   //已领取
}

enum GiftBagState {
  NOT_BUY = 0;  //未购买
  BOUGHT = 1;   //已购买
}

message DiamondCardInfo {
  int32 prop_id = 1;              //道具id
  int32 time = 2;                 //到期时间
  DiamondCardState state = 3;     //领取状态
  GiftBagState gift_state = 4;    //礼包状态
  repeated PropAward once = 5;    //购买获得
  repeated PropAward repeat = 6;  //重复领取
}

// xyid = 1554
message GetDiamondCardReply {
  repeated DiamondCardInfo info = 1;
  CommonResp resp = 2;
}

// 领取钻石
// xyid = 1555
message AcceptDiamondRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 user_id = 3;    //用户id
  int32 prop_id = 4;    //道具id
  int32 ask_id = 5;
}

// xyid = 1556
message AcceptDiamondReply {
  repeated PropAward props = 1;
  CommonResp resp = 2;
}


// 无局转有局-获取领奖记录
// xyid=1557
message GetLogActiveMatchRequest {
  int32 tenant_id = 1;          //租户id
  int32 area_id = 2;            //地区id
  int32 user_id = 3;            //用户id
  int32 club_id = 4;            //圈子id
}

// xyid=1558
message GetLogActiveMatchReply {
  repeated ActiveMatchPropAward logs = 1;
  CommonResp resp = 2;
}

message ActiveMatchPropAward {
  repeated int32 users_id = 1; // 玩家id
  int32 received_award = 2;    // 已领取奖励
  int32 log_day = 3;           // 领奖日期
  int32 award = 4;             // 待领取奖励
  int32 play_count = 5;        // 对局记录
  int32 invite_award = 6;      // 邀请总奖励
  int32 game_award = 7;        // 对局总奖励
}

// 无局转有局-领取奖励
// xyid=1559
message GetRewardActiveMatchRequest {
  int32 tenant_id = 1;           //租户id
  int32 area_id = 2;             //地区id
  int32 user_id = 3;             //用户id
  int32 club_id = 4;             //圈子id
  int32 award_day = 5;           //领取X天奖励
  repeated int32 award_user = 6; //领取某玩家奖励
}

message ActiveMatchPlayerInfo {
  int32 user_id = 1;
  string nick_name = 2;    //昵称
  string head_url = 3;     //头像
  int32 game_reward = 4;   //对局奖励
  int32 invite_reward = 5; //邀请奖励
  int64 offline_time = 6;  //离线时间
  int32 user_status = 7;   //玩家状态
  int32 active_days = 8;   //活跃天数
  int32 state = 9;         //领奖状态
}

// 无局转有局-完成通知
// xyid=1565
message ActiveMatchNotify{
  repeated int32 users_id = 1;
}

// 无局转有局-是否为活跃无局玩家
// xyid=1566
message GetIsUnGamePlayersRequest{
  int32 tenant_id = 1;          //租户id
  int32 area_id = 2;            //地区id
  int32 user_id = 3;            //用户id
  int32 club_id = 4;            //圈子id
}

// 无局转有局-是否为活跃无局玩家
// xyid=1567
message GetIsUnGamePlayersReply{
  bool is_player = 1;
  CommonResp resp = 2;
}

// 获取玩家权益状况
// xyid=1568
message UserPrivilegeRequest{
  int32 ask_id = 1;
  bool just_level = 2;          //只获取等级
}

enum PrivilegeType {
  PrivilegeType_None = 0;
  Voucher = 1; // 代金券
  Prop = 2; // 道具
  CustomizeTask = 3; // 牌友活动
  CustomerService = 4; // 客服
  KuaJiUp = 5; // 跨级升级
}

message PrivilegePropStockTask {
  PrivilegeTaskContent prop_cnt = 1;
  PrivilegeTaskContent day_cnt = 2; // 需要完成的天数
  string unfinished_date = 3; // 未完成的日期
}

message PrivilegeTaskContent{
  int32 cur_num = 1;           // 当前有的数量
  int32 level_num = 2;        // 这层需要的数量
  int32 next_level_num = 3;    // 下一层次需要的数量
  int32 next_level_cur_num = 4; // 下一层次当前有的数量
}

enum UserPrivilegeState {
  UserPrivilegeState_None = 0;
  UserPrivilegeState_SeriesDown = 1; // 连续降级导致暂时不可以领奖
}

enum PrivilegeNoUpReason{
  PrivilegeNoUpReason_None = 0;
  PrivilegeNoUpReason_stock = 1; // 库存未达标
  PrivilegeNoUpReason_PropCost = 2; // 消耗未达标
}

message PrivilegeRewardItem {
  int32 prop_id = 1;
  int32 prop_cnt = 2;
  string desc = 3;
  string start_time = 4; // 2022-01-02
  string end_time = 5;
  int32 prop_type = 6;  //道具类型
  int32 coupon_id = 7;  // 优惠券的id
}

message PrivilegePropReward {
  PrivilegeType type_id = 1;
  repeated PrivilegeRewardItem prop_rewards = 2;
  bool got = 3;
}

message PrivilegeDesc {
  PrivilegeType type_id = 1;
  string desc = 2;
}

// xyid=1569
message UserPrivilegeReply{
  CommonResp cr = 1;
  bool just_level = 2;
  int32 level = 3; // 当前等级
  int64 end_time = 4; // 权益结束时间
  PrivilegeTaskContent prop_use = 5; // 房卡使用
  PrivilegePropStockTask prop_stock = 6; // 每日库存
  repeated PrivilegeDesc type_ids = 7; // 可用权益
  UserPrivilegeState state = 8;
  PrivilegeNoUpReason reason = 9; // 权益未上升的原因
  int32 cycle = 10; // 周期天数
  int32 max_level = 11; // 最大层级
  repeated PrivilegePropReward rewards = 12; // 奖励
  repeated PrivilegeDesc next_type_ids = 13; // 下个层次可用权益
  int32 prop_stock_type = 14; // 单日道具存量类型， 0 连续完成， 1 累计完成
}

// 领取玩家权益奖项
// xyid=1570
message ReceivePrivilegeItemRequest{
  int32 ask_id = 1;
  PrivilegeType type = 2;
  repeated int32 reward_id = 3;  //奖品 id
}

// xyid=1571
message ReceivePrivilegeItemReply{
  CommonResp cr = 1;
  repeated PrivilegeRewardItem items = 2;
}

// 赠送优惠券通知
// xyid=1572
message GiveCouponNotify {
  int32 from_user_id = 1; // 获赠来源
  string from_user_nick = 2;
  string coupon_json = 3; // 优惠券详情
}

enum ActiveMatch{
  UNBIND = 0;      // 未绑定
  BIND = 1;        // 已绑定
  FINISH = 2;      // 已完成
  AWARD_INVITE = 3;// 已领取（仅邀请）
  AWARD = 4;       // 已领取
}

// --------------------------------牌友活动 start
// 牌友活动创建
// xyid=1651
message CreatePaiYouInfoRequest {
  int32 ask_id = 1;
  PaiYouInfo info = 2;  // 活动信息
}

// xyid=1652
message CreatePaiYouInfoReply {
  CommonResp cr = 1;
}

// 牌友活动记录(已创建过的活动类型)
// xyid=1653
message ListPaiYouTypeRequest {
  int32 ask_id = 1;
  int32 club_id = 2;                    // 亲友圈ID
}

// xyid=1654
message ListPaiYouTypeReply {
  CommonResp cr = 1;
  repeated PaiYouActivityType activity_type = 2;      // 活动类型列表
}

// 牌友活动历史记录
// xyid=1655
message PagePaiYouInfoRequest {
  int32 ask_id = 1;
  PaiYouActivityType activity_type = 2;      // 活动类型
  int32 club_id = 3;                    // 亲友圈ID
  int32 page_no = 4;           // 分页页码
  int32 page_size = 5;          // 每页大小
}

// xyid=1656
message PagePaiYouInfoReply {
  CommonResp cr = 1;
  repeated PaiYouInfo info = 2;  // 活动信息
  int32 page_no = 3;           // 分页页码
  int32 page_size = 4;          // 每页大小
  int32 total = 5;              // 总记录数
}

// 牌友活动完成记录
// xyid=1657
message PagePaiYouCompletionInfoRequest {
  int32 ask_id = 1;
  int32 activity_id = 2;        // 活动ID
  int32 club_id = 3;                    // 亲友圈ID
  int32 page_no = 4;           // 分页页码
  int32 page_size = 5;          // 每页大小
}

// xyid=1658
message PagePaiYouCompletionInfoReply {
  CommonResp cr = 1;
  repeated PaiYouCompletionInfo info = 2;  // 活动信息
  int32 page_no = 3;                      // 分页页码
  int32 page_size = 4;                     // 每页大小
  int32 total = 5;                         // 总记录数
}

// 获取牌友任务
// xyid=1659
message ListPaiYouTaskRequest {
  int32 ask_id = 1;
  PaiYouActivityType activity_type = 2;      // 活动类型
}

// xyid=1660
message ListPaiYouTaskReply {
  CommonResp cr = 1;
  repeated PaiYouTask tasks = 2;  // 任务列表
}

// xyid=1662
message BoardcastPaiYouCompletion {
  PaiYouCompletionInfo info = 1;      // 下推任务完成消息
}

// 牌友活动信息
message PaiYouInfo {
  int32 activity_id = 1;        // 活动ID,创建时不用传
  PaiYouActivityType activity_type = 2;      // 活动类型
  int32 task_id = 3;            // 任务ID
  int32 club_id = 4;            // 生效朋友圈
  int32 qty = 5;                // 人数
  int32 start_time = 6;         // 开始时间
  int32 end_time = 7;           // 结束时间
}

// 牌友活动完成信息
message PaiYouCompletionInfo {
  int32 activity_id = 1;        // 活动ID
  int32 user_id = 2;            // 玩家ID
  string user_nick = 3;         // 玩家昵称
  int32 completion_time = 4;    // 完成时间
  PaiYouTask task = 5;          // 任务信息
}

// 牌友活动类型
enum PaiYouActivityType {
  None = 0;
  ENTER_CLUB = 1;              // 登录亲友圈
  PLAY_ROUNDS = 2;             // 游戏局数
  HU_TYPE = 4;                 // 特殊牌型
}

// 牌友活动配置
message PaiYouActivity {
  PaiYouActivityType activity_type = 1;           // 活动类型
  string activity_name = 2;          // 活动名称
  repeated PaiYouTask tasks = 3;     // 任务列表
}

// 牌友活动任务
message PaiYouTask {
  int32 task_id = 1;                  // 任务ID
  int32 task_type = 2;                // 任务类型, 用来标记牌型或番数等
  string task_name = 3;               // 任务名称
  string task_label = 4;              // 任务显示Label
  string start_time = 5;              // 任务开始时间
  string end_time = 6;                // 任务结束时间
  int32 qty = 7;                      // 任务完成所需数量, 如: 亲友圈游戏5局, 亲友圈登录1次等
}

// --------------------------------牌友活动 end//

// 获取标志
enum GetFlag {
  GET_FLAG_FREE_CARD = 0; // 免费记牌器
  GET_FLAG_GIFT = 1; // 礼包
}

// 免费记牌器活动
// xyid=1573
message GetFreeCardRecordRequest {
  int32 ask_id = 1;
  GetFlag get_flag = 2;
}

message UsedRecord {
  int32 id = 1;
  int32 times = 2;
}

// xyid=1574
message GetFreeCardRecordReply {
  CommonResp cr = 1;
  bool is_free = 2; // 是否免费使用
  string used_flag = 3; // 如果不是免费使用 roomId#roundId 使用结束为1
  GetFlag get_flag = 4;
  repeated UsedRecord used_records = 5;
}


// xyid=1575
message SetFreeCardRecordRequest {
  int32 ask_id = 1;
  string used_flag = 2; //  开始使用roomId#roundId 使用结束为1
}

// xyid=1576
message SetFreeCardRecordReply {
  CommonResp cr = 1;
}

// xyid=1577
message GoldRoomShareRewardRequest {
  int32 ask_id = 1;
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
  int32 room_id = 5;            //房间id
  int64 create_time = 6;        //
  int32 score = 7;              //对局分数
  GoldRoomShareType reward_type = 8;

}

// xyid=1578
message GoldRoomShareRewardReply {
  CommonResp cr = 1;
  GoldRoomShareResp resp = 2;   //返回码
  int32 num = 3;                //发送金币数量
}

enum GoldRoomShareResp {
  SUCCESS = 0;     //成功
  COUNT_LIMIT = 1; //领取次数上限
  GAME_INVALID = 2;//对局校验失败
  ERROR = 3;        //其他错误

}

// xyid=1579
message GetGoldRoomShareRewardCountRequest {
  int32 ask_id = 1;
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
  GoldRoomShareType reward_type = 5;
}

// xyid=1580
message GetGoldRoomShareRewardCountReply {
  CommonResp cr = 1;
  int32 count = 2;               //次数
}

enum GoldRoomShareType {
  DOUBLE_WIN = 0;   //双倍胜利
  AVOID_DEFEAT = 1; //免败
}

//财运奖励类型
enum AwardType{
  FirstAward = 0;
  NormalAward = 1;
  GoldDragonAward = 2;
}
message PropInfo {
  int32 id = 1;
  int32 count = 2;
  int64 expire = 3;
}
// xyid=1581
message GetCaiYunAwardRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
  AwardType type = 5;           //奖励类型
}
// xyid=1582
message GetCaiYunAwardReply{
  CommonResp cr = 1;
  repeated PropInfo prop_info = 2;
}

message CaiYunConf {
  int32 prop_id = 1; //道具ID
  int32 cai = 2;  // 给的财气值
  int32 yun = 3;
}

// xyid=1583
message CaiYunInfoRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
}

// xyid=1584
message CaiYunInfoReply{
  CommonResp cr = 1;
  int32 area_id = 2;            //地区id
  int32 user_id = 3;            //用户id
  int32 cai_cur = 4; // 财当前值
  int32 cai_max = 5; // 财最大值
  int32 yun_cur = 6;
  int32 yun_max = 7;
  int32 comm_point = 8; // 当前普通积分
  int32 gold_point = 9; // 当前金龙积分
  int32 first_award_point = 10; // 首次奖励需要的积分（金龙）且没领取首次
  int32 comm_award_point = 11; // 普通奖励需要的积分
  int32 gold_award_point = 12; // 金龙奖励需要的积分
  bool is_first_award = 13; // 是否领取首次奖励
  repeated CaiYunConf conf_list = 14;
}

// xyid=1585
message CutCardsStateRequest{
  int32 tenant_id = 1;          //租户id
  int32 area_id = 2;            //地区id
  int32 user_id = 3;            //用户id
  int32 state = 4;              //请求状态，1为获取，2为写入
}

// xyid=1586
message CutCardsStateReply{
  int32 count = 1;               //次数
}

enum OptsType {
  OPTS_TYPE_GET = 0; // 获取
  OPTS_TYPE_SET = 1; // 设置
  OPTS_TYPE_DEL = 2; // 清除整个
  OPTS_TYPE_REM = 3; // 清除单个玩家
}

// xyid=1587
message DisCountActRequest {
  int32 ask_id = 1;
  int32 act_id = 2;
  OptsType type = 3;
  int32 discount = 4; // 折扣
  int64 remain_time = 5 ; // 到期时间

}

// xyid=1588
message DisCountActReply {
  int32 user_id = 1;            //用户id
  OptsType type = 2;           //操作类型
  int32 discount = 3; // 折扣
  int64 remain_time = 4 ; // 到期时间
  int32 times = 5; // 具体次数
  CommonResp cr = 6;
  int32 act_id = 7;
  int32 avg_times = 8;
}
// xyid=1589
message ListHallFriendsRequest{
  int32 page = 1;
  int32 page_size = 2;
  int32 source = 3; //场景 1:新的牌友列表 2：黑名单 3: 游戏区 4:频道
  int32 pub_id = 4; //频道id
  int32 ask_id = 5;
}

enum HallUserState {
  StateOffline = 0; //离线
  StateOnline = 1; //在线
  StatePlay = 2;  //对局中
  StateWaiting = 3; // 等待中
}

//好友信息
message HallFriendInfo  {
  int32 user_id = 1;
  string nick = 2;    //名字
  string head = 3;    //头像
  HallUserState state = 4;  //玩家
  bool Apply = 5; //申请状态  true 已申请
  int64 apply_time = 6; //申请时间
  int64 last_play_time = 7; //最后一次对局时间
  int64 last_offline_time = 8; //最后一次离线时间
  bool friend = 9; //好友
  bool black = 10; //黑名单
  bool follow = 11; //特别关注
  int32 game_id = 12; // 游戏id
  string room_id = 13; // 房间号
  string game_rule = 14; //房间规则 包含局数
  int32 cur_round = 15; //当前局
  int32 cur_ren = 16; //房间当前人数
  int32 heart = 17; //心 亲密度 （二期）
  RoomModeNyx room_mode = 18; //房间模式
  int32 ren = 19; //总人数
  int32 club_id = 20;
  bool bistro = 21; //是否是酒馆房间
  bool recent_play = 22; //是否是最近玩法
}

enum RoomModeNyx {
  NoneMode = 0; //
  Box = 1;  // 包厢房
  Gold = 2; // 金币房
  Club = 3; // 圈子房
}

// xyid=1590
message ListHallFriendsReply{
  int32 code = 1;         //错误码
  bool active_club = 2;  //是否有活跃圈子
  repeated HallFriendInfo friends = 3;  //好友列表
  int32 total = 4;  //总数 好友列表
  int32 ask_id = 5;
}

// xyid=1591
message FindGameRequest {
  int32 t_user_id = 1;  //被查看目标玩家id
}

// xyid=1592
message FindGameReply{
  int32 code = 1;         //错误码
  int32 club_id = 2;      //圈子id
  string club_name = 3;   //圈子名字
  int32 owner_id = 4;     //圈主id
  string owner_name = 5;  //圈主名字
  bool Apply = 6; //申请状态
  bool already = 7;       //是否在亲友圈中
}

message BaseAreaAct {
  int32 aid = 1;
  string type = 2;
  int64 online = 3;
  int64 offline = 4;
  int64 start = 5;
  int64 end = 6;
  int32 target_id = 7;
  string sub_type = 8; // 子类型
}

//获取基础活动数据
// xyid = 1593
message ActListRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 channel_id = 4;  //渠道
  DeviceType device_type = 5; // 通用渠道
  int32 ask_id = 6;
}

// xyid = 1594
message ActListReply {
  repeated BaseAreaAct act = 1;
  CommonResp cr = 2;
}

// 活动详情
message BaseActDetailReply {
  int32 aid = 1;
  string type = 2;
  int64 online = 3;
  int64 offline = 4;
  int64 start = 5;
  int64 end = 6;
  int32 target_id = 7;
  string name = 8;
  int32 status = 9;
  string special = 10;
  string ext = 11;
}

//获取基础活动详情
// xyid = 1595
message ActDetailRequest {
  int32 ask_id = 1;
  int32 aid = 2; // 活动ID
}

// xyid = 1596
message ActDetailReply {
  BaseActDetailReply act = 1;
  CommonResp cr = 2;
}

//批量获取基础活动详情
// xyid = 1597
message ActDetailsRequest {
  int32 ask_id = 1;
  repeated int32 aids = 2; // 活动ID列表
}

// xyid = 1598
message ActDetailsReply {
  repeated BaseActDetailReply act = 1;
  CommonResp cr = 2;
}

//判断分享是否上限
// xyid = 1599
message CheckShareLimitRequest {
  int32 ask_id = 1;
  string detail = 2; // 信息
}

// xyid = 1560
message CheckShareLimitReply {
  CommonResp resp = 1;
}

//酒馆活动数据获取 返卡活动
// xyid = 1561
message ClubCardActRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
}

// xyid = 1562
message ClubCardActReply {
  CommonResp resp = 1;
  int32 y_card = 2;   //昨日小酒馆耗卡数 统计当前小酒馆的昨日对局耗卡数并展示（圈主卡成员卡都算）
  int32 y_get_card = 3; //昨日活动获得卡数 昨日小酒馆耗卡数*配置的返卡比例（当前为0.5）；数值向上取整。
  int32 now_card = 4; //当前待领取卡数 展示为过去的未领取的活动获得卡数之和
  bool get = 5; //是否已经领取
}

//酒馆活动领奖
// xyid = 1563
message GetClubCardActRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
}

// xyid = 1564
message GetClubCardActReply {
  CommonResp resp = 1;
}

//商城礼包配置获取
// xyid = 1625
message SpecialOfferRequest {
  int32 ask_id = 1;
}

// xyid = 1626
message SpecialOfferReply {
  CommonResp resp = 1;
  repeated SpecialOfferPropInfo prop_infos = 2;
}

message SpecialOfferPropInfo {
  string name = 1;
  string product_id = 2;
  repeated SpecialOfferProp props = 3;
}

message SpecialOfferProp {
  int32 prop_id = 1;
  int32 count = 2;
}


// 战队相关

enum OptTeam {
  OPT_TEAM_GET = 0; // 获取
  OPT_TEAM_CREATE = 1; // 创建
  OPT_TEAM_QUIT = 2; // 退出
  OPT_TEAM_INVITE = 3; // 邀请
  OPT_TEAM_LIST = 4; // 成员列表
  OPT_TEAM_DISMISS = 5; // 解散
  OPT_TEAM_KICK = 6; // 踢出
  OPT_TEAM_RECORD = 7; // 记录
}

// xyid = 1627
message OptTeamRequest {
  int32 ask_id = 1;
  OptTeam opt_team = 2;         // 操作类型
  int32 club_id = 3;          // 绑定的圈子
  int32 team_id = 4;  // 队长ID
  int32 kick_user_id = 5; // 踢出的ID
  int32 page = 6; // 第几页
  int32 count = 7; // 每页数量
}

message TeamList {
  int32 user_id = 1;
  string nick = 2;
  string head = 3;
  int64 score = 4 ; // 积分
  bool quit = 5; // 是否退出
}

enum TaskType {
  TASK_TYPE_UNSPECIFIED = 0;
  TASK_TYPE_ADD = 1; // 每日战队增加X点积分，队长可获得X点荣耀值
  TASK_TYPE_COUNT = 2; // 每日战队累计获得XXX积分，队长可获得XXX荣耀值
  TASK_TYPE_FIGHT = 3; // 和战队内成员每对局1场，可获得X积分，X积分=X贡献值
}

message TeamTask {
  TaskType task_type = 1; // 根据任务类型生成的ID
  int32 task_schedule = 2; // 当前进度
}
message TeamRecord {
  int64 time = 1;
  int64 score = 2; // 积分
  int64 honour = 3; // 荣耀
  int64 devote = 4;  // 贡献
}

// xyid = 1628
message OptTeamReply {
  CommonResp resp = 1;
  OptTeam opt_team = 2;  // 操作类型
  string team_name = 3;  // 队长的名称
  int32 team_id = 4;  // 队长的ID
  int32 team_num = 5; // 战队人数
  int64 score = 6; // 积分
  repeated TeamTask tasks = 7; // 战队分数
  repeated TeamList team_lists = 8; // 队员列表
  repeated TeamRecord team_records = 9; // 积分/荣耀记录
}

message TaskConf {
  TaskType task_type = 1; // 根据任务类型生成的ID
  int64 score = 2; // 积分
  int64 honour = 3; // 荣耀
  int64 devote = 4;  // 贡献
}

// xyid = 1629
message TeamConfRequest {
  int32 ask_id = 1;
}

// xyid = 1630
message TeamConfReply {
  int64 start_time = 1; // 开始时间
  int64 end_time = 2; // 结束时间
  int64 off_time = 3; // 下架时间
  int32 num_limit = 4; // 战队人数上限
  int32 honour_limit = 5; // 贡献值：每人每天上限暂定5000分
  int32 devote_limit = 6; // 荣耀值：每人每天上限暂定5000分
  float honour_rate = 7; // 积分贡献比例
  float devote_rate = 8; // 积分荣耀值比例
  repeated TaskConf task_conf = 9;
  CommonResp resp = 10;
}

// xyid = 1631
message SpGoodsGuildRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 ask_id = 4;
  int32 aid = 5;
}

// xyid = 1632
message SpGoodsGuildReply {
  bool is_award = 1;
  int32 user_id = 2;
  string nick = 3;
  string head = 4;
  int64 buy_time = 5;
  int64 transfer_time = 6;
  CommonResp resp = 7;
}

// xyid = 1633
message SpGoodsGuildAwardRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 ask_id = 4;
  int32 aid = 5;
}

// xyid = 1634
message SpGoodsGuildAwardReply {
  int32 code = 1;
  CommonResp resp = 2;
}

enum FoundTaskId {
  FOUND_TASK_UN_KNOW = 0; // 未知
  FOUND_TASK_FOUND = 1; // 创建一个
  FOUND_TASK_IMPORT = 2; // 导入
}

message FoundTaskInfo {
  FoundTaskId task_id = 1;
  int32 complete = 2; // 0 未完成 1完成
}

// xyid = 1635
message FoundBistroInfoRequest {
  int32 aid = 1; // 活动id
  int32 ask_id = 2;
}

// xyid = 1636
message FoundBistroInfoReply {
  repeated FoundTaskInfo info = 1;
  CommonResp resp = 2;
}

// xyid = 1637
message FoundBistroAwardRequest {
  int32 aid = 1; // 活动id
  int32 club_id = 2;
  FoundTaskId task_id = 3;
  int32 ask_id = 4;
}

// xyid = 1638
message FoundBistroAwardReply {
  CommonResp resp = 1;
}


//请求玩家破产补助
// xyid = 1639
message GetBankruptCntRequest{
  int32 ask_id = 1;
}

//返回玩家破产补助
// xyid = 1640
message GetBankruptCntReply{
  CommonResp resp = 1;
  int32 cnt = 2;
}


// 小程序获取活动进度 新人活动/分享活动
// xyid = 1641
message GetActivitySpeedRequest {
  int32 ask_id = 1;
  int32 activity_id = 2; //活动id
  string channel_id = 3; //渠道id
}

message RewardInfo {
  int32 id = 1;     //道具id
  int32 count = 2;  //道具数量
  string icon = 3; //道具图片地址
  string name = 4;  //道具名字
}

// xyid = 1642
message GetActivitySpeedReply {
  CommonResp resp = 1;
  repeated RewardInfo rewards = 2;
  int32 count = 3;      //剩余领奖次数
  int32 activity_id = 4; //活动id
  string type = 5; //活动类型
}

// 小程序活动领奖 新人活动/分享活动
// xyid = 1643
message GetPrizeRequest {
  int32 ask_id = 1;
  int32 activity_id = 2; //活动id
  string channel_id = 3; //渠道id
}
// xyid = 1644
message GetPrizeReply {
  CommonResp resp = 1;
  repeated RewardInfo rewards = 2;
  int32 count = 3;      //剩余领奖次数
  int32 activity_id = 4; //活动id
  string type = 5; //活动类型
}

// 小程序活动 获取签到详情
// xyid = 1645
message SignDetailRequest {
  int32 ask_id = 1;
  int32 activity_id = 2; //活动id
  string channel_id = 3; //渠道id
}

//基础签到奖励信息
message SignBaseInfo {
  int32 day = 1;      // 第几天
  RewardInfo reward = 2; //奖品
  int32 status = 3; //签到状态 0:未签到 1:已经签到 2:已经补签 待领取 3:已经过期
  int32 double = 4; //双倍 领取条件 (分享/看广告) 0:无 1:分享 2：看广告
  bool have_multiple = 5; //是否有翻倍
  int32 multiple = 6; //翻倍 倍数
  bool sub = 7; //是否被订阅
}
// 累计签到奖励信息
message SignLeiJiInfo {
  int32 day = 1;      // 第几天
  RewardInfo reward = 2; //奖品
  int32 status = 3; // 1 已经领取
}
// 补签信息
message PatchInfo {
  int32 count = 1; //补签次数
  map<string, int32> cost = 2; //补签条件 //share 分享 read_ad 看广告 diamond 消耗钻石
}

// xyid = 1646
message SignDetailReply {
  CommonResp resp = 1;
  repeated SignBaseInfo bases = 2; // 基础签到奖励信息
  repeated SignLeiJiInfo lei_jis = 3; // 累计签到奖励信息
  repeated PatchInfo patchs = 4; //补签信息
  int32 total_sign = 5; //累计签到次数
}

// 小程序活动领奖 签到领奖/补签/翻倍
// xyid = 1647
message SignRequest {
  int32 ask_id = 1;
  int32 activity_id = 2; //活动id
  string channel_id = 3; //渠道id
  int32 action = 4; //1: 签到 2：双倍签到 3:补签 4：翻倍 5: 累计签到
  int32 day = 5;  //补签/翻倍 第几天
}
// xyid = 1648
message SignReply {
  CommonResp resp = 1;
  RewardInfo reward = 2;
  int32 multiple = 3; //翻倍 倍数
}

// 小程序活动领奖 签到订阅
// xyid = 1649
message SignSubRequest {
  int32 ask_id = 1;
  int32 activity_id = 2; //活动id
  string channel_id = 3; //渠道id
}
// xyid = 1650
message SignSubReply {
  CommonResp resp = 1;
}


// 房卡消耗活动
message ActivityCardCost {
  int32 club_id = 1;  //圈子id
  int32 YesCard = 2;  //昨日获得房卡数量
  int32 GetCard = 3;  //今日待领取房卡数量
  int32 ratio = 4; //反卡比例
}

//圈子耗卡活动 针对 成员卡地区
message ActivityClubCostMC {
  int32 club_id = 1;  //圈子id
  int32 owner_id = 2; //圈主id
  // 福利 1
  int32 card_count = 3;  //可领取房卡数量
  int32 cur_ren = 4;  //人数
  int32 total_ren = 5; //总人数
  int32 mode = 6; // 0 常规模式 1强制模式
  int32 status = 7;// 奖励领取状态
  // 福利 2
  int32 cur_card = 8; //今日消耗
  int32 tom_card = 9; //明日可领取
  int32 cur_user_card = 10;//今日消耗玩家房卡数
  int32 get_user_card = 11;//转换后 可以领取的数量
  int32 get_card = 12; //当前可领取卡数
  int32 ratio = 13; //返卡比例
  // 玩家奖励
  repeated PlayClubCostTask play_tasks = 14; //玩家任务
  int32 get_prize_id = 15; // 领取奖励id 1 福利1 2 福利2 其他 对应玩家的任务id
  int32 task_type = 16; // 0:福利2默认模式 1:福利2新增模式
  repeated AwardProgress award_progresses = 17; // 福利2 奖励阶梯

}


message AwardProgress {
  int32 progress = 1;
  int32 award_ratio = 2;
}

message PlayClubCostTask {
  int32 id = 1; //任务id
  int32 mode = 2; //0 每日 1: 累计
  int32 status = 3; //领取状态 0 未领取 1已领取
  int32 prop_id = 4; //到家id
  int32 prop_count = 5; //道具数量
  int32 cur_round = 6;  //当前对局次数
  int32 total_round = 7; //总的对局次数
}

enum MatchStatus {
  UnMatch = 0;  //尚未开赛
  UnBaoMing = 1; //已开赛未报名
  AlreadyBaoMing = 2; //已开赛已报名
  NotPlay = 3; //已开赛已报名未处于玩法开放时间
  GameEnd = 4; //已结束未报名
  GameEndBaoMing = 5; //已结束已报名
}

// 排行榜 & 个人/团队 积分
message RankInfo {
  int32 club_id = 1;
  int32 owner_id = 2;
  string head = 3;
}

message GameInfo {
  int32 game_id = 1;
  int32 ren = 2;
  string rule = 3;  //规则
  string name = 4; //玩法名字
}

// 巅峰赛
message ActivityPeakMatch {
  MatchStatus status = 1; // 当前状态

  // 巅峰赛基础信息
  int32 cur_season = 2; //当前赛季
  int64 start_day = 3;  //开始日期 时间戳
  int64 end_day = 4;    //结束日期 时间戳
  int64 start_time = 5; //开始时间 时间戳
  int64 end_time = 6; //结束时间 时间戳

  repeated GameInfo games = 7;  //玩法列表
  repeated string images = 8; //图片

  repeated RankInfo rank = 9; //排行榜
  int64 score = 10;  // 个人积分
  int64 team_score = 11; //团队积分

  // 个人相关比赛信息
  int32 club_id = 12;
  string club_name = 13; //名字
  string club_password = 14; //口令
  string club_head = 15; //比赛场头像
  int32 round = 16; // 对局次数
  int32 win = 17;
  int32 low = 18; //最低对局达标数量
  int32 max = 19; //对局次数上限
  string peak_award_info = 20; // 巅峰赛奖励信息，json串
  int32 win_rate_low = 21; // 胜率榜最低对局达标数量
}

enum ActivityCustomType {
  AC_ActivityNone = 0;
  AC_ActivityCardCost = 1;  // 对应 ActivityCardCost 结构
  AC_ActivityClubCostMC = 2;  // 对应 ActivityClubCostMC 结构 //圈子耗卡活动 针对 成员卡地区 活动1的升级版
  AC_ActivityPeakMatch = 3; //巅峰赛
}

// 活动自定义参数 通过type 找到对应 结构 然后解析 data 数据
message ActivityCustomData {
  ActivityCustomType type = 1; //对应结构类型
  bytes data = 2;   //proto marshal 之后的数据
}

// 活动3.0 统一接口 自定义活动信息 proto
// 获取活动详情/进度
// xyid = 1663
message ActivityDetailRequest {
  int32 ask_id = 1;
  string channel_id = 2; //渠道id
  repeated int32 activity_ids = 3; //活动id
  repeated ActivityCustomData args = 4; //活动参数 顺序跟对应活动id 保持一致
}
// xyid = 1664
message ActivityDetailReply {
  CommonResp resp = 1;
  map<int32, ActivityCustomData> details = 2; // 对应活动 活动详情 信息 自定义 proto Marshal
}

// 活动领取奖励
// xyid = 1665
message ActivityPrizeGetRequest {
  int32 ask_id = 1;
  string channel_id = 2; //渠道id
  int32 activity_id = 3; //活动id
  ActivityCustomData args = 4;  //活动参数 领取奖励需要传的额外参数 proto
}
// xyid = 1666
message ActivityPrizeGetReply {
  CommonResp resp = 1;
  ActivityCustomData result = 2; //领取奖励后返回结果 按需传即可
}

message CardTransAwardInfo {
  int64 time = 1; // 领奖时间
  int32 id = 2; // 福利类型
  int32 prop_id = 3; // 奖励道具id
  int32 prop_cnt = 4; // 道具数量
}

// 圈子耗卡活动领奖记录获取
// xyid = 1667
message GetCardTransAwardLogRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
  int32 act_id = 3;
}
// xyid = 1668
message GetCardTransAwardLogReply {
  CommonResp resp = 1;
  repeated CardTransAwardInfo result = 2;
}


enum ContributeOpt {
  CONTRIBUTE_OPT_RANK = 0;
  CONTRIBUTE_OPT_LIST = 1;
}

// xyid = 1669
message ContributeRequest {
  int32 ask_id = 1;
  ContributeOpt opt = 2;
  int32 target_user_id = 3;  // 目标玩家 获取其他玩家贡献列表时用
  int32 club_id = 4 ;
  int32 start = 5;
  int32 length = 6;
  int64 start_time = 7;
  int64 end_time = 8;

}

message ContributeRank {
  string head = 1;
  string nick = 2;
  int32 num = 3;
  int32 user_id = 4;
  int32 rank_id = 5;
}

message ContributeList {
  int64 time = 1;
  int32 num = 2;
  string mark = 3; // 完成情况
}

// xyid = 1670
message ContributeReply {
  repeated ContributeRank rank = 1;
  repeated ContributeList list = 2;
  int32 total = 3;
  int32 my_rank = 4;
  int32 my_num = 5;
  CommonResp resp = 6;
}

// 报名参加比赛
// xyid = 1671
message EnrollMatchRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
  int32 season = 3; //赛季
}

// 团队信息
message TeamInfo {
  int32 club_id = 1;
  string name = 2;
  string head = 3;
  int64 score = 4;  //团队积分
  int32 ren = 5;    //团队人数
  int32 total = 6;  //总人数
  int32 online = 7; //在线人数
  string password = 8; //口令
}
// xyid = 1672
message EnrollMatchReply {
  CommonResp resp = 1;
  repeated TeamInfo teams = 2;
}

// 获取团队详情
// xyid = 1673
message TeamInfoRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
  int32 season = 3; //赛季
}

// 团队玩家信息
message TeamUserInfo {
  int32 user_id = 1;
  string name = 2;
  string head = 3;
  int64 score = 4;
  int32 status = 5; //0: 未报名 1: 未达标 2: 有分数
}
// xyid = 1674
message TeamInfoReply {
  CommonResp resp = 1;
  repeated TeamUserInfo users = 2;
}

// 获取领队列表
// xyid = 1675
message TeamListRequest {
  int32 ask_id = 1;
  int32 season = 2; //赛季
}
// xyid = 1676
message TeamListReply {
  CommonResp resp = 1;
  repeated TeamInfo teams = 2;
}

enum RankType {
  PEAK_RANK_TEAM_SCORE_TYPE = 0; // 团队积分榜
  PEAK_RANK_SELF_SCORE_TYPE = 1; // 个人积分榜
  PEAK_RANK_SELF_WIN_RATE_TYPE = 2; // 个人胜率榜
  PEAK_RANK_SELF_CHAMPION_TYPE = 3; // 个人冠军榜
  PEAK_RANK_SELF_ACTIVE_TYPE = 4; // 个人活跃榜
}

// xyid = 1677
message GetPeakRankRequest {
  int32 ask_id = 1;
  int32 club_id = 2;
  int32 cur_area_id = 3;// 举办地areaid
  int32 Season = 4; // 赛季
  RankType rank_type = 5; // 榜单类型
  int32 start_index = 6;
  int32 count = 7;
}

message PeakRankInfo {
  int32 rank = 1;// 排名

  int32 user_id = 2;
  string club_pass = 3; // 团队口令

  int64 user_score = 4;// 个人积分
  int64 team_score = 5;// 团队积分

  string user_name = 6;// 玩家昵称
  string team_name = 7;// 团队昵称-使用领队昵称

  string user_head = 8;
  string team_head = 9;// 头像

  int32 user_total_rounds = 10;
  int32 user_win_rounds = 11;

  int32 team_total_rounds = 12;
  int32 team_win_rounds = 13;

  int32 club_id = 14;

  int32 self_info = 15;

  int32 area_id = 16; //地区id
  int32 owner_id = 17; //圈主id

  float win_rate = 18; // 胜率
  int32 champion = 19; // 冠军数
}

// xyid = 1678
message GetPeakRankReply {
  CommonResp resp = 1;
  RankType rank_type = 2;
  repeated PeakRankInfo rank_info = 3;
  int32 total_count = 4;
}

// 获取比赛场玩家对局次数
// xyid = 1679
message GetMatchGamesRequest {
  int32 ask_id = 1;
}

// xyid = 1680
message GetMatchGamesReply {
  CommonResp resp = 1;
  int32 count = 2;  //次数
}

// 巅峰赛信息
// xyid = 1681
message PeakMatchInfoRequest {
  int32 ask_id = 1;
  bool base = 2; //true: 基础信息 只返回（开赛信息）
}
// xyid = 1682
message PeakMatchInfoReply {
  CommonResp resp = 1;
  ActivityPeakMatch info = 2;
}

// xyid = 1683
message GetUserDrawInfoRequest {
  int32 ask_id = 1;
  int32 game_id = 2;          //游戏id,0 所有
}

message GameDrawCount {
  int32 win_count = 1;   //赢局数
  int32 total_count = 2; //总局数
  string start_time = 3; //开始时间
  string end_time = 4;   //结束时间
}
message UserDrawCount {
  int32 user_id = 1;      //用户ID
  int32 total_count = 2;  //总局数
  int32 win_count = 3;    //赢局数
  string nick_name = 4;   //昵称
  string head_icon = 5;   //头像
  int32 user_total = 6;
  int32 user_win = 7;
}

// xyid = 1684
message GetUserDrawInfoReply {
  int32 total_play = 1;   //总局数
  int32 total_win = 2;    //胜局数
  string win_user = 3;    //最强牌友
  string lost_user = 4;   //最香牌友
  repeated GameDrawCount day_report = 5; //每日数据
  repeated GameDrawCount week_report = 6;//周数据
  repeated int32 game_ids = 7;           //最新玩法
  CommonResp resp = 8;
}

// xyid = 1685
message GetUserTagDrawInfoRequest {
  int32 ask_id = 1;
  int32 day_limit = 2;
}
// xyid = 1686
message GetUserTagDrawInfoReply {
  repeated UserDrawCount draw_reoprt = 1;
  CommonResp resp = 2;
}
// xyid = 1687
message GetCompetitionLevelRewardRequest {
  int32 ask_id = 1;
  int32 tenant_id = 2;
  int32 area_id = 3;
  int32 user_id = 4;
  int32 club_id = 5;
}

message PopularityAddDetail {
  string rank = 1 ; //3#10 代表3-10名  1代表第一名
  int32 value = 2; //增加值

}

message PopularityAddInfo {
  string key = 1; //
  string name = 2;
  repeated PopularityAddDetail details = 3;

}
message CompetitionLevelRewardDetail {
  int32 prop_id = 1;//道具id
  int32 total_count = 2;//数量
  string prop_name = 3;//道具名
  int32 stock = 4; //库存
  string icon = 5;
  int32 total_stock = 6; //总库存
}

// xyid = 1688
message GetCompetitionLevelRewardReply {
  repeated  CompetitionLevelRewardDetail details = 1;
  CommonResp resp = 2;
}
// xyid = 1689
message GetPopularityAddInfoRequest {
  int32 ask_id = 1;
}
// xyid = 1690
message GetPopularityAddInfoReply {
  repeated PopularityAddInfo infos = 1;
  CommonResp resp = 2;
}
// xyid = 1691
message GetLeaderLoginBroadCastSetRequest{
  int32 ask_id = 1;
}
// xyid = 1692
message GetLeaderLoginBroadCastSetReply{
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  bool  is_broadCast = 4;
  CommonResp resp = 5;
}
// xyid = 1693
message SetLeaderLoginBroadCastRequest{
  int32 ask_id = 1;
  bool  is_broadCast = 2;
}
// xyid = 1694
message SetLeaderLoginBroadCastReply{
  CommonResp resp = 1;
}
// xyid = 1695
message GetCompetitionRankedLeaderRequest{
  int32 ask_id = 1;
  int32 rank_limit = 2;
}
// xyid = 1696
message GetCompetitionRankedLeaderReply{
  repeated RankedLeaderInfo leaders = 1;
  CommonResp resp = 2;
}
message RankedLeaderInfo{
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 rank = 4;
  bool  is_broadCast = 5;
  int64 last_login_time = 6;
  string user_name = 7;
  int32 competiton_level = 8;

}

// xyid = 2201
message GetBankruptcyGiftRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;
  int32 area_id = 3;
  int32 user_id = 4;
  int32 aid = 5;
}

// xyid = 2202
message GetBankruptcyGiftReply{
  CommonResp resp = 1;
  repeated BankruptcyGiftGoods goods = 2;
  int32 session_id = 3;
  int32 today_cnt = 4;
  int32 total_cnt = 5;
}

message BankruptcyGiftGoods{
  int32 goods_id = 1;
  int32 price = 2;
  int32 gold = 3;
  string remark = 4;
  int64 period = 5;
}

// xyid = 2203
message GetDeductibleGiftRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;
  int32 area_id = 3;
  int32 user_id = 4;
  int32 aid = 5;
}

// xyid = 2204
message GetDeductibleGiftReply{
  CommonResp resp = 1;
  repeated DeductibleGiftGoods goods = 2;
  int32 session_id = 3;
}

message DeductibleGiftGoods{
  int32 goods_id = 1;
  int32 price = 2;
  int32 gold = 3;
  string remark = 4;
  int64 period = 5;
  int32 lose = 6;
}



// xyid = 2205
message GetJoinRoomGiftRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;
  int32 area_id = 3;
  int32 user_id = 4;
  int32 session_id = 5;
  int32 aid = 6;
  int32 game_id = 7;
}

message JoinRoomGiftInfo{
  int32 goods_id = 1;       //商品id
  int32 price = 2;          //价格
  int32 gold = 3;           //金币
  int32 limit = 4;          //限购次数
  string remark = 5;        //备注
}

// xyid = 2206
message GetJoinRoomGiftReply{
  CommonResp resp = 1;
  bool is_recharged = 2;
  repeated JoinRoomGiftInfo gifts = 3; //礼包详情
}


enum OlympicFuncOpt {
  Get = 0; // 0获取活动
  Set = 1; // 1设置
  Award = 2; // 2领取奖励
}

// xyid = 2207
message OlympicActRequest{
  int32 ask_id = 1;
  int32 tenant_id = 2;
  int32 area_id = 3;
  int32 user_id = 4;
  int32 aid = 5;
  OlympicFuncOpt opt = 6; // 0获取活动  1竞猜 2领取奖励
  int32 guess_gold = 7; // 竞猜的数量
  int64 test_time = 8; // 测试的时间 方便测试
}

// 奥运活动 返回
message OlympicAct{
  int32 today_guess = 1; // 今日猜测的值 没有猜测-1
  string show_date = 2; // 展示数据的日期 12点之前还是再前一日的数据
  int32 show_guess = 3; // 展示日期猜测的数据
  int32 show_award = 4; // 展示数据的日期奖励
  int32 gold_num = 5; // 展示日期的奖牌数量
  int32 award_num = 6; // 奖励数量 已经领取的
  bool is_award = 7; // 奖励是否领取
  int32 props_id = 8;
}

// xyid = 2208
message OlympicActReply{
  CommonResp resp = 1;
  OlympicAct act = 2;
}

//奖励盒子
message RewardBox{
  string name = 1;//金币箱名字,只有金币箱有
  string img = 2;//金币箱图片,只有金币箱有
  repeated RewardInfo reward_info = 3;
}

//阶梯活动信息
message JieTiRenWuInfo{
  int32 jtid = 1;//阶梯任务id
  repeated int32 rwlx = 2;//任务类型 1:免费,2:打出X牌型,3:对局X局,4:获胜X局,5:购买指定商品
  repeated int32 px = 3;//牌型
  repeated string sp = 4;//商品
  repeated int32 ccdj = 5;//场次等级
  int32 mb = 6;//目标
  int32 hy = 7;//可获得的活跃值
  string desc = 8;//任务描述
  int32 pid = 9;//奖池id(非金币箱奖池)
  int32 ppid = 10;//奖品id(非金币箱奖品)
  repeated int32 jbxpid = 11;//金币箱pid
  int32 xh = 12;//是否循环 0:非循环 1:循环
  int32 jd = 13;//进度
  repeated RewardBox reward_box = 14;//奖励盒子
  int32 status = 15;//活动状态 0:未完成 1:已完成 2:已领奖
  int32 active = 16;//是否激活 0:未激活 1:已激活
  int32 ask_id = 17;
}

//活跃度任务信息
message HuoYueDuRenWuInfo{
  int32 hyid = 1;//活跃度任务id
  int32 mbhy = 2;//目标活跃度
  int32 dqhy = 3;//当前活跃度
  int32 status = 4;//活动状态 0:未完成 1:已完成 2:已领奖
}

// 获取无限惊喜信息
// xyid=2296
message WuXianJingXiInfoRequest{
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 act_id = 4;//活动id
  int32 ask_id = 5;
}
// xyid=2297
message WuXianJingXiInfoReply{
  int32 act_endtime = 1;//活动结束时间
  repeated JieTiRenWuInfo jtrw = 2;//阶梯任务
  HuoYueDuRenWuInfo hyrw = 3;//活跃度任务
  CommonResp resp = 4;
}

// 获取无限惊喜奖励
// xyid=2298
message WuXianJingXiRewardRequest{
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 act_id = 4;//活动id
  int32 reward_type = 5;//领奖奖励的任务类型 0:阶梯任务 1:活跃度任务
  int32 jtid = 6;//阶梯任务id
  int32 hyid = 7;//活跃度任务id
  int32 ask_id = 8;
}
// xyid=2299
message WuXianJingXiRewardReply{
  repeated RewardBox reward_box = 1;//奖励盒子
  CommonResp resp = 2;
}
]]