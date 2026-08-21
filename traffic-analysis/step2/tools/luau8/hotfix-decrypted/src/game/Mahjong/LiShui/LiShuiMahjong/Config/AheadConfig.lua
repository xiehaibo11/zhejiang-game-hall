local AheadConfig = {}

AheadConfig.AHEAD_STATUS = {
    NULL = 0,
    WAITESTART = 1,
    WAITEVOTE = 2,
    SUCCESS = 3,
    TIMEOUT = 4,
    REFUSE = 5,
    PLAYERCHANGE = 6,
}

AheadConfig.AHEAD_TIPS = {
    [1] = "等了这么久了，试试广式2人64张玩法吧",
    [2] = "凑不够人手，广式2人64张玩法快速开局",
}

AheadConfig.AHEAD_RULE = {
    [10] = "广式64张房间规则：4马/另一副牌开马/平胡不可点炮/最后四张包牌/杠开海捞翻倍/缺二色/可以吃牌/2人",
    [13] = "",
}

return AheadConfig?