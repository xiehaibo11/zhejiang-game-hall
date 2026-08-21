---------------------------------------------------------
--
-- Description: 游戏大结束
-- Author: hejiafeng
-- Date: 2019-07-24
--
---------------------------------------------------------

local BigWinLostUI = CF.gameClass("BigWinLostUI", "game.GameBase.Modules.BigWinLost.View")

function BigWinLostUI:ctor(param)
    param = param or {}
    BigWinLostUI.super.ctor(self, param)
    self:throwData()
end

function BigWinLostUI:refreshSinglePlayerBattleInfo(seat, param)
    local playerUi = self:getPlayerItem(seat + 1)
    local scores = {}
    table.insert(scores, param.sWinCount[seat] or 0)
    table.insert(scores, param.sBoomCount[seat] or 0)
    table.insert(scores, param.sShutCount[seat] or 0)

    local scoreDes = {}
    table.insert(scoreDes, "赢牌次数")
    table.insert(scoreDes, "炸弹次数")
    table.insert(scoreDes, "关门次数")
    self:setPlayerDesc(playerUi, scores, scoreDes)
    self:setPlayerTotalScore(seat + 1, param.totalScore[seat])
end

function BigWinLostUI:throwData()
    local autoRaise = false
    local isBig = false
    if CF.settingData then
        autoRaise = CF.settingData:getAutoRaise()
        isBig = CF.settingData:getCardBackStyle() == 2
    end
    local page_item_id = "大小牌资源：" .. (isBig and "选择大牌" or "选择小牌")
    local block_item_id = "自动提牌：" .. (autoRaise and "选择自动" or "未选择自动")
    local data = {
        page_item_id = page_item_id,
        block_item_id = block_item_id
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zy24092701, data)
end

return BigWinLostUI
