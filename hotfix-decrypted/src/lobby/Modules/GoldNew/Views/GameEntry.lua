local GameEntry = class("GameEntry", XH.Bridge.ViewBase)
local LocalConfig = import("..Configs.LocalConfig")
local RemoteConfig = import("..Configs.RemoteConfig")
local Utils = import("..Tool.Utils")
local ActionUtils = import("..Tool.ActionUtils")
local UI_PATH = LocalConfig.IMG_PATH.MAIN
local COLOR_TYPE = {YELLOW = 1, RED = 2, BLUE = 3, BLACK = 4}
local COLOR_GAMENAME = {cc.c3b(0x83, 0x4b, 0xf), cc.c3b(0x83, 0x22, 0xf), cc.c3b(9, 0x3b, 0x7e), cc.c3b(0x33, 0x42, 0x6f)}
local COLOR_TAG_BG = {cc.c3b(0xe3, 0x95, 0x3d), cc.c3b(0xe0, 0x53, 0x37), cc.c3b(0x75, 0x9a, 0xb7), cc.c3b(0x33, 0x42, 0x6f)}
local LobbyConfig = require("lobby.Modules.Lobby.Config")
local Progress = require("src.lobby.Modules.GoldNew.Views.Progress")

function GameEntry:getCSBPath()
    return XH.Bridge:getCCSResPath("GameEntry.csb")
end

function GameEntry:getBindingInfo()
    return {
        ["_panel1"] = {varName = "_panel1"},
        ["_panel2"] = {varName = "_panel2"},
        ["_panel3"] = {varName = "_panel3"},
        ["_btnBig"] = {varName = "_btnBig"},
        ["_btnMid"] = {varName = "_btnMid"},
        ["_btnSmall"] = {varName = "_btnSmall"}
    }
end

function GameEntry:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("Lobby"), eventKeyName = "SHOW_LEISURE_ENTRANCE", callBack = "onEventShowLeisureEntrance"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_TIME", callBack = "onEventTime"},
        {module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_ROOMINFO", callBack = "onRespGoldRoomInfo"},
        { module = XH.lobby:getModule("RRBuYu"), eventKeyName = "EVENT_BUYU_DOWNLOAD_PROGRESS",callBack = "onRRFishProgressChanged"},
        { module = XH.lobby:getModule("LianYun"), eventKeyName = "EVENT_UPDATE_PROGRESS",callBack = "onLianYunProgressChanged"}
    }
end

function GameEntry:ctor(param)
    self._module = XH.Bridge:getModule("GoldNew")
    GameEntry.super.ctor(self, param)
    self._panels = {self._panel1, self._panel2, self._panel3}
    self._hotupdateInfo = {}
    self._timedownInfo = {}
    self._tagNames = {"_imgTagLT", "_imgTagRT", "_imgTagLB"}
    self._goldView = param.goldView

    self._btnBuYu = nil
    self._btnLianYun = nil
    self._btnLianYunCard13 = nil
    self._progressInVisible = true
    self:initUI()
end

function GameEntry:onEnter()
    -- self:checkDetailInfos()
end

function GameEntry:onEventTime()
    if tolua.isnull(self) then
        return
    end
    self:updateTagTime()
end

function GameEntry:onEventShowLeisureEntrance()
    if self._panels then
        for _, v in ipairs(self._panels) do
            v:removeAllChildren()
        end
    end
    self:initUI()
end

function GameEntry:onRespGoldRoomInfo(event)
    if self._lastConf then
        XH.TipTool.hideLoading()
        XH.Bridge:getModule("GoldNew"):joinGoldRoomFirst(self._lastConf)
        self._lastConf = nil
    end
end

function GameEntry:onExit()
    self._lastConf = nil
end

