-- 时间管理机制，根据当前档位来调整时间
local GameTimeManager = class("GameTimeManage")





















local timeManagerInstance 
function GameMsgManager:getInstance()
	if not timeManagerInstance then
		timeManagerInstance = GameTimeManager:new()
	end
	return timeManagerInstance
end


return GameTimeManager