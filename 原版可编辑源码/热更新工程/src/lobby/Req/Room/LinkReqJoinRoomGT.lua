local LinkReqJoinRoomGT = class("LinkReqJoinRoomGT", XH.Req)

function LinkReqJoinRoomGT:ctor()
    LinkReqJoinRoomGT.super.ctor(self)
    self._joinRoomIndex = 0
    self._rooms = {}
    self._linkSRSGroupID = 0
    self._gameID = 0
    self._chairCnt = 4
    self._roomMode = 4
    self._reconnect = false
end

function LinkReqJoinRoomGT:start(gameID,rooms,chairCnt,linkSRSGroupID,timeoutTime, param)
    if LinkReqJoinRoomGT.super.start(self, timeoutTime, linkSRSGroupID) == false then
        return
    end

    self._joinRoomIndex = 0
    self._rooms = rooms
    self._linkSRSGroupID = linkSRSGroupID
    self._gameID = gameID
    self._chairCnt = chairCnt
    param = param or {}
    self._levelInfo = XH.goldConfigManager:getLevelInfo(gameID, param.roomLevel)
    if self._levelInfo then
        if param.checkInRoom ~= nil then
            self._reconnect = not param.checkInRoom
        end
        self._roomMode = self._levelInfo.roommode
        local sr = XH.playerData:getSR()
        if self._roomMode == XH.ROOM_TYPE.GOLD_ROOM_BW and not self._reconnect and self._levelInfo then
            local errMsg = ""
            if self._levelInfo.minrich > sr then
                errMsg = "您金币过低"
            elseif self._levelInfo.maxrich ~= -1 and self._levelInfo.maxrich < sr then
                errMsg = "金币过高"
            end
            if errMsg ~= "" then
                self:setMessage(errMsg)
                self:fail()
                return
            end
        end
    end
    self:reqJoinRoomGT()
end

function LinkReqJoinRoomGT:getSRSGroupID()
    return self._linkSRSGroupID    
end

function LinkReqJoinRoomGT:reqJoinRoomGT()
    self._joinRoomIndex = self._joinRoomIndex + 1
    local ReqJoinRoomGT = require("lobby.Req.Room.ReqJoinRoomGT")
    local reqJoinRoomGT = ReqJoinRoomGT.new()
    reqJoinRoomGT:addReqCallBack(self, self.onReqJoinRoomGT)
    local joinTime = 3
    local leftTime = self:getLeftTime() 
    if leftTime < joinTime then 
        joinTime = leftTime
    end
    reqJoinRoomGT:start(self._rooms[self._joinRoomIndex].roomid,self._rooms[self._joinRoomIndex].appid,self._linkSRSGroupID,joinTime, {levelInfo = self._levelInfo, bReconnect = self._reconnect} )
end


function LinkReqJoinRoomGT:onReqJoinRoomGT(cell, ctype, data)
    local retData = {}
    retData.gameid = self._gameID	
    retData.gameappid = self._rooms[self._joinRoomIndex].appid
    retData.roomid = self._rooms[self._joinRoomIndex].roomid
    retData.srsgroupid = self._linkSRSGroupID    
    retData.roommode = self._roomMode or 4
    retData.reconnect = false
    retData.roomflag =  0
    retData.chaircnt = self._chairCnt
    if ctype == XH.Req.TYPE.SUCCESS then
        data.cellData = retData
        if self._roomMode == XH.ROOM_TYPE.GOLD_ROOM_BW and not self._reconnect then
            self:reqPlayerAct()
        else
            self:success(data)
        end
    elseif ctype == XH.Req.TYPE.FAIL then
        if data.msgRespJoinRoom and data.msgRespJoinRoom.inappID > 0 then 
            data.cellData = retData
            local ReqPlayerPosition = require("lobby.Req.Room.ReqPlayerPosition")
            local reqPlayerPosition = ReqPlayerPosition.new()
            reqPlayerPosition:addReqCallBack(self, self.onReqPlayerPosition)
            reqPlayerPosition:start(--[[self._gameID]]30116,0,0,XH.areaData:getGoldSrsGroupID(),self:getLeftTime())
            --self:fail(data)
        else 
            self:reqLeaveRoom()
            if self._joinRoomIndex + 1> #self._rooms then 
                local errMsg = cell:getMessage()
                if errMsg ~= "" then 
                    self:setMessage(errMsg)
                else 
                    self:setMessage("当前没有合适的房间，请稍后尝试！")
                end
                self:fail(data)
                return
            end
            local scheduleID
            scheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                self:reqJoinRoomGT()
                cc.Director:getInstance():getScheduler():unscheduleScriptEntry(scheduleID)
            end, 0.01, false)
            
        end
    end
end

function LinkReqJoinRoomGT:reqPlayerAct()
    local ReqPlayerAct = require("lobby.Req.Room.ReqPlayerAct")
    local reqPlayerAct = ReqPlayerAct.new()
    reqPlayerAct:addReqCallBack(self, self.onReqPlayerAct)
    reqPlayerAct:start(self._rooms[self._joinRoomIndex].appid,self._linkSRSGroupID,self:getLeftTime())
end

function LinkReqJoinRoomGT:onReqPlayerAct(cell, ctype, data)
    local retData = {}
    retData.gameid = self._gameID	
    retData.gameappid = self._rooms[self._joinRoomIndex].appid
    retData.roomid = self._rooms[self._joinRoomIndex].roomid
    retData.srsgroupid = self._linkSRSGroupID    
    retData.roommode = self._roomMode or 4
    retData.reconnect = false
    retData.roomflag =  0
    retData.chaircnt = self._chairCnt
    data = data or {}
    data.cellData = retData
    if ctype == XH.Req.TYPE.SUCCESS then
        self:success(data)
        --[[if bInAppID then
        param.appID = data.inappid or data.gameappid
        end--]]
        --[[
        self:success()--]]
    elseif ctype == XH.Req.TYPE.FAIL then
        if self._roomMode == XH.ROOM_TYPE.GOLD_ROOM_BW and not self._reconnect then
            local failReason = un.StringUtils.GB_18030_2000_TO_UTF8(data.msgbox.m_szText)
            self:setMessage(failReason)
            if CF and CF.isInGameScene() and string.match(failReason, "请先离开原来的座位") then
                self:success(data)
            else
                self:reqLeaveRoom()
                self:fail(data)
            end
        else
            self:reqLeaveRoom()
        end
    end
end

function LinkReqJoinRoomGT:reqLeaveRoom()
    local ReqLeaveRoomGT = require("lobby.Req.Room.ReqLeaveRoomGT")
    local reqLeaveRoom = ReqLeaveRoomGT.new()
    --reqLeaveRoom:addReqCallBack(self, self.onReqLeaveRoom)
    reqLeaveRoom:start(self._rooms[self._joinRoomIndex].appid,self._linkSRSGroupID,self:getLeftTime())
end


function LinkReqJoinRoomGT:onReqLeaveRoom(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        self:setMessage(cell:getMessage())
        self:fail(data)
    elseif ctype == XH.Req.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(data)
    end
end

function LinkReqJoinRoomGT:onReqPlayerPosition(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data[1] then 
            data[1].chaircnt = self._chairCnt
        end
        self:fail(data)
    elseif ctype == XH.Req.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(data)
    end
end


return LinkReqJoinRoomGT