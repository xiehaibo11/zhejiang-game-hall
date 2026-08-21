local JuBaoPenMainView = CF.gameClass("JuBaoPenMainView", CF.ViewBase)
local Define = require("game.GameBase.Modules.JuBaoPen.Define")
local Config = require("game.GameBase.Modules.JuBaoPen.Config")


local posIndex = {
    6,2,14,10,8,4,16,12
}

function JuBaoPenMainView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/JuBaoPen/JuBaoPenMainView.csb"
end

function JuBaoPenMainView:getAdaptationConfig()
    return {
        {node = self._panelLeftTop, bRight = false, bHalf = false},
        {node = self._panelRightTop, bRight = true, bHalf = false},
    }
end

function JuBaoPenMainView:getBindingInfo()
    return {
        ["_KW_ROOT"] = {varName = "_rootNode"},
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCloseClick"},
        ["_KW_BTN_DES"] = {varName = "_btnDes", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnDesClick"},
        ["_KW_BTN_MY"] = {varName = "_btnMy", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnMyClick"},
        ["_KW_BTN_CJ_1"] = {varName = "_btnCJ1", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCJ1Click"},
        ["_KW_BTN_CJ_5"] = {varName = "_btnCJ5", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onBtnCJ5Click"},
        ["_KW_PANEL_TIPS"] = {varName = "_panelTips"},
        ["_KW_PANEL_ITEM"] = {varName = "_panelItem"},
        ["_KW_TXT_DIAMOND"] = {varName = "_txtDiamond"},
        ["_KW_FNT_CUR_YS"] = {varName = "_txtCurYS"},
        ["_KW_FNT_C1_PRICE"] = {varName = "_txtPrice1"},
        ["_KW_FNT_C5_PRICE"] = {varName = "_txtPrice5"},
        ["_KW_ANI_ENTER"] = {varName = "_aniEnter"},
        ["_KW_ANI_LIGHT"] = {varName = "_aniLight"},
        ["_KW_VIEW_IMG_BG"] = {varName = "_imgBg"},

        ["_KW_PANEL_LEFT_TOP"] = {varName = "_panelLeftTop"},
        ["_KW_PANEL_RIGHT_TOP"] = {varName = "_panelRightTop"},
        ["_KW_PAN_IMG"] = {varName = "_imgPan"},
        ["_KW_DISCOUNT_IMG"] = {varName = "_imgDiscount"},
        ["_KW_YS_IMG"] = {varName = "_imgYS"},
        ["_KW_PREVENT_TOUCH"] = {varName = "_preventTouch"},
        ["_KW_ANI_ITEM_POS"] = {varName = "_aniItemPos"},
        ["_KW_YS_UPDATE_ANI"] = {varName = "_aniUpdateYS"},
        ["_KW_TXT_DISCOUNT_5"] = {varName = "_txtDisCount"},
    }
end

function JuBaoPenMainView:getProxyEvents()
    return {
        { module = XH.playerData, eventKeyName = "EVENT_PLAYER_DROP_CHANGED", callBack = "updateDiamond" },
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_UPDATE_YS", callBack = "updateYS"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_START_LOTTERY", callBack = "startLottery"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_ITEM_ACTIVE", callBack = "active"},
        { module = CF.game:getModule("JuBaoPen"), eventKeyName = "EVENT_TIEM_EXPIRE", callBack = "expire"},
    }
end

function JuBaoPenMainView:ctor(param)
    JuBaoPenMainView.super.ctor(self)
    self:initUI()

    local module = CF.game:getModule("JuBaoPen")
    module:reqJuBaoPen(Define.TreasureActType.TATGet)

    self._active = false

    module:thowData(XH.NewThrowDataDefine.dj25090502)
end

function JuBaoPenMainView:initUI()
    self._preventTouch:setVisible(false)
    self:updateItem()
    self:updateDiamond()

    self:playEnterAni()
end

function JuBaoPenMainView:playEnterAni()
    XH.SpineManager:playAniWithComplete(self._aniEnter, "res/animation/GameCommon/jubaopen/", "zzb_jbp_zjm", "cx", false, "loop", true)
    XH.SpineManager:playAni(self._aniLight, "res/animation/GameCommon/jubaopen/", "zzb_ty_tcbk4", "animation", false)

    local jsonFilePath = "res/animation/GameCommon/jubaopen/zzb_jbp_zjm_animation.json"
    self._imgBg:setOpacity(0)
    self._imgBg:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "bg", slotName = "bg"})
    self._btnMy:setOpacity(0)
    self._btnMy:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "xx", slotName = "xx"})
    self._imgYS:setOpacity(0)
    self._imgYS:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "xx", slotName = "xx"})
    self._imgPan:setOpacity(0)
    self._imgPan:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "di", slotName = "di"})
    self._btnCJ1:setOpacity(0)
    self._btnCJ1:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "btn", slotName = "btn"})
    self._btnCJ5:setOpacity(0)
    self._btnCJ5:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "btn2", slotName = "btn2"})
    self._imgDiscount:setOpacity(0)
    self._imgDiscount:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = "zk", slotName = "zk"})

    local offset = 200
    self._panelLeftTop:setPositionY(self._panelLeftTop:getPositionY() + offset)
    self._panelLeftTop:runAction(cc.Sequence:create(cc.MoveBy:create(0.5, cc.p(0, -offset))))

    self._panelRightTop:setPositionY(self._panelRightTop:getPositionY() + offset)
    self._panelRightTop:runAction(cc.Sequence:create(cc.MoveBy:create(0.5, cc.p(0, -offset))))

    for i = 1, Define.ITEM_COUNT do
        local item = self._rootNode:getChildByName("panel"..i)
        item:setOpacity(0)
        local slotName = "bw"..i
        item:tryAddLuaComponent(cc.ext.CompSpineAction, {jsonFilePath = jsonFilePath, animationName = "cx", boneName = slotName, slotName = slotName})
    end

    local aniNode1 = self._btnCJ1:getChildByName("_KW_ANI_LIGHT_BTN")
    self._btnCJ1:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function () 
        XH.SpineManager:playAni(aniNode1, "res/animation/GameCommon/jubaopen/", "zzb_ty_ansg2", "animation", false)
    end))))
    local aniNode2 = self._btnCJ5:getChildByName("_KW_ANI_LIGHT_BTN")
    self._btnCJ5:runAction(cc.RepeatForever:create(cc.Sequence:create(cc.DelayTime:create(3), cc.CallFunc:create(function () 
        XH.SpineManager:playAni(aniNode2, "res/animation/GameCommon/jubaopen/", "zzb_ty_ansg2", "animation", false)
    end))))
