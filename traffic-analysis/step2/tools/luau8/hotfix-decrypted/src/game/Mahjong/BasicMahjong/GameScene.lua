local GameScene = CF.gameClass("MahjongGameScene", "game.GameBase.GameScene")

local RECORD_KEY_PREFIX = "LYS26032001_MAH_FIRST_"

function GameScene:getViewsConfig()
    local viewsConf = GameScene.super.getViewsConfig(self)
    viewsConf["GameLayer"] = {path = "Modules.GameLayer.View", zOrder = 15}
    return viewsConf
end

function GameScene:initUI()
    GameScene.super.initUI(self)
    XH.___GameLoad_____ = true
    self:addView("GameLayer")
end

function GameScene:start()
    GameScene.super.start(self)
    self:tryReportMahjongSettingFirstEnter()
end

--- 首次进入麻将对局上报牌桌设置（lys26032001），每个用户仅一次
function GameScene:tryReportMahjongSettingFirstEnter()
    local _, _ = pcall(function()
        if not CF.roomData or CF.roomData:isPlayBack() or CF.roomData:getIsSeer() then
            return
        end
        if not XH or not XH.NewThrowDataManager or not CF.settingData or not CF.selfPlayerData or not CF.areaData then
            return
        end
        local numId = CF.selfPlayerData:getNumberID()
        if not numId then
            return
        end
        local ud = cc.UserDefault:getInstance()
        local recordKey = RECORD_KEY_PREFIX .. tostring(CF.selfPlayerData:getBrandID() or 0) .. "_" .. tostring(numId)
        if ud:getIntegerForKey(recordKey, 0) ~= 0 then
            return
        end
        local conf = CF.settingData:getConfigByKey("TAB_LABEL_TEXT")
        local pt = CF.settingData:getPlayerType()
        local modeLabel = conf[pt] or "自定义"
        local sd = CF.settingData
        local extra = {
            score = tostring(math.floor(sd:getCardHeight(-1)*100)),
            button_type = tostring(math.floor(sd:getCardWidth(-1)*100)),
            code = tostring(sd:getWordType(-1)),
            count = tostring(math.floor(sd:getCardWordSize(-1)*100)),
            count1 = tostring(sd:getBackType(-1)),
            count2 = tostring(sd:getBodyType(-1)),
            firstinstall = tostring(sd:getFaceType(-1)),
            round_num = tostring(sd:getMahTableStyle(-1)),
            scene_type = tostring(sd:getOutStyle(-1)),
        }
        XH.NewThrowDataManager:throwData("lys26032001", {page_item_id = extra.code == -1 and 0 or 1, block_item_id = modeLabel}, extra)
        ud:setIntegerForKey(recordKey, 1)
    end)
end

return GameScenej	