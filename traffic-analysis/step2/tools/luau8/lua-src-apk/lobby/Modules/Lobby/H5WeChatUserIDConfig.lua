-- ljx add at 2020/06/29
-- xzh add at 2022/4/28 
-- H5WeChatUserIDConfig:WEB处查询只有绍兴有用，其它区可能存在账号注册时间不同,导致的问题
-- H5WeChatAllUserIDConfig:后续根据运营要求慢慢的开放H5WeChatAllUserIDConfig区域配置,ReqH5WeCahtUserID,H5WeChatUserIDConfig可废除

local tab = {
    H5WeChatUserIDConfig = {
        { AID = 7104, Secret = "591a81be6fd6c08695c4ddf5cab32730", AppID = 10026, WindID = 1064, AreaName = "绍兴" },
        { AID = 7107, Secret = "701be166e9811a0da74189e97f41d832", AppID = 10025, WindID = 1049, AreaName = "嘉兴" },
        { AID = 7129, Secret = "4994b2a3a02770bd1faf163567f5d600", AppID = 10029, WindID = 1081, AreaName = "青田" },
        { AID = 7121, Secret = "522fae8082405e7916c9159a1fafabee", AppID = 10031, WindID = 1078, AreaName = "乐清" },
        { AID = 7101, Secret = "b0fc9c86fc1775970825e76b31341ec0", AppID = 10009, WindID = 1100, AreaName = "湖州" },
        { AID = 7126, Secret = "b74e281196f8ed1628114776cc33869d", AppID = 10002, WindID = 1077, AreaName = "瑞安" },
    },
    H5WeChatAllUserIDConfig = {
        { AID = 7127, Secret = "f3ed338505f5b56620284c191f82f714", AppID = 10069, WindID = 1045, AreaName = "温茶" },
        { AID = 7105, Secret = "2685db9c34685c83d16b0101d646989d", AppID = 10003, WindID = 1105, AreaName = "熟客" },
        { AID = 7128, Secret = "63d7041eddeb1355c5ef14c01f3d8bed", AppID = 10008, WindID = 1043, AreaName = "丽水" },
    }

}


-- ConfID
tab.H5WeChatUserIDConfigByConfID = {}
for _, rec in pairs(tab.H5WeChatUserIDConfig) do
    tab.H5WeChatUserIDConfigByConfID[rec.AID] = rec
end

tab.H5WeChatAllUserIDConfigByConfID = {}
for _, rec in pairs(tab.H5WeChatAllUserIDConfig) do
    tab.H5WeChatAllUserIDConfigByConfID[rec.AID] = rec
end


tab.Enum = {
}

return tabI