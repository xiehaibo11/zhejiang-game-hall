local TablePlayerBase = import(".TablePlayerBase")
local TablePlayerRight = class("TablePlayerRight", require("newgold.MatchGames.subMjGame.MJGamePublic.tablePlayer.TablePlayerRight"))


--用这种方式去通过TablePlayerBase重写TablePlayerBase的接口
local ignore = {}
if type(TablePlayerBase.ignore) == "table" then
    ignore = TablePlayerBase.ignore
end
for k,v in pairs(TablePlayerBase) do
    if not ignore[k] then
        TablePlayerRight[k] = v
    end
end

function TablePlayerRight:showXZHuCard(cardValue,dianPaoPos)

    local huCardImg = self:getRightLaydownCard(cardValue):setAnchorPoint(cc.p(0.5, 0))

    if not g_gameGlobal:getIsPlayingGameLog() then 
        self.handCardPanel:addChild(huCardImg, #self.inhandCards)
        
        local startposY = self:getNewCardPos()
        
        huCardImg:setPositionX(self.handCardStartPosX)
        huCardImg:setPositionY(startposY)

        if dianPaoPos and type(dianPaoPos) == "number" and dianPaoPos >= 0 then
            local rmPos = g_gameGlobal:getTablePlayerPosWithTablePos(dianPaoPos)
            self:setHuPlayerFlag(huCardImg, rmPos)
        end
    else 
        self:playLogMoCard(cardValue)
    end 

end 

return TablePlayerRight