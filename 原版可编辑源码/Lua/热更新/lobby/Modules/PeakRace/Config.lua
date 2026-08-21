local MatchContributeConfig = {}

-- 排行榜类型
MatchContributeConfig.RankType = {
    COST = 1, ---消耗
    PLAY_COUNT = 2, ---局数
    BIG_WINNER = 3, ---冠军
    SCORE = 4, ---优胜值
    WIN_LOSE = 5, ---胜负
    PEAK_RACE = 6, ---巅峰赛选拔
    WIN_RATE = 7, ---胜率
    TEAM = 8, ---团队
    RENQI = 9, ---队友人气榜
}

--[[
enum RankType {
  BIG_WINNER_CNT = 0;     // 冠军
  JOIN_ROOM_CNT = 1;      // 加入房间数
  INTACT_ROOM_CNT = 2;    // 完整参与房间数
  VALID_ROOM_CNT = 3;     // 有效参与房间数
  TOTAL_SCORE = 4;        // 总积分
  RATE_SCORE = 5;         // 倍率积分
  ACTIVE_PLAYER_CNT = 6;  // 活跃玩家数
  JOIN_ROUND = 7;         // 参与场次
  ALL_ROUND = 8;          // 全部场次
  INTACT_ROUND = 9;       // 完整场次
  CREATE_ROOM_CNT = 10;   // 创建房间数
  Day = 11;               // 日期
  PROP_CNT = 12;          // 耗卡数量
  INTEGRAL = 13;          // 朱雀积分
  LAST_GAME_TIME = 14;    // 最后游戏时间
  ZHANJI = 15;            // 战绩榜
  PERSONAL_INTEGRAL = 16; // 个人积分榜
  GAME_TIME = 17;         // 游戏时间
  HU_CNT = 18;            // 胡牌次数
  WIN_PERCENT = 19;       // 胜率榜
  WIN_LEVEL = 20;         // 胜场级别榜
  LIKE_COUNT = 21;        // 点赞人气榜
}
]]
MatchContributeConfig.TRANSFER_50_RANK = {
    [MatchContributeConfig.RankType.COST] = 12,
    [MatchContributeConfig.RankType.PLAY_COUNT] = 8,
    [MatchContributeConfig.RankType.BIG_WINNER] = 0,
    [MatchContributeConfig.RankType.SCORE] = 4,
    [MatchContributeConfig.RankType.WIN_LOSE] = 4,
    [MatchContributeConfig.RankType.WIN_RATE] = 19,
    [MatchContributeConfig.RankType.RENQI] = 21,
}

MatchContributeConfig.ChooseRankOpt = {
    CHOOSE_RANK_OPT_GET = 0,
    CHOOSE_RANK_OPT_SET = 1,
    CHOOSE_RANK_OPT_GET_LAST = 2,
}

return MatchContributeConfig