return [[
syntax = "proto3";

package sc.TTIProtols;

option java_package = "com.linyun.base.proto";

message RequestStartGameMsg {
	int32 roomID = 1;
	bool robot = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
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
	int32 MainGamePlayRule = 12;
	repeated int32 MinorGamePlayRuleList = 13;
	int32 clubId = 14;
	string clubName = 15;
	int32 isClubAutoCreated = 16;
	int32 isStartGameAdvance = 17;
	int32 maxHandCardNum = 18;
	int32 enterRoomFlash = 19;
	string headFrame = 20;
	int32 gameLevel = 21;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message SimplePlayer {
	string playerID = 1;
	string playerName = 2;
	int32 headImg = 3;
	string headImgUrl = 4;
	int32 gold = 5;
	int32 tablePos = 6;
	int32 sex = 7;
	int32 playerIndex = 8;
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
	int32 bombNum = 21;
	int32 totalLeftNum = 22;
	int32 totalBeiFuJiNum = 23;
	int32 totalFujiNum = 24;
	int32 totalLostNum = 25;
	int32 zimoCount = 26;
	int32 jiepaoCount = 27;
	int32 huNum = 28;
	int32 huType = 29;
	uint32 huCard = 30;
	int32 youJiaoNum = 31;
	int32 costFlowerNum = 32;
	repeated int32 tableScoreList = 33;
	repeated uint32 huCardList = 34;
	repeated int32 huCardScore = 35;
	repeated int32 downCardScore = 36;
	repeated int32 huInfo = 37;
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
	int32 player0WinLoseEqual = 21;
	int32 player1WinLoseEqual = 22;
	int32 player2WinLoseEqual = 23;
	int32 player3WinLoseEqual = 24;
	int32 player0Win = 25;
	int32 player1Win = 26;
	int32 player2Win = 27;
	int32 player3Win = 28;
	int32 serviceGold = 29;
	int32 OffLinePlayers = 30;
	int32 playerOperationTime = 31;
	int32 isDealerAgain = 32;
	int32 newPlayWay = 33;
	repeated uint32 LaiZiList = 34;
	int32 isLaiZiCouldPutOut = 35;
	int32 isHideHandCards = 36;
	repeated uint32 huaList = 37;
	repeated int32 playersPos = 38;
	repeated int32 playersCardsNum = 39;
	uint32 firstCard = 40;
	int32 isRecover = 41;
	int32 currentOpPlayerPos = 42;
	int32 dizhu = 43;
	int32 absentCardColor = 44;
	int32 myDingQueValue = 45;
	uint32 zhuangMoCard = 46;
	int32 maxHandCardNum = 47;
	int32 secretCard = 48;
	int32 secretPos = 49;
	int32 dice = 50;
	int32 yaPaiQi = 51;
	string headFrame = 52;
	repeated SimplePlayer players = 53;
	int32 test1 = 54;
	int32 jiabeiState = 56;
	int32 p0youNum = 57;
	int32 p1youNum = 58;
	int32 p2youNum = 59;
	int32 p3youNum = 60;
	int32 moCardPlayerIndex = 61;
	repeated PokerRecord allOutCard = 62;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message CardDown {
	int32 type = 1;
	int32 cardValue = 2;
	int32 chuOffset = 3;
	int32 ruleValue = 4;
	int32 yuType = 5;
	int32 colorType = 6;
	int32 gunNum = 7;
	int32 quan = 8;
}

message PokerRecord {
	int32 pos = 1;
	repeated uint32 outCardList = 2;
}



message PlayerOperationNotifyMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 chi_card_value = 3;
	int32 peng_card_value = 4;
	int32 target_card = 5;
	int32 cardLeftNum = 6;
	int32 chi_flag = 7;
	repeated uint32 tingList = 8;
	repeated uint32 leftCards = 9;
	repeated uint32 singleNumList = 10;
	repeated int32 cardFanNumList = 11;
	repeated CardTingInfo promptTingList = 12;
	int32 zhongMaNum = 13;
	int32 opValue = 14;
	repeated int32 operationList = 15;
	int32 lastOpPos = 16;
	repeated uint32 lastPutOutCards = 17;
	int32 isNext = 18;
	int32 isRecover = 19;
	int32 isCouldGetReward = 20;
	repeated int32 keyList = 21;
	repeated int32 valueList = 22;
	int32 dianPaoPos = 23;
	int32 huNum = 24;
	repeated uint32 xueLiuHuCardList = 25;
	repeated string playerList = 26;
	string optStr = 27;
	repeated uint32 bi1List = 28;
	repeated uint32 bi2List = 29;
	repeated CardDown downCards = 30;
	repeated uint32 player0HandCards = 31;
	repeated uint32 player1HandCards = 32;
	repeated uint32 player2HandCards = 33;
	repeated uint32 player3HandCards = 34;
	int64 tipTime = 35;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message CardTingInfo {
	uint32 tingCard = 1;
	repeated uint32 tingList = 2;
	repeated uint32 singleNumList = 3;
	repeated uint32 multipleList = 4;
	repeated int32 cardFanNumList = 5;
}



message PlayerTableOperationMsg {
	int32 operation = 1;
	int32 player_table_pos = 2;
	int32 card_value = 3;
	int32 opValue = 4;
	int32 cardLeftNum = 5;
	int32 chuOffset = 6;
	repeated uint32 handCards = 7;
	repeated uint32 beforeCards = 8;
	repeated CardDown downCards = 9;
	int32 ruleValue = 10;
	repeated int32 operationList = 11;
	repeated uint32 putOutCards = 12;
	repeated int32 playersPos = 13;
	repeated int32 playersCardsNum = 14;
	int32 isNext = 15;
	repeated string playerDescList = 16;
	repeated uint32 zhongTuoCards = 17;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message VipRoomCloseMsg {
	repeated SimplePlayer players = 1;
	repeated int32 paoPos = 2;
	repeated int32 winPos = 3;
	int64 planUid = 4;
	bool isClubRoomPlayerCreated = 5;
	int32 curHandNum = 6;
	int32 supportFlower = 7;
	string showName = 8;
	string clubDeskInfo = 9;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message GameOverForPokerMsgAck {
	int32 roomID = 1;
	repeated SimplePlayer players = 2;
	int32 dealerPos = 3;
	int32 isVipTable = 4;
	int32 readyTime = 5;
	int32 huPos = 6;
	repeated uint32 player0HandCards = 7;
	repeated uint32 player1HandCards = 8;
	repeated uint32 player2HandCards = 9;
	repeated uint32 player3HandCards = 10;
	repeated uint32 player4HandCards = 11;
	repeated uint32 player0PutoutCards = 12;
	repeated uint32 player1PutoutCards = 13;
	repeated uint32 player2PutoutCards = 14;
	repeated uint32 player3PutoutCards = 15;
	repeated uint32 player4PutoutCards = 16;
	repeated uint32 leftCards = 17;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message GameStartForPokerMsg {
	int32 myTablePos = 1;
	repeated uint32 myCards = 2;
	repeated uint32 player0Cards = 3;
	repeated uint32 player1Cards = 4;
	repeated uint32 player2Cards = 5;
	repeated uint32 player3Cards = 6;
	repeated uint32 player4Cards = 7;
	int32 chuCardPlayerIndex = 8;
	int32 dealerPos = 9;
	int32 quanNum = 10;
	int32 allQuanNum = 11;
	int32 serviceGold = 12;
	int32 OffLinePlayers = 13;
	int32 playerOperationTime = 14;
	int32 mainPlayRule = 15;
	repeated uint32 LaiZiList = 16;
	int32 isCouldShowCards = 17;
	repeated int32 playersPos = 18;
	repeated int32 playersCardsNum = 19;
	uint32 firstCard = 20;
	int32 isRecover = 21;
	int32 currentOpPlayerPos = 22;
	int32 dizhu = 23;
	repeated int32 playerGolds = 24;
	repeated int32 bombList = 25;
	repeated int32 rankList = 26;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message EnterVipRoomMsg {
	string tableID = 1;
	string psw = 2;
	int32 roomID = 3;
	repeated int32 minorGamePlayRuleList = 4;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message GameUpdateMsg {
	int32 score = 1;
	string playerName = 2;
	int32 taskDataType = 3;
	int32 taskTouchNum = 4;
	int32 gameMaxCombo = 5;
	int32 maxComboNum = 6;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message NotifyFirstCardEffectMsg {
	int32 operationId = 1;
	int32 tablePos = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message NotifyPlayerOperationMsg {
	int32 operation = 1;
	repeated int32 operationList = 2;
	repeated int32 keyList = 3;
	repeated int32 valueList = 4;
	int32 value = 5;
	int32 playerTablePosition = 6;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message NotifyShangGaMsg {
	int32 minNum = 1;
	int32 maxNum = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message NotifyTableNDaoMsg {
	int32 playerPos = 1;
	int32 chuPlayerPos = 2;
	int32 num = 3;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
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
	int32 gold = 9;
	int32 tablePos = 10;
	int32 sex = 11;
	int32 canFriend = 12;
	string ip = 13;
	int32 gameState = 14;
	int32 enterRoomFlash = 15;
	string headFrame = 16;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message PlayerGameOpertaionMsg {
	int32 opertaionID = 1;
	int32 opValue = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message PlayerGameOverMsg {
	int32 score = 1;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
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
	repeated uint32 player0HandCards = 10;
	repeated uint32 player1HandCards = 11;
	repeated uint32 player2HandCards = 12;
	repeated uint32 player3HandCards = 13;
	repeated CardDown player0DownCards = 14;
	repeated CardDown player1DownCards = 15;
	repeated CardDown player2DownCards = 16;
	repeated CardDown player3DownCards = 17;
	int64 p1Hua = 18;
	int64 p2Hua = 19;
	int64 p3Hua = 20;
	int64 p4Hua = 21;
	int32 huCardP1 = 22;
	int32 huCardP2 = 23;
	int32 huCardP3 = 24;
	int32 huCardP4 = 25;
	int32 maCardP1 = 26;
	int32 maCardP2 = 27;
	int32 maCardP3 = 28;
	int32 maCardP4 = 29;
	int32 zhongMaIndex1 = 30;
	int32 zhongMaIndex2 = 31;
	int32 zhongMaIndex3 = 32;
	int32 zhongMaIndex4 = 33;
	repeated uint32 cards = 34;
	repeated string otherInfos = 35;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message PlayerOperationMsgAck {
	int32 opertion = 1;
	repeated int32 resultValueList = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message PlayerOpertaionMsg {
	int32 opertaionID = 1;
	string account = 2;
	string playerName = 3;
	int32 headIndex = 4;
	int32 sex = 5;
	string oldPassWord = 6;
	string newPassWord = 7;
	int32 canFriend = 8;
	string opStr = 9;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message RecvMsgFromPlayerMsgAck {
	int32 srcPlayerIndex = 1;
	int32 msgType = 2;
	string content = 3;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message SendMsgToPlayersMsg {
	repeated int32 desPlayerIndexList = 1;
	int32 msgType = 2;
	string content = 3;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message ShangGaMsg {
	int32 gaScore = 1;
	int32 tablePos = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message VipRoomCloseMsgs {
	repeated VipRoomCloseMsg vipRoomCloseMsgs = 1;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message SystemNotifyMsg {
	int32 type = 1;
	string content = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message CalculateMsg {
	repeated int32 golds = 1;
	repeated HuObject huObjList = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message HuObject {
	int32 pos = 1;
	uint32 huCard = 2;
	int32 zimo = 3;
	int32 huSort = 4;
}



message GameOverErQiShiMsgAck {
	int32 roomID = 1;
	repeated ErQiShiSimplePlayer playerList = 2;
	int32 dealerPos = 3;
	int32 isVipTable = 4;
	int32 readyTime = 5;
	int32 huCard = 6;
	int32 huPos = 7;
	int32 taiPaoPos = 8;
	int32 huShu = 9;
	int32 handNum = 10;
	int32 vipRule = 11;
	int32 daBanQuanZiFuPos = 12;
	repeated int32 huCardList = 13;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message ErQiShiSimplePlayer {
	string playerID = 1;
	string playerName = 2;
	int32 headImg = 3;
	string headImgUrl = 4;
	int32 tablePos = 5;
	int32 score = 6;
	int32 yufen = 7;
	int32 baYuNum = 8;
	int32 fanYuNum = 9;
	int32 dianYuNum = 10;
	int32 gunNum = 11;
	int32 fanType = 12;
	int32 totalScore = 13;
	repeated uint32 playerHandCards = 14;
}



message PlayerFanCarAckMsg {
	repeated uint32 fanList = 1;
	repeated int32 posList = 2;
	repeated int32 playerIndexList = 3;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message GameOverForZiPaiMsgAck {
	int32 roomID = 1;
	repeated SimplePlayer players = 2;
	int32 dealerPos = 3;
	int32 isVipTable = 4;
	int32 readyTime = 5;
	int32 huCard = 6;
	int32 huPos = 7;
	repeated uint32 player0HandCards = 8;
	repeated uint32 player1HandCards = 9;
	repeated uint32 player2HandCards = 10;
	repeated uint32 player3HandCards = 11;
	repeated CardDown player0DownCards = 12;
	repeated CardDown player1DownCards = 13;
	repeated CardDown player2DownCards = 14;
	repeated CardDown player3DownCards = 15;
	repeated uint32 diCards = 16;
	int32 isNoPlayerHu = 17;
	int32 handNum = 18;
	repeated int32 player0TypeList = 19;
	repeated int32 player1TypeList = 20;
	repeated int32 player2TypeList = 21;
	repeated int32 player3TypeList = 22;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}



message GameOverInfoAck {
	repeated NeijianGameOverDesc inList = 1;
	repeated NeijianGameOverDesc outList = 2;
	int32 msgCMD = 201;
	int64 sessionID = 202;
	string md5Key = 203;
	bool neverCompressedMe = 204;
	bool bProcessed = 205;
	int32 unused0 = 206;
	int32 unused1 = 207;
	int32 unused2 = 208;
	int32 unused3 = 209;
	int32 unused4 = 210;
	int32 unused5 = 211;
	int32 unused6 = 212;
}

message NeijianGameOverDesc {
	string huDesc = 1;
	int32 fanNum = 2;
	int32 score = 3;
	repeated string relationList = 4;
	repeated int32 relationPlayerIds = 5;
	int32 descType = 6;
	int32 luoBoScore = 7;
	int32 gangScore = 8;
}
]]4T  