local LobbyScene = class("LobbyScene", XH.SceneBase)

function LobbyScene:ctor()
	LobbyScene.super.ctor(self)
	--预加载图集
	cc.FileUtils:getInstance():purgeCachedEntries()
	cc.SpriteFrameCache:getInstance():reloadTexture("hall/Image/lobby.plist")
	cc.SpriteFrameCache:getInstance():reloadTexture("cocosStudio/hall/Image/lobby.plist")
	cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/lobby.plist")
    self:init()
end

function LobbyScene:init()
    self.content = require("lobby.Modules.Lobby.View").new():addTo(self)
end

function LobbyScene:onEnter()
	self.super.onEnter(self)
	XH.audioManager:play("BG_START")
	XH.SceneManager:getInstance():updatePopNode()
    cc.Director:getInstance():setAnimationInterval(1 / 30)
    if self.content then
        self.content:setVisible(true)
    end
    pcall(
        function()
            local packageUpdateTipTime = cc.UserDefault:getInstance():getStringForKey("PackageUpdateTipTimeAndCount", "20000101:0")
            local tempTable = string.split(packageUpdateTipTime, ":")
            local tempDateStr = tempTable[1] or ""
            local todayStr = os.date("%Y%m%d", os.time())
            local tempShowCount = (tempTable[2] and tempDateStr == todayStr) and tonumber(tempTable[2]) or 0
            if tempShowCount < 3 then
                local strPackageUpdate = cc.UserDefault:getInstance():getStringForKey("PackageUpdate", "")
                local versionInfo = cjson.decode(strPackageUpdate)
                if versionInfo.updateType == 2 then -- 普通更新
                    cc.UserDefault:getInstance():setStringForKey("PackageUpdateTipTimeAndCount", os.date("%Y%m%d", os.time())..":"..tostring(tempShowCount+1))
                    local check = require("app.PackageDownload.Check").new()
                    check:GerenalUpdate(versionInfo)
                end
            end
        end
    )
end

function LobbyScene:onExit()
	self.super.onExit(self)
end

function LobbyScene:cleanup()
    self.content:cleanup()
end

return LobbyScene
