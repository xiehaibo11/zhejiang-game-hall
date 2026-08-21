local TablePlayerBase = import(".TablePlayerBase")
local TablePlayerOpp = class("TablePlayerOpp", require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TablePlayerOpp"))


--用这种方式去通过TablePlayerBase重写TablePlayerBase的接口
local ignore = {}
if type(TablePlayerBase.ignore) == "table" then
    ignore = TablePlayerBase.ignore
end
for k,v in pairs(TablePlayerBase) do
    if not ignore[k] then
        TablePlayerOpp[k] = v
    end
end

function TablePlayerOpp:showXZHuCard(cardValue,dianPaoPos)

    local huCardImg = self:getOppLaydownCard(cardValue)

    if not g_gameGlobal:getIsPlayingGameLog() then 
        self.handCardPanel:addChild(huCardImg, #self.inhandCards)
        
        huCardImg:setPositionX(self.handCardStartPosX-self.newCardPai:getBoundingBox().width*(#self.inhandCards - self.chiPengGangBlock*3) -self.cardNodeConfig.newCardDistance)
        huCardImg:setPositionY(self.handCardStartPosY)

        if dianPaoPos and type(dianPaoPos) == "number" and dianPaoPos >= 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
            self:setHuPlayerFlag(huCardImg, rmPos)
        end
    else 
        self:playLogMoCard(cardValue)
    end 
end 

return TablePlayerOpp