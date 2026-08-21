local MoreGame = class("MoreGame", XH.Bridge.ViewBase)
local LobbyConfig = XH.Bridge:require("lobby.Modules.Lobby.Config")
local ConfigurationDefine = XH.Bridge:require("lobby.Modules.Configuration.Define")
local LocalConfig = import("..Configs.LocalConfig")
local RemoteConfig = import("..Configs.RemoteConfig")
local Utils = import("..Tool.Utils")
local ActionUtils = import("..Tool.ActionUtils")
local Progress = require("src.lobby.Modules.GoldNew.Views.Progress")

local UI_PATH = LocalConfig.IMG_PATH.MORE_GAME
local COLOR = {
    cc.c3b(0x6a, 0xb0, 0x49), cc.c3b(0x89, 0x65, 0xda), cc.c3b(0x47, 0xb4, 0xa3), cc.c3b(0xda, 0x8e, 0x65), cc.c3b(0x42, 0x8e, 0xce),
    cc.c3b(0xcd, 0x5d, 0x51)
}
local COLOR_TAG_BG = {
    cc.c3b(0x6a, 0xb0, 0x49), cc.c3b(0x89, 0x65, 0xda), cc.c3b(0x47, 0xb4, 0xa3), cc.c3b(0xda, 0x8e, 0x65), cc.c3b(0x42, 0x8e, 0xce),
    cc.c3b(0xcd, 0x5d, 0x51)
}

function MoreGame:getCSBPath()
    return XH.Bridge:getCCSResPath("MoreGame.csb")
end

function MoreGame:getBindingInfo()
    return {["_item"] = {varName = "_item"}, ["_list"] = {varName = "_list"}}
end

