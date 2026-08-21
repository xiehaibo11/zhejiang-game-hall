local PropUseModule = CF.gameClass("PropUseModule", "game.Mahjong.BasicMahjong.Modules.PropUse.Module")
local Shuffle4Config = CF.gameRequire("Modules.Shuffle4.Config")

-- 预洗牌
function PropUseModule:reqPreShuffle(opt, playCount, isInGame)
    if not CF.GameDefine or not CF.roomData then
        return
    end
    if not self:needShowShuffleButton() and opt == CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET then
        CF.roomData._bShuffling = false
        return
    end
    self._reqPlayCount = playCount or CF.roomData:getPlayCount()+1
    if opt == CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET then
        local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
        if shuffleInfo and shuffleInfo.type and shuffleInfo.type == CF.GameDefine.SHUFFLE_SHOW_TYPE.DIAMOND_NOT_ENOUGH then
            CF.roomData._bShuffling = false
            CF.TipTool.showToast("您的道具不足，请进行充值")
            return
        end
    end
    -- 游戏中直接扣卡，预约下一局洗牌
    if opt == CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET then
        if isInGame then
            --洗牌券的道具id
            local propId = CF.gameSub:getShufflePropQuanID()
            local shuffleInfo = self:getShufflePropInfo(propId)
            local shuffleQuanCount = self:getPropCnt(propId)
            if shuffleQuanCount and shuffleQuanCount > 0 then
                self:reqShuffleWithTicketNew()
            else
                self:reqShuffleWithPropNew()
            end
        end
    else
        CF.reqPreShuffle(CF.roomData:getRoomID(), self._reqPlayCount, opt, self, self.onPreShuffle)
    end
end

function PropUseModule:reqShuffleWithTicketNew()
    local propNum = 1
    local propId = CF.gameSub:getShufflePropQuanID()
    self:onDealPlayerShuffleNew(propNum, propId)
end

function PropUseModule:reqShuffleWithPropNew()
    --消耗的道具数量
    local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if not shuffleInfo or not shuffleInfo.cost then
        CF.TipTool.showToast("获取道具信息失败", 2)
        return
    end
    local propNum = shuffleInfo.cost
    local propID = shuffleInfo.propID
    local propTypeName = " 钻石"
    if propID == CF.areaData:getPropRoomCardID() or propID == CF.areaData:getPropBindRoomCardID() then
        propTypeName = " 张房卡"
    end
    local propTypeSting = propNum .. propTypeName
    local finalPropID, finalPropNum = self:getFinalPropAndNum(propID, propNum)

    -- 免费33协议会返回失败
    local module = CF.game:getModule("Shuffle4")
    if finalPropNum == 0 and module and module:isFree() then
        local nType = CF.gameSub:getShuffleType(CF.roomData:getGameID())
        local param = "shuffle=1"
        local gameID = CF.roomData and CF.roomData:getGameID() or 0
        param = param .. ";gameID=" .. gameID
        local tmpParam = ""
        if CF.roomData and CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
            tmpParam = self:getParam(finalPropID, nType) or ""
        end
        param = param .. tmpParam
        local usePropMsg = CF.GameMProtocol.RespUseProps:new()
        usePropMsg.param = param
        usePropMsg.prop_id = finalPropID
        self:onUsePropSuccess(usePropMsg)

        CF.TipTool.clearScrollTip()
        CF.game:getModule("ReadyTip"):showReadyTip()
        module:reqShufflePlan({type = Shuffle4Config.ShuffleOpt.Free})

        --洗牌后发送准备
        if CF.gameSub:isMahjong(CF.roomData:getGameID()) and not self:getIsLocalShuffle() then
            CF.msgManager:sendGameStart()
        end
        return
    end

    self:onDealPlayerShuffleNew(finalPropNum, finalPropID)
end

--处理玩家洗牌操作，支持预洗牌的要先预洗牌
function PropUseModule:onDealPlayerShuffleNew(propNum, propId)
    if not CF.roomData:getbShuffle() and not CF.roomData._bShuffling then
        CF.roomData._bShuffling = true
        local param = "shuffle=1"
        local nType = CF.gameSub:getShuffleType(CF.roomData:getGameID())
        local gameID = CF.roomData and CF.roomData:getGameID() or 0
        param = param .. ";gameID=" .. gameID
        local tmpParam = ""
        if CF.roomData and CF.roomData.isSupportMultiPropShuffle and CF.roomData:isSupportMultiPropShuffle() then
            tmpParam = self:getParam(propId, nType) or ""
        end
        param = param .. tmpParam
        CF.msgManager:sendRequestUseProps(propId, propNum, nType, param)
        CF.TipTool.clearScrollTip()
        CF.game:getModule("ReadyTip"):showReadyTip()
    else
        CF.TipTool.showToast("请勿频繁操作", 2)
    end
end

