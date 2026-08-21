---@class TeaHouseGeneralModule : Module
local TeaHouseGeneralModule = class("TeaHouseGeneralModule", TeaHouse.Module)

TeaHouseGeneralModule.EVENT_TEA_HOUSE_JOIN_FAILED = "EVENT_TEA_HOUSE_JOIN_FAILED"
TeaHouseGeneralModule.EVENT_TEA_HOUSE_RELINK = "EVENT_TEA_HOUSE_RELINK"
TeaHouseGeneralModule.EVENT_TEA_HOUSE_CAN_QUIT = "EVENT_TEA_HOUSE_CAN_QUIT"
TeaHouseGeneralModule.EVENT_TEA_HOUSE_LIST_CHANGE = "EVENT_TEA_HOUSE_LIST_CHANGE"
TeaHouseGeneralModule.EVENT_CLOSE_QUIT_TEAHOUSE_VIEW = "EVENT_CLOSE_QUIT_TEAHOUSE_VIEW"
TeaHouseGeneralModule.EVENT_CLOSE_INPUT_VIEW = "EVENT_CLOSE_INPUT_VIEW"

function TeaHouseGeneralModule:onCreate()
    TeaHouseGeneralModule.super.onCreate(self)

    self._teaHouseScene = nil

    self._heartBeatScheduleID = nil

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:addCallBack(teahouseEvent.EVENT_TYPE.LOGIN_SUCCESS, "TeaHouseGeneralModule", handler(self, self.reLinkSRS))

    self:initEvents()
end

function TeaHouseGeneralModule:initEvents()
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespTeaHouseInfo, self, self.onRespTeaHouseInfo)
    TeaHouse.manager.netManager:addEventListener(TeaHouse.TeaHouseProtocol.RespQuitTeaHouse, self, self.onRespQuitTeaHouse)
end

function TeaHouseGeneralModule:onDestroy()
    self:stopHeartBeat()

    local teahouseEvent = TeaHouse.manager.teahouseEvent
    teahouseEvent:removeCallBack(teahouseEvent.EVENT_TYPE.LOGIN_SUCCESS, "TeaHouseGeneralModule")

    TeaHouseGeneralModule.super.onDestroy(self)
end

function TeaHouseGeneralModule:reLinkSRS(tableID)
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData:isInTeahouse() then
        return
    end

    local netReqJoinTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqJoinTeaHouse")
    netReqJoinTeaHouse:addReqCallBack(self, self.onReLinkNetReqJoinTeaHouse)
    local teaHouseID = nil
    if teahouseData:isOwner() then
        teaHouseID = teahouseData:getTeaNumber()
    end
    netReqJoinTeaHouse:start(teaHouseID, teahouseData:getTeaHousePwd(), tableID, 10)
end

function TeaHouseGeneralModule:onReLinkNetReqJoinTeaHouse(req, type)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.teahouseData:reset(true)
        self:startHeartBeat()
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_RELINK })
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_WITHOUT_CLOSE,
        funcOK = function()
            self:levealTeaHouse()
        end }, req:getMessage())
    end
end

function TeaHouseGeneralModule:joinTeaHouse(teaHouseID, teaHousePwd, tableID, teaHouseLevel, inTeaFunc, playModeId)
    TeaHouse.showLoading()

    local netReqJoinTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqJoinTeaHouse")
    netReqJoinTeaHouse:addReqCallBack(self, self.onNetReqJoinTeaHouse)
    netReqJoinTeaHouse:start(teaHouseID, teaHousePwd, tableID, 10, teaHouseLevel, inTeaFunc, playModeId)
end

