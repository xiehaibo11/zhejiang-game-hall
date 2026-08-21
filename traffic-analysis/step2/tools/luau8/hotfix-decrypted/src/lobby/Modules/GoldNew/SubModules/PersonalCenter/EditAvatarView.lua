local EditAvatarView = class("GoldEditAvatarView", XH.Bridge.ViewBase)
local UrlConf = XH.Bridge:require("app.Config.UrlConf")
local RedPointManager = import("...Manager.RedPointManager")
local LocalConfig = import("...Configs.LocalConfig")
local Utils = import("...Tool.Utils")
local Config = import(".Config")
local ShowPropFunction = XH.Bridge:require("lobby.Modules.BagSysNew.ShowPropFunction")
local POP_UI_PATH = LocalConfig.IMG_PATH.POP
local ItemAniPosY = 60
local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

function EditAvatarView:getCSBPath()
    return XH.Bridge:getCCSResPath("PersonalCenter/EditAvatar.csb")
end

function EditAvatarView:getBindingInfo()
    local info = {
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onClickClose"},
        ["_btnAvatar"] = {varName = "_btnAvatar", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabAvatar"},
        ["_btnFrame"] = {varName = "_btnFrame", type = XH.UI_TYPE.IMAGE, onTouchEnded = "onClickTabFrame"}
    }
    local names = {
        "_panelLT", "_panelLeft", "_panelRight", "_list", "_item", "_panelPreview", "_panelHead", "_panelHeadImg", "_panelHeadFrameAni",
        "_panelHeadFrameRemote", "_panelHeadFrame", "_btnUnload", "_btnLoad", "_listLeft", "_txtPreviewName"
    }
    for i, v in ipairs(names) do
        info[v] = {varName = v}
    end
    return info
end

function EditAvatarView:getProxyEvents()
    return {{module = XH.Bridge:getModule("BagSysNew"), eventKeyName = "EVENT_SELF_BACK_PACK_DATA", callBack = "onRefresh"}}
end

function EditAvatarView:ctor(param)
    param = param or {}
    self._module = XH.Bridge:getModule(LocalConfig.MP.PC)
    EditAvatarView.super.ctor(self, param)
    self._bagData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfBagData()
    self._tab = param.tab or "avatar"
    self:setBtnSelectState(self._btnAvatar, self._tab == "avatar")
    self:setBtnSelectState(self._btnFrame, self._tab == "frame")
    if not XH.Bridge:isSupport("headFrame") then
        self._btnFrame:setVisible(false)
    end
    if XH.isEmbeddedApp() then
        self._btnFrame:setVisible(false)
    end
    self:updateListContent()
    self:updateUserInfo()
    self._btnUnload:setVisible(false)
    self._btnLoad:setVisible(false)
    self._list:setScrollBarEnabled(false)
    self._listLeft:setScrollBarEnabled(false)
end

function EditAvatarView:onRefresh()
    if self._tab == "frame" then
        self._bagData = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfBagData()
        self:updateListContent()
    end
end

function EditAvatarView:getMyProp(propid)
    for i, v in ipairs(self._bagData.count_prop_info) do
        if v.propsid == propid and v.propscnt > 0 then
            return v
        end
    end
    for i, v in ipairs(self._bagData.time_prop_info) do
        if v.propsid == propid and v.endtime then
            return v
        end
    end
end

function EditAvatarView:isHaveProp(propid)
    for i, v in ipairs(self._bagData.count_prop_info) do
        if v.propsid == propid and v.propscnt > 0 then
            return true
        end
    end
    for i, v in ipairs(self._bagData.time_prop_info) do
        if v.propsid == propid and v.endtime > XH.Bridge:getModule("GoldNew"):getServerTime() then
            return true
        end
    end
end

function EditAvatarView:adaptForLiuHai()
    if not self.hasInit then
        self.hasInit = true
        local notchWidth = XH.UITool.getLiuHaiWidth()
        if notchWidth > 0 then
            XH.UITool.adaptForLiuHai({self._panelLeft, self._panelLT, self._panelRight})
        end
    end
end

function EditAvatarView:updateUserInfo()
    local head = XH.playerData:getHead()
    if head == 0 then -- default head
        local headImageKey
        if sex == 0 then -- girl
            headImageKey = "_0002_mrtx_w.png"
        else -- boy
            headImageKey = "_0002_mrtx_m.png"
        end
        XH.UITool.setPlistTextureOnNode(self._panelHeadImg, headImageKey)
    end
    local urlGold = self._module:getGoldHeadUrl()
    local url = urlGold or XH.playerData:getWeChatURL()
    if url and url ~= "" then
        Utils:setImgUrl(self._panelHeadImg, url, true)
    end
    self:updateHeadFrame()
end

function EditAvatarView:updateHeadFrame()
    local headUrlData, propid = XH.Bridge:getModule("BagSysNew"):getBagData():getSelfHeadFrameUrl()
    if headUrlData then
        local headFrameData = {url = headUrlData, propid = propid}
        self:onEventChangeHeadFrame({data = headFrameData})
        self._frameInfo = headFrameData
    else
        self:onEventChangeHeadFrame()
    end
end

function EditAvatarView:onEventChangeHeadFrame(event)
    if not event or not event.data then
        self._frameInfo = nil
        Utils:setHead(self._panelHead)
        return
    end
    if event.data then
        Utils:setHead(self._panelHead, {framePropid = event.data.propid, frameUrl = event.data.url})
    end
end

function EditAvatarView:setBtnSelectState(btn, isSelected)
    btn:setTouchEnabled(not isSelected)
    XH.UITool.loadTexture(btn, "_imgBg", POP_UI_PATH .. (isSelected and "Btn_tc_xz_di1.png" or "Btn_tc_xz_di2.png"), ccui.TextureResType.plistType)
    XH.UITool.setTextColor(btn, "_txtName", isSelected and cc.c3b(0x9d, 0x46, 0) or cc.c3b(0x99, 0x83, 0x6e))
end

-- 关闭按钮
function EditAvatarView:onClickClose(send, event)
    self:close()
end

function EditAvatarView:onClickTabAvatar(send, event)
    self._tab = "avatar"
    self:onChangeTab()
end

function EditAvatarView:onClickTabFrame(send, event)
    self._tab = "frame"
    self:onChangeTab()
end

function EditAvatarView:onChangeTab()
    local isAvatar = self._tab == "avatar"
    self:setBtnSelectState(self._btnAvatar, isAvatar)
    self:setBtnSelectState(self._btnFrame, not isAvatar)
    self:updateListContent()
    self:updateUserInfo()
    self._btnUnload:setVisible(false)
    self._btnLoad:setVisible(false)
    self._selectInfo = nil
    if isAvatar then
        self._txtPreviewName:setString("")
    end
end

function EditAvatarView:onClickEditAvatar(send, event)
    XH.Bridge.viewManager:openView("GoldHallPCEditAvatarView")
end

function EditAvatarView:onCleanup()
    EditAvatarView.super.onCleanup(self)
end

function EditAvatarView:updateItemUI(item, info, isSelect)
    local icon = item:getChildByName("layout")
    if info.isAvatar then
        XH.UITool.setVisible(item, "imgBg", false)
        Utils:setImgUrl(icon, info.url, true)
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onItemBgClick(item)
        end)
    else
        local propid = info.propid
        if not ShowPropFunction.createHeadFrameAni(icon, propid, 0.7, "ani") then
            local baseInfo = Utils:getBasePropInfo(propid)
            if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
                Utils:setImgUrl(icon, baseInfo.imageUrl, true)
            end
        end
        local isLock = not self:isHaveProp(propid)
        XH.UITool.setVisible(item, "imgLock", isLock)
        if isLock then
            XH.UITool.setColor(item, "imgBg", cc.c3b(188, 188, 188))
            XH.UITool.setColor(item, "layout", cc.c3b(188, 188, 188))
        end
        item.isLock = isLock
        XH.UIButton.create(item, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onItemBgClick(item)
        end)
    end
    if isSelect == true then
        self:setSelectItem(item)
    end
