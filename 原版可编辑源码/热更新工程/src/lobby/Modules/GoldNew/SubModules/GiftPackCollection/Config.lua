local LocalConfig = import("...Configs.LocalConfig")
local GPCConfig = {}
GPCConfig.AllActInfo = {
    periodicGP = {
        name = "限时礼包",
        res = LocalConfig.IMG_PATH.GPC .. "Img_banner_xslb.png",
        viewName = "GoldHallPeGPView",
        redPointPath = "act/giftPackage/actPeGP/freegift"
    },
    firstRecharge = {
        name = "首充礼包",
        res = LocalConfig.IMG_PATH.GPC .. "Img_banner_sclb.png",
        viewName = "GoldHallFRFirstView",
        redPointPath = "act/giftPackage/firstRecharge"
    }
}
-- XH.Bridge.viewManager:getViewConfig(viewName)
return GPCConfig
