-- 检查当前渠道是否是特殊渠道,部分UI会和主线版本有所差异
local ChannelTool = { }
local SysTool  = require("app.Tool.SysTool")
--外省渠道包
ChannelTool.WAISHENG = {30005,30007,30063,30064,30065,30067,30080,30081,30082,30083,30084,30085,30086,30087,30088,30089,30090}
--浙江包渠道包
ChannelTool.ZJQUDAO = {
    {QUZHOU = {32101,32150}},
    {LISHUI = {32151,32200}},
    {HANGMAQUAN = {32201,32250}},
    {JINHUA = {32251,32300}},
    {TAIZHOU = {32301,32350}},
    {HUZHOU = {32351,32400}},
    {JIAXING = {32401,32450}},
    {NINGBO = {32451,32500}},
    {ZHOUSHAN = {32501,32550}},
    {WENZHOU = {32551,32600}},
    {SHUKE = {32601,32650}}
}
--车载专用渠道
ChannelTool.ECAR = {38500}
--已经外放的渠道分散的单个渠道
ChannelTool.BUYUWANG_SINGLE = {} --捕鱼
ChannelTool.LEGEND_SHAYI = {30076,30077} --老传奇
ChannelTool.LEGEND_KNIFE = {30078,30079} -- 一刀传奇
ChannelTool.BUYUDAJIANGSAI = {30120,30121,30122,30123,30124,30125,30126,30127,30128,30129}

--渠道段
ChannelTool.BUYUWANG_SEGMENT = {{30150,30170},{30070,30075},{30300,30499}}
-- 双扣渠道段
ChannelTool.DOUBLEKOU_GAME = {{32701,32750},{72500,72549},{73100,73149}}
--外省渠道段
ChannelTool.WAISHENG_SEGMENT = {{30500,30699}} 

--SEM渠道
ChannelTool.SEM = {33151}

ChannelTool.H5GameNameList = {
    LEGEND = "LEGEND",
    BUYU = "BUYU",
    KNIFELEGEND = "KNIFELEGEND",
    BUYUDAJIANGSAI = "BUYUDAJIANGSAI",
}

function ChannelTool.checkIsCPSChannel()
    if device.platform ~= "android" and device.platform ~= "windows" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.getBuYuWangChannel()) do
        if v == channelID then
            return true
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_SHAYI) do
        if v == channelID then
            return true
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_KNIFE) do
        if v == channelID then
            return true
        end
    end
    for _,v in pairs(ChannelTool.BUYUDAJIANGSAI) do 
        if v == channelID then 
            return true 
        end 
    end
    for _,v in pairs(ChannelTool.getDoubleKouGameChannel()) do 
        if v == channelID then 
            return true
        end 
    end 
    return false
end

function ChannelTool.checkIsECarChannel()
    if device.platform ~= "android" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    if channelID == 30001 or channelID == 30002 then
        return false
    end
    if channelID == ChannelTool.ECAR[1] then
        return "WENZHOU"
    end
    return false
    -- return true
end

function ChannelTool.checkIsSemChannel()
    if device.platform ~= "android" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.SEM) do
        if v == channelID then
            return true
        end
    end
    return false
end

function ChannelTool.checkIsZJQuDaoChannel()
    if device.platform ~= "android" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    if channelID == 30001 or channelID == 30002 then
        return false
    end
    for _,v in pairs(ChannelTool.ZJQUDAO) do
        for AreaName,QudaoID in pairs(v) do
            if ChannelTool.checkIsAmongNum(channelID,QudaoID) then
                return AreaName
            end
        end
    end
    return false
    -- return true 
end

function ChannelTool.checkIsDoubleKouGame()
    if device.platform ~= "android" and device.platform ~= "windows" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.getDoubleKouGameChannel()) do 
        if v == channelID then 
            return true 
        end 
    end
    return false
end

function ChannelTool.checkIsAmongNum(channelId,TBZJQuDao)
    if channelId and TBZJQuDao and #TBZJQuDao >= 2 then
        if tonumber(channelId) >= tonumber(TBZJQuDao[1]) and tonumber(channelId) <= tonumber(TBZJQuDao[2]) then
            return true
        end
    end
    return false
end

function ChannelTool.checkIsWaishengChannel()
    do return false end
    if device.platform ~= "android" and device.platform ~= "windows" then
        return false
    end
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.getWaiShengChannel()) do
        if v == channelID then
            return true
        end
    end
    return false
    --return true 
end

function ChannelTool.judgeIsChannel()
    if ChannelTool.checkIsWaishengChannel()
    or ChannelTool.checkIsECarChannel() then
        return true
    end
    return false
end

function ChannelTool.getCPSHotupdateImg()
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.getBuYuWangChannel()) do
        if v == channelID then
            return "hall/Image/buyu_king.jpeg"
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_SHAYI) do
        if v == channelID then
            return "hall/Image/old_legend.png"
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_KNIFE) do
        if v == channelID then
            return "hall/Image/knife_legend.jpeg"
        end
    end
    for _,v in pairs(ChannelTool.BUYUDAJIANGSAI) do 
        if v == channelID then 
            return "hall/Image/buyudajiangsai.jpeg"
        end 
    end 
    return ""
end

function ChannelTool.getCpsLoginLobbyID()
    return 900037
end


function ChannelTool.getH5GameName()
    local channelID = ChannelTool.getChannelID()
    for _,v in pairs(ChannelTool.getBuYuWangChannel()) do
        if v == channelID then
            return ChannelTool.H5GameNameList.BUYU
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_SHAYI) do
        if v == channelID then
            return ChannelTool.H5GameNameList.LEGEND
        end
    end
    for _,v in pairs(ChannelTool.LEGEND_KNIFE) do
        if v == channelID then
            return ChannelTool.H5GameNameList.KNIFELEGEND
        end
    end
    for _,v in pairs(ChannelTool.BUYUDAJIANGSAI) do
        if v == channelID then
            return ChannelTool.H5GameNameList.BUYUDAJIANGSAI
        end
    end

    return nil
end

--生成全部的捕鱼渠道
function ChannelTool.getBuYuWangChannel()
    local channel = {}
    --添加单个的渠道
    table.merge(channel,ChannelTool.BUYUWANG_SINGLE)
    --添加渠道段
    for _,v in pairs(ChannelTool.BUYUWANG_SEGMENT) do
        for i = v[1],v[2] do
            table.insert(channel, i)
        end
    end
    return channel
end

--生成全部的双扣渠道
function ChannelTool.getDoubleKouGameChannel()
    local channel = {}
    --添加单个的渠道
    table.merge(channel,ChannelTool.DOUBLEKOU_GAME)
    --添加渠道段
    for _,v in pairs(ChannelTool.DOUBLEKOU_GAME) do
        for i = v[1],v[2] do
            table.insert(channel, i)
        end
    end
    return channel
end

--生成全部的外省渠道
function ChannelTool.getWaiShengChannel()
    local channel = {}
     --添加单个的渠道
     table.merge(channel,ChannelTool.WAISHENG)
     --添加渠道段
     for _,v in pairs(ChannelTool.WAISHENG_SEGMENT) do
         for i = v[1],v[2] do
             table.insert(channel, i)
         end
     end
     return channel
end

function ChannelTool.getChannelID()
    local channelID = tonumber(SysTool:getChannelID())
    local config = require("app.PackageDownload.Config")
    if config.NewChannel2Old[channelID] then
        channelID = config.NewChannel2Old[channelID]
    end
    return channelID
end

return ChannelTool