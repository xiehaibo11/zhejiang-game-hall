local NewYear2026Layer = class("NewYear2026Layer", XH.ViewBase)
local Bridge = import(".Bridge")
local IMG_TITLE = {
    DailyGift = {title = "Img_bt2.png", icon = "Icon_1.png", des = "浏览活动，得奖励", txtColor=cc.c3b(0x21,0x51,0x58), bg="Img_nrlv.png"},
    LuckyTask = {title = "Img_bt1.png", icon = "Icon_2.png", des = "参与对局，得房卡", txtColor=cc.c3b(0x32,0x37,0x87), bg="Img_nrl.png"},
    Recall = {title = "Img_bt3.png", icon = "Icon_3.png", des = "回归任务，得道具", txtColor=cc.c3b(0x5b,0x2a,0x72), bg="Img_nrdz.png"},
    InviteAct = {title = "Img_bt4.png", icon = "Icon_4.png", des = "邀1人，立得20元", txtColor=cc.c3b(0x86,0x27,0xf), bg="Img_nrd.png"},
    ActivityCenter = {title = "Img_bt5.png", icon = "Icon_5.png", des = "活动合集，奖励多", txtColor=cc.c3b(0x5b,0x2a,0x72), bg="Img_nrdz.png"}
}
local IMG_BTN_STATE = {"Btn_ljqw.png", "Btn_ljlj.png", "Btn_jryl.png", "Btn_jqqd.png"}
local PLIST_PATH = "hall/CSB/Activity/NewYear2026/Img/"
local ANI_PATH = "animation/Lobby/Activity/NewYear2026/"

function NewYear2026Layer:getCSBPath()
    return "hall/CSB/Activity/NewYear2026/NewYearLayer.csb"
end

