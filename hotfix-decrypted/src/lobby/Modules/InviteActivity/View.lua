local InviteMainLayer = class("InviteMainLayer", XH.ViewBase)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")
local ViewAniConfig = require("app.Base.ViewAniConfig")

function InviteMainLayer:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Invite/InviteMainLayer.csb"
end

function InviteMainLayer:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_root"},
        ["_body"] = {varName = "_body"},
        ["_txtMessage3"] = {varName = "_txtMessage3"},
        ["_txtMessage2"] = {varName = "_txtMessage2"},
        ["_txtMessage1"] = {varName = "_txtMessage1"},
        -- ["_txtMessageFK"] = {varName = "_txtMessageFK"},
        ["_txtSuccesInviteRen"] = {varName = "_txtSuccesInviteRen"},
        ["_txtRuleHelp"] = {varName = "_txtRuleHelp"},
        ["_txtInviteHelp"] = {varName = "_txtInviteHelp"},
        ["_txtInbtnAward"] = {varName = "_txtInbtnAward"},
        ["_listInviteAward"] = {varName = "_listInviteAward"},
        ["_listAward"] = {varName = "_listAward"},
        ["_imgTitle"] = {varName = "_imgTitle"},
        ["_item1"] = {varName = "_item1"},
        ["_item2"] = {varName = "_item2"},
        ["_item3"] = {varName = "_item3"},
        ["_progress"] = {varName = "_progress"},
        ["_panelRuleHelp"] = {varName = "_panelRuleHelp"},
        ["_panelInviteHelp"] = {varName = "_panelInviteHelp"},
        ["_panelHaiBao"] = {varName = "_panelHaiBao"},
        ["_panelHaiBaoQR"] = {varName = "_panelHaiBaoQR"},
        ["_drawNode"] = {varName = "_drawNode"},
        ["_aniNode"] = {varName = "_aniNode"},
        ["_touchBlock"] = {varName = "_touchBlock", type = XH.UI_TYPE.UIButton, onTouchEnded = "clickHideHelp"},
        ["_btnInviteRecord"] = {varName = "_btnInviteRecord", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickInviteRecord"},
        ["_btnAward"] = {varName = "_btnAward", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickAward"},
        ["_btnAwardRecord"] = {varName = "_btnAwardRecord", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickAwardRecord"},
        ["_btnRuleHelp"] = {varName = "_btnRuleHelp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickRuleHelp"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"},
        ["_btnInviteHelp"] = {varName = "_btnInviteHelp", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickHelp"},
        ["_btnInviteShare"] = {varName = "_btnInviteShare", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickInvite"},
        ["_btnCopy"] = {varName = "_btnCopy", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickInviteCopy"},
        ["_btnHaiBao"] = {varName = "_btnHaiBao", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickInviteHaiBao"},
    }
end

function InviteMainLayer:getProxyEvents()
    return {
        {module = self._module, eventName = "EVENT_BASE_INFO", callBack = "onNotifyInviteBasicInfo"},
        {module = self._module, eventName = "EVENT_GET_PRIZE", callBack = "onNotifyInviteGetPrize"},
        {module = XH.sdkManager, eventName = "EVENT_SAVE_IMAGE_CALLBACK", callBack = "onSaveImageCallBack"},
        -- { module = XH.lobby:getModule("BackActivity"),eventName = "BackActivityFlushInfo", callBack = "flushActInfo"},
        -- { module = XH.lobby:getModule("BackActivity"),eventName = "EVENT_GET_ACT_INFO_BACK", callBack = "onGetActInfoBack" },
    }
end

function InviteMainLayer:ctor(param)
    self._module = XH.lobby:getModule("InviteActivity")
    InviteMainLayer.super.ctor(self, param)
    self._module:reqInviteActivityInfo()
    self:clickHideHelp()
    self._txtMessage1:setString("")
    self._txtMessage2:setString("")
    self._txtMessage3:setString("")
    self._listAward:setScrollBarEnabled(false)
    self._listInviteAward:setScrollBarEnabled(false)
    self:initListView()

    self._module:test(2)
    self._btnInviteRecord:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.ScaleTo:create(0.5, 1.1), cc.ScaleTo:create(0.5, 1.0), cc.DelayTime:create(0.5))))
    self._panelHaiBao:setVisible(false)

    local info = self._module:getRemoteCfg({})
    if info and info.in2026act then
        self._imgTitle:ignoreContentAdaptWithSize(true)
        self._imgTitle:loadTexture("hall/CSB/Activity/Invite/ImgNew/Btn_bt1.png", ccui.TextureResType.plistType)
        local numid = XH.playerData:getNumberID()
        if param and param.source == "auto" and numid % 2 == 1 then
            -- XH.audioManager:playEffect("audio/newyear_act.mp3")
        end
    end
    XH.SpineManager:playAniWithComplete(self._aniNode, "animation/Lobby/Activity/InviteAct/", "spine_yxhl_cj", "cx", false, "loop", true)
    -- XH.lobby:getModule("QRcode"):savePic(self._module:getShareUrl(), "laxinQRcode.png", 256)
end

function InviteMainLayer:getAniConfig()
    return {aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self._body, btnList = {}}
end

-- 更新领取按钮
function InviteMainLayer:onNotifyInviteGetPrize()
    if self._inviteBasicInfo.singleReadyGet > 0 then
        self._txtInbtnAward:setString("领取x" .. self._inviteBasicInfo.singleReadyGet)
        self._btnAward:setTouchEnabled(true)
        XH.UITool.resetGray(self._btnAward)
    else
        self._txtInbtnAward:setString("领取")
        self._btnAward:setTouchEnabled(false)
        XH.UITool.gray(self._btnAward)
    end
end

function InviteMainLayer:onNotifyInviteBasicInfo(event)
    self._inviteBasicInfo = event.data
    -- self._inviteBasicInfo.inviteTotal = 10
    self._txtSuccesInviteRen:setString(self._inviteBasicInfo.inviteTotal .. '人')
    local intro1 = string.gsub(self._inviteBasicInfo.actIntro.intro1, ";", "\n")
    local intro2 = string.gsub(self._inviteBasicInfo.actIntro.intro2, ";", "\n")
    self._txtRuleHelp:setString(intro1)
    self._txtInviteHelp:setString(intro2)
    self:onNotifyInviteGetPrize()
    self:recAwardTipRotation()
    self:initProgressBtn()
    self:updateUI()
    -- XH.UITool.setVisible(self._btnInviteRecord, "_imgRedPoint", self._module:getShowInviteRedPoint())
end
function InviteMainLayer:initListView()
    self._listAward:removeAllChildren()
    self._listInviteAward:removeAllChildren()
    self._awardItems = {}
    self._stageItems = {}
    for i=1, 2 do
        local item = self._item1:clone()
        self._listInviteAward:pushBackCustomItem(item)
        table.insert(self._awardItems, item)
        item:setVisible(false)
    end

    for i=1, 6 do
        local itemMode = self._item2
        local item = itemMode:clone()
        self._listAward:pushBackCustomItem(item)
        XH.UIButton.create(item:getChildByName("btnShare"), XH.UIButton.CLICK_STYLE.DEFAULT, function()
            self:clickInvite()
        end)
        table.insert(self._stageItems, item)
        item:setVisible(false)
    end
end

function InviteMainLayer:updateUI()
    for i,v in ipairs(self._awardItems) do
        v:setVisible(false)
    end
    for i,v in ipairs(self._stageItems) do
        v:setVisible(false)
    end
    for i, v in ipairs(self._inviteBasicInfo.singleAwards) do
        local item = self._awardItems[i]
        if item then
            Utils:setImgUrl(XH.UITool.seekNodeByName(item, "imgIcon"), v.url, true)
            XH.UITool.setText(item, "txtNum", "x" .. v.num)
            item:setVisible(true)
        end
    end

    for i, v in ipairs(self._inviteBasicInfo.stageAwards) do
        local item = self._stageItems[i]
        if item then
            item:setVisible(true)
            local isTwoAwards = v.prizeList and #v.prizeList > 1
            local icons = {"imgIcon", "imgIcon2"}
            local isHuaFei = self:isHuaFei(v.prizeList[1])
            for i2, v2 in ipairs(v.prizeList) do
                local prizeName = {}
                if i2 <= 2 then
                    Utils:setImgUrl(XH.UITool.seekNodeByName(item, icons[i2]), v2.prizeImage, true)
                    local numStr = v2.prizeName .. "x" .. v2.prizeNum
                    if self:isHuaFei(v2) or self:isJDCard(v2) then
                        numStr = v2.prizeName
                    end
                    table.insert(prizeName, numStr)
                end
                XH.UITool.setText(item, "txtNum", table.concat(prizeName, " "))
            end
            XH.UITool.setText(item, "txtDes", "邀请" .. v.num .. "人")
            -- v.status = 1
            XH.UITool.setVisible(item, "imgGot", v.status == 2)
            XH.UITool.setVisible(item, "btnGet", v.status == 1)
            XH.UITool.setVisible(item, "btnShare", v.status == 0)
            XH.UITool.setVisible(item, "aniGet", v.status == 1)
            XH.UITool.setVisible(item, "imgAdd", not isHuaFei)
            XH.UITool.setText(item, "txtShare", isHuaFei and "领话费" or "领房卡")
            if v.status == 1 then
                local aniNode = item:getChildByName("aniGet")
                XH.SpineManager:playAni(aniNode, "animation/Lobby/Activity/InviteAct/", "eff_yxhl_btn", "animation", true)
            elseif v.status == 0 then
                item:getChildByName("btnShare"):runAction(cc.RepeatForever:create(cc.Sequence:create(cc.ScaleTo:create(0.5, 1.1), cc.ScaleTo:create(0.5, 1.0), cc.DelayTime:create(0.5))))
            end
            XH.UIButton.create(item:getChildByName("btnGet"), XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:onClickItem(v)
            end)
            XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
                self:clickInvite()
            end)
        end
    end
end

function InviteMainLayer:isHuaFei(data)
    return string.find(data.prizeName, "话费")
end
function InviteMainLayer:isJDCard(data)
    return string.find(data.prizeName, "京东卡")
end

function InviteMainLayer:onClickItem(data)
    local isPhoneCard = false
    for i, v in ipairs(data.prizeList or {}) do
        if self:isHuaFei(v) then
            isPhoneCard = true
            break
        end
    end
    if isPhoneCard then
        -- XH.viewManager:openView("InvitePhoneNumView", nil, data)
        self._module:checkShowTip(data, function()
            self:clickHelp()
        end)
    else
        self._module:reqInviteGetStagePrize(data.id)
    end
end

function InviteMainLayer:initProgressBtn()
    -- self._drawNode:clear()
    -- local radius = 6
    -- self._drawNode:removeAllChildren()
    -- local grogressWidth = self._progress:getContentSize().width
    -- local maxNum = self._inviteBasicInfo.stageAwards[#self._inviteBasicInfo.stageAwards].num or 1
    -- self._progress:setPercent(100 * self._inviteBasicInfo.inviteTotal / maxNum)
    -- for i, v in ipairs(self._inviteBasicInfo.stageAwards) do
    --     local x = grogressWidth * (v.num / maxNum - 0.5) + self._progress:getPositionX()
    --     local imgPath = self._inviteBasicInfo.inviteTotal >= v.num and "Img_jdd.png" or "Img_jdd2.png"
    --     local imgView = ccui.ImageView:create()
    --     imgView:loadTexture("hall/CSB/Activity/Invite/Img/" .. imgPath, ccui.TextureResType.plistType)
    --     imgView:setPosition(x, self._progress:getPositionY())
    --     self._drawNode:addChild(imgView)
    --     -- local color = self._inviteBasicInfo.inviteTotal >= v.num and cc.c4f(1.0, 1.0, 1.0, 1.0) or cc.c4f(0.7, 0.7, 0.7, 0.7)
    --     -- self._drawNode:drawSolidCircle(cc.p(x, self._progress:getPositionY()), radius, 0, 32, 1, 1, color)
    -- end
end

function InviteMainLayer:clickClose(send, eventType)
    self:close()
end
function InviteMainLayer:clickHideHelp(send, eventType)
    self._panelRuleHelp:setVisible(false)
    self._panelInviteHelp:setVisible(false)
    self._touchBlock:setVisible(false)
end
function InviteMainLayer:clickRuleHelp(send, eventType)
    self._panelRuleHelp:setVisible(true)
    self._touchBlock:setVisible(true)
    XH.NewThrowDataManager:throwData("lys26012306",{page_item_id=1})
end
function InviteMainLayer:clickHelp(send, eventType)
    self._panelInviteHelp:setVisible(true)
    self._touchBlock:setVisible(true)
    XH.NewThrowDataManager:throwData("lys26012306",{page_item_id=2})
end
function InviteMainLayer:clickInvite(send, eventType)
    self._module:shareWX()
    XH.NewThrowDataManager:throwData("fx24090908", {item_id = 'URL'})
end

function InviteMainLayer:clickInviteCopy(send, eventType)
    self._module:shareWX(true)
    XH.NewThrowDataManager:throwData("jsh25121802")
end

function InviteMainLayer:clickInviteHaiBao(send, eventType)
    if not self._panelHaiBaoQR.qrnode then
        self._panelHaiBaoQR:removeAllChildren()
        local node = XH.lobby:getModule("QRcode"):createNode(self._module:getShareUrl(), 194)
        self._panelHaiBaoQR:addChild(node)
        self._panelHaiBaoQR.qrnode = node
    end

    self._panelHaiBao:setVisible(true)
    local pos = self._panelHaiBao:convertToWorldSpace(cc.p(0, 0))
    local contentSize = self._panelHaiBao:getContentSize()
    local rect = cc.rect(pos.x, pos.y, contentSize.width, contentSize.height)
    XH.SysTool.captureScreenshotArea(function()
        
        XH.sdkManager:saveImageToGallery(cc.FileUtils:getInstance():getWritablePath() .. "tmp/inviteact.jpg")
    end, "inviteact.jpg", rect)
    self._panelHaiBao:setVisible(false)
    XH.NewThrowDataManager:throwData("jsh25121803")
end

function InviteMainLayer:onSaveImageCallBack(event)
    local code = event.data.code
    if code == XH.ThirdDefine.SAVEL_IMAGE_TO_GALLERY.SAVE_IMAGE_SUCCESS then
        XH.TipTool.showToast("分享海报已保存到相册")
    elseif code == XH.ThirdDefine.SAVEL_IMAGE_TO_GALLERY.SAVE_IMAGE_FAIL then
        XH.TipTool.showToast("保存海报失败")
    end
end
function InviteMainLayer:clickAward(send, eventType)
    self._module:reqInviteGetPrize()
    XH.NewThrowDataManager:throwData("jsh25110502")
end
function InviteMainLayer:clickAwardRecord(send, eventType)
    XH.viewManager:openView("InviteActAwardRecord")
    XH.NewThrowDataManager:throwData("jsh25110503")
end
function InviteMainLayer:clickInviteRecord(send, eventType)
    XH.viewManager:openView("InviteActInviteRecord")
    XH.NewThrowDataManager:throwData("jsh25110501")
    -- self._module:setShowInviteRedPoint(false)
    -- XH.UITool.setVisible(self._btnInviteRecord, "_imgRedPoint", false)
end
-- 轮播中奖数据
function InviteMainLayer:recAwardTipRotation()
    -- local updateMsg = function()
    --     local pho = {13, 15, 18}
    --     local txts = {self._txtMessage1, self._txtMessage2, self._txtMessage3}
    --     for i, v in ipairs(txts) do
    --         local tempAward = self._inviteBasicInfo.stageAwards[math.random(1, #self._inviteBasicInfo.stageAwards)]
    --         local msg = pho[math.random(1, 3)] .. math.random(0, 9) .. "****" .. math.random(1000, 9999) .. " 成功邀请 " .. tempAward.num ..
    --                         " 人\n获得了" .. tempAward.prizeName
    --         v:setString(msg)
    --     end
    -- end
    -- self._txtMessage1:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(2.5), cc.CallFunc:create(updateMsg))))
    -- updateMsg()
end

function InviteMainLayer:onEnter()
    InviteMainLayer.super.onEnter(self)
    self._startTime = socket.gettime()
end

function InviteMainLayer:onExit()
    XH.lobby:getModule("NewYear2026"):addShowTime(socket.gettime() - self._startTime)
    XH.NewThrowDataManager:throwData("fx24090907", {duration = math.floor(socket.gettime() - self._startTime)})
    InviteMainLayer.super.onExit(self)
end
return InviteMainLayer
�=  