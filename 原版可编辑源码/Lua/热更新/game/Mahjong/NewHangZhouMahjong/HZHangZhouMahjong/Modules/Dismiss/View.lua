local DismissView = CF.gameClass("DismissView", "game.GameBase.Modules.Dismiss.View")

local KW_IMG_HEAD_FRAME = "KW_IMG_HEAD_FRAME"
local KW_TEXT_NICK_NAME = "KW_TEXT_NICK_NAME"
local KW_TEXT_STATE = "KW_TEXT_STATE"

local statusChinese = {"选择中...", "同意", "拒绝", "同意"}
local statusColor = {cc.c3b(134, 134, 134), cc.c3b(9, 168, 1), cc.c3b(242, 51, 51), cc.c3b(9, 168, 1)}

function DismissView:initPlayersInfo()
    local players = CF.roomData:getPlayerDatas()
    local playerCount = table.nums(players)
    for index, player in pairs(players) do
        local status = DismissView.Status.DEFAULT
        local seat = player:getSeat()
        local url = player:getAvatarUrl()
        local name = CF.StringTool.cutStringByLength(player:getNickName())
        local tmpPlayerNode = self._playerMod:clone()
        if tmpPlayerNode then
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_NICK_NAME, name)
            CF.UITool.setText(tmpPlayerNode, KW_TEXT_STATE, statusChinese[status])
            CF.UITool.setTextColor(tmpPlayerNode, KW_TEXT_STATE, statusColor[status])
            local headPosNode = CF.UITool.seekNodeByName(tmpPlayerNode, KW_IMG_HEAD_FRAME)
            self:updateImg(headPosNode, url)
            self:updateHeadFrame(headPosNode, player:getNumberID())
            tmpPlayerNode:setPosition(self:calPlayerInfo(index - 1, playerCount)):addTo(self._imgBg)
            self._playersNode[seat] = tmpPlayerNode
        end
    end
end

return DismissView