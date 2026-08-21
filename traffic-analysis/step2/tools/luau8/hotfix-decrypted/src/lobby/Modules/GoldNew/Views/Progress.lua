local Progress = class("Progress")

function Progress.initProgressView(btn, progressInfo)
    btn.progressInfo = progressInfo
    if progressInfo.Plist then
        cc.SpriteFrameCache:getInstance():addSpriteFrames(progressInfo.Plist)
    end
    local progressNode = cc.Node:create()
    btn:addChild(progressNode)
    local size = btn:getContentSize()
    progressNode:setPosition(cc.p(size.width / 2 , size.height / 2))
    progressNode:setVisible(false)
    progressNode:setName("KW_NODE_PROGRESS")
    --创建一个图片精灵作为背景
    local markResName = progressInfo.markResName
    if progressInfo.type == "small" then
        markResName = progressInfo.markResNameSmall
    elseif progressInfo.type == "more" then
        markResName = progressInfo.markResNameMore
    end
	local spriteBg = cc.Sprite:createWithSpriteFrameName(markResName)
    progressNode:addChild(spriteBg)
    spriteBg:setPosition(progressInfo.markOffset)
	--创建一个进度条
    local barResName = progressInfo.barResName
    if progressInfo.type == "small" then
        barResName = progressInfo.barResNameSmall
    elseif progressInfo.type == "more" then
        barResName = progressInfo.barResNameMore
    end
    local sprite = cc.Sprite:createWithSpriteFrameName(barResName)
    if progressInfo.progressSize then
        spriteBg:setContentSize(progressInfo.progressSize)
        sprite:setContentSize(size)
    end
	local circleProgressBar = cc.ProgressTimer:create(sprite)
    circleProgressBar:setName("KW_PROGRESS")
    progressNode:addChild(circleProgressBar)
	circleProgressBar:setType(cc.PROGRESS_TIMER_TYPE_RADIAL)
    circleProgressBar:setReverseDirection(progressInfo.bReverseDirection)
    circleProgressBar:setPosition(progressInfo.barOffset)
	circleProgressBar:setPercentage(0)
    --显示进度文本
    local txtPercent = ccui.Text:create()
    txtPercent:setName("KW_TEXT_PERCENT")
    progressNode:addChild(txtPercent)
    txtPercent:setFontName(progressInfo.TextFont)
    txtPercent:setFontSize(progressInfo.TextFontSize)
    txtPercent:setColor(progressInfo.TextColor)
    txtPercent:setString("")
    if progressInfo.OutLineColor then
        txtPercent:enableOutline(progressInfo.OutLineColor,progressInfo.OutLineSize)
    end
    txtPercent:setAnchorPoint(progressInfo.TextAnchorPoint)
    txtPercent:setPosition(progressInfo.TextOffset)

    if progressInfo.bgInVisible then
        spriteBg:setVisible(false)
    end
    if progressInfo.opacity then
        spriteBg:setOpacity(progressInfo.opacity)
        sprite:setOpacity(progressInfo.opacity)
    end
end

function Progress.showProgressPercent(btn, percent)
    if not percent then return end
    percent = math.floor(percent)

    local progressNode = btn:getChildByName("KW_NODE_PROGRESS")
    if percent < 0 or percent >= 100 then
        progressNode:setVisible(false)
        return
    end
    progressNode:setVisible(true)
    local temPercent = percent
    if btn.progressInfo.bReverseDirection then
        temPercent = 100 - temPercent
    end
    local circleProgressBar = progressNode:getChildByName("KW_PROGRESS")
    if circleProgressBar then
        circleProgressBar:setPercentage(temPercent)
    end
    local txtPercent = progressNode:getChildByName("KW_TEXT_PERCENT")
    if txtPercent then
        txtPercent:setString(string.format("%d%%", percent))
    end
end

return Progress