local WinLostModule = CF.gameClass("WinLostModule", "game.Mahjong.HuZMahjong.BaseHuZMahjong.Modules.WinLost.Module")

WinLostModule.EVENT_SHOW_WIN_ANI = "EVENT_SHOW_WIN_ANI"

function WinLostModule:getSubXYDealList()
    local subXYDealList = WinLostModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = {callback = handler(self,self.onMsgFanCntEx),msgClass = CF.GameProtocol.msgFanCntEx}
    return subXYDealList
end

function WinLostModule:getRuleTianDiSiCai()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "天地胡四财") then
            return string.sub(textSet[i], 16, string.len(textSet[i]))
        end
    end
    return ""
end

function WinLostModule:isRuleQingYiSe()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "清一色") then
            return true
        end
    end
    return false
end

function WinLostModule:isRuleMeiGangDouSuanFen()
    local gameRuleStr = CF.roomData:getGameRule()
    local textSet = string.split(gameRuleStr,"/")
    for i = 1 , #textSet do
        if string.match(textSet[i], "每杠都算分") then
            return true
        end
    end
    return false
end

-- 番数
function WinLostModule:onMsgFanCntEx(msgData)
    local WinLostFanConfig = CF.gameRequire("Config.WinLostFanConfig")
    local fanNums = 0
    local fanNames = ""
    local tmpFan = msgData.Fans
    local flowerCnt = msgData.nFlowerCnt or 0
    for j = 1, #tmpFan do
        local showFanNum = WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount
        fanNums = fanNums + (WinLostFanConfig.KW_WINLOST_FAN_NUMS[tmpFan[j].nFanID] * tmpFan[j].nCount)
        WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] = WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] or ""
                        
        --播放番型动画
        if j == 1 then
            local localSeat = CF.roomData:seatToLocal(msgData.nSeat)
            local fanID = self:dealFanIDForPlaySound(tmpFan, tmpFan[j].nFanID)
            if fanID == 2807 or fanID == 2809 then
                --胡动画
                CF.game:getModule("GameLayer"):showMahAcitonAni(localSeat, CF.GameDefine.POWER.HU)
            else
                self:dispatchEvent({name=self.EVENT_SHOW_WIN_ANI,msg={seat=localSeat,fanID=fanID}})
            end
        end

        --四财神保底另外加上保底分
        if tmpFan[j].nFanID == 2814 or
            tmpFan[j].nFanID == 2815 or
            tmpFan[j].nFanID == 2816 or
            tmpFan[j].nFanID == 2817 then
            if self:getRuleTianDiSiCai() then
                showFanNum = self:getRuleTianDiSiCai()
            end
        --飘杠特殊算分显示
        elseif tmpFan[j].nFanID == 2813 then
            local nFlowerCnt = tmpFan[j].nFlowerCnt
            local nGangCnt = tmpFan[j].nGangCnt
            local nPiaoCnt = tmpFan[j].nPiaoCnt
            if self:isRuleMeiGangDouSuanFen() == true then
                showFanNum = nPiaoCnt * 10 + nFlowerCnt * 5 + nGangCnt * 5
            else
                -- showFanNum = nPiaoCnt * 10 + nGangCnt * 5
                showFanNum = nPiaoCnt * 10 + nFlowerCnt * 5 + nGangCnt * 5
            end
        --无花无财神:11花的时候是5分,15花的时候是10分,23花的时候是20分
        elseif tmpFan[j].nFanID == 2807 then
            if showFanNum ~= 0 then
                if self._ruleFlowerCnt then
                    local fCnt = self:parseFlowerCnt(self._ruleFlowerCnt)
                    if fCnt == 11 then
                        showFanNum = 5
                    elseif fCnt == 15 then
                        showFanNum = 10
                    elseif fCnt == 23 then
                        showFanNum = 20
                    end
                end
            end
        elseif tmpFan[j].nFanID == 2808 then
            if self:isRuleQingYiSe() == false then
                showFanNum = 0
            end
        end
        fanNames = fanNames .. WinLostFanConfig.KW_WINLOST_FAN_TYPE[tmpFan[j].nFanID] .. "(" .. showFanNum .. ") "
    end
    
    --番型名字显示最后加上花分数显示
    if flowerCnt > 0 then
        fanNames = fanNames .. "花(" .. flowerCnt ..")"
    end
    self:getWinLostData():onMsgFanCntEx(msgData,fanNums,fanNames)
    self:getWinLostData():setIsShowFan(false)
end

--处理番型ID
function WinLostModule:dealFanIDForPlaySound(fanTable, fanid)
    if fanTable then
        if #fanTable == 1 then
            --无花无财神没有音效
            if fanid == 2807 then
                return 2800
            end
        elseif #fanTable > 1 then
            if fanid == 2807 then
                return fanTable[2].nFanID
            end
        end
    end

    return fanid
end

-- 小结束
function WinLostModule:onMsgResult(msgData)
    WinLostModule.super.onMsgResult(self,msgData)
    cc.UserDefault:getInstance():setStringForKey("CURRENT_GAME_OPEN_MAH_ANIMATION_SHOW", "")
end

function WinLostModule:isShowHuAni()
    return false
end

return WinLostModule