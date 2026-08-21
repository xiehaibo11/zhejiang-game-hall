local ResHotfixView = CF.gameClass("ResHotfixView", CF.ViewBase)

function ResHotfixView:ctor()
    ResHotfixView.super.ctor(self)
    self._loadingItems = {}
end

function ResHotfixView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/ResHotfixLayer.csb"
end

function ResHotfixView:getBindingInfo()
    return {
        ["_KW_PANAEL_ROOT"] = { varName = "_rootNode"},
        ["_KW_IMG_LOADIING_BG"] = { varName = "_imgLoadingBg"},
    }
end

function ResHotfixView:getProxyEvents()
    return {
        { module = CF.game:getModule("ResHotfix"), eventKeyName = "EVENT_PERCENT_CHANGED", callBack = "onPercentChanged" },
        { module = CF.game:getModule("ResHotfix"), eventKeyName = "SHOW_LOADING_VIEW", callBack = "onShowLoading" },
        { module = CF.game:getModule("ResHotfix"), eventKeyName = "HIDE_LOADING_VIEW", callBack = "onHideLoading" },
    }
end

function ResHotfixView:bindingLoadingItem(item)
    CF.BindUITool.bindingNode(
        item,
        {
            ["_KW_PROGRESS"] = { varName = "_progress"},
            ["_KW_PROGRESS_TEXT"] = { varName = "_progressText"},
            ["_KW_TXT_UPDATE_TIP"] = { varName = "_updateTipText"},
        }
    )
end

function ResHotfixView:getNowItemsCount()
    return table.nums(self._loadingItems)
end

function ResHotfixView:addLoadingItem(tagName)
    if not tagName or not self._imgLoadingBg then
        return
    end
    self:removeLoadingItem(tagName)
    local item = self._imgLoadingBg:clone()
    self:bindingLoadingItem(item)
    item:setPosition(cc.p(0, -90 * (self:getNowItemsCount() + 1)))
    self._rootNode:addChild(item)
    self._loadingItems[tagName] = item
end

function ResHotfixView:removeLoadingItem(tagName)
    if not tagName then
        return nil
    end
    if self._loadingItems[tagName] then
        self._loadingItems[tagName]:removeSelf()
        self._loadingItems[tagName] = nil
    end
end

function ResHotfixView:onPercentChanged(event)
    if not event or not event.msg or not event.msg.tagName then
        return
    end

    local item = self._loadingItems[event.msg.tagName]
    if not item then
        return
    end
    
    local percent = math.ceil(event.msg.percent)
    --更新进度
    if item._progress then
        item._progress:setPercent(percent)
    end
    if item._progressText then
        item._progressText:setString("(" .. percent .. "%)")
    end

    if item._updateTipText then
        local subGameName = ""
        local msgText = event.msg.text or ""
        item._updateTipText:setString(subGameName .. msgText .. "正在加载中")
    end
    ccui.Helper:doLayout(item._updateTipText)
end

function ResHotfixView:onShowLoading(event)
    if not event or not event.msg or not event.msg.tagName then
        return
    end

    self:addLoadingItem(event.msg.tagName)
end

function ResHotfixView:onHideLoading(event)
    if not event or not event.msg or not event.msg.tagName then
        return
    end

    self:removeLoadingItem(event.msg.tagName)
end

return ResHotfixView