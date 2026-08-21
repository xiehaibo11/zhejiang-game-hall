-- 选择需要创建的比赛场
local TeaHouseRemodelMomentsTip = class("TeaHouseRemodelMomentsTip",TeaHouse.View)

local KW_MIN_NUM = 1
local KW_MAX_NUM = 5
local KW_LINE_MAX = 8
local COLUMN_TEXT_INDEX = "COLUMN_TEXT_"
local FORMS_ROW_INDEX = "FORMS_ROW_"

TeaHouseRemodelMomentsTip.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseRemodelTip.csb",
    binding = {
        ["_KW_BTN_CLOSE"] = {tag = "_KW_BTN_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_CREATE_FORMS"] = {tag = "_KW_CREATE_FORMS",name = "_textPanel",class = "panel"},
        ["_KW_BTN_CUSSERVER"] = {tag = "_KW_BTN_CUSSERVER",name = "_btnCusServer",class = "img",events = "onCusServerClicked"},
        ["_KW_LISTVIEW"] = {tag = "_KW_LISTVIEW",name = "_listView"},
        ["_KW_COVER_COL_1"] = {tag = "_KW_COVER_COL_1",name = "_coverCol1"},
        ["_KW_COVER_COL_2"] = {tag = "_KW_COVER_COL_2",name = "_coverCol2"},
        ["_KW_COVER_COL_3"] = {tag = "_KW_COVER_COL_3",name = "_coverCol3"},
    },
}


function TeaHouseRemodelMomentsTip:ctor()
    TeaHouseRemodelMomentsTip.super.ctor(self)
    self:initFormsTextView()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_74)

    self._listView:setScrollBarEnabled(true)
    self._listView:setScrollBarAutoHideEnabled(true)
    self._listView:setScrollBarAutoHideTime(0)
    self._listView:setScrollBarOpacity(255*0.4)
end

function TeaHouseRemodelMomentsTip:initFormsTextView()
    local titlePanel = XH.UITool.seekNodeByName(self._textPanel, "FORMS_TITLE")
    if titlePanel then
        local tmpNode = titlePanel:getChildren()
        for k, v in pairs(tmpNode) do 
            v:setString(TeaHouse.StringTool.replaceMatchStr(v:getString()))
        end
    end

    local textConfig = TeaHouse.manager.configManager.remodelConfig._tipTextConfig
    local setupConfig = TeaHouse.manager.configManager.SetupConfig
    for i = KW_MIN_NUM,KW_LINE_MAX do
        for j = KW_MIN_NUM,KW_MAX_NUM do 
            if textConfig and textConfig[i] and textConfig[i][j] then
                local node = self:getTextNode(i,j)
                if node then
                    node:setText(textConfig[i][j])
                end
            end
        end
     end
    if setupConfig.IsOpenAdjustableTeaLevel then
        if not setupConfig.IsOpenLevel1 then
            self._coverCol1:setVisible(true)
        end
        if not setupConfig.IsOpenLevel2 then
            self._coverCol2:setVisible(true)
        end
        if not setupConfig.IsOpenLevel3 then
            self._coverCol3:setVisible(true)
        end
    end
end

function TeaHouseRemodelMomentsTip:getTextNode(row,column)
    local rowNode = ccui.Helper:seekWidgetByName(self._textPanel, FORMS_ROW_INDEX .. row)
    if rowNode then
        local columnNode = ccui.Helper:seekWidgetByName(rowNode, COLUMN_TEXT_INDEX .. column)
        if columnNode then
            return columnNode
        end
    end
    return nil
end

function TeaHouseRemodelMomentsTip:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    self:close()
end

function TeaHouseRemodelMomentsTip:onCusServerClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    TeaHouse.showCusServiceView("CREATETEAHOUSE")
end

return TeaHouseRemodelMomentsTip
