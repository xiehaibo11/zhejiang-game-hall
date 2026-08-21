XH = XH or {}
XH.PluginModule = {}

-- 退出到宿主包
XH.PluginModule.exitActivity = function()
    local luaj = require("cocos.cocos2d.luaj")
    local sigs = "(Ljava/lang/String;)V"
    luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "showMainActivity", { "" }, "(Ljava/lang/String;)V")
end

-- 获取透传参数
XH.PluginModule.getStartParams = function()
    if device.platform == "windows" then
        return {
            windMsgID = 1193,
            areaID = 5040,
            numID = 221121004,
            lobbyID = 900119,
            jwtToken = "eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJhY2NvdW50aWQiOiI1MDQwXzEwODAzNjUzNDUiLCJhcmVhaWQiOjUwNDAsImV4cCI6MTc1Mzc1NDI1OCwiaWF0IjoxNzUzNjY3ODU4LCJpZCI6IjEwODAzNjUzNDUiLCJ0aWQiOjEsInZlcnNpb24iOjF9.iINNmCdRRk66xfEb0lFX-t2U5L4c9BcR6AcCnRVD5Ww",
            tenantID = 1,
            dev = "stage",
            debug = 0,
            appID = 1465,
            packageID = 7288,
            realPayPackageID = 7288,
            aliPay = "alipayopen_pay",
            cusTomerScode = "",
            wxAppId = "",
            clientKey = "",
            groupID = 0,
            vipPropType = 1116,
            zjbGoldPropType = 1401,
            zjbGoldShopType = 1204,
            nSupportVip = 1,
        }
    end
    if XH and XH.PluginStrParam then
        return XH.PluginStrParam
    end
    local luaj = require("cocos.cocos2d.luaj")
    local sigs = "(Ljava/lang/String;)V"
    local _, ret = luaj.callStaticMethod("org/cocos2dx/lua/AppActivity", "getUnityCommandLineArgs", {}, "()Ljava/lang/String;")
    print("yuhang " .. ret)
    if XH then
        XH.PluginStrParam = json.decode(ret)
    end
    return json.decode(ret)
end

XH.PluginModule.getTenantID = function()
    return XH.PluginTenantID or 5
end

XH.PluginModule.initAreaConfig = function()
    local param = XH.PluginModule.getStartParams()
    XH.PluginTenantID = param.tenantID
    -- 重置本地参数
    local GlobalCfg = require("app.Config.GlobalConfig")
    GlobalCfg.IsDebug = param.debug == 1
    GlobalCfg.ShopAppId = param.appID
    GlobalCfg.ShopPackgeId = param.packageID
    -- 重置配置中心参数
    local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
    ConfigurationDefine.ENV = {
        TEST = param.dev,
        PROD = param.dev,
        STAGE = param.dev,
    }
    -- 重置AreaConfig参数
    local AreaConfig = require("app.Config.AreaConfig")
    AreaConfig[param.lobbyID] = {
        areaName = "金币场",
        areaID = param.areaID,
        lobbyID = param.lobbyID,
        windMsgID = param.windMsgID,
        commonGoldGameID = 101473,
        srsGroupID = 7160,
        propList = {
            roomCardID = 101032, --房卡
            propDiamndID = 101034, --钻石 
        },
        cusTomerScode = param.cusTomerScode,
    }
    if GlobalCfg.IsDebug then
        AreaConfig[param.lobbyID].srsGroupID = 5009
    end
    -- 部分文件重载
    package.loaded["app.Config.UrlConf"] = nil
end