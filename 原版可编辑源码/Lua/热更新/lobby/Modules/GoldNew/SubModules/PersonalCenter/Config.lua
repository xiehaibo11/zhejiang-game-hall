local LocalConfig = import("...Configs.LocalConfig")

local Config = {}

Config.AllHeadFramePropID = {
    150325, 150326, 150327, 150328, 150329, 150141, 150143, 150216, 150234, 150145, 150217, 150144, 150142, 150215, 150330, 150352, 150353, 150668,
    150669, 150673, 150674, 150675, 150679, 150680, 150678, 150690, 150774, 150775, 150776, 150785
}
Config.AvatarURLFormat = "https://palmstatic.imeete.com/Download/avatar/newgold/%d.png"
Config.SupportHeadIDs = {0, 1, 2, 3, 4, 5, 6}
Config.AllAvatar = {
    "https://img1.baidu.com/it/u=4142671647,1106015361&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=800",
    "https://iknow-pic.cdn.bcebos.com/9825bc315c6034a8b67b2f1cd913495408237696",
    "https://img0.baidu.com/it/u=869122028,3710733462&fm=253&fmt=auto&app=120&f=JPEG?w=800&h=800",
    "https://q9.itc.cn/q_70/images03/20250123/ce6a02776a124ca4a4ad433ecc970afd.jpeg",
    "https://img2.baidu.com/it/u=1740216374,2159799761&fm=253&fmt=auto&app=120&f=JPEG?w=500&h=500"
}

Config.SetType = {
    SET_GOLD_NICK = 1, -- 设置昵称
    SET_GOLD_SEX = 2, -- 设置性别
    SET_GOLD_HEAD_IDX = 3 -- 设置头像索引
}
return Config
