local LobbyBattlePassUnlockView = class("LobbyBattlePassUnlockView", XH.ViewBase)
local BattlePassConfig = require("lobby.Modules.BattlePass.Config")

local commonAniPath = "res/animation/Common/"

function LobbyBattlePassUnlockView:getCSBPath()
    return "hall/CSB/BattlePass/Lobby/UnlockView.csb"
end

function LobbyBattlePassUnlockView:getBindingInfo()
    return {
        ["_KW_BTN_CLOSE"] = {varName = "_btnClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchEventClose"},
        ["_KW_BTN_BUY1"] = {varName = "_btnBuy1", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchBuy1"},
        ["_KW_BTN_BUY2"] = {varName = "_btnBuy2", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchBuy2"},
        ["_KW_LEFT_LIST"] = {varName = "_leftList"},
        ["_KW_RIGHT_LIST"] = {varName = "_rightList"},
        ["_KW_LIST_ITEM_LEFT"] = {varName = "_listItemLeft"},
        ["_KW_LIST_ITEM_RIGHT"] = {varName = "_listItemRight"},
        ["_KW_LIST_AWARD_LEFT"] = {varName = "_awardLeftList"},
        ["_KW_LIST_AWARD_RIGHT"] = {varName = "_awardRightList"},
        ["_KW_LAWARD_LEFT_ITEM"] = {varName = "_awardLeftItem"},
        ["_KW_LAWARD_RIGHT_ITEM"] = {varName = "_awardRightItem"},
        ["_KW_LAWARD_LEFT_ONE_ITEM"] = {varName = "_awardLeftOneItem"},
        ["_KW_LAWARD_RIGHT_ONE_ITEM"] = {varName = "_awardRightOneItem"},
        ["_KW_PANEL_LEFT"] = {varName = "_panelLeft"},
        ["_KW_PANEL_RIGHT"] = {varName = "_panelRight"},
        ["_KW_PANEL_MID"] = {varName = "_panelMid"},
        ["_KW_ANI_TITLE_LIUGUANG"] = {varName = "_aniTitleLiuguang"},
        ["_KW_ANI_TITLE_SAOGUANG"] = {varName = "_aniTitleSaoguang"},
        ["_KW_ANI_BTN_BUY_"] = {varName = "_aniBtnBuy", beginIndex = 1, endIndex = 2},
    }
end

function LobbyBattlePassUnlockView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("BattlePass.Lobby"), eventKeyName = "EVENT_BATTLE_PASS_RESP", callBack = "onEventBattlePassResp" },
         {module = XH.sdkManager, eventKeyName = "EVENT_IAP_CALLBACK", callBack = "respBuyProp"}
    }
end

function LobbyBattlePassUnlockView:ctor(param)
    param = param or {}
    LobbyBattlePassUnlockView.super.ctor(self)
    self._tabIndex = param.tabIndex or 1
    self:initUI()

    -- 埋点
    local entrance = param.entrance or BattlePassConfig.LobbyUnLockEntrance.MAIN
    local lobbytype = XH.lobby:getModule("Lobby"):getLobbyType()
    local data = {
        page = lobbytype == XH.LOBBY_TYPE.XIUXIAN and "金币大厅" or "大厅",
        page_item_id = entrance == BattlePassConfig.LobbyUnLockEntrance.REWARD and "奖励到账界面" or "主界面"
    }
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.zjq25042709, data)
end

