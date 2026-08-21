local MyApp = class("MyApp")

function MyApp:afterHotUpdateRun()
    cc.FileUtils:getInstance():purgeCachedEntries()
	require("cocos.framework.components.LuaExtendsComponents")
	require("cocos.framework.components.CocosExtend")
    require("cocos.framework.components.CocosExtend2")
    require("app.init")
	XH.NewThrowDataManager:AnalyseStartData("热更完成")

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
end

return MyAppS