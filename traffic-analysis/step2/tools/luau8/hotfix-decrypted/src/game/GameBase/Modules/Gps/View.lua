local GpsView = CF.gameClass("GpsView", CF.ViewBase)

local KW_HEAD_POS = "KW_HEAD_POS"
local KW_TEXT_NAME = "KW_TEXT_NAME"
local KW_TEXT_NUM = "KW_TEXT_NUM"
local KW_IMG_DOING = "KW_IMG_DOING"
local KW_FNT_DIS = "KW_FNT_DIS"
local KW_DEFAULT_HEAD_IMG_NAME = "KW_DEFAULT_HEAD_IMG_NAME"
local aniPath = "res/animation/GameCommon/dingwei_tubiao/dingwei_tubiao.ExportJson"

local KW_IMG_GPS_BG = "res/tex/image/gps_info_bg.png"

function GpsView:ctor()
    GpsView.super.ctor(self)

    self:initBg()
    self:createChildren()
end

function GpsView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/GPSLayer.csb"
end

function GpsView:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_bg", onTouchEnded = "onBtnClose"},
        ["_KW_IMG_BG"] = {varName = "_imgBg"},
        ["_KW_HEAD_INFO_1"] = {varName = "_headRoot_1"},
        ["_KW_HEAD_INFO_2"] = {varName = "_headRoot_2"},
        ["_KW_HEAD_INFO_3"] = {varName = "_headRoot_3"},
        ["_KW_HEAD_INFO_4"] = {varName = "_headRoot_4"},
        ["_KW_LINE_1_2"] = {varName = "_line_1_2"},
        ["_KW_LINE_1_3"] = {varName = "_line_1_3"},
        ["_KW_LINE_1_4"] = {varName = "_line_1_4"},
        ["_KW_LINE_2_3"] = {varName = "_line_2_3"},
        ["_KW_LINE_2_4"] = {varName = "_line_2_4"},
        ["_KW_LINE_3_4"] = {varName = "_line_3_4"}
    }
end

function GpsView:getProxyEvents()
    return {
        {module = CF.roomData, eventKeyName = "EVENT_GPSINFO_CHANGED", callBack = "onUpdateGPSUI"}
    }
end

function GpsView:getAdaptationConfig()
    return {
        {node = self._headRoot_1, bRight = false, bHalf = false},
        {node = self._headRoot_2, bRight = false, bHalf = false},
        {node = self._headRoot_3, bRight = true, bHalf = false},
    }
end

function GpsView:createChildren()
    for i = 0, CF.roomData:getChairs() - 1 do
        self:setPlayersInfo(i)
    end

    self:showLine()
end

function GpsView:initBg()
    if self._imgBg then
        self._imgBg:loadTexture(KW_IMG_GPS_BG, ccui.TextureResType.localType)
    end
end

function GpsView:hideAllLine()
    for i = 1, 3 do
        for j = i + 1, 4 do
            local lineRootName = "_line_" .. i .. "_" .. j
            local lineRoot = self[lineRootName]
            if lineRoot then
                lineRoot:setVisible(false)
            end
        end
    end
end

function GpsView:showLine()
    self:hideAllLine()
    local distances = self:calDistanceByAmapData()

    for _, value in pairs(distances) do
        local startIndex = value["startIndex"]
        local endIndex = value["endIndex"]

        local lineRootName = "_line_" .. startIndex .. "_" .. endIndex
        local lineRoot = self[lineRootName]
        if value["distance"] >= 0 then
            CF.UITool.setText(lineRoot, KW_FNT_DIS, value["distance"] .. "m")
        else
            CF.UITool.setText(lineRoot, KW_FNT_DIS, "")
        end
        lineRoot:setVisible(true)
    end
end