function LobbyBattlePassUnlockView:initUI()
    self._leftList:setScrollBarEnabled(false)
    self._rightList:setScrollBarEnabled(false)
    self._awardLeftList:setScrollBarEnabled(false)
    self._awardRightList:setScrollBarEnabled(false)
    self._awardLeftItem:setScrollBarEnabled(false)
    self._awardRightItem:setScrollBarEnabled(false)
    self._battlePassShopList = XH.lobby:getModule("BattlePass.Lobby"):getShopGoodsInfo()
    if not self._battlePassShopList or #self._battlePassShopList == 0 then
        XH.TipTool.showToast("解锁雀神令商城未配置")
        return
    end
   self:sortByPrice(self._battlePassShopList)
    local allAwardList = XH.lobby:getModule("BattlePass.Lobby"):getAwardFromLvToLv(self._tabIndex, 0, 100000) 
    if not (type(allAwardList) == "table") or #allAwardList < 3 then
        return
    end
    self:initLeftAwardList(clone(allAwardList[2]))
    self:initRightAwardList(clone(allAwardList[2]), clone(allAwardList[3]))
    self:initButtons()  
end

function LobbyBattlePassUnlockView:onEnter()
    self._panelLeft:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "zuo", slotName = "zuo"}
    )
    self._panelRight:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "you", slotName = "you"}
    )
    self._panelMid:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "renwu", slotName = "renwu"}
    )
    self._btnBuy1:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "btn", slotName = "btn"}
    )
    self._btnBuy2:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "btn", slotName = "btn"}
    )
    self._btnClose:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "btn", slotName = "btn"}
    )
    self._awardLeftList:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "btn", slotName = "btn"}
    )
    self._awardRightList:addLuaComponent(
        cc.ext.CompSpineAction,
        {jsonFilePath = "cocosStudio/hall/CSB/BattlePass/animation/zzb_qsl_tc.json", animationName = "animation", boneName = "btn", slotName = "btn"}
    )
    

    XH.SpineManager:playAniWithComplete(self._aniTitleSaoguang, commonAniPath, "zzb_ty_btgx", "cx", false, "loop", true)
    XH.SpineManager:playAni(self._aniTitleLiuguang, commonAniPath, "zzb_ty_liuguang", "animation", true)
    XH.SpineManager:playAni(self._aniBtnBuy1, commonAniPath, "zzb_ty_ansg", "animation", true)
    XH.SpineManager:playAni(self._aniBtnBuy2, commonAniPath, "zzb_ty_ansg", "animation", true)
end