function GameEntry:initUI()
    self._timedownInfo = {}
    local roomlist = XH.Bridge:getModule("GoldNew"):getCurAreaMainEntryInfo()
    self._btns = {
        {}, {},
        {{ui = self._btnMid:clone(), type = "mid", color = COLOR_TYPE.BLUE}, {ui = self._btnSmall:clone(), type = "small", color = COLOR_TYPE.YELLOW}}
    }
    if #roomlist[1] == 2 then
        self._btns[1] = {
            {ui = self._btnMid:clone(), type = "mid", color = COLOR_TYPE.YELLOW},
            {ui = self._btnSmall:clone(), type = "small", color = COLOR_TYPE.BLACK}
        }
        self._btns[1][2].ui:loadTexture(UI_PATH .. "Img_k32.png", ccui.TextureResType.plistType)
        -- XH.UITool.loadTexture(self._btns[1][2].ui, "_imgShadow", UI_PATH .. "Img_ty2.png", ccui.TextureResType.plistType)
    else
        self._btns[1] = {{ui = self._btnBig:clone(), type = "big", color = COLOR_TYPE.YELLOW}}
        XH.UITool.loadTexture(self._btns[1][1].ui, "_imgShadow", UI_PATH .. "Img_ty1.png", ccui.TextureResType.plistType)
    end
    if #roomlist[2] == 2 then
        self._btns[2] = {
            {ui = self._btnMid:clone(), type = "mid", color = COLOR_TYPE.RED}, {ui = self._btnSmall:clone(), type = "small", color = COLOR_TYPE.BLACK}
        }
        self._btns[2][1].ui:loadTexture(UI_PATH .. "Img_YBK2.png", ccui.TextureResType.plistType)
        self._btns[2][2].ui:loadTexture(UI_PATH .. "Img_k32.png", ccui.TextureResType.plistType)
    else
        self._btns[2] = {{ui = self._btnBig:clone(), type = "big", color = COLOR_TYPE.RED}}
        self._btns[2][1].ui:loadTexture(UI_PATH .. "Img_k2.png", ccui.TextureResType.plistType)
        XH.UITool.loadTexture(self._btns[1][1].ui, "_imgShadow", UI_PATH .. "Img_ty3.png", ccui.TextureResType.plistType)
    end
    self._btns[3][1].ui:loadTexture(UI_PATH .. "Img_k4.png", ccui.TextureResType.plistType)
    XH.UITool.loadTexture(self._btns[3][2].ui, "_imgTop", UI_PATH .. "Img_zi_die_3.png", ccui.TextureResType.plistType)
    XH.UITool.loadTexture(self._btns[3][2].ui, "_imgShadow", UI_PATH .. "Img_ty3.png", ccui.TextureResType.plistType)

    local lightAniName = {"huang", "cheng", "lan"}
    for i = 1, 3 do
        for j = 1, 2 do
            if self._btns[i][j] and roomlist[i][j] then
                local btn = self._btns[i][j].ui
                local tagLBBg = XH.UITool.seekWidgetByName(btn, "imgTabLBBg")
                if tagLBBg then
                    tagLBBg:setColor(COLOR_TAG_BG[j == 1 and i or 3])
                end
                if j == 1 then
                    Utils:addSpine(btn:getChildByName("_aniLight"), "EntryLight", "zzb_jbdt_rk_sg", lightAniName[i])
                end
                local btnCnt = #self._btns[i]
                if btnCnt == 1 then
                    btn:setPosition(193, 340)
                else
                    if j == 1 then
                        btn:setPosition(193, 452)
                    else
                        btn:setPosition(193, 97)
                    end
                end
                self._panels[i]:addChild(btn)
                self:initBtn(self._btns[i][j], roomlist[i][j], (i - 1) * 2 + j)
                self._btnPos = self._btnPos or {}
                self._btnPos[i] = self._btnPos[i] or {}
                self._btnPos[i][j] = cc.p(btn:getPosition())
            end
        end
    end
end

