local CURRENT_MODULE_NAME = ...
local GameScene = class("GameScene")
local GameSceneDefine = import(".GameSceneDefine",CURRENT_MODULE_NAME)
local Cell = import("GameCommon.Code.GameTea.Cell")
function GameScene:onLinkGameCallBack(cell, success, flag)
    local Cell = import("GameCommon.Code.GameTea.Cell")
    if success == Cell.TYPE.SUCCESS then

    else
        XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, cell:getMessage())
    end

    local wifiStateNode = ccui.Helper:seekWidgetByName(self:getRootNode(),GameSceneDefine.KW_UI_WIFI_STATE)
    if wifiStateNode then
        wifiStateNode:stopAllActions()
        local delay = cc.DelayTime:create(3)
        local sequence = cc.Sequence:create(delay, cc.CallFunc:create(function() 
            if self._clientData._sendMobileSignalMsgTime == 0 then
            else
                self:showWifiState(3000)
            end
            self:sendMobileSignalMsg()
        end))
        local action = cc.RepeatForever:create(sequence)
        wifiStateNode:runAction(action)
    end   
end

function GameScene:onReqPlayerHeadEffectPropsCallBack(cell, type, data)
    if type == XH.GT.Cell.TYPE.SUCCESS then
        local roomCardsCount = cell:getPlayerHeadEffectPropCount()   
        if roomCardsCount > 0 then
            self._isHaveHeadEffectProp = true
            self:showPlayerHeadEffect(Game.FrameworkFunction.getSelfSeat(), true)
            self:sendPlayerHeadEffect()
        else
            self._isHaveHeadEffectProp = false
        end         
    end
end 

