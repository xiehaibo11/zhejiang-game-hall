local tablePlayerBase = import(".TablePlayerBase")
local TablePlayerRight = class("TablePlayerOpp", tablePlayerBase)



function TablePlayerRight:ctor()

    TablePlayerRight.super.ctor(self)

    self.posState = 2


    
end 


-- 相应服务器出牌或要不起反馈操作
function TablePlayerRight:outCardAction(status,outData,handData,lastTableID, isNew)
    -- 刷新出牌数据
    self.pukeData.GParames.lastOutData = outData
    -- 刷新手牌数据
    if type(handData) == "table" then 
        self:updateHandCardUI(handData)
    end 
    -- 刷新出牌数据（若有出牌动画，则播放出牌动画）
    local outType,outValue = self:updateOutCardUI(outData,true)

    -- 播放音效
    if outType > 0 then
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzEffectFileForOperation(outType,self.sex or 0))
        NG.soundManager:playMatchEffect(self.GameAudioParser:getDdzPaiValue(outValue,outType,self.sex or 0))
    end

    if #handData == 1 then
       -- 延时0.5秒报单
    else

    end

    -- 动画

end





















return TablePlayerRight