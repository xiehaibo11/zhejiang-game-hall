local TeaHouseTableColorSetView = class("TeaHouseTableColorSetView", TeaHouse.View)

TeaHouseTableColorSetView.RAW_RES_BINDING_CSB = {
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseTableColorSetView.csb",
    binding = {
        ["_KW_BTN_TABLE_COLOR_OK"] = {tag = "_KW_BTN_TABLE_COLOR_OK", name = "_btnSure", class = "btn",events = "onBtnEventSure"},
        ["_KW_BTN_TABLE_COLOR_CLOSE"] = {tag = "_KW_BTN_TABLE_COLOR_CLOSE", name = "_btnClose", class = "btn", events = "onBtnEventClose"},
        ["_KW_LIST_TABLE_COLOR"] = {tag = "_KW_LIST_TABLE_COLOR",name = "_listTableColor"},
        ["_KW_TABLE_SELECT_ITEM"] = {tag ="_KW_TABLE_SELECT_ITEM",name = "_selectItem",class = "btn",events = "onBtnEventSelect"},
        ["_KW_TABEL_ONE_ROW"] = {tag ="_KW_TABEL_ONE_ROW",name = "_listRow"},
        ["_KW_SELECT_TEXT"] = {tag = "_KW_SELECT_TEXT",name = "_txtColor"},
    }
}

local COLOR = {
    [1] = "默认",
    [2] = "颜色1",
    [3] = "颜色2",
    [4] = "颜色3",
    [5] = "颜色4",
}


local KW_TABLE_COLOR_PLIST = "res/cocosStudio/TeaHouse/Image/tea_house_set_table_color.plist"
--记录色块ITEM
local COLORITEM = {}

function TeaHouseTableColorSetView:ctor(info)
    cc.SpriteFrameCache:getInstance():addSpriteFrames(KW_TABLE_COLOR_PLIST)
    self._data = info.data or ""
    self._playModeId = info.data.nPlayModeId or 0
    self._acData = info.data.acData or ""
    TeaHouseTableColorSetView.super.ctor(self, info)
    self:initView()
end

function TeaHouseTableColorSetView:initView()
    self:initColorItem()                 --初始化颜色ITEM的整体布局
    self:initDefaultColorItem()          --根据服务字段ITEM显示默认选择颜色
end

--初始化颜色ITEM的整体布局
function TeaHouseTableColorSetView:initColorItem()
    COLORITEM = {}
    self._listTableColor:setScrollBarEnabled(false)
    local ROW = self._listRow:clone()
    self._listTableColor:addChild(ROW)
    for i = 1, #COLOR do
        if (i - 1) % 3 == 0 and i~= 1 then 
            ROW = self._listRow:clone()
            self._listTableColor:addChild(ROW)
        end

        local item = self._selectItem:clone()
        item:setName("_KW_TABLE_SELECT_ITEM_"..i)
        item:setAnchorPoint(cc.p(0, 0))
        item:addTouchEventListener(handler(self, self.onBtnEventSelect))
        local textureName = string.format("color_2_%d.png", i)
        item:getChildByName("_KW_SELECT_BG"):loadTexture(textureName, ccui.TextureResType.plistType)
        if i == 1 then
            item:getChildByName("_KW_SELECT_TEXT"):setVisible(true)
            item:getChildByName("_KW_SELECT_TEXT"):setString(COLOR[i])
        end
        local selectSure = item:getChildByName("_KW_SELECT_SURE")
        selectSure:setVisible(false)
        
        ROW:addChild(item)
        table.insert(COLORITEM,item)
        local whiteWidth = 60
        local rowSizeWidth = ROW:getContentSize().width / 3
        item:setPosition(cc.p(rowSizeWidth * ((i-1)%3) + whiteWidth,0))
    end
end

function TeaHouseTableColorSetView:initDefaultColorItem()
    local colorNum = TeaHouse.SysTool.analysisTableColor(self._acData)

    local defaultItem = COLORITEM[colorNum]
    if defaultItem then
        self:onBtnEventSelect(defaultItem, ccui.TouchEventType.ended)
    end
end 

function TeaHouseTableColorSetView:onBtnEventClose(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_91)
end


function TeaHouseTableColorSetView:onBtnEventSure(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local TableColor = tonumber(TeaHouse.StringTool.getNumberSuffixByString(self._selectColorIndex) or 0)
    local data = self._data
    data.acData = self:modifyColorType(data.acData,TableColor)
    TeaHouse.manager.teahouseSetup:setPlayModeColorInfo(data, self._playModeId)   --向服务传数据
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_90)
end


function TeaHouseTableColorSetView:modifyColorType(gameRule,numColor) 
    if not gameRule then
        return
    end

    local TableColor = string.format("TabeleColor=%s;",numColor)
    if string.find(gameRule, "TabeleColor") ~= nil then
        for i = 1, #COLOR do
            local curTableColor = string.format("TabeleColor=%s;",i)
            if string.find(gameRule, curTableColor) then 
                return string.gsub(gameRule,curTableColor, TableColor)
            end
        end
    else
        return gameRule.. string.format("TabeleColor=%s;",tostring(numColor))
    end

end

--色块的选择
function TeaHouseTableColorSetView:onBtnEventSelect(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self._selectColorIndex = send:getName()
    self:updateColorBtnsState(send)
    local tmpData = {}
    tmpData.colorid = tonumber(TeaHouse.StringTool.getNumberSuffixByString(self._selectColorIndex) or 0) 
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_89,tmpData)
end

 --隐藏其它色块的选择状态
function TeaHouseTableColorSetView:updateColorBtnsState(send)
    for _, btn in pairs(COLORITEM) do
        if btn:getName() == self._selectColorIndex then 
            btn:getChildByName("_KW_SELECT_SURE"):setVisible(true)
        else
            btn:getChildByName("_KW_SELECT_SURE"):setVisible(false)
        end
    end
end


return TeaHouseTableColorSetView