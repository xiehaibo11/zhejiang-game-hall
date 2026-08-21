local UIMah = CF.gameRequire("Modules.GameLayer.View2D.UIMah")
local UIMahSettingValueInterface = CF.gameRequire("Modules.GameLayer.View2D.Interface.UIMahSettingValueInterface")

local UIMahJokerArea = CF.gameClass("UIMahJokerArea", CF.ViewBase)

function UIMahJokerArea:ctor()
    UIMahJokerArea.super.ctor(self)
    UIMahSettingValueInterface.extend(self)
    self._jokerCountType = 1
    self._jokerMahArray = {}
    self._openMahToFlower = {}

    self._xMaxCounts = 0
    self._yMaxCounts = 0
    self._isFlower = false
end

function UIMahJokerArea:init(node)
    self._rootNode = node 
end

function UIMahJokerArea:setIsFlower(isFlower)
    self._isFlower = isFlower or false
end

function UIMahJokerArea:setShowFlowerMah(mahs)
    self._openMahToFlower = mahs
end

function UIMahJokerArea:setJokerMahs(mahIDs)
    mahIDs = mahIDs or {}
    if #mahIDs > 1 then
        self._jokerCountType = 2
    end
    local config = CF.game:getModule("GameLayer"):getMahAllConfig(nil, true)
    for index = 1,#mahIDs do
        self._jokerMahArray[index] = UIMah.new(CF.GameDefine.MAH_TYPE.LIE_FACE_UP_VERTICAL_TOUP, config)
        self._jokerMahArray[index]:setMahValue(mahIDs[index])
        self._jokerMahArray[index]:setName(index)
        if mahIDs[index] ~= CF.GameDefine.MAH_VALUE.BACK then
            local isShowByMah = false
            if self._openMahToFlower then
                for i = 1, #self._openMahToFlower do
                    if self._openMahToFlower[i] == mahIDs[index] then
                        self._jokerMahArray[index]:showFlowerIcon(true)
                        isShowByMah = true
                        break
                    end
                end
            end
            if not isShowByMah then
                if self._isFlower then
                    self._jokerMahArray[index]:showFlowerIcon(true)
                else
                    self._jokerMahArray[index]:showJokerIcon(true)
                end
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
            self._jokerMahArray[index]:setPositionX(info.x + cardSize.width/2)
            self._jokerMahArray[index]:setPositionY(info.y + cardSize.height/2)
            self._jokerMahArray[index]:setLocalZOrder(info.z)
        end
    end
end

function UIMahJokerArea:computeOutMahs()
    local maxMahCounts = #self._jokerMahArray
    local mahInfo = {}
    local config = {
        xImgWidth = 138,
        yImgHeight = 192,
        xDistance = 10,
        yDistance = 6,
    }
    if maxMahCounts == 2 then
        for index = 1,#self._jokerMahArray do
            if index == 1 then
                mahInfo[index] = {}
                mahInfo[index].x = -config.xImgWidth - config.xDistance
                mahInfo[index].y = -config.yImgHeight / 2 
                mahInfo[index].z = index
            elseif index == 2 then
                mahInfo[index] = {}
                mahInfo[index].x = config.xDistance 
                mahInfo[index].y = -config.yImgHeight / 2 
                mahInfo[index].z = index
            end
        end
    elseif maxMahCounts > 2 then
        for index = 1,#self._jokerMahArray do
            if index == 1 then
                mahInfo[index] = {}
                mahInfo[index].x = -config.xImgWidth - config.xDistance
                mahInfo[index].y = config.yDistance 
                mahInfo[index].z = index
            elseif index == 2 then
                mahInfo[index] = {}
                mahInfo[index].x = config.xDistance 
                mahInfo[index].y = config.yDistance 
                mahInfo[index].z = index
            elseif index == 3 then
                mahInfo[index] = {}
                mahInfo[index].x = -config.xImgWidth  - config.xDistance 
                mahInfo[index].y = -config.yImgHeight  - config.yDistance 
                mahInfo[index].z = index
            elseif index == 4 then    
                mahInfo[index] = {}
                mahInfo[index].x = config.xDistance 
                mahInfo[index].y = -config.yImgHeight  - config.yDistance
                mahInfo[index].z = index
            end
        end
    else
        for index = 1,#self._jokerMahArray do
            mahInfo[index] = {}
            mahInfo[index].x = -config.xImgWidth / 2
            mahInfo[index].y = -config.yImgHeight / 2
            mahInfo[index].z = index
        end
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
return UIMahJokerArea|