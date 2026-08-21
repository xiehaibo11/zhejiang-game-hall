local JieSanView = class("JieSanView", cc.load("mvc").ViewBase)

function JieSanView:ctor()
	self.waitPoint = nil
	self.leftDJSTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME
	self.countDownTime = 0
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
    self:createPDKResoueceNode("JieSanView.csb")

	self:createBaseMap()
    self:fixPos()

    local panel = self.resourceNode_:getChildByName("Panel_1")

    -- 背景
    local bg = panel:getChildByName("bg")

    -- 倒计时时间
    self.djsLabel = ccui.Helper:seekNodeByName(panel, "djsLabel")

    -- 解散文本信息
    self.jiesanLabel = bg:getChildByName("jiesanLabel")

	local jiesanLabel_0 = bg:getChildByName("jiesanLabel_0")
	jiesanLabel_0:setString( "等待解散" )

    for i = 1, 3 do 
        local peoplePanel = bg:getChildByName("peoplePanel" .. i)
        if i == g_gameGlobal:getMaxPlayerNum() - 1 then
	        peoplePanel:setVisible(true)
	        self.peoplePanel = peoplePanel
        else
	        peoplePanel:setVisible(false)
        end
    end

    self.closeBtn = bg:getChildByName("closeBtn")
    self.closeBtn:setPressedActionEnabled(true)
    self.closeBtn:onClick(handler(self, self.btnEventFunc))

    self.agreeBtn = bg:getChildByName("agreeBtn")
    self.agreeBtn:setPressedActionEnabled(true)
    self.agreeBtn:onClick(handler(self, self.btnEventFunc))

    self.refuseBtn = bg:getChildByName("refuseBtn")
    self.refuseBtn:setPressedActionEnabled(true)
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
		print(self.leftDJSTime)
		--self.leftDJSTime = math.floor(self.countDownTime - os.time())
        if self.leftDJSTime and  tonumber(self.leftDJSTime)> 0 then
        	self.leftDJSTime = self.leftDJSTime - 1
        	self.djsLabel:setString(self.leftDJSTime)
        else
			if self.agreeBtn:isVisible() and self.refuseBtn:isVisible() then
				-- g_gameGlobal:closeVipRoom(2)
			end
			-- self:setViewVisible(false)
            self:endDJSSchedule()
        end
    end
    self.schedulerEntry = scheduler:scheduleScriptFunc(scheduleFunc, 1 , false)
end

