local JuBaoPenLotteryView = CF.gameClass("JuBaoPenLotteryView", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")

function JuBaoPenLotteryView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenLotteryView.csb"
end

function JuBaoPenLotteryView:getProxyEvents()
    return {
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "updateDiamond" },
    }
end


function JuBaoPenLotteryView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClick"},
        ["_KW_PANEL_ITEM"] = {varName = "_panelItem"},
        ["_KW_PANEL_CONTENT"] = {varName = "_panelContent"},
        ["_KW_FNT_YS"] = {varName = "_txtYS"},
        ["_KW_BTN_CJ"] = {varName = "_btnCJ",  type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCJClick"},
        ["_KW_FNT_C"] = {varName = "_txtCJ"},
        ["_KW_FNT_PRICE"] = {varName = "_txtPrice"},
        ["_KW_DISCOUNT_IMG"] = {varName = "_imgDiscount"},
        ["_KW_TXT_DISCOUNT"] = {varName = "_txtDiscount"},
        ["_KW_TOUCH_PANEL"] = {varName = "_touchPanel"},
        ["_KW_IMG_GXHD"] = {varName = "_imgGXHD"},
        ["_KW_TXT_DIAMOND"] = {varName = "_txtDiamond"},
        ["_KW_PANEL_RIGHT_TOP"] = {varName = "_panelRightTop"},
    }
end

function JuBaoPenLotteryView:ctor(param)
    self._bOnce = param.bOnce
    JuBaoPenLotteryView.super.ctor(self)

    self:updateUI()
    self:playAnimation();
    self:updateDiamond()
end

function JuBaoPenLotteryView:getAdaptationConfig()
    return {
        {node = self._panelRightTop, bRight = true, bHalf = false},
    }
end

function JuBaoPenLotteryView:updateDiamond()
    --钻石数据
    local diamondCnt = XH.playerData:getDiamnd()
    self._txtDiamond:setText(diamondCnt)
end

function JuBaoPenLotteryView:playAnimation()

    local animation = self._bOnce and "1chou" or "5chou"
    local jsonFilePath = "res/animation/GameCommon/jubaopen/zzb_jbp_gchd_animation.json"
    self._touchPanel:setOpacity(0)
    self._touchPanel:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = "zhezhao", slotName = "zhezhao"})

    self._btnClose:setOpacity(0)
    self._btnClose:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = "gb", slotName = "gb"})
    self._imgGXHD:setOpacity(0)
    self._imgGXHD:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = "yunshi", slotName = "yunshi"})
    self._btnCJ:setOpacity(0)
    self._btnCJ:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = "btn", slotName = "btn"})
    self._panelRightTop:setOpacity(0)
    self._panelRightTop:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = "zuanshi", slotName = "zuanshi"})
    local aniNode1 = self._btnCJ:getChildByName("_KW_ANI_LIGHT_BTN")
    self._btnCJ:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function () 
        XH.SpineManager:playAni(aniNode1, "res/animation/GameCommon/jubaopen/", "zzb_ty_ansg2", "animation", false)
    end))))

    local module = CF.game:getModule("JuBaoPen")
    local data = module:getLotteryResult()
    for i,v in ipairs(data) do
        local item = self._panelContent:getChildByName("panel"..i)
        item:setOpacity(0)
        item:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = animation, boneName = tostring(i), slotName = tostring(i)})
        local itemIn = item:getChildByName("_KW_PANEL_ITEM_IN")
        local aniLight = itemIn:getChildByName("_KW_IMG_ANI_LIGHT")
        XH.SpineManager:playAni(aniLight, "res/animation/GameCommon/jubaopen/", "zzb_ty_bhxz", "animation", true)
    end
end
    
