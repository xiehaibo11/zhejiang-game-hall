return [[
syntax = "proto3";

package Zeus.poros.v1;

// processid=116
// 1701-1800 道具服务

message CommonResp {
  int32 err_code = 1;
  string err_reason = 2;
  int32 ask_id = 3;
}

//钱包类型
enum BurseType {
  BurseTypeNotUse = 0;  //不使用
  User = 1;             //用户道具
  Tea = 2;              //比赛场道具
  AgentUser = 3;        //用户道具
  TeaVirtual = 4;       //比赛场虚拟道具
  Agent = 5;            //后台卡
  UserTime = 6;         //时效道具 有个数属性
  UserTimeNoCount = 7;  //时效道具 无个数属性
  TeaTime = 8;          //比赛场时效道具 有个数属性
  TeaTimeNoCount = 9;   //比赛场时效道具 无个数属性
}

//订单类型
enum OrderType {
  OrderTypeNotUse = 0;  //不使用
  Part = 1;             //部分扣除
  BigWin = 2;           //冠军
  Use = 3;              //使用
  OnlyOne = 4;  //唯一扣费 仅在解散房间退费 房间人员变动不处理退费
  Score = 5;  //根据分数扣费 为达到分数 退费
}

enum OrderState {
  OrderStateCreate = 0;   //创建
  OrderStateUpdated = 1;  //更新过的
  OrderStateDone = 2;     //完成
  OrderStateDel = 3;      //取消 标记删除
  OrderStateUsed = 4;     //使用道具订单
  OrderStateFail = 5;     //错误
}

enum OwnerType {
  Normal = 0;    //普通用户
  TeaOwner = 1;  //领队 冠军支付要标记领队身份
}

//冠军支付，冠军数量为0的情况，付费类型
enum WinerPayType {
  AA = 0;    //无赢家/多个赢家 均摊支付
  Free = 1;  //无冠军不支付
}

//装扮类型
enum EquipType {
  EquipTypeNotUse = 0;  //不使用
  Head = 1;             //头像框
  JoinTable = 2;        //入场动画
  PressCard = 3;        //压牌器
  PushCard = 4;         //打牌特效
  DependCard = 5;       //指牌器
  Hu = 6;               //胡牌特效
  Step = 7;             //步时器
  RecordCard = 8;       //记牌器
}

//附加id处理
message SubIdInfo {
  int32 user_id = 1;        //用户id
  int32 tea_id = 2;         //比赛场id
  int32 agent_user_id = 3;  //用户id
  int32 agent_area_id = 4;  //区id
  int32 game_id = 5;        //游戏id
}

//道具
message PropInfo {
  int32 prop_id = 1;         //道具id
  int32 count = 2;           //道具数量
  BurseType burse_type = 3;  //钱包类型
  int32 time = 4;            //道具到期时间
  int64 count_big = 5;       //道具数量int64
  int32 zero_time = 6;       //耗光时间
  int32 expire = 7;          //期限
}

enum EquipState {
  TakeOff = 0;  //脱下状态
  Wear = 1;     //穿戴状态
}
//装扮
message EquipInfo {
  int32 user_id = 1;     //用户id
  int32 equip = 2;       //插槽位置
  PropInfo prop = 3;     //插槽道具
  string params = 4;     //自定义参数
  EquipState state = 5;  //穿戴状态
}

//消耗信息
message CostInfo {
  int32 owner_id =
      1;  //道具拥有者id，例：大厅卡操作，拥有者为uid;比赛场卡则为 teaid
  repeated PropInfo props = 2;  //道具列表
  int32 channel_id = 3;         //渠道id
  OwnerType type = 4;           //角色类型
  SubIdInfo sub_ids = 5;        //附加id
}

message SubCost {
  OrderType type = 1;          //订单类型
  repeated CostInfo cost = 2;  //消耗信息
}

//道具拥有者
// owner_id 例：大厅卡操作，拥有者为uid;比赛场卡则为 teaid
message OwnerInfo {
  int32 owner_id = 1;           //道具拥有者id
  repeated PropInfo props = 2;  //道具列表
  SubIdInfo sub_ids = 3;        //附加id
}

//钱包信息 单一类型的道具列表
message BurseInfo {
  BurseType type = 1;             //钱包类型
  repeated PropInfo props = 2;    //道具列表
  int32 user_id = 3;              //用户id
  int32 tea_id = 4;               //比赛场id
  repeated PropInfo balance = 5;  //余额
}

// 查看领队的道具信息
// xyid = 1065
message ClubOwnerPropInfoRequest {
  int32 ask_id = 1;  // ask
  int32 club_id = 2;
  repeated PropInfo prop_info = 3;
}

// xyid = 1066
message ClubOwnerPropInfoReply {
  CommonResp resp = 1;  //通用返回
  int32 club_id = 2;
  repeated PropInfo prop_info = 3;
}

//道具数量查询
// xyid = 1701
message GetPropsCountRequest {
  int32 ask_id = 1;             // ask
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
  int32 tea_id = 5;             //比赛场id
  repeated PropInfo props = 6;  //道具id
}

//道具数量查询
// xyid = 1702
message GetPropsCountReply {
  CommonResp resp = 1;          //通用返回
  repeated PropInfo props = 2;  //道具信息
}

//道具使用
// xyid = 1703
message UsePropsRequest {
  int32 ask_id = 1;     // ask
  int32 tenant_id = 2;  //租户id
  int32 area_id = 3;    //地区id
  int32 user_id = 4;    //用户id
  PropInfo props = 5;   //道具id
  string custom = 6;    //自定义参数
}

//道具使用
// xyid = 1704
message UsePropsReply {
  CommonResp resp = 1;  //通用返回
  string custom = 2;    //自定义参数
  PropInfo prop = 3;    //道具余额
}

//根据装扮类型获取装扮信息
// xyid = 1705
message GetEquipPropsRequest {
  int32 ask_id = 1;             // ask
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  repeated EquipInfo info = 4;  //装扮
}

//根据装扮类型获取装扮信息
// xyid = 1706
message GetEquipPropsReply {
  CommonResp resp = 1;          //通用返回
  repeated EquipInfo info = 2;  //装扮
}

//查询自动续订列表
// xyid=1707
message GetAutoRenewingListRequest {
  int32 ask_id = 1;     // ask
  int32 tenant_id = 2;  //租户id
  int32 area_id = 3;    //地区id
  int32 user_id = 4;    //用户id
  int32 start = 5;      //分页索引开始
  int32 length = 6;     //条目个数
}

message AutoRenewingInfo {
  int32 auto_id = 1;               //续订的唯一标识
  string goods = 2;                //商品信息源数据
  repeated OwnerInfo costs = 3;    //消耗列表
  repeated OwnerInfo targets = 4;  //转换目标
}

//查询自动续订列表
// xyid = 1708
message GetAutoRenewingListReply {
  CommonResp resp = 1;                 //通用返回
  repeated AutoRenewingInfo list = 2;  //续订列表
}

//取消自动续订
// xyid = 1709
message CancelAutoRenewingRequest {
  int32 ask_id = 1;             // ask
  int32 tenant_id = 2;          //租户id
  int32 area_id = 3;            //地区id
  int32 user_id = 4;            //用户id
  repeated int32 auto_ids = 5;  // id列表
}

//取消自动续订
// xyid = 1710
message CancelAutoRenewingReply {
  CommonResp resp = 1;          //通用返回
  repeated int32 auto_ids = 2;  // id列表
}

//蓄力道具
// xyid = 1711
message UpdateProgressRequest {
  int32 ask_id = 1;       // ask
  int32 tenant_id = 2;    //租户id
  int32 area_id = 3;      //地区id
  int32 user_id = 4;      //用户id
  int32 progress_id = 5;  //进度条id
  int32 add = 6;          //进度
  int32 max = 7;          //最大值
}

//蓄力道具
// xyid = 1712
message UpdateProgressReply {
  CommonResp resp = 1;    //通用返回
  int32 progress_id = 2;  //进度条id
  int32 value = 3;        //进度
  int32 max = 4;          //最大值
}

//蓄力道具查询
// xyid = 1713
message GetProgressRequest {
  int32 ask_id = 1;       // ask
  int32 tenant_id = 2;    //租户id
  int32 area_id = 3;      //地区id
  int32 user_id = 4;      //用户id
  int32 progress_id = 5;  //进度条id
}

// 蓄力道具查询
// xyid = 1714
message GetProgressReply {
  CommonResp resp = 1;    //通用返回
  int32 progress_id = 2;  //进度条id
  int32 value = 3;        //进度
  int32 max = 4;          //最大值
}

//日志类型
enum PropsRecordType {
  All = 0;    //全部
  Up = 1;     //增加
  Cost = 2;   //减少
  Lower = 3;  //好友
}
//操作类型
enum PropsRecordOperateType {
  GameCost = 0;     //普通消耗
  Buy = 1;          //购买
  Friend = 2;       //好友赠送
  TeaTransfer = 3;  //比赛场划卡
  Activity = 4;     //活动
  Service = 5;      //客服
  Exchange = 6;     //兑换
  Mail = 7;         //邮件领取
  INVITE = 8;       //邀请奖励
  ShopBuyAutoGen = 9;  //装扮商城购买自动生效
  AutoRenewing = 10;   //装扮自动续费
  TeaDismiss = 11;     //解散比赛场
  TeaTransferMemberCard = 12;     //比赛场转成员卡
  VipUp = 13;     // vip升级
  TeaCloseStop = 14; //比赛场关停
  GoldCardBuy = 1909; // 欢乐豆房卡购买
  GoldCardMove = 1910; // 欢乐豆转移
}
//道具日志查询
// xyid = 1715
message GetPropsRecordRequest {
  int32 ask_id = 1;          // ask
  int32 tenant_id = 2;       //租户id
  int32 area_id = 3;         //地区id
  int32 user_id = 4;         //用户id
  int32 start = 5;           //索引位置
  int32 length = 6;          //条目数量
  PropsRecordType type = 7;  //日志类型
  int32 start_time = 8;      //启止时间
  int32 end_time = 9;        //启止时间
}

message PropsRecord {
  int32 tenant_id = 1;                  //租户id
  int32 area_id = 2;                    //地区id
  int32 user_id = 3;                    //用户id
  int32 game_id = 4;                    //游戏id
  int32 prop_id = 5;                    //道具id
  int32 count = 6;                      //数量
  int32 count_before = 7;               //操作前
  int32 count_after = 8;                //操作后
  int32 logtime = 9;                    //记录时间
  PropsRecordOperateType operate = 10;  //操作类型
  repeated string params = 11;          //参数
  int64 order_id = 12;                  // 订单ID
  int32 club_id = 13;
  int32 club_mode = 14;                 //比赛场模式 1：比赛场
}
//好友类型
enum FriendLevel {
  One = 0;  //好友
  Two = 1;  //下好友
}
//好友记录
message FriendRecord {
  int32 tenant_id = 1;    //租户id
  int32 area_id = 2;      //地区id
  int32 user_id = 3;      //用户id
  FriendLevel level = 4;  //好友
  int32 total = 5;        //总场次
  string nick = 6;        //昵称
  int32 cost = 7;         //总消耗
}
//道具日志查询
// xyid = 1716
message GetPropsRecordReply {
  CommonResp resp = 1;               //通用返回
  repeated PropsRecord record = 2;   //记录
  repeated FriendRecord friend = 3;  //好友记录
  int32 total = 4;                   //数据总数
  PropsRecordType type = 5;          //日志类型
}

//道具时效检测
// xyid = 1717
message CheckPropsTimeRequest {
  int32 ask_id = 1;     // ask
  int32 tenant_id = 2;  //租户id
  int32 area_id = 3;    //地区id
  int32 user_id = 4;    //用户id
}

//道具时效检测
// xyid = 1718
message CheckPropsTimeReply {
  CommonResp resp = 1;  //通用返回
}

//清除日志
// xyid = 1719
message CleanPropsRecordRequest {
  int32 ask_id = 1;     // ask
  int32 tenant_id = 2;  //租户id
  int32 area_id = 3;    //地区id
  int32 user_id = 4;    //用户id
}

//清除日志
// xyid = 1720
message CleanPropsRecordReply {
  CommonResp resp = 1;  //通用返回
}

// 道具使用（主动下推）
// xyid = 1722
message PropUse {
  CommonResp resp = 1;     //通用返回
  repeated int32 pos = 2;  // 使用道具的玩家位置
  int32 item_id = 3;       // 使用道具id
  int32 item_cnt = 4;      // 使用道具数量
  string custom = 5;       //自定义参数
}

//1货币转2货币
// xyid = 1723
message TransferOneTwoRequest {
  int32 ask_id = 1;  // ask
}

// xyid = 1724
message TransferOneTwoReply {
  CommonResp resp = 1;          //通用返回
  repeated PropInfo props = 2;  //道具结果
}

//消耗广播
message CostNotify {
  int32 tenant_id = 1;            //租户id
  int32 area_id = 2;              //地区id
  repeated CostInfo cost = 3;     //消耗列表
  int64 order_id = 4;             //订单id
  int32 log_time = 5;             //广播时间
  OrderType type = 6;             //订单类型
  OrderState state = 7;           //订单状态
  repeated SubCost sub_cost = 8;  //扣费
  string params = 9;              //自定义参数
  int32 min_round = 10;         //最小扣费局数 0:无限制 >0:限制局数
  WinerPayType winer_pay = 11;  //冠军，支付类型
  int32 winer_score = 12;       //冠军分数门槛
}

// xyid = 1726
message CostNotifyReply {
  CommonResp resp = 1;         //通用返回
  CostNotify cost_notify = 2;  //消耗详情
}

// xyid = 1727
message GetTransferOneTwoOptionRequest {}

// xyid = 1728
message GetTransferOneTwoOptionReply {
  CommonResp resp = 1;  //通用返回
  PropInfo one = 2;
  PropInfo two = 3;
}

// xyid = 1729
message UseEquipCardRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 user_id = 3;    //用户id
  PropInfo prop = 4;    //道具信息
  int32 ask_id = 5;
  string params = 6;  //参数
}

// xyid = 1730
message UseEquipCardReply {
  EquipInfo equip = 1;  //装扮信息
  CommonResp resp = 2;  //通用返回
}

// xyid = 1731
message OperateEquipRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 user_id = 3;    //用户id
  PropInfo prop = 4;    //道具信息
  string params = 5;    //自定义参数
  int32 ask_id = 6;
  bool take_off = 7;  //脱下 true:脱下 默认false:穿戴
}

