local HeadNodeConfig = {}

-- 俏皮话位置
HeadNodeConfig.KW_POS_MESSAGE = {
    cc.p(30, 10),
    cc.p(30, 10),
    cc.p(-54, -24),
    cc.p(0, -60),
    cc.p(0, -60)
}

-- 剩余手牌位置
HeadNodeConfig.LEFT_CARD_POS = {
    cc.p(120, 0),
    cc.p(100, 10),
    cc.p(-120, 0),
    cc.p(-100, 0),
    cc.p(-100, 0)
}

-- 未出牌锁的位置
HeadNodeConfig.FIRST_OUT_LOCK_POS = {
    cc.p(70, 20),
    cc.p(40, 50),
    cc.p(20, 20),
    cc.p(20, 20),
    cc.p(20, 20)
}

-- 报警位置
HeadNodeConfig.KW_ARMATURE_WARING_POS = {
    cc.p(100, -100),
    cc.p(100, 10),
    cc.p(-100, -100),
    cc.p(-180, 0),
    cc.p(-180, 0)
}

return HeadNodeConfig