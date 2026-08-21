local LoginScene = class("LoginScene", XH.SceneBase)

function LoginScene:ctor()
    LoginScene.super.ctor(self)
    cc.FileUtils:getInstance():purgeCachedEntries()
    -- 由于该plist在热更新界面使用到了，因此这边需要重新加载下
    cc.SpriteFrameCache:getInstance():reloadTexture("Image/img_login.plist")
    cc.SpriteFrameCache:getInstance():reloadTexture("cocosStudio/hall/Image/img_login.plist")
    cc.SpriteFrameCache:getInstance():reloadTexture("hall/Image/img_login.plist")
	cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/img_login.plist")
end

function LoginScene:init(isShowYouKe,isUserChangeArea)
    self._isShowYouKe = isShowYouKe or false
    self._isUserChangeArea = isUserChangeArea or false
    self:initUI()
    self:initEvent()
end

function LoginScene:initUI()
    if self._content then
        return
    end
    self._content = require("login.Modules.Login.View").new({isShowYouKe = self._isShowYouKe})
    self:addChild(self._content)
end

function LoginScene:initEvent()
    
end

function LoginScene:onEnter()
    self.super.onEnter(self)
    XH.teaHouseManager:stopMatchLinkServer()
    cc.Director:getInstance():setAnimationInterval(1 / 30)
    if device.platform == "windows" then
        pcall( function()
            XH.viewManager:openView("DebugUI")
        end )
    end
end

function LoginScene:onEnterTransitionFinish()
    if XH.loginData:getLobbyID() == 0 then
        self:showChooseAreaView()
    end
end

function LoginScene:showChooseAreaView()
    local zjQuDaoName = XH.ChannelTool.checkIsZJQuDaoChannel()
    if XH.ChannelTool.checkIsCPSChannel() and not self._isUserChangeArea then
        XH.login:getModule("Login"):cpsChannelUserLogin()
    elseif XH.ChannelTool.checkIsWaishengChannel() then 
        XH.login:getModule("Login"):wsChannelUserLogin()
    elseif zjQuDaoName and not self._isUserChangeArea then
        XH.login:getModule("Login"):zjChannelUserLogin(zjQuDaoName)
    elseif XH.ChannelTool.checkIsECarChannel() then
        XH.login:getModule("Login"):zjChannelUserLogin("WENZHOU")
    else
        XH.viewManager:openView("ChooseAreaView")
    end
end

return LoginScene