// xyid = 1732
message OperateEquipReply {
  EquipInfo equip = 1;  //装备状态
  CommonResp resp = 2;  //通用返回
}

// xyid = 1734
message PropsChangeReply {
  repeated BurseInfo list = 1;
  CommonResp resp = 2;  //通用返回
}

enum CardQueryType {
  QueryAll = 0;   //全部
  QueryUser = 1;  //大厅卡
  QueryTea = 2;   //比赛场卡
}

// xyid = 1735
message ClientGetCardRequest {
  int32 ask_id = 6;
  int32 tenant_id = 1;           //租户id
  int32 area_id = 2;             //地区id
  int32 tea_id = 3;              //比赛场id
  int32 user_id = 4;             //领队id
  CardQueryType query_type = 5;  //查询类型
}

// xyid = 1736
message ClientGetCardReply {
  repeated PropInfo props = 1;  //结果数量
  CommonResp resp = 2;          //通用返回
}

// xyid = 1737
message UseAntiCheatingPropRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 room_id = 3;
  int32 user_id = 4;
  PropInfo prop = 5;
  string params = 6;  //透传参数
  int32 ask_id = 7;
}

enum PropsUsedState {
  PropsUsedStateUnused = 0;  //未使用
  PropsUsedStateUsed = 1;    //使用过
}

