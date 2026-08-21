local GuideModule = class("GuideModule", XH.ModuleBase)
local TaskDefine = require("app.Define.TaskDefine")

GuideModule.GUIDE_CREATE_BOX_ROOM = "GUIDE_CREATE_BOX_ROOM"
GuideModule.GUIDE_JOIN_BOX_ROOM = "GUIDE_JOIN_BOX_ROOM"
GuideModule.GUIDE_JOIN_TEA_HOUSE = "GUIDE_JOIN_TEA_HOUSE"
GuideModule.GUIDE_CHOOSEAREA = "GUIDE_CHOOSEAREA"
GuideModule.EVENT_UPDATE_NEW_USER_BACK_BTN = "EVENT_UPDATE_NEW_USER_BACK_BTN"
GuideModule.EVENT_UPDATE_BOX_ROOM_GUIDE_COPY = "EVENT_UPDATE_BOX_ROOM_GUIDE_COPY"
GuideModule.EVENT_UPDATE_BOX_ROOM_GUIDE_INVITE = "EVENT_UPDATE_BOX_ROOM_GUIDE_INVITE"

local NewUserTaskSubID = {
    ["reqInterrupt"] = 1001, -- 主动结束流程
    ["reqAwardInfo"] = 1002, --奖励
}

GuideModule.GUIDE_STATE = {
    ["giftbox"] = 0, --新手奖励发放
    ["start"] = 1, --开始
    ["awardFirst"] = 2,
    ["awardSecond"] = 3,
    ["end"] = 4, --结束
}

function GuideModule:ctor()
    GuideModule.super.ctor(self)
end

function GuideModule:getReqConfig()
    return {
        reqSetNewUserGuideState = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.respSetNewUserGuideState },
        ReqNewUserGuideAward = { reqPath = "app.Req.Task.ReqTaskProtocol", callBack = self.respNewUserGuideAward },
        ReqPlayerGoldCoin = { reqPath = "app.Req.PlayerMessage.ReqPlayerGoldCoin", callBack = self.onTranPlayerGoldCallBack },
    }
end

--设置新手引导状态
function GuideModule:reqSetNewUserGuideState(state)
    if not self:isGuideFinished() then
        local taskid = NewUserTaskSubID["reqInterrupt"] or 0
        local taskState = state or 0
        local paramStr = ";nTaskSubId=" .. taskid .. ";nTaskState=" .. taskState
        self:startReq("reqSetNewUserGuideState", TaskDefine.TASK_ID.FIRST_GIFT, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
    end
end

function GuideModule:respSetNewUserGuideState(cell,ntype,data)
    if ntype == XH.Req.TYPE.SUCCESS then
        if data.acData and data.acData ~= "" and data.acData ~= "nil" then
            local actData = cjson.decode(data.acData)
            if actData.guideState == XH.lobby:getModule("Guide").GUIDE_STATE["end"] then
                XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_NEW_USER_GUIDE_FINISHED, true)
                XH.playerData:setIsNewUserGuide(false)
                XH.playerData:setIsFirstGoldGuide(false)
            end
        end
    end
end

--玩家请求新手引导奖励
function GuideModule:reqNewUserGuideAward()
    -- 优化检查是否已经结束新手引导，结束后不再发起请求
    if XH.playerData:getIsNewUserGuide() and not self:isGuideFinished() then
        local taskid = NewUserTaskSubID["reqAwardInfo"] or 0
        local paramStr = ";nTaskSubId=" .. taskid
        self:startReq("ReqNewUserGuideAward", TaskDefine.TASK_ID.FIRST_GIFT, 0, 0, XH.areaData:getSrsGroupID(), XH.KW_CONFIG_LOGIC_TIME_OUT, paramStr)
    end
end

function GuideModule:respNewUserGuideAward(cell,ntype,data)
    if ntype == XH.Req.TYPE.SUCCESS then
        if data.acData and data.acData ~= "" and data.acData ~= "nil" then
            local actData = cjson.decode(data.acData)
            if actData then
                if  next(actData.awards) then
                    local msg
                    if actData.nextAwards and next(actData.nextAwards) then
                        msg = "再赢一局还能获得:"
                        for i = 1,#actData.nextAwards do
                            msg = msg  .. " " ..actData.nextAwards[i].desc
                        end
                    else
                        msg = "祝贺您完成新手引导，继续游戏体验更多乐趣！"
                    end
                    self:flushGoldCoin()
                    XH.viewManager:openView("CommonRewardView", XH.ZORDER.TOPLAYER, actData.awards,false,nil,msg)
                    XH.playerData:setIsShieldBaseLiveView(true)
                end
                if actData.guideState  == XH.lobby:getModule("Guide").GUIDE_STATE["end"]  then
                    XH.playerData:setIsNewUserGuide(false)
                end
            end          
        end
    end
end

    
function GuideModule:isGuideFinished()
    return false
    -- return XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEW_USER_GUIDE_FINISHED, false)
end

function GuideModule:updateNewUserGoldBackBtn()
    self:dispatchEvent({name = GuideModule.EVENT_UPDATE_NEW_USER_BACK_BTN})
end

function GuideModule:flushGoldCoin()
    local gameID = XH.areaData:getCommonGoldGameID()
    local srsGroupID = XH.areaData:getSrsGroupID()
    self:startReq("ReqPlayerGoldCoin", gameID, srsGroupID, 10)
end

function GuideModule:onTranPlayerGoldCallBack(cell, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if data.purse then
            XH.playerData:setSR(data.purse)
        else
            XH.playerData:setSR(0)
        end
    end
end


return GuideModule