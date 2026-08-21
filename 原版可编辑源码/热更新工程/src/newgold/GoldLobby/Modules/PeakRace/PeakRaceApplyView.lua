local PeakRaceApplyView = class("PeakRaceApplyView", NG.ViewBase)
local PeakRaceConfig = require("newgold.GoldLobby.Modules.PeakRace.Define")
local KW_IMG_DEFULT_HEAD = "_0002_mrtx_w.png"

function PeakRaceApplyView:getCSBPath()
    return "cocosStudio/GoldNew/PeakRace/CSB/PeakRaceApplyLayer.csb"
end

function PeakRaceApplyView:getBindingInfo()
    return {
        -- 
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose" },
        ["_KW_UI_BTN_CLOSE2"] = { varName = "_KW_UI_BTN_CLOSE2", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickClose" },
        ["_KW_UI_BTN_APPLY"] = { varName = "_KW_UI_BTN_APPLY", type = NG.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "clickApply" },
        ["_KW_APPLY_ITEM"] = { varName = "_KW_APPLY_ITEM" },
        ["_KW_LIST"] = { varName = "_KW_LIST" },
    }
end

function PeakRaceApplyView:getProxyEvents()
    return {
    --
    }
end

function PeakRaceApplyView:ctor(param)
    PeakRaceApplyView.super.ctor(self, param)
    self._selectClubId = 0
    self:initUI()
end

function PeakRaceApplyView:initUI()
    self._KW_LIST:removeAllChildren()
    local num = #NG.goldLobby:getModule("PeakRace"):getApplyList()
    local maxHeight = num * self._KW_APPLY_ITEM:getContentSize().height
    if maxHeight < self._KW_LIST:getContentSize().height then
        maxHeight = self._KW_LIST:getContentSize().height
    end
    for i = 1, num do
        local item = self._KW_APPLY_ITEM:clone()
        self:flushItem(i, item)
        item:addTouchEventListener(handler(self, self.onTouchEventSearchClub))
        item:setPositionX(self._KW_LIST:getContentSize().width / 2)
        item:setPositionY(maxHeight - (i - 1) * self._KW_APPLY_ITEM:getContentSize().height)
        item:setVisible(true)
        item:setName(i)
        self._KW_LIST:addChild(item)
    end
    self._KW_LIST:setInnerContainerSize(cc.size(self._KW_LIST:getContentSize().width, maxHeight))
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sai2024020213, nil, { count = num })
end

function PeakRaceApplyView:flushItem(id, item)
    local list = NG.goldLobby:getModule("PeakRace"):getApplyList()
    if list and list[id] then
        local info = list[id]
        local size = item:getChildByName("KW_HEAD"):getContentSize()
        local headImage = NG.RemoteImage.new():setPosition(size.width / 2, size.height / 2):ignoreContentAdaptWithSize(false):setContentSize(size.width, size.height):addTo(item:getChildByName("KW_HEAD"))
        headImage:setDefaultTexture(KW_IMG_DEFULT_HEAD, 1)
        headImage:setUrl(info.head or "")
        item:getChildByName("KW_NAME"):setString(XH.StringTool.cutStringByLength(info.name, 12)) -- 名称
    end
end

function PeakRaceApplyView:flushSelectId(idx)
    for i = 1, #self._KW_LIST:getChildren() do
        local item = self._KW_LIST:getChildren()[i]
        item:getChildByName("KW_CHOSE"):setVisible(idx .. "" == item:getName())
        item:getChildByName("KW_TEXT"):setVisible(idx .. "" ~= item:getName())
        item:getChildByName("KW_TEXT_CHOSE"):setVisible(idx .. "" == item:getName())
    end
end

function PeakRaceApplyView:clickService()
    XH.lobby:getModule("CusService"):oponCusServerView(nil, "GAMELOBBY")
    XH.lobby:getModule("CrmNotice"):clearCrmNotice()
    self:close()
end

function PeakRaceApplyView:onTouchEventSearchClub(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    local idx = tonumber(send:getName())
    local list = NG.goldLobby:getModule("PeakRace"):getApplyList()
    if list and list[idx] then
        self._selectClubId = list[idx].club_id
        self:flushSelectId(idx)
    end
end

function PeakRaceApplyView:clickApply()
    if self._selectClubId == 0 then
        NG.TipTool.showToast('未选中任何团队，请重试')
        return
    end
    NG.goldLobby:getModule("PeakRace"):reqApply(self._selectClubId)
    self:close()
end

function PeakRaceApplyView:clickClose()
    self:close()
end

return PeakRaceApplyView