message AntiCheatingData {
  repeated int32 players = 1;
}

// xyid = 1738
message UseAntiCheatingPropReply {
  int32 user_id = 1;  //使用者
  repeated AntiCheatingData data = 2;
  CommonResp resp = 3;  //通用返回
  PropsUsedState state = 4;
}

// xyid = 1739
message GetAntiCheatingRequest {
  int32 tenant_id = 1;  //租户id
  int32 area_id = 2;    //地区id
  int32 room_id = 3;
  int32 user_id = 4;
  int32 ask_id = 5;
}

// xyid = 1740
message GetAntiCheatingReply {
  int32 user_id = 1;
  repeated AntiCheatingData data = 2;
  CommonResp resp = 3;  //通用返回
  PropsUsedState state = 4;
}

// xyid = 1750
message ListAllLabelRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 ask_id = 4;
}

// xyid = 1751
message ListAllLabelReply {
  repeated PackLabel labels = 1;
  repeated PackProp props = 2;
  CommonResp resp = 3;  //通用返回
}

// xyid = 1752
message ListPropRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 label_no = 4;
  OperateType type = 5;
  int32 ask_id = 6;
}

// xyid = 1753
message ListPropReply {
  repeated PackProp props = 1;
  CommonResp resp = 2;  //通用返回
}

