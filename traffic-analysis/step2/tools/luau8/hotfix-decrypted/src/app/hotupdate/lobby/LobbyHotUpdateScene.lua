
local KW_CSB_PROGRESS = "res/cocosStudio/hall/CSB/Progress/Progress.csb"
local KW_PROGRESS = "Progress"
local KW_COLOR_LAYER = "ColorLayer"
local KW_CSB_MESSAGEBOX = "res/cocosStudio/hall/CSB/MessageBox.csb"
local KW_PROGRESS_TEXT      = "ProgressText"
local KWA_PANEL_BUTTON_LIST_2 = "KWA_PANEL_BUTTON_LIST_2"
local KWA_MSG_LABEL = "KWA_MSG_LABEL"
local KWA_BTND_CLOSE = "KWA_BTND_CLOSE"
local KWA_BTND_OK_1 = "KWA_BTND_OK_1"
local HOTUPDATE_BACK_IMG = "HOTUPDATE_BACK_IMG"
local KW_ZHEJIANG_TITLE = "KW_ZHEJIANG_TITLE"

local LobbyHotUpdateScene = class("LobbyHotUpdateScene")
local ChannelTool  = require("app.Tool.ChannelTool")

local director = cc.Director:getInstance()

LobbyHotUpdateScene._firstShowLogo = true
LobbyHotUpdateScene._hotUpdateCSBNode = nil
LobbyHotUpdateScene._needUpdate = nil
LobbyHotUpdateScene._UpdateManager = nil
LobbyHotUpdateScene._requireLobbySceneScheduler = nil
LobbyHotUpdateScene._showLogoScheduler = nil

local tmpProgress = 0
local curProgress = 0
local fastProgress = 1
LobbyHotUpdateScene._progressScheduleID = nil
LobbyHotUpdateScene.isHotUpdate = false

