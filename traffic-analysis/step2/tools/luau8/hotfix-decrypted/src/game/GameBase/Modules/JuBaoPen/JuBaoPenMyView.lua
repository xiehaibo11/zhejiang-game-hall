local JuBaoPenMyView = CF.gameClass("JuBaoPenMyView", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenMyView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenMyView.csb"
end

function JuBaoPenMyView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClick"},
        ["_KW_PANEL_ITEM"] = {varName = "_panelItem"},
        ["_KW_PANEL_CONTENT"] = {varName = "_panelContent", type = XH.UI_TYPE.PACKAGEVIEW},
        ["_KW_ROOT"] = {varName = "_rootPanel"},
        ["_KW_CUR_IMG_ICON"] = {varName = "_curImgIcon"},
        ["_KW_TEXT_NAME"] = {varName = "_txtName"},
        ["_KW_TEXT_YS"] = {varName = "_txtYS"},
        ["_KW_TEXT_DES"] = {varName = "_txtDes"},
        ["_KW_TEXT_REMAIN_TIME"] = {varName = "_txtRemainTime"},
        ["_KW_CUR_IMG_Q_BG"] = {varName = "_imgQualityBg"},
        ["_KW_CUR_TXT_Q_NAME"] = {varName = "_txtQualityName"},
        ["_KW_CUR_IMG_LV_BG"] = {varName = "_imgLvBg"},
        ["_KW_CUR_TXT_LV"] = {varName = "_txtLevel"},
        ["_KW_PANEL_RIGHT"] = {varName = "_panelRight"},
        ["_KW_BTN_PLACE"] = {varName = "_btnPlace", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnPlaceClick"},
        ["_KW_BTN_CANCEL"] = {varName = "_btnCancel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCancelClick"},
        ["_KW_TXT_EMPTY"] = {varName = "_txtEmpty"},
    }
end

function JuBaoPenMyView:getProxyEvents()
    return {
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_TIEM_EXPIRE", callBack = "initUI"},
    }
end

function JuBaoPenMyView:ctor(param)

    JuBaoPenMyView.super.ctor(self)

    self:initUI()

    self:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(1), cc.CallFunc:create(function() 
        self:updateTime()
    end))))
end

function JuBaoPenMyView:updateTime()
    if self._selectId then
        local module = CF.game:getModule("JuBaoPen")
        local data = module:getMyDataById(self._selectId)
        if data == nil then
            return
        end
        local remain = data.expireTime
        local hours = math.floor(remain / 3600)
        local minutes = math.floor(remain % 3600 / 60)
        local seconds = remain % 60
        self._txtRemainTime:setText(string.format("剩余时间 %02d时%02d分%02d秒", hours, minutes, seconds))
    end
end

function JuBaoPenMyView:initUI()

    local module = CF.game:getModule("JuBaoPen")
    local myData = module:getMyData()
    
    if #myData == 0 then
        self._panelRight:setVisible(false)
        self._txtEmpty:setVisible(true)
    else
        self._txtEmpty:setVisible(false)
    end

    self._dataById = {}
    for i, v in ipairs(myData) do
        self._dataById[i] = v
    end

    table.sort(self._dataById, function(a, b)
        return a.treasureId > b.treasureId
    end)

    for i=#self._dataById+1, Define.ITEM_COUNT do
        self._dataById[i] = {}
    end

    self._panelItems = {}

    self._panelContent:setDirection(cc.SCROLLVIEW_DIRECTION_VERTICAL)
    self._panelContent:setPreciseClick(true)
    self._panelContent:setItemModel(self._panelItem)
    self._panelContent:setItemUpdateEvent(handler(self, self.showItem))
    self._panelContent:setItemClickEvent(handler(self, self.clickItem))

    self:updatePanelContent()
end

function JuBaoPenMyView:updatePanelContent()
    local module = CF.game:getModule("JuBaoPen")
    self._panelContent:setData(self._dataById)

    if #self._panelItems ~= 0 then
        self:clickItem(self._panelItems[1], self._dataById, 1)
    end
end

function JuBaoPenMyView:showItem(item, datas, index)
    self._panelItems[index] = item

    local data = datas[index]
    if data.treasureId == nil then
        item:getChildByName("_KW_IMG_BG"):setVisible(false)
        return
    end
    local module = CF.game:getModule("JuBaoPen")
    local config = module:getConfigById(data.treasureId)
    if config == nil then
        return
    end
    local bg = item:getChildByName("_KW_IMG_BG")
    bg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_bg_pz_%d.png", config.quality), ccui.TextureResType.plistType)
    local icon = bg:getChildByName("_KW_IMG_ICON")
    icon:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_icon_%d.png", config.index), ccui.TextureResType.plistType)
    local lvBg = bg:getChildByName("_KW_IMG_LV_BG")
    lvBg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_Img_pz_%d.png", config.quality), ccui.TextureResType.plistType)
    local txtYS = bg:getChildByName("_KW_TXT_YS")
    txtYS:setText("+"..config.ys*data.level)
    local txtLevel = bg:getChildByName("_KW_TXT_LV")
    txtLevel:setText(data.level < 10 and data.level.."级" or "满级")
end

function JuBaoPenMyView:clickItem(item, datas, index)
    print(index)

    local data = datas[index]
    if data.treasureId == nil then
        return
    end
    item:getChildByName("_KW_IMG_BG"):getChildByName("_KW_IMG_SELECT"):setVisible(true)

    for k, v in pairs(self._panelItems) do
        if v ~= item and not tolua.isnull(v) then
            v:getChildByName("_KW_IMG_BG"):getChildByName("_KW_IMG_SELECT"):setVisible(false)
        end
    end

    self:updateDetails(data, index)
    self._selectId = data.treasureId
end

function JuBaoPenMyView:updateDetails(data, index)

    local module = CF.game:getModule("JuBaoPen")
    local config = module:getConfigById(data.treasureId)
    self._curImgIcon:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_icon_%d.png", config.index), ccui.TextureResType.plistType)
    self._txtName:setText(config.name)
    self._txtYS:setText(string.format("运势 +%d", config.ys*data.level))
    self._txtDes:setText(config.description)

    local remain = data.expireTime
    local hours = math.floor(remain / 3600)
    local minutes = math.floor(remain % 3600 / 60)
    local seconds = remain % 60

    self._txtRemainTime:setText(string.format("剩余时间 %02d时%02d分%02d秒", hours, minutes, seconds))

    local qualityName = Config.QualityName[config.quality]
    self._txtQualityName:setText(qualityName)
    self._txtLevel:setText(data.level < 10 and data.level.."级" or "满级")

    self._imgQualityBg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_bg2_pz_%d.png", config.quality), ccui.TextureResType.plistType)
    self._imgLvBg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_bg2_pz_%d.png", config.quality), ccui.TextureResType.plistType)

    local b = (module:getPlaceItem() == data.treasureId)
    self._btnCancel:setVisible(b)
    self._btnPlace:setVisible(not b)
end

function JuBaoPenMyView:onBtnPlaceClick()
    if self._selectId then
        local module = CF.game:getModule("JuBaoPen")
        module:setPlaceItem(self._selectId)
        self._btnCancel:setVisible(true)
        self._btnPlace:setVisible(false)
    end
end

function JuBaoPenMyView:onBtnCancelClick()
    if self._selectId then
        local module = CF.game:getModule("JuBaoPen")
        module:setPlaceItem(0)
        self._btnCancel:setVisible(false)
        self._btnPlace:setVisible(true)
    end
end

function JuBaoPenMyView:onBtnCloseClick()
    self:close()
end

function JuBaoPenMyView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

return JuBaoPenMyView
