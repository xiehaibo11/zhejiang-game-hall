-- 福袋活动
local LuckyBagView = class("LuckyBagView", XH.ViewBase)

function LuckyBagView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/LobbyShare/LuckyBagView.csb"
end

function LuckyBagView:getBindingInfo()
    return {
        --
        ["_KW_TEXT_TIME"] = { varName = "_txtTime" },
        ["_KW_BTN_CLOSE"] = {varName = "_KW_BTN_CLOSE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnClose"},
        ["_KW_BTN_SHARE"] = {varName = "_KW_BTN_SHARE", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnShare"},
        ["_KW_BTN_TEST"] = {varName = "_btnTest", type = XH.UI_TYPE.BUTTON, onTouchEnded = "testbtnClick"},
        ["_KW_LISTVIEW"] = {varName = "_KW_LISTVIEW"},
        ["_KW_PANEL_ITEM"] = {varName = "_KW_PANEL_ITEM"},
        ["_KW_PANEL_ITEM_FIRST"] = {varName = "_panelFirst"},
        ["_KW_PANEL_ITEM_EXTRA"] = {varName = "_panelExtra"},
        ["_KW_PANEL_ANI"] = {varName = "_panelAni"},
        ["_KW_PANEL_BTN_ANI"] = {varName = "_panelbtnAni"},
        ["_KW_PANEL_TIME"] = {varName = "_panelTime"},
        ["_KWTEXT"] = {varName = "_txtDes"},
    }
end

function LuckyBagView:ctor(param)
    LuckyBagView.super.ctor(self)
    self:initUI()

    self._source = param.source or "大厅"
    local m = XH.lobby:getModule("Share")
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.ohfx25070901 ,{page = param.source, room_mode = m:getRoomMode(), game_id = m:getGameID()})
    XH.SpineManager:playAniWithComplete(self._panelAni, "res/animation/Common/", "zzb_dt_sffd", "cx", false, "loop", true)
    XH.SpineManager:playAni(self._panelAni, "res/animation/Common/", "qgb_ty_baojinbixiao", "animation", false, nil, nil, false)
    XH.SpineManager:playAni(self._panelbtnAni, "res/animation/Common/", "zzb_dt_sffd", "btn", true)
    local jsonFilePath = "res/animation/Common/zzb_dt_sffd_animation.json"
    self._KW_BTN_SHARE:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "btn", slotName = "btn"})
    self._KW_BTN_CLOSE:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "x", slotName = "x"})
    self._panelTime:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "x", slotName = "x"})
    self._txtDes:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "x", slotName = "x"})
    self._panelFirst:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "jl1", slotName = "jl1"})
    self._panelExtra:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "jl2", slotName = "jl2"})
end

function LuckyBagView:initUI()
    self:checkShow()
    self:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function()
        self:checkShow()
    end))))
    local info = XH.lobby:getModule("Share"):getLuckyBagInfo()
    local jsonFilePath = "res/animation/Common/zzb_dt_sffd_animation.json"
    local width
    if info.bases and #info.bases ~= 0 then
        for i = 1, #info.bases do
            local temp = self._KW_PANEL_ITEM:clone()
            if width == nil then
                width = temp:getContentSize().width
            end
            temp:setVisible(true)
            temp:setOpacity(0)
            self:initPanelItem(temp, info.bases[i], {scale = 0.7})

            self._KW_LISTVIEW:addChild(temp)
        end
    end

    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.01),cc.CallFunc:create(function()
        local children = self._KW_LISTVIEW:getChildren()
        for i = 1, #children do
            children[i]:runAction(cc.Sequence:create(cc.DelayTime:create(0.4 + 0.066 * i), cc.CallFunc:create(function()
                children[i]:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "1", slotName = "1"})
            end)))
        end
    end)))    

    if width then
        local size = self._KW_LISTVIEW:getContentSize()
        self._KW_LISTVIEW:setContentSize(cc.size(width*#info.bases, size.height))
    end

    if info.firsts and info.firsts[1] then
        self:initPanelItem(self._panelFirst, info.firsts[1], {scale = 0.68})
    else
        self._panelFirst:setVisible(false)
    end
    if info.extras and info.extras[1] then
        self:initPanelItem(self._panelExtra, info.extras[1], {scale = 0.68})
    else
        self._panelExtra:setVisible(false)
    end
    self._btnTest:setVisible(false)
end

function LuckyBagView:initPanelItem(itemNode, info, param)
    local picImg = itemNode:getChildByName("_KW_PIC_AWARD")
    local size = picImg:getContentSize()
    local headImage = XH.RemoteImage.new():setAnchorPoint(cc.p(0.5, 0.5)):setPosition(size.width * 0.5, size.height * 0.5):addTo(picImg)
    headImage:setUrl(info.icon or "")
    itemNode:getChildByName("_KW_TEXT_NAME"):setString("x" .. info.count)
    if param and param.scale then
        local sizeImge = headImage:getContentSize()
        local minSize = math.max(math.min(math.max(sizeImge.width, sizeImge.height), 2*size.width), size.width)
        headImage:setScale(0.8* size.width / minSize)
    end
end

function LuckyBagView:checkShow()
    local t = XH.lobby:getModule("Share"):getRemainTime()
    self._txtTime:setString(self:getLeftTimeStr(t))
end

function LuckyBagView:getLeftTimeStr(time)
    return string.format("%02d", math.floor(time/3600)) .. ":" .. string.format("%02d", math.floor((time%3600)/60))
end

function LuckyBagView:onBtnClose()
    self:close()
end

function LuckyBagView:reqShareAwardFailed()
end

function LuckyBagView:reqShareAward()
    XH.lobby:getModule("Share"):reqLuckyBag()
end

function LuckyBagView:onBtnShare()
    XH.lobby:getModule("Share"):setShareScene(self._source or "大厅", "分享福袋")
    XH.lobby:getModule("Share"):startShareLuckyBag(self.reqShareAward, self.reqShareAwardFailed, self)
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.GOLD_SHARE_NEW_LOBBY_VIEW_CLICK, nil, {area_id = XH.areaData:getAreaID()})
end

function LuckyBagView:testbtnClick()
    XH.SysTool.copyString(XH.sdkManager:getShareUrl())
    XH.TipTool.showToast("复制成功!")
end

return LuckyBagView
>