local WinLostData = CF.gameClass("WinLostData", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.WinLost.WinLostData")
local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")

function WinLostData:onMsgFanCnt(msgData)
    self._fans[msgData.nSeat] = msgData.Fans
    
    local fanNums = 1
    local fanNames = ""
    local tmpFan = msgData.Fans
    local isQingYiSe = false
    local caiPiaoNum = 0

    for j = 1, #tmpFan do
        local winType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
        if winType == "财飘数标记" then
            caiPiaoNum = tmpFan[j].nCount
        end
    end

    for j = 1, #tmpFan do
        local winType = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID]
        local winNum =  WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID]
        if winType == "清一色" then
            isQingYiSe = true
        end

        if winType == "飘杠" 
        or winType == "杠飘" 
        or winType == "财飘" 
        or winType == "杠暴"  
        or winType == "杠开" then
            fanNums = fanNums*winNum*(2^tmpFan[j].nCount)
            
            if winType == "杠暴" 
            or winType == "杠开"
            or winType == "财飘" then 
                local strNum = {[1] = "", [2] = "双", [3] = "三", [4] = "四", [5] = "五"}
                fanNames = fanNames .. strNum[tmpFan[j].nCount] .. winType .. " "
            elseif winType == "飘杠" 
            or winType == "杠飘" then
                local gangNum = tmpFan[j].nCount - caiPiaoNum
                local strNum = {[1] = "", [2] = "双", [3] = "三", [4] = "四"}
                local strCaiNum = {[2] = "双飘", [3] = "三飘", [4] = "四飘"}
                local strGangNum = {[2] = "双杠", [3] = "三杠", [4] = "四杠", [5] = "五杠"}
                if gangNum > 1 and caiPiaoNum > 1 then 
                    if winType == "飘杠" then
                        fanNames = fanNames .. strCaiNum[caiPiaoNum] .. strGangNum[gangNum] .. " "
                    else
                        fanNames = fanNames .. strCaiNum[gangNum] .. strGangNum[caiPiaoNum] .. " "
                    end
                elseif caiPiaoNum <= 1 then 
                    fanNames = fanNames .. strNum[gangNum] .. winType .. " "
                elseif gangNum <= 1 then 
                    fanNames = fanNames .. strNum[caiPiaoNum] .. winType .. " "
                end
            end
        elseif winType ~= "财飘数标记" then
            fanNums = fanNums*winNum
            fanNames = fanNames .. winType .. " "
        end
    end

    fanNums = (isQingYiSe and fanNums > 20) and 20 or fanNums

    self._fanNums[msgData.nSeat] = fanNums
    self._fanNames[msgData.nSeat] = fanNames

    self:dispatchEvent( { name = self.EVENT_RESULT_EXINFO_CHANGED })
end


return WinLostData