local EventManager = class("EventManager")

function EventManager:ctor()
	self.listeners = {}
	self.notices = {}
end

function EventManager:addListener(event_name, callback, add_data)
	local listeners = self.listeners[event_name]

	if not listeners then
		listeners = {}
		self.listeners[event_name] = listeners
	end

	for _, v in ipairs(listeners) do
		if v == callback then
			return
		end
	end

	table.insert(listeners, {
		callback = callback,
		add_data = add_data,
	})
end

function EventManager:removeListener(event_name, callback)
	if type(event_name) == "function" then
		event_name, callback = callback, event_name
	end

	local function removeLs(listeners)
		for i = #listeners, 1, -1 do
			if callback == listeners[i].callback then
				table.remove(listeners, i)
			end
		end
	end

	if event_name then
		removeLs(self.listeners[event_name] or {})
	else
		for _, listeners in pairs(self.listeners) do
			removeLs(listeners)
		end
	end
end

function EventManager:onEvent(event_name, params, isNow)
	local notice = {
		event_name = event_name,
		params = params,
	}
	if isNow then
		self:noticeByNotice(notice)
	else
		table.insert(self.notices, notice)
		self:notice()
	end
end

function EventManager:noticeByNotice(notice)

	if not notice then
		return
	end

	local listeners = self.listeners[notice.event_name]
	if listeners then
		listeners = clone(listeners)
		for _, listener in ipairs(listeners) do
			local ret = listener.callback(notice.event_name, notice.params, listener.add_data)

			if ret then
				self:removeListener(notice.event_name, listener.callback)
			end
		end
	end
end


function EventManager:notice()

	-- if self.notice_handler then
	-- 	scheduler.unscheduleGlobal(self.notice_handler)
	-- end

	if self.notice_handler then
		cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.notice_handler)
        self.notice_handler = nil
	end
	
	local function callback()
		if #self.notices<1 then
			if self.notice_handler then
				cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self.notice_handler)
				self.notice_handler = nil
			end
		end

		-- 取第一个notice通知
		local notice = table.remove(self.notices, 1)
		self:noticeByNotice(notice)
	end

	self.notice_handler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(callback, 0.01, false)

end


cc.exports.GlobalEventManager = GlobalEventManager or EventManager.new()�	