function GameScene:onFastVoiceCallBack(flag,data)
    print("addYMNCallBackScriptFunc_flag: " .. flag)
    if 1403 == flag then
        -- 语音地址发送
        if device.platform == "ios" then
            self._isPlayVoiceURL = data.msg
            if self._isPlaySelfVoiceTime > 0 then
                if (socket.gettime() - self._isPlaySelfVoiceTime) * 1000 > 400  then
                    if self._isPlayVoiceURL ~= "" then
                        self:sendFastVoice(self._isPlayVoiceURL) 
                        self._isPlayVoiceURL = ""   
                    end
                    self._isPlaySelfVoiceTime = 0
                end
            end
        else
            self:sendFastVoice(data.msg)    
        end
    elseif 1402 == flag then
    elseif 1401 == flag then
        if self._isRecordingVoice then
            Game.FrameworkFunction.stopSoundInSpeaking()
            if device.platform == "ios" and XH.bf.SysFunc:GetBundleVersion() > "3.3.0" then
                local mapData = {}
                mapData["0"] = tostring(XH.playerData:getNumberID())
                XH.bf.ThirdManager:getInstance():callFunctionWithMap("fastvo_start_record",mapData)
            else
                XH.bf.ThirdManager:getInstance():callFunction("fastvo_start_record")
            end
        end

        if Game.FrameworkFunction.isVoicePreDeal() then
            local localSeat = Game.FrameworkFunction.seatToLocal(Game.FrameworkFunction.getSelfSeat())
            local playVoiceInfo = {}
            playVoiceInfo["voicelocalSeat"] = localSeat
            playVoiceInfo["voiceUrl"] = data.msg
            table.insert(self._playVoiceList,1,playVoiceInfo)
            --self._playVoiceList[#self._playVoiceList + 1] = playVoiceInfo
            self:showPlayVoice()
            if device.platform == "ios" then
                self._isPlaySelfVoiceTime = socket.gettime()
                --如果超过0.5秒还在播放，那么就把语音发出去
                XH.SysTool.performWithDelayGlobal(function()
                    if self._isPlaySelfVoiceTime > 0 then
                        if self._isPlayVoiceURL ~= "" then
                            self:sendFastVoice(self._isPlayVoiceURL) 
                            self._isPlayVoiceURL = ""   
                        end
                        self._isPlaySelfVoiceTime = 0
                    end
                end,0.5)
            end
            Game.UIFunction.setButtonState(self:getUIPlayerHead(localSeat),GameSceneDefine.KW_BTN_REPLAY,true)
        end
    elseif 1404 == flag then
        if device.platform == "ios" then
            if self._isPlaySelfVoiceTime > 0 then--如果从1401到1404完毕的时候是小于400ms的话，说明麦克风没开
                if (socket.gettime() - self._isPlaySelfVoiceTime) * 1000 > 400  then
                    if self._isPlayVoiceURL ~= "" then
                        self:sendFastVoice(self._isPlayVoiceURL) 
                        self._isPlayVoiceURL = ""   
                    end
            end
            self._isPlaySelfVoiceTime = 0
            end
        end
        Game.GameSound.setPlayEffectLimit(false)
        self._isPlayingVoice = false
        if #self._playVoiceList > 0 then
            self:showPlayVoiceAni(self._playVoiceList[1]["voicelocalSeat"],false)
            table.remove(self._playVoiceList, 1)
        end
        self:showPlayVoice()
        Game.FrameworkFunction.playSoundInSpeaking()
    elseif 1405 == flag then
        self._isPlayingVoice = false
        if #self._playVoiceList > 0 then
            self:showPlayVoiceAni(self._playVoiceList[1]["voicelocalSeat"],false)
            table.remove(self._playVoiceList, 1)--播放失败也删除
        end
        if self._isRecordingVoice == false then
            Game.GameSound.setPlayEffectLimit(false)
        end
        Game.FrameworkFunction.playSoundInSpeaking()
    elseif 1408 == flag then
        --取消成功
        Game.FrameworkFunction.playSoundInSpeaking()
    end
end

function GameScene:onCellCancelSignUpCallBack(cell, type, data)
    XH.GT.popLayer("LoadingLayer")
end
function GameScene:onReqAMapCallBack(cellReqAMap,type,data)
    if type == Cell.TYPE.SUCCESS then
        local tDataTable = data
        if device.platform == "ios" then
            tDataTable = json.decode(data.msg)
        end
        local fLongitude = tDataTable["longitude"]
        local fLatitude = tDataTable["latitude"]
        local sCountry = tDataTable["country"] or ""
        local sProvince = tDataTable["province"] or ""
        local sCity = tDataTable["city"] or ""
        local sDistrict = tDataTable["district"] or ""
        local sStreet = ""--tDataTable["street"] or ""
        -- local sAddress = sCountry .. sProvince .. sCity .. sDistrict .. sStreet
        local sAddress = sCountry .. sProvince .. sCity
        local sStrdata = "longitude=" .. fLongitude ..";".. "latitude=" .. fLatitude ..";".. "address=" .. sAddress
        print("hcc>>sStrdata: " .. tostring(sStrdata))
        self:sendAMapMsg(sStrdata)
    else
        local fLongitude = 0
        local fLatitude = 0
        local sAddress = ""
        local sCity = ""
        local sStrdata = "longitude='" .. fLongitude .."';".. "latitude='" .. fLatitude .."';".. "address='" .. sAddress .. "';bOpenGPS='0';city='" .. sCity .. "'"
        print("hcc>>sStrdata: ", sStrdata)
        self:sendAMapMsg(sStrdata)
    end
end

function GameScene:onReqShufflePropsCallBack(cell, type, data)
    if type == XH.GT.Cell.TYPE.SUCCESS then
        local shuffleCount = cell:getPropCntByID(KW_PROPID_SMALL_ROOMCARD)   
        local reqUseShuffleProp = function()
            local CellReqUseProp = import("LiangBang.Code.GameTeaBusiness.CellReqUseProp",CURRENT_MODULE_NAME)
            local cellReqUseProp = CellReqUseProp.new()
            cellReqUseProp:addCellCallBack(self,self.onReqUseShuffleCountCallBack)
            cellReqUseProp:start(KW_PROPID_SMALL_ROOMCARD, 100,10)
        end
        if shuffleCount > 0 then 
            reqUseShuffleProp()
        else 
            XH.TipTool.showTip({
                    type = XH.TIP_LAYER_TYPE.OK,            
                }, "您的钻石数量不足！")
        end
    end
end

function GameScene:onReqUseShuffleCountCallBack(cell,type,data)
    if type == Cell.TYPE.SUCCESS then
        self:sendReqShuffle()
        Game.TKFunction.addBtnClickCount(TalkingDataKeyword.KW_CLICK_DATONG_WIN_LOST_SHUFFLE_REAL + self._gameID * 100)
    end

    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new("UIWinLost.ContinueGame")
    eventDispatcher:dispatchEvent(event)
end

function GameScene:onGetIsOldPlayer(cell, type, data)
    -- if type == cell.TYPE.SUCCESS then
    --     local userInfo = data.data.userInfo
    --     local tconfig = data.data.taskConfig
    --     if userInfo.isRecallUser and tconfig[2].complete == 0 then
    --         self:reqTaskAward(410042)
    --         local CellReqReturnInfo = require("LiangBang.Code.GameTeaBusiness.ReturnAward.CellReqReturnAwardThrow")
    --         local cellreqinfo = CellReqReturnInfo:new()
    --         cellreqinfo:start(tconfig[2].taskid, 10) 
    --     end
    -- end
end

function GameScene:onReqTaskAwardCallBack(cell, type, data)
    if type == cell.TYPE.SUCCESS then
        local acData = data.acData
        if acData ~= "" then
            local tb = Game.StringFunction.getTableByString(acData,";", "=")
            if data.nTaskId == 410042 then
                if tb and next(tb) and tb.isComplete == "1" then
                    --老玩家回归获得首赠奖励
                    local awardLayer =  Game.Interface.showPopLayer("MarqueeRewardLayer", {nil, nil, 2})
                    local zstr = "X".. tb["132"]
                    local lstr = "X"..tb["150005"]
                    awardLayer:setReturnAwardInfo(zstr, lstr)
                end
            end
        end
    end
end

function GameScene:reqPlayerPropTaskProtocolCallBack(cell,nType,data)
    if nType == cell.TYPE.SUCCESS then
        if data.acData ~= nil and data.acData ~= ""  then
            local respBody = json.decode(data.acData) or {}
            for i,v in ipairs(respBody) do
                if v.frame then
                    for k,value in pairs(self._numidToSeat) do
                        if k == v.nid then
                            self._headFrameUrl[k] = v.frame_url
                            self:showHeadFrameInfo(value, v.frame_url)
                        end
                    end                    
                end
            end
        end
    else
        XH.TipTool.showToast("请求出错了，头像框会不正确！")
    end

    table.remove(self._numidList, 1)

    if #self._numidList > 0 then      
        self:getRootNode():runAction(cc.Sequence:create(cc.DelayTime:create(0.5),cc.CallFunc:create(function()
            self:reqPlayerPropTaskProtocol(self._numidList[1],#self._numidList)
        end)))  
    end
    
end


return GameScene
