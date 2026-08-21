--[[
    --废牌堆麻将 全部查看
    author:{xezhihan}
    time:2021-11-29 21:40:04
]]
local UIMahDeadAreaLayer = NG.GAME.gameClass("UIMahDeadAreaLayer", NG.ViewBase)
local UIMahOutArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahOutArea")
local UIMahPlayerOutArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.View2D.UIMahPlayerOutArea")
local UIMahConfigDeadArea = NG.GAME.gameRequire("Modules.GameMain.MahLayer.Config.UIMahConfigDeadArea")
local MahLogic = NG.GAME.gameRequire("Modules.GameMain.MahLayer.MahLogic")
UIMahDeadAreaLayer.ObjName = "UIMahDeadAreaLayer"

function UIMahDeadAreaLayer:ctor(param)
    param = param or {}
    UIMahDeadAreaLayer.super.ctor(self,param)
    self._outMahType = param.type or nil           --摆牌方式
    self._playerDeadMahAreas = {}                  --摆牌方式(四方)
    self._deadMahAreas = nil                       --摆拍方式(非四方)
    self:initView(param)
    self:showSelf()
end

function UIMahDeadAreaLayer:getCSBPath()
    return "cocosStudio/MahjongNew/MahLayer/CSB/OutMahLayer.csb"
end

function UIMahDeadAreaLayer:getBindingInfo()
    return {
        ["_KW_PANEL_BG"] = {varName = "_outMahBg", onTouchEnded = "onBtnClose"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = NG.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_SHOWAREA"] = {varName = "_outMahArea"},
        ["_KW_ADAPT_MAH_"] = { varName = "_KW_ADAPT_MAH_", beginIndex = 1, endIndex = 5},
    }
end

function UIMahDeadAreaLayer:getGameData()
    return NG.goldGame:getModule("GameMain.MahLayer"):getGameData()
end

--根据不同的摆牌方式Type来做处理 
function UIMahDeadAreaLayer:initView(data)
    if data.type == "NOTSIFANG" then 
        self:initNotSiFang(data.localSeat)
    else 
        self:initSiFang(data.localSeat)
    end 
end

--初始化非四方情况
function UIMahDeadAreaLayer:initNotSiFang(localSeat)
    self:showDeadMahArea(localSeat)
    local outMahArea = self._deadMahAreas
    outMahArea:setScale(0.5)
    outMahArea:setAnchorPoint(cc.p(0.5,0.5))
    outMahArea:setPosition(self._KW_ADAPT_MAH_5:getChildByName("KW_OUT_MAH"):getPosition())
    self._KW_ADAPT_MAH_5:addChild(outMahArea)
end

--初始化四方情况
function UIMahDeadAreaLayer:initSiFang(showSeats)
    for _, v in pairs(showSeats) do
        self:showDeadMahArea(v)
    end  
    for seat = 0 , NG.GAME.roomTableData:getChairs() do
        local localSeat = NG.GAME.roomTableData:seatToLocal(seat)
        if self._playerDeadMahAreas[localSeat] then
            local outMahArea = self._playerDeadMahAreas[localSeat]
            local seatRoot = self:getPlayerOutAreaRootNode(localSeat)
            seatRoot:addChild(outMahArea)
        end
    end 
end

--位置处理
local NodeNameArr = {
    OutMah = "KW_OUT_MAH",
    OutMah2 = "KW_OUT_MAH_2",
}

function UIMahDeadAreaLayer:getPlayerOutAreaRootNode(localSeat)
    if self["_KW_ADAPT_MAH_"..localSeat] then
        if NG.GAME.roomTableData:getChairs() == 2 then
            return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.OutMah2)
        else
            return self["_KW_ADAPT_MAH_"..localSeat]:getChildByName(NodeNameArr.OutMah)
        end
    end
    return nil
end

