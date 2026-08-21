local MenuBar = require("lobby.Modules.Lobby.MenuBar.MenuBar")
local HorizontalMenuBar = class("HorizontalMenuBar", MenuBar)

function HorizontalMenuBar:updateIconsPosition()
    local menuCount = #self._allMenuIcons
    if menuCount <= 0 then
        return
    end
    local bgSize = self:getContentSize()
    local minBgWidth = self.EVERY_MIN_DIS * menuCount + self._adjustSize.width * 2 + self._notchWidth
    if minBgWidth > bgSize.width then
        local newSize = cc.size(minBgWidth, bgSize.height)
        self:setContentSize(newSize)
        bgSize = newSize
    end
    local averageDis = self:getAverageDis(bgSize.width, menuCount)
    if self._bFull and self._iconSize then
        self:updateIconsPositionFull()
        self:createDivisionImage()
        return
    end
    local showCount = 0
    for _, menuIcon in ipairs(self._allMenuIcons) do
        if menuIcon:isVisible() then 
            showCount = showCount + 1
            local width
            if self._bAddForward then
                width = averageDis * (showCount -1 ) + self._adjustSize.width + self._notchWidth
            else
                width = bgSize.width -  averageDis * (showCount -1 ) - self._adjustSize.width - self._notchWidth
            end
            menuIcon:setPosition(cc.p(width , bgSize.height/ 2 + self._adjustSize.height))
        end 
    end
end

-- 平铺
function HorizontalMenuBar:updateIconsPositionFull()
    local bgSize = self:getContentSize()
    -- icon之间间距
    local iconSpacingX = (bgSize.width - self._iconSize.width * #self._allMenuIcons - self._adjustSize.width * 2 ) / (#self._allMenuIcons - 1)
    for index, menuIcon in ipairs(self._allMenuIcons) do
        local posX = self._adjustSize.width + self._iconSize.width / 2 + self._iconSize.width * ((index - 1) % #self._allMenuIcons) + iconSpacingX * ((index - 1) % #self._allMenuIcons)
        if not self._bAddForward then
            posX = bgSize.width -  posX
        end
        menuIcon:setPosition(cc.p(posX , bgSize.height/ 2 + self._adjustSize.height))
    end
end

function HorizontalMenuBar:createDivisionImage()
    if not self._lineResName or self._lineResName == "" then
        return
    end
    local menuCount = #self._allMenuIcons
    if menuCount <= 1 then
        return
    end
    for _, v in ipairs(self._imgLines or {}) do
        v:removeFromParent()
    end
    self._imgLines = {}
    local bgSize = self:getContentSize()
    local iconSpacingX = (bgSize.width - self._iconSize.width * #self._allMenuIcons - self._adjustSize.width * 2 ) / (#self._allMenuIcons - 1)
    for index = 1, menuCount -1 do
        local width = iconSpacingX * (index - 0.5 ) + self._adjustSize.width + self._iconSize.width * index
        local imageline = ccui.ImageView:create()
        imageline:loadTexture(self._lineResName, ccui.TextureResType.plistType)
        imageline:setPosition(cc.p(width, bgSize.height/ 2))
        self:addChild(imageline)
        table.insert(self._imgLines, imageline)
    end

end

function HorizontalMenuBar:getMenuIconCount()
    return #self._allMenuIcons
end

return HorizontalMenuBary