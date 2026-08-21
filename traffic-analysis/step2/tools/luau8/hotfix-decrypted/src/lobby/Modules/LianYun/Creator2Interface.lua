local ShopConfig = require("lobby.Modules.Shop.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

Creator2Interface = {}
local soundScale = 0.2
local effectScale = 1

-- 联运模式枚举：七星宝牌联运 / 十三张联运
Creator2Interface.LianYunMode = {
    QIXINGBAOPAI = "qixingbaopai",  -- 七星宝牌联运
    CARD13 = "card13",              -- 十三张联运
}

-- 当前联运模式，由 LianYunModule:enter 进入时赋值
Creator2Interface.lianYunMode = nil

--- 返回当前联运模式（Creator2Interface.LianYunMode 枚举值）
---@return string|nil
function Creator2Interface.getLianYunMode()
    return Creator2Interface.lianYunMode
end

function Creator2Interface.getLianYunToken()
    --这里去获取联运的token

    local areaid = XH.areaData:getAreaID()
    local numid = XH.playerData:getNumberID()
    local webToken = XH.WebToken:getWebToken()
    local sessionStr = string.format('{"areaid":%d,"numid":%d,"sessionid":"%s"}', areaid, numid, webToken)

    --local sessionStr = '{"areaid":5237,"numid":30423,"sessionid":"eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJhY2NvdW50aWQiOiI1MjM3XzMwNDIzIiwiYXJlYWlkIjo1MjM3LCJleHAiOjE3Njc5MTk5MTcsImlhdCI6MTc2NzgzMzUxNywiaWQiOiIzMDQyMyIsInRpZCI6OSwidmVyc2lvbiI6MX0.odAUqCv5Mj4SZnzuJyQbdREdx9uX78xC7SEqPa8aQFE"}'
    print("Creator2Interface.getLianYunToken: "..sessionStr)
    callCreator2("window.RefreshTokenCallBack('" .. sessionStr .. "')")
end

function Creator2Interface.onEntered(msg)
    print("Creator2Interface.onEntered:" .. tostring(msg))
end

function Creator2Interface.onExit(v1, v2)
    --子游戏退出了
    print("Creator2Interface.onExit: " .. tostring(v1) .. "  " .. tostring(v2))

    if Creator2Interface.lianYunMode == Creator2Interface.LianYunMode.CARD13 then
        -- 子游戏退出后刷新道具数据，确保大厅显示最新道具数量
        XH.playerData:flushGoldCoin()
        XH.playerData:flushPlayerDrop()
        cc.Director:getInstance():setAnimationInterval(1 / 30)
    end
    Creator2Interface.lianYunMode = nil
end

function Creator2Interface.setMusicVolume(val)
    print("Creator2Interface.setMusicVolume:" .. tostring(val))
    XH.audioManager:SetMusicVolume(math.min(1.0, val/soundScale))
end

function Creator2Interface.getMusicVolume()
    print("Creator2Interface.getMusicVolume")
    return tostring(soundScale* XH.audioManager:GetMusicVolume())
end

function Creator2Interface.setEffectVolume(val)
    print("Creator2Interface.setEffectVolume:" .. tostring(val))
    XH.audioManager:SetSFXVolume(math.min(1.0, val/effectScale))
end

function Creator2Interface.getEffectVolume()
    print("Creator2Interface.getEffectVolume")
    return tostring(effectScale* XH.audioManager:GetSFXVolume())
end

function Creator2Interface.setDefMusic(isPlay)
    print("Creator2Interface.setDefMusic:".. tostring(isPlay))
    if isPlay then
        XH.audioManager:resumeMusic()
    else
        XH.audioManager:pauseMusic()
    end
end

function Creator2Interface.getShopItems()

    local isCard13 = Creator2Interface.lianYunMode == Creator2Interface.LianYunMode.CARD13
    local shopItems = Creator2Interface.shopItems or {}
    local diamondList = XH.lobby:getModule("Shop"):newFliterDataByArea(shopItems)
    local showList = {"300", "600", "1800", "3000", "6800", "12800", "32800", "64800"}
    local diamondListNew = {}
    for i = 1, #diamondList do
        local diamondInfo = diamondList[i]
        if diamondInfo and table.has(showList, diamondInfo.value) then
            diamondListNew[#diamondListNew + 1] = diamondInfo
        end
    end
    local sessionStr = json.encode(isCard13 and shopItems or diamondListNew)

    print("Creator2Interface.getShopItems:".. sessionStr)
    callCreator2("window.ShopItemsCallBack('" .. sessionStr .. "')")
end

function Creator2Interface.getCommonShopItems()
    local diamondList = XH.lobby:getModule("Shop"):newFliterDataByArea(Creator2Interface.shopItems or {})
    local showList = {"100", "300", "600", "1200", "1800", "3000", "6800", "9800", "12800", "19800", "32800", "64800"}
    local diamondListNew = {}
    for i = 1, #diamondList do
        local diamondInfo = diamondList[i]
        if diamondInfo and table.has(showList, diamondInfo.value) then
            diamondListNew[#diamondListNew + 1] = diamondInfo
        end
    end
    local sessionStr = json.encode(diamondListNew)
    print("Creator2Interface.CommonShopItemsCallBack:".. sessionStr)
    callCreator2("window.CommonShopItemsCallBack('" .. sessionStr .. "')")
end

function Creator2Interface.loadEnterParams()

    local DEBUG = require("app.Config.GlobalConfig").IsDebug
    local IsIosTiShen = require("app.Config.GlobalConfig").IsIosTiShen

    local isCard13 = Creator2Interface.lianYunMode == Creator2Interface.LianYunMode.CARD13

    -- 进游戏的参数都在这里
    Creator2Interface.exParam = {}
    Creator2Interface.exParam.srsMode = DEBUG and 0 or 2
    Creator2Interface.exParam.gray = DEBUG and 1 or 0
    Creator2Interface.exParam.deviceID = XH.SysTool:GetDevid()
    Creator2Interface.exParam.hostID = XH.lobby:getModule("LianYun"):getHostId()
    Creator2Interface.exParam.channelid = isCard13 and "66778817" or tostring(XH.SysTool:getChannelID())
    Creator2Interface.exParam.tenantid = 4
    Creator2Interface.exParam.areaid = XH.areaData:getAreaID()
    Creator2Interface.exParam.lobbyid = XH.areaData:getLobbyID()
    Creator2Interface.exParam.jwtToken = XH.WebToken:getWebToken()
    Creator2Interface.exParam.groupID = XH.areaData:getSrsGroupID()
    Creator2Interface.exParam.windID = XH.areaData:getAreaWindID()
    Creator2Interface.exParam.diamondid = XH.areaData:getPropDiamndID()
    Creator2Interface.exParam.conEnv = cc.UserDefault:getInstance():getStringForKey("____ConfigCenterSwitch____", ConfigurationDefine.ENV.PROD)
    local SxvipConfig = require("lobby.Modules.Sxvip.Config")
    local prop_type = SxvipConfig:getSxvipShopId()
    Creator2Interface.exParam.vipPropType = prop_type
    -- 联运模式为十三张时 cardBGold=1，否则为 0
    Creator2Interface.exParam.cardBGold = isCard13 and 1 or 0
    if device.platform == "android" then
        Creator2Interface.exParam.paySupportStr = "alipay_pay,wechatPay"
    else
        Creator2Interface.exParam.paySupportStr = ""
    end

    if Creator2Interface.joinGameID then
        Creator2Interface.exParam.joinGameID = Creator2Interface.joinGameID
    end
    if IsIosTiShen then
        Creator2Interface.exParam.tishen = 1
    end
    local LobbyConfig = require("lobby.Modules.Lobby.Config")
    if XH.lobby:getModule("LianYun"):getEnterGameID() == LobbyConfig.GAME_ID_APGDY then
        Creator2Interface.exParam.enterScene = 1
    end
    local sessionStr = json.encode(Creator2Interface.exParam)
    print("Creator2Interface.loadEnterParams:"..sessionStr)
    callCreator2("window.enterParamsCallBack('" .. sessionStr .. "')")
end

function Creator2Interface.buyHostShopItem(id, tag)
    print("Creator2Interface.buyHostShopItem " .. id .. " " .. tag)
    if Creator2Interface.shopItems == nil then
        Creator2Interface.buyItemsCalBack(201, "请重启游戏，获取商品")
        return
    end
    for i = 1, #Creator2Interface.shopItems do
        local diamondInfo = Creator2Interface.shopItems[i]
        if diamondInfo.productId == id then
            print("yuhang startBuy")
            diamondInfo.ext = json.decode(tag)
            if diamondInfo.ext.isZJ ~= 1 then
                diamondInfo.ext.source = 'lianyun_5'
            end
            diamondInfo.paySupportStr = diamondInfo.ext.payStr
            diamondInfo.pay_attach = diamondInfo.ext
            XH.lobby:getModule("Shop"):reqBuyDiamond(diamondInfo, "deliver_award", nil, nil, true)
            Creator2Interface.isBuy = true
            return
        end
    end
    Creator2Interface.buyItemsCalBack(201, "请重启游戏，获取商品")
end

function Creator2Interface.buyItemsCalBack(code, msg)
    print("Creator2Interface.buyItemsCalBack:"..tostring(code).." "..tostring(msg))
    if code == 215 then
        return
    end
    if not Creator2Interface.isBuy then
        return
    end
    XH.TipTool.hideLoading()
    Creator2Interface.isBuy = false
    local msg = {
        code = code,
        info = msg,
    }
    print("buyItemsCalBack " .. json.encode(msg))
    callCreator2("window.BuyItemsCallBack('" .. json.encode(msg) .. "')")
end

function Creator2Interface.openURL(url)
    print("Creator2Interface.openURL"..url)
    cc.Application:getInstance():openURL(url)
end

return Creator2Interface["