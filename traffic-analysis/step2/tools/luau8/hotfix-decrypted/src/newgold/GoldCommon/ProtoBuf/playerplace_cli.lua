return [[
  //bf33protover='3.4.0.0';
syntax="proto3";
package playerplace_cli;

enum EXYID
{
	kPass = 0;
	kReqPlayerPlace = 1; //ReqPlayerPlace
	kRespPlayerPlace = 2; //RespPlayerPlace
	kReqPlayerCount = 3; //ReqPlayerCount
	kRespPlayerCount = 4; //RespPlayerCount
}

message ReqPlayerPlace
{
	int64 askid = 1;
	int32 gameid = 2;
}

message PlaceData
{
	int32 appid = 1;
	int32 gameid = 2;
	int32 roomid = 3;
}

message RespPlayerPlace
{
	enum Flag
	{
		SUCCESS = 0;
		DBCONNNOTFIND = 1; // 数据库连接ID未找到
		DBERR = 2;
	}
	
	int64 askid = 1;
	Flag flag = 2;
	repeated PlaceData places = 3;
}

message ReqPlayerCount
{
	int64 askid = 1;
	int32 areaid = 2; //nAreaid=0则忽略areaid, 取roomid的所有人数; 否则是取roomid房间中指定areaid账号的人数
	repeated int32 roomid = 3;//一次可以请求多个房间的人数, 但最多不超过10个房间
}

message PlayerCountData
{
	int32 roomid = 1;
	int32 roomcount = 2;
}

message RespPlayerCount
{
	int64 askid = 1;
	repeated PlayerCountData data = 2;
}

]]G