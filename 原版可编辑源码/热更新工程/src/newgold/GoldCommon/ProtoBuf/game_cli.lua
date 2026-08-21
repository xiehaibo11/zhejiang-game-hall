return [[
  syntax="proto3";
package game_cli;

enum GameProcessXYId
{
	kInvalid = 0;
	kPopupMsgBox = 101;				//MsgBox(公共提示框)
	kBatchProtocol = 106;			//BatchProtocol(批量协议)
	kChatMsg = 107;					//ChatMsg(聊天协议)
	kReqCheckClientVer = 113;		//ReqCheckClientVer
	kRespCheckClientVer = 114;		//RespCheckClientVer
	kReqRoomInfo = 11003;			//ReqRoomInfo
	kRespRoomInfo = 11004;			//RespRoomInfo
	kReqJoinRoom = 11007;			//ReqJoinRoom
	kRespJoinRoom = 11008;			//RespJoinRoom
	kPlayerInfo = 11009;			//PlayerInfo
	kStartGame = 11013;				//StartGame(通知可以开始游戏)
	kTableInfo = 11014;				//TableInfo
	kTableStateInfo = 11015;		//TableStateInfo(桌子状态)
	kReqPlayerAct = 11016;			//ReqPlayerAct(请求玩家的某种行为(坐下,站起等))
	kRespPlayerAct = 11017;			//RespPlayerAct
	kChangeSeatInTable = 11020;		//ChangeSeatInTable
	kPlayerSet = 11022;				//PlayerSet(请求修改玩家配置(如:不允许同ip)(c->s))
	kPlayerStateInfo = 11027;		//PlayerStateInfo(玩家房间状态)
	kPlayerNumInfo = 11028;			//PlayerNumInfo(玩家游戏数据)
	kUserLeaveRoom = 11038;			//UserLeaveRoom(玩家离开房间)
	kReqVipKickUser = 11039;		//ReqVipKickUser(会员请求踢出同桌其他玩家(c->s))
	kRespVipKickUser = 11040;		//RespVipKickUser(会员踢人结果应答(s->c))
	kEnterRoomFinish = 11041;		//EnterRoomFinish(进入房间结束(s->c))
	kReqClientTransfer = 11042;		//ReqClientTransfer(客户端中转协议,只能同房间中转(c->s))
	kRespClientTransfer = 11043;	//RespClientTransfer(客户端中转协议服务端回复(s->c))
	kReqPlayerPropsData = 11050;	//ReqPlayerPropsData
	kRespPlayerPropsData = 11051;	//RespPlayerPropsData
	kReqUseProps = 11052;			//ReqUseProps
	kRespUseProps = 11053;			//RespUseProps
	kHintUseProps = 11056;			//HintUseProps(道具使用的提示(发给道具使用对象)(s->c))
	kReqTransMoney = 11060;         //ReqTransMoney(划账功能)
	kRespTransMoney = 11061;        //RespTransMoney
	kReqSR = 11062;					//ReqSR
	kRespSR = 11063;				//RespSR
	kReqLeaveRoom = 11073;		    //ReqLeaveRoom
	kRespLeaveRoom = 11074;			//RespLeaveRoom
	kCheckAct = 11079;				//CheckAct(心跳)
	kGameReady = 11080;				//GameReady(准备)
	kReqClientAward = 11086;		//ReqClientAward(回包通过kChatMsg)
	kReqJoinEmptyTable = 11093;		//ReqJoinEmptyTable
	kRespJoinEmptyTable = 11094;	//RespJoinEmptyTable
	kReqOwnerKickUser = 11095;		//ReqOwnerKickUser(房主踢人)
	kRespOwnerKickUser = 11096;		//RespOwnerKickUser
	kPlayerConnect = 11100;			//PlayerConnect(游戏客户端连游戏逻辑验证(client->gs))
	kRespPlayerConnect = 11103;		//RespPlayerConnect(游戏客户端连游戏逻辑验证应答(gs->c 表示连接是否成功))
	kPlayerLeave = 11101;			//PlayerLeave(离开桌子(client->gs))
	kPlayerLeaveEx_ToClient = 11104;//MsgBox(游戏服务要求玩家离开(gs->client))
	kPlayerLeaveEx_ToServer = 11105;//PlayerLeaveEx_ToServer(玩家主动离开, 相当于[CMDT_PLAYERLEAVE]，异常退出(client->gs))
	kRespPlayerLeave = 11106;		//RespPlayerLeave(回复离开桌子(gs->client))
	kRespCheatPlayerCount = 11111;		//RespCheatPlayerCount(匹配返回(gs->client))
	kServerToClientMessage = 11200;	//ServerToClientMessage(服务器向游戏客户端发送的消息协议)
	kClientToServerMessage = 11201;	//ClientToServerMessage(游戏客户端向服务器发送的消息协议)
	kReqModifyGameInfo = 11202;		//ReqModifyGameInfo
	kRespModifyGameInfo = 11203;	//RespModifyGameInfo
	kReqTeaHouseDissolve = 11204;	//ReqTeaHouseDissolve
	kRespTeaHouseDissolve = 11205;	//RespTeaHouseDissolve
}

message BatchProtocol
{
	enum Flag
	{
		kStart = 0;
		kEnd = 1;
	}
	Flag flag = 1;
	sint32 xyid = 2;
	sint32 count = 3;
}

message ChatMsg
{
	enum Channel
	{
		kUser = 0;
		kTable = 1;
		kRoom = 2;
		kServer = 3;
		kGame = 4;
		kAll = 5;
	};
	Channel channel = 1;
	enum ColorType
	{
		kCTCommon = 0;
		kCTVip = 1;
		kCTInfo = 2;
		kCTError = 3;
		kCTWarning = 4;
		kCTManage1 = 5;
		kCTManage2 = 6;
		kCTManage3 = 7;
		kCTAd1 = 8;
		kCTAd2 = 9;
		kCTAd3 = 10;
		kCTSystem1 = 11;
		kCTSystem2 = 12;
		kCTSystem3 = 13;
		kCTOther = 14;
	};
	uint32 color = 2;
	uint32 areaid = 3;
	uint32 numid = 4;
	bytes msg = 5;
}

message ReqCheckClientVer
{
	uint32 ver = 1;		//客户端当前版本
}

message RespCheckClientVer
{
	enum Flag
	{
		kSuccess = 0;				//版本通过
		kShowMessageOk = 1;			//通过，但附带提示消息(有新版本，但是当前版本可以继续使用)
		kShowMessageMustUpdate = 2;	//错误由MsgBox定义(必须升级才能继续)
		kShowMessageOldSvr = 3;		//错误由MsgBox定义(服务器版本低于客户端版本)
		kPlayerNotFound = 4;
		kNotInTable = 5;
		kStepError = 6;
		kTableBusy = 7;
	};
	Flag flag = 1;
	uint32 now_ver = 2;
	MsgBox msg_box = 3[packed = false];		//当flag!=kSuccess时候才序列化，否则不序列化
	uint32 error_code = 4;
}

message ReqRoomInfo
{
	uint32 room_id = 1;			//房间编号(0获得所有房间信息)
	bool need_rule = 2;			//是否需要返回各种房间内规则, 如计分规则等
}

// 娱乐模式
enum PlayType
{
	kPTInvalid = 0;
	kPTPlayScore = 1;
	kPTPlayRich = 2;
	kPTPlayDou = 3;
	kPTPlayRichScore = 4;
};

message MsgBox
{
	enum Type
	{
		kSimple = 0;		//简单模式
		kComplex = 1;		//复杂模式
		kSetTopest = 2;		//最前面的
	}
	Type type = 1;
	bytes caption = 2;
	bytes text = 3;
	uint32 icon_btn = 4;
	enum DelayTime
	{
		kNoDelay = 0;
		k5Sec = 5;
		k10Sec = 10;
		k15Sec = 15;
	}
	DelayTime delay_time = 5;
	enum IconBtnFlag
	{
		kIBOk = 0x00000000;
		kIBOkCancel = 0x00000001;
		kIBAbortRetryIgnore = 0x00000002;
		kIBYesNoCancel = 0x00000003;
		kIBYesNo = 0x00000004;
		kIBRetryCancel = 0x00000005;
		kIBIconHand = 0x00000010;
		kIBIconQuestion = 0x00000020;
		kIBIconExclamation = 0x00000030;
		kIBIconAsterisk = 0x00000040;
	};

	enum Action
	{
		kQuit = 0;				// 退出游戏（房间）
		kIE = 1;				// 弹出ie
		kDialog = 2;			// 弹对话框
		kChatFrame = 3;			// 聊天框
		kGameRoll = 4;			// 游戏界面滚动
		kGameDialog = 5;		// 游戏弹出对话框
		kGameChatFrame = 6;		// 游戏界面聊天框
		kAllDialog = 7;			//
		kAllChatFrame = 8;		//
		//...等等
	};
	enum Color
	{
		kBlack	= 0x0;		//黑色
		kBlue	= 0x0000FF;
		kGreen	= 0x008000;
		kRed	= 0xFF0000;
		kYellow	= 0xFFFF00;
	};
	uint32 color = 6;
	bytes web = 7;				//要链接的web地址
	Action action = 8;
}

message RespRoomInfo
{
	enum Flag
	{
		kSuccess = 0;
		kShowMessage = 1;	//错误由MsgBox定义
		kEnd = 2;
	}
	Flag flag = 1;				//错误编号
	sint32 appid = 2;			//gs的appid
	sint32 game_id = 3;			//游戏编号
	message RoomInfoRecord
	{
		uint32 room_id = 1;		//房间编号
		bytes name = 2;		//房间名称
		sint32 room_mode = 3;	//房间模式
		bool demo = 4;			//是否是测试房间，不计分不计银子
		PlayType play_type = 5;
		enum TableStyle
		{
			kInvalid = 0;
		}
		TableStyle table_style = 6;		//桌子式样
		sint32 table_cnt = 7;			//桌子数目
		sint32 table_chair_cnt = 8;		//一桌椅子数目
		sint32 max_player_cnt = 9;		//最大玩家数目
		sint32 cur_player_cnt = 10;		//当前用户数量
		bytes welcome_msg = 11;		//欢迎信息
		bytes ad_msg = 12;				//广告信息
		bytes join_room_rule = 13;		//进入房间规则 默认NULL, Lua函数 struct canJoin(...);
		bytes leave_room_rule = 14;	//离开房间规则 默认NULL, Lua函数 struct leave(long jointime, ...)
		bytes join_table_rule = 15;	//坐下规则 默认NULL, struct canJoin(...);
		bytes see_table_rule = 16;		//旁观规则 默认NULL, struct canSee(int vipid, ...);
	}
	repeated RoomInfoRecord room_info_record = 4;
	MsgBox msg_box = 5[packed = false];		//当flag==kShowMessage时候才序列化，否则不序列化
	message RoomInfoRecord1
	{
		bytes room_mode_rule = 1;		//房间模式规则 默认NULL
		sint32 max_brk_cnt = 2;			//最大断线次数
		sint32 brk_keep_time = 3;		//断线保持时间
		bytes continue_table_rule = 4;	//继续游戏规则
		int32 area_id = 5;
		bytes game_rule = 6;			//游戏逻辑规则(显示表头等)
	}
	repeated RoomInfoRecord1 room_info_record1 = 6;
	uint32 error_code = 7;
}

enum ClientType
{
	kPC = 0;					// 计算机
	kTV = 1;					// 电视
	kMobile = 2;				// 手机
	kWeb = 3;					// 浏览器
};

enum HardwareFlag				// 带硬件标识
{
	kHFNone			=0;
	kHFCamera		=0x01;		// 摄像头
	kHFMicrophone	=0x02;		// 麦克风
	kHFJoyPad		=0x04;		// 游戏手柄，不区分有线无线
};
	
message ReqJoinRoom
{
	uint32 room_id = 1;
	uint32 client_type = 2;
	uint32 hardware_flag = 3;
	uint32 ver = 4;
	sint32 data_size = 5;
	bytes data = 6;
	int32 channel_id = 7;
	enum Type
	{
		kNormal = 0;		//普通
		kSports = 1;		//竞技
	};
	Type type = 8;
	int32 os_ver = 9;
	bytes identify = 10;
	bool reconnect = 11;
}

message RespJoinRoom
{
	enum Flag
	{
		kSuccess = 0;
		kShowMessage = 1;				//错误由MsgBox定义
		kReconnectNotInRoom = 2;		//针对重连,玩家不在房间
		kReconnectInOtherRoom = 3;		//针对重连,玩家在其他房间
		kReenterNotAllowed = 4;			//已经正常在房间中，不需要重新进入
	};
	Flag flag = 1;
	enum Type
	{
		kJoin = 0;			//进房间
		kChange = 1;		//换房间
		kRejoin = 2;		//重新进入该房间
	};
	Type type = 2;
	uint32 room_id = 3;
	MsgBox msg_box = 5[packed = false];		//当flag==kShowMessage时候才序列化，否则不序列化
	int32 appid = 6;						//如果tally自己检查互斥且玩家在其他的互斥房间, 提示玩家在哪个appid的房间里
	uint32 error_code = 7;
}

message PlayerInfo
{
	enum Sex
	{
		kInvalid = 0;
		kFemale = 48;
		kMale = 49;
	}
	uint32 areaid = 1;
	uint32 numid = 2;
	bytes customer_id = 3;		//平台帐号,即userid
	bytes nickname = 4;			//昵称
	int32 right = 5;			//基本权限,复杂的权限由另外的协议传
	Sex sex = 6;				//性别
	int64 sr = 7;				//财富数量(银子)
	int64 jf = 8;				//游戏积分
	int32 jy = 9;				//经验
	int32 win = 10;				//本游戏累计总赢盘数
	int32 lost = 11;			//本游戏累计总输盘数
	int32 peace = 12;			//本游戏累计总和盘数
	int32 escape = 13;			//本游戏累计断线盘数
	int32 bh_id = 14;			//帮会id(暂时未使用)
	bytes bh_name = 15;		//帮会名字(暂时未使用)
	sint32 state = 16;			//玩家房间内状态
	sint32 table_order = 17[default = -1];	//桌号(即tableid)
	sint32 sit_order = 18 ;//桌上的座位号
	sint32 net_speed = 19;		//网速
	int32 head_id = 20;			//服装id
	int32 vip_id = 21;			//会员号
	uint32 client_type = 22;	//客户端类型(见CLIENTTYPE定义)
	uint32 hardware_flag = 23;	//硬件标识(见HARDWAREFLAG定义)
	uint32 picture_id = 24;		//玩家自定义头像标记
	int64 type_score = 25;		//根据游戏的积分类型, 如果是玩财富的, 就等于sr的值, 如果是玩积分的, 就等于jf
	bytes pt_numid = 26;		//盛大通行证数字账号
	int32 os_ver = 27;			//操作系统版本号
	bytes nickname2 = 28;		//昵称
}

message StartGame
{
	bool can_start = 1;			//是否能开始游戏
}

message TableInfo
{
	sint32 table_id = 1;
	enum TableState
	{
		kTSIdle = 0;	// 桌子无人的状态
		kTSReady = 1;	// 桌子上有人但游戏没有开始状态
		kTSGame = 2;	// 游戏开始状态
	};
	TableState table_state = 2;
	sint32 table_style = 3;
	bool have_pwd = 4;
	sint32 chairs = 5;
	bytes joinrule = 6;
	bytes gamerule = 7;
	bytes seerule = 8;
	bool have_owner = 9;
	int32 owner_areaid = 10[packed = false];
	int32 owner_numid = 11[packed = false];
	bytes gamekeyword = 12;
}

message TableStateInfo
{
	sint32 table_id = 1;
	TableInfo.TableState table_state = 2;
	bool have_pwd = 3;
	bool have_owner = 4;
	int32 owner_areaid = 5[packed = false];
	int32 owner_numid = 6[packed = false];
	bytes gamekeyword = 7;
}

message ReqPlayerAct
{
	enum Action
	{
		kInvalid = 0;
		kSitdown = 1;					//坐下
		kStandup = 2;					//站起
		kReady = 3;						//房间模块按了开始
		kSeeGame = 4;					//普通旁观(桌上有人才可旁观)
		kChange2Start = 5;				//桌子里面按了开始(只有玩家原来状态为 US_START或者US_SEEING，才可以转换)
		kChange2SeeGame = 6;			//坐着的变成旁观(只有玩家原来状态为 US_START或者US_SEEING，才可以转换)
		kChangeSeat = 7;				//换座位(只有玩家原来状态为 US_SITDOWN或者US_READY，才可以转换)
		kLeaveRoom = 8;					//离开房间
		kSeeGame2 = 9;					//新增旁观(空桌也可旁观)
	};
	Action action = 1;
	sint32 table_id = 2;				//桌号
	sint32 sit_order = 3;	//桌内的座位号
	bytes pwd = 4;						//桌子密码
	int32 askid = 5;
	bytes data = 6;					//附加数据，采用lua串格式
}

message RespPlayerAct
{
	enum Flag
	{
		kSuccess = 0;
		kShowMessage = 1;	//错误由MsgBox定义
	}
	Flag flag = 1;
	MsgBox msg_box = 2[packed = false];		//当flag==kShowMessage时候才序列化，否则不序列化
	int32 askid = 3;
	uint32 error_code = 4;
}

message ChangeSeatInTable
{
	uint32 numid1 = 1;
	sint32 areaid1 = 2;
	sint32 seat1 = 3;
	uint32 numid2 = 4;
	sint32 areaid2 = 5;
	sint32 seat2 = 6;
}

message PlayerSet
{
	message Data
	{
		enum Mask
		{
			kInvalid = 0;
			//// define PLAYERSETTING.mask;
			kIPLimit			= 0x01;	// 不允许同IP
			kPasswdLimit		= 0x02;
			kNetspeedLimit		= 0x04;
			kEscapeLimit		= 0x08;
			kMinScoreLimit		= 0x10;
			kMaxScoreLimit		= 0x20;
			kMinRichLimit		= 0x40;
			kMaxRichLimit		= 0x80;
		}
		sint32 mask = 1;
		bytes passwd = 2;
		int32 net_speed = 3;
		int32 max_escape = 4;
		int64 min_score = 5;
		int64 max_score = 6;
		int64 min_rich = 7;
		int64 max_rich = 8;
	}
	Data data = 1;
	bytes name = 2;		//玩家设置 桌子名称
	bytes rule = 3;		//玩家设置 桌子游戏规则
}

message PlayerStateInfo
{
	sint32 state = 1;	//玩家状态
	uint32 roomid = 2;
	sint32 table_id = 3;
	sint32 sit_order = 4;
	uint32 areaid = 5;
	uint32 numid = 6;
}

message PlayerNumInfo
{
	int64 sr = 1;
	int64 jf = 2;
	int32 jy = 3;
	int32 win = 4;
	int32 lost = 5;
	int32 peace = 6;
	int32 escape = 7;
	uint32 areaid = 8;
	uint32 numid = 9;
	int64 typescore = 10;
}

message UserLeaveRoom
{
	uint32 room_id = 1;
	uint32 areaid = 2;
	uint32 numid = 3;
}

message ReqVipKickUser
{
	int32 areaid = 1;		//被踢玩家区号
	int32 numid = 2;		//被踢玩家数字账号
	bytes msg = 3;			//提示消息
}

message RespVipKickUser
{
	enum Flag
	{
		kSuccess = 0;
		kNotVip = 1;		//玩家不是vip, 或者已经失效
		kNoTable = 2;		//Vip还没有坐下
		kNoUser = 3;		//被踢得人不在vip的桌子上
		kErrGameState = 4;	//错误游戏状态，即游戏已经开始
		kDestVip = 5;		//目标也是会员
		kErrSelf = 6;		//目标是自己
		kOther = 7;			//其他原因
		kPlayerNotFound = 8;
		kNoRoom = 9;		//还没进房间
	};
	Flag flag = 1;
}

message EnterRoomFinish
{
	uint32 roomid = 1;		//房间编号
}

message ReqClientTransfer
{
	enum InfoType
	{
		kInvalid = 0;
		kNoticeRefereeOnline = 1000;
	}
	uint32 from_areaid = 1;
	uint32 from_numid = 2;
	uint32 to_areaid = 3;
	uint32 to_numid = 4;
	uint32 info_type = 5;
	sint32 info_len = 6;
	bytes information = 7;
}

message RespClientTransfer
{
	enum Flag
	{
		kSuccess = 0;
		kShowMessage = 1;	//错误消息见msgbox定义
	};
	Flag flag = 1;
	uint32 info_type = 2;
	MsgBox msg_box = 3[packed = false];		//当flag==kShowMessage时候才序列化，否则不序列化
	uint32 error_code = 4;
}

message ReqPlayerPropsData
{
	int32 first = 1;		// 是不是第一次进入房间的请求 是=1 否=0(已经无用)
}

message RespPlayerPropsData
{
	enum Flag
	{
		kSuccess = 0;
		kPlayerNotFound = 1;	//玩家对象不存在
		kTooFrequency = 2;		//请求过于频繁
		kSendFail = 3;
		kTimeOut = 4;
		//从prop返回的flag均在原值基础上加100
	};
	// 以下所有数据均为总量
	Flag flag = 1;				//是否取得成功
	int32 yb = 2;				//元宝
	int32 charm = 3;			//魅力
	int32 contribution = 4;		//贡献
	repeated int32 att = 5;			//属性
	message PropInfo
	{
		int32 props_id = 1;
		int32 props_count = 2;
	}
	repeated PropInfo prop_info = 6;
	message TimePropInfo
	{
		int32 time_props_id = 1;
		uint32 time = 2;
	}
	repeated TimePropInfo time_props_info = 7;
	repeated uint32 time_end = 8;
}

message ReqUseProps
{
	int32 props_id = 1;			//请求使用用户的道具，不规范的Id为请求使用失败
	int32 count = 2;			//count小于1 强制等于1， 再进行计算
	bytes param = 3;
	int32 price_id = 4;			//道具价格ID(无效，不信任)
}

message RespUseProps
{
	enum Flag
	{
		kSuccess = 0;
		kPlayerNotFound = 13;	//玩家对象不存在
		kSendFail = 14;
		kTimeOut = 15;
		kFilterSendFail = 16;	//消息过滤服务发送失败
		kFilterTimeout = 17;	//消息过滤服务发送超时
		kFilterFail = 18;		//消息过滤失败(有敏感词)
		kScoreAboveZero = 30;	//积分清零但分数>=0
	};
	Flag flag = 1;			// 标识
	int32 props_id = 2;		// 使用道具ID
	int32 count = 3;		// 使用道具个数
	int32 use_yb = 4;		// 使用元宝数目
	bytes param = 5;		// 返回参数 就是请求的时候传入的
	uint32 error_code = 6;
}

message HintUseProps
{
	int32 from_areaid = 1;
	int32 from_numid = 2;
	int32 to_areaid = 3;
	int32 to_numid = 4;
	int32 props_id = 5;
	int32 count = 6;
	bytes param = 7;
}

message ReqTransMoney
{
    enum HZType
	{
	    kInvalid = 0;
		kBank2Purse = 1;			//银行到钱包
		kPurse2Bank = 2;			//钱包到银行
	};
	HZType hz_type = 1;
	int32 sr = 2;                   //划账数量
	bytes pwd = 3;
}

message RespTransMoney
{
    enum Flag
	{
		kSuccess = 0;
		kPlayerNotFound = 1;
		kNotEnough = 2;
		kSendFail = 3;
		kTimeOut = 4;
		kError = 5;
		kGaming = 6;
	};
	Flag flag = 1;
	int64 purse = 2;				//钱包当前剩余财富
	int64 bank = 3;					//银行当前剩余财富
	uint32 error_code = 4;
}

message ReqSR
{
	enum Mode
	{
		kInvalid = 0;
	}
	Mode mode = 1;
	int32 areaid = 2;
	int32 numid = 3;
}

message RespSR
{
	enum Flag
	{
		kSuccess = 0;
		kFail = 1;
		kPlayerNotFound = 2;
		kSendFail = 3;
		kTimeOut = 4;
		kError = 5;
		KNotSupport = 20;  // 游戏服务不支持划账
		kServing = 21;// 服务中，即上次请求还在继续中 
		kShouldStand = 22;// 只有站着才可以转账 
	}
	Flag flag = 1;
	int64 purse = 2;			//当前钱包财富
	int64 bank = 3;				//当前银行财富
	bool modify_blank_pwd = 4;	//是否需要改掉空密码
	uint32 error_code = 5;
}

message ReqLeaveRoom
{
	
}

message RespLeaveRoom
{
	enum Flag
	{
		kNormal = 0;
		kKick = 1;
		kPlayerNotFound = 2;
		kNotInRoom = 3;
		kLeaveFail = 4;
	}
	Flag flag = 1;
	uint32 error_code = 2;
}

message CheckAct
{
	sint32 active = 1;
}

message GameReady
{
	int32 main_type = 1;
	int32 sub_type = 2;
}

message ReqClientAward
{
	bytes data = 1;
}

message ReqJoinEmptyTable
{
	int32 askid = 1;
	message OpenInfo
	{
		int32 table_typeid = 1;
		int32 pay_typeid = 2;
		bool open_teahouse = 3;			//是否代开房
		uint32 teahouse_num = 4;		//仅当open_teahouse为真时有效，默认为1
	}
	bytes data = 2;
	uint64 uuidkey = 3;
}

message RespJoinEmptyTable
{
	int32 askid = 1;
	int32 table_id = 2;
	enum Flag
	{
		kSuccess = 0;
		kNotEmptyTable = 1;			// 没有空桌
		//kNotProp = 2;				// 没有时效道具
		//kExpProp = 3;				// 时效道具已失效
		kNoEnouthProp = 4;			// 没有足够普通道具
		kPlayerNotFound = 5;		// 玩家不存在
		kNoTypeid = 6;				// 没有扣除道具类型id
		kErrIntable = 7;			// 玩家已经在桌上
		kNotInRoom = 8;
		kNotPrivateRoom = 9;
		kDoActionFail = 10;
	};
	Flag flag = 3;
	int32 roomid = 4;
	repeated uint32 teahouse_tables = 5;
	int32 uuidkey_areaid = 6;
	int32 uuidkey_numid = 7;
	uint32 error_code = 8;
}

message ReqOwnerKickUser
{
	int32 askid = 1;
	uint32 areaid = 2;		//被踢玩家区号
	uint32 numid = 3;		//被踢玩家数字账号
	bytes msg = 4;			//提示消息
}

message RespOwnerKickUser
{
	int32 askid = 1;
	enum Flag
	{
		kSuccess = 0;
		kNotTable = 1;			//不在桌子上
		kNotOwner = 2;			//玩家不是桌主
		kNoUserInRoom = 3;		//被踢得人不在房间中
		kNoUserInTable = 4;		//被踢得人不在桌子上
		kErrGameState = 5;		//错误游戏状态，即游戏已经开始
		kErrSelf = 6;			//目标是自己
		kPlayerNotFound = 7;
		kTargetNotFound = 8;
	};
	Flag flag = 2;
	uint32 error_code = 3;
}

message PlayerConnect
{
	bytes session_id = 1;
	uint32 areaid = 2;
	uint32 numid = 3;
	uint32 roomid = 4;
}

message RespPlayerConnect
{
	enum Flag
	{
		kSuccess = 0;
		kErrRoomid = 1;		//错误房间id
		kNoUser = 2;		//没有此用户
		kErrUser = 3;		//用户错误
		kErrStep = 4;		//错误启动步骤
		kErrUuid = 5;		//错误uuid
		kErrState = 6;		//错误用户状态
		kHasTuoGuan = 7;	//用户被强制托管
		kLimited = 8;		//用户被限制
		kErrTableid = 9;
	};
	Flag flag = 1;
	uint32 error_code = 2;
}

message PlayerLeave
{
	//	强退，	托管
	enum Type
	{ 
		kForceLeave = 0;
		kWillLeave = 1;
	};
	Type type = 1;
}

message RespPlayerLeave
{
	enum Flag
	{
		kSuccess = 0;
		kNoUser = 1;			//没有此用户
		kNoEscape = 2;			//游戏中不能逃跑
		kNotInRoom = 3;
		kNotOnTable = 4;
	};
	Flag flag = 1;
	PlayerLeave.Type type = 2;
	uint32 error_code = 3;
}

message RespCheatPlayerCount {
	int32 gameid = 1;
	int32 roomid = 2;
	int32 count = 3;
	bytes data = 4;
}

message PlayerLeaveEx_ToServer
{
	//玩家主动离开, 相当于[CMDT_PLAYERLEAVE]，异常退出
	enum Type
	{
		kForceLeave = 0;		//强制退出游戏
		kExceptionLeave = 1;	//异常退出
		kForceExitRoom = 2;		//强制退出房间
	};
	Type type = 1;
}

message ServerToClientMessage
{
	enum Cmd
	{
		kInvalid = 0;
		kMsgRefereeOnline = 1200;
	}
	message MsgRefereeOnline
	{
		int32 online = 1;
	}
	sint32 cmd_id = 1;				//游戏逻辑内部协议号
	sint32 msg_len = 2;				//message的有效长度
	bytes message = 3;		//游戏逻辑内部协议内容
	int32 askid = 4;				//测试消息速度, client的askid
}

message ClientToServerMessage
{
	sint32 cmd_id = 1;				//游戏逻辑内部协议号
	sint32 msg_len = 2;				//message的有效长度
	bytes message = 3;		//游戏逻辑内部协议内容
	int32 askid = 4;				//测试消息速度, client的askid
}

message ReqModifyGameInfo
{
	int64 jf = 1;
	int32 exp = 2;
}

message RespModifyGameInfo
{
	enum Flag
	{
		kSuccess = 0;
		kNotRobot = 1;
		kPlayerNotFound = 2;
		kSendFail = 3;
		kTimeOut = 4;
		kError = 5;
	}
	Flag flag = 1;
	int64 jf = 2;
	int32 exp = 3;
}

message ReqTeaHouseDissolve
{
	uint32 tableid = 1;
}

message RespTeaHouseDissolve
{
	enum Flag
	{
		kSuccess = 0;
		kNotOwner = 1;		//不是代开者
		kGaming = 2;		//已经开始游戏
	}
	Flag flag = 1;
}

]]