function LobbyHotUpdateScene:start()
    local scene = cc.Scene:create()
    local layer = cc.Layer:create()

    if device.platform == "android" then
        --监听退出按钮(点击退出按钮 询问玩家是否退出游戏)
        layer:setKeypadEnabled(true)  
        
        layer:addNodeEventListener(cc.KEYPAD_EVENT, function (event)  
            if event.key == "back" then
				self:shwoMessageBox("确定退出游戏?")
            end        
        end)
    end

    scene:addChild(layer)

    self.csbNode = cc.CSLoader:createNodeWithVisibleSize(KW_CSB_PROGRESS)

	
   
    if self.csbNode then
		self:setLabelString("VersionText","正在校验本地资源中...")
        
        if device.platform == "ios" then
            local xhLogo = LobbyHotUpdateScene.findNodeByName(self.csbNode,"KW_PIC_BF_LOGO")  
            if xhLogo then 
                xhLogo:setVisible(false)
            end
        end
        -- 显示启动图
        if cc.FileUtils:getInstance():isFileExist("ShowBFLogo.luac") or 
            cc.FileUtils:getInstance():isFileExist("ShowBFLogo.lua") then 
            local showLogo = require("ShowBFLogo")
            if showLogo and self._firstShowLogo then 
                self._firstShowLogo = false 
                local xhLogo = LobbyHotUpdateScene.findNodeByName(self.csbNode,"KW_PIC_BF_LOGO")  
                if xhLogo then 
                    if display.isUseNewResolution and display.isUseNewResolution() then
                        xhLogo:setVisible(true)
                    else
                        local designSize = cc.size(960, 640)
                        local screenSize = cc.Director:getInstance():getWinSize()
                        local kuangaobi = ( screenSize.width / screenSize.height) / (designSize.width / designSize.height)
                        xhLogo:setScaleY(1/kuangaobi)
                        xhLogo:setVisible(true)
                    end
                end
            end
        end
        self._showLogoScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._showLogoScheduler)
            self:hideLogo()
        end,1.5,false)

        layer:addChild(self.csbNode)
		
		self.tipsCsbNode = cc.CSLoader:createNodeWithVisibleSize(KW_CSB_MESSAGEBOX)
		if self.tipsCsbNode then
			layer:addChild(self.tipsCsbNode)
		end

		self:initMessageBox()
		
		if director:getRunningScene() then
			director:replaceScene(scene)
		else
			director:runWithScene(scene)
		end
					
	end
    self._hotUpdateStart = os.time()
    if  ChannelTool.checkIsCPSChannel() then
        local hotupdateImg = LobbyHotUpdateScene.findNodeByName(self.csbNode,HOTUPDATE_BACK_IMG)  
        local imgName = ChannelTool.getCPSHotupdateImg()
        if hotupdateImg and imgName ~= "" then 
            hotupdateImg:loadTexture(imgName, ccui.TextureResType.localType) 
        end
        local hotupdatetitle = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_ZHEJIANG_TITLE)
        if hotupdatetitle then 
            hotupdatetitle:setVisible(false)
        end
    end
    --外省渠道包热更浙江游戏大厅LOGO消失
    if ChannelTool.checkIsWaishengChannel() or ChannelTool.checkIsDoubleKouGame() then 
        local hotupdatetitle = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_ZHEJIANG_TITLE)
        if hotupdatetitle then
            hotupdatetitle:setVisible(false)
        end
    end 
    if ChannelTool.checkIsZJQuDaoChannel() then
        local hotupdatetitle = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_ZHEJIANG_TITLE)
        if hotupdatetitle then
            hotupdatetitle:setVisible(false)
        end
    end
    if ChannelTool.checkIsECarChannel() or LobbyHotUpdateScene.isEmbeddedApp() then
        local hotupdatetitle = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_ZHEJIANG_TITLE)
        if hotupdatetitle then
            hotupdatetitle:setVisible(false)
        end
    end
    local serviceBtn = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KW_LOGIN_SERVICE")  
    if serviceBtn then 
        serviceBtn:addTouchEventListener(handler(self,self.LoginServiceCallBack)) 
    end
    local nqLeaveBtn = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KW_NEIQIAN_LEAVE")  
    if nqLeaveBtn and LobbyHotUpdateScene.isEmbeddedApp() then 
        nqLeaveBtn:setVisible(true)
        nqLeaveBtn:addTouchEventListener(handler(self,self.NeiQianLeaveCallBack)) 
    end

    local closeExBtn = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KW_BUTTON_HINT_CANCEL")  
    if closeExBtn then 
        closeExBtn:addTouchEventListener(handler(self,self.closeExCallBack)) 
    end

    local toQxBtn = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KW_BUTTON_HINT_QX")  
    if toQxBtn then
        if device.platform ~= "ios" then
            toQxBtn:setVisible(false)
        end
        toQxBtn:addTouchEventListener(handler(self,self.toQxCallBack)) 
    end

    local retryBtn = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KW_BUTTON_HINT_OK")  
    if retryBtn then 
        retryBtn:addTouchEventListener(handler(self,self.retryCallBack)) 
    end
end

