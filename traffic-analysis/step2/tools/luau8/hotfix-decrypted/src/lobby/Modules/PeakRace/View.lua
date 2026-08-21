local MatchContributeView = class("MatchContributeView", XH.ViewBase)

-- 我的贡献记录
function MatchContributeView:ctor(param)
    self._clubId = param or 0
    MatchContributeView.super.ctor(self, param)
    self._curIndex = 1
    self._maxLen = 20
    self:initUI()
end

function MatchContributeView:getCSBPath()
    return "cocosStudio/hall/CSB/PeakRace/ContributeUI.csb"
end

function MatchContributeView:getBindingInfo()
    return {
        --
        ["_KW_LIST"] = { varName = "_KW_LIST" },
        ["_KW_LIST_ITEM"] = { varName = "_KW_LIST_ITEM" },
        ["_KW_TEXT_PAGE"] = { varName = "_KW_TEXT_PAGE" },
        ["_KW_PAGE_LEFT"] = { varName = "_KW_PAGE_LEFT", onTouchEnded = "onClickLeft" },
        ["_KW_PAGE_RIGHT"] = { varName = "_KW_PAGE_RIGHT", onTouchEnded = "onClickRight" },
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", onTouchEnded = "onClickClose" },
    }
end

function MatchContributeView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("PeakRace"), eventName = "sContribute", callBack = "sContribute" },
    }
end

function MatchContributeView:sContribute(data)
    local info = XH.lobby:getModule("PeakRace"):getContributeRankData()
    if info == nil or data == nil then
        return
    end
    local maxPage = math.ceil(info.total / self._maxLen)
    if maxPage == 0 then
        maxPage = 1
    end
    self:setPage(data.data, maxPage)
    self:flushUI()
end

function MatchContributeView:reqPageInfo(page)
    XH.lobby:getModule("PeakRace"):getTeamRank(page, self._maxLen, self._clubId)
end

function MatchContributeView:initUI()
    self:reqPageInfo(self._curIndex)
end

function MatchContributeView:flushUI()
    local info = XH.lobby:getModule("PeakRace"):getContributeRankData()
    if info == nil or info.list == nil then
        return
    end
    self._KW_LIST:removeAllChildren()
    local num = #info.list
    if num <= 7 then
        num = 7
    end
    local totalHeight = num * self._KW_LIST_ITEM:getContentSize().height
    self._KW_LIST:setInnerContainerSize(cc.size(self._KW_LIST_ITEM:getContentSize().width, totalHeight))
    for i = 1, #info.list do
        local item = self._KW_LIST_ITEM:clone()
        local time = os.date("%Y-%m-%d %H:%M:%S", info.list[i].time)
        item:getChildByName("_KW_TEXT_LEFT"):setString(time)
        item:getChildByName("_KW_TEXT_RIGHT"):setString('+' .. info.list[i].num)
        local richText = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='36' color='#A36F48'>" .. self:replaceStr(info.list[i].mark) .. "</font>"
        local RichLabel = ccui.RichText:createWithXML(richText, {}) -- 创建富文本
        RichLabel:addTo(item)
        RichLabel:setAnchorPoint(0.5, 0.5)
        RichLabel:setPosition(item:getChildByName("_KW_TEXT_MID"):getPositionX(), item:getChildByName("_KW_TEXT_MID"):getPositionY())
        item:setVisible(true)
        self._KW_LIST:addChild(item)
        item:setPosition(cc.p(self._KW_LIST_ITEM:getContentSize().width / 2, totalHeight - self._KW_LIST_ITEM:getContentSize().height * (i - 1)))
    end
end

function MatchContributeView:replaceStr(str)
    -- const numbers = str.match(/\d+/gu)
    -- if (numbers && numbers.length > 0) {
    --     for (const number_ of numbers) {
    --         str = str.replace(number_, `<color=#d93929>${number_}</c>`)
    --     }
    -- }
    -- return str

    -- 假设 str 是包含数字的字符串
    local numbers = {}
    for number in string.gmatch(str, "%d+") do
        table.insert(numbers, number)
    end

    if next(numbers) ~= nil then
        for _, number_ in ipairs(numbers) do
            str = string.gsub(str, number_, "<font color='#d93929'>" .. number_ .. "</font>")
        end
    end
    return str
end

function MatchContributeView:setPage(curIndex, maxIndex)
    self._curIndex = curIndex
    self._maxIndex = maxIndex
    self._KW_TEXT_PAGE:setString(curIndex .. '/' .. maxIndex)
end

function MatchContributeView:onClickLeft()
    if self._curIndex == 1 then
        XH.TipTool.showToast("已经是第一页了")
        return
    end
    self:reqPageInfo(self._curIndex - 1)
end

function MatchContributeView:onClickRight()
    if self._curIndex >= self._maxIndex then
        XH.TipTool.showToast("已经是最后一页了")
        return
    end
    self:reqPageInfo(self._curIndex + 1)
end

function MatchContributeView:onClickClose()
    self:close()
end

return MatchContributeView