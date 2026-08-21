local BoxConversionRateView = CF.gameClass("BoxConversionRateView", CF.ViewBase)
-- 在类定义中添加配置缓存
BoxConversionRateView._typeConfigs = nil
BoxConversionRateView._gameConfiger = nil

local BoxPlayerConversionConfig =   CF.gameRequire("Modules.BoxConversionRate.Config")

function BoxConversionRateView:ctor(params)
    BoxConversionRateView.super.ctor(self)
    -- 曝光
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.oh25062601, {block_item_id = "包厢房间"})
    
    self._conversionList = params.conversionList
    self._autoCloseTime = params.autoCloseTime
    self._orginCloseTime = params.autoCloseTime

    self:startAutoClose()
    self:initListConversion()
    CF.UITool.fullWidth(self._fullBack)

    self:startShow()
end

function BoxConversionRateView:getCSBPath()
    return "cocosStudio/Common/CSB/BoxConversionRateLayer.csb"
end

function BoxConversionRateView:getBindingInfo()
    return {
        ["_KW_ROOT_PANEL"] = {varName = "_panelRoot"},
        ["_KW_BTN_AUTO_CLOSE"] = {varName = "_btnAutoClose", type = XH.UI_TYPE.IMAGE_TOBUTTON, onTouchEnded = "onTouchAutoClose"},
        ["_KW_LIST_CONVERSION"] = {varName = "_listConversion"},
        ["_KW_ITEM_CONVERSION"] = {varName = "_itemConversion"},
        ["_KW_AUTO_TEXT"] = {varName = "_autoText"},
        ["_KW_FULL_BACK"] = {varName = "_fullBack"},
        ["_KW_PANEL_JI"] = {varName = "_panelJi"},
        ["_KW_IMG_TITLE"] = {varName = "_imgTitle"},
    }
end

function BoxConversionRateView:getProxyEvents()
    return {
        { module = CF.roomData, eventKeyName = "EVENT_GAMESTART_CHANGED", callBack = "onGameStartChanged" },
        { module = CF.roomData, eventKeyName = "EVENT_PLAYERLIST_CHANGED", callBack = "onPlayerListChanged" },
    }
end

function BoxConversionRateView:startAutoClose()
    self._autoText:setString(string.format("( %d )", self._autoCloseTime))
    local delay = cc.DelayTime:create(1)
    local sequence = cc.Sequence:create(delay, cc.CallFunc:create(function()
        if self._autoCloseTime > 0 then
            self:startAutoClose()
        else
            self:onAutoClose()
            return
        end
        self._autoCloseTime = self._autoCloseTime - 1
    end))
    self._btnAutoClose:stopAllActions()
    self._btnAutoClose:runAction(sequence)
end

function BoxConversionRateView:initListConversion()
    self._listConversion:setScrollBarEnabled(false)
    self._listConversion:setItemModel(self._itemConversion)
    self._listConversion:removeAllItems()
    for i = 1, #self._conversionList do
        self._listConversion:pushBackDefaultItem()
        local item = self._listConversion:getItems()[i]
        self:updateItem(item, self._conversionList[i], i)
    end
end

-- 获取游戏配置器（懒加载）
function BoxConversionRateView:getGameConfiger()
    if not self._gameConfiger then
        self._gameConfiger = require("app.Config.Parse.GameSubConfiger").new()
    end
    return self._gameConfiger
end

-- 初始化类型配置（只执行一次）
function BoxConversionRateView:initTypeConfigs()
    if self._typeConfigs then return end
    self._typeConfigs = {
        [BoxPlayerConversionConfig.ConversionType.GoldGame] = {
            nameFunc = function(data, view)
                return view:getGameConfiger():getGameNameByGameId(data.gameId)
            end,
            desc = "金币场",
            imageFunc = function(data, view)
                local key = view:getGameConfiger():getGameTypePathByGameId(
                    tonumber(data.gameId))
                return key == "Mahjong" and "box_player_conversion_Img_diban4.png" 
                                       or "box_player_conversion_Img_diban1.png"
            end,
            colorsFunc = function(data, view)
                local key = view:getGameConfiger():getGameTypePathByGameId(
                    tonumber(data.gameId))
                return key == "Mahjong" and {cc.c3b(0x3b,0x43,0x6c), cc.c3b(0x55,0x5d,0x89)}
                                        or {cc.c3b(0x6b,0x49,0x3b), cc.c3b(0x80,0x5d,0x4e)}
            end,
            action = function(data)
                CF.game:getModule("BoxConversionRate"):openGoldGame(data.gameId)
            end
        },
        [BoxPlayerConversionConfig.ConversionType.Match] = {
            name = "比赛场",
            desc = "牌技切磋",
            image = "box_player_conversion_Img_diban2.png",
            colors = {cc.c3b(0x38,0x54,0x5b), cc.c3b(0x33,0x4e,0x54)},
            action = function()
                CF.game:getModule("BoxConversionRate"):openFirstMatch()
            end
        },
        [BoxPlayerConversionConfig.ConversionType.Rrby] = {
            name = "人人捕鱼",
            desc = "3D捕鱼",
            image = "box_player_conversion_Img_diban3.png",
            colors = {cc.c3b(0x39,0x4f,0x80), cc.c3b(0x4b,0x5f,0x8d)},
            action = function()
                CF.game:getModule("BoxConversionRate"):openRRBY()
            end
        }
    }