// xyid = 1754
message OperateRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  int32 user_id = 3;
  int32 prop_id = 4;
  OperateType type = 5;
  int32 ask_id = 6;
  int32 club_id = 7; //比赛场id
}

// xyid = 1755
message OperateReply {
  CommonResp resp = 1;  //通用返回
}

// 背包页签分类
message PackLabel {
  int32 label_no = 1;        // 页签编号
  string label_name = 2;     // 页签名称
  bool has_new = 3;          // 是否有新增道具(红点显示)
  int32 label_parent = 4;    // 父级标签
  repeated int32 props = 5;  // 道具ID
}

// 道具详情
message PackProp {
  int32 prop_id = 1;                     // 道具id
  string name = 2;                       // 道具名称
  string icon = 3;                       // 道具icon地址
  string comments = 4;                   // 道具说明
  int32 count = 5;                       // 道具数量
  int64 remaining = 6;                   // 道具剩余时间(秒)
  bool is_new = 7;                       // 是否新增(红点显示)
  bool can_use = 8;                      // 是否展示"使用"按钮
  PackPropType type = 9;                 // 道具类型
  PackPropStatus status = 10;            // 道具状态
  repeated ImagePackage props_img = 11;  // 道具图
  string props_tag_id = 12;              // 道具标签id
  string props_tag_name = 13;            // 道具标签名称
  string props_overview = 14;            // 道具概况
  string props_remark = 15;              // 备注
  int32 effective_mode = 16;  //生效方式（0:直接生效 1:手动生效）
  repeated PackPropStatus status_list = 17;  //状态列表
  int32 club_id = 18; //比赛场id
}