function MoreGame:getProxyEvents()
    return {
        {module = XH.goldConfigManager, eventKeyName = "GOLD_EVENT_ROOMINFO", callBack = "onRespGoldRoomInfo"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_TIME", callBack = "onEventTime"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_FLUSH_MOREGAME", callBack = "onEventFlushMoreGame"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_SAVE_INFO", callBack = "onSaveInfo"},
        {module = XH.lobby:getModule("Lobby"), eventKeyName = "EVENT_WIN_SIZE_CHANGE", callBack = "onWinSizeChange"},
        {module = XH.lobby:getModule("LianYun"), eventKeyName = "EVENT_UPDATE_PROGRESS",callBack = "onLianYunProgressChanged"}
    }
end

function MoreGame:ctor(param)
    self._module = XH.Bridge:getModule("GoldNew")
    MoreGame.super.ctor(self, param)
    self._goldView = param.goldView
    self._list:setScrollBarEnabled(false)
    self._tagNames = {"_imgTagLT", "_imgTagRT", "_imgTagLB"}
    self._btnLianYun = nil
end

function MoreGame:onWinSizeChange()
    self:changeListSize()
    self:updateUI()
end

function MoreGame:onEnter()
    self:changeListSize()
end

function MoreGame:changeListSize()
    local pSize = self:getParent():getContentSize()
    local notchWidth = XH.UITool.getLiuHaiWidth()
    self._list:setContentSize(cc.size(pSize.width - notchWidth, pSize.height))
end

function MoreGame:isFullScreen()
    return true
end

function MoreGame:onSaveInfo()
    self:updateUI()
end

function MoreGame:onEventTime()
    if tolua.isnull(self) then
        return
    end
    self:updateTagTime()
end

function MoreGame:onEventFlushMoreGame()
    self:updateUI()
end

function MoreGame:updateUI()
    local roomInfo = XH.Bridge:getModule("GoldNew"):getMoreGameInfo()
    local md5 = XH.SysTool:md5_encode(json.encode(roomInfo))
    if md5 == self._moreInfoMD5 then
        return
    end
    self._moreInfoMD5 = md5
    if not XH.isEmbeddedApp() then
        table.insert(roomInfo, {LeisureID = 0, GameTitle = "更多游戏"})
    end

    self._items = {}
    self._list:removeAllChildren()

    self:changeListSize()
    local svSize = self._list:getContentSize()
    local roomCnt = math.ceil(#roomInfo / 2)
    local itemWidth = self._item:getContentSize().width
    local gap = self._list:getItemsMargin()
    local bigNum = svSize.width - itemWidth * roomCnt - (roomCnt - 1) * gap
    if bigNum / 2 > gap then
        local widget = ccui.Widget:create()
        local width = bigNum / 2 - gap
        widget:setContentSize(width, 10)
        self._list:pushBackCustomItem(widget)
    end
    self._timedownInfo = {}
    for i = 1, #roomInfo, 2 do
        local item = self._item:clone()
        self._items[i] = item
        self._list:pushBackCustomItem(item)
        for j = 0, 1 do
            local gameItem = item:getChildByName("_game" .. (j + 1))
            local info = roomInfo[i + j]
            local bgImgIdx = (i + j - 1) % 6 + 1
            gameItem:setBackGroundImage(UI_PATH .. string.format("Img_gd_%d.png", bgImgIdx), ccui.TextureResType.plistType)
            gameItem:setVisible(info ~= nil)
            if info then
                local tagLBBg = XH.UITool.seekWidgetByName(gameItem, "imgTabLBBg")
                if tagLBBg then
                    tagLBBg:setColor(COLOR_TAG_BG[bgImgIdx])
                end
                local gameNames = {XH.StringTool.splitStringAtPosition(info.GameTitle, 4)}
                if info.GameTitleEx then
                    gameNames = string.split(info.GameTitleEx, "=")
                end

                local name1, name2 = gameNames[1], (gameNames[2] or "")
                local txtName1 = gameItem:getChildByName("_txtName1")
                local txtName2 = gameItem:getChildByName("_txtName2")

                txtName1:setString(name1)
                txtName2:setString(name2)
                txtName1:enableOutline(COLOR[bgImgIdx], 3) -- 黑色描边
                txtName2:enableOutline(COLOR[bgImgIdx], 3) -- 黑色描边

                if j == 1 then
                    local UIType = (i - 1) % 3 + 1
                    XH.UITool.loadTexture(item, "_imgDY", UI_PATH .. string.format("Img_gd_yinying%d.png", UIType), ccui.TextureResType.plistType)
                    XH.UITool.setVisible(item, "_imgDY", true)
                end

                local tagInfo = RemoteConfig:getEntryTagInfo(info.LeisureID)
                local tagWithGameNameWidth = 0
                local tagWithGameName = nil
                if tagInfo then
                    for i, v in pairs(tagInfo) do
                        if self._tagNames[i] then
                            local node = gameItem:getChildByName(self._tagNames[i])
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

                local itemWidth = gameItem:getContentSize().width
                local startX = (itemWidth - tagWithGameNameWidth - txtName1:getContentSize().width - txtName2:getContentSize().width -
                                   (gameNames[2] == "" and 0 or 10)) / 2
                if tagWithGameName then
                    tagWithGameName:setPositionX(startX)
                end
                txtName1:setPositionX(tagWithGameNameWidth + startX)
                txtName2:setPositionX(tagWithGameNameWidth + startX + txtName1:getContentSize().width + 10)

                if info.ProgeressInfo and gameItem:getChildByName("KW_NODE_PROGRESS") == nil then
                    self._btnLianYun = gameItem
                    info.ProgeressInfo.type = "more"
                    Progress.initProgressView(gameItem, info.ProgeressInfo)
                end
            end
            XH.UIButton.create(gameItem, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:onClickGameBtn(gameItem, info, (i - 1) * 2 + j + 1)
            end)
        end
    end
    -- self:startShow()
end

function MoreGame:onLianYunProgressChanged(event)
    if not event.data then
        return
    end
    local percent = event.data.percent
    if self._btnLianYun and not tolua.isnull(self._btnLianYun) then
        Progress.showProgressPercent(self._btnLianYun, percent)
    end
end

function MoreGame:onClickGameBtn(btn, info, idx)
    local gameID = info.GameID
    if info.LeisureID == 0 then
        gameID = 2
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI then
        gameID = LobbyConfig.QXBP_GAMEID
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_CARD13 then
        gameID = LobbyConfig.CARD13_GAMEID
    end
    XH.Bridge:throwData("xjb25022805", {page = "更多游戏", page_item_id = idx, game_id = gameID, oldsr = XH.playerData:getSR() or 0})
    if info.LeisureID == 0 then
        return XH.Bridge.viewManager:openView("GoldHallEditGameView")
    elseif info.id == LocalConfig.BTN_ID.LIANYUN_QIXINGBAOPAI or info.id == LocalConfig.BTN_ID.LIANYUN_CARD13 then
        XH.lobby:getModule("LianYun"):enter({gameID = gameID, checkPosition = true})
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.lygx032501, {
            hostid = XH.lobby:getModule("LianYun"):getHostId(),
            host_areaid = XH.areaData:getAreaID(),
            block_label = "金币大厅更多游戏"
        })
        return
    end
    self._lastConf = info
    XH.Bridge:getModule("GoldNew"):showChooseRoomPre(info)
end

function MoreGame:onRespGoldRoomInfo(event)
    if self._lastConf then
        XH.TipTool.hideLoading()
        XH.Bridge:getModule("GoldNew"):joinGoldRoomFirst(self._lastConf)
        self._lastConf = nil
    end
end

function MoreGame:onExit()
    self._lastConf = nil
end

local vs = [[
attribute vec4 a_position;
attribute vec2 a_texCoord;
varying vec2 v_texCoord;

void main() {
    gl_Position = CC_PMatrix * a_position;
    v_texCoord = a_texCoord;
}
]]

local fs = [[
#ifdef GL_ES
precision mediump float;
#endif

varying vec2 v_texCoord;
uniform sampler2D u_texture;
uniform vec4 u_shadowColor;
uniform float u_shadowOffsetX;
uniform float u_shadowOffsetY;

void main() {
    vec4 color = texture2D(u_texture, v_texCoord);
    if (color.a > 0.0) {
        vec2 shadowCoord = v_texCoord + vec2(u_shadowOffsetX, u_shadowOffsetY);
        vec4 shadowColor = u_shadowColor;
        shadowColor.a *= (1.0 - v_texCoord.y); // 渐变过渡效果
        gl_FragColor = color + shadowColor;
    } else {
        gl_FragColor = color;
    }
}
]]
function MoreGame:createShadowSprite(sprite)
    -- 创建 Sprite
    -- local sprite = cc.Sprite:create(imagePath)
    -- if not sprite then
    --     return nil
    -- end

    -- 加载着色器
    local shaderProgram = cc.GLProgram:createWithByteArrays(vs, fs)
    if not shaderProgram then
        return sprite
    end

    -- 编译着色器
    shaderProgram:link()
    shaderProgram:updateUniforms()

    -- 设置着色器
    local glProgramState = cc.GLProgramState:getOrCreateWithGLProgram(shaderProgram)
    sprite:setGLProgramState(glProgramState)

    -- 设置投影颜色和偏移量
    local shadowColor = cc.c4f(0.0, 0.0, 0.0, 0.5) -- 黑色半透明
    local shadowOffsetX = 0.02
    local shadowOffsetY = -0.02

    glProgramState:setUniformVec4("u_shadowColor", shadowColor)
    glProgramState:setUniformFloat("u_shadowOffsetX", shadowOffsetX)
    glProgramState:setUniformFloat("u_shadowOffsetY", shadowOffsetY)
    return sprite
end

-- 倒计时
function MoreGame:updateTagTime()
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

function MoreGame:startShow()
    self._list:scrollToLeft(0, false)
    self._goldView:startShow("top")
    for i, v in ipairs(self._list:getChildren()) do
        ActionUtils:runChooseRoomMoveFadeIn(v, i)
    end
end

function MoreGame:startHide()

end
return MoreGame
   �5  