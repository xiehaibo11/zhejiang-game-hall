return [[
syntax = "proto3";

package ocean;

//游戏内部协议id定义 20000 开始
enum OCEAN_ID {
  Ocean_None = 0;

  //开始游戏
  OCEAN_ID_Start_Game = 20000;
  //菜单处理
  OCEAN_ID_Deal_Req = 20001;
  OCEAN_ID_Deal_Resp = 20002;
  //打牌
  OCEAN_ID_Play_Req = 20003;
  OCEAN_ID_Play_Resp = 20004;
  //同步房间状态
  OCEAN_ID_SyncRoomStatus_Req = 20005; // 点下一局的时候，也会发送这个消息
  OCEAN_ID_SyncRoomStatus_Resp = 20006;
  //二三人开局投票
  OCEAN_ID_StartGameVote_Req = 20007;
  OCEAN_ID_StartGameVote_Resp = 20008;
  //抢地主
  OCEAN_ID_Rob_Req = 20009;
  OCEAN_ID_Rob_Resp = 20010;
  //明牌
  OCEAN_ID_Show_Req = 20011;
  OCEAN_ID_Show_Resp = 20012;
  //斗地主提示牌型
  OCEAN_ID_Pai_tips_Req = 20013;
  OCEAN_ID_Pai_tips_Resp = 20014;
  //是否加倍
  OCEAN_ID_Multiple = 20015;
  OCEAN_ID_Multiple_Resp = 20016;

  OCEAN_ID_GuoHu_Req = 20017; //处理过胡菜单请求
  OCEAN_ID_GuoHu_Resp = 20018;

  OCEAN_ID_Choice_Req = 20019; // //扑克菜单选择通用
  OCEAN_ID_Choice_Resp = 20020;
  OCEAN_ID_Auto_cancel_Req = 20021; //取消托管
  OCEAN_ID_Auto_cancel_Resp = 20022;
  OCEAN_ID_Chat_Req = 20023;          //聊天
  OCEAN_ID_Chat_Resp = 20024;         //聊天
  OCEAN_ID_Auto_do_Req = 20025;       //自动摸打
  OCEAN_ID_Auto_do_Resp = 20026;      //自动摸打
  OCEAN_ID_Menu_deal_v3_Req = 20027;  //保皇菜单处理
  OCEAN_ID_Menu_deal_v3_Resp = 20028; //保皇菜单处理

  ///-------------------------------- 通知消息 ---------------------------
  OCEAN_ID_Notice_Start =
      20100; //通知房主可以开始游戏
             //(第二局的时候不会推送,当每个玩家都点继续的时候就会开始游戏)
  OCEAN_ID_Notice_Turn = 20101;   //通知到谁打牌
  OCEAN_ID_Notice_Draw = 20102;   //通知抓的牌是啥
  OCEAN_ID_Notice_Play = 20103;   //通知打的牌是啥
  OCEAN_ID_Notice_Person = 20104; //通知人员变化
  OCEAN_ID_Notice_Room = 20105;   //通知房间里的详细信息
  OCEAN_ID_Notice_Interrupt = 20106; //通知中断 吃碰杠   (服务端名字需要转化）
  OCEAN_ID_Notice_Touch_Interrupt =
      20107; //通知谁触发中断 (服务端名字需要转化）
  OCEAN_ID_Notice_Hu = 20108; //通知胡牌
  OCEAN_ID_Notice_Ting_Tips = 20109; //通知听牌提示 (服务端名字需要转化）
  OCEAN_ID_Notice_Sync_Room_Status =
      20110; //通知房间状态 （结构后同步房间状态返回值的结构一致)
  OCEAN_ID_Notice_Finish = 20111; //通知总计算
  OCEAN_ID_Notice_End = 20112; //游戏结束 每局结束都发 (处理回放)
  OCEAN_ID_Notice_ShowHand = 20113; //显示手牌 (有开牌前操作会用到)
  OCEAN_ID_Notice_Power = 20114;
  OCEAN_ID_Notice_Animation = 20115;       //动画
  OCEAN_ID_Notice_Start_Game_Vote = 20116; //通知开局投票信息
  OCEAN_ID_Notice_updateBao = 20117;       //通知更新宝牌
  OCEAN_ID_Notice_kanbao_v2 = 20118;       //通知看宝牌
  OCEAN_ID_Notice_updateBao_v2 = 20119;    //通知更新宝牌
  OCEAN_ID_Notice_Guo_Hu_Menu = 20120;     //通知过胡菜单
  OCEAN_ID_Notice_dice = 20121;            // 通知掷骰子 扎旗麻将
  OCEAN_ID_Notice_koudi = 20122;           // 通知扣底 扎旗麻将
  OCEAN_ID_Notice_rules = 20123;           // 通知客户端规则显示更改

  OCEAN_ID_Notice_Poker_Room = 20501;     // 斗地主通知房间
  OCEAN_ID_Notice_Poker_Role = 20502;     // 扑克通知房间人员信息
  OCEAN_ID_Notice_Ddz_Role = 20503;       // 斗地主广播玩家详细信息
  OCEAN_ID_Notice_ddz_action = 20504;     //斗地主通知玩家操作
  OCEAN_ID_Notice_ddz_settlement = 20505; //斗地主计算信息

  OCEAN_ID_Notice_fp_role = 20506;       // 填大坑广播玩家详细信
  OCEAN_ID_Notice_fp_settlement = 20507; //填大坑计算信息
  OCEAN_ID_Notice_fp_draw = 20508;       //填大坑抓牌信息
  OCEAN_ID_Notice_fp_turn = 20509;       // 填大坑当前操作的人
  OCEAN_ID_Notice_countdown = 20510; // 通知前端开始倒计时的消息,仅做显示
  OCEAN_ID_Notice_auto = 20511;   //通知托管
  OCEAN_ID_Notice_chat = 20512;   //通知聊天
  OCEAN_ID_Notice_bugang = 20513; //被抢杠胡 补杠通知 杠牌展示

  OCEAN_ID_Notice_v3_room = 20514;      //通知游戏开始房间信息
  OCEAN_ID_Notice_v3_menu = 20515;      //通知菜单显示
  OCEAN_ID_Menu_deal_v3 = 20516;        //菜单处理
  OCEAN_ID_Notice_v3_animation = 20517; //通知客户端特效
  OCEAN_ID_Notice_play_v3 = 20518;      //通知其他玩家打牌
  OCEAN_ID_Notice_settle_v3 = 20519;    //通知计算
  OCEAN_ID_Notice_over_pos = 20520;     //通知玩家谁先走 头科
  OCEAN_ID_Notice_kanpai = 20521;       //青岛玩法看牌
  OCEAN_ID_Notice_action_v3 = 20522; //通知其他玩家我做了什么操作(比如保皇踢)

  OCEAN_ID_Notice_update_men_show = 20523; //更新门牌显示
  OCEAN_ID_Notice_update_list = 20524;     //更新像亮杠定这种鬼东西
  OCEAN_ID_Notice_adi_touch_interrupts =
      20525; // after_deal_init_check的中断处理下发
  OCEAN_ID_Notice_Room_New = 20526; //通知房间里的详细信息 白银无限胡要求换协议
  OCEAN_ID_Notice_pai_count = 20527; // 牌局里通知花牌风牌计数
  OCEAN_ID_Notice_interrupte_status = 20528; //通知菜单状态
  OCEAN_ID_Notice_bumaotuo = 20529;          // 牌局里通知补毛坨
  OCEAN_ID_Notice_other =
      20530; // 牌局里传输一些给客户端显示用的数据，比如牌局回顾由于消息超长
             // 拆分成多条发送

  // 麻将托管
  OCEAN_ID_Notice_yueju_auto = 20531; // 麻将通知托管
  OCEAN_ID_Update_yueju_autotimer = 20532; // 通知客户端麻将托管倒计时时间
  OCEAN_ID_Set_yueju_auto_req = 20533;   // 客户端请求取消托管时间
  OCEAN_ID_Set_yueju_auto_resp = 20534;  // 响应客户端取消托管时间
  OCEAN_ID_Update_teahouse_auto = 20535; // 更新比赛场玩家托管状态
  // 麻将托管

  OCEAN_ID_Notice_yueju_koupai_end = 20536; // 客户端扣牌结束
}

//------------------ 请求----------------------------
//开始游戏  Start_Game
message StartGameReq {}
message StartGameResp {
  string gameid = 1;
  int32 tableid = 2;
}

// 中断菜单
enum INTERRUPT_ACTION {
  Interrupt_None = 0;
  Interrupt_Guo = 60025;       //过
  Interrupt_Chi = 60028;       //吃
  Interrupt_Cha = 60029;       // 碰
  Interrupt_JianGang = 60030;  //捡杠1
  Interrupt_JianGang2 = 60031; //捡杠2 只能杠摸到的那张牌
  Interrupt_DianGang = 60032;  //点杠
  Interrupt_AnGang = 60033;    //暗杠
  Interrupt_Ting = 60127;      //听
  Interrupt_Hu = 60128;        //胡

  Interrupt_QiPao_V2 = 60037;             //弃跑
  Interrupt_BuChiPao_V2 = 60038;          //不吃跑
  Interrupt_Pao2_V2 = 60043;              //跑分2
  Interrupt_Pao3_V2 = 60044;              //跑分3
  Interrupt_Pao4_V2 = 60045;              //跑分4
  Interrupt_Pao1_V2 = 30347;              //跑分1
  Interrupt_Ting_60051 = 60051;           //听
  Interrupt_XiaoSa = 60053;               //潇洒
  Interrupt_GangTing = 60063;             //阜新杠听
  Interrupt_LiangXi = 60071;              //中发白亮喜
  Interrupt_WeiHai_ZFBFangFeng = 60200;   //威海中发白放风
  Interrupt_WeiHai_DNXBFangFeng = 60206;  //威海东南西北放风
  Interrupt_WeiHai_ZFBBuFeng = 60202;     //威海中发白补风
  Interrupt_WeiHai_DNXBBuFeng = 60209;    //威海东南西北补风
  Interrupt_WeiHai_LuanMao = 60212;       //威海乱锚
  Interrupt_WeiHai_LuanMaoBuFeng = 60217; //威海乱锚补风
}
// 请求菜单处理
message DealReq {
  INTERRUPT_ACTION action = 1;
  repeated int32 pai = 2; // 需要处理的牌 比如碰/吃
  int32 play = 3;         // 暂时没用到
  int32 actionid = 4; // 服务端传啥过，客户端就传啥回去 主要为了校验用
}
message DealResp {}

// 请求打牌
message PlayReq {
  int32 pai = 1; //要打出的牌
  string gameid = 2;
  repeated int32 pais = 3; //扑克打出的牌;
}
message PlayResp {}

enum ROOM_STATUS_TYPE {
  ROOM_STATUS_IDLE = 0;      // 空闲
  ROOM_STATUS_WAIT = 1;      // 等待加入
  ROOM_STATUS_DEAL = 2;      // 发牌阶段
  ROOM_STATUS_TING = 4;      // 听
  ROOM_STATUS_PLAY = 3;      // 开始出牌阶段
  ROOM_STATUS_SPLIT = 5;     // 分张
  ROOM_STATUS_SETTLE = 6;    // 单局计算
  ROOM_STATUS_CONTINUE = 7;  // 继续游戏
  ROOM_STATUS_OVER = 8;      // 总计算游戏结束
  ROOM_STATUS_REPLAY = 9;    // 回放
  ROOM_STATUS_ROB = 10;      // 抢地主阶段
  ROOM_STATUS_SHOW = 11;     // 是否明牌阶段
  ROOM_STATUS_MULTIPLE = 12; // 是否加倍
  ROOM_STATUS_KOUPAI = 13;   // 扣牌状态
}
//请求同步房间状态
message SyncStatusReq {
  ROOM_STATUS_TYPE room_status = 1; //当前房间是啥状态
  bool xipai = 2;  //true 洗牌
}
message SyncStatusResp {
  int32 room_status = 1;     //房间当前的状态
  repeated int32 readys = 2; //房间准备的队列
  int32 pos = 3;             // 几号pos完成当前的状态
}

//请求开局投票 StartGameVote_Req = 20007; //开局投票
message StartGameVoteReq {
  int32 choice = 1;    // 0:拒绝;1:同意
  int32 quick = 2;     // 1:点击快速开始按钮
  int32 comment = 3;   // 解散理由
  int32 gamemode = 4;  //场景标记
  string gamerule = 5; //新规则
}
message StartGameVoteResp {
  repeated oceVoteInfo vote_info = 1; //投票队列
  int32 status = 2; // 1:等待玩家选择 2:解散成功 3:解散失败
                    // 4:开局投票超时 5.有人房卡不足 6.领队房卡不足
  int32 distime = 3;         //房间解散时间
  repeated string nicks = 4; // 快速开局有问题的玩家昵称
  int32 comment = 5;         // 解散理由
  int32 promoter = 6;        //解散发起人的pos
}
message oceVoteInfo {
  int32 pos = 1;    //几号pos
  int32 choice = 2; //选择的是啥0:拒绝 1:同意
}
message Rob_Req {
  int32 fen = 1; //分数
}
message Rob_Resp {}

message Show_Req {
  int32 isshow = 1; // 0:过;1:明牌
}
message Show_Resp {
  int32 isshow = 1; //是否明牌
}

message Pai_tips_Req {}
//斗地主提示牌型
message Pai_tips_Resp {
  repeated int32 pais = 1; //提示牌型
}
message Multiple {
  int32 multiple = 1; // 0:过;1:加倍
}
message Multiple_Resp {
  int32 multiple = 1; //是否加倍
}

// GuoHu_Req = 20017; //处理过胡菜单请求
message GuoHuReq {
  int32 guo_hu = 1;   // 0 取消过胡 1确认过胡
  int32 agagin = 2;   // 0 勾选本局不再提醒 1未勾选本局不再提醒
  int32 actionid = 3; // action 对应id 客户端原路返回 校验用
}
message GuoHuResp {
  int32 code = 1;
  int32 guo_hu = 2; // 0 取消过胡 1确认过胡
  int32 agagin = 3; // 0 勾选本局不再提醒 1未勾选本局不再提醒
}

// Choice_Req = 20019; // //扑克菜单选择通用
message Choice_Req {
  int32 code = 1;
  int32 choice = 2;       //扑克菜单类型
  int32 choice_value = 3; //扑克菜单结果
}
message Choice_Resp {
  int32 code = 1;
  int32 choice = 2;       //扑克菜单类型
  int32 choice_value = 3; //扑克菜单结果
}

// Auto_cancel_Req = 20021; //取消托管
message Auto_cancel_Req {
  string gameid = 1; //游戏id
  string roomid = 2; //房间号
}

message Auto_cancel_Resp {
  int32 code = 1;    //响应码
  string gameid = 2; //游戏id
  string uid = 3;    //玩家id
  string roomid = 4; //房间号
}

// Auto_do_Req = 20025; //取消自动摸打
message Auto_do_Req {}

// Auto_do_Resp = 20026; //取消自动摸打
message Auto_do_Resp {}

// Chat_Req = 20023; //聊天
message Chat_Req {
  string type = 1;
  string message = 2;
  string pos = 3;
  string duration = 4;
  string bCode = 5;
  string gameid = 6;
  string roomid = 7;
}
message Chat_Resp {
  int32 code = 1; //响应码
}

// Menu_deal_v3_Req = 20027; //保皇菜单处理
message Menu_deal_v3_Req {
  string roomid = 1;
  int32 seq = 2;
  int32 action = 3;
  repeated OceV3Card choice = 4;
}
message OceV3Card {
  int32 id = 1;
  int32 value = 2;
}

// Menu_deal_v3_Resp = 20028; //保皇菜单处理
message Menu_deal_v3_Resp {
  int32 code = 1;
  int32 action = 2;
}

///-------------------------------- 通知消息 ---------------------------

// 房间人满的时候，服务端会给房主推送 该条消息
// 通知开始游戏 Notice_Start = 20100
message notice_start {}

//通知牌权 Notice_Turn = 20101
message notice_turn {
  int32 pos = 1;      //几号pos
  int32 dui_num = 2;  //牌堆张数
  int32 draw_num = 3; //抓牌数量
  repeated ocean_pai_info pai_info = 4; //抓牌时 显示牌的状态（扣，立，躺）
}

//通知抓牌 Notice_Draw = 20102
message notice_draw {
  int32 pos = 1;           //几号pos
  int32 dui_num = 2;       //牌堆张数
  int32 pai = 3;           //牌
  repeated int32 draw_pai_list = 4; //为了乱锚
  int32 stay_power = 5;    // 1保留牌权
  repeated ocean_pai_info pai_info = 6; //抓牌时 显示牌的状态（扣，立，躺）
}
//通知谁打牌 Notice_Play = 20103
message notice_play {
  int32 pos = 1; //几号pos
  int32 pai = 2; //牌 11-19 万 21-29 条 31-39 筒 41-43 中发白 51-54
                          //东南西北 61-68 春夏秋冬梅兰竹菊
  int32 type = 3; //特殊操作的打牌 1:代表扣牌 ...
}

//通知房间内玩家信息 Notice_Person = 20104
message notice_person {
  int32 pos = 1; //几号pos进人了
  string uid = 2; //进来的玩家id uid: 进来的玩家id areaid#numid
  repeated notice_persons_info infos = 3; //房间里所有玩家的uid列表
  repeated int32 rules = 4;               //房间的规则
  int32 ren = 5;                 //几人房
  int32 tableid = 6;             //房间号
  int32 round_type = 7;          //圈还是把
  int32 round = 8;               //几圈
  int32 create_time = 9;         //创建时间
  int32 roomtype = 10; //房间类型 匹配场是1 普通场2 老友圈快捷房3
                                //老友圈自建房4 代开房5 再来一局6
  repeated int32 readys = 11; //准备的玩家pos对列
  int32 room_status =
      12; //房间当前的状态 1等待加入
          // 2发牌阶段（约局点击开始游戏，先发此消息再发牌的消息）3开始出牌阶段
          // 4自动摸打 5分张 6继续游戏
  int32 zhuang = 13;     //庄是几号pos
  int32 cost = 14;       //支付方式
  int32 kick_allow = 15; //允许房主踢人 1:允许 0:禁止
  int32 fangzhu = 16;    //房主
  string clubid = 17;    //老有圈ID
  string roomconf = 18;  //房间玩法创建时传什么返回什么
  int32 variable_ren_game = 19; //可变人数开局 0 没有 1有
  string club_name = 20;        //老友圈name
  int32 club_status = 21;       //老友圈是否打烊
  repeated ocean_expandrules expand_rules = 24; //扩展房间规则
  int32 is_gaming = 25;                //老友圈是否打烊
}
//扩展房间规则
message ocean_expandrules {
  int32 id = 1; //规则ID
  int32 value =
      2; //规则值(客户端传来的值统一乘以10000，服务器解析时统一乘以0.0001)
}

message notice_persons_info {
  string uid = 1;          //用户id
  string sex = 2;          //性别
  string pic = 3;          //头像
  bytes nick = 4;          //昵称
  int32 pos = 5;           //几号pos
  int32 ting = 6;          //听状态 0:1:2
  int32 status = 7;        //玩家状态  1在线 2离线 3离开
  string ip = 8;           //每个人的ip
  int32 buffid = 9;        //头像框id
  int32 paofen = 10;       //玩家跑分选择后展示
  int32 offline_time = 11; // 离线时间戳;
  int32 platform = 12;     //当前登录的方式
  int32 auto_status = 13; //约局自动托管状态 0未托管 1托管
  int32 iffirstkouzhang = 14; // 是否第一次扣张;
  int32 join_time = 15;       // 加入的时间
  int32 score = 16;           // 分数
  int32 waiting_shuffle = 17; // 等待洗牌中
  map<string, string> metadata = 18;
  int32 score_den = 19;       // 分数分母默认1
}

// Notice_Room_New = 20526;       //通知房间里的详细信息 白银无限胡要求换协议
//通知房间信息 Notice_Room = 20105
message notice_room {
  int32 cur_round = 1;   //当前第几把
  int32 draw = 2;        //抓的牌 0是没抓牌时的状态
  int32 dui_num = 3;     //牌堆张数
  int32 max_round = 4;   //最大几把
  repeated persons person = 5;    //每个人的信息
  int32 pos = 6;         //几号位
  int32 step = 7;        //当前步数
  int32 ting = 8;        //是否听 0没 1有
  int32 turn = 9;        //当前谁牌权
  int32 zhuang = 10;     //庄是几号pos
  int32 zhuangpai = 11;  //庄牌是啥
  int32 tableid = 12;    //房间号
  string gameid = 13;    //游戏id
  int32 dec_in_fen = 14; //分数偏移
  int32 gang_kai = 15;   //杠开牌
  int32 fen_zhang_notice =
      16; //剩余多少张牌时,前端进行通知将要开始分张
  int32 fangzhu = 17;                  //房主
  repeated int32 bao = 18;                      //宝牌列表
  repeated int32 xuan_hun = 19;                 // 查混牌
  repeated int32 hun = 20;                      // 混牌list
  repeated kou_zhang_infos kou_zhang_info = 21; //扣张信息
  repeated int32 lgd = 22;                      //亮杠定 不是老干爹
  int32 fengquan = 23;                 //风圈牌 add by she
  int32 finish_huan_san = 25; //是否完成换三张 0 false 1 true
  int32 finish_ding_que = 26; //是否完成定缺 0 false 1 true
  int32 fengwei = 27; //东风位所在的pos 默认0跟随房主pos
  client_status tmp_status =
      28; // 一些给客户端显示用的状态，与游戏无关，通常没什么用
  int32 record_round = 29; //局数
}

// 人员信息
message persons {
  int32 cur = 1;                      //当前分数
  int32 auto = 2;                     //是否托管状态 1是 0否
  int32 cancancel = 3;                //是否能取消托管 1是 0否
  int32 draw = 4;                     //抓的牌
  int32 hu = 5;                       //胡的牌
  int32 pos = 7;                      //几号位
  repeated int32 shou = 8;                     //手牌
  string uid = 9;                     // uid
  repeated int32 wai = 10;                     //打到外面的牌
  repeated ocean_menu_item item_list = 29;     //统一菜单提示
  int32 iffirstkouzhang = 30;         //是否第一次扣张 1是 0否
  repeated int32 kouzhang = 31;                //扣张的牌
  repeated int32 mingfeng = 32;                //明风的牌
  repeated int32 maotuo = 33;                  //毛毛白坨的牌
  repeated int32 hua_pai = 34;                 //当前玩家补的所有花牌
  kou_pai_info kou_pai_info = 35;     //扣牌信息
  int32 ting = 36;                    //听牌状态
  kou_zhang_info kou_zhang_info = 37; //扣牌信息
  int32 bao_pai_fen = 38;             //包牌分数
  repeated int32 cunpai = 39;                  //存牌
  repeated ocean_pai_info pai_info = 40;       //牌的属性
  repeated SpecialShowStaticPai static_pais = 41; //额外的静态牌显示信息
  repeated ex_curs ex_cur = 42;                   //扩展分数
  int32 auto_status = 43; //约局自动托管状态 0未托管 1托管
  yueju_autotimer auto_timer = 44; //约局托管倒计时信息
}

// 通知中断 吃碰杠 谁有中断谁就会收到 Notice_Interrupt = 20106
message notice_interrupt {
  int32 hu = 1;                  // 胡
  int32 pos = 2;                 //几号位
  repeated ocean_menu_item item_list = 3; //统一菜单提示
  int32 hide_guo = 4; //是否隐藏过按钮 1隐藏 0不隐藏
  int32 actionid = 5; //服务端校验用 客户端发送中断消息时 原路带过来
}
message ocean_menu_item {
  INTERRUPT_ACTION action = 1;            //类别
  int32 type = 2;                //归属
  repeated ocean_pai_info info_list = 3;  //牌列表
  repeated ocean_ting_tips ting_list = 4; //听牌
}
//听牌提示信息
message ocean_ting_tips {
  int32 play = 1; //打哪张牌听
  repeated ocean_pai_info info_list = 2;
}
//通知听牌提示 Notice_Ting_Tips = 20109
message notice_ting_tips {
  INTERRUPT_ACTION action = 1;            //类别
  int32 type = 2;                //归属
  repeated ocean_pai_info info_list = 3;  //牌列表
  repeated ocean_ting_tips ting_list = 4; //听牌
}
//牌信息
message ocean_pai_info {
  int32 pai = 1;          //啥牌
  int32 pos = 2;          //这是谁的牌
  int32 count = 3;        //几张
  int32 mulitple = 4;     //分番倍数值
  int32 mulitpleType = 5; // 0分数 1番数 2倍数
  int32 pai_pos =
      6; //牌所在位置，1手牌，2门牌，3外牌，4扣牌，5张家口花牌
  int32 status = 7; // 1 : 亮着  2 : 扣着
  int32 type = 8;   // 1绝头混
}

// Notice_adi_touch_interrupts = 20525; //after_deal_init_check的中断处理下发
//通知谁处理了菜单 （比如玩家1处理了菜单，则其他玩家就会收到该通知）
// Notice_Touch_Interrupt = 20107
message notice_touch_interrupt {
  INTERRUPT_ACTION action = 1;           //触发的什么中断
  int32 turn = 2;               //谁触发了中断
  int32 type = 3;               //中断类型，1：补杠抢杠碰
  repeated ocean_pai_info info_list = 4; //牌列表
  repeated oceInterInfo inter_info = 5;  //胡牌点完菜单之后的推送
  repeated ocean_pai_info del_list =
      6; //补杠之类的删除之前碰的牌，需要把之前碰的牌附在这个字段返回
  repeated oceCurInfo curs = 7;                    // 每个人的分数
  repeated ningziInfo nings = 8;                   // 拧子信息
  repeated int32 hua_pai = 9;                      //当前玩家补的花牌
  repeated ocean_pai_info use_kou_zhang_list = 10; //扣张参与操作牌
  ningziInfo cur_ting_info = 11; // 牌局中的类似显示牛听 的消息求推送
  int32 actionid = 12; // 客户端处理回放用
  repeated pai_obj info_list_new = 13;
  repeated Del_pai del_list_new = 14;
  int32 code = 15; //响应码
}
message oceCurInfo {
  int32 pos = 1;          //几号位
  int32 cur = 2;          //分数
  int32 change_score = 3; //当前变化分数
  int32 dec_in_fen = 4;   //弃用
}
message oceInterInfo {
  int32 hu_type = 1; //胡牌播特效哪种 1：自摸 2：点炮
  int32 pos = 2;     //胡pos
  int32 from = 3; // 点炮来源 自摸的时候是0，点炮就是点炮的人
}

//通知胡牌 计算 Notice_Hu = 20108
message notice_hu {
  repeated int32 hu_pos = 1; //胡牌的人是几号pos 因为能多响 是个int数组
  repeated hu_infos hu_info = 2;    //每个人的hu_type hu_fen gang_fen ……
  string unique_id = 3;    //此房间的唯一id
  ROOM_STATUS_TYPE room_status = 4; //约局用房间状态
  repeated int32 pao_pos = 5;       //点炮的人的数组
  int32 type = 6; //推送这个计算消息的时机， 0：正常牌局里胡牌时推送
                           // 1：重连回来时候展示的 2:白银无限包扣胡的时候
  ocean_pai_info hu_pai_info = 7;      //胡牌信息
  repeated int32 bao = 8;                       //宝牌
  repeated int32 xuan_hun = 9;                  //查混牌
  repeated int32 hun = 10;                      //混牌
  repeated kou_zhang_infos kou_zhang_info = 16; //扣张信息
  repeated OceMengPai meng_pai = 18;            //法库梦牌
  repeated int32 gcl_bao = 19;                  //弓长岭宝牌
  repeated SpecialShowStaticPai static_pais =
      20; //计算中特殊静态牌展示,类似：枪牌、梦牌等
  repeated SpecialAnimationPai animation_pais =
      21;                       //计算中特殊动画牌展示,类似扣牌等
  int32 meng_fen = 22; // 梦牌计算得分
  int32 zhuang = 23;   //庄是几号pos
}
//个人胡信息
message hu_infos {
  int32 pos = 1;             //位置
  repeated hu_type_info hu_types = 2; //胡牌番型展示
  int32 hu_fen = 3;          //胡牌分数
  int32 gang_fen = 4;        //杠分数
  repeated int32 shou_pai = 5;        //手牌
  int32 hu_pai = 6; //胡牌是啥 没胡的人这个字段是0 胡的人就是牌
  int32 dahu = 7;               //是否是大胡 0不是 1是
  repeated int32 dahu_info = 8;          //大胡hutype
  int32 zimo = 9;               //是否自摸 0不是 1是
  int32 type = 10;              // 0:正常 1:破产 2:封顶
  int32 zong_fen = 11;          //总分
  int32 fenzhang_pai = 12;      //分张的牌
  repeated ocean_menu_item men_pai = 13; //门牌
  int32 change_hu_fen = 14;     //当前变化胡牌分数
  int32 ming_gang_num = 15;     //玩家点杠数
  int32 an_gang_num = 16;       //玩家暗杠数
  int32 bu_gang_num = 17;       //玩家补杠数
  int32 is_ting = 18;           //是否听牌 0未听牌 1听牌
  int32 pao_fen =
      19; //跑分 齐齐哈尔 其他地区如果有类似额外算分也可以拿来用,
  string uid = 20;              //玩家uid
  repeated ocean_pai_info pai_info = 21; //计算页面属性牌列表
  int32 gang_xiao_ji = 22;      //杠小鸡的牌
  repeated int32 kou_zhang_pai = 23;     //扣张牌列表
  repeated int32 mao_tuo = 24;           //毛毛白坨牌列表
  repeated int32 cunpai = 25;            //存牌
  int32 hua_fen = 26;           //花分显示到杠分的位置
}
//胡牌信息
message hu_type_info {
  int32 hu_type = 1;    //啥牌
  int32 fanorfen = 2;   //是乘番还是加分  1->乘番  0->加分
  int32 face_value = 3; //番或者分对应的数值
}

// 通知总计算 Notice_Finish = 20111
message notice_finish {
  repeated oceSummarizePer persons = 1; //每个玩家的统计数据
  int32 time = 2;              //时间戳
  int32 is_dismiss = 3; //是否被解散产生的大计算 1:是 0:不是
}
message oceSummarizePer {
  int32 pos = 1;            //几号位
  int32 zhuang_times = 2;   //坐庄次数
  int32 hupai_times = 3;    //胡牌次数
  int32 zimo_times = 4;     //自摸次数
  int32 dianpao_times = 5;  //点炮次数
  int32 minggang_times = 6; //明杠次数
  int32 angang_times = 7;   //暗杠次数
  int32 score = 8;          //分数
  string summarizes = 9;    // json 数据(统计各种数据的次数)
  string uid = 10;          //玩家uid
  int32 winner = 11;        // 0不是冠军，1是冠军
  int32 baopai_fen = 12;    //包牌分数
  int32 dao_fen = 13;       //道分
  int32 score_dao_fen = 14; //分数换算道分
}

//通知房间状态 （结构后同步房间状态返回值的结构一致) Notice_Sync_Room_Status =
// 20110
message notice_sync_room_status {
  int32 room_status = 1; //房间当前的状态
  repeated int32 readys = 2;      //房间准备的队列
  int32 pos = 3;         // 几号pos完成当前的状态
}

// 游戏结束
message notice_end {
  repeated notice_persons_info infos = 1;           //废弃 2021.3.26
  repeated ShouInfo shous = 2;                      //每个人的信息
  notice_poker_room notice_poker_room = 3; //扑克回放需要
  notice_person data = 4;
  notice_v3_room notice_v3_room = 5; //保皇
  repeated int32 bao = 6;                     //宝牌列表
}
message ShouInfo {
  int32 pos = 1;                 //几号pos
  repeated int32 shou = 2;                //手牌
  repeated ocean_menu_item item_list = 3; //扣张回放开局展示扣牌用
}
// 通知手牌展示 Notice_ShowHand = 20113;
message notice_showhand { repeated OceHand hands = 1; }
message OceHand {
  int32 pos = 1;
  repeated int32 pais = 2;
  repeated ocean_pai_info pai_info = 3; //牌属性
}

// Notice_Power = 20114;
message notice_power {
  int32 code = 1; //响应码
  string reason = 2;
  repeated int32 ban_play = 3; //通知此人不能打哪些牌
  repeated oceanHead head_func_types =
      4; //选加钢等对应的值 1代表加钢 2代表断门 3代表飘1 4代表飘2 5代表飘3
         // 6代表飘4 7代表飘6  以后的其他值 依次往后加
  oceanEffect play_interr = 5;
  OceAction action = 6;
  int32 ban_op_type = 7; //不同此人不能打那些牌  操作类型 0 -> 覆盖  1
                                  //-> 增加     2->删除    3-> 什么也不做
  oceanShowTip show_tips = 8;
  repeated int32 ban_play_repeat =
      9; //通知此人不能打哪些牌 具体牌  不是某1类牌 比如1万 传2个
         //就是有2个不能打 有1个 就是1个不能打
  repeated oceanHeadTxt ting_nums = 10; //玩家头像顶部显示文本
}

message oceanHead {
  int32 pos = 1; //赢的人是几号pos
  repeated int32 type =
      2; //选加钢等对应的值 1代表加钢 2代表断门 以后的其他值 依次往后加
  int32 over = 3; //结束标志符 201: 加倍结束 , 以后的其他值 依次往后加
}

message oceanHeadTxt {
  int32 pos = 1;
  int32 num = 2; //次数
}

message oceanEffect {
  int32 turn = 1;   //播谁的特效
  int32 action = 2; //中断菜单
}

message OceAction {
  int32 action = 1;
  int32 pos = 2;      //换牌玩家 pos
  int32 xuan = 3;     // 0: 未选牌， 1: 已经选好牌
  repeated int32 huan_pai = 4; // 换来的牌
  int32 change_type = 5; //换牌方式 1.逆时针 2.顺时针 3.对家换
  int32 clear_type = 6; //洗牌标志 0:什么都没有 1:播放动画 2:显示按钮
                                 // 3:该玩家洗过牌了(断线重连)
}

message oceanShowTip {
  int32 type = 1;  //类型 跑分 ->1
  int32 value = 2; //所选 选项
}

// 通知客户端播放特效动画   Notice_Animation = 20115
message notice_animation { repeated OceAnimationDetail animations = 1; }
message OceAnimationDetail {
  int32 turn = 1;
  int32 action = 2;
  int32 type = 3;
  repeated ocean_pai_info pai_info = 4; //牌属性
}

// Notice_Start_Game_Vote = 20116;     //通知开局投票信息
message NoticeStartGameVote {
  repeated oceVoteInfo vote_info = 1; //投票队列
  int32 status = 2; // 1:等待玩家选择 2:解散成功 3:解散失败
                             // 4:开局投票超时 5.有人房卡不足 6.领队房卡不足
  int32 distime = 3;  //房间解散时间
  repeated string nicks = 4;   // 快速开局有问题的玩家昵称
  int32 comment = 5;  // 解散理由
  int32 promoter = 6; //解散发起人的pos
  int32 code = 7;     //错误码
  string gamerule = 8;         //新规则
}

// Notice_Poker_Room = 20501; // 斗地主通知房间
message notice_poker_room {
  int32 code = 1;         //响应码
  int32 ren = 2;          //几人房
  int32 cur_round = 3;    //当前第几把
  int32 max_round = 4;    //最大几把
  string roomid = 5;      //房间号
  string gameid = 6;      //游戏id
  int32 room_status = 7;  //当前房间状态
  repeated OcePokerRole roles = 8; //房间人员信息
  string clubid = 9;               //比赛场id
  int32 cost = 10;        //支付方式
  int32 roomtype = 11;    //房间类型 1匹配场 2约局普通房间
  repeated int32 rules = 12;       //房间的规则
  string roomconf = 13;   //房间玩法创建时传什么返回什么
  int32 kick_allow = 14;  //允许房主踢人 1:允许 0:禁止
  repeated int32 can_start_person_counts = 15; //允许开局人数列表
  int32 is_last_languo = 16; // 上一局是否烂锅 1:是 0:否
}

//扑克房间人员信息 Notice_Poker_Role = 20502;
message OcePokerRole {
  int32 code = 1;   //响应码
  int32 pos = 2;    //几号位
  string uid = 3;   // uid
  string sex = 4;   //性别
  string nick = 5;  //昵称
  string pic = 6;   //头像
  int32 status = 7; //玩家状态  1在线 2离线 3离开
  string ip = 8;    // IP地址
  int32 fangzhu_pos = 9;
}

//斗地主玩家信息 Notice_Ddz_Role = 20503; // 斗地主广播玩家详细信息
message OceNoticeRoles {
  int32 code = 1;           //响应码
  repeated oceDdzRoleInfo roles = 2; //斗地主玩家信息
  int32 room_status = 3;    //房间状态
  int32 cur_round = 4;      //当前房间回合数
  int32 first_pos = 5;      //首次出牌人
  int32 first_play = 6;     //首次出牌
  int32 fangzhu_pos = 7;    // 房主pos
}

message oceDdzRoleInfo {
  int32 pos = 1;             //几号位
  string uid = 2;            // uid
  int32 score = 3;           //当前分数
  repeated int32 shou = 4;            //手牌
  int32 action = 5;          //当前操作
  int32 is_call = 6;         //是否叫地主
  int32 call_score = 7;      //叫地主分数
  int32 is_open = 8;         //是否明牌
  repeated int32 prepai = 9;          //最近一次出手的牌
  int32 painum = 10;         //牌数
  int32 score_tips = 11;     //最低叫分
  repeated int32 card_tips = 12;      //出牌提示
  int32 multiple = 13;       //是否加倍
  int32 pretype = 14;        //最近一次出手的牌型
  int32 bomb = 15;           //炸弹个数
  int32 joker_bomb = 16;     //王炸
  int32 identity = 17;       //身份 0农民;1地主
  repeated int32 bot_cards = 18;      //当前底牌
  int32 spring = 19;         // 1:春天;2:反春天
  int32 multiples = 20;      //总倍数
  int32 choice_flag = 21;    //铁人三项是否选择完 默认0
  repeated ChoiceRes choice_res = 22; //选牌结果
  repeated AutoCardSelection auto_card_selection = 23; //智能选牌
}

message ChoiceRes {
  int32 choice_round = 1; //铁人三项开局选牌轮数
  repeated int32 pais = 2;         //铁人三项开局选牌牌的结果
  int32 round_score = 3;  //铁人三项小计算分数
  int32 pai_type = 4;     //特殊牌型
}

message AutoCardSelection {
  int32 order = 1;          //顺序
  repeated ChoiceRes choice_res = 2; //选牌的数据结构
}
// Notice_ddz_action = 20504; //斗地主通知玩家操作
//斗地主通知玩家action
message OceNoticeAction {
  int32 code = 1;        //响应码
  int32 pos = 2;         //几号位
  int32 action = 3;      //当前操作
  int32 score_tips = 4;  //最低叫分
  repeated int32 card_tips = 5;   //出牌提示
  int32 next_baodan = 6; //下家是否报单 1 是 0 否
}

// Notice_ddz_settlement = 20505
//斗地主计算消息
message notice_ddz_settlement {
  oceSingleSettle settle = 1;      //单局计算
  repeated oceTotalSettle total_settle = 2; //总计算
}
//单局计算信息
message oceSingleSettle {
  int32 round = 1;               //位置信息
  repeated oceSingleSettleInfo infos = 2; //人员得分信息
  int32 spring = 3;              // 1:春天;2:反春天
  int32 win_identity = 4;        //-1:流局;0:农民;1:地主
  int32 cur_st_round = 5;        //铁人三项当前执行到第几轮
  repeated oceanEffect special_effects = 6; //单局计算特效配置
}
message oceSingleSettleInfo {
  int32 pos = 1;                   //位置
  int32 bomb = 2;                  //炸弹数量
  int32 score = 3;                 //本局得分
  int32 joker_bomb = 4;            //王炸
  int32 is_open = 5;               //是否明牌
  int32 multiple = 6;              //加倍
  int32 pai_fen = 7;               //牌分
  int32 boom_fen = 8;              //炸弹分
  int32 guanpai_fen = 9;           //关牌分
  int32 fangpao_fen = 10;          //放跑分
  repeated OcePokerScores poker_score = 11; //分数结构
  repeated ChoiceRes choice_res = 12;       //选牌结果
  client_status tmp_status =
      13; // 一些给客户端显示用的状态，与游戏内容无关
}
message OcePokerScores {
  int32 score_type = 1; // 1代表正常牌的分数/其他的 根据现实类型
                                 // 是多少就显示多少如闭门type是40002
  int32 score_show_type = 2; // 显示类型 1:+, 2*
  int32 score_value = 3;     // 分数的值
  int32 score_pos = 4;       // pos 值
}
//总计算信息
message oceTotalSettle {
  int32 pos = 1;       //位置
  int32 score = 2;     //总积分
  int32 top_score = 3; //单局最高积分
  int32 win = 4;       //胜
  int32 fail = 5;      //输
  int32 winner = 6;    // 0 不是冠军，1 是冠军
}
message client_status {
  int32 diamond_shuffle = 1; // 是否要显示洗牌？ 1 显示 2 不显示
}

message notice_updateBao {
  int32 code = 1; //响应码
  repeated int32 bao = 2;  //宝牌列表
  string reason = 3;
}

message notice_kanbao_v2 {
  int32 code = 1;
  int32 look = 2; // 0 ->不看 1->看 2->看暗宝
}
message notice_updateBao_v2 {
  int32 code = 1;
  repeated int32 oldBaoPai = 2;
  repeated int32 newBaoPai = 3;
  int32 duiNum = 4;
  int32 actionMod = 5; //  操作模式   1->选宝 2->换宝
  int32 effect = 6;    // 1-> 播放特效 0  0->不播放特效
}

message kou_zhang_infos {
  int32 pos = 1;                                   // pos,
  repeated notice_touch_interrupt touch_kou_zhang_info = 2; //扣张信息
}
message ningziInfo {
  int32 pos = 1;      //几号位
  int32 ningzi = 2;   // 0不是  1是
  repeated int32 tinglist = 3; // 2的列表结构
}
//扣牌信息
message kou_pai_info {
  repeated int32 choice_kou = 1;  //展示的牌(待选择扣或不扣)
  repeated int32 already_kou = 2; //选择扣的牌
  repeated int32 not_kou = 3;     //选择不扣的牌
  int32 kou_status = 4;  //扣的状态
  int32 kou_round = 5;   //第几轮
}
message kou_zhang_info {
  int32 iffirstkouzhang = 1;
  repeated int32 kouzhang = 2;
  int32 kou_zhang_hua_count = 3;
}
message ex_curs {
  int32 type = 1;
  int32 ex_fen = 2;
}
//托管倒计时信息
message yueju_autotimer {
  int32 status = 1; //计时状态 1出牌倒计时 2托管倒计时 3计算倒计时
  int32 end_time = 2; //倒计时结束时间戳
}
//牌对象
message pai_obj {
  int32 pai = 1;          //啥牌
  int32 pos = 2;          //这是谁的牌
  int32 count = 3;        //几张
  int32 mulitple = 4;     //分番倍数值
  int32 mulitpleType = 5; // 0分数 1番数 2倍数
  int32 pai_pos = 6; //牌所在位置，1手牌，2门牌，3外牌
  int32 status = 7;  // 1 : 亮着  2 : 扣着
  int32 translucent = 8; // 是否半透明 1是 0 不是
}

// 计算或牌局中,特殊展示的静态牌结构,类似:梦牌/宝牌/枪牌
message SpecialShowStaticPai {
  int32 type =
      1; // 1 宝 2 查混3 混 4枪 5辽阳枪 6辽阳宝 7杠小鸡牌 8白银无限包扣胡牌
  repeated pai_obj pais = 2;
  int32 pos = 3;           // 谁的牌
  repeated pai_obj select_pais = 4; // 需要处理的牌
}

// 计算或牌局中,特殊展示动画的牌结构,类似:扣牌等 (修改源自 kou_pai_infos 的结构)
message SpecialAnimationPai {
  int32 action = 1;
  repeated AnimationPai pais = 2;
  int32 pos = 3; // 谁的牌
}

// 特殊展示动画的牌结构
message AnimationPai {
  pai_obj pai = 1;
  string is_check = 2;
}

//删除牌结构
message Del_pai {
  repeated pai_obj pais = 1;
  int32 action = 2;
}

message OceMengPai {
  int32 zhong = 1; // 1: 中，0: 不中
  int32 pai = 2;
}

// Notice_Guo_Hu_Menu = 20120; //通知过胡菜单
message notice_guo_hu_menu { int32 code = 1; }

message notice_dice {
  int32 code = 1;
  int32 dian = 2; //骰子点数
}

message notice_koudi {
  int32 code = 1;
  int32 duinum = 2; // 堆牌数量
  int32 pai = 3;    // 扣底的那张牌
}

message notice_rules {
  int32 code = 1;
  repeated int32 rules = 2; // 客户端的规则显示
}

//填大坑玩家信息
message notice_fp_role {
  int32 code = 1;           //响应码
  repeated ocefpRoleInfo roles = 2;  //斗地主玩家信息
  int32 room_status = 3;    //房间状态
  int32 cur_round = 4;      //当前房间回合数
  int32 total_bet = 5;      //总注数
  repeated int32 bet_list = 6;       //筹码列表
  int32 down_bet_value = 7;
  int32 is_languo = 8;      //是否烂锅
  int32 cur_ring = 9;       //当前回合数
  int32 max_ring = 10;      //最大回合数
  repeated int32 fp_xuanhun = 11;    //查混牌
  repeated int32 fp_hun = 12;        //混牌
  int32 min_value = 13;     //加注的最小范围
  int32 max_value = 14;     //加注的最大范围
  int32 di_zhu = 15;        //底注
  int32 turn = 16;          //当前操作的人
}
message ocefpRoleInfo {
  int32 pos = 1;                 //几号位
  string uid = 2;                // uid
  int32 score = 3;               //当前分数
  repeated int32 shou = 4;                //手牌
  int32 action = 5;              //当前操作
  int32 action_result = 6;       //当前操作结果
  int32 pai_score = 7;           //牌面分
  int32 pai_total_score = 8;     //牌总分
  int32 cur_bet = 9;             //本轮
  int32 alread_bet = 10;
  int32 painum = 11;             //牌数
  repeated int32 koupai = 12;             //扣的牌
  int32 is_fold = 13;            //是否弃牌 0 不弃 1 弃牌
  repeated int32 dipai = 14;              //底牌
  repeated int32 gongzhang = 15;          //公张牌
  int32 is_see = 16;             //是否看牌
  int32 is_buy = 17;             //是否买堆
  repeated int32 jzgn_action = 18;        //锦州拱牛操作
  int32 is_auto_follow_bet = 19; //是否自动跟注
}

//填大坑计算消息
message notice_fp_settlement {
  int32 code = 1;                    //响应码
  oceFpSingleSettle settle = 2;      //单局计算
  oceFpTotalSettle total_settle = 3; //总计算
}
//填大坑单局计算信息
message oceFpSingleSettle {
  int32 round = 1;                 //位置信息
  repeated oceFpSingleSettleInfo infos = 2; //人员得分信息
  int32 win = 3;                   //赢的人 如果是0说明烂锅
  int32 happy_score = 4;           //喜分
  int32 is_languo = 5; //锦州拱牛判断是否烂锅 0 不烂锅 1 烂锅
  repeated int32 jzgn_winlist = 6; //锦州拱牛赢的人列表
}
message oceFpSingleSettleInfo {
  int32 pos = 1;   //位置
  int32 score = 2; //本局得分
  client_status tmp_status = 33; // 一些给客户端显示用的状态，与游戏内容无关
}
//填大坑总计算信息
message oceFpTotalSettle {
  repeated oceFpTotalSettleInfo info = 1; //总结赛人员信息
  int32 happy_score = 2;         //喜分
}
//填大坑总计算信息
message oceFpTotalSettleInfo {
  int32 pos = 1;   //位置
  int32 score = 2; //总积分
  int32 win = 3;   //胜
  int32 fail = 4;  //输
}
message notice_fp_draw {
  int32 code = 1;
  repeated OceFpDrawInfo draw_info = 2; //填大坑抓牌信息
}
//填大坑抓牌详细信息
message OceFpDrawInfo {
  int32 pos = 1;             //几号位
  int32 draw_pai = 2;        //抓的牌
  int32 pai_score = 3;       //抓完牌的牌面分
  int32 pai_total_score = 4; //抓的牌的总分
  repeated int32 gongzhang = 5;       //公张牌
}
message notice_fp_turn {
  int32 code = 1;
  int32 turn = 2; // 当前操作的pos值
}

message notice_countdown {
  int32 code = 1;
  int32 type =
      2; // 倒计时消息类型: 1代表填大坑托管倒计时 2宁安正计时 0:结束计时
  int32 pos = 3;       // 显示倒计时的玩家位置
  int32 countdown = 4; // 倒计时的总时间,单位:秒
  int32 timestamp = 5; // 倒计时开始的当前时间,仅重连时会用到
}

message notice_auto {
  int32 code = 1;      //响应码
  int32 pos = 2;       //几号位
  int32 auto = 3;      //是否托管状态 1是 0否
  int32 cancancel = 4; //是否能取消托管 1是 0否
  string reason = 5;
}

message notice_chat {
  int32 code = 1;
  int32 type = 2;
  string message = 3;
  int32 pos = 4;
  int32 duration = 5;
  int32 bCode = 6;
  string reason = 7;
}

message notice_bugang {
  int32 code = 1;
  int32 pai = 2;    // 抢杠胡 被抢杠的那张牌
  int32 pos = 3;    // 被抢杠pos
  int32 resume = 4; // 1:代表重连
}

message notice_v3_room {
  int32 code = 1;        //响应码
  int32 ren = 2;         //几人房
  int32 cur_round = 3;   //当前第几把
  int32 max_round = 4;   //最大几把
  string roomid = 5;     //房间号
  string gameid = 6;     //游戏id
  int32 room_status = 7; //当前房间状态
  string roomconf = 8;   //房间玩法创建时传什么返回什么
  string clubid = 9;     //比赛场id
  int32 cost = 10;       //支付方式
  repeated int32 rules = 11;      //房间的规则
  int32 kick_allow = 12; //允许房主踢人 1:允许 0:禁止
  repeated OceV3Person persons = 13; //房间人员信息
  repeated int32 over_pos = 14;      //存放牌局结束的人
  OceV3Card wang = 15;      //王牌
  OceV3Card shiwei = 16;    //侍卫牌
}

message OceV3Menu { int32 action = 1; }

//扑克房间人员信息
message OceV3Person {
  int32 code = 1;        //响应码
  int32 pos = 2;         //几号位
  string uid = 3;        // uid
  int32 status = 4;      //玩家状态  1在线 2离线 3离开
  string ip = 5;         // IP地址
  repeated OceV3Card shou = 6;    //手牌
  int32 shou_count = 7;  //手牌数量
  repeated OceV3Card wai = 8;     //打出去的牌 外牌
  int32 identity = 9;    //身份
  int32 choice = 10;     //玩家选择 存放菜单id
  int32 score = 11;      //玩家分数
  repeated OceV3Card kanpai = 12; //青岛玩法 看牌
  int32 play_state = 13; //打牌状态 对应菜单 action
  int32 rebel = 14; //造反身份：1：头反；2：二反；其它：非造反身份
  int32 ti_state = 15; //踢状态：1：玩家选择踢；其它：玩家未选择踢
  int32 real_identity =
      16; // 玩家真实身份，identity = 9 是玩家对外身份
}

message notice_v3_menu {
  int32 code = 1;
  int32 pos = 2; //发给谁的( pos = 0 时 发给所有人)
  int32 type =
      3; // 0 什么都不是 1: 等待玩家选择 2:等待玩家登基，3:等待皇帝选侍卫 4:打牌
  repeated OceV3MenuItem menus = 4; //菜单
}

message OceV3MenuItem {
  int32 seq = 1;
  int32 action = 2;
  repeated OceBox boxs = 3; //提示信息 牌组合
}

message OceBox {
  repeated OceV3Card cards = 1; //牌信息
}

message menu_deal_v3 {
  int32 code = 1;
  int32 action = 2;
}

message notice_v3_animation {
  int32 code = 1;
  int32 effect_id = 2;         //特效id
  int32 pos = 3;               //产生特效的玩家pos
  repeated OceV3Identity identitys = 4; //身份信息
  repeated OceV3Card cards = 5;         //牌信息
}

message OceV3Identity {
  int32 id = 1; //身份 1 王 2 侍卫 3 民 4 不明 5 real侍卫 6 real民
  repeated int32 pos = 2;
}

message notice_play_v3 {
  int32 code = 1;
  int32 pos = 2;
  repeated OceV3Card cards = 3; //打出去的牌
}

message OceV3Settle {
  int32 pos = 1;
  int32 fen = 2;
  int32 win = 3;      // 0 失败 1 赢
  repeated OceV3Card shou = 4; //手牌
}

message OceV3TotalSettle {
  int32 pos = 1;
  int32 win_count = 2;  //赢局数
  int32 lose_count = 3; //失败局数
  int32 total_fen = 4;  //总分
  int32 single_fen = 5; // 单局最高分
}

message notice_settle_v3 {
  int32 code = 1;
  repeated OceV3Settle settle = 2;            //单局计算
  repeated OceV3TotalSettle total_settle = 3; //总计算
  repeated int32 s_statistics = 4;            //计算统计
}

message notice_over_pos {
  int32 code = 1;
  repeated int32 over_pos = 2; //存放牌局结束的人
}

message notice_kanpai {
  int32 code = 1;
  int32 pos = 2;      //谁的
  repeated OceV3Card shou = 3; //手牌
}

message notice_action_v3 {
  int32 code = 1;
  int32 pos = 2;    //谁操作的
  int32 action = 3; //菜单id
}

// Notice_update_men_show = 20523; //更新门牌显示
message update_men_show {
  int32 code = 1;
  repeated ocean_menu_item item_list = 2;
  int32 pos = 3;
}

// Notice_update_list = 20524; //更新像亮杠定这种鬼东西
message update_list {
  int32 code = 1;
  string reason = 2;
  int32 type = 3;        // 0 是亮杠定
  repeated int32 update_list = 4; // 更新列表
}

// Notice_pai_count = 20527; // 牌局里通知花牌风牌计数
message notice_pai_count { repeated ocePaiCountS pai_count = 1; }
message ocePaiCountS {
  int32 pos = 1;           //谁的牌
  repeated ocePaiType pai_type = 2; //牌类型和数量
}
message ocePaiType {
  int32 type = 1;  //什么牌 1花牌 2 风牌
  int32 count = 2; //牌数量
}

// Notice_interrupte_status = 20528; //通知菜单状态
message notice_interrupte_status {
  int32 code = 1;
  OceInterrupteStatus roomInterrupteStatus = 2; //房间内整体状态
  repeated OcePersonInterrupteStatus personInterrupteStatus = 3; // 具体玩法状态
}

message OcePersonInterrupteStatus {
  int32 pos = 1;                            //位置
  OceInterrupteStatus interrupteStatus = 2; //状态类
}

message OceInterrupteStatus {
  int32 type = 1;   //菜单类型 1换三张  2定缺 3扔牌
  int32 status = 2; //菜单状态  1进行中  2 结束
  int32 action = 3; // 菜单选择信息 0未选择 已选择就是对应action数字
  int32 change_type = 4; //换牌方式 1.逆时针 2.顺时针 3.对家换
}

// Notice_bumaotuo = 20529; // 牌局里通知补毛坨
message notice_bumaotuo {
  int32 code = 1; //响应码
  oceanMaoTuo maotuo = 2;
  int32 ifkaiju = 3;
}

message oceanMaoTuo {
  int32 pos = 1; //补毛毛白坨的pos
  int32 pai = 2; //补牌
  int32 is_shou = 3; //是否是手里的牌 1:代表手里的牌 0:代表扣张里面的牌
}

// 给客户端传输数据
message notice_other {
  repeated notice_hu table_review =
      1; //牌局回顾（所有小计算）一次只发4局 防止消息超长
  int32 index = 2;      //从1开始
  int32 settle_num = 3; // notice_hu 小计算一共多少条
}

// 麻将托管
message notice_yueju_auto { // Notice_yueju_auto = 20531; // 麻将通知托管
  int32 code = 1;
  string reason = 2;
  int32 pos = 3;         //几号位
  int32 auto_status = 4; //托管状态 1设置托管 0取消托管
}
message update_yueju_autotimer { // Update_yueju_autotimer = 20532; //
                                 // 通知客户端麻将托管倒计时时间
  int32 code = 1;
  string reason = 2;
  int32 pos = 3;                  //几号位
  yueju_autotimer auto_timer = 4; //约局托管倒计时信息
}
message set_yueju_auto_req {
  string gameid = 1;     //游戏id
  string roomid = 2;     //房间号
  int32 auto_status = 3; //托管状态 1设置托管 0取消托管
}
message
set_yueju_auto_resp { // GP不处理回包，所以不管用，先占个位置，使用notice消息代替回包
  int32 code = 1; //响应码
  string reason = 2;
  string gameid = 3;     //游戏id
  string roomid = 4;     //房间号
  int32 auto_status = 5; //托管状态 1设置托管 0取消托管
}
// 麻将托管
message notice_koupai_end { // Notice_yueju_koupai_end = 20536; //客户端扣牌结束
  int32 kseato = 1;
  int32 kseatt = 2;
  int32 kseath = 3;
  int32 kseatf = 4;
}
message update_teahouse_auto {
  int32 tableid = 1;
  string uid = 2;        // numid
  int32 auto_status = 3; //托管状态 1设置托管 0取消托管
}

// 通知客户端洗牌
message notice_xipai {
  int32 code = 1;
  repeated int32 pos = 2; // 通知客户端哪些位置的人在洗牌
}
]]��