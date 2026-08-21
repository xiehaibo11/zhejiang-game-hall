
local super = import(".TablePlayerMy")
local TablePlayerMyWatch = class("TablePlayerMy", super)

local pubWatchMy = require("newgold.MatchGames.subPKGame.PKGamePublic.TablePlayerMyWatchBase")

for k, v in pairs(pubWatchMy) do
    TablePlayerMyWatch[k] = v
end

-- 祖父base
local tableGrandBase = require("newgold.MatchGames.subPKGame.pdkPokerGame.game.tablePlayer.TablePlayerBase")
TablePlayerMyWatch.grandBase = tableGrandBase


-- 相应服务器出牌或要不起反馈操作
function TablePlayerMyWatch:outCardAction(status,outData,handData,lastTableID, isNew,isAward)
    -- 隐藏自己的闹钟
--    self.clockNode:hideClockUI();
    if isNew == true then
        self.publicFunc.delAllChildrenNode(self.outCardNode)
    end
    
    if status == false then  
        return
    end

    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    local outType,outValue = self:updateOutCardUI(outData,true)
    
    if outType > 0 then
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzEffectFileForOperation(outType,self.sex or 0))
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzPaiValue(outValue,outType,self.sex or 0))
    end
    
    -- 更新手牌数据
    self:updateHandCardUI(handData)
end 

return TablePlayerMyWatch