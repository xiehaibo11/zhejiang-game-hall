-- 新金币大厅桥阶层，用于机制处理不同包体差异
local Bridge = {}
XH.Bridge = Bridge
XH.Bridge.ViewBase = XH.ViewBase
XH.Bridge.viewManager = XH.viewManager

function Bridge:require(path)
    return require(path)
end

function Bridge:getReqPath(name, isFullPath)
    if isFullPath then
        return name
    end
    return "lobby.Modules.GoldNew.Req." .. name
end

function Bridge:getCCSResPath(name)
    return "hall/CSB/NewGoldHall/" .. name
end

function Bridge:getImgResPath(path)
    return "hall/Image/NewGoldHall/" .. path
end

function Bridge:getModule(name)
    return XH.lobby:getModule(name)
end

function Bridge:onEnterLobby()
    if XH.isEmbeddedApp() then
        XH.lobby:getModule("XiaGuang")
        XH.lobby:getModule("BagSysNew"):reqSelfBagData(true)
        self:updateGameCommonAni()
        self:initAudio()
        XH.lobby:getModule("LuckyTask"):reqActList()
        XH.lobby:getModule("LuckyTask"):reqTaskList(true)
        XH.lobby:getModule("YGiftBankruptcy"):initGoldActData()
        XH.lobby:getModule("YGiftBankruptcyV2"):initGoldActData()
    end
end

function Bridge:updateGameCommonAni()
    local GameAniResChecker = require("app.hotupdate.gameani.GameAniResChecker")
    GameAniResChecker._startHotFix(GameAniResChecker.KW_ANI_TYPE.GAMECOMMON, 1)
end

function Bridge:initAudio()
    local gameID = 1
    local key = "GameSound_" .. gameID
    local priority = 1
    local GameSoundResChecker = require("app.hotupdate.gamesound.GameSoundResChecker")
    GameSoundResChecker._startHotFix(gameID, key, priority)
end

function Bridge:onLeaveLobby()
end

function Bridge:gotoKefu(from)
    XH.Bridge:getModule("CusService"):oponCusServerView(nil, from or "GOLDLOBBY")
end

function Bridge:isSupportRRBY()
    if XH.isEmbeddedApp() then
        return false
    end
    return true
end
function Bridge:isSupport(key)
    return true
end

function Bridge:gotoRRBY()
    if XH.Bridge:getModule("RRBuYu"):isDownloading() then
        XH.TipTool.showToast("正在加载中，请稍等...", 3)
        return
    end
    local enterRRBY = function()
        if device.platform == "android" then
            XH.Bridge:getModule("RRBuYu"):isDownloadCompleted(true)
            XH.Bridge:getModule("Replugin"):postToSepperllitaPlugin(1)
        elseif device.platform == "ios" then
            XH.Bridge:getModule("RRBuYu"):joinInRRBuyu()
        end
    end
    local position = XH.playerData:getPlayerPosition()
    if position.gameID ~= 0 then
        XH.TipTool.showTip({
            type = XH.TIP_LAYER_TYPE.OK_CANCEL,
            funcOK = function()
                enterRRBY()
            end
        }, "当前正在对局中，是否前往？")
        return
    end
    enterRRBY()
end

function Bridge:isInGame()
    if XH.areaData:getTenantid() == 4 then
        return CF and CF.isInGameScene()
    elseif XH.areaData:getTenantid() == 6 then
        return display.getRunningScene():getName() == "GameScene"
    elseif CONFIG and (CONFIG.AREA_ID == 7147 or CONFIG.AREA_ID == 7150) then
        return display.getRunningScene():getName() == "GameScene"
    end
end

function Bridge:throwData(dataName, recordData, custom)
    if XH.areaData:getTenantid() == 4 then
        XH.NewThrowDataManager:throwData(dataName, recordData, custom)
    elseif XH.areaData:getTenantid() == 6 then
        xn.ThrowDataManager:throwData(xn.ThrowDataDefine[dataName], recordData)
    elseif CONFIG and (CONFIG.AREA_ID == 7147 or CONFIG.AREA_ID == 7150) then
        XH.lobby:getModule("throwData"):throwData(XH.DHPluginDefine[dataName], recordData, custom)
    end
end

function Bridge:createRichText(str, fontSize)
    local richText
    if XH.areaData:getTenantid() == 4 then
        richText = ccui.RichText:createWithXML(str, {}) -- 创建富文本
    elseif XH.areaData:getTenantid() == 6 then
        richText = ccui.RichText:createWithXML(str, {})
    elseif CONFIG and CONFIG.AREA_ID == 7147 then
        local RichLabel = cc.ui.RichLabel -- 创建富文本
        richText = RichLabel.new {
            fontName = "FontNormal.ttf",
            fontSize = fontSize or 36,
            fontColor = cc.c3b(150, 76, 31),
            maxWidth = 1000,
            lineSpace = 5,
            charSpace = 0
        }
        richText:setString(str)
    elseif CONFIG and CONFIG.AREA_ID == 7150 then
        local RichLabel = cc.ui.RichLabel -- 创建富文本
        richText = RichLabel.new {
            fontName = "FontNormal_new.ttf",
            fontSize = fontSize or 36,
            fontColor = cc.c3b(150, 76, 31),
            maxWidth = 1000,
            lineSpace = 5,
            charSpace = 0
        }
        richText:setString(str)
    end
    return richText
end
return Bridge