end

function EditAvatarView:updateListContent()
    self._list:removeAllChildren()
    local isAvatar = self._tab == "avatar"
    local info = isAvatar and self._module:getSupportHeadIDs() or self._module:getAllHeadPropIDs()
    local infoCount = #info
    local itemSize = self._item:getContentSize()
    local lineCnt = 4
    local itemMod = self._item
    local itemGap = 20
    if isAvatar then
        local oldHeadUrl = XH.playerData:getWeChatURL()
        local idx = table.indexof(info, 0)
        if idx and oldHeadUrl == "" then
            table.remove(info, idx)
        end
    else
        -- 排序
        table.sort(info, function(a, b)
            local aBase = self:isHaveProp(a)
            local bBase = self:isHaveProp(b)
            if aBase ~= bBase then
                return aBase
            end
            return a < b
        end)
    end
    for i = 1, infoCount, lineCnt do
        local layout = ccui.Layout:create()
        layout:setContentSize(cc.size(self._list:getContentSize().width, itemSize.height))
        self._list:pushBackCustomItem(layout)

        for j = 0, lineCnt - 1 do
            if info[i + j] then
                local item = itemMod:clone()
                item:setPosition((itemSize.width + itemGap) * j, 0)
                layout:addChild(item)
                local infoTemp = {isAvatar = isAvatar}
                local isSelect = false
                if isAvatar then
                    if info[i + j] == 0 then
                        infoTemp.url = XH.playerData:getWeChatURL()
                        infoTemp.isOldHead = true
                    else
                        infoTemp.url = string.format(self._module:getCDNHeadUrl(), info[i + j])
                    end
                else
                    infoTemp.propid = info[i + j]
                    isSelect = (self._selectInfo and self._selectInfo.propid == infoTemp.propid)
                end
                item.info = infoTemp
                item.idx = isAvatar and info[i + j] or i + j
                self:updateItemUI(item, infoTemp, isSelect)
            end
        end
        -- Utils:doLayoutHoriz(layout:getChildren(), self._list:getContentSize().width, itemGap)
    end
