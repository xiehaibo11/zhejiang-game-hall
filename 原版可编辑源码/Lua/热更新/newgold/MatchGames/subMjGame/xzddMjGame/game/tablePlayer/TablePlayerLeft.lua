local TablePlayerBase = import(".TablePlayerBase")
local TablePlayerLeft = class("TablePlayerLeft", require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TablePlayerLeft"))


--用这种方式去通过TablePlayerBase重写TablePlayerBase的接口
local ignore = {}
if type(TablePlayerBase.ignore) == "table" then
    ignore = TablePlayerBase.ignore
end
for k,v in pairs(TablePlayerBase) do
    if not ignore[k] then
        TablePlayerLeft[k] = v
    end
end

function TablePlayerLeft:showXZHuCard(cardValue,dianPaoPos)

    self.newCardPai:setVisible(false)

    if not g_gameGlobal:getIsPlayingGameLog() then 
        local huCardImg = self:getLeftLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 1))

        self.handCardPanel:addChild(huCardImg, #self.inhandCards)
        
        local startposY = self:getNewCardPos()
        huCardImg:setPositionX(self.handCardStartPosX)
--        huCardImg:setPositionY(startposY - self.handCardSize.height*(#self.inhandCards - self.chiPengGangBlock*3)-g_gameConstant.OTHER_NEW_CARD_OFFSET)
        huCardImg:setPositionY(startposY)
        
        if dianPaoPos and type(dianPaoPos) == "number" and dianPaoPos >= 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
            self:setHuPlayerFlag(huCardImg, rmPos)
        end
    else     
        self:playLogMoCard(cardValue)
    end 

end 


return TablePlayerLeft