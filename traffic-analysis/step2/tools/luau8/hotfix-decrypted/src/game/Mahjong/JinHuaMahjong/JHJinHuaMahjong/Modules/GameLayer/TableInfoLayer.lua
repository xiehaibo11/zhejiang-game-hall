local TableInfoLayer = CF.gameClass("TableInfoLayer", "game.Mahjong.JinHuaMahjong.JHBaseMahjong.Modules.GameLayer.TableInfoLayer")

--更新信息
function TableInfoLayer:onUpdateRoomInfoEx(event)
    local startdifencnt = CF.roomData:getStartDifenNum() or 0
    local laozhuangcnt = CF.roomData:getLaoZhuangNum() or 0
    self._textRoomInfoEx:setString(string.format("起庄：%d  老庄：%d",startdifencnt,laozhuangcnt))
    self._textRoomInfoEx:setVisible(true)
end

return TableInfoLayer
