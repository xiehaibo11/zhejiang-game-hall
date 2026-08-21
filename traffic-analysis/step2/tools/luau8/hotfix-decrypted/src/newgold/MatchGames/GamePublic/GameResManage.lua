local GameResManage = class("GameResManage")

local basePath = "teahouse/"

-- 预加载资源or释放资源
local plistRes = {
}

function GameResManage:ctor()
    self.plistRes = {}
end

function GameResManage:callPlistRes()
    if self.plistRes ~= nil and next(self.plistRes) ~= nil then 
        local _cache = cc.SpriteFrameCache:getInstance()

        for k, v in pairs(self.plistRes or {}) do 
            _cache:addSpriteFrames(v.plist,v.png)
        end 
    end 
end

function GameResManage:initData( plistRes )
    self.plistRes = plistRes
end

-- 加载资源
function GameResManage:loadRes()
    if self.plistRes ~= nil and next(self.plistRes) ~= nil then 
        for k, v in pairs(self.plistRes or {}) do 
            cc.Director:getInstance():getTextureCache():addImageAsync(v.png,handler(self,self.callPlistRes))
        end 
    end 
end 

-- 删除资源
function GameResManage:removeLoadRes()
    for key, var in pairs(self.plistRes or {}) do 
        cc.Director:getInstance():getTextureCache():removeTextureForKey(var.png)
        if cc.SpriteFrameCache:getInstance():isSpriteFramesWithFileLoaded(var.plist) then 
            cc.SpriteFrameCache:getInstance():removeSpriteFramesFromFile(var.plist)
        end 
    end 
end

local gameResInstance 
function GameResManage:getInstance()
	if not gameResInstance then
		gameResInstance = GameResManage:new()
	end
	return gameResInstance
end



return GameResManage