function PropUseModule:updateShuffleBtn()
    local needShowShuffle = self:needShowShuffleButton()
    local dispatchInfo = {}
    local propID = CF.gameSub:getShufflePropQuanID()
    local shuffleInfo = self:getShufflePropInfo(CF.gameSub:getShufflePropQuanID())
    if not shuffleInfo or not shuffleInfo.propID then
        return
    end
    dispatchInfo.propID = shuffleInfo.propID
    dispatchInfo.cost = shuffleInfo.cost or 100
    self:dispatchEvent({name = self.EVENT_PRESHUFFLE_SHOW, msg = {isShow = needShowShuffle, shuffleInfo = dispatchInfo}})
end

--局中是否显示预约洗牌按钮
function PropUseModule:needShowShuffleButton()
    --回放
    if not CF.roomData then
        return false
    end
    if CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
        return false
    end

    --局数信息
    local playCount = CF.roomData:getPlayCount()
    local maxPlayCount = CF.roomData:getMaxPlayCount()
    if playCount == maxPlayCount or playCount == 0 then
        return false
    end

    --读取配置,是否开启洗牌
    local isShowShuffle = true
    -- 下局是否预洗牌
    if isShowShuffle then
        isShowShuffle = not self:isPreShuffle()
    end
    if isShowShuffle then
        isShowShuffle = not self:isPreCutCard()
    end
    return isShowShuffle
end

function PropUseModule:onRespUseProp(event)
    local usePropMsg = PropUseModule.super.onRespUseProp(self, event)
    --洗牌后发送准备
    if string.match(usePropMsg.param, "shuffle=1") and not self:getIsLocalShuffle() then
        CF.selfPlayerData:flushPlayerDrop()
    end
    return usePropMsg
end

function PropUseModule:onPreShuffle(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if not data or not data.resp or not data.resp.errCode or data.resp.errCode ~= 0 then
            return
        end
        if data.reply and data.reply.userIds and #data.reply.userIds > 0 then
            for _,v in pairs(data.reply.userIds) do
                self._shuffleIds[v] = self._reqPlayCount
            end
        elseif data.reply and data.reply.opt == "OPTS_TYPE_SET" then
            self._shuffleIds[CF.selfPlayerData:getNumberID()] = self._reqPlayCount
            -- 设置之后协议转发给其他玩家
            self:sendPreShuffle(self._reqPlayCount)
            if not CF.roomData:getIsGameStart() then
                CF.roomData._bShuffling = false
                CF.game:getModule("CenterBtns"):onStartGameEvent()
                self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
            end
            self:updateShuffleBtn()
            self:dispatchEvent({name = self.EVENT_PRE_SUCCESS})
        elseif data.reply and data.reply.opt == "OPTS_TYPE_REM" then
            -- 清除的时候，刷新道具数量
            self._shuffleIds[CF.selfPlayerData:getNumberID()] = 0
            self:freezeProp(true)
        elseif data.reply and data.reply.opt == "OPTS_TYPE_DEL" then
            self._shuffleIds = {}
        end
        if data.reply.opt == "OPTS_TYPE_GET" then
            local isPreShuffle = self:isPreShuffle()
            local isPreCutCard = self:isPreCutCard()
            local propID = isPreCutCard and CutCardsDefine.QuanId or CF.gameSub:getShufflePropQuanID()
            local isClear = not isPreShuffle and not isPreCutCard
            if CF.roomData and not CF.roomData:getIsGameStart() then
                if isPreCutCard then
                    self._shuffleIds[CF.selfPlayerData:getNumberID()] = CF.roomData:getPlayCount()+1
                end
                self:dispatchEvent({name = self.EVENT_UPDATE_SHUFFLE_TEXT})
            end
            self:freezeProp(isClear, propID)
            self:updateShuffleBtn()
            self:dispatchEvent({ name = self.EVENT_SHUFFLE_USE_SUCCESS })
        end
    else
        self:shuffleFinished()
        self:freezeProp(true)
        if CF.roomData and not CF.roomData:getIsGameStart() then
            CF.roomData._bShuffling = false
            CF.game:getModule("CenterBtns"):onStartGameEvent()
        end
    end
end

function PropUseModule:onMsgShuffleFinish(msgData)
    PropUseModule.super.onMsgShuffleFinish(self, msgData)
    self:updateShuffleBtn()
end

function PropUseModule:onStartShuffle(event)
    if not event or not event.msg then
        return
    end
    if not event.msg.playCount or event.msg.playCount == 0 or event.msg.maxPlayCount == 0 or not CF.roomData then
        return
    end
    self:updateShuffleBtn()
end

function PropUseModule:playShuffle(usePropMsg)
    self._reqPlayCount = CF.roomData:getPlayCount()+1
    CF.reqPreShuffle(CF.roomData:getRoomID(), self._reqPlayCount, CF.GameDefine.PRE_SHUFFLE_OPT.OPTS_TYPE_SET, self, self.onPreShuffle)
    CF.TipTool.showToast("消耗成功，下一局开始时将会进行洗牌", 2)
    CF.msgManager:sendPlayerShuffle()
end

return PropUseModule  N&  