function TeaHouseGeneralModule:onNetReqJoinTeaHouse(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        TeaHouse.manager.viewManager:closeView("TeaHouseJoinView")
        if data then            
            self:startTeaHouse({
                ucRight = data.msgData.right,
                isOwner = data.msgData.bIsOwner,
                teaHousePwd = data.teaHousePwd,
                tableID = data.tableID,
                teaHouseLevel = data.teaHouseLevel,
                inTeaFunc = data.inTeaFunc,
                playModeId = data.playModeId
            })
        end
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.hideLoading()
        if data.flag == TeaHouse.TeaHouseProtocol.RespJoinTeaHouse.FLAG.UNBINDWECHAT then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,
            funcOK = function()
                TeaHouse.reqWXBind()
            end }, req:getMessage())
        elseif data.flag == TeaHouse.TeaHouseProtocol.RespJoinTeaHouse.FLAG.INVALID_PASSWORD then
            local errorInfo = data.szErrorInfo
            if errorInfo == "" then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
            else
                local luaString = "return {" .. errorInfo .. "}"
                local luaFunction = loadstring(luaString)
                if luaFunction then
                    local tmpStr = luaFunction()
                    if tmpStr then                
                        TeaHouse.TipTool.showTip({ type = XH.TIP_LAYER_TYPE.OK,
                    },"输入错误"..tmpStr.errcnt.."次，请仔细核实后输入，单日输错"..tmpStr.lmtcnt.."次将导致您账号冻结！")
                    end
                end
            end
        elseif data.flag == TeaHouse.TeaHouseProtocol.RespJoinTeaHouse.FLAG.ERR_PWD_LMT then
            local errorInfo = data.szErrorInfo
            if errorInfo == "" then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
            else
                local luaString = "return {" .. errorInfo .. "}"
                local luaFunction = loadstring(luaString)
                if luaFunction then
                    local tmpStr = luaFunction()
                    if tmpStr then                
                        TeaHouse.TipTool.showTip({ 
                            type = XH.TIP_LAYER_TYPE.OK_NO_CLOSE,
                            bTop = true,
                            bCrossScene = true,
                            funcOK = function()
                                if tmpStr.lmtcnt == tmpStr.errcnt then                         
                                    self:dispatchEvent({ name = self.EVENT_CLOSE_INPUT_VIEW})           
                                    XH.playerData:stopVisitorHeart()
                                    XH.login:getModule("Login"):clearLoginStates()
                                    XH.Controller:getInstance():enterLogin()                                                       
                                end
                            end,                    
                        },"输入错误"..tmpStr.errcnt.."次，请仔细核实后输入，单日输错"..tmpStr.lmtcnt.."次将导致您账号冻结！")
                    end
                end
                TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.INPUT_TEA_WRONG_BAN_LOGIN,{headUrl = TeaHouse.BridgeData.getWeChatURL()})
            end
        else
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_WITHOUT_CLOSE,
            funcOK = function()
                self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_JOIN_FAILED ,msg = req:getMessage()})
            end }, req:getMessage())
        end
    else
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

function TeaHouseGeneralModule:startTeaHouse(info)
    if self._teaHouseScene ~= nil then
        TeaHouse.hideLoading()
        return
    end
    if TeaHouse.BridgeData.IsAgent() and not info.isOwner and not TeaHouse.BridgeData.isRemodelArea() and not TeaHouse.manager.configManager.SetupConfig.IsOpenTeaHouseByPhone 
    and not (TeaHouse.BridgeData.getLobbyID() == TeaHouse.LOBBY_ID.TAIZHOU)then
        TeaHouse.hideLoading()
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "根据相关法律法规，您不能参与游戏！")
        return
    end

    ---开始心跳
    self:startHeartBeat()

    local teahouseData = TeaHouse.manager.teahouseData
    teahouseData:reset()
    teahouseData:setTeaHousePwd(info.teaHousePwd)
    teahouseData:setIsOwner(info.isOwner)
    teahouseData:setIsisAdmin(false)
    teahouseData:setUCRight(info.isOwner and teahouseData.UC_RIGHT.YES or info.ucRight)
    teahouseData:setTeaHouseLevel(info.teaHouseLevel)
    self._teaHouseScene = TeaHouse.TeaHouseScene.new()
    self._teaHouseScene:enter(info.tableID, info.inTeaFunc, info.playModeId)
    TeaHouse.manager.teaHouseVisualCardTransferModule:reset()
end

function TeaHouseGeneralModule:startHeartBeat()
    self:stopHeartBeat()
    self._heartBeatScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        local checkAction = TeaHouse.TeaHouseProtocol.CheckAction:new()
        TeaHouse.manager.netManager:sendProtocol(checkAction)
    end, 60, false)
end

function TeaHouseGeneralModule:stopHeartBeat()
    if self._heartBeatScheduleID ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._heartBeatScheduleID)
        self._heartBeatScheduleID = nil
    end
end