end

function JuBaoPenMainView:expire(event)
    if event.expire then
        local str = ""
        local module = CF.game:getModule("JuBaoPen")
        for k,v in pairs(event.expire) do
            local config = module:getConfigById(v)
            if config then
                str = str..config.name.." "
            end
        end
        XH.TipTool.showToast(str.."已到期，即将失效")
    end
    self:updateItem()
    self._txtCurYS:setText("+"..CF.game:getModule("JuBaoPen"):getJuBaoPenYS())
end

function JuBaoPenMainView:updateYS()
    self:updateItem()

    local module = CF.game:getModule("JuBaoPen")
    if self._active then
        XH.SpineManager:playAni(self._aniUpdateYS, "res/animation/GameCommon/jubaopen/", "zzb_ty_liuhuo", "animation", false)
        self._txtCurYS:runAction(cc.Sequence:create(cc.DelayTime:create(23/30), cc.ScaleTo:create(6/30, 1.3), cc.CallFunc:create(function()
            self._txtCurYS:setText("+"..module:getJuBaoPenYS())
        end), cc.ScaleTo:create(5/30, 0.85), cc.ScaleTo:create(5/30, 1)))
    else
        self._txtCurYS:setText("+"..module:getJuBaoPenYS())
    end
end

function JuBaoPenMainView:updateItem()

    local module = CF.game:getModule("JuBaoPen")
    self._txtPrice1:setText(module:getPrice1())
    self._txtPrice5:setText(module:getPrice5())
    self._txtDisCount:setText(module:getDiscount().."折")
    

    local itemConfig = Config.ITEM_CONFIG
    local myData = module:getMyData()
    
    local dataById = {}
    for k, v in pairs(myData) do
        dataById[v.treasureId] = v
    end

    for i = 1, Define.ITEM_COUNT do
        local itemId = itemConfig[i].id
        local nodeName = "panel"..i
        local item = self._rootNode:getChildByName(nodeName)
        if item == nil then
            item = self._panelItem:clone() 
            item:addClickEventListener(handler(self, self.onItemClick))
            self._rootNode:addChild(item, 1)
        end
        item:setName(nodeName)
        item.id = itemId
        item.index = i
        item:setPosition(cc.p(self._rootNode:getChildByName("_KW_POS_"..i):getPosition()))
        local bg = item:getChildByName("_KW_IMG_BG")
        bg:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_quality_%d.png", itemConfig[i].quality), ccui.TextureResType.plistType)

        local icon = item:getChildByName("_KW_IMG_ICON")
        icon:ignoreContentAdaptWithSize(true)
        icon:loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_icon_%d.png", i), ccui.TextureResType.plistType)

        local level = item:getChildByName("_KW_FNT_LV")
        local data = dataById[itemId]
        if data == nil then
            CF.UITool.gray(bg)
            CF.UITool.gray(icon)
            level:setVisible(false)
            local aniNode = item:getChildByName("_KW_ITEM_ANI")
            aniNode:removeAllChildren()
        else
            if self._active then
                item:runAction(cc.Sequence:create(cc.ScaleTo:create(7/30, 1.3), cc.CallFunc:create(function()
                    XH.UITool.resetGray(bg)
                    XH.UITool.resetGray(icon)
                    level:setVisible(true)
                    level:setText(data.level < 10 and "Lv:"..data.level or "满级")
                end), cc.ScaleTo:create(4/30, 1.5), cc.ScaleTo:create(8/30, 1)))
                local aniNode = item:getChildByName("_KW_ITEM_ANI")
                local aniNode2 = item:getChildByName("_KW_ITEM_ANI_2")
                local animationComplete = function()
                    XH.SpineManager:playAni(aniNode2, "res/animation/GameCommon/jubaopen/", "zzb_jbp_jlgx", itemConfig[i].animationName, true)
                end
                XH.SpineManager:playAni(aniNode, "res/animation/GameCommon/jubaopen/", "zzb_ty_xgaung2", "animation", false, animationComplete)
            else
                XH.UITool.resetGray(bg)
                XH.UITool.resetGray(icon)
                level:setVisible(true)
                level:setText(data.level < 10 and "Lv:"..data.level or "满级")
                local aniNode = item:getChildByName("_KW_ITEM_ANI")
                aniNode:removeAllChildren()
                XH.SpineManager:playAni(aniNode, "res/animation/GameCommon/jubaopen/", "zzb_jbp_jlgx", itemConfig[i].animationName, true)
            end
        end
    end
