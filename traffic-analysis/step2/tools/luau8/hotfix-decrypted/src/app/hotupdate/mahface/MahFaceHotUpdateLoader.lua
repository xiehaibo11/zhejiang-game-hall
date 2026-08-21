local Loader = class("Loader")
--载入事件
local EVENT_MAHFACE_UPDATE_LOAD = "hotupdate.MahFaceUpdate.load"

--热更新完 需要载入
function Loader.load()
    print("load mahface ")
    local eventDispatcher = cc.Director:getInstance():getEventDispatcher()
    local event = cc.EventCustom:new(EVENT_MAHFACE_UPDATE_LOAD)
    eventDispatcher:dispatchEvent(event)
end
	
function Loader.reload()
    print("reload mahface")
    Loader.load() 
end

return Loader