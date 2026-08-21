local ShareWinView = CF.gameClass("ShareWinView", CF.ViewBase)
local ShareWinConfig = CF.gameRequire("Modules.ShareWin.Config")
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")
local DEBUG = require("app.Config.GlobalConfig").IsDebug

function ShareWinView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ShareWin/ShareWinLayer.csb"
end

function ShareWinView:getBindingInfo()
    return {
        ["_KW_ROOM_LAYER"] = { varName = "_rootLayer" },
        ["_KW_PANEL_BG"] = { varName = "_panelBG" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClicked" },
        ["_KW_BTN_SHARE"] = { varName = "_panelWX", type = CF.UI_TYPE.BUTTON, onTouchEnded = "onBtnShareWXClicked" },
        ["_KW_HEAD_BG"] = { varName = "_headFrame" },
        ["_KW_TEXT_NICKNAME"] = { varName = "_nickName" },
        ["_KW_PANEL_EWM"] = { varName = "_panelEWM" },
        ["_KW_IMG_EWM"] = { varName = "_imgEWM" },
        ["_KW_PANEL_USERINFO"] = { varName = "_panelUserInfo" },
    }
end

function ShareWinView:getProxyEvents()
    return {
        { module = CF.game:getModule("ShareWin"), eventKeyName = "EVENT_CLOSE_WIN", callBack = "onClose" },
    }
end

function ShareWinView:ctor(param)
    param = param or {}
    ShareWinView.super.ctor(self, param)
    self._showType = param.showType or ShareWinConfig.ShowType.Value
    self._shareData = {}
    self._panelUI = nil
    self._module = CF.game:getModule("ShareWin")
    local configJsonData = CF.getLobbyModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.LOBBY, "lobby")
    self._shareType = ShareWinConfig.ShareType.Url
    if configJsonData and configJsonData.winShareType then
        self._shareType = configJsonData.winShareType
    end
    self:resetUI()
    self:updateUI()
    self:throwData(CF.NewThrowDataDefine.cy25120801)
end

function ShareWinView:resetUI()
    for i = 1, 2 do
        for j = 1, 3 do
            local panelUI = CF.UITool.seekNodeByName(self._rootLayer, "_KW_PANEL_" .. i .. "_" .. j)
            if panelUI then
                panelUI:setVisible(false)
            end
        end
    end
end

function ShareWinView:updateUI()
    if DEBUG then
        self._imgEWM:loadTexture("Common/CSB/GameBase/ShareWin/plist/ewm_test.png", ccui.TextureResType.plistType)
    end
    self:updateUserInfo()
    if self._showType == ShareWinConfig.ShowType.Face and CF.gameSub:isMahjong(CF.roomData:getGameID()) then
        self:updateFaceUI()
    else
        self:updateValueUI()
    end
end

--微信分享
function ShareWinView:onBtnShareWXClicked(send, eventType)
    local jsonStr = json.encode(self._shareData)
    print(jsonStr)
    print("shareType:" .. self._shareType)
    local capNode = CF.UITool.seekNodeByName(self._panelUI, "KW_PANEL_CAP")
    self._module:startShareFzbLobby(self._shareType, jsonStr, capNode)
    self:throwData(CF.NewThrowDataDefine.cy25120802)
end

--将窗体显示到屏幕
function ShareWinView:showSelf(zorder)
    zorder = zorder or CF.ZORDER.SCENE_POPNODE
    local runningScene = display.getRunningScene()
    if runningScene then
        runningScene:addChild(self, zorder)
    end
    return self
end

--关闭按钮
function ShareWinView:onBtnCloseClicked(send, eventType)
    self:close()
end

function ShareWinView:onClose()
    if not self or tolua.isnull(self) then
        return
    end
    self:close()
end

