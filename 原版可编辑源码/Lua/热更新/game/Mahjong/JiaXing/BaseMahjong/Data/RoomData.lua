local RoomData = CF.gameClass("RoomData", "game.Mahjong.BasicMahjong.Data.RoomData")

function RoomData:ctor()
    RoomData.super.ctor(self)
    self._hostSeatId = 0
    if CF.teaHouseManager:isInTeaHouse() then
        self._hostSeatId = -1
    end
    self._tRule  = {}               -- 包房规则

    self._isTaitouhu = false        -- 是否是抬头胡
    self._taitouhuQuanshu = 0       -- 抬头胡圈数

    self._isHuangfan = false        -- 是否开启黄番
    self._bHuangFan = false         -- 计算时是否显示黄番

    self._followSanTan = false      -- 硬自摸三摊选择跟打

    self._isSupportSanTan = false
    self._wuJiangYZM = nil
    self._bWuJiangBuyScore = false
end

function RoomData:setIsWuJiangBuyScore(bWuJiangBuyScore)
    self._bWuJiangBuyScore = bWuJiangBuyScore
end

function RoomData:isWuJiangBuyScore()
    return self._bWuJiangBuyScore
end

--是否是抬头胡
function RoomData:setIsTaiTouHu(isTaiTouHu)
    self._isTaitouhu = isTaiTouHu
end

function RoomData:getIsTaiTouHu()
    return self._isTaitouhu
end

function RoomData:setTaiTouHuQuanShu(taitouhuQuanshu)
    self._taitouhuQuanshu = taitouhuQuanshu
end

function RoomData:getTaiTouHuQuanShu()
    return self._taitouhuQuanshu
end

function RoomData:setFollowSanTan(followSanTan)
    self._followSanTan = followSanTan
end

function RoomData:getFollowSanTan()
    return self._followSanTan
end

function RoomData:setIsSupportSanTan(isSupportSanTan)
    self._isSupportSanTan = isSupportSanTan
end

function RoomData:isSupportSanTan()
    return self._isSupportSanTan
end

--是否是开启黄番功能
function RoomData:setIsOpenHuangFan(isHuangFan)
    self._isHuangfan = isHuangFan
end

function RoomData:getIsOpenHuangFan()
    return self._isHuangfan
end

function RoomData:setWuJiangYZM(wuJiangYZM)
    self._wuJiangYZM = wuJiangYZM
end

function RoomData:getWuJiangYZM()
    return self._wuJiangYZM
end

return RoomData