function GameEntry:initBtn(btnInfo, info, idx)
    local btn = btnInfo.ui
    btn.btnIdx = idx

    local gameNames = {info.GameTitle, ""}
    if info.GameTitleEx then
        if idx % 2 == 0 then
            gameNames = string.gsub(info.GameTitleEx, "=", "")
        end
        gameNames = string.split(info.GameTitleEx, "=")
    end
    gameNames[1] = gameNames[1] or info.GameTitle
    gameNames[2] = gameNames[2] or ""
    local txtName1 = btn:getChildByName("_txtGameName1")
    local txtName2 = btn:getChildByName("_txtGameName2")
    txtName1:setString(gameNames[1])
    txtName2:setString(gameNames[2])
    txtName1:setTextColor(COLOR_GAMENAME[btnInfo.color])
    txtName2:setTextColor(COLOR_GAMENAME[btnInfo.color])

    local iconInfo = RemoteConfig:getEntryIconInfo(info.LeisureID)
    local tagInfo = RemoteConfig:getEntryTagInfo(info.LeisureID)
    if info.id == LocalConfig.BTN_ID.RRBY then
        iconInfo = {"Fish", "Fish"}
        self._btnBuYu = btn
    elseif info.id == LocalConfig.BTN_ID.BACK then
        iconInfo = {"", "", "Img_hy.png"}
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI then
        iconInfo = {"qxbp", "qxbp", "Img_hy.png"}
        self._btnLianYun = btn
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_CARD13 then
        iconInfo = {"card13", "card13", "Img_hy.png"}
        self._btnLianYunCard13 = btn
    elseif iconInfo == nil and info.GameID then
        local gameType = XH.Bridge:getModule("GoldNew"):getGameType(info.GameID)
        iconInfo = {gameType, gameType, gameType == "Mahjong" and "Img_mj.png" or "Img_pai.png"}
    end
    local imgIcon = btn:getChildByName("_imgIcon")
    local typeIdx = {big = 1, mid = 2, small = 3}
    local name = iconInfo[typeIdx[btnInfo.type]]
    local aniNode = btn:getChildByName("_ani")
    if imgIcon and iconInfo then
        if name then
            if name == "DarkShuangKou" then
                Utils:addSpine(aniNode, "EntryAnDou", "zzb_jbdt_rk_adsk", "animation")
            elseif name == "Mahjong" then
                Utils:addSpine(aniNode, "EntryMahjong", "zzb_jbdt_rk_mj", "animation")
            elseif name == "ShutCards" or name == "Landlords" or name == "LookAnxiously" or name == "DoubleKou" or name == "card13" then
                Utils:addSpine(aniNode, "EntryPoker", "zzb_jbdt_rk_pk", "animation")
            elseif name == "Fish" then
                XH.RemoteSpineManager:playRemoteAni(aniNode, "buyuGoldRoom")
            elseif name == "qxbp" then
                Utils:addSpine(aniNode, "EntryQXBP", "zzb_jbdt_rk_qxbp", "animation")
            else
                local find = string.find(name, "http")
                if find then
                    Utils:setImgUrl(imgIcon, name) -- 设置远程图片
                    imgIcon.__uiRemoteImage:setAnchorPoint(imgIcon:getAnchorPoint())
                    imgIcon.__uiRemoteImage:ignoreContentAdaptWithSize(true)
                    imgIcon:setVisible(true)
                else
                    name = LocalConfig.IMG_PATH.MAIN .. name
                    local spriteFrame = cc.SpriteFrameCache:getInstance():getSpriteFrameByName(name)
                    if spriteFrame then
                        imgIcon:loadTexture(name, ccui.TextureResType.plistType) -- 加载本地图标
                        imgIcon:setVisible(true)
                    end
                end
            end
        end
    end
    local tagWithGameNameWidth = 0
    local tagWithGameName = nil
    if tagInfo then
        for i, v in pairs(tagInfo) do
            if self._tagNames[i] then
                local node = btn:getChildByName(self._tagNames[i])
                if node then
                    local txt = node:getChildByName("txt")
                    if i == LocalConfig.ENTRY_TAG_ID.LEFT_BOTTOM then
                        for idx, c in ipairs(node:getChildren()) do
                            local bShow = idx - 1 == v.type
                            c:setVisible(idx == 1 or bShow)
                            if bShow then
                                node:setVisible(true)
                                tagWithGameName = node
                                tagWithGameNameWidth = node:getContentSize().width + 5
                            end
                        end
                    else
                        if v.type == LocalConfig.ENTRY_TAG_TYPE_ID.TXT then
                            txt:setString(v.txt)
                            node:setVisible(true)
                        end
                        if i == LocalConfig.ENTRY_TAG_ID.LEFT_TOP then
                            if v.type == LocalConfig.ENTRY_TAG_TYPE_ID.ACT_TIME then
                                -- 倒计时
                                table.insert(self._timedownInfo, {txt = txt, endTime = self._module:getActivityGameEndTime()})
                            end
                            txt:setSkewX(10)
                            node:setContentSize(txt:getContentSize().width + 41, 63)
                            node:setVisible(true)
                        end
                    end
                end
            end
        end
    end

    local itemWidth = btn:getContentSize().width
    local startX = (itemWidth - tagWithGameNameWidth - txtName1:getContentSize().width - txtName2:getContentSize().width -
                       (gameNames[2] == "" and 0 or 10)) / 2
    if tagWithGameName then
        tagWithGameName:setPositionX(startX)
    end
    txtName1:setPositionX(tagWithGameNameWidth + startX)
    txtName2:setPositionX(tagWithGameNameWidth + startX + txtName1:getContentSize().width + 10)

    XH.UIButton.create(btn, XH.UIButton.CLICK_STYLE.NOSCALE, function()
        print("click", info, btn._hotfixFunc)
        self:onClickGameBtn(btn, info, idx)
        -- WINDOWS_HOTUPDATE_OPEN = true
        -- XH.Bridge:getModule("Lobby"):isNeedHotUpdata(info.gameID or 30288, btn._hotfixFunc)
    end)
    -- self:hotupdateListenerExtend(btn, info)

    if info.ProgeressInfo and btn:getChildByName("KW_NODE_PROGRESS") == nil then
        if btnInfo.type == "small" then
            info.ProgeressInfo.type = "small"
        end
        Progress.initProgressView(btn, info.ProgeressInfo)
    end