-- 101473 金币id
-- 左边奖励
function LobbyBattlePassUnlockView:initLeftAwardList(list)
    -- 左边奖励
    self._leftList:removeAllItems()
    local leftAwardList = list
    -- 区分图标展示 和  描述展示
    local leftBottomList = {
       {
          propId = XH.areaData:getPropDiamndID(),
          propValue = 0,
          prizeName = "钻石%s",
       },
       {
          propId = XH.areaData:getPropRoomCardID(),
          propValue = 0,
          prizeName = "房卡%s",
       },
       {
          propId = 101473,
          propValue = 0,
          prizeName = "金币%s",
       },
    }  
    for i = #leftAwardList, 1, -1 do 
        local propId = tonumber(leftAwardList[i].propId)
        local propValue = tonumber(leftAwardList[i].propValue)
        if propId then
            for j = 1, #leftBottomList, 1 do
                if leftBottomList[j].propId == propId then
                    leftBottomList[j].propValue = propValue
                    leftBottomList[j].prizeName = string.format(leftBottomList[j].prizeName, XH.lobby:getModule("BattlePass"):getNumberString(propValue))
                    table.remove(leftAwardList, i)
                end
            end
        end
    end
    self:sortTable(leftAwardList)
    for i = 1, #leftAwardList, 1 do
        local itemNode = self._listItemLeft:clone()
        itemNode:setVisible(true)
        local itemView = require("lobby.Modules.BattlePass.AwardItemView").new()
        local extInfo = {}
        extInfo.lv = 2
        -- extInfo.ani = true
        extInfo.newStyle = true
        itemView:init(leftAwardList[i], extInfo)
        XH.UITool.setText(itemNode, "_KW_PROP_NAME", leftAwardList[i].prizeName)
        XH.UITool.adaptTextToWidth(itemNode:getChildByName("_KW_PROP_NAME"), 155, 28, 5)
        itemNode:getChildByName("_KW_PANEL_ITEM"):addChild(itemView)
        self._leftList:pushBackCustomItem(itemNode)
    end
    -- 总计获得
    for i = #leftBottomList, 1, -1 do
        local propValue = leftBottomList[i].propValue
        if propValue and propValue <= 0 then
             table.remove(leftBottomList, i)
        end
    end
    self._awardLeftList:removeAllItems()
    for i = 1, math.ceil(#leftBottomList/2), 1 do
        local leftItem = self._awardLeftItem:clone()
        self._awardLeftList:pushBackCustomItem(leftItem)
        for j = 1, 2 do
            local index = (i - 1) * 2 + j
            local data = leftBottomList[index]
            if data then
                local leftOneItem = self._awardLeftOneItem:clone()
                leftOneItem:setVisible(true)
                local path = self:getLeftTotalIconPath(data.propId)
                XH.UITool.loadTexture(leftOneItem, "_KW_ICON", path , ccui.TextureResType.plistType)
                XH.UITool.setText(leftOneItem, "_KW_DESC", data.prizeName)
                leftItem:pushBackCustomItem(leftOneItem)
            end
        end
    end
end

function LobbyBattlePassUnlockView:getLeftTotalIconPath(propId)
    propId = tonumber(propId)
    local path = "hall/CSB/BattlePass/Image/unlock/"
    if propId == XH.areaData:getPropDiamndID() then
        return path .. "gaqsl_db_gj_zs.png"
    elseif propId == XH.areaData:getPropRoomCardID() then
        return path .. "gaqsl_db_gj_fk.png"
    elseif propId == 101473 then
        return path .. "gaqsl_db_gj_jy.png"
    end
end

-- 右边奖励
function LobbyBattlePassUnlockView:initRightAwardList(list2, list3)
    self._rightList:removeAllItems()
    -- 右边奖励
    local rightAwardList = XH.lobby:getModule("BattlePass"):mergeAwardList(list2, list3)
    -- 区分图标展示 和  描述展示
    local rightBottomList = {
        {
           propId = XH.areaData:getPropDiamndID(),
           propValue = 0,
           prizeName = "钻石%s",
        },
        {
           propId = XH.areaData:getPropRoomCardID(),
           propValue = 0,
           prizeName = "房卡%s",
        },
        {
           propId = 101473,
           propValue = 0,
           prizeName = "金币%s",
        },
        {
            propId = 999999, --等级
            propValue = 1, --额外匹配不上的 必须大于0
            prizeName = string.format("等级直升%d级", XH.lobby:getModule("BattlePass.Lobby"):getSuperAddLevel())
        },
        {
            propId = 999998, --经验
            propValue = 1, --额外匹配不上的 必须大于0
            prizeName = string.format("经验加成%d%%", XH.lobby:getModule("BattlePass.Lobby"):getSuperAddExp() * 100)
         },
    }  
    for i = #rightAwardList, 1, -1 do 
        local propId = tonumber(rightAwardList[i].propId)
        local propValue = tonumber(rightAwardList[i].propValue)
        if propId then
            for j = 1, #rightBottomList, 1 do
                if rightBottomList[j].propId == propId then
                    rightBottomList[j].propValue = propValue
                    rightBottomList[j].prizeName = string.format(rightBottomList[j].prizeName, XH.lobby:getModule("BattlePass"):getNumberString(propValue))
                    table.remove(rightAwardList, i)
                end
            end
        end
    end
    self:sortTable(rightAwardList)
    for i = 1, #rightAwardList, 1 do
        local itemNode = self._listItemRight:clone()
        itemNode:setVisible(true)
        local itemView = require("lobby.Modules.BattlePass.AwardItemView").new()
        local extInfo = {}
        extInfo.lv = 2
        -- extInfo.ani = true
        extInfo.newStyle = true
        itemView:init(rightAwardList[i], extInfo)
        XH.UITool.setText(itemNode, "_KW_PROP_NAME", rightAwardList[i].prizeName)
        XH.UITool.adaptTextToWidth(itemNode:getChildByName("_KW_PROP_NAME"), 155, 28, 5)
        itemNode:getChildByName("_KW_PANEL_ITEM"):addChild(itemView)
        self._rightList:pushBackCustomItem(itemNode)
    end
    -- 总计获得
    for i = #rightBottomList, 1, -1 do
        local propValue = rightBottomList[i].propValue
        if propValue and propValue <= 0 then
             table.remove(rightBottomList, i)
        end
    end
    self._awardRightList:removeAllItems()
    for i = 1, math.ceil(#rightBottomList/2), 1 do
        local rightItem = self._awardRightItem:clone()
        self._awardRightList:pushBackCustomItem(rightItem)
        for j = 1, 2 do
            local index = (i - 1) * 2 + j
            local data = rightBottomList[index]
            if data then
                local rughtOneItem = self._awardRightOneItem:clone()
                rughtOneItem:setVisible(true)
                local path = self:getRightTotalIconPath(data.propId)
                XH.UITool.loadTexture(rughtOneItem, "_KW_ICON", path , ccui.TextureResType.plistType)
                XH.UITool.setText(rughtOneItem, "_KW_DESC", data.prizeName)
                rightItem:pushBackCustomItem(rughtOneItem)
            end
        end
    end
end

function LobbyBattlePassUnlockView:getRightTotalIconPath(propId)
    propId = tonumber(propId)
    local path = "hall/CSB/BattlePass/Image/unlock/"
    if propId == XH.areaData:getPropDiamndID() then
        return path .. "zzqsl_db_zz_zs.png"
    elseif propId == XH.areaData:getPropRoomCardID() then
        return path .. "zzqsl_db_zz_fk.png"
    elseif propId == 101473 then
        return path .. "zzqsl_db_zz_jylj.png"
    elseif propId == 999999 then
        return path .. "zzqsl_db_zz_dj.png"
    elseif propId == 999998 then
        return path .. "zzqsl_db_zz_jy.png"
    end
end

function LobbyBattlePassUnlockView:sortTable(t)
    table.sort(
        t,
        function(a, b)
            if a.awardLv == b.awardLv then
                return tonumber(a.propValue) > tonumber(b.propValue)
            else
                return a.awardLv > b.awardLv
            end
        end
    )
end

function LobbyBattlePassUnlockView:initButtons()
   self._btnBuy1:setTouchEnabled(false)
   self._btnBuy2:setTouchEnabled(false)
   XH.UITool.setVisible(self._btnBuy1, "_KW_DESC" ,false)
   XH.UITool.setVisible(self._btnBuy2, "_KW_DESC" ,false)
   XH.UITool.setVisible(self._btnBuy1, "_KW_IMG" ,false)
   XH.UITool.setVisible(self._btnBuy2, "_KW_IMG" ,false)
   local isBuySenior,isBuySuper = XH.lobby:getModule("BattlePass.Lobby"):getBuyStatus()
   if isBuySenior == false and isBuySenior == false then
        self._btnBuy1:setTouchEnabled(true)
        self._btnBuy2:setTouchEnabled(true)
        XH.UITool.setVisible(self._btnBuy1, "_KW_DESC" ,true)
        XH.UITool.setVisible(self._btnBuy2, "_KW_DESC" ,true)
        local price1 =  XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._battlePassShopList[1].product_id) or tonumber(self._battlePassShopList[1].price)/100
        local price2 =  XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._battlePassShopList[3].product_id) or tonumber(self._battlePassShopList[3].price)/100
        XH.UITool.setText(self._btnBuy1, "_KW_DESC", price1 .. "元")
        XH.UITool.setText(self._btnBuy2, "_KW_DESC", price2 .. "元")
   elseif isBuySenior == true and isBuySuper == false then
        self._btnBuy2:setTouchEnabled(true)
        XH.UITool.setVisible(self._btnBuy1, "_KW_IMG" ,true)
        XH.UITool.setVisible(self._btnBuy2, "_KW_DESC" ,true)
        local price = XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(self._battlePassShopList[2].product_id) or tonumber(self._battlePassShopList[2].price)/100
        XH.UITool.setText(self._btnBuy2, "_KW_DESC", price .. "元")
    else
        XH.UITool.setVisible(self._btnBuy1, "_KW_IMG" ,true)
        XH.UITool.setVisible(self._btnBuy2, "_KW_IMG" ,true)
   end