end

-- 主更新函数
function BoxConversionRateView:updateItem(item, data, index)
    -- 参数校验
    if not self:_validateParams(item, data) then
        return
    end
    if not item or tolua.isnull(item) then
        return
    end

    item:setOpacity(0)
    performWithDelay(item, function()
        local originX = item:getPositionX()
        local originY = item:getPositionY()
        item:setPositionX(originX + 150)
        local fadeAction = cc.FadeTo:create(0.2, 255)
        local moveAction = cc.MoveTo:create(0.2, cc.p(originX, originY))
        item:runAction(cc.Sequence:create(
            cc.DelayTime:create(index / 20), 
            cc.Spawn:create(fadeAction, moveAction)
        ))
    end, 0)
  
    -- 初始化配置
    self:initTypeConfigs()
    
    -- 获取配置
    local config = self._typeConfigs[data.cType]
    if not config then
        self:_logUnknownType(data.cType)
        return
    end

    -- 更新UI
    self:_updateItemUI(item, data, config)
    
    -- 设置点击事件
    CF.UIButton.create(item, CF.UIButton.CLICK_STYLE.DEFAULT, function()
        if config.action then
            config.action(data)
        end
        CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.oh25062602, {block_item_id = "包厢房间" , page_item_id = "卡片" .. index})
    end)
end

-- 私有方法：参数验证
function BoxConversionRateView:_validateParams(item, data)
    if not item or not data then
        print("Error: Invalid parameters to updateItem")
        return false
    end
    
    if not data.cType then
        print("Error: Missing cType in data")
        return false
    end
    
    return true
end

-- 私有方法：记录未知类型
function BoxConversionRateView:_logUnknownType(cType)
    print(string.format("Warning: Unknown conversion type: %s", tostring(cType)))
end

-- 私有方法：更新UI元素
function BoxConversionRateView:_updateItemUI(item, data, config)
    -- 获取显示数据
    local name = config.name or (config.nameFunc and config.nameFunc(data, self))
    local desc = config.desc
    local imgPath = config.image or (config.imageFunc and config.imageFunc(data, self))
    local colors = config.colors or (config.colorsFunc and config.colorsFunc(data, self))

    -- 设置文本
    CF.UITool.setText(item, "GAME_NAME", name or "")
    CF.UITool.setText(item, "GAME_DESC", desc or "")
    
    -- 设置颜色
    if colors and #colors >= 2 then
        CF.UITool.setTextColor(item, "GAME_DESC", colors[1])
        CF.UITool.setTextColor(item, "GAME_NAME", colors[2])
    end
    
    -- 设置背景
    if imgPath then
        CF.UITool.loadTexture(item, "GAME_BG" , imgPath, ccui.TextureResType.plistType )
    end
end

function BoxConversionRateView:onTouchAutoClose(send, eventType)
    CF.NewThrowDataManager:throwData(CF.NewThrowDataDefine.oh25062602, {block_item_id = "包厢房间" , page_item_id = "关闭"})
    if self._orginCloseTime - self._autoCloseTime <= 3 then
        CF.game:getModule("BoxConversionRate"):setTrackFrequentlyData()
    end
    self:onAutoClose()
end

function BoxConversionRateView:onAutoClose()
    CF.game:getModule("BoxConversionRate"):startConversion(true)
    self:close()
end

function BoxConversionRateView:onGameStartChanged(event)
    if not event or not event.msg then
        return
    end
    if event.msg.nowState then
        self:close()
    end
end

function BoxConversionRateView:onPlayerListChanged()
     if CF.roomData:getCurPlayerCount() > 1 then
         self:close()
    end
end

function BoxConversionRateView:startShow()
    self._panelRoot:setOpacity(0)
    self._panelRoot:runAction(cc.Sequence:create(cc.DelayTime:create(0.0), cc.FadeIn:create(0.2)))
    XH.SpineManager:playAniWithComplete(self._panelJi, "animation/Lobby/Base/zzb_ty_xiaoji/", "zzb_ty_xiaoji", "cx", false, "loop", true)


    local originX = self._imgTitle:getPositionX()
    local originY = self._imgTitle:getPositionY()
    self._imgTitle:setPositionX(originX - 200)
    local fadeAction = cc.FadeTo:create(0.2, 255)
    local moveAction = cc.MoveTo:create(0.2, cc.p(originX, originY))
    self._imgTitle:runAction(cc.Sequence:create(
        cc.Spawn:create(fadeAction, moveAction)
    ))
end

return BoxConversionRateView   I%  