end

function GameEntry:onLianYunProgressChanged(event)
    if not event.data then
        return
    end
    local percent = event.data.percent
    local gameID = event.data.gameID
    if self._btnLianYun and not tolua.isnull(self._btnLianYun) and self._progressInVisible and (not gameID or gameID == LobbyConfig.QXBP_GAMEID) then
        Progress.showProgressPercent(self._btnLianYun, percent)
    end
    if device.platform ~= "android" and self._btnLianYunCard13 and not tolua.isnull(self._btnLianYunCard13) and self._progressInVisible and (not gameID or gameID == LobbyConfig.CARD13_GAMEID) then
        Progress.showProgressPercent(self._btnLianYunCard13, percent)
    end
end

function GameEntry:onRRFishProgressChanged(event)
    if not event.data then
        return
    end
    local percent = event.data.percent
    if self._btnBuYu and not tolua.isnull(self._btnBuYu) and self._progressInVisible then
        Progress.showProgressPercent(self._btnBuYu, percent)
    end
end

function GameEntry:onClickGameBtn(btn, info, idx)
    local gameID = info.GameID
    if info.id == LocalConfig.BTN_ID.RRBY then
        gameID = 0
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI then
        gameID = LobbyConfig.QXBP_GAMEID
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_CARD13 then
        gameID = LobbyConfig.CARD13_GAMEID
    elseif info.id == LocalConfig.BTN_ID.BACK then
        gameID = 1
        if XH.isEmbeddedApp() then
            XH.PluginModule.exitActivity()
            return
        end
    end
    XH.Bridge:throwData("xjb25022805", {page = "新金币大厅", page_item_id = idx, game_id = gameID, oldsr = XH.playerData:getSR() or 0})
    if info.id == LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI or info.id == LocalConfig.BTN_ID.LIANYUN_CARD13 then
        XH.lobby:getModule("LianYun"):enter({gameID = gameID, checkPosition = true})
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lygx032501, { 
            hostid = XH.lobby:getModule("LianYun"):getHostId(), 
            host_areaid = XH.areaData:getAreaID(),
            block_label = "金币大厅icon"
        })
        -- XH.Bridge:throwData("xjb25022811", {game_id = XH.areaData:getAreaID() .. "_" .. gameID, oldsr = XH.playerData:getSR() or 0}, {source = 0})
        return
    end
    if info.id == LocalConfig.BTN_ID.RRBY then
        return self:onRRBYClicked()
    end
    if info.id == LocalConfig.BTN_ID.BACK then
        return self._goldView:onClickBack()
    end
    local tmpInfo = info
    if gameID == 30116 or gameID == 42038 then
        local lastQBConfID = cc.UserDefault:getInstance():getIntegerForKey("LAST_JOIN_QBGOLD_INDEX", 0)
        if lastQBConfID ~= 0 and lastQBConfID ~= info.LeisureID then
            tmpInfo = RemoteConfig:getRoomInfoByLeisureID(lastQBConfID)
        end
    end
    local isNeedWait = XH.Bridge:getModule("GoldNew"):showChooseRoomPre(tmpInfo)
    if isNeedWait then
        self._lastConf = info
    end
    if XH.lobby:getModule("LianYun") then
        XH.lobby:getModule("LianYun"):hideProgress()
        self:setProgressInVisible()
    end
end

function GameEntry:setProgressInVisible()
    self._progressInVisible = false
end

function GameEntry:setProgressVisible()
    self._progressInVisible = true
end

function GameEntry:onRRBYClicked(send, eventType)
    XH.Bridge:gotoRRBY()
end

