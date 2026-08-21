local JieSanView = class("JieSanView", cc.load("mvc").ViewBase)

function JieSanView:ctor(getTablePlayerPosFunc)
	self.waitPoint = nil
	self.leftDJSTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME
	self.getTablePlayerPosWithTablePos = getTablePlayerPosFunc or handler(g_gameGlobal, g_gameGlobal.getTablePlayerPosWithTablePos)
	self.jiesanInfo = {}
	self.playersTable = {}
	self.isAgreeJiesan = false
	JieSanView.super.ctor(self)
end

function JieSanView:onExit()
	if self.schedulerEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
        self.schedulerEntry = nil
    end
end
-- 创建的时候只可能在等待界面
function JieSanView:onCreate()
    self:createResoueceNode("JieSanView.csb")

    local panel = self.resourceNode_:getChildByName("Panel_1")

    -- 背景
    local bg = panel:getChildByName("bg")

    -- 倒计时时间
    self.AtlasLabelDjs = g_gameGlobal:findChildWithName(panel, "AtlasLabel_djs")

    -- 解散文本信息
    self.jiesanLabel = bg:getChildByName("jiesanLabel")

    self.closeBtn = bg:getChildByName("closeBtn")
	self.closeBtn:onClick(handler(self, self.btnEventFunc))
	self.closeBtn:setVisible(false)
	self.closeBtn:setTouchEnabled(false)

    self.agreeBtn = bg:getChildByName("agreeBtn")
    self.agreeBtn:onClick(handler(self, self.btnEventFunc))

    self.refuseBtn = bg:getChildByName("refuseBtn")
    self.refuseBtn:onClick(handler(self, self.btnEventFunc))

end

function JieSanView:endDJSSchedule()
	if self.schedulerEntry then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.schedulerEntry)
        self.schedulerEntry = nil
    end
end

function JieSanView:startDJSSchedule()
    local scheduler = cc.Director:getInstance():getScheduler()
    local function scheduleFunc(dt)
		--print(self.leftDJSTime)
		if self.leftDJSTime then
			if tonumber(self.leftDJSTime)> 0 then
				self.leftDJSTime = self.leftDJSTime - 1
				self.AtlasLabelDjs:setString(self.leftDJSTime)
				self:updateJieSanInfo(self.jiesanInfo,self.playersTable,true)
			else
				if not tolua.isnull(self.agreeBtn) and self.agreeBtn:isVisible() and not tolua.isnull(self.refuseBtn) and self.refuseBtn:isVisible() then
					g_gameGlobal:closeVipRoom(2)
				end
				self:setViewVisible(false)
				self:endDJSSchedule()
			end
		end
    end
    self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, 1 , false)
end

-- 更新解散信息
function JieSanView:updateJieSanInfo(msg, playersTable ,isSchedule)
	-- 倒计时时间
	-- 如果服务器传的剩余时间为0，就用默认时间300
	if not isSchedule then
		self.jiesanInfo = msg
		self.playersTable = playersTable
		self.leftDJSTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME
		
		if msg.unused2 and msg.unused2 ~= 0 then
			self.leftDJSTime = msg.unused2
		end
		
		if self.leftDJSTime < 0 then self.leftDJSTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME end
	
		self.AtlasLabelDjs:setString(self.leftDJSTime)
	end


	local desStr = string.format("玩家%s,等待其他玩家选择，剩余[%d]秒后未做选择，则默认同意！", msg.ip, self.leftDJSTime)
	if msg.opValue == 0 then
		-- 不是发起者收到的消息
		if not self.isAgreeJiesan then
			self.agreeBtn:setVisible(true)
			self.refuseBtn:setVisible(true)
		end
	else
		self.agreeBtn:setVisible(false)
		self.refuseBtn:setVisible(false)
		local desStr = string.format("%s，剩余[%d]秒后未做选择，则默认同意！", msg.ip, self.leftDJSTime)
	end



	local shengqingPos = 0				--申请者的tablepos 
	local refuseNum = 0					--拒绝的人数
	local huiyinCount = 0    			--有几个人已经回应了,包括自己的
