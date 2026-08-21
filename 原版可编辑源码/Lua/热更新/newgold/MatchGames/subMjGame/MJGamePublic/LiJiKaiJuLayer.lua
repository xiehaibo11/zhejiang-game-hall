------------------------------客服 提示----------------------------
local LiJiKaiJuLayer = class("LiJiKaiJuLayer", cc.load("mvc").ViewBase)

-- local Platform = require("app.platform.Platform")
local netObj, eventObj = unpack(require("newgold.GoldLobby.Modules.PeakRaceGame.XZDD.msg_obj"))


--csb文件
LiJiKaiJuLayer.RESOURCE_FILENAME = "LiJiKaiJuLayer.csb"

--节点绑定及事件
LiJiKaiJuLayer.RESOURCE_BINDING = {
	["Image_Bg"] = {
		varname = "bg",
    },
	["Image_Bg/Button_Agree"] = {
		varname = "btnAgree",
		events = {
			{event = "click", method = "on_btn_click"}
		}
    },
    ["Image_Bg/Button_Refuse"] = {
		varname = "btnRefuse",
		events = {
			{event = "click", method = "on_btn_click"}
        }
    },
    ["Image_Bg/Button_close"] = {
		varname = "btnClose",
		events = {
			{event = "click", method = "on_btn_click"}
		}
	},
	
	["Image_Bg/Text_Player_1"] = {
		varname = "playerLabel1",
    },
    ["Image_Bg/Text_Player_2"] = {
		varname = "playerLabel2",
    },
    ["Image_Bg/Text_Player_3"] = {
		varname = "playerLabel3",
    },
    ["Image_Bg/Text_Player_4"] = {
		varname = "playerLabel4",
    },
    ["Image_Bg/Text_Time"] = {
		varname = "timeLabel",
    },
}

local txtConfig = {
    [1] = "玩家【%s】申请立即开局，请问是否同意？",
    [2] = "玩家【%s】"
}

local stateStrConfig = {
    [0] = "等待选择", 
    [1] = "选择同意", 
}

function LiJiKaiJuLayer:ctor(time,isMyFirst)

    LiJiKaiJuLayer.super.ctor(self)
    self:createBaseMap()
    self.allPlayerlabels = {self.playerLabel1,self.playerLabel2,self.playerLabel3,self.playerLabel4}

    for k, v in ipairs(self.allPlayerlabels) do 
        v:setVisible(false)
        v.pos = -1
    end 

    -- 
    self:initNetEvent()

    self:startGameTime(time)

    if isMyFirst then 
        -- 隐藏按钮
        self.btnRefuse:setVisible(false)
        self.btnAgree:setVisible(false)
    end 
    g_gameGlobal:registerOutsideCloseFunc(self.bg,function()
        --self:stopPosSchedule()
       -- self:onExitLayer()
    end,false)
end 

function LiJiKaiJuLayer:initNetEvent()
    self:addChild(netObj.new(g_msgDefinitions.MSG_NOTIFY_PLAYER_TABLE_OPERATION_EX, function (event, msg)

    end))
end 

-- 开始倒计时
function LiJiKaiJuLayer:startGameTime(time)
    self.schedulTime = nil 

    self.currTime = time or 60

    self.timeLabel:setString(tostring(self.currTime).."s")

    self.schedulTime = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            
        if self ~= nil and not tolua.isnull(self) and self.currTime and self.currTime >= 0 then 
            self.currTime = self.currTime - 1
            self.timeLabel:setString(tostring(self.currTime).."s")
        end  
    end,1,false)
end 

-- 结束倒计时定时器
function LiJiKaiJuLayer:endGameTime()
    if self.schedulTime ~= nil then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulTime)
        self.schedulTime = nil 
    end
end 

-- 更新面板消息
function LiJiKaiJuLayer:updatePanelTextInfo(playerName,tablePos,playerState,isPropserPos)
    
    local name = g_gameGlobal:cutStringLength(playerName,3)
    if isPropserPos then 
        self.allPlayerlabels[1]:setString(string.format(txtConfig[1],name))
        self.allPlayerlabels[1]:setVisible(true)
        self.allPlayerlabels[1].pos = 1
    elseif playerState ~= -1 then 
        for i=2, 4 do  
            if self.allPlayerlabels[i].pos == -1 then 
                self.allPlayerlabels[i].pos = tablePos
                self.allPlayerlabels[i]:setString(string.format(txtConfig[2],name)..stateStrConfig[playerState])
                self.allPlayerlabels[i]:setVisible(true)
                break 
            else 
                if self.allPlayerlabels[i].pos == tablePos then 
                    self.allPlayerlabels[i]:setString(string.format(txtConfig[2],name)..stateStrConfig[playerState])
                    self.allPlayerlabels[i]:setVisible(true)
                    break 
                end 
            end 
        end 
    end 

    -- 若操作的为自己，那么就将按钮隐藏掉
    if g_gameGlobal:getMyTablePos() == tablePos and playerState == 1 then 
        self.btnAgree:setVisible(false)
        self.btnRefuse:setVisible(false)
    end 
end 

function LiJiKaiJuLayer:onExit()

    self:endGameTime()

end 

function LiJiKaiJuLayer:on_btn_click(sender)
    
    if sender == self.btnAgree then 
        self:agreeChange()
    elseif sender == self.btnRefuse then 
        self:refuseChange()
    elseif sender == self.btnClose then
        self:refuseChange()
        self:onExitLayer()
    end 
end

function LiJiKaiJuLayer:refuseChange()

    local applayChangeMsg = {}
    applayChangeMsg.operation = g_gameConstant.GAME_OPERATION_START_GAME_ADVANCE
    applayChangeMsg.opValue = 4   --【3表示其他玩家同意】，【4表示其他玩家拒绝】
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, applayChangeMsg)

end

function LiJiKaiJuLayer:agreeChange()
    local applayChangeMsg = {}
    applayChangeMsg.operation = g_gameConstant.GAME_OPERATION_START_GAME_ADVANCE
    applayChangeMsg.opValue = 3    ----【3表示其他玩家同意】，【4表示其他玩家拒绝】
    g_longConnect:sendMsg(g_msgDefinitions.MSG_GAME_PLAYER_TABLE_OPERATION, applayChangeMsg)
end


return LiJiKaiJuLayer