function ShareWinView:updateUserInfo()
    local url = CF.selfPlayerData:getWeChatURL()
    if url == "" then
        local tmpurl = ""
        if CF.selfPlayerData:getSex() > 0 then
            tmpurl = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_boy.png"
        else
            tmpurl = "https://palmstatic.hzxuanming.com/Download/avatar/default/head_girl.png"
        end
        url = CF.StringTool.urlToHttps(tmpurl)
    end

    if not self._headImg then
        local size = self._headFrame:getContentSize()
        self._headImg = CF.RemoteImage.new()
            :setTouchEnabled(true)
            :setPosition(size.width/2 - 0.5, size.height/2 + 0.3)
            :ignoreContentAdaptWithSize(false)
            :setContentSize(size.width - 7, size.height - 7)
            :addTo(self._headFrame)
    end
    self._headImg:setUrl(url)
    local nickname = CF.selfPlayerData:getNickName()
    if string.len(nickname) > 12 then
        local validBytes = XH.StringTool.getMinimumValidBytesUTF8(nickname, 12)
        nickname = string.sub(nickname,1,validBytes) .. "..."
    end
    self._nickName:setText(nickname)
end

-- 更新数值UI
function ShareWinView:updateValueUI()
    -- 随机显示对应的UI
    local valueType = math.random(1, 2)
    self._valueType = valueType
    local panelUI = CF.UITool.seekNodeByName(self._rootLayer, "_KW_PANEL_" .. self._showType .. "_" .. valueType)
    if panelUI then
        self._panelUI = panelUI
        panelUI:setVisible(true)
        local score = self._module:getShowScore() or 0
        local isShowScore = score >= 1000
        CF.UITool.setVisible(panelUI, "KW_WIN_SCORE", isShowScore)
        CF.UITool.setVisible(panelUI, "KW_IMG_WENZI", not isShowScore)
        if isShowScore then
            local scoreStr = XH.StringTool.numberToString(score, 4)
            if score > 0 then
                scoreStr = "+" .. scoreStr
            end
            if CF.roomData:isGoldRoom() then
                scoreStr = scoreStr .. "金币"
            end
            CF.UITool.setText(panelUI, "KW_WIN_SCORE", scoreStr)
        end
        self:refreshPos(panelUI)
    end
end

function ShareWinView:refreshPos(panelUI)
    local posEWMX, posEWMY = CF.UITool.getPosition(panelUI, "KW_PANEL_POS_EWM")
    local posHeadX, posHeadY = CF.UITool.getPosition(panelUI, "KW_PANEL_POS_HEAD")
    local posEWM = self._panelBG:convertToNodeSpace(panelUI:convertToWorldSpace(cc.p(posEWMX, posEWMY)))
    local posHead = self._panelBG:convertToNodeSpace(panelUI:convertToWorldSpace(cc.p(posHeadX, posHeadY)))
    self._panelEWM:setPosition(posEWM)
    self._panelUserInfo:setPosition(posHead)
end

-- 更新牌面UI
function ShareWinView:updateFaceUI()
    -- 目前展示牌面的只有这一个UI
    local panelUI = CF.UITool.seekNodeByName(self._rootLayer, "_KW_PANEL_2_1")
    self._panelUI = panelUI
    panelUI:setVisible(true)
    local selfSeat = CF.roomData:getSelfSeat()
    local mahData = self._module:getMahData(selfSeat)
    if mahData and mahData.handData then
        self._panelHandCard = CF.UITool.seekNodeByName(panelUI, "KW_PANEL_HAND_CARD")
        self:updataHandMah(mahData.handData, mahData.handDfData, mahData.combData)
    end

    if mahData and mahData.flowerData and #mahData.flowerData > 0 then
        self._panelFlower = CF.UITool.seekNodeByName(panelUI, "KW_PANEL_FLOWER")
        self:updataFlowerMah(mahData.flowerData)
        self._shareData.flowerData = mahData.flowerData
    end
    self:refreshPos(panelUI)
end

