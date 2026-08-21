return [[
syntax = "proto3";

package ah.TTIProtols;

option java_package = "com.linyun.base.proto";

message PokerRecord {
	int32 pos = 1;
	repeated uint32 outCardList = 2;
}

message GameStartMsg {
	int32 myTablePos = 1;
	repeated uint32 mycards = 2;
	repeated uint32 player0Cards = 3;
	repeated uint32 player1Cards = 4;
	repeated uint32 player2Cards = 5;
	repeated uint32 player3Cards = 6;
	repeated CardDown player0CardsDown = 7;
	repeated CardDown player1CardsDown = 8;
	repeated CardDown player2CardsDown = 9;
	repeated CardDown player3CardsDown = 10;
	int32 chuCardPlayerIndex = 11;
	int32 chuCard = 12;
	int32 dealerPos = 13;
	int32 quanNum = 14;
	int32 baoCard = 15;
	int32 tingPlayers = 16;
	int32 player0Gold = 17;
	int32 player1Gold = 18;
	int32 player2Gold = 19;
	int32 player3Gold = 20;
	int32 serviceGold = 21;
	int32 OffLinePlayers = 22;
	int32 playerOperationTime = 23;
	int32 isDealerAgain = 24;
	int32 newPlayWay = 25;
	int32 player0Win = 26;
	int32 player1Win = 27;
	int32 player2Win = 28;
	int32 player3Win = 29;
	int32 wanfa2 = 30;
	int32 playerFlag = 31;
	int32 playerFlag1 = 32;
	int32 playerFlag2 = 33;
	repeated int32 playersPos = 34;
	repeated int32 playersCardsNum = 35;
	uint32 firstCard = 36;
	int32 isRecover = 37;
	int32 currentOpPlayerPos = 38;
	repeated int32 readTeamPos = 39;
	repeated int32 blueTeamPos = 40;
	repeated uint32 player0CardsValue = 41;
	repeated uint32 player1CardsValue = 42;
	repeated uint32 player2CardsValue = 43;
	repeated uint32 player3CardsValue = 44;
	int32 player0Ming = 45;
	int32 player1Ming = 46;
	int32 player2Ming = 47;
	int32 player3Ming = 48;
	int32 bombNum = 49;
	repeated int32 noCardPos = 50;
	int32 players0XiSorce = 51;
	int32 players1XiSorce = 52;
	int32 players2XiSorce = 53;
	int32 players3XiSorce = 54;
	int32 players0BombSorce = 55;
	int32 players1BombSorce = 56;
	int32 players2BombSorce = 57;
	int32 players3BombSorce = 58;
	int32 readTeamCardValue = 59;
	int32 blueTeamCardValue = 60;
	int32 currCardValue = 61;
	string extJosn = 62;
	repeated int32 xiPaiPlayerIndexs = 63;
	int32 beiCuiPai = 64;
	string wuHuDiFen0 = 65;
	string wuHuDiFen1 = 66;
	string wuHuDiFen2 = 67;
	string wuHuDiFen3 = 68;
	bool bShowTeamPos = 69;
	int32 markCardValue = 70;
	repeated uint32 huaCards = 71;
	int32 jiabeiState = 72;
	repeated PokerRecord allOutCard = 73;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}

message CardDown {
	int32 type = 1;
	int32 cardValue = 2;
	int32 chuOffset = 3;
}



message InGameSorceChangeMsg {
	int32 type = 1;
	int32 value = 2;
	int32 pos = 3;
	int32 players0XiSorce = 4;
	int32 players1XiSorce = 5;
	int32 players2XiSorce = 6;
	int32 players3XiSorce = 7;
	int32 players0BombSorce = 8;
	int32 players1BombSorce = 9;
	int32 players2BombSorce = 10;
	int32 players3BombSorce = 11;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message JinHuanGongMsg {
	int32 playerIndexJin0 = 1;
	int32 cardJin0 = 2;
	int32 playerIndexHuan0 = 3;
	int32 cardHuan0 = 4;
	int32 playerIndexJin1 = 5;
	int32 cardJin1 = 6;
	int32 playerIndexHuan1 = 7;
	int32 cardHuan1 = 8;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message MobileCodeMsgAck {
	int32 result = 1;
	string resultStr = 2;
	int32 time = 3;
	int32 operation = 4;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message NotifyPlayerOperationMsg {
	repeated int32 operationList = 1;
	repeated int32 keyList = 2;
	repeated int32 valueList = 3;
	int32 value = 4;
	int32 playerTablePosition = 5;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerCaiCardsAckMsg {
	repeated uint32 player0Cards = 1;
	repeated uint32 player1Cards = 2;
	repeated uint32 player2Cards = 3;
	repeated uint32 player3Cards = 4;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerGameOpertaionAckMsg {
	string playerID = 1;
	string playerName = 2;
	string targetPlayerName = 3;
	int32 opertaionID = 4;
	int32 opValue = 5;
	int32 result = 6;
	int32 playerIndex = 7;
	int32 headImg = 8;
	int32 sex = 9;
	int32 gold = 10;
	int32 tablePos = 11;
	string ip = 12;
	string desc = 13;
	int32 isReady = 14;
	int32 enterTime = 15;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerGameOpertaionMsg {
	int32 opertaionID = 1;
	int32 opValue = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerGameOverMsgAck {
	int32 roomID = 1;
	repeated SimplePlayer players = 2;
	int32 dealerPos = 3;
	int32 huCard = 4;
	int32 stage = 5;
	int32 isVipTable = 6;
	int32 readyTime = 7;
	int32 baoCard = 8;
	int32 huPos = 9;
	int32 dianPaoPos = 10;
	int32 jiaoPiao = 11;
	int32 baoPaiPos = 12;
	int32 player0TotalScore = 13;
	int32 player1TotalScore = 14;
	int32 player2TotalScore = 15;
	int32 player3TotalScore = 16;
	int32 tuoDi0 = 17;
	int32 tuoDi1 = 18;
	int32 tuoDi2 = 19;
	int32 tuoDi3 = 20;
	int32 tongDi = 21;
	repeated uint32 player0HandCards = 22;
	repeated uint32 player1HandCards = 23;
	repeated uint32 player2HandCards = 24;
	repeated uint32 player3HandCards = 25;
	repeated CardDown player0DownCards = 26;
	repeated CardDown player1DownCards = 27;
	repeated CardDown player2DownCards = 28;
	repeated CardDown player3DownCards = 29;
	int32 currHandNum = 30;
	int32 liannum = 31;
	repeated int32 vlist = 32;
	int32 isNextHandWashCard = 33;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}

message SimplePlayer {
	string playerID = 1;
	string playerName = 2;
	int32 headImg = 3;
	string headImgUrl = 4;
	int32 sex = 5;
	int32 palyerIndex = 6;
	int32 gold = 7;
	int32 tablePos = 8;
	string desc = 9;
	int32 fan = 10;
	int32 gameResult = 11;
	int32 canFriend = 12;
	int32 inTable = 13;
	int32 zhuangCount = 14;
	int32 winCount = 15;
	int32 dianpaoCount = 16;
	int32 hitHorseCount = 17;
	int32 gangCount = 18;
	string ip = 19;
	int32 gameState = 20;
	int64 maCard = 21;
	int32 zhongMaIndex = 22;
}



message PlayerOperationNotifyMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 chi_card_value = 3;
	int32 peng_card_value = 4;
	int32 target_card = 5;
	int32 cardLeftNum = 6;
	int32 chi_flag = 7;
	int64 ext = 8;
	int64 ext2 = 9;
	repeated uint32 tingList = 10;
	int32 lastOpPos = 11;
	repeated uint32 lastPutOutCards = 12;
	int32 isNext = 13;
	int32 isRecover = 14;
	repeated int32 operationList = 15;
	string extJosn = 16;
	int32 nMoCntAfterTing = 17;
	int32 jinzhaiJiafanInfo = 18;
	int32 jinzhaiJiafanRemainTime = 19;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerOperationNotifyTuoGuanMsg {
	int32 player_table_pos = 1;
	int32 type = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerTableOperationMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 card_value = 3;
	int32 opValue = 4;
	int32 cardLeftNum = 5;
	int32 chuOffset = 6;
	repeated uint32 handCards = 7;
	int32 nMoCntAfterTing = 8;
	int32 putOutCardNum = 9;
	int32 valueDefault = 10;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerTableOperationPkLaiZiMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 card_value = 3;
	int32 opValue = 4;
	int32 cardLeftNum = 5;
	int32 chuOffset = 6;
	repeated uint32 handCards = 7;
	int32 nMoCntAfterTing = 8;
	int32 putOutCardNum = 9;
	int32 valueDefault = 10;
	repeated uint32 putOutCards = 11;
	repeated int32 playersPos = 12;
	repeated int32 playersCardsNum = 13;
	int32 isNext = 14;
	repeated uint32 putOutCardsValue = 15;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message PlayerTableOperationPkMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 card_value = 3;
	int32 opValue = 4;
	int32 cardLeftNum = 5;
	int32 chuOffset = 6;
	repeated uint32 handCards = 7;
	int32 nMoCntAfterTing = 8;
	int32 putOutCardNum = 9;
	int32 valueDefault = 10;
	repeated uint32 putOutCards = 11;
	repeated int32 playersPos = 12;
	repeated int32 playersCardsNum = 13;
	int32 isNext = 14;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message RequestStartGameMsgAck {
	int32 result = 1;
	int32 gold = 2;
	int32 roomID = 3;
	int32 tablePos = 4;
	int32 vipTableID = 5;
	string creatorName = 6;
	string createPlayerID = 7;
	repeated SimplePlayer players = 8;
	int32 newPlayWay = 9;
	int32 totalHand = 10;
	int32 currentHand = 11;
	int32 isReady0 = 12;
	int32 isReady1 = 13;
	int32 isReady2 = 14;
	int32 isReady3 = 15;
	int32 enterTime0 = 16;
	int32 enterTime1 = 17;
	int32 enterTime2 = 18;
	int32 enterTime3 = 19;
	string extJosn = 20;
	int32 curDi = 21;
	int32 reliefUsed = 22;
	int32 reliefLeft = 23;
	int32 roomType = 24;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message ShowGameFuTeamPosAck {
	bool bShow = 1;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message VipRoomCloseMsg {
	repeated SimplePlayer players = 1;
	int32 paoPos = 2;
	int32 winPos = 3;
	int32 roomType = 4;
	repeated int32 player0Pdk = 5;
	repeated int32 player1Pdk = 6;
	repeated int32 player2Pdk = 7;
	repeated int32 player3Pdk = 8;
	int32 shareID = 9;
	int32 faBei = 10;
	int32 currHandNum = 11;
	string tuoGuanJieSan = 12;
	string extJosn = 13;
	repeated int32 player0Sorce = 14;
	repeated int32 player1Sorce = 15;
	repeated int32 player2Sorce = 16;
	repeated int32 player3Sorce = 17;
	int32 serialNum = 18;
	string tableId = 19;
	string clubDeskInfo = 20;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message WuHuBaoJingNotifyMsg {
	int32 pos = 1;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}



message VipRoomCloseMsgs {
	repeated VipRoomCloseMsg vipRoomCloseMsgs = 1;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused_0 = 206;
	int32 unused_1 = 207;
	int32 unused_2 = 208;
	int32 unused_3 = 209;
	int32 unused_4 = 210;
	int32 unused_5 = 211;
}
]] ç6  