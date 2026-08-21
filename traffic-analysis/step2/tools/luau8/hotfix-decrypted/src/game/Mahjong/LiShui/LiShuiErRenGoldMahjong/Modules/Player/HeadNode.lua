local PlayerHeadNode = CF.gameClass("PlayerHeadNode", "game.Mahjong.BasicMahjong.Modules.Player.HeadNode")

function PlayerHeadNode:ctor(param)
	PlayerHeadNode.super.ctor(self,param)

	local localSeat = CF.roomData:seatToLocal(self._seatId)
	if localSeat == CF.GameDefine.LOCAL_SEAT.TOP then
		local firePanel = CF.UITool.seekNodeByName(self._goldPanel,"_KW_PANEL_FIRE")
		if firePanel then
			firePanel:setPosition(cc.p(-131,-170))
		end
	end
	CF.UITool.setText(self._goldPanel,"_KW_TEXT_BEISHU","")
end

function PlayerHeadNode:getProxyEvents()
    local proxyList = PlayerHeadNode.super.getProxyEvents(self)
    proxyList[#proxyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_SHOW_SEL_DOUBLE", callBack = "onEventErRenTaskInfoSelDouble"}
    proxyList[#proxyList+1] = {module = CF.game:getModule("GameLayer"), eventKeyName = "EVENT_ER_REN_SHOW_HU_DOUBLE_ANI", callBack = "onMsgErRenShowHuDoubleAni"}
    proxyList[#proxyList+1] = {module = CF.roomData, eventKeyName = "EVENT_CLEAR_TABLE", callBack = "clearTable"}
    return proxyList
end

function PlayerHeadNode:clearTable()
	CF.UITool.setVisible(self._goldPanel,"_KW_TEXT_BEISHU",false)
end

function PlayerHeadNode:onEventErRenTaskInfoSelDouble(event)
    local msg = event.msg
    if not msg then return end
    local msgData = msg.data
    local nCurBase = msgData.nCurBase or 0
    local seat = msgData.seat or 0

    self:setFinshedTask(nCurBase, seat)
end

function PlayerHeadNode:onMsgErRenShowHuDoubleAni(event)
    local msg = event.msg
    if not msg then return end
    local msgData = msg.data
    local nCurBase = msgData.nCurBase or 0
    local seat = msgData.seat or 0
    self:setFinshedTask(nCurBase, seat)
end

--玩家头像显示：任务完成和过胡不胡加倍
function PlayerHeadNode:setFinshedTask(nCurBase, nseat)
	if nseat ~= self._seatId then return end
	CF.UITool.setVisible(self._goldPanel,"_KW_PANEL_FIRE", true)
    CF.UITool.setVisible(self._goldPanel,"_KW_TEXT_BEISHU",true)
	CF.UITool.setText(self._goldPanel,"_KW_TEXT_BEISHU","x" .. tostring(nCurBase))
end

return PlayerHeadNodep