// 背包道具类型
enum PackPropType {
  NONE1 = 0;      // 无类型(占位符)
  ROOM_CARD = 1;  // 房卡
  DIAMOND = 2;    // 钻石
  XP_CARD = 3;    // 洗牌卡
  QF_CARD = 4;    // 祈福卡
  HD_FACE = 5;    // 互动表情
  QF = 6;         // 祈福道具/转运道具
  FACE_CARD = 7;  // 表情卡
  SKIN = 8;       // 装扮皮肤
  GOLD = 9;       // 金币
  CP_CARD = 10;   // 催牌卡
  CP = 11;        // 催牌道具
  XN_CARD = 12;   // 虚拟卡
  JP = 13;        // 记牌器
}

// 背包道具状态
enum PackPropStatus {
  NONE2 = 0;          // 无状态(占位符)
  NORMAL = 1;         // 正常
  IN_USE = 2;         // 使用中
  EXPIRED = 3;        // 已过期
  AUTO_RENEWING = 4;  // 自动续费
}

// 操作类型
enum OperateType {
  NONE3 = 0;  // 无类型(占位符)
  READ = 1;   // 读取
}

// ImageInfo 图标
message ImageInfo {
  string img_url = 1;  //图标地址
  string img_tag = 2;  //图标标签
}

// ImagePackage 图标包配置
message ImagePackage {
  string package_id = 1;
  repeated ImageInfo img = 2;
}