function LobbyHotUpdateScene:closeExCallBack(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    cc.Director:getInstance():endToLua()
end

function LobbyHotUpdateScene:toQxCallBack(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if device.platform == "ios" then
        self:xhCallOCFunc("XHsysfunc", "sysfunc_jump_permission_system", "{}")
    elseif device.platform == "android" then
        self:callFunctionAndroid("jump_permission_system", {}, true)
    end
end

function LobbyHotUpdateScene:xhCallOCFunc(cls, funcName, data)
    local target = cc.Application:getInstance():getTargetPlatform()
    if target == cc.PLATFORM_OS_IPHONE or target == cc.PLATFORM_OS_IPAD or target == cc.PLATFORM_OS_ANDROID then
        xh.XHBridge:xhCallOCFunc(cls, funcName, json.encode(data))
    end
end

function LobbyHotUpdateScene:callFunctionAndroid(functionName, info, isTransform)
    local res =  {}
    if isTransform then
        local i = 0
        while (true)
        do
            local param = info[tostring(i)]
            if param == nil then
                break
            end
            res[#res + 1] = param
            i = i + 1
        end
    else
        res = info
    end

    xh.XHBridge:xhCallOCFunc("UserInterface", "callFunction", json.encode({
        functionName = functionName,
        args = res
    }))
end

function LobbyHotUpdateScene:setRetryFunc(retryFunc)
    self._retryFunc = retryFunc
end

function LobbyHotUpdateScene:retryCallBack(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local rootBg = LobbyHotUpdateScene.findNodeByName(self.csbNode, "KW_UI_ROOT_BG")
    if rootBg then 
        rootBg:setVisible(false) 
    end
    if self._retryFunc then
        self._retryFunc()
    else
        cc.Director:getInstance():endToLua()
    end
end

function LobbyHotUpdateScene:LoginServiceCallBack()
	local url = self:getTempServiceUrl()
    if url then
        cc.Application:getInstance():openURL(url)
    end
end

function LobbyHotUpdateScene:getTempServiceUrl()
    local UrlConf = require("app.Config.UrlConf")
    local url = UrlConf.HTTP_ID_CUSTOMER_SERVICE
    if url then
        local nScode = "5f28f7576d51e" -- 默认丽水
        local localNumid = ""
        local randNum
        if localNumid == "" then
            randNum = tostring(math.random(0, 9))
            for _ = 1, 7 do
                randNum = randNum .. tostring(math.random(0, 9))
            end
        else
            randNum = localNumid
        end
        local nNumid = 88888 .. randNum
        local nNickName = string.urlencode(tostring("临时访客" .. randNum))
        local nAvatar = ""
        local nChannelId = 0
        local deviceName = XH.SysTool.url_encode(un.Device.getDeviceName())
        local appVersion = 0
        local ServiceUrl = url .. string.format("scode=%s&numid=%s&nickname=%s&avatar=%s&channelid=%d&device=%s&app_version=%s",
            nScode,nNumid,nNickName,nAvatar,nChannelId,deviceName, appVersion)
        return ServiceUrl
    end
end

function LobbyHotUpdateScene:NeiQianLeaveCallBack()
	local luaj = require("cocos.cocos2d.luaj")
    local sigs = "(Ljava/lang/String;)V"
    luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "showMainActivity", { "" }, "(Ljava/lang/String;)V")
end

function LobbyHotUpdateScene.isEmbeddedApp(root, strKeyword)
    if device.platform ~= "android" then
        return false
    end
    local luaj = require("cocos.cocos2d.luaj")
    local className = "org/cocos2dx/lua/AppActivity"
    local funcName = "strPluginAppParam"
    local args = {}
    local sig = "()Ljava/lang/String;"
    local ok, ret = luaj.callStaticMethod(className, funcName, args, sig)
    return ret == "1"
end

function LobbyHotUpdateScene.findNodeByName(root,strKeyword)        
    if root == nil then
        return nil
    end
      
    local getName = function()
        return root:getName()
    end 
    
    local success,name = pcall(getName)
    
    if success == false then
        return nil
    end
    
    if name == strKeyword then
        return root
    end
    
    local node = nil
    local childrennode = root:getChildren()
    for i = 1,root:getChildrenCount() do
        node = LobbyHotUpdateScene.findNodeByName(childrennode[i],strKeyword)
        if node ~= nil then
            break
        end
    end 
    return node
end

function LobbyHotUpdateScene.hideLogo()
    if LobbyHotUpdateScene.csbNode then 
        local xhLogo = LobbyHotUpdateScene.findNodeByName(LobbyHotUpdateScene.csbNode,"KW_PIC_BF_LOGO")  
        if xhLogo then 
            xhLogo:setVisible(false) 
        end
    end
end

function LobbyHotUpdateScene:initMessageBox()
    if self.tipsCsbNode then
		self.tipsCsbNode:setVisible(false)
		local btnGroup = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KWA_PANEL_BUTTON_LIST_2)  
        if btnGroup then 
            btnGroup:setVisible(false) 
        end

		local closeBtn = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KWA_BTND_CLOSE)  
        if closeBtn then 
            closeBtn:setVisible(false) 
        end

		local label = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KWA_MSG_LABEL)  
        if label then 
            label:setString("") 
        end

		local confirmBtn = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KWA_BTND_OK_1)  
        if confirmBtn then 
            confirmBtn:addTouchEventListener(self.ExitGameCallBack) 
        end
	end