end

function JuBaoPenMainView:updateDiamond()
    --钻石数据
    local diamondCnt = XH.playerData:getDiamnd()
    self._txtDiamond:setText(diamondCnt)
end

function JuBaoPenMainView:isRight(index)
    for k,v in ipairs(posIndex) do
        if v == index then
            return true
        end
    end
    return false
end



function JuBaoPenMainView:onItemClick(send)
    
    local itemConfig = Config.ITEM_CONFIG
    local index = send.index
    local name = "tips"..index
    local tips = self._rootNode:getChildByName(name)
    if tips == nil then
        tips = self._panelTips:clone()
        tips:setName(name)
        tips:getChildByName("_KW_IMG_TIPS"):loadTexture(string.format("Common/CSB/GameBase/JuBaoPen/plist/jbp_bg2_pz_%d.png", itemConfig[index].quality), ccui.TextureResType.plistType)
        local qualityName = Config.QualityName[itemConfig[index].quality]
        tips:getChildByName("_KW_TXT_Q"):setText(qualityName)
        local txtName = tips:getChildByName("_KW_TXT_NAME")
        txtName:setText(itemConfig[index].name)
        txtName:setTextColor(itemConfig[index].titleColor)
        tips:getChildByName("_KW_TXT_DES"):setText(itemConfig[index].title)
        self._rootNode:addChild(tips, 2)
    end
    
    if self:isRight(index) then
        tips:getChildByName("_KW_IMG_BG"):setScaleX(-1.0)
        tips:setAnchorPoint(cc.p(0.65, 0.38))
    end
    tips:setPosition(cc.p(send:getPosition()))
    for i = 1, Define.ITEM_COUNT do
        local item = self._rootNode:getChildByName("panel"..i)
        item:stopAllActions()
        if i ~= index then
            local tip = self._rootNode:getChildByName("tips"..i)
            if tip and not tolua.isnull(tip) then
                tip:removeFromParent()
            end
        end
    end
    tips:runAction(cc.Sequence:create(cc.DelayTime:create(2), cc.RemoveSelf:create()))
end

function JuBaoPenMainView:onBtnCloseClick()
    local module = CF.game:getModule("JuBaoPen")
    module:updateYS()
    module:playTitleAnimation()
    self:close()
end

function JuBaoPenMainView:onBtnDesClick()
    CF.gameRequire("Modules.JuBaoPen.JuBaoPenDesView").new():showSelf()
