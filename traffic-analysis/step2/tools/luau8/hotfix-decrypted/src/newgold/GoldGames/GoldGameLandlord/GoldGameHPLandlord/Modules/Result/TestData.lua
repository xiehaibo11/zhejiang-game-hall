local TestData = class("TestData")

function TestData:ctor()
end


-- 获取本地座位号
function TestData:seatToLocal(seat)
    if seat == 1 then return 3 end
    if seat == 2 then return 2 end
    if seat == 3 then return 1 end
    return seat
end

-- 获取自己座位号 服务座位号
-- function TestData:getSelfSeat()
--     return 3
-- end

-- 获取玩家信息
function TestData:getPlayerResultByServerSeat(seat)
    return {
        -- shortName = "游客定位12345" .. seat,
        shortName = "1234512345" .. seat,
        sex = 2,
        headUrl = "https://qsupload-1302374507.cos.ap-guangzhou.myqcloud.com/uiauto/shili.png"
    }
end

-- 获取地主本地位置
function TestData:getBankerSeat()
    return self:seatToLocal(1)
end

-- 获取结束协议信息
function TestData:getResult()
    -- RLXY_RESULT 514 data
    -- return {
    --     nWinLost = {9723,-16545,6822},
    --     nResult = {1,2,1},
    --     nMult = {1440,2880,1440},
    -- }
    return {
        nWinLost = {31000, -3000, -1527 },
        nResult = { 1, 2, 2 },
        nMult = { 2880, 1440, 1440 },
    }
end

-- 获取底分
function TestData:getBase()
    -- RLXY_FEE_BASESCORE 640 nBaseScore
    return 15
end

-- 获取破产信息
function TestData:getBroke()
    -- RLXY_BROKE_PLAYER 524 m_Broke
    return {false, true, true }
end

-- 获取封顶信息
function TestData:getCap()
    -- RLXY_BROKE_PLAYER 524 m_BCap
    return {false, false, false }
end




return TestData