end

function LobbyHotUpdateScene:shwoMessageBox(string)
    if self.tipsCsbNode then
		local colorLayer = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KW_COLOR_LAYER)  
        if colorLayer then 
            colorLayer:setVisible(true) 
        end
		local label = LobbyHotUpdateScene.findNodeByName(self.tipsCsbNode,KWA_MSG_LABEL)  
        if label then 
            label:setString(string) 
        end
		self.tipsCsbNode:setVisible(true)
	end
end

----------------------------unversie 接口------------------------------------

function LobbyHotUpdateScene:showProgress(percent)
    if not percent then return nil end
    if (percent >= 0) then 
        curProgress = percent
        print("showProgress = " .. percent)
        local ProgressNode = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_PROGRESS)
		
        if LobbyHotUpdateScene._progressScheduleID == nil then
            LobbyHotUpdateScene._progressScheduleID = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
                if ProgressNode and tolua.isnull(ProgressNode) == false and ((tmpProgress + fastProgress) <= curProgress or curProgress == 100) then
                    if tmpProgress == 0 and curProgress == 100 then 

                        ProgressNode:setPercent(curProgress)

						local processLabel = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_PROGRESS_TEXT)  
						if processLabel then 
							processLabel:setString(math.ceil(curProgress) .. "%")
						end

                        --只有一个文件需要更新的时候，收到直接就是100了，也关闭定时器
                        if LobbyHotUpdateScene._progressScheduleID then
                            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(LobbyHotUpdateScene._progressScheduleID)
                            LobbyHotUpdateScene._progressScheduleID = nil
                        end

                        return 
                    end
                    LobbyHotUpdateScene.isHotUpdate = true
                    if curProgress == 100 and fastProgress == 1 then
                        fastProgress = math.max((curProgress - tmpProgress) / 10, 1)
                    end
                    tmpProgress = tmpProgress + fastProgress
                    if math.ceil(tmpProgress) >= 100 then
                        tmpProgress = 100
                    end

                    ProgressNode:setPercent(tmpProgress)

					local label = LobbyHotUpdateScene.findNodeByName(self.csbNode,KW_PROGRESS_TEXT)  
					if label then 
						label:setString( math.ceil(tmpProgress) .. "%")
					end
                    if tmpProgress == 100 and curProgress == 100 then
                        LobbyHotUpdateScene.isHotUpdate = false
                        if LobbyHotUpdateScene._progressScheduleID then
                            cc.Director:getInstance():getScheduler():unscheduleScriptEntry(LobbyHotUpdateScene._progressScheduleID)
                            tmpProgress = 0
                            fastProgress = 1
                            LobbyHotUpdateScene._progressScheduleID = nil
                        end
                        self:hotUpdateSuccess()
                    end
                end
            end, 0.033, false)
        end
    end
end

function LobbyHotUpdateScene:hotUpdateSuccess()
    cc.UserDefault:getInstance():setIntegerForKey("Lobby_hotUpdateState_", 0)
    if LobbyHotUpdateScene.isHotUpdate then return end
    cc.FileUtils:getInstance():purgeCachedEntries()
    self:startGame(true)
end