end 

function LobbyBattlePassUnlockView:sortByPrice(shopList)
    if not shopList or #shopList == 0 then
        return nil, nil
    end
    -- 按 price 升序排序
    table.sort(shopList, function(a, b)
        return tonumber(a.price) < tonumber(b.price)
    end)
end


function LobbyBattlePassUnlockView:onTouchEventClose()
    self:close()
end

function LobbyBattlePassUnlockView:onTouchBuy1()
    if not XH.lobby:getModule("BattlePass.Lobby"):checkInActTime() then
        XH.lobby:getModule("BattlePass.Lobby"):onEventCheckActActive()
        return
    end
    local product = self._battlePassShopList[1]
    if not product then
        XH.TipTool.showToast("商品配置异常，请联系客服...")
        return
    end
    product.real_price = XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(product.product_id) or product.price / 100
    XH.lobby:getModule("BattlePass"):reqBuy(product, nil, true)
    self._showLevelUp = false
end

function LobbyBattlePassUnlockView:onTouchBuy2()
    if not XH.lobby:getModule("BattlePass.Lobby"):checkInActTime() then
        XH.lobby:getModule("BattlePass.Lobby"):onEventCheckActActive()
        return
    end
    local product = self._battlePassShopList[3]
    local isBuySenior, _ = XH.lobby:getModule("BattlePass.Lobby"):getBuyStatus()
    if isBuySenior then
        product = self._battlePassShopList[2]
    end
    if not product then
        XH.TipTool.showToast("商品配置异常，请联系客服...")
        return
    end
    product.real_price = XH.lobby:getModule("BattlePass"):getYmnPriceByProductId(product.product_id) or product.price / 100
    XH.lobby:getModule("BattlePass"):reqBuy(product, nil, true)
    self._showLevelUp = true
