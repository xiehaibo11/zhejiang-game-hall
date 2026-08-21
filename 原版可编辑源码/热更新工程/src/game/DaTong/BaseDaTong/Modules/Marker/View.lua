local MarkerView = CF.gameClass("MarkerView", "game.BaseCardGame.Modules.Marker.View")

function MarkerView:ctor(param)
    MarkerView.super.ctor(self,param)
    self:showMarkerIcon(false)
    if self._panelMarkerBtn then
		self._panelMarkerBtn:setVisible(false)
    end
end

function MarkerView:onMakerShowEvent(event)
    self:showMarkerIcon(false)
end

return MarkerView