-- 1: 谁发起		11
-- 2: 同意		01
-- 3: 拒绝		10
-- 4: 等待		00
	local refuseMsg = "由于"
	local playerState = {}   			--key代表座位号，value代表同意或者拒绝的状态
	for i = 0, g_gameGlobal:getMaxPlayerNum()-1 do
		local j = bit._and(msg.unused0, 3*(2^(2*i)))
		j = j * (2^(-2*i))
		playerState[i] = j

		local posState = self.getTablePlayerPosWithTablePos(i)

		if j == 3 then
			-- 发起者
			shengqingPos = i
		end
		if j ~= 0 then
			huiyinCount = huiyinCount + 1
		end
		if j == 2 then
			if type(playersTable[posState]) == "table" then
				if refuseNum == 0 then
					refuseMsg = refuseMsg .. string.format("玩家【%s】", g_gameGlobal:cutStringLength(playersTable[posState].playerName))
				else
					refuseMsg = refuseMsg .. "和" .. string.format("玩家【%s】", g_gameGlobal:cutStringLength(playersTable[posState].playerName))
				end
			end
			refuseNum = refuseNum + 1
		end
	end

	if	((g_gameGlobal:getMaxPlayerNum() == 5 and refuseNum >= 1) or 
	    (g_gameGlobal:getMaxPlayerNum() == 4 and refuseNum >= 1) or 
		(g_gameGlobal:getMaxPlayerNum() == 3 and refuseNum >= 1) or
		(g_gameGlobal:getMaxPlayerNum() == 2 and refuseNum >= 1)) then
		--关闭本窗口，并弹出xx和xx不同意
        self:setViewVisible(false)

		refuseMsg = refuseMsg .. "拒绝，房间解散失败，游戏继续"
		ShowConfirmBox(refuseMsg)
		return
	end

	if not isSchedule then
		self:setViewVisible(true)
	end
    
	self.agreeBtn:setVisible(false)
    self.refuseBtn:setVisible(false)

	local count = 1
	--因为playerState下标从0开始，所以#playerState长度还为1
    for i = 0, #playerState do
		local state = playerState[i]

		local posState = self.getTablePlayerPosWithTablePos(i)
		if posState == 1 and state == 0 then
			if not self.isAgreeJiesan then
				self.agreeBtn:setVisible(true)
				self.refuseBtn:setVisible(true)
			end
		end
		if state == 3 then
			-- 申请者忽略
		else			
			if count > g_gameGlobal:getMaxPlayerNum() then
				print("JieSanView:updateJieSanInfo error, count is " .. count .. " and maxplayerNum is " .. g_gameGlobal:getMaxPlayerNum())
				return 
			end

			-- 已同意文本

			local tmpStr= ""
			if state == 0 then				
				tmpStr = string.format("【%s】    等待操作中", type(playersTable[posState])=="table" and g_gameGlobal:cutStringLength(playersTable[posState].playerName or "",10))
			elseif state == 1 then
				tmpStr = string.format("【%s】    同意解散", type(playersTable[posState])=="table" and g_gameGlobal:cutStringLength(playersTable[posState].playerName or "",10))
			elseif state == 2 then
				tmpStr = string.format("【%s】    拒绝解散", type(playersTable[posState])=="table" and g_gameGlobal:cutStringLength(playersTable[posState].playerName or "",10))
			end

			if posState == 1 and self.isAgreeJiesan then
				tmpStr = string.format("【%s】    同意解散", type(playersTable[posState])=="table" and g_gameGlobal:cutStringLength(playersTable[posState].playerName or "",10))
			end

			desStr = desStr .. "\n" .. tmpStr
			count = count + 1
		end

	end

	self.jiesanLabel:setString(desStr)
end

function JieSanView:btnEventFunc( target )
	if target == self.closeBtn then
		if self.agreeBtn:isVisible() then
			g_gameGlobal:closeVipRoom(3)
		end
	elseif  target == self.agreeBtn then
		g_gameGlobal:closeVipRoom(2)
		self.isAgreeJiesan = true
	elseif  target == self.refuseBtn then
		g_gameGlobal:closeVipRoom(3)
		self:setViewVisible(false)
	end
	-- self:setViewVisible(false)
end

-- 覆写visible,当visible为true打开定时器，visible为false关闭定时器
function JieSanView:setViewVisible(visible)
    self:setVisible(visible)
	if visible then
		self:startDJSSchedule()
	else
		self:endDJSSchedule()
	end
end
return JieSanView