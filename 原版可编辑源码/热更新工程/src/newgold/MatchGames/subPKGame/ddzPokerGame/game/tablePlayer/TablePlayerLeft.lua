local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerLeft = class("TablePlayerMy", tablePlayerBase)


function TablePlayerLeft:ctor()

    TablePlayerLeft.super.ctor(self)

    self.posState = 4


    
end 






-- 相应服务器出牌或要不起反馈操作
function TablePlayerLeft:outCardAction(status,outData,handData,lastTableID, isNew)

    -- 刷新出牌数据
    self.pukeData.GParames.lastOutData = outData

    -- 刷新手牌数据
    if type(handData) == "table" then 
        self:updateHandCardUI(handData)
    end 
    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    local outType,outValue = self:updateOutCardUI(outData,true)

    if outType > 0 then
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzEffectFileForOperation(outType,self.sex or 0))
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzPaiValue(outValue,outType,self.sex or 0))
    end

    -- 动画

end










return TablePlayerLeft