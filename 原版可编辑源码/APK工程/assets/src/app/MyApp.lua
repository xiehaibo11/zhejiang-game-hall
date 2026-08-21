local MyApp = class("MyApp")

function MyApp:afterHotUpdateRun()
    cc.FileUtils:getInstance():purgeCachedEntries()
    require("app.init")

	if device.platform == "ios" then
		if XH.SysTool:GetBundleVersion() > "1.2.0" then
			XH.sdkManager:clearToponList()
        	XH.sdkManager:addToponAds(XH.ThirdDefine.TOPONSDK_AD_TYPE.SPLASHAD,"show")
		end
		if XH.SysTool:GetBundleVersion() >= "1.3.10" then
			XH.sdkManager:initEvents()
		end
    end
	XH.Controller:getInstance():enterLogin()

	XH.UIButton.setPlaySoundFunc(XH.audioManager.play)
	XH.UIButton.setDefaultClickEffect("BUTTON_CLICK")

	local targetPlatform = cc.Application:getInstance():getTargetPlatform()
	if cc.PLATFORM_OS_IPAD == targetPlatform or cc.PLATFORM_OS_IPHONE == targetPlatform or cc.PLATFORM_OS_ANDROID == targetPlatform then 
		if not XH.configerManager:getIsIosTishen() then
			local TeaHouseResChecker = require("app.hotupdate.teahouse.TeaHouseResChecker")
			TeaHouseResChecker.start()
		end
	end
end

return MyApp