function ShareWinView:updataHandMah(handMahs, dfMahID, combData)
    if not self._panelHandCard then
        return
    end
    local combs = {}
    for _, comb in ipairs(combData) do
        local singleCombData = {}
        singleCombData.mahValues = comb.nMahs
        singleCombData.combFlag = comb.nFlag
        if comb.nFlag and comb.nFlag == CF.GameDefine.COMB_FLAG.CKONG and CF.roomData:getGameID() ~= 30284 then
            singleCombData.showBackIndexs = self:_getCKongShowBackIndexs(clone(singleCombData)) or {}
        end
        table.insert(combs, singleCombData)
    end
    if self:getHandArea().setJokerData then
        local gameData = CF.game:getModule("GameLayer"):getGameData()
        local jokerData = gameData:getJokerData()
        local insteadsData = gameData:getInsteadMahData()
        self:getHandArea():setJokerData(jokerData, insteadsData)  
        self._shareData.jokerData = jokerData
        self._shareData.insteadsData = insteadsDatajokerData
    end
    self._shareData.handMahs = handMahs
    self._shareData.dfMahID = dfMahID
    self._shareData.combs = combs
    if CF.roomData:getGameID() == 30284 then
        self._shareData.isWaHua = true
        self._panelHandCard:setPositionX(30)
    else
        local cardCount = CF.game:getModule("GameLayer"):getMaxHandCounts()
        if cardCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.EIGHT then
            self._panelHandCard:setPositionX(500)
        elseif cardCount == CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN then
            self._panelHandCard:setPositionX(180)
        else
            self._panelHandCard:setPositionX(280)
        end
    end
    self:getHandArea():showResultMahs(handMahs, dfMahID, combs)
end

function ShareWinView:updataFlowerMah(flowerMahs)
    if not self._panelFlower then
        return
    end
    local config = CF.settingData:getDefaultData(nil, true)
    local UIMahFlowerArea = CF.gameRequire("Modules.GameLayer.View2D.UIMahFlowerArea")
    self._settleFlowerMahs = UIMahFlowerArea.new(CF.GameDefine.LOCAL_SEAT.TOP, config)
    self._panelFlower:addChild(self._settleFlowerMahs)
    self._settleFlowerMahs:setFlowers(flowerMahs)
    self._panelFlower:setScale(0.32)
end

function ShareWinView:getHandArea()
    if not self._handArea then 
        local config = CF.settingData:getDefaultData(nil, true)
        local ItemMahsArea = CF.gameRequire("Modules.WinLost.ItemMahsArea")
        self._handArea = ItemMahsArea.new(config)
        self._panelHandCard:addChild(self._handArea)
    end
    return self._handArea
end

-- 暗杠时显示的牌背序号
function ShareWinView:_getCKongShowBackIndexs(combData)
    return {1,2,3}
end

function ShareWinView:throwData(throwid)
    local page = ""
    if CF.roomData:isGoldRoom() then
        page = "金币场"
    else
        if CF.roomData:getIsGameOver() then
            page = "约局大局"
        else
            page = "约局小局"
        end
    end
    local score = self._module:getShowScore()
    local block_item_id = ""
    local block_label = ""
    if self._showType == ShareWinConfig.ShowType.Face then
        block_item_id = "牌面"
        block_label = "face1"
    else
        if score >= 1000 then
            block_item_id = "数值"
        else
            block_item_id = "标语"
        end
        block_label = "value" .. tostring(self._valueType)
    end
    local conventionData = {
        page = page,
        page_item_id = score,
        block_item_id = block_item_id,
        block_label = block_label,
        game_id = CF.areaData:getAreaID() .. "_" .. CF.roomData:getGameID()
    }
    local customize = {}
    if throwid == CF.NewThrowDataDefine.cy25120802 and self._shareType == ShareWinConfig.ShareType.Url then
        customize = {
            type = "winshare0" .. self._module:getRandContent()
        }
    end
    XH.NewThrowDataManager:throwData(throwid, conventionData, customize)
end

return ShareWinView  �+  