message PropBoxInfo {
  int32 box_props_id = 1;       //道具id
  string box_props_type = 2;    //道具类型
  int32 box_props_count = 3;    //道具数量
  int32 box_gold = 4;           //	金币
  float box_chance = 5;         //概率(可不传)
  string box_display_name = 6;  //	礼包内道具展示名称
  string prop_spend_num = 7;
  string prop_img = 8;
}

// PropsAttr 风信道具配置
message PropsAttr {
  int32 propsid = 1;                    //道具id
  string category_one = 2;              //分类名称
  string category_two = 3;              //2分类名称
  repeated ImagePackage props_img = 4;  //道具图片
  int32 effective_mode = 5;   //生效方式（0:直接生效 1:手动生效）
  string props_tag_id = 6;    //道具标签id
  string props_tag_name = 7;  //道具标签名称
  string props_overview = 8;  //道具概况
  string props_desc = 9;      //细节描述
  string props_remark = 10;   //备注
  string mutex_category_two = 11;  //非空表示和分类互斥
  string mutex_category_one = 12;  //非空表示和2分类互斥
  int32 props_gift_send_type = 13;  //礼包奖品发放方式(0:玩家选择 1:自动发放)
  int32 props_gift_choose_num = 14;  //礼包奖品玩家可选道具数量上限
  repeated PropBoxInfo prop_boxes_chance = 15;  //礼包概率道具
  repeated PropBoxInfo prop_boxes_normal = 16;  //礼包固定道具
}

// xyid = 1756
message GetPropsAttrRequest {
  int32 tenant_id = 1;
  int32 area_id = 2;
  repeated int32 prop_ids = 3;
  int32 ask_id = 4;
}

// xyid = 1757
message GetPropsAttrReply {
  repeated PropsAttr props = 1;
  CommonResp resp = 2;  //通用返回
}

//获取绑定房卡
// xyid = 1741
message GetBindCardRequest {
  int32 ask_id = 1;     // ask
  int32 club_id = 2;   //比赛场id  0 代表大厅房卡
}

// xyid = 1742
message GetBindCardReply {
  CommonResp resp = 1;  //通用返回
  repeated PropInfo props = 2;
}

//获取成员卡信息
// xyid = 1743
message GetMemberCardsRequest {
  int32 ask_id = 1;     // ask
  int32 club_id = 2;   //比赛场id
  int32 user_id = 3;  //要查看的玩
}

// xyid = 1744
message GetMemberCardsReply {
  CommonResp resp = 1;  //通用返回
  int32 count = 2;        //购买的卡
  int32 bind_count = 3;   //赠送的绑定卡
}

//解散比赛场时获取可以退的卡信息
// xyid = 1745
message DismissClubQuitCardInfoRequest {
  int32 ask_id = 1;     // ask
  int32 club_id = 2;   //比赛场id
}
// xyid = 1746
message DismissClubQuitCardInfoReply {
  CommonResp resp = 1;  //通用返回
  int32 can_count = 2;   //成员卡 购买卡赠送的 可以退的卡数量
  int32 not_count = 3;   //成员卡 绑定卡赠送的 不可以退的卡数量
  int32 buy_count = 4;  //比赛场内购买房卡
  int32 bind_count = 5; //比赛场绑定房卡 不可以退
}

// xyid=1747
message GetPropsConfRequest {
  repeated PropConfInfo infos = 1;
}

enum PropConfType {
  BaseType = 0;     // 目前暂时不用
  EmojiType = 1;   //互动表情
  GoldEmojiType = 2;  //金币场互动表情
}

message PropConfInfo {
  PropConfType type = 1;
  bytes content = 2;   //配置内容 zlib 压缩后的
  string md5 = 3;   //配置内容 的md5值
}
// xyid=1748
message GetPropsConfReply{
  repeated PropConfInfo infos = 1;
}

//xyid = 1770
message PropsCountNotify {
  repeated PropInfo props = 1;  //道具信息
}
//xyid=1908
// 破产通知 2
message BankruptcyNotifyV2 {
}
]]