-- 更新解散信息
function JieSanView:updateJieSanInfo(msg, playersTable)
	-- 倒计时时间
	-- 如果服务器传的剩余时间为0，就用默认时间300
	local time = os.time() 
	if msg.unused2 <= 0 then
		self.leftDJSTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME
		--self.countDownTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME + os.time()
	else
		self.leftDJSTime = 300-math.floor(msg.unused2/1000)
		if self.leftDJSTime <= 0 then
			self.leftDJSTime = 0
		end
		--self.countDownTime = g_gameConstant.JIESANROOM_DAOJISHI_TIME - math.floor(msg.unused2/1000) + os.time()
	end
	self.djsLabel:setString(self.leftDJSTime)

	if msg.opValue == 0 then
		-- 不是发起者收到的消息
		-- self.jiesanLabel:setString(  msg.desc)
		

		
		self.agreeBtn:setVisible(true)
		self.refuseBtn:setVisible(true)
	elseif msg.opValue == 2 then 
		self:setViewVisible(false)
		ShowConfirmBox(msg.desc)
		return 
	elseif msg.opValue == 3 then 
		self:setViewVisible(false)
		ShowConfirmBox(msg.desc)
		return 
	else 
		-- 发起者，不显示同意拒绝按钮
		-- self.jiesanLabel:setString(msg.desc)
		self.agreeBtn:setVisible(false)
		self.refuseBtn:setVisible(false)
		
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

		local posState = g_gameGlobal:getTablePlayerPosWithTablePos(i)

		if playersTable[posState] ~= 0 then 

			if j == 3 then
				-- 发起者
				shengqingPos = i
			end
			if j ~= 0 then
				huiyinCount = huiyinCount + 1
			end
			if j == 2 then
				if refuseNum == 0 then
					refuseMsg = refuseMsg
				else
					refuseMsg = refuseMsg
				end
				refuseNum = refuseNum + 1
			end
		end
	end


	-- shengqingPos[]


	local posState = g_gameGlobal:getTablePlayerPosWithTablePos(shengqingPos)
	local playerName = ""
	if playersTable[posState] ~= 0 then 
		playerName = playersTable[posState].playerName
	end


	self.jiesanLabel:setString( "玩家【"..g_gameGlobal:cutStringLength(playerName).."】请求解散房间" )

	-- 如果msg.gold=1表示解散失败
	local isAllOp = true
	for k,v in pairs(playerState) do
		-- print(k,v)
		if v == 0 then 
			isAllOp = false
			break
		end

	end

	if	msg.gold == 1 and isAllOp then
		--关闭本窗口，并弹出xx和xx不同意
        self:setViewVisible(false)

		refuseMsg = refuseMsg .. "拒绝，房间解散失败，游戏继续"
		ShowConfirmBox(refuseMsg)
		return
	end

    self:setViewVisible(true)
    
	self.agreeBtn:setVisible(false)
    self.refuseBtn:setVisible(false)

	local count = 1
    --因为playerState下标从0开始，所以#playerState长度还为1
    for i = 0, #playerState do
		local state = playerState[i]

		local posState = g_gameGlobal:getTablePlayerPosWithTablePos(i)
		if posState == 1 and state == 0 then
			self.agreeBtn:setVisible(true)
		    self.refuseBtn:setVisible(true)
		end
		if state == 3 then
			-- 申请者忽略
		else
			if count > g_gameGlobal:getMaxPlayerNum() then
				print("JieSanView:updateJieSanInfo error, count is " .. count .. " and maxplayerNum is " .. g_gameGlobal:getMaxPlayerNum())
				return 
			end
			local touxiangBg = self.peoplePanel:getChildByName("touxiangBg" .. count)
			if not touxiangBg then
				return
			end
			-- 更新头像
			-- local touxiang = touxiangBg:getChildByName("touxiang")
			if string.len(playersTable[posState].headImgUrl) > 10 then
                g_gameGlobal:requestHttpImage(playersTable[posState].headImgUrl, touxiangBg, posState == 1  , nil , 0.98)
			end
			-- 昵称
			local nicheng = touxiangBg:getChildByName("nicheng")
			nicheng:setFontName("")
			nicheng:setString(  g_gameGlobal:cutStringLength(playersTable[posState].playerName) )

			-- 已同意文本
			local agreeImg = touxiangBg:getChildByName("agreeImg")
			-- 已拒绝文本
			local refuseImg = touxiangBg:getChildByName("refuseImg")
			-- 等待中文本
			local waitImg = touxiangBg:getChildByName("waitImg") 

			if state == 0 then
				agreeImg:setVisible(false)
				refuseImg:setVisible(false)
				waitImg:setVisible(true)

				-- 播动画
                self.waitPoint = display.newSprite()
                :align(cc.p(0,0),waitImg:getContentSize().width+5, 0)
                :addTo(waitImg)
                :playAnimationForever(g_gameGlobal:createEffectFromSinglePng("noplist/waitPoint.png", 9 , 7))
			elseif state == 1 then
				agreeImg:setVisible(true)
				refuseImg:setVisible(false)
				waitImg:setVisible(false)
			elseif state == 2 then
				agreeImg:setVisible(false)
				refuseImg:setVisible(true)
				waitImg:setVisible(false)
			end

			count = count + 1
		end

	end

end

function JieSanView:btnEventFunc( target )
	if target == self.closeBtn then
		if self.agreeBtn:isVisible() then
			g_gameGlobal:closeVipRoom(3)
		end
	elseif  target == self.agreeBtn then
		g_gameGlobal:closeVipRoom(2)
	elseif  target == self.refuseBtn then
		g_gameGlobal:closeVipRoom(3)
	end
	self:setViewVisible(false)
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
return JieSanView  N!  