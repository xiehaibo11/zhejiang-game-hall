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
        url = "vip_img_week.png",									    -- icon地址
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
        url = "vip_img_month.png",
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
};

VipDefine.PROPID = {
    SUEPR = 150103,
    NORMAL = 150104,
}

return VipDefine