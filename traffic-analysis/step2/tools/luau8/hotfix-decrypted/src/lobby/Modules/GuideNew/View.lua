-- 新手引导
local GuideNewView = class("GuideNewView", XH.ViewBase)
local GuideNewConfig = require("lobby.Modules.GuideNew.Config")

function GuideNewView:getCSBPath()
    return "cocosStudio/hall/CSB/guide/GuideNewUI.csb"
end

function GuideNewView:getBindingInfo()
    return {        
       ["_KWA_GAME_PLAY"] = {varName = "_gamePlayList"},
       ["_KWA_JUMP"] = {varName = "_jumpBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onJump" },
       ["_KWA_GUIDE_ITEM"] = {varName = "_gamePlayItem"},
    }
end

function GuideNewView:ctor(param) 
    GuideNewView.super.ctor(self)

    self._guideConfigList = param or {}

    self:initGamePlayList()

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xyh24091001)
    
end

function GuideNewView:onJump(send,eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xyh24091002, {page_item_id = "跳过教程"})
    self:close()
end

function GuideNewView:initGamePlayList()
    local oriSize = self._gamePlayList:getContentSize()
    local itemSize = self._gamePlayItem:getContentSize()
    self._gamePlayList:setScrollBarEnabled(false)

    for _, guide in ipairs(self._guideConfigList) do
        local item = self._gamePlayItem:clone()
        self:updateGameOlayItem(item, guide)
        self._gamePlayList:pushBackCustomItem(item)
    end

    self._gamePlayList:setTouchEnabled(#self._guideConfigList > 3)
    if #self._guideConfigList == 2 then
        self._gamePlayList:setContentSize(itemSize.width * 2 + self._gamePlayList:getItemsMargin() , itemSize.height)
    elseif #self._guideConfigList == 1 then
        self._gamePlayList:setContentSize(itemSize.width , itemSize.height)
    else
        self._gamePlayList:setContentSize(oriSize.width, oriSize.height)
    end
end

function GuideNewView:updateGameOlayItem(item, data)
    if not item or not data then return end
     -- 设置tag
    local tagImg = item:getChildByName("ITEM_TAG")
    if data.tag and tagImg then
        if data.tag == 0 then
            tagImg:setVisible(false)
        else
            tagImg:setVisible(true)
            local tagPath = string.format("hall/Image/GuideNew/item_tag_%s.png", data.tag)
            tagImg:loadTexture(tagPath, ccui.TextureResType.plistType)
        end
    end
   
    -- 设置描述1
    local desc1Text = item:getChildByName("DESC1")
    if data.desc1 and desc1Text then
        desc1Text:setString(data.desc1 or "")
    end

    -- 设置描述2
    local desc2Text = item:getChildByName("DESC2")
    if data.desc2 and desc2Text then
        desc2Text:setString(data.desc2 or "")
    end
    
    -- 设置样式图
    local itemImg = item:getChildByName("ITEM_BG")
    if data.style and itemImg then
        -- 设置对应图
        local imgPath = string.format("hall/Image/GuideNew/item_bg_%s.png", data.style)
        itemImg:loadTexture(imgPath, ccui.TextureResType.plistType)
        itemImg:setTouchEnabled(true)
        itemImg:addTouchEventListener(handler(self, self.onItemClicked))
        -- 设置字体样式
        local color = GuideNewConfig.STYLE[data.style] and GuideNewConfig.STYLE[data.style].textColor
        if color then
            if desc1Text then
                desc1Text:setTextColor(color)
                desc1Text:enableOutline(color, 1)
            end
            if desc2Text then
                desc2Text:setTextColor(color)
            end
        end
    end

    -- 是否选中
    local selectImg = item:getChildByName("SELECT_IMG")
    if data.selected and type(data.selected) == "boolean" then
        selectImg:setVisible(data.selected)
        selectImg:stopAllActions()
        local fadeOutAction = cc.FadeOut:create(1)
        local fadeInAction = cc.FadeIn:create(1)
        selectImg:runAction(cc.RepeatForever:create(cc.Sequence:create(fadeOutAction, fadeInAction)))
    else
        selectImg:setVisible(false)
    end

    -- 设置透传数据
    itemImg.data = data
end

function GuideNewView:onItemClicked(item, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end

    local data = item.data
    if not data then return end
    local configData = GuideNewConfig.GUIDE_DEFINE[tonumber(data.type)]
    if not configData then return end
    local func = configData.func
    if func then
        func(data.params)
    end

    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.xyh24091002, {page_item_id = data.desc or ""})
    self:close()
end

return GuideNewView
F