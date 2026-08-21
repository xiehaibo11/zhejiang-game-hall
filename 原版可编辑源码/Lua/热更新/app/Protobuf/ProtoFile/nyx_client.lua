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
  int32 game_id = 6;
  int32 create_type = 7;
}

message BankruptcyGiftGoods{
  int32 goods_id = 1;
  int32 price = 2;
  int32 gold = 3;
  string remark = 4;
  int64 period = 5;
}

// 获取用户分享类型
// xyid=2428
message GetShareTypeRequest {
  int32 ask_id = 1;
}

// xyid=2429
message GetShareTypeReply {
  CommonResp resp = 1;
  int32 type = 2; // 0:一般用户（新用户/默认值）1:充值用户 2:分享链接被人点过的用户 3:多次分享但分享链接未被点过的用户 4:高活用户
}
]]