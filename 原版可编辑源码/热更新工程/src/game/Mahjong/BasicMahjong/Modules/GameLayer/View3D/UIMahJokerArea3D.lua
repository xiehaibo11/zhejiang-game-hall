local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahSettingValueInterface = CF.gameRequire("Modules.GameLayer.View2D.Interface.UIMahSettingValueInterface")
local UIMahJokerArea = CF.gameClass("UIMahJokerArea")

function UIMahJokerArea:ctor()
    UIMahSettingValueInterface.extend(self)
    self._jokerCountType = 1
    self._jokerMahArray = {}

    self._xMaxCounts = 0
    self._yMaxCounts = 0
    self._isFlower = false
    self._mahNodeScale = 0.4
end

function UIMahJokerArea:init(node)
    self._rootNode = node 
end

function UIMahJokerArea:setIsFlower(isFlower)
    self._isFlower = isFlower or false
end

function UIMahJokerArea:getMahAllConfig()
    local config = {
        combLieType       = 1,  
        handAreaPlaceType = 1,  
        handMahsPlayType  = 1,  
        mahBackColorType  = 3,  
        mahFaceSizeRatio  = 0.72,
        mahFaceType       = 2,  
        mahHeightRatio    = 0.59,
        mahLightType      = 2,  
        mahShapeType      = 2,  
        mahThickRatio     = 0.89,
    }
    return config
end

function UIMahJokerArea:setJokerMahs(mahIDs)
    mahIDs = mahIDs or {}
    if #mahIDs > 1 then
        self._jokerCountType = 2
    end
    local config = self:getMahAllConfig()
    for index = 1,#mahIDs do
        self._jokerMahArray[index] = UIMah.new(CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP, config)
        self._jokerMahArray[index]:setScale(self._mahNodeScale)
        self._jokerMahArray[index]:setMahValue(mahIDs[index])
        self._jokerMahArray[index]:setName(index)
        if mahIDs[index] ~= CF.GameDefine.MAH_VALUE.BACK then
            if self._isFlower then
                self._jokerMahArray[index]:showFlowerIcon(true)
            else
                self._jokerMahArray[index]:showJokerIcon(true)
            end
        end
        self._rootNode:addChild(self._jokerMahArray[index])
    end
    self:arrageOutMahs()
end

function UIMahJokerArea:arrageOutMahs()
    local mahStyleInfo = self:computeOutMahs()
    for index = 1,#self._jokerMahArray do
        local info = mahStyleInfo[index]
        if info then
            local cardSize = self._jokerMahArray[index]:getContentSize()
            self._jokerMahArray[index]:setPositionX(info.x + self._mahNodeScale*cardSize.width/2)
            self._jokerMahArray[index]:setPositionY(info.y + self._mahNodeScale*cardSize.height/2)
            self._jokerMahArray[index]:setLocalZOrder(info.z)
        end
    end
end

function UIMahJokerArea:computeOutMahs()
    local mahInfo = {}
    local config = {
        xImgWidth = 138*self._mahNodeScale,
        yImgHeight = 192*self._mahNodeScale,
        xDistance = 10*self._mahNodeScale,
        yDistance = 6,
    }
    for index = 1,#self._jokerMahArray do
        mahInfo[index] = {}
        mahInfo[index].x = (config.xImgWidth + config.xDistance)*(index - 1) 
        mahInfo[index].y = -config.yImgHeight / 2 
        mahInfo[index].z = index
    end
    return mahInfo
end

function UIMahJokerArea:clearJokerArea()
    for index = 1,#self._jokerMahArray do
        self._jokerMahArray[index]:removeSelf()
        self._jokerMahArray[index] = nil
    end
end

function UIMahJokerArea:_onSetConfig(changedConfig)
    for index = 1,#self._jokerMahArray do
        self._jokerMahArray[index]:setConfig(self._config)
    end
end

return UIMahJokerArea