function NewYear2026Layer:getBindingInfo()
    return {
        ["_KW_ROOT_LAYER"] = {varName = "_root"},
        ["_body"] = {varName = "_body"},
        ["_item"] = {varName = "_item"},
        ["_item1"] = {varName = "_item1"},
        ["_item2"] = {varName = "_item2"},
        ["_item3"] = {varName = "_item3"},
        ["_item4"] = {varName = "_item4"},
        ["_itemBtn"] = {varName = "_itemBtn"},
        ["_listView"] = {varName = "_listView"},
        ["_listBtn"] = {varName = "_listBtn"},
        ["_aniHourse"] = {varName = "_aniHourse"},
        ["_aniBg"] = {varName = "_aniBg"},
        ["_imgHourse"] = {varName = "_imgHourse"},
        ["_btnClose"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose"}
    }
end

function NewYear2026Layer:getProxyEvents()
    return {
        {module = self._module, eventName = "EVENT_FLUSH_ACTIVITY_INFO", callBack = "updateItems"}
        -- {module = self._module, eventName = "EVENT_GET_PRIZE", callBack = "onNotifyInviteGetPrize"}
    }
end

function NewYear2026Layer:getAniConfig()
    if XH.areaData:getTenantid() == 4 then
        local ViewAniConfig = require("app.Base.ViewAniConfig")
        return {aniType = ViewAniConfig.AniName.NORMAL, rootNode = nil, popNode = self._body, btnList = {}}
    end
end

function NewYear2026Layer:initCodeBind()
    local selfSize = self:getContentSize()
    local rootSize = self._root:getContentSize()
    local scaleX = selfSize.width / rootSize.width
    local scaleY = selfSize.height / rootSize.height
    self._rootScale = scaleX > scaleY and scaleY or scaleX
    self._body:setScale(self._rootScale)
    self._root:setPosition(selfSize.width / 2, selfSize.height / 2)
end

function NewYear2026Layer:ctor(param)
    self._module = XH.lobby:getModule("NewYear2026")
    self._source = param.source
    NewYear2026Layer.super.ctor(self, param)
    self:initUI()
end

function NewYear2026Layer:initUI()
    self._items = {self._item1, self._item2, self._item3, self._item4}
    self._itemBtns = {}
    -- local data = self._module:getItemInfo()
    for i = 1, 4 do
        -- local ui = Bridge.clone(self._item)
        -- self._listView:pushBackCustomItem(ui)
        -- self._items[i] = ui
        local uiBtn = Bridge.clone(self._itemBtn)
        self._listBtn:pushBackCustomItem(uiBtn)
        self._itemBtns[i] = uiBtn
    end
    XH.SpineManager:playAni(self._aniBg, ANI_PATH, "spine_xchd_cj", "animation", true)
    local ani = XH.SpineManager:playAni(self._aniHourse, ANI_PATH, "spine_xchd_xiaoma", "animation", true)
    self._imgHourse:setVisible(ani == nil)
    self:updateItems()
end

function NewYear2026Layer:updateItems()
    local data = self._module:getItemInfo()
    for i, v in ipairs(data) do
        local ui = self._items[i]
        local uiBtn = self._itemBtns[i]
        if ui then
            XH.UITool.setText(ui, "_txtTitle", v.title or "")
            XH.UITool.setText(ui, "_txtDes", IMG_TITLE[v.type].des or "")
            XH.UITool.setTextColor(ui, "_txtDes", IMG_TITLE[v.type].txtColor or cc.c3b(255,255,255))
            XH.UITool.setVisible(ui, "_txtAward1", false)
            XH.UITool.setVisible(ui, "_txtAward2", false)
            XH.UITool.setVisible(ui, "_panelAward1", false)
            XH.UITool.setVisible(ui, "_panelAward2", false)
            Bridge.setImgUrl(XH.UITool.seekNodeByName(ui, "_imgIcon"), v.url, true)
            XH.UITool.loadTexture(ui, "_imgTitle", PLIST_PATH .. IMG_TITLE[v.type].title, ccui.TextureResType.plistType)
            XH.UITool.loadTexture(ui, "_imgIcon", PLIST_PATH .. IMG_TITLE[v.type].icon, ccui.TextureResType.plistType)
            XH.UITool.loadTexture(ui, "Image_7", PLIST_PATH .. IMG_TITLE[v.type].bg, ccui.TextureResType.plistType)
            if v.award1 then
                XH.UITool.setVisible(ui, "_txtAward1", true)
                XH.UITool.setVisible(ui, "_panelAward1", true)
                XH.UITool.setText(ui, "_txtAward1", (v.award1.name or "") .. "x" .. v.award1.count)
                Bridge.setImgUrl(XH.UITool.seekNodeByName(ui, "_panelAward1"), v.award1.icon, true)
            end
            if v.award2 then
                XH.UITool.setVisible(ui, "_txtAward2", true)
                XH.UITool.setVisible(ui, "_panelAward2", true)
                XH.UITool.setText(ui, "_txtAward2", (v.award2.name or "") .. "x" .. v.award2.count)
                Bridge.setImgUrl(XH.UITool.seekNodeByName(ui, "_panelAward2"), v.award2.icon, true)
            end
            if v.type == "InviteAct" then
                local aniNode = ui:getChildByName("_aniNode")
                local ani = XH.SpineManager:playAni(aniNode, ANI_PATH, "spine_xchd_zjm", "animation", true)
                if ani then
                    XH.UITool.setVisible(ui, "_imgIcon", false)
                end
            end

            local btnState = 1 -- 1：前往领取  2：立即领取  3：今日已领   4：敬请期待
            if v.isGot then
                btnState = 3
            elseif v.canGetAward then
                btnState = 2
            elseif v.show == false then
                btnState = 4
            end
            v.btnState = btnState
            local btnPicPath = IMG_BTN_STATE[btnState]
            if v.type == "InviteAct" and btnState <= 2 then
                btnPicPath = "Btn_lhf.png"
            end
            XH.UITool.loadTexture(uiBtn, "_btnGo", PLIST_PATH .. btnPicPath, ccui.TextureResType.plistType)
            -- XH.UITool.setText(uiBtn, "_txtBtnText", v.canGetAward and "领取" or (v.isGot and "今日已领" or "去完成"))
            if uiBtn.sgNode then
                uiBtn.sgNode:removeFromParent()
                uiBtn.sgNode = nil
            end
            if v.canGetAward then
                local sgNode = cc.Node:create()
                sgNode:setPosition(uiBtn:getContentSize().width/2, uiBtn:getContentSize().height/2 + 2)
                uiBtn:addChild(sgNode)
                uiBtn.sgNode = sgNode
                XH.SpineManager:playAni(sgNode, ANI_PATH, "spine_xchd_anniu", "animation", true)
            end

            local aniNode = uiBtn:getChildByName("_aniHaveAward")
            local ani = XH.SpineManager:playAni(aniNode, ANI_PATH, "spine_xchd_dlj", "animation", true)
            if ani then
                aniNode:setVisible(v.canGetAward == true)
            end
            XH.UITool.setVisible(uiBtn, "_imgHaveAward", v.canGetAward == true and ani == nil)
            local clickFunc = function()
                XH.NewThrowDataManager:throwData("lys26012303", {page_item_id = v.title, block_item_id = v.canGetAward and "有气泡" or "无气泡"})
                if v.type == "DailyGift" then
                    if v.isGot then
                        XH.TipTool.showToast("明日00:00后可再次领奖")
                    elseif v.canGetAward then
                        self._module:reqGetAward()
                    else
                        XH.TipTool.showToast("进入【邀请有礼】活动10秒即可领奖")
                    end
                elseif v.type == "LuckyTask" then
                    Bridge.openLuckyTaskView()
                elseif v.type == "Recall" then
                    XH.viewManager:openView("RecallNewView")
                else
                    XH.viewManager:openView(v.view)
                end
            end
            XH.UIButton.create(uiBtn:getChildByName("_btnGo"), XH.UIButton.CLICK_STYLE.NOSCALE, clickFunc)
            XH.UIButton.create(ui, XH.UIButton.CLICK_STYLE.NOSCALE, clickFunc)
        end
    end
end

function NewYear2026Layer:clickClose(send, eventType)

    self:close()
end

function NewYear2026Layer:onEnter()
    NewYear2026Layer.super.onEnter(self)
    self._startTime = socket.gettime()
end

function NewYear2026Layer:onExit()
    NewYear2026Layer.super.onExit(self)
    local showTime = socket.gettime() - self._startTime

    local bAward = XH.lobby:getModule("NewYear2026"):isHaveAward()
    local sourceStr = {auto1 = "每日自动弹出", auto2 = "有奖励自动弹出"}
    local data = self._module:getItemInfo()[1]
    local giftState = "每日待领奖"
    if data.isGot then
        giftState = "每日已领奖"
    elseif data.canGetAward then
        giftState = "每日可领奖"
    end
    XH.NewThrowDataManager:throwData("lys26012302", {
        duration = math.floor(showTime),
        page_item_id = sourceStr[self._source] or "手动弹出",
        block_item_id = giftState
    })
end
return NewYear2026Layer