function GpsView:setPlayersInfo(seat)
    if seat and seat >= 0 then
        local localSeat = CF.roomData:seatToLocal(seat)
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        local headNode = self["_headRoot_" .. localSeat]

        if player then
            local url = player:getAvatarUrl()
            local name = player:getNickName()
            local numid = player:getNumberID()

            CF.UITool.setText(headNode, KW_TEXT_NAME, name)
            CF.UITool.setText(headNode, KW_TEXT_NUM, numid)
            self:updateImg(CF.UITool.seekNodeByName(headNode, KW_HEAD_POS), url)
            self:updateHeadFrame(CF.UITool.seekNodeByName(headNode, KW_HEAD_POS), player:getNumberID())
            headNode:setVisible(true)
        else
            headNode:setVisible(false)
        end

        if seat == CF.roomData:getSelfSeat() then
            local posNode = CF.UITool.seekNodeByName(headNode, KW_IMG_DOING)
            CF.UITool.playJsonAnimation(posNode, "dingwei_tubiao", aniPath, -1)
        end
    end
end

function GpsView:updateImg(node, url)
    if not node then
        return
    end

    if url == "" then
        url = "http://thirdwx.qlogo.cn/mmopen/vi_32/RZWHFDljz1SW2Azl6kZyxic4ziaibicnUPo8dB3YiaGbhpyx3Tq34Vemk6KqexyJQJtAphjc9TELicPuRryc0UQ4DPmw/132"
    end

    local headImg = CF.UITool.seekNodeByName(node, KW_DEFAULT_HEAD_IMG_NAME)
    if headImg == nil then
        local size = node:getContentSize()
        headImg =
            CF.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):setName(KW_DEFAULT_HEAD_IMG_NAME):addTo(node)
    end
    headImg:setUrl(url)
end

function GpsView:onUpdateGPSUI(event)
    self:setPlayersInfo(event.msg.seat)
    self:showLine()
end

function GpsView:calDistanceByAmapData()
    local distanceInfoTab = {}
    local playerLocationTable = {}
    for seat = 0, CF.roomData:getMaxPlayer() do
        local localSeat = CF.roomData:seatToLocal(seat)
        local player = CF.roomData:getPlayerDataBySeatId(seat)
        if player then
            local location = player:getGpsInfo() or {longitude = 0, latitude = 0}
            for _, value in ipairs(playerLocationTable) do
                local tmpTab = {}
                local longitude = value["longitude"]
                local latitude = value["latitude"]
                local tmpLocalSeat = value["localSeat"]

                tmpTab["startIndex"] = localSeat < tmpLocalSeat and localSeat or tmpLocalSeat
                tmpTab["endIndex"] = localSeat > tmpLocalSeat and localSeat or tmpLocalSeat
                if location["longitude"] > 0 and location["latitude"] > 0 and longitude > 0 and latitude > 0 then
                    tmpTab["distance"] = math.ceil(CF.SysTool.calLantitudeLongitudeDist(location["longitude"], location["latitude"], longitude, latitude))
                else
                    tmpTab["distance"] = -1
                end
                distanceInfoTab[#distanceInfoTab + 1] = tmpTab
            end

            local tabLen = #playerLocationTable + 1
            playerLocationTable[tabLen] = {}
            playerLocationTable[tabLen]["localSeat"] = localSeat
            playerLocationTable[tabLen]["latitude"] = location["latitude"]
            playerLocationTable[tabLen]["longitude"] = location["longitude"]
        end
    end
    return distanceInfoTab
end

function GpsView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, CF.ZORDER.WINDOW)
end

function GpsView:onBtnClose(send, eventType)
    self:close()
end

function GpsView:updateHeadFrame(node, numid)
    local headFrame = CF.roomData:getHeadFrameData(numid) or {}
    local GameBagUILogic = CF.gameRequire("Modules.GameBag.UILogic")
    GameBagUILogic.showHeadFrame(node, headFrame.frame_url, cc.size(0, 5), cc.size(45, 45), headFrame.propid)
end

return GpsView