end

function JuBaoPenMainView:onBtnMyClick()
    CF.gameRequire("Modules.JuBaoPen.JuBaoPenMyView").new():showSelf()
end

function JuBaoPenMainView:onBtnCJ1Click()
    self:startLottery({ opt = Define.TreasureActType.TATOnce, notAgain = true })
    CF.game:getModule("JuBaoPen"):thowData(XH.NewThrowDataDefine.dj25090503, {page_item_id = "主界面"})
end

function JuBaoPenMainView:active()
    for i = 1, Define.ITEM_COUNT do
        local item = self._rootNode:getChildByName("panel"..i)
        item:setPosition(cc.p(self._rootNode:getChildByName("_KW_POS_"..i):getPosition()))
        item:setScale(1.0)
    end

    self._btnMy:setOpacity(255)
    self._imgYS:setOpacity(255)
    self._btnCJ1:setOpacity(255)
    self._btnCJ5:setOpacity(255)
    self._panelLeftTop:setOpacity(255)
    self._panelRightTop:setOpacity(255)
    XH.SpineManager:playAni(self._aniEnter, "res/animation/GameCommon/jubaopen/", "zzb_jbp_zjm", "loop", true)
    self._active = true
    self._preventTouch:setVisible(false)
end

function JuBaoPenMainView:startLottery(event)

    local opt = event.opt
    local module = CF.game:getModule("JuBaoPen")

    local price = module:getPrice1()
    local bOnce = true
    if opt == Define.TreasureActType.TATFive or opt == Define.TreasureActType.TATContinue then
        price = module:getPrice5()
        bOnce = false
    end
    if CF.selfPlayerData:getDiamnd() < price then
        local ShopConfig = require("lobby.Modules.Shop.Config")
        local param = {}
        param.propCount = price
        param.propType = ShopConfig.SpecialTag.DIAMOND
        param.isVipProp = false
        XH.viewManager:openView("VipEmojiPropChargeLayer", nil, param)
        if self._active == false then
            self:active()
        end
        return
    end

    self._preventTouch:setVisible(true)
    module:reqJuBaoPen(opt)

    self:stopAllActions()
    self:runAction(cc.Sequence:create(cc.DelayTime:create(0.5), cc.CallFunc:create(function() 
            CF.soundManager:playEffect("res/audio/PropAni/choujiang.mp3")
    end)))

    XH.SpineManager:playAni(self._aniEnter, "res/animation/GameCommon/jubaopen/", "zzb_jbp_zjm", "cj", false, nil,
    {
        ["cx"] = function()
            self._preventTouch:setVisible(false)
            CF.gameRequire("Modules.JuBaoPen.JuBaoPenLotteryView").new({ bOnce = bOnce}):showSelf()
        end
    })

    if event.notAgain == nil then
        return
    end
    local targetPos = cc.p(self._aniItemPos:getPosition())
    local totalTime = 0.6667
    for i = 1, Define.ITEM_COUNT do
        local item = self._rootNode:getChildByName("panel"..i)
        local delay = math.min(math.max(math.random(), 0.1), 0.3)
        local remain = totalTime - delay
        local s = cc.Sequence:create(cc.DelayTime:create(delay))
        local pos = cc.p(math.random()*200 + targetPos.x,  math.random()*100 + targetPos.y)
        item:runAction(cc.Sequence:create(s, cc.Spawn:create(cc.EaseSineIn:create(cc.MoveTo:create(remain, pos)), cc.EaseSineIn:create(cc.ScaleTo:create(remain, 0.01))) ))
    end

    self._btnMy:runAction(cc.FadeOut:create(totalTime))
    self._imgYS:runAction(cc.FadeOut:create(totalTime))
    self._btnCJ1:runAction(cc.FadeOut:create(totalTime))
    self._btnCJ5:runAction(cc.FadeOut:create(totalTime))
    self._panelLeftTop:runAction(cc.FadeOut:create(totalTime))
    self._panelRightTop:runAction(cc.FadeOut:create(totalTime))

    self._active = false
end

function JuBaoPenMainView:onBtnCJ5Click()
    self:startLottery({ opt = Define.TreasureActType.TATFive, notAgain = true })
    CF.game:getModule("JuBaoPen"):thowData(XH.NewThrowDataDefine.dj25090505, {page_item_id = "主界面"})
end

function JuBaoPenMainView:showSelf()
    local parent = display.getRunningScene()
    self:setName("JuBaoPenMainView")
    parent:addChild(self, 95)
end

return JuBaoPenMainView
B