function JuBaoPenLotteryView:updateUI()

    self._panelContent:removeAllChildren()

    local module = CF.game:getModule("JuBaoPen")
    local data = module:getLotteryResult()
    local pos = {}
    local size = self._panelContent:getContentSize()

    local bOnce = self._bOnce
    if bOnce then
        self._panelItem:setContentSize(cc.size(400,400))
        self._panelItem:getChildByName("_KW_PANEL_ITEM_IN"):setScale(1.0)
        pos[1] = cc.p(size.width/2, size.height/2)
    else
        local itemSize = cc.size(350,350)
        self._panelItem:setContentSize(itemSize)
        self._panelItem:getChildByName("_KW_PANEL_ITEM_IN"):setScale(0.9)
        
        local y = size.height/2
        pos = {
            cc.p(size.width/2 - 2*itemSize.width, y),
            cc.p(size.width/2 - itemSize.width, y),
            cc.p(size.width/2, y),
            cc.p(size.width/2 + itemSize.width, y),
            cc.p(size.width/2 + 2*itemSize.width, y),
        }
    end

    local ys = 0
    for i,v in ipairs(data) do
        local item = self._panelItem:clone() 
        local nodeName = "panel"..i
        item:setName(nodeName)
        item:setPosition(pos[i])
        local itemIn = item:getChildByName("_KW_PANEL_ITEM_IN")
        local config = module:getConfigById(v.treasureId)
        if config ~= nil then
            local icon = itemIn:getChildByName("_KW_IMG_ICON")
            icon:ignoreContentAdaptWithSize(true)
            icon:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_icon_%d.png", config.index), ccui.TextureResType.plistType)
            local tag = itemIn:getChildByName("_KW_IMG_TAG")
            tag:ignoreContentAdaptWithSize(true)
            tag:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist2/jbp_tag_%d.png", module:getLotteryTagById(v.treasureId)), ccui.TextureResType.plistType)
            local txtLevel = itemIn:getChildByName("_KW_TEXT_LEVEL")
            txtLevel:setText(v.level)
            local qualityBg = itemIn:getChildByName("_KW_IMG_Q_BG")
            qualityBg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_bg2_pz_%d.png", config.quality), ccui.TextureResType.plistType)
            local txtQualityName = itemIn:getChildByName("_KW_TEXT_Q")
            local qualityName = Config.QualityName[config.quality]
            txtQualityName:setText(qualityName)
            local txtName = itemIn:getChildByName("_KW_TEXT_NAME")
            txtName:setText(config.name)
            self._panelContent:addChild(item, 1)
            ys = ys + (module:isOldLevelMax(v.treasureId) and 0 or config.ys) 
        end
    end
    if ys == 0 then
        self._txtYS:setVisible(false)
    else
        self._txtYS:setText("运势:+"..ys)
    end
    self._txtCJ:setText(bOnce and "再抽1次" or "再抽5次")
    self._txtPrice:setText(bOnce and module:getPrice1() or module:getPrice5())

    self._imgDiscount:setVisible(not bOnce)
    self._txtDiscount:setText(module:getDiscount().."折")
end

function JuBaoPenLotteryView:onBtnCloseClick()
    local module = CF.game:getModule("JuBaoPen")
    module:reqJuBaoPen(Define.TreasureActType.TATClean)
    module:active()
    self:close()
end

function JuBaoPenLotteryView:showSelf()
    local parent = display.getRunningScene()
    parent:addChild(self, 95)
end

function JuBaoPenLotteryView:onBtnCJClick()
    local module = CF.game:getModule("JuBaoPen")

    local price = module:getPrice1()
    if not self._bOnce then
        price = module:getPrice5()
    end
    if CF.selfPlayerData:getDiamnd() < price then
        local ShopConfig = require("lobby.Modules.Shop.Config")
        local param = {}
        param.propCount = price
        param.propType = ShopConfig.SpecialTag.DIAMOND
        param.isVipProp = false
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        return
    end

    if self._bOnce then
        module:startLottery(Define.TreasureActType.TATOnce)
    else
        module:startLottery(Define.TreasureActType.TATContinue)
    end
    module:thowData(self._bOnce and XH.NewThrowDataDefine.dj25090503 or XH.NewThrowDataDefine.dj25090505, {page_item_id = "领奖界面"})
    self:close()
end

return JuBaoPenLotteryView
� 