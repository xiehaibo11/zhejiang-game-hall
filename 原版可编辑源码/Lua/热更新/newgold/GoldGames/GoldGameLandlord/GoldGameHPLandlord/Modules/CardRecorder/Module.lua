local CardRecorderModule = NG.GAME.gameClass("CardRecorderModule", NG.ModuleBase)

CardRecorderModule.EVENT_MARKER_DATA_CHANGE = "EVENT_MARKER_DATA_CHANGE"

function CardRecorderModule:setMarkerData(markerData)
    if markerData == nil then
        return
    end
    self._markerData = markerData

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

function CardRecorderModule:getMarkerData()
    return self._markerData
end

function CardRecorderModule:clearMarkerData()
    self._markerData = {}

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

function CardRecorderModule:deleteMarkerData(outCardIDs)
    for _, cardID in ipairs(outCardIDs) do
        local markerIndex = cardID
        if cardID <= 13 then
            markerIndex = cardID
        elseif cardID > 13 and cardID <= 52 then
            markerIndex = cardID % 13
        elseif cardID == 53 then
            markerIndex = 14
        elseif cardID == 54 then
            markerIndex = 15
        end

        if markerIndex == 0 then
            markerIndex = 13
        end

        if self._markerData[markerIndex] then
            self._markerData[markerIndex] = self._markerData[markerIndex] - 1
        end
    end

    self:dispatchEvent({name = self.EVENT_MARKER_DATA_CHANGE})
end

return CardRecorderModule