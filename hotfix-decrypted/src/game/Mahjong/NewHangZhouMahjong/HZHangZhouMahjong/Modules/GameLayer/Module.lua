local GameModule = CF.gameClass("GameModule", "game.Mahjong.NewHangZhouMahjong.HangZhouMahjongBase.Modules.GameLayer.Module")

GameModule.EVENT_SHOW_AHEAD_BUTTON = "EVENT_SHOW_AHEAD_BUTTON"
GameModule.EVENT_UPDATE_AHEAD_UI = "EVENT_UPDATE_AHEAD_UI"
GameModule.EVENT_CLOSE_AHEAD_UI = "EVENT_CLOSE_AHEAD_UI"
GameModule.EVENT_SHOW_GENZHUANG_SCORE = "EVENT_SHOW_GENZHUANG_SCORE"

function GameModule:getSubXYDealList()
    local subXYDealList = GameModule.super.getSubXYDealList(self)
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgAheadStartInfo), msgClass = CF.GameProtocol.msgAheadStartInfo }
    subXYDealList[#subXYDealList + 1] = { callback = handler(self, self.onMsgGenZhangResult), msgClass = CF.GameProtocol.msgGenZhangResult }
    return subXYDealList
end

-- 提前开局
function GameModule:onMsgAheadStartInfo(msgData)
	if not msgData or not msgData.sCurrentFlag then
		return
	end
    --create by tangligen 避免最后一局重置AheadData
    if msgData.sCurrentNum >= 1 then
        self:getGameData():setAheadData(clone(msgData))
    end
    local state = msgData.sCurrentFlag
    if state == msgData.CFS.aspsAheadStartEnd then
        self:getGameData():onAheadStartEnd()
        CF.game:getModule("Player"):dispatchEvent({ name = "EVENT_INIT_READY_FLAG_UI" })
    elseif state == msgData.CFS.aspsAheadStarting then
        self:dealAheadStarting(msgData)
    elseif state == msgData.CFS.aspsAheadTimeOut then
        self:dealAheadTimeOut(msgData)
    elseif state == msgData.CFS.aspsAheadNo then
        self:dealAheadRefuse(msgData)
    elseif state == msgData.CFS.aspsAheadStartChange then
        self:dealAheadStartChange(msgData)
    end

    local sState = self:getGameData():getAheadState()
    if sState ~= msgData.CFS.aspsAheadStarting then
        self:dispatchEvent( { name = self.EVENT_CLOSE_AHEAD_UI})
    end
    if sState == msgData.CFS.aspsAheadStartWait then
        -- 显示提前开局按钮
        self:dispatchEvent( { name = self.EVENT_SHOW_AHEAD_BUTTON, msg = {isShow = true}})
    else
        self:dispatchEvent( { name = self.EVENT_SHOW_AHEAD_BUTTON, msg = {isShow = false}})
    end
end

function GameModule:dealAheadStarting(msgData)
    local STATUS = {
        DEFAULT = 1, --选择中
        AGREE = 2,      --同意
        REFUSE = 3,     --拒绝
        REQUEST = 4    --请求提前开局
    }
    local localTime = os.time()
    if msgData.lSoSendTime > 0 and math.abs(localTime - msgData.lSoSendTime) > 3 then
        localTime = msgData.lSoSendTime
    end
    local time = msgData.nDuration - (localTime - msgData.lStartTime)
    
    local runningScene = display.getRunningScene()
    if not runningScene:getChildByName("AheadUI") then
        CF.gameRequire("Modules.GameLayer.AheadUI").new({isShowMore = true, requestSeat = msgData.sAheadFirstSeat, time = time }):showSelf()
    end
    
    self:dispatchEvent({ name = self.EVENT_UPDATE_AHEAD_UI, msg = { seat = msgData.sAheadFirstSeat, status = STATUS.REQUEST } })
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        if msgData.sAheadAgreeSeat[i + 1] == msgData.CFS.aspsAheadOk then
            self:dispatchEvent({ name = self.EVENT_UPDATE_AHEAD_UI, msg = { seat = i, status = STATUS.AGREE } })
        else
            self:dispatchEvent({ name = self.EVENT_UPDATE_AHEAD_UI, msg = { seat = i, status = STATUS.DEFAULT } })
        end
    end
end

function GameModule:dealAheadTimeOut(msgData)
    local nameStr = ""
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerdata = CF.roomData:getPlayerDataBySeatId(i)
        if playerdata and msgData.nAheadSeatId[i + 1] ~= 0 and msgData.sAheadAgreeSeat[i + 1] == 0 then
            local nickName = playerdata:getNickName() or ""
            nameStr = nameStr .. "【" .. nickName .. "】"
        end
    end
    
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
    tipPlayer:setText("玩家" .. nameStr .. "未做选择，请稍后申请开局哦!")
    self:getGameData():setAheadState(msgData.CFS.aspsAheadStartWait)
end

function GameModule:dealAheadRefuse(msgData)
    local nameStr = ""
    for i = 0, CF.roomData:getMaxPlayer() - 1 do
        local playerdata = CF.roomData:getPlayerDataBySeatId(i)
        if playerdata and msgData.sAheadAgreeSeat[i + 1] == msgData.CFS.aspsAheadNo then
            local nickName = playerdata:getNickName() or ""
            nameStr = nameStr .. "【" .. nickName .. "】"
        end
    end

    local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
    tipPlayer:setText("玩家" .. nameStr .. "建议再等等其他小伙伴才开局哦!")
    self:getGameData():setAheadState(msgData.CFS.aspsAheadStartWait)
end

function GameModule:dealAheadStartChange(msgData)
    local tipPlayer = CF.TipTool.showPopLayer("TipLayer",{CF.TipLayer.ENUM_TIP_TYPE.TIP_OK})
    tipPlayer:setText("玩家数改变申请失败")

    local num = 0
    for i = 1, #msgData.nAheadSeatId do
        if msgData.nAheadSeatId[i + 1] ~= 0 then
            num = num + 1
        end
    end
    if num ~= CF.roomData:getChairs() then
        self:getGameData():setAheadState(msgData.CFS.aspsAheadStartWait)
    end
end

function GameModule:onMsgPlayTingsEx(msgData)
    if CF.configData:haveTing() == false then
        return
    end
    if CF.settingData:getHaveTing() == false then
        CF.game:getModule("RightBtns"):hideTingBtn()
        return
    end
    local seat = msgData.nSeat
    local count = msgData.nCount
    local data = clone(msgData.tingmahs)

    if count == 0 then
        self:getGameData():clearTingMahs(seat)
    else
        local bIsBaiBanCaishen = self:getGameData():isBaiBanCaishen() -- 是否为白板财神规则
        local bIsYouCaiBiKaoXiang = self:getGameData():isYouCaiBiKaoXiang()-- 是否为有财必拷响
        local finalData = {}
        local tingMahs = {}
        for i = 1, count do
            tingMahs[i] = data[i].from
            finalData[tingMahs[i]] = {}
            for j = 1, #data[i].tmahs do
                local tempTable = {}
                tempTable.huMahID = data[i].tmahs[j].mah
                tempTable.huInfoNum = (data[i].tmahs[j].ft or 0) .. ","
                tempTable.huInfo = "番,"
                table.insert(finalData[tingMahs[i]], tempTable)
            end
            local jokerData = self:getGameData():getJokerData()
            if not bIsYouCaiBiKaoXiang then --不是有财必拷响状态下
                for j = 1, #jokerData do
                    local haveMah = false
                    local haveRenYi = false
                    for k = 1, data[i].nCount do
                        if data[i].tmahs[k] then --报错修复
                            if data[i].tmahs[k].mah == jokerData[j] then
                                haveMah = true
                                break
                            elseif data[i].tmahs[k].mah == 255 then
                                haveRenYi = true
                                break
                            end
                        end
                    end
                    if haveRenYi == false then
                        if haveMah == false then
                            -- local tempTable = {}
                            -- tempTable.huMahID = jokerData[j]
                            -- tempTable.huInfoNum = ""
                            -- tempTable.huInfo = ""
                            -- table.insert(finalData[tingMahs[i]], tempTable)
                        else
                            if not bIsBaiBanCaishen then
                                -- local tempTable = {}
                                -- tempTable.huMahID = CF.GameDefine.MAH_VALUE.FENG_BEI
                                -- tempTable.huInfoNum = ""
                                -- tempTable.huInfo = ""
                                -- table.insert(finalData[tingMahs[i]], tempTable)
                            end
                        end
                    end
                end
            end
        end
        self:getGameData():setCanHuMahsData(seat, finalData)
        self:getGameData():setTingMahs(seat, tingMahs)
    end
end

function GameModule:onMsgGenZhangResult(msgData)
    self:dispatchEvent({ name = self.EVENT_MAHLAYER_SHOW_CHIPS, data = { msgData.score, msgData.score2 } })
    CF.SysTool.performDelayOnce(function()
        if self then
            self:dispatchEvent({ name = self.EVENT_SHOW_GENZHUANG_SCORE, data = msgData })
        end
    end, 1.5)
end

function GameModule:needDelay(xyid, protocol)
    return false, 0, true
end

return GameModule  �"  