function LobbyHotUpdateScene:startGame(updateResult)  
    self._requireLobbySceneScheduler = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._requireLobbySceneScheduler) -- 取消自己
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._showLogoScheduler) -- 取消logo图
        self:hideLogo()
		
        require("app.Launcher"):getInstance():onLaunchSuccess()
        self:postSuccData()
    end,0.1,false)
end

function LobbyHotUpdateScene.UpDateFailCallBack(notify, index)
    cc.Director:getInstance():endToLua()
end

function LobbyHotUpdateScene:hotUpdateProgress(progress)
    self:showProgress(progress)
end

function LobbyHotUpdateScene.ExitGameCallBack()
	cc.Director:getInstance():endToLua()
end

function LobbyHotUpdateScene:showProgressTitle(message)
   
end

function LobbyHotUpdateScene:needHotUpdatescene(flag,tag)
    self._needUpdate = self._needUpdate  or {} 
end

function LobbyHotUpdateScene:needHotUpdate(tag,oldVersion, newVersion)
    self._needUpdate = self._needUpdate  or {} 
    self._needUpdate[tag] = true
    if tag=="Lobby" then
        cc.UserDefault:getInstance():setStringForKey("Lobby_oldVersion_", oldVersion or "error")
        cc.UserDefault:getInstance():setStringForKey("Lobby_newVersion_", newVersion or "error")
		self:setLabelString("VersionText","当前版本:"..oldVersion.." >>>>> 新版本:"..newVersion)
        self._newVersion = newVersion
    end
end

function LobbyHotUpdateScene:hotUpdateFaile(message,relink,gameKey, isEnd)
    print("hotUpdateFaile:"..gameKey)
    cc.UserDefault:getInstance():setIntegerForKey("Lobby_hotUpdateState_", 1)
    if relink == nil or relink == false then
        print("游戏加载失败,请检查网络是否正常,并重启游戏")
        self:shwoMessageBox("游戏加载失败,请检查网络是否正常,并重启游戏")
    else
        local rootBg = LobbyHotUpdateScene.findNodeByName(self.csbNode, "KW_UI_ROOT_BG")
        local msgLabel = LobbyHotUpdateScene.findNodeByName(self.csbNode, "_KWA_MSG_LABEL")
        if isEnd and rootBg and msgLabel then 
            rootBg:setVisible(true) 
            msgLabel:setString(message)
        end
        if message then
            self:setLabelString("VersionText",message)
        else
            self:setLabelString("VersionText","网络异常,尝试重连中")
        end
    end

    if cjson == nil then
        cjson = require "cjson"
    end
    local tdsdk = require("app.Third.ThinkData.Sdk")
    tdsdk:init()
    tdsdk:setSuperProperties({
        channel_id = 0,
        area_id = 0,
        tenant_id = 4,
    })
    tdsdk:track("Monitoring_program", {
        Monitoring_source = "APP",
        Monitoring_type = "客户端监控热更新失败",
        Monitoring_content = {
            info_des = message or "网络异常",
            code = -1,
            info = message or "网络异常"
        }
    })
end

function LobbyHotUpdateScene:setLabelString(key,string)
	local label = LobbyHotUpdateScene.findNodeByName(self.csbNode,key)
	if label then
		label:setString(string)
	end
end

function LobbyHotUpdateScene:postSuccData()
    -- 用户路径相关数据
    if XH and XH.lobby and XH.lobby:getModule("UserPath") then
        local eventData = {
            duration = os.time() - self._hotUpdateStart,
            app_version   = XH.SysTool.GetBundleVersion(),
            local_version = self._newVersion or "0",
            customize = {
                msgtype_id = "无需加载",
                count = self._updateCount or 0
            } 
        }
        XH.lobby:getModule("UserPath"):throwDataOnce(XH.NewThrowDataDefine.xyh24081401 , eventData, true)
    end
end

return LobbyHotUpdateScene+M