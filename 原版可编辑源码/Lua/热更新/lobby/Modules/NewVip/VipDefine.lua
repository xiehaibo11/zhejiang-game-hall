local VipDefine = { }

VipDefine.RedColor = cc.c3b(197, 79, 96)
VipDefine.YellowColor = cc.c3b(197, 108, 27)

-- VIP状态
VipDefine.VIP_STATE = {
	NOT_ACTIVE = 0,			
	HAS_AWARD = 1,			
	NOT_AWARD = 2,			
}

-- VIP状态
VipDefine.VIP_FLAG = {
	RECOMMEND = "vip_img_recommend.png",
	FIVE_DISCOUNT = "vip_img_five_discount.png",
	SEVEN_DISCOUNT = "vip_img_seven_discount.png",
}

-- VIP剩余时间条件
VipDefine.VIP_LEFT_CONF = {
    [150104] = 3,
    [150103] = 7,
}

-- 续费VIP时间
VipDefine.VIP_RE_VIP = {
    [150104] = "续费+7天",
    [150103] = "续费+30天",
}

-- 一期后台暂不支持，客户端本地配置
VipDefine.VIP_CONF = {
    [150104] = {
        name = "会员周卡",												 -- 名称
        bg = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_db1.png",	-- icon地址
        url = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_hy1.png",	-- icon地址
        textColor = cc.c3b(0x4c, 0x5f, 0xba),
        titleColor = cc.c3b(0x28, 0x3d, 0x6c),
        price = "2500",
        reward = {
            { propid = -1, cnt = 180000, desc = "18万金币"},
        },																-- 一次性奖励
        equityAward = {
            {propid = -1, cnt = 10000, desc = "1万金币"},
        },																-- 每日权益
        rewardTip = "18万金币",	                                         -- 描述
        desc = "连续7天\n每日可领",
        propid = 150104,												-- 道具ID
        timeLimit = 3 * 30 * 86400                                      -- 最多叠加3个月会员
    },
    [150103] = {
        name = "会员月卡",
        bg = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_db4.png",
        url = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_hy2.png",
        textColor = cc.c3b(0x98, 0x44, 0x07),
        titleColor = cc.c3b(0xB0, 0x59, 0x0c),
        price = "9300",
        reward = {
            {propid = -1, cnt = 480000, desc = "48万金币"},
        },
        equityAward = {
            {propid = -1, cnt = 15000, desc = "1.5万金币"},
        },
        rewardTip = "48万金币",
        desc = "连续30天\n每日可领",
        propid = 150103,
        timeLimit = 6 * 30 * 86400                                 
    },
    [150830] = {
        name = "超值月卡",
        bg = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_dbyk.png",
        url = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Icon_yktb.png",
        textColor = cc.c3b(0x6c, 0x4c, 0xad),
        titleColor = cc.c3b(0x62, 0x3b, 0xb4),
        price = "6600",
        reward = {
            {propid = -1, cnt = 300000, desc = "30万金币"},
        },
        equityAward = {
            {propid = -1, cnt = 12000, desc = "1.2万金币"},
        },
        desc = "连续30天\n每日可领",
        propid = 150830,
        rewardTip = "",
        timeLimit = 0,
        adaptSize = true
    },
    [150831] = {
        name = "财神月卡",
        bg = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Img_dbcsyk.png",
        url = "hall/CSB/NewGoldHall/Shop/img/vipShopItem/Icon_ykcs.png",
        textColor = cc.c3b(0x98, 0x44, 0x07),
        titleColor = cc.c3b(0xc0, 0x34, 0x43),
        price = "24900",
        reward = {
            {propid = -1, cnt = 1000000, desc = "100万金币"},
        },
        equityAward = {
            {propid = -1, cnt = 49800, desc = "4.98万金币"},
        },
        desc = "连续30天\n每日可领",
        propid = 150831,
        rewardTip = "",
        timeLimit = 0,
        adaptSize = true
    },
};

VipDefine.PROPID = {
    SUEPR = 150103,
    NORMAL = 150104,
}

return VipDefine