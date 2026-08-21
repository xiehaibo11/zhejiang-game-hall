return [[
syntax = "proto3";

package Zeus.lachesis.v1;

//processid = 113

//xyid=5014
message GetCrmNoticeRequest{ // 客户端获取CRM离线消息情况请求
  //租户id
  int32 tenant_id = 1; //租户id
  //地区id
  int32 area_id = 2;
  //玩家id
  int32 user_id = 3;
}

message CommonResp {
  int32 err_code = 1;
  string err_reason = 2;
  int32 ask_id = 3;
}

//xyid=5015
message GetCrmNoticeReply{ // 客户端获取CRM离线消息响应
  // 上次消息的时间戳
  int64 time = 1;
  // 消息数量
  int32 count = 2;
}
]]: