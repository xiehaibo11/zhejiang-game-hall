local ReqJoin50MatchList = class("ReqJoin50MatchList", XH.ReqProtobuf50)
local ReqPlayerPosition50 = require("lobby.Req.Room.ReqPlayerPosition50")
function ReqJoin50MatchList:ctor()
    ReqJoin50MatchList.super.ctor(self)
    self._chairCount = 0
    self._joinSession = 0
    self._joinGameID = 0
    self._isIn50 = false
end

function ReqJoin50MatchList:start(param, timeoutTime)
    if ReqJoin50MatchList.super.start(self, timeoutTime) == false then
        return
    end

    self.ask_id = os.time()
    self._chairCount = param.chairCount
    self._joinSession = param.sessionID
    self._joinGameID = param.gameID
    self._param = param
    if param.isCheckInRoom50 then 
        local reqPlayerPosition50 = ReqPlayerPosition50.new()
        reqPlayerPosition50:addReqCallBack(self, self.onReqPlayerPosition50)
        reqPlayerPosition50:start(30116,0,0,XH.areaData:getGoldSrsGroupID(),self:getLeftTime())
    else 
        self:sendJoin50MatchList(self._param)
    end
    
    -- local data = self:luaDataToProtobufData(protocol)
    -- self:sendProtobuf(self:mergeData(data), handler(self, self.onMsgReceive))
    print("hjqtest 20240819 Join50MatchList Start")
end

function ReqJoin50MatchList:onReqPlayerPosition50(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data[1] then 
            data[1].chaircnt = self._chairCnt
            if data[1].roomid > 0 and data[1].gameappid == 88888888 then 
                self._isIn50 = true
                self:fail(data)
                return 
            end 
        end
        self._isIn50 = false
        self:sendJoin50MatchList(self._param)
    elseif ctype == XH.Req.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(self._inRoomData)
    elseif ctype == XH.Req.TYPE.TIMEOUT then
        self:setMessage(cell:getMessage())
        self:timeout(self._inRoomData)
    end
end

function ReqJoin50MatchList:isIn50()
    return self._isIn50
end

local reqTime = 0
function ReqJoin50MatchList:sendJoin50MatchList(param)
    if socket.gettime() - reqTime <= 1 then
        return
    end
    reqTime = socket.gettime()
    local protocol = {
            tenant_id = XH.areaData:getTenantid(),
            area_id = XH.areaData:getAreaID(),
            game_id = param.gameID,
            session_id = param.sessionID,
            robot = false,
            user_id = XH.playerData:getNumberID(),
            room_id = param.roomID,
            chair_cnt = param.chairCount,
            use_prop_id = param.use_prop_id
        }
    self:sendProtobuf(protocol,XH.PyrrlaProtobuf.PlayerJoinRequest,XH.PyrrlaProtobuf.PlayerJoinReply)
end 

function ReqJoin50MatchList:onMsgReceive(msgData)
    reqTime = 0
    local data = msgData
    if data then
        print("hjqtest 20240819 Join50MatchList Success")
        data.chairCount = self._chairCount
        if data.code == "GOLD_SUCCESS" or data.code == "GOLD_READY_SUCCESS" then 
            self:success(data)
        elseif data.code == "GOLD_QUEUING" then 
            if self._joinSession == data.session_id and self._joinGameID == data.game_id then 
                self:success(data)
            else
                self:setMessage("加入失败，玩家仍在队列中")
                self:fail(data)
            end
        else
            if XH.isEmbeddedApp() and data.code == "GOLD_FAILED" then
                data.code = "GOLD_LOW_LIMIT"
            end
            if data.code == "GOLD_FAILED" then
                self:setMessage("操作失败")
            elseif data.code == "GOLD_LOW_LIMIT" then
                self:setMessage("金币不足！补充金币，再战四方！")
            elseif data.code == "GOLD_GAMING" then
                self:setMessage("加入失败，玩家仍在游戏中")
            elseif data.code == "GOLD_QUEUING" then
                self:setMessage("加入失败，玩家仍在队列中")
            elseif data.code == "GOLD_PARAM_ERROR" then
                self:setMessage("参数错误")
            elseif data.code == "GOLD_GAME_CONFIG_NOT_FOUND" then
                self:setMessage("无法找到游戏配置")
            elseif data.code == "GOLD_OTHERS_GAMING" then
                self:setMessage("您正在参与其他场次游戏")
            elseif data.code == "GOLD_BROKE_TIMES_LIMIT" then
                self:setMessage("破产补助已达上限")
            elseif data.code == "GOLD_BROKE_INTERNAL_LIMIT" then
                self:setMessage("破产补助冷却中")
            elseif data.code == "GOLD_BROKE_SUPPLY" then
                self:setMessage("破产补助已成功发放")
            elseif data.code == "GOLD_READY_ROOM_ALREADY_GAMING" then
                self:setMessage("游戏已经开始")
            elseif data.code == "GOLD_READY_NOT_IN_ROOM" then
                self:setMessage("准备失败，请稍后尝试！")
            else
                self:setMessage("未知错误" .. (data.code or "-1"))
            end
            self:fail(data)
        end 
    else
        self:fail(data)
    end
end


return ReqJoin50MatchList