---------------------------------------------------------------
-- 全部出牌区域             --通过localSeat来展示废牌区域
---------------------------------------------------------------
function UIMahDeadAreaLayer:showDeadMahArea(localSeat)
    if not localSeat then
        return
    end
    local seat = NG.GAME.roomTableData:localToSeat(localSeat)
    local outMahs = self:getGameData():getOutMahData(seat)
    self:setAllOutMahs(localSeat, outMahs)
end

--设置废牌区麻将子
function UIMahDeadAreaLayer:setAllOutMahs(localSeat, outMahs)
    local outMahArea = self:getAllOutMahArea(localSeat)
    if not outMahArea then
        return
    end
    outMahArea:setOutMahs(outMahs)
end

--获取废牌区域
function UIMahDeadAreaLayer:getAllOutMahArea(localSeat)
    if self:isOutMahFourDirection() then
        if not MahLogic.checkLocalSeat(localSeat) then
            return nil
        end
        if not self._playerDeadMahAreas[localSeat] then
            local newOutArea = self:_createPlayerDeadArea(localSeat)
            if newOutArea then
                self._playerDeadMahAreas[localSeat] = newOutArea
            end
            return self._playerDeadMahAreas[localSeat]
        end
    else
        if not self._deadMahAreas then
            local newOutArea = self:_createDeadArea(localSeat)
            if newOutArea then
                self._deadMahAreas = newOutArea
            end
            return self._deadMahAreas
        end
    end
end

--判断是否为四方
function UIMahDeadAreaLayer:isOutMahFourDirection()
    if self._outMahType and self._outMahType == "SIFANG" then 
        return true 
    else
        return false
    end
end

--创建四方区域的视图层
function UIMahDeadAreaLayer:_createPlayerDeadArea(localSeat)
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newOutArea = UIMahPlayerOutArea.new(localSeat, config)
    newOutArea:setSingleLineMaxCount(self:_getPlayerDeadAreaSingleLineMaxCount())
    newOutArea:setMaxLineCount(self:_getPlayerDeadAreaMaxLineCount())
    return newOutArea
end

--创建非四方的出牌区域
function UIMahDeadAreaLayer:_createDeadArea()
    local config = NG.goldGame:getModule("GameMain.MahLayer"):getMahAllConfig(nil, true)
    local newOutArea = UIMahOutArea.new(config)
    newOutArea:setMahEmptyCount(self:_getMahEmptyCount())
    newOutArea:setMahSingleLineMaxCount(self:_getMahSingleLineMaxCount())
    return newOutArea
end

function UIMahDeadAreaLayer:_getPlayerDeadAreaSingleLineMaxCount()
    if NG.GAME.roomTableData:getChairs() == 2  then
        return UIMahConfigDeadArea.PlayerOutAreaSingleLineMaxCount.PEOPLE_TWO
    end
    return UIMahConfigDeadArea.PlayerOutAreaSingleLineMaxCount.DEFAULT
end

function UIMahDeadAreaLayer:_getPlayerDeadAreaMaxLineCount()
    if NG.GAME.roomTableData:getChairs() == 2  then
        return UIMahConfigDeadArea.PlayerOutAreaMaxLineCount.PEOPLE_TWO
    end
    if NG.GAME.configData:getHaveFlower() then
        return UIMahConfigDeadArea.PlayerOutAreaMaxLineCount.DEFAULT
    end
    return UIMahConfigDeadArea.PlayerOutAreaMaxLineCount.DEFAULT
end

function UIMahDeadAreaLayer:_getMahEmptyCount()
    return UIMahConfigDeadArea.OutMahsCountConf.EmptyCount
end 

function UIMahDeadAreaLayer:_getMahSingleLineMaxCount()
    return UIMahConfigDeadArea.OutMahsCountConf.SingleLineMaxCount 
end

function UIMahDeadAreaLayer:onBtnClose()
    self:close()
end

function UIMahDeadAreaLayer:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, NG.ZORDER.WINDOW)
    self:setName(UIMahDeadAreaLayer.ObjName)
    return self    
end

return UIMahDeadAreaLayer