end

function EditAvatarView:onItemBgClick(send, event)
    self:setSelectItem(send)
end

function EditAvatarView:setSelectItem(item)
    if not item.info then
        return
    end
    self._selectInfo = item.info
    self:updatePreview(item.info, item.idx, item.isLock)
    if self._lastSelectItem and not tolua.isnull(self._lastSelectItem) then
        XH.UITool.setVisible(self._lastSelectItem, "imgSelect", false)
    end
    self._lastSelectItem = item
    XH.UITool.setVisible(item, "imgSelect", true)
end

function EditAvatarView:updatePreview(info, idx, isLock)
    local headInfo = {framePropid = info.propid, headUrl = info.url}
    local btnUnload = self._btnUnload
    local btnLoad = self._btnLoad
    if info.propid then
        local propid = info.propid
        local baseInfo = Utils:getBasePropInfo(propid)
        if baseInfo.imageUrl and baseInfo.imageUrl ~= "" then
            headInfo.frameUrl = baseInfo.imageUrl
        end
        self._txtPreviewName:setString(baseInfo.descp)
        local myPropInfo = self:getMyProp(propid) or {propscnt = 0}
        local productData = XH.Bridge:getModule("BagSysNew"):getBagData():getPropInfo(propid)
        local props_state = myPropInfo.props_state
        local isPropInBackpack = props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BACKPACK
        local bagModule = XH.Bridge:getModule("BagSysNew")

        local function setButtonVisibility(unloadVisible, loadVisible)
            btnUnload:setVisible(unloadVisible)
            btnLoad:setVisible(loadVisible)
        end

        if isLock then
            setButtonVisibility(false, false)
        else
            if bagModule:isTimeProp(productData) then
                if myPropInfo.propscnt > 0 then
                    setButtonVisibility(false, true)
                else
                    setButtonVisibility(not isPropInBackpack, isPropInBackpack)
                end
            elseif bagModule:judgeForeverProp(productData.propsid) then
                setButtonVisibility(not isPropInBackpack, isPropInBackpack)
            else
                setButtonVisibility(false, false)
            end
        end

        XH.UIButton.create(btnUnload, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            Utils:delayTouchEnable(btnUnload)
            self:onBtnTouchEventUnloadProp(productData, myPropInfo, idx)
        end)
        XH.UIButton.create(btnLoad, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            Utils:delayTouchEnable(btnLoad)
            self:onBtnTouchEventLoadProp(productData, myPropInfo, idx)
        end)
    else
        if self._frameInfo then
            if headInfo.framePropid == nil then
                headInfo.framePropid = self._frameInfo.propid
                headInfo.frameUrl = self._frameInfo.url
            end
        end
        self._txtPreviewName:setString("")
        self._btnUnload:setVisible(false)
        self._btnLoad:setVisible(true)
        XH.UIButton.create(btnUnload, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onBtnTouchEventUnloadProp(nil, nil, idx)
        end)
        XH.UIButton.create(btnLoad, XH.UIButton.CLICK_STYLE.NOSCALE, function()
            self:onBtnTouchEventLoadProp(nil, nil, idx)
        end)
    end
    Utils:setHead(self._panelHead, headInfo)
end

function EditAvatarView:onBtnTouchEventLoadProp(productData, myPropInfo, idx)
    local isAvatar = self._tab == "avatar"
    if isAvatar then
        self._module:reqGoldPlayerInfoSet({type = Config.SetType.SET_GOLD_HEAD_IDX, headIdx = idx})
        return
    end
    -- local jumpParam = productData.props_jump
    -- if jumpParam == "equip" then
    local bagsysModule = XH.Bridge:getModule("BagSysNew")
    local props_state = myPropInfo.props_state
    if props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BACKPACK then -- 未装备 如果服务没有UseProp，需要先UseProp
        if bagsysModule:isTimeProp(productData) and myPropInfo.propscnt > 0 then
            bagsysModule:reqUseProps(myPropInfo.propsid, myPropInfo.propscnt)
        else
            bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_EQUIP, myPropInfo.propsid)
        end
    else
        if bagsysModule:isTimeProp(productData) and myPropInfo.propscnt > 0 then
            bagsysModule:reqUseProps(myPropInfo.propsid, myPropInfo.propscnt)
        else
            XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "该道具已装备过!")
        end
    end
    -- end
end

function EditAvatarView:onBtnTouchEventUnloadProp(productData)
    local props_state = productData.props_state
    local bagsysModule = XH.Bridge:getModule("BagSysNew")
    if props_state == XH.BagSysProtocol.PROPS_STATE.PS_IN_BACKPACK then -- 未装备
        XH.TipTool.showTip({type = XH.TIP_LAYER_TYPE.OK}, "道具未装备!")
        return
    end
    bagsysModule:reqOperateProps(XH.BagSysProtocol.OPERATE_PROPS.OP_UNEQUIP, productData.propsid)
end

function EditAvatarView:updateProductButtons()

end
return EditAvatarView
�: