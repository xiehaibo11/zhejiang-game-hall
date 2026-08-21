local MenuBar = require("lobby.Modules.Lobby.MenuBar.MenuBar")
local VerticalMenuBar = class("VerticalMenuBar", MenuBar)
function VerticalMenuBar:updateIconsPosition()
    local menuCount = #self._allMenuIcons
    if menuCount <= 0 then
        return
    end
    local bgSize = self:getContentSize()
    local minBgHeight = self.EVERY_MIN_DIS * menuCount
    if minBgHeight > bgSize.height then
        local newSize = cc.size(bgSize.width, minBgHeight)
        self:setContentSize(newSize)
        bgSize = newSize
    end
    local averageDis = self:getAverageDis(bgSize.height, menuCount)
    local showCount = 0
    for index, menuIcon in ipairs(self._allMenuIcons) do
        if menuIcon:isVisible() then 
            showCount = showCount + 1
            local height 
            if self._bAddForward then
                height = averageDis * (showCount -1 ) + self._adjustSize.height
            else
                height = bgSize.height -  averageDis * (showCount -1 ) - self._adjustSize.height
            end
            menuIcon:setPosition(cc.p(bgSize.width/ 2 + self._adjustSize.width - self._notchWidth , height))
        end 
    end
end

return VerticalMenuBar