function GameEntry:hotupdateListenerExtend(btn, info)
    self:drawSector(btn)

    local listener = {}

    function listener:start(gameID, gameName)
        if gameID == nil or gameID == 0 then
            return
        end
        if gameName == nil or gameName == "" then
            return
        end
    end
    function listener:needHotUpdate(tag, oldVersion, newVersion)
        print("游戏TAG = " .. tag .. " oldVersion = " .. oldVersion .. " newVersion = " .. newVersion, btn.btnIdx)
        self._hotupdateInfo[tag] = "updating"
    end

    function listener:hotUpdateSuccess(tag)
        print("游戏TAG = succ", tag, btn.btnIdx)
        btn.updatePropgress(100)
    end
    function listener:hotUpdateFaile(message, gameKey)
        print("游戏TAG = fail", message, gameKey, btn.btnIdx)
    end
    function listener:hotUpdateProgress(progress)
        print("游戏TAG = progress", progress, btn.btnIdx)
    end
    function listener:showProgress(progress)
        print("游戏TAG = progress", progress, btn.btnIdx)
        btn.updatePropgress(progress)
    end
    btn._hotfixFunc = listener
    btn._hotfixFunc.btn = btn
end

function GameEntry:drawSector(btn)
    local function drawSector(drawNode, cx, cy, radius, startAngle, sweepAngle)
        local segments = sweepAngle / 2
        -- 30 -- 分割线段数量，数值越大扇形越平滑
        local angleStep = math.rad(2)
        local vertices = {}

        table.insert(vertices, cc.p(cx, cy)) -- 中心点

        for i = 0, segments do
            local radian = math.rad(270 - startAngle) + angleStep * i -- 调整起始位置到12点方向，并顺时针方向计算
            local x = cx + radius * math.cos(radian)
            local y = cy - radius * math.sin(radian) -- 注意这里的减号，因为我们是在一个Y轴向下的坐标系统中工作
            table.insert(vertices, cc.p(x, y))
        end

        drawNode:drawPolygon(vertices, #vertices, cc.c4f(0.7, 0.7, 0.7, 1), 1, cc.c4f(0, 0, 0, 0))
    end

    local function update(drawNode, center, radius, totalTime, elapsed)
        local progress = elapsed / totalTime
        local maxAngle = 360 -- 最大角度为圆周角
        local currentAngle = progress * maxAngle

        if currentAngle > 0 then
            drawSector(drawNode, center.x, center.y, radius, 0, currentAngle)
        end
    end

    local sector = cc.DrawNode:create()
    sector:setPosition(btn:getContentSize().width / 2, btn:getContentSize().height / 2)
    btn:addChild(sector)

    -- local function createProgressBar(radius)
    --     local progressBar = cc.Node:create()

    --     -- 创建扇形

    --     -- 更新进度
    --     local currentAngle = 0
    --     local targetAngle = 360
    --     local speed = 1 -- 角度变化速度

    --     progressBar:scheduleUpdateWithPriorityLua(
    --         function(dt)
    --             if currentAngle < targetAngle then
    --                 currentAngle = currentAngle + speed
    --                 update(sector, cc.p(0, 0), radius, 360, currentAngle)
    --             end
    --         end,
    --         1
    --     )

    --     -- update(sector, cc.p(0, 0), radius, 360, 45)

    --     return progressBar
    -- end

    btn.updatePropgress = function(progress)
        update(sector, cc.p(0, 0), 50, 360, progress * 3.6)
    end
end

-- 倒计时
function GameEntry:updateTagTime()
    for i, v in ipairs(self._timedownInfo) do
        local leftTime = v.endTime - self._module:getServerTime()
        if leftTime >= 0 then
            local d = math.floor(leftTime / 86400)
            local h = math.floor((leftTime - d * 86400) / 3600)
            local m = math.floor((leftTime - d * 86400 - h * 3600) / 60)
            local strTime = string.format("限时%d天%02d时", d, h)
            if d == 0 then
                strTime = string.format("限时%02d时%02d分", h, m)
            end
            v.txt:setString(strTime)
            local txtWidth = v.txt:getContentSize().width
            v.txt:getParent():setContentSize(txtWidth + 41, 63)
        else
            v.txt:getParent():setVisible(false)
        end
    end
end

function GameEntry:startShow()
    local idx = 1
    for i = 1, 3 do
        for j = 1, 2 do
            if self._btns[i][j] then
                self._btns[i][j].ui:setPosition(self._btnPos[i][j])
                self._btns[i][j].ui:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation", boneName = tostring(idx), slotName = tostring(idx)})
                idx = idx + 1
            end
        end
    end
end
function GameEntry:startHide(time)
    local idx = 1
    for i = 1, 3 do
        for j = 1, 2 do
            if self._btns[i][j] then
                self._btns[i][j].ui:addLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = "animation/GoldNew/zzb_jbdt_zjm.json", animationName = "animation2", boneName = tostring(idx), slotName = tostring(idx)})
                idx = idx + 1
            end
        end
    end
end
return GameEntry
  �S  