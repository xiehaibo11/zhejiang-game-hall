local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.QuZhouMahjong.QZQuZhouBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onQZMsgFanCnt(msgFanCnt)
    local fanNames = ""
    local tmpFan = msgFanCnt.Fans
    for j = 1, #tmpFan do
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount .. "番 "
    end
    self._qzFanNames[msgFanCnt.nSeat] = fanNames
    self._fanNames[msgFanCnt.nSeat] = fanNames
end

function WinLostData:onMsgResultExtInfo(msgData)
    self._extInfo = {}
	for i = 0, CF.roomData:getChairs() - 1 do
		local infoco = coroutine.create(
			function(info)
				info = coroutine.yield("明杠" .. info .. "分", info > 0)
				info = coroutine.yield("暗杠" .. info * 2 .. "分", info > 0)
				info = coroutine.yield("补杠" .. info .. "分", info > 0)
				info = coroutine.yield("跟牌", info > 0)
				info = coroutine.yield("包屁股", info == 1)
				return "反包", info == 1
			end
		)

		local info = msgData.desc[i]
		local showstr = ""
		for j = 1, string.len(info) do
			local tinfo = tonumber(string.sub(info, j, j))
			local flag, tstr, bShow = coroutine.resume(infoco, tinfo)
			if flag and bShow then
				showstr = showstr .. tstr .. " "
			end
		end
        while (coroutine.resume(infoco, 0)) do end
        self._extInfo[i] = showstr
	end
end

return WinLostDataz