end

function LobbyBattlePassUnlockView:respBuyProp(event)
    local code = event.data.code
    XH.TipTool.hideLoading()
    if code == 200 then
        -- 充值有延迟，重新刷新
        XH.SysTool.performDelayOnce(
            function()
                XH.TipTool.showLoading(2)
            end,
            0.5
        )
        XH.SysTool.performDelayOnce(
            function()
                XH.TipTool.hideLoading()
                XH.playerData:flushPlayerDrop()
                XH.lobby:getModule("BattlePass.Lobby"):reqActivityInfo()
                if self._showLevelUp then
                    local curLevel = XH.lobby:getModule("BattlePass.Lobby"):getCurLevel()
                    local maxLevel = XH.lobby:getModule("BattlePass.Lobby"):getMaxLevel()
                    local superAddLevel  = XH.lobby:getModule("BattlePass.Lobby"):getSuperAddLevel()
                    local showLevel = curLevel + superAddLevel > maxLevel and maxLevel - curLevel or superAddLevel
                    if showLevel > 0 then
                        XH.TipTool.showToast("购买成功，等级提升" .. showLevel .."级")
                    end
                    self._showLevelUp = false
                end
            end,
            2
        )
    end
end

function LobbyBattlePassUnlockView:onEventBattlePassResp(event)
    if not self or tolua.isnull(self) then
        return
    end
    self:initUI()
end

return LobbyBattlePassUnlockView
#K