--根据比赛场密码请求比赛场服务
function TeaHouseGeneralModule:reqAskAppidByPassword(teaHousePwd, tableID, inTeaFunc, playModeId)
    TeaHouse.showLoading()

    local netReqAppidByTeaHousePwd = TeaHouse.manager.reqManager:createReq("NetReqAppidByTeaHousePwd")
    netReqAppidByTeaHousePwd:addReqCallBack(self, self.onNetReqAppidByTeaHousePwd)
    netReqAppidByTeaHousePwd:start(teaHousePwd, tableID, inTeaFunc, playModeId, 15)
end

function TeaHouseGeneralModule:onNetReqAppidByTeaHousePwd(req, type, data)
    TeaHouse.hideLoading()

    if type == TeaHouse.Req.TYPE.SUCCESS then
        self:joinTeaHouse(nil, data.teaHousePwd, data.tableID, nil, data.inTeaFunc, data.playModeId)
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "JOIN_TEAHOUSE_FAIL")
    end
end

function TeaHouseGeneralModule:levealTeaHouse()
    if self._teaHouseScene == nil then
        return
    end

    ---停止心跳
    self:stopHeartBeat()

    local teahouseData = TeaHouse.manager.teahouseData
    local netReqLeaveTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqLeaveTeaHouse")
    netReqLeaveTeaHouse:addReqCallBack(self, self.onNetReqLeaveTeaHouse)
    netReqLeaveTeaHouse:start(teahouseData:getTeaNumber(), 5)

    teahouseData:setIsisAdmin(false)

    --TODO
    self._teaHouseScene:exit()
    self._teaHouseScene = nil
    teahouseData:reset()
end

function TeaHouseGeneralModule:onNetReqLeaveTeaHouse(req, type)
    -- if type == TeaHouse.Req.TYPE.TIMEOUT then
    --     TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "LEAVE_TEAHOUSE_TIMEOUT")
    -- end
end

function TeaHouseGeneralModule:applyTeaHouse(msg)
    TeaHouse.showLoading()
    local netReqAskPower = TeaHouse.manager.reqManager:createReq("NetReqAskPower")
    netReqAskPower:addReqCallBack(self, self.onNetReqAskPower)
    netReqAskPower:start(msg, 10)
end

function TeaHouseGeneralModule:onNetReqAskPower(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and data.right == TeaHouse.manager.teahouseData.UC_RIGHT.WAITING then
            TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "HAVE_APPLY_TOBEDONE")
            XH.lobby:getModule("FriendTea"):reqBBApplyJoinClub({clubId = data.teaid})
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_RIGHT_TIMEOUT")
    end
end

function TeaHouseGeneralModule:applyTeaHouseWithTeaID(msg, teaID, appid)
    TeaHouse.showLoading()
    local netReqAskPower = TeaHouse.manager.reqManager:createReq("NetReqAskPower")
    netReqAskPower:addReqCallBack(self, self.onNetReqAskPowerWithTeaID)
    netReqAskPower:start(msg, 10, teaID, appid)
end

function TeaHouseGeneralModule:onNetReqAskPowerWithTeaID(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data and data.right == TeaHouse.manager.teahouseData.UC_RIGHT.WAITING then
            -- TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "HAVE_APPLY_TOBEDONE")
            XH.lobby:getModule("FriendTea"):onTeaPlayerRequestJoinIn({lResultCode=0, dwTag=data._reqReaID})
            return
        end
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_RIGHT_TIMEOUT")
    end
    XH.lobby:getModule("FriendTea"):onTeaPlayerRequestJoinIn({lResultCode=1})
end

function TeaHouseGeneralModule:onRespTeaHouseInfo(msgData)
    if msgData.nAskid ~= -1 then
        return
    end
    local SwitchConfig = TeaHouse.manager.configManager.SwitchConfig
    if SwitchConfig.NeedCheckCanQuit then
        self:askCanQuitTeaHouse()
    end
end

function TeaHouseGeneralModule:askCanQuitTeaHouse()
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData:getTeaNumber() then
        return
    end

    local netReqCanQuitTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqCanQuitTeaHouse")
    netReqCanQuitTeaHouse:addReqCallBack(self, self.onNetReqCanQuitTeaHouse)
    netReqCanQuitTeaHouse:start(teahouseData:getTeaNumber(), 10)
end

function TeaHouseGeneralModule:onNetReqCanQuitTeaHouse(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        local teahouseData = TeaHouse.manager.teahouseData
        if data.ucFlag == TeaHouse.TeaHouseProtocol.RespCanQuitTeaHouse.RETVAL.OK then
            teahouseData:setIsCanQuitTeaHouse(true)
        else
            teahouseData:setIsCanQuitTeaHouse(false)
        end
        self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_CAN_QUIT })
    end
end

function TeaHouseGeneralModule:quitTeaHouse(teaNumber)
    TeaHouse.showLoading()
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqQuitTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqQuitTeaHouse")
    netReqQuitTeaHouse:addReqCallBack(self, self.onNetReqQuitTeaHouse)
    netReqQuitTeaHouse:start(teaNumber or teahouseData:getTeaNumber(), 10)
end

function TeaHouseGeneralModule:quitTeaHouseByTeaNumber(teaNumber)
    TeaHouse.showLoading()
    local netReqQuitTeaHouse = TeaHouse.manager.reqManager:createReq("NetReqQuitTeaHouse")
    netReqQuitTeaHouse:addReqCallBack(self, self.onNetReqQuitTeaHouse)
    netReqQuitTeaHouse:start(teaNumber, 10)
end

function TeaHouseGeneralModule:onNetReqQuitTeaHouse(req, type, data)
    TeaHouse.hideLoading()
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data then
            if data.state == TeaHouse.TeaHouseProtocol.RespQuitTeaHouse.REQ_STATE.WAIT then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "HAVE_APPLY_TOBEDONE")
            elseif data.state == TeaHouse.TeaHouseProtocol.RespQuitTeaHouse.REQ_STATE.AGREE then
                TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_WITHOUT_CLOSE,
                funcOK = function()
                    self:levealTeaHouse()
                end }, "YOUHAVE_QUIT_TEAHOUSE")
                self:dispatchEvent({ name = self.EVENT_TEA_HOUSE_LIST_CHANGE })
                self:dispatchEvent({ name = self.EVENT_CLOSE_QUIT_TEAHOUSE_VIEW })
            end
        end
    elseif type == TeaHouse.Req.TYPE.FAIL then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "QUIT_TEAHOUSE_LIMIT_ERROR")
    elseif type == TeaHouse.Req.TYPE.TIMEOUT then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_QUITTEAHOUSE_TIMEOUT")
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "APPLY_QUITTEAHOUSE_ERROR")
    end
end

function TeaHouseGeneralModule:onRespQuitTeaHouse(msgData)
    if msgData.askid ~= 0 then
        return
    end
    if msgData.state == TeaHouse.TeaHouseProtocol.RespQuitTeaHouse.REQ_STATE.AGREE then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK_WITHOUT_CLOSE,
        funcOK = function()
            self:levealTeaHouse()
        end }, "YOUHAVE_QUIT_TEAHOUSE")
    end
end

function TeaHouseGeneralModule:findGameByGameID(gameID)
    local isFound = TeaHouse.getGameTypeByGameID(gameID) ~= nil
    if not isFound then
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, "本游戏当前还未开放，敬请期待")
    end
    return isFound
end

function TeaHouseGeneralModule:checkIsInGame()
    local position = TeaHouse.BridgeData.getPlayerPosition()
    if position.gameID == 0 then
        return false
    end
    TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK,
    funcOK = function()
        local teaHousePwd, tableID = TeaHouse.BridgeData.checkPlayerPosition(position)
        if teaHousePwd ~= 0 then
            TeaHouse.reJoinTeaHouse({ teaHousePwd = teaHousePwd, tableID = tableID })
        else
            self:levealTeaHouse()
            TeaHouse.manager.teahouseList:closeSuitableTeaHouseListView()
            TeaHouse.BridgeData.jumpPlayerPosition(position)
        end
    end }, "已在游戏房间中,点击确认返场")
    return true
end

function TeaHouseGeneralModule:checkPlayerTable(tableInfo)
    local position = TeaHouse.BridgeData.getPlayerPosition()
    if position.gameID == 0 then
        return
    end
    local teaHousePwd, tableID = TeaHouse.BridgeData.checkPlayerPosition(position)
    if teaHousePwd == 0 or tableID == 0 then
        return
    end
    local teahouseData = TeaHouse.manager.teahouseData
    if not teahouseData:isInTeahouse() or tonumber(teahouseData:getTeaHousePwd()) ~= tonumber(teaHousePwd) then
        return
    end
    if tonumber(tableInfo.tableid) ~= tonumber(tableID) then
        return
    end
    TeaHouse.BridgeData.reqPlayerPosition()
end

return TeaHouseGeneralModule