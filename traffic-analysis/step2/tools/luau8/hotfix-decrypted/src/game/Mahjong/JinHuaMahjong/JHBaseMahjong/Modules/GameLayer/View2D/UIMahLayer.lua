local UIMahLayer = CF.gameClass("UIMahLayer", "game.Mahjong.BasicMahjong.Modules.GameLayer.View2D.UIMahLayer")
local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")

function UIMahLayer:ctor(param, rootNode)
	UIMahLayer.super.ctor(self, param, rootNode)
end

function UIMahLayer:getProxyEvents()
	local proxyEvents = UIMahLayer.super.getProxyEvents(self)
	proxyEvents[#proxyEvents+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_QIAO_XIANG", callBack = "onEventQiaoXiang"}
    proxyEvents[#proxyEvents+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_OTHERS_QIAO_XIANG", callBack = "onEventOthersQiaoXiang"}
    return proxyEvents
end

function UIMahLayer:onEventQiaoXiang(event)
    local data = event.data or false
    if self._actionButton5 then
        if data then
            self._actionButton5:loadTextures("action_qiao_xiang.png","action_qiao_xiang.png","",ccui.TextureResType.plistType)
        else
            self._actionButton5:loadTextures("action_hu.png","action_hu.png","",ccui.TextureResType.plistType)
        end
    end
    local localSeat = CF.roomData:getSelfLocalSeat()
    local seat = CF.roomData:localToSeat(localSeat)
    local dfMahs = CF.game:getModule("GameLayer"):getGameData():getHandDfData(seat)
    self:setDfMahs(localSeat,dfMahs)
end

function UIMahLayer:onEventOthersQiaoXiang(event)
    local data = event.data
    if data then
        local actionHuBtn = ccui.Helper:seekWidgetByName(self._actionPanelOther[data.localSeat], "_KW_ACTION_BTN_5")
        if actionHuBtn then
            if data.bQiaoXiang and data.localSeat then
                actionHuBtn:loadTextures("action_qiao_xiang.png","action_qiao_xiang.png","",ccui.TextureResType.plistType)
            else
                actionHuBtn:loadTextures("action_hu.png","action_hu.png","",ccui.TextureResType.plistType)
            end
        end
    end
end

function UIMahLayer:onTouchEventActionButton(send,eventType)
   UIMahLayer.super.onTouchEventActionButton(self, send, eventType)
    if eventType == ccui.TouchEventType.ended then
        CF.game:getModule("GameLayer"):getGameData():setLimitHandMahs(CF.roomData:getSelfSeat(),{})
    end
end

function UIMahLayer:setHandMahs(localSeat, mahs, dfMahID, type, bAni)
    UIMahLayer.super.setHandMahs(self, localSeat, mahs, dfMahID, type, bAni)
    local selfLocalSeat = CF.roomData:getSelfLocalSeat()
    if not dfMahID or localSeat ~= selfLocalSeat then
        return
    end
    self:showQiangXiangDfMah()
end

function UIMahLayer:setDfMahs(localSeat, dfMahID)
    UIMahLayer.super.setDfMahs(self,localSeat, dfMahID)
    local selfLocalSeat = CF.roomData:getSelfLocalSeat()
    if not dfMahID or localSeat ~= selfLocalSeat then
        return
    end
    self:showQiangXiangDfMah()
end

function UIMahLayer:showQiangXiangDfMah()
    local selfLocalSeat = CF.roomData:getSelfLocalSeat()
    local isQiaoXiang =  CF.game:getModule("GameLayer"):getGameData():getqiaoxiang()
    if isQiaoXiang then
        local handArea = self:_getHandArea(selfLocalSeat)
        if handArea ~= nil and handArea._danFangMah then
            local dfMahFromNode = handArea._danFangMah        --如果没找到牌，则从单放的地方开始播动画
            if not dfMahFromNode then return end
            local jokerNode = dfMahFromNode._jokerIcon
            if jokerNode and not tolua.isnull(jokerNode) then
                jokerNode:setVisible(false)
            end
             local faceNode = dfMahFromNode._mahFaceImg
             if faceNode and not tolua.isnull(faceNode) then
                 faceNode:setVisible(false)
             end
            ----- 显示牌背
            local pos = cc.p(dfMahFromNode:getContentSize().width / 2, dfMahFromNode:getContentSize().height / 2)
            local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
			local mahBack = UIMah.new(CF.GameDefine.MAH_TYPE.STAND_FACE_BACKWARD, config)
            dfMahFromNode:addChild(mahBack)
            mahBack:setPosition(pos)
        end
    end
end

function UIMahLayer:onEventShowAction(event)
	UIMahLayer.super.onEventShowAction(self, event)
	local isShow = event.data.isShow
    local actionTypes = event.data.actionTypes
    local seat = CF.roomData:localToSeat(2)
    local gameData = CF.game:getModule("GameLayer"):getGameData()
    local mahAlgorithm = CF.game:getModule("GameLayer"):getMahAlgorithm()
    if isShow and actionTypes and #actionTypes > 0 then
        local jokerData = gameData:getJokerData()
        local insteadData = gameData:getInsteadMahData()
        local handMahs = gameData:getHandMahData(seat)
        local inMah = gameData:getLastPlayMah()
        local danFang = gameData:getHandDfData(seat)
        local actionMahs = {}
        for i = 1, #actionTypes do
            if actionTypes[i] == CF.GameDefine.ACTION.CHOW then
                local combs = mahAlgorithm:findChow(handMahs, inMah, jokerData, insteadData)
                for index1 = 1, #combs do
                    local tempComb = combs[index1]
                    for index2 = 1, #tempComb do
                        if tempComb[index2] ~= inMah then
                            table.insert(actionMahs, tempComb[index2])
                        end
                    end
                end
            elseif actionTypes[i] == CF.GameDefine.ACTION.PONG then
                local combs = mahAlgorithm:findPong(handMahs, inMah)
                if #combs > 0 then
                    table.insert(actionMahs, inMah)
                end
            elseif actionTypes[i] == CF.GameDefine.ACTION.KONG then
                local selfAllCombs = gameData:getAllCombMahData(seat)
                local combs = mahAlgorithm:findExposedKong(handMahs, inMah)
                if #combs > 0 then
                    table.insert(actionMahs, inMah)
                else
                    --暗杠补杠可能有多种情况出现
                    local combsConcealedKong = mahAlgorithm:findConcealedKong(handMahs, danFang)
                    if #combsConcealedKong > 0 then
                        for index = 1, #combsConcealedKong do
                            local tempComb = combsConcealedKong[index]
                            table.insert(actionMahs, tempComb[4])
                        end
                    end
                    local combsFillKong = mahAlgorithm:findFillKong(handMahs, danFang, selfAllCombs)
                    if #combsFillKong > 0 then
                        table.insert(actionMahs, combsFillKong[1][1])
                    end
                end
            end
        end
        if #actionMahs > 0 then
            local showHands = clone(handMahs)
            if danFang then
                table.insert(showHands, danFang)
            end
            for i = #showHands, 1, -1 do
                for j = 1, #actionMahs do
                    if actionMahs[j] == showHands[i] then
                        table.remove(showHands, i)
                        break
                    end
                end
            end
            gameData:setLimitHandMahs(seat,showHands)
        end
    else
        if not gameData:getLimitMahs() then
            gameData:clearLimitHandMahs(seat)
        end
    end
end

return UIMahLayer