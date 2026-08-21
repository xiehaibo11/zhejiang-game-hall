local SpecialHuGLConfig = CF.gameClass("SpecialHuGLConfig")

SpecialHuGLConfig.HuTypeLevel = setmetatable({
    ["清一色"] = 1,
    ["对对胡"] = 1,
    ["杠开"] = 1,
    ["抢杠胡"] = 1,
    ["四财神"] = 2,
    ["天胡"] = 3,
    ["地胡"] = 3,
}, { __index = function()
    return 0
end })

SpecialHuGLConfig.FntPath = "cocosStudio/MahjongNew/GameLayer/Font/bz_fan-export.fnt"

function SpecialHuGLConfig:getShowFanName(fanName)
    local huTypeLevel = self.HuTypeLevel
    local fans = string.split(fanName, " ")
    local maxFan = 0
    local ansFan = "胡"

    for _, fan in pairs(fans) do
        local fanLevel = huTypeLevel[fan]
        if fanLevel > maxFan then
            ansFan = ""
            maxFan = fanLevel
        end
        if fanLevel == maxFan and maxFan > 0 then
            ansFan = ansFan .. fan
        end
    end

    return ansFan
end

function SpecialHuGLConfig:getImageByFanNames(fanNames)
    local showFanNames = self:getShowFanName(fanNames)
    local fntPath = cc.FileUtils:getInstance():fullPathForFilename(self.FntPath)
    local screenSize = cc.Director:getInstance():getWinSize()
    local renderTexture = cc.RenderTexture:create(screenSize.width * 1.5, screenSize.height * 1.5, cc.TEXTURE2_D_PIXEL_FORMAT_RGB_A8888, gl.DEPTH24_STENCIL8_OES)

    renderTexture:getSprite():setAnchorPoint(cc.p(0.5, 0.5))
    renderTexture:setPosition(cc.p(screenSize.width / 2, screenSize.height / 2))
    renderTexture:setAnchorPoint(cc.p(0.5, 0.5))

    renderTexture:beginWithClear(0, 0, 0, 0)
    local words = cc.Label:createWithBMFont(fntPath, showFanNames)
    words:setPosition(cc.Director:getInstance():convertToGL(cc.p(screenSize.width / 2, screenSize.height / 2)))
    words:visit()
    renderTexture:endToLua()

    local picAni = cc.Sprite:new()
    picAni:setSpriteFrame(renderTexture:getSprite():getSpriteFrame():clone())
    picAni:setAnchorPoint(cc.p(0.5, 0.5))

    return picAni, string.utf8len(showFanNames)
end

return SpecialHuGLConfig