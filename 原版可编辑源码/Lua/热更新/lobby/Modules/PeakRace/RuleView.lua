local MatchContributeRuleView = class("MatchContributeRuleView", XH.ViewBase)
local ConfigurationDefine = require("lobby.Modules.Configuration.Define")

-- 默认配置
local MATCH_DEFAULT_CONTRIBUTE_CONFIG = {
    { title = "每完成对局<font color='#d93929'>1</font>次", score = '+10' },
    { title = "获得全服个人排行榜第<font color='#d93929'>1</font>名", score = '+2000' },
    { title = "获得全服个人排行榜第<font color='#d93929'>2</font>名", score = '+1600' },
    { title = "获得全服个人排行榜第<font color='#d93929'>3</font>名", score = '+1300' },
    { title = "获得全服个人排行榜第<font color='#d93929'>4</font>名", score = '+1000' },
    { title = "获得全服个人排行榜第<font color='#d93929'>5</font>名", score = '+800' },
    { title = "获得全服个人排行榜第<font color='#d93929'>6~10</font>名", score = '+500' },
    { title = "获得全服个人排行榜第<font color='#d93929'>11~30</font>名", score = '+200' },
    { title = "获得全服个人排行榜第<font color='#d93929'>31~50</font>名", score = '+100' },
}

-- 贡献积分规则
function MatchContributeRuleView:ctor(param)
    self._param = param or {}
    MatchContributeRuleView.super.ctor(self, param)
    self:initUI()
end

function MatchContributeRuleView:getCSBPath()
    return "cocosStudio/hall/CSB/PeakRace/ContributeRule.csb"
end

function MatchContributeRuleView:getBindingInfo()
    return {
        --
        ["_KW_LIST"] = { varName = "_KW_LIST" },
        ["_KW_LIST_ITEM"] = { varName = "_KW_LIST_ITEM" },
        ["_KW_UI_BTN_CLOSE"] = { varName = "_KW_UI_BTN_CLOSE", onTouchEnded = "onClickClose" },
    }
end

function MatchContributeRuleView:initUI()
    self._KW_LIST:removeAllChildren()
    local totalHeight = #MATCH_DEFAULT_CONTRIBUTE_CONFIG * self._KW_LIST_ITEM:getContentSize().height
    self._KW_LIST:setInnerContainerSize(cc.size(self._KW_LIST_ITEM:getContentSize().width, totalHeight))
    local remoteCfg = self:getRemoteCfg()
    for i = 1, #MATCH_DEFAULT_CONTRIBUTE_CONFIG do
        local item = self._KW_LIST_ITEM:clone()
        if remoteCfg then
            item:getChildByName("_KW_TEXT_RIGHT"):setString('+' .. remoteCfg[i])
        else
            item:getChildByName("_KW_TEXT_RIGHT"):setString(MATCH_DEFAULT_CONTRIBUTE_CONFIG[i].score)
        end
        local richText = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='42' color='#B97345'>" .. MATCH_DEFAULT_CONTRIBUTE_CONFIG[i].title .. "</font>"
        local RichLabel = ccui.RichText:createWithXML(richText, {}) -- 创建富文本
        RichLabel:addTo(item)
        RichLabel:setAnchorPoint(0, 0.5)
        RichLabel:setPosition(item:getChildByName("_KW_TEXT_LEFT"):getPositionX(), item:getChildByName("_KW_TEXT_LEFT"):getPositionY())
        item:setVisible(true)
        self._KW_LIST:addChild(item)
        item:setPosition(cc.p(self._KW_LIST_ITEM:getContentSize().width / 2, totalHeight - self._KW_LIST_ITEM:getContentSize().height * (i - 1)))
    end
end

function MatchContributeRuleView:getRemoteCfg()
    local cfg = XH.lobby:getModule("Configuration"):getConfigJsonData(ConfigurationDefine.Config.ALL, "AllConfig")
    if cfg and cfg.MatchScore and #cfg.MatchScore == #MATCH_DEFAULT_CONTRIBUTE_CONFIG then
        return cfg.MatchScore
    end
    return nil
end

function MatchContributeRuleView:onClickClose()
    self:close()
end

return MatchContributeRuleView