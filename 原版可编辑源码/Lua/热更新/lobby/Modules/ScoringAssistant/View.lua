local ScoringAssistantView = class("ScoringAssistantView", XH.ViewBase)
local ScoringAssistantConfig = require("lobby.Modules.ScoringAssistant.Config")

local RED_COLOR = cc.c3b(234, 92, 64)
local GREEN_COLOR = cc.c3b(56, 152, 61)

-- 随机颜色
local COLOR_LIST = {
    cc.c3b(52, 106, 255),
    cc.c3b(129, 91, 179),
    cc.c3b(91, 179, 159),
    cc.c3b(91, 179, 119),
    cc.c3b(141, 179, 91),
    cc.c3b(179, 91, 134),
}

-- 计分助手
function ScoringAssistantView:ctor(param)
    param = param or {}
    ScoringAssistantView.super.ctor(self, param)
    self._scoreWidth = 80
    self._maxNameLen = 10
    XH.lobby:getModule("ScoringAssistant"):clearData()
    self._isFirstIn = true -- 是否是第一次进入，主要用于判断第一次进入并且没有对局的话，默认生成一个对局
    self._curIndex = 0 -- 目前选择的界面
    -- if not XH.SysTool.isSupportSetOrientation() then
    self._KW_CENTER_BG:setRotation(270) -- todo
    self:adapt()
    -- self._KW_CENTER_BG:setScale(0.6)
    -- end
    self._collectItem = nil -- 当前选择的喜欢item
    self._curIndexCnt = 0
    self._curCnt = 0 -- 第x局
    self._curNode = nil -- 节点
    self._colorList = {} -- 颜色列表
    self._colorIndex = 1
    self._curPage = 1 -- 战绩当前页
    self._maxPage = 1 -- 战绩最大页
    self._curPlayerDatas = {
        juId = 0,
        score = {},
        juTime = 0,
    }   -- 储存玩家数据
    self:initUI()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.MAIN)
    self:onTouchEventMatch()    -- 默认主界面
end

function ScoringAssistantView:onEnter()
    ScoringAssistantView.super.onEnter(self)
    -- XH.SysTool.setOrientation(XH.SysTool.Orientation.SCREEN_ORIENTATION_PORTRAIT)
end

function ScoringAssistantView:onExit()
    -- XH.SysTool.setOrientation(XH.SysTool.Orientation.SCREEN_ORIENTATION_LANDSCAPE)
    ScoringAssistantView.super.onExit(self)
end

-- 适配
-- 1080 1920对应的是960
function ScoringAssistantView:adapt()
    local screenSize = cc.Director:getInstance():getWinSize()
    local defaultHeight = 960
    local designHeight = 1920
    if screenSize.height == 1080 and screenSize.width > designHeight then
        local diffHeight = screenSize.width - designHeight
        self._KW_PANEL_MATCH_BIGRESULT_BG:setContentSize(self._KW_PANEL_MATCH_BIGRESULT_BG:getContentSize().width, screenSize.width)
        -- 刷新列表大小
        local NodeList = {
            self._KW_PANEL_RECORD_MAIN_LIST,
            self._KW_PANEL_RECORD_RESULT_LIST_HOR,
            self._KW_PANEL_RECORD_RESULT_LIST_SCORE,
            self._KW_PANEL_MATCH_SCORE_LIST,
            self._KW_PANEL_MATCH_RESULT_LIST_HOR,
            self._KW_PANEL_MATCH_RESULT_SCORE,
            self._KW_PANEL_MATCH_RESULT_SCORE_BG,
            self._KW_PANEL_RECORD_RESULT_LIST_SCORE_BG,
        }
        for i = 1, #NodeList do
            self:flushContentSize(NodeList[i], diffHeight)
        end
        -- 刷新大小
        local singleNodeList = {
            self._KW_PANEL_MATCH_RESULT_ADAPT_3,
            self._KW_PANEL_MATCH_SCORE_BG,
            self._KW_PANEL_MY_MAIN_BG,
            self._KW_PANEL_RECORD_RESULT_ADAPT_BG,
            self._KW_PANEL_EDIT_BOX_2,
        }
        for i = 1, #singleNodeList do
            self:flushSingleContentSize(singleNodeList[i], diffHeight)
        end
        -- 刷新位置
        local posYList = {
            self._KW_PANEL_MATCH_MAIN_ADAPT,
            self._KW_PANEL_RECORD_RESULT_ADAPT_DOWN,
            self._KW_PANEL_RECORD_MAIN_ADAPT_DOWN,
            self._KW_PANEL_MATCH_SCORE_END,
            self._KW_PANEL_MATCH_SCORE_SAVE,
            self._KW_PANEL_MATCH_RESULT_ADAPT_1,
            self._KW_PANEL_MATCH_BIGRESULT_ADAPT_2,
        }
        for i = 1, #posYList do
            posYList[i]:setPositionY(posYList[i]:getPositionY() - diffHeight)
        end
        -- 其余适配
        self._KW_CENTER_BG:setPositionX(defaultHeight)
        self._KW_PANEL_RECORD_RESULT_LIST_HEAD_EX:setPositionY(self._KW_PANEL_RECORD_RESULT_LIST_HOR:getContentSize().height)
        self._KW_PANEL_RECORD_RESULT_LIST_SCORE:setPositionY(self._KW_PANEL_RECORD_RESULT_LIST_SCORE:getContentSize().height)
        self._KW_PANEL_MATCH_RESULT_HEAD_EX:setPositionY(self._KW_PANEL_MATCH_RESULT_LIST_HOR:getContentSize().height)
        self._KW_PANEL_MATCH_RESULT_SCORE:setPositionY(self._KW_PANEL_MATCH_RESULT_SCORE:getContentSize().height)
        self._KW_PANEL_MATCH_RESULT_SCORE_BG:setPositionY(self._KW_PANEL_MATCH_RESULT_SCORE_BG:getContentSize().height)
        self._KW_PANEL_RECORD_RESULT_LIST_SCORE_BG:setPositionY(self._KW_PANEL_RECORD_RESULT_LIST_SCORE_BG:getContentSize().height)
        self._KW_PANEL_NORMAL:setPositionY(defaultHeight - diffHeight)
        self._KW_PANEL_EDIT_BOX_1:setPositionY(self._KW_PANEL_EDIT_BOX_1:getPositionY() + diffHeight)
        self._KW_TOAST:setPositionY(self._KW_TOAST:getPositionY() - diffHeight * 0.5)
        self._KW_PANEL_RECORD_MAIN_NONE:setPositionY(self._KW_PANEL_RECORD_MAIN_NONE:getPositionY() - diffHeight * 0.5)
        self._KW_PANEL_EDIT_BOX:setPositionY(defaultHeight - diffHeight * 0.5)
        self._KW_PANEL_EDIT_BOX:setContentSize(screenSize.height, screenSize.width)
    end
end

function ScoringAssistantView:flushSingleContentSize(item, diffHeight)
    item:setContentSize(item:getContentSize().width, item:getContentSize().height + diffHeight)
end

function ScoringAssistantView:flushContentSize(item, diffHeight)
    local size = item:getContentSize()
    item:setContentSize(size.width, size.height + diffHeight)
    item:setInnerContainerSize(cc.size(size.width, size.height + diffHeight))
end

function ScoringAssistantView:getCSBPath()
    return "cocosStudio/hall/CSB/ScoringAssistant/ScoringAssistantView.csb"
end

function ScoringAssistantView:getProxyEvents()
    return {
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_FLUSH_CUR_BILL", callBack = "onEventFlushCurBill" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_FLUSH_END_BILL", callBack = "onEventFlushEndBill" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_FLUSH_TOTAL_BILLS", callBack = "onEventFlushTotalBills" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_FLUSH_DETAIL_BILL", callBack = "onEventFlushDetailBill" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_FLUSH_MY", callBack = "onEventFlushMy" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_COLLECT_STATE", callBack = "onEventCollectState" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_DEL_BILL", callBack = "onEventDelBill" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_IN_GAMING", callBack = "onEventInGaming" },
        { module = XH.lobby:getModule("ScoringAssistant"), eventKeyName = "EVENT_SHOW_TOAST", callBack = "onEventShowToast" },
    }
end

function ScoringAssistantView:getBindingInfo()
    return {
        ["_KW_PANEL_RECORD_MAIN_NONE"] = { varName = "_KW_PANEL_RECORD_MAIN_NONE" },
        ["_KW_PANEL_MATCH_RESULT_SCORE_BG"] = { varName = "_KW_PANEL_MATCH_RESULT_SCORE_BG" },
        ["_KW_PANEL_RECORD_RESULT_LIST_SCORE_BG"] = { varName = "_KW_PANEL_RECORD_RESULT_LIST_SCORE_BG" },
        ["_KW_PANEL_MY_MAIN_BG"] = { varName = "_KW_PANEL_MY_MAIN_BG" },
        ["_KW_PANEL_MATCH_RESULT_SHARECODE"] = { varName = "_KW_PANEL_MATCH_RESULT_SHARECODE" },
        ["_KW_PANEL_MATCH_MAIN_ADAPT"] = { varName = "_KW_PANEL_MATCH_MAIN_ADAPT" },
        ["_KW_PANEL_MATCH_BIGRESULT_BG2"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_BG2" },
        ["_KW_PANEL_MATCH_RESULT_ADAPT_3"] = { varName = "_KW_PANEL_MATCH_RESULT_ADAPT_3" },
        ["_KW_PANEL_MATCH_SCORE_BG"] = { varName = "_KW_PANEL_MATCH_SCORE_BG", onTouchEnded = "onTouchEventhHideEditBox" },
        ["_KW_PANEL_MATCH_BIGRESULT_ADAPT_2"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_ADAPT_2" },
        ["_KW_PANEL_MATCH_BIGRESULT_BG"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_BG" },
        ["_KW_PANEL_MATCH_RESULT_ADAPT_1"] = { varName = "_KW_PANEL_MATCH_RESULT_ADAPT_1" },
        ["_KW_PANEL_RECORD_RESULT_ADAPT_BG"] = { varName = "_KW_PANEL_RECORD_RESULT_ADAPT_BG" },
        ["_KW_PANEL_RECORD_RESULT_ADAPT_DOWN"] = { varName = "_KW_PANEL_RECORD_RESULT_ADAPT_DOWN" },
        ["_KW_PANEL_RECORD_MAIN_ADAPT_DOWN"] = { varName = "_KW_PANEL_RECORD_MAIN_ADAPT_DOWN" },
        ["_KW_PANEL_MATCH_MAIN_BG_2"] = { varName = "_KW_PANEL_MATCH_MAIN_BG_2" },
        ["_KW_PANEL_NORMAL"] = { varName = "_KW_PANEL_NORMAL" },
        ["_KW_PANEL_HEAD_ITEM_BIG"] = { varName = "_KW_PANEL_HEAD_ITEM_BIG" },
        ["_KW_PANEL_MATCH_MAIN_CYZ"] = { varName = "_KW_PANEL_MATCH_MAIN_CYZ" },
        ["_KW_PANEL_MATCH_MAIN_BG"] = { varName = "_KW_PANEL_MATCH_MAIN_BG" },
        ["_KW_PANEL_HEAD_ITEM_SINGLE"] = { varName = "_KW_PANEL_HEAD_ITEM_SINGLE" },
        ["_KW_CENTER_BG"] = { varName = "_KW_CENTER_BG" }, -- 分页1 计分
        ["_KW_BTN_CLOSE"] = { varName = "_KW_BTN_CLOSE", onTouchEnded = "onTouchEventClose", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH"] = { varName = "_KW_PANEL_MATCH" }, -- 分页1 计分
        ["_KW_PANEL_MATCH_MAIN"] = { varName = "_KW_PANEL_MATCH_MAIN" }, -- 计分主界面
        ["_KW_PANEL_MATCH_SCORE"] = { varName = "_KW_PANEL_MATCH_SCORE" }, -- 计分算分
        ["_KW_PANEL_MATCH_RESULT"] = { varName = "_KW_PANEL_MATCH_RESULT" }, -- 计分小结算
        ["_KW_PANEL_MATCH_BIGRESULT"] = { varName = "_KW_PANEL_MATCH_BIGRESULT" }, -- 计分大结算
        ["_KW_PANEL_RECORD"] = { varName = "_KW_PANEL_RECORD" }, -- 分页2 统计
        ["_KW_PANEL_RECORD_MAIN"] = { varName = "_KW_PANEL_RECORD_MAIN" }, -- 统计主界面
        ["_KW_PANEL_RECORD_RESULT"] = { varName = "_KW_PANEL_RECORD_RESULT" }, -- 统计小结算
        ["_KW_PANEL_MY"] = { varName = "_KW_PANEL_MY" }, -- 分页3 我的
        ["_KW_PANEL_MY_MAIN"] = { varName = "_KW_PANEL_MY_MAIN" }, -- 我的主界面
        ["_KW_BTN_CLICK_MATCH"] = { varName = "_KW_BTN_CLICK_MATCH", onTouchEnded = "onTouchEventMatch", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_CLICK_RECORD"] = { varName = "_KW_BTN_CLICK_RECORD", onTouchEnded = "onTouchEventRecord", type = XH.UI_TYPE.BUTTON },
        ["_KW_BTN_CLICK_MY"] = { varName = "_KW_BTN_CLICK_MY", onTouchEnded = "onTouchEventMy", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_MAIN_HEAD"] = { varName = "_KW_PANEL_MATCH_MAIN_HEAD" },
        ["_KW_PANEL_MATCH_MAIN_NAME"] = { varName = "_KW_PANEL_MATCH_MAIN_NAME" },
        ["_KW_PANEL_MATCH_MAIN_START"] = { varName = "_KW_PANEL_MATCH_MAIN_START", onTouchEnded = "onTouchEventStart", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_MAIN_BACK"] = { varName = "_KW_PANEL_MATCH_MAIN_BACK", onTouchEnded = "onTouchEventBack", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_HEAD_ITEM"] = { varName = "_KW_PANEL_HEAD_ITEM" },
        ["_KW_PANEL_MATCH_MAIN_LIST"] = { varName = "_KW_PANEL_MATCH_MAIN_LIST" },
        ["_KW_PANEL_MATCH_SCORE_CUR"] = { varName = "_KW_PANEL_MATCH_SCORE_CUR" },
        ["_KW_PANEL_MATCH_SCORE_SAVE"] = { varName = "_KW_PANEL_MATCH_SCORE_SAVE", onTouchEnded = "onTouchEventSave", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_SCORE_END"] = { varName = "_KW_PANEL_MATCH_SCORE_END", onTouchEnded = "onTouchEventEnd", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_SCORE_LIST"] = { varName = "_KW_PANEL_MATCH_SCORE_LIST" },
        ["_KW_PANEL_MATCH_SCORE_ADD"] = { varName = "_KW_PANEL_MATCH_SCORE_ADD", onTouchEnded = "onTouchEventAdd", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_SCORE_DEL"] = { varName = "_KW_PANEL_MATCH_SCORE_DEL", onTouchEnded = "onTouchEventDel", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_SCORE_ITEM"] = { varName = "_KW_PANEL_MATCH_SCORE_ITEM" },
        ["_KW_TOAST"] = { varName = "_KW_TOAST" },
        ["_KW_TOAST_TEXT"] = { varName = "_KW_TOAST_TEXT" },
        ["_KW_PANEL_EDIT_BOX"] = { varName = "_KW_PANEL_EDIT_BOX" },
        ["_KW_PANEL_EDIT_BOX_"] = { beginIndex = 1, endIndex = 3, varName = "_KW_PANEL_EDIT_BOX_", onTouchEnded = "onTouchEventhHideEditBox" },
        ["_KW_INPUT_"] = { beginIndex = 0, endIndex = 10, varName = "_KW_INPUT_", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventNumBtn" },
        ["_KW_PANEL_MATCH_SCORE_BACK"] = { varName = "_KW_PANEL_MATCH_SCORE_BACK", onTouchEnded = "onTouchEventMainBack", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_RESULT_BACK"] = { varName = "_KW_PANEL_MATCH_RESULT_BACK", onTouchEnded = "onTouchEventResultBack", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_RESULT_END"] = { varName = "_KW_PANEL_MATCH_RESULT_END", onTouchEnded = "onTouchEventResultEnd", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_RESULT_NEXT"] = { varName = "_KW_PANEL_MATCH_RESULT_NEXT", onTouchEnded = "onTouchEventResultNext", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_RESULT_END2"] = { varName = "_KW_PANEL_MATCH_RESULT_END2", onTouchEnded = "onTouchEventResultEnd2", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_RESULT_SCORE_ITEM"] = { varName = "_KW_PANEL_RESULT_SCORE_ITEM" },
        ["_KW_PANEL_MATCH_RESULT_HEAD"] = { varName = "_KW_PANEL_MATCH_RESULT_HEAD" },
        ["_KW_PANEL_MATCH_RESULT_HEAD_EX"] = { varName = "_KW_PANEL_MATCH_RESULT_HEAD_EX" },
        ["_KW_PANEL_MATCH_RESULT_SCORE"] = { varName = "_KW_PANEL_MATCH_RESULT_SCORE" },
        ["_KW_PANEL_MATCH_RESULT_BACK_EX"] = { varName = "_KW_PANEL_MATCH_RESULT_BACK_EX", onTouchEnded = "onTouchEventResultBackEx", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_BIGRESULT_LIST"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_LIST" },
        ["_KW_PANEL_MATCH_BIGRESULT_BACK"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_BACK", onTouchEnded = "onTouchEventBigResultBack", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_BIGRESULT_SHARE"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_SHARE", onTouchEnded = "onTouchEventBigResultShare", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MATCH_BIGRESULT_NEXT"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_NEXT", onTouchEnded = "onTouchEventBigResultNext", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_BIG_RESULT_SCORE_ITEM"] = { varName = "_KW_PANEL_BIG_RESULT_SCORE_ITEM" },
        ["_KW_PANEL_MATCH_RESULT_LIST_HOR"] = { varName = "_KW_PANEL_MATCH_RESULT_LIST_HOR" },
        ["_KW_PANEL_MATCH_BIGRESULT_SHARECODE"] = { varName = "_KW_PANEL_MATCH_BIGRESULT_SHARECODE" },
        ["_KW_PANEL_RECORD_RESULT_LIST_HOR"] = { varName = "_KW_PANEL_RECORD_RESULT_LIST_HOR" },
        ["_KW_PANEL_TOTAL_RECORD_ITEM"] = { varName = "_KW_PANEL_TOTAL_RECORD_ITEM" },
        ["_KW_PANEL_RECORD_MAIN_LIST"] = { varName = "_KW_PANEL_RECORD_MAIN_LIST" },
        ["_KW_PANEL_RECORD_RESULT_BACK"] = { varName = "_KW_PANEL_RECORD_RESULT_BACK", onTouchEnded = "onTouchEventRecordBack", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_RECORD_RESULT_LIST_HEAD"] = { varName = "_KW_PANEL_RECORD_RESULT_LIST_HEAD" },
        ["_KW_PANEL_RECORD_RESULT_LIST_HEAD_EX"] = { varName = "_KW_PANEL_RECORD_RESULT_LIST_HEAD_EX" },
        ["_KW_PANEL_RECORD_RESULT_LIST_SCORE"] = { varName = "_KW_PANEL_RECORD_RESULT_LIST_SCORE" },
        ["_KW_PANEL_RECORD_RESULT_SHARE"] = { varName = "_KW_PANEL_RECORD_RESULT_SHARE", onTouchEnded = "onTouchEventRecordShare", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_RECORD_MAIN_BTN_LEFT"] = { varName = "_KW_PANEL_RECORD_MAIN_BTN_LEFT", onTouchEnded = "onTouchEventLeft", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_RECORD_MAIN_BTN_RIGHT"] = { varName = "_KW_PANEL_RECORD_MAIN_BTN_RIGHT", onTouchEnded = "onTouchEventRight", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_RECORD_MAIN_TEXT_LEFT"] = { varName = "_KW_PANEL_RECORD_MAIN_TEXT_LEFT" },
        ["_KW_PANEL_RECORD_MAIN_TEXT_RIGHT"] = { varName = "_KW_PANEL_RECORD_MAIN_TEXT_RIGHT" },
        ["_KW_PANEL_MY_MAIN_SHARE"] = { varName = "_KW_PANEL_MY_MAIN_SHARE", onTouchEnded = "onTouchEventMyShare", type = XH.UI_TYPE.BUTTON },
        ["_KW_SHARE_CLICK"] = { varName = "_KW_SHARE_CLICK", onTouchEnded = "onTouchEventShareLimit", type = XH.UI_TYPE.BUTTON },
        ["_KW_PANEL_MY_MAIN_ZCS"] = { varName = "_KW_PANEL_MY_MAIN_ZCS" },
        ["_KW_PANEL_MY_MAIN_ZSC"] = { varName = "_KW_PANEL_MY_MAIN_ZSC" },
        ["_KW_PANEL_MY_MAIN_ZFC"] = { varName = "_KW_PANEL_MY_MAIN_ZFC" },
        ["_KW_PANEL_MY_MAIN_ZDF"] = { varName = "_KW_PANEL_MY_MAIN_ZDF" },
        ["_KW_PANEL_MY_MAIN_ZSF"] = { varName = "_KW_PANEL_MY_MAIN_ZSF" },
        ["_KW_PANEL_MY_MAIN_ZFF"] = { varName = "_KW_PANEL_MY_MAIN_ZFF" },
        ["_KW_PANEL_MY_MAIN_BEST"] = { varName = "_KW_PANEL_MY_MAIN_BEST" },
        ["_KW_PANEL_MY_MAIN_WRONG"] = { varName = "_KW_PANEL_MY_MAIN_WRONG" },
        ["_KW_PANEL_MY_MAIN_QRCODE"] = { varName = "_KW_PANEL_MY_MAIN_QRCODE" },
        ["_KW_PANEL_MY_MAIN_BEST_S"] = { varName = "_KW_PANEL_MY_MAIN_BEST_S" },
        ["_KW_PANEL_MY_MAIN_WRONG_S"] = { varName = "_KW_PANEL_MY_MAIN_WRONG_S" },
    }
end

function ScoringAssistantView:onTouchEventShareLimit()

end

-- 大局页-左上角返回
function ScoringAssistantView:onTouchEventBigResultBack()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.MAIN)
end

-- 大局页-分享
function ScoringAssistantView:onTouchEventBigResultShare()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092405)
    self._KW_PANEL_MATCH_BIGRESULT_SHARECODE:setVisible(true)
    self._KW_PANEL_MATCH_BIGRESULT_SHARE:setVisible(false)
    self._KW_PANEL_MATCH_BIGRESULT_NEXT:setVisible(false)
    self._KW_SHARE_CLICK:setVisible(true)
    local callback = function()
        if self and not tolua.isnull(self) then
            if self._KW_PANEL_MATCH_BIGRESULT_SHARECODE:isVisible() then
                self._KW_SHARE_CLICK:setVisible(false)
                self._KW_PANEL_MATCH_BIGRESULT_SHARECODE:setVisible(false)
                self._KW_PANEL_MATCH_BIGRESULT_SHARE:setVisible(true)
                self._KW_PANEL_MATCH_BIGRESULT_NEXT:setVisible(true)
            end
        end
    end
    XH.lobby:getModule("ScoringAssistant"):startShareImg("ScoringBigResult" .. os.time(), callback, self)
end

-- 大局页-下一把
function ScoringAssistantView:onTouchEventBigResultNext()
    self:flushRoomUI()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

-- 小局页-左上角返回
function ScoringAssistantView:onTouchEventResultBackEx()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.MAIN)
end

-- 小局页-返回房间
function ScoringAssistantView:onTouchEventResultBack()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

-- 小局页-对局结束
function ScoringAssistantView:onTouchEventResultEnd()
    self:onTouchEventEnd()
end

-- 小局页-下一局
function ScoringAssistantView:onTouchEventResultNext()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092404)
    -- 初始化下一局的数据
    self:flushRoomUI(XH.lobby:getModule("ScoringAssistant"):getLastMatchRecord())
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

-- 小局页-对局结束
function ScoringAssistantView:onTouchEventResultEnd2()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092403)
    XH.lobby:getModule("ScoringAssistant"):reqSetRoomBillEnd()
end

-- 计分页返回
function ScoringAssistantView:onTouchEventMainBack()
    self:flushResultUI(false)
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.RESULT)
end

-- 输入框
function ScoringAssistantView:onTouchEventNumBtn(send, eventType)
    local bottonName = send:getName()
    local splitStr = string.split(bottonName, "_")
    local num = splitStr[#splitStr]
    if not self._curNode then
        return
    end
    if num == "10" then
        local curText = self._curNode:getChildByName("_EDIT_SCORE"):getString()
        if #curText == 0 then
            return
        else
            self._curNode:getChildByName("_EDIT_SCORE"):setString(string.sub(curText, 1, #curText - 1))
        end
    else
        local curText = self._curNode:getChildByName("_EDIT_SCORE"):getString()
        if #curText >= 4 then
            self:showToast("不得超过四位数")
            return
        end
        self._curNode:getChildByName("_EDIT_SCORE"):setString(self._curNode:getChildByName("_EDIT_SCORE"):getString() .. num)
    end
    if self._curNode then
        self._curNode:getChildByName("_INPUT_LINE"):setPositionX(self._curNode:getChildByName("_EDIT_SCORE"):getPositionX() + self._curNode:getChildByName("_EDIT_SCORE"):getContentSize().width / 2)
    end
end

-- 保留最后一次分数
function ScoringAssistantView:saveLastPlayerDatas()
    self._curPlayerDatas.juId = self._curCnt
    self._curPlayerDatas.score = {}
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    for i = 1, #items do
        local isWin = items[i]:getChildByName("_KW_BTN_WIN_TAG"):isVisible()
        local tmpScore = tonumber(items[i]:getChildByName("_EDIT_SCORE"):getString())
        if tmpScore and not isWin then
            tmpScore = -tmpScore
        end
        self._curPlayerDatas.score[#self._curPlayerDatas.score + 1] = {
            user_name = items[i]:getName(),
            score = tmpScore,
            user_id = XH.playerData:getNumberID()
        }
    end
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_SCORING_ASSISTANT2, json.encode(self._curPlayerDatas))
end

-- 清空最后一次分数
function ScoringAssistantView:clearLastPlayerDatas()
    self._curPlayerDatas = {
        juId = 0,
        score = {}
    }
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_SCORING_ASSISTANT2, "")
end

-- 刷新房间分数信息
function ScoringAssistantView:flushRoomUI(data)
    self._KW_PANEL_MATCH_SCORE_LIST:removeAllChildren()
    if data == nil or data[1] == nil then
        XH.lobby:getModule("ScoringAssistant"):clearData()
        self._curCnt = 1
        self._curIndexCnt = 4
        for i = 1, 4 do
            local item
            if i == 1 then
                item = self:addPlayerMatchItem(XH.playerData:getNumberID() .. "")
            else
                item = self:addPlayerMatchItem(i)
            end
            item:setVisible(true)
            item:setPosition(0, self._KW_PANEL_MATCH_SCORE_LIST:getContentSize().height - item:getContentSize().height * (i - 1))
            self._KW_PANEL_MATCH_SCORE_LIST:addChild(item)
        end
    else
        -- 获取本地数据是否匹配覆盖
        local scoreList
        local localData = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_SCORING_ASSISTANT2, "")
        if localData and localData ~= "" then
            scoreList = json.decode(localData)
            if not self:isFitLocalWithRemote(data, scoreList) then
                scoreList = nil
            end
        end

        self._curCnt = 1
        for _, _ in pairs(data) do
            self._curCnt = self._curCnt + 1
        end
        self._curIndexCnt = #data[1].score
        for i = 1, self._curIndexCnt do
            local item
            if scoreList ~= nil then
                item = self:addPlayerMatchItem(scoreList.score[i].user_name, tonumber(scoreList.score[i].score))
            else
                item = self:addPlayerMatchItem(data[1].score[i].user_name)
            end
            item:setVisible(true)
            item:setPosition(0, self._KW_PANEL_MATCH_SCORE_LIST:getContentSize().height - item:getContentSize().height * (i - 1))
            self._KW_PANEL_MATCH_SCORE_LIST:addChild(item)
        end
    end
    self._KW_PANEL_MATCH_SCORE_ADD:setVisible(self._curCnt <= 1)
    self._KW_PANEL_MATCH_SCORE_DEL:setVisible(self._curCnt <= 1)
    self._KW_PANEL_MATCH_SCORE_CUR:setString("第" .. self._curCnt .. "局")
    self._KW_PANEL_MATCH_SCORE_BACK:setVisible(self._curCnt > 1)
    self:saveLastPlayerDatas()
end

function ScoringAssistantView:flushMatchListPosition()
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    for i = 1, #items do
        items[i]:setPosition(0, self._KW_PANEL_MATCH_SCORE_LIST:getContentSize().height - items[i]:getContentSize().height * (i - 1))
    end
    self:saveLastPlayerDatas()
end

-- 判断是否可以保存到下一局
function ScoringAssistantView:isCanSave()
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    if #items == 1 then
        return false
    end
    local curScore = 0
    for i = 1, #items do
        local isWin = items[i]:getChildByName("_KW_BTN_WIN_TAG"):isVisible()
        local tmpScore = tonumber(items[i]:getChildByName("_EDIT_SCORE"):getString())
        if tmpScore then
            if not isWin then
                tmpScore = -tmpScore
            end
            curScore = curScore + tmpScore
        else
            return false
        end
    end
    if curScore ~= 0 then
        return false
    end
    return true
end

-- 判断是否刷新分数
function ScoringAssistantView:autoFlushLastScore()
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    local curScore = 0
    local unInputCnt = 0
    local inputItem = nil
    for i = 1, #items do
        local isWin = items[i]:getChildByName("_KW_BTN_WIN_TAG"):isVisible()
        local tmpScore = tonumber(items[i]:getChildByName("_EDIT_SCORE"):getString())
        if tmpScore then
            if not isWin then
                tmpScore = -tmpScore
            end
            curScore = curScore + tmpScore
        else
            unInputCnt = unInputCnt + 1
            inputItem = items[i]
        end
    end
    if unInputCnt == 1 and inputItem then
        inputItem:getChildByName("_EDIT_SCORE"):setString(curScore >= 0 and curScore or -curScore)
        inputItem:getChildByName("_EDIT_SCORE"):setColor(curScore > 0 and GREEN_COLOR or RED_COLOR)
        inputItem:getChildByName("_KW_BTN_WIN_TAG"):setVisible(not (curScore > 0))
        inputItem:getChildByName("_KW_BTN_LOSE_TAG"):setVisible(curScore > 0)
    end
    self:saveLastPlayerDatas()
end

-- 保存
function ScoringAssistantView:onTouchEventSave()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092402)
    self:flushDelState(false)
    if not self:isCanSave() then
        self:showToast("总分有误，请修正分数")
        return
    end
    self._curPlayerDatas.juTime = XH.lobby:getModule("Shop"):getServerTime()
    if self._curCnt >= 99 then
        XH.lobby:getModule("ScoringAssistant"):reqSetRoomBillEnd(self._curPlayerDatas)
    else
        XH.lobby:getModule("ScoringAssistant"):reqSetRoomBill(self._curPlayerDatas)
    end
end

-- 所有人未设置分数
function ScoringAssistantView:isAllUnSet()
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    if #items == 1 then
        return false
    end
    for i = 1, #items do
        local tmpScore = tonumber(items[i]:getChildByName("_EDIT_SCORE"):getString())
        if tmpScore ~= nil then
            return false
        end
    end
    return true
end

-- 结束
function ScoringAssistantView:onTouchEventEnd()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092403)
    self:flushDelState(false)
    if not self:isCanSave() then
        if self._curCnt > 1 and self:isAllUnSet() then
            XH.lobby:getModule("ScoringAssistant"):reqSetRoomBillEnd()
            return
        end
        self:showToast("总分有误，请修正分数")
        return
    end
    self._curPlayerDatas.juTime = XH.lobby:getModule("Shop"):getServerTime()
    XH.lobby:getModule("ScoringAssistant"):reqSetRoomBillEnd(self._curPlayerDatas)
end

function ScoringAssistantView:showToast(msg)
    self._KW_TOAST:setVisible(true)
    self._KW_TOAST_TEXT:setString(msg)
    XH.SysTool.performDelayOnce(function()
        if self and not tolua.isnull(self) then
            self._KW_TOAST:setVisible(false)
        end
    end, 1)
end

-- 新增
function ScoringAssistantView:onTouchEventAdd()
    self:flushDelState(false)
    local num = self._KW_PANEL_MATCH_SCORE_LIST:getChildrenCount()
    if num >= 6 then
        self:showToast("已达到上限人数!")
        return
    end
    self._curIndexCnt = self._curIndexCnt + 1
    local item = self:addPlayerMatchItem(self._curIndexCnt)
    item:setVisible(true)
    item:setPosition(0, self._KW_PANEL_MATCH_SCORE_LIST:getContentSize().height - item:getContentSize().height * num)
    self._KW_PANEL_MATCH_SCORE_LIST:addChild(item)
end

-- 删除
function ScoringAssistantView:onTouchEventDel()
    self:flushDelState(true)
end

-- 刷新减号状态
function ScoringAssistantView:flushDelState(isShow)
    local items = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
    for i = 1, #items do
        if not items[i]:getChildByName("_SELF_HEAD"):isVisible() then
            items[i]:getChildByName("_BTN_DEL"):setVisible(isShow)
        end
    end
end

-- 刷新房间状态，以及首页头像数据
function ScoringAssistantView:flushIsInRoomState(isInRoom)
    self._KW_PANEL_MATCH_MAIN_START:setVisible(not isInRoom)
    self._KW_PANEL_MATCH_MAIN_BACK:setVisible(isInRoom)
    self._KW_PANEL_MATCH_MAIN_CYZ:setVisible(isInRoom)
    self._KW_PANEL_MATCH_MAIN_BG:setVisible(not isInRoom)
    self._KW_PANEL_MATCH_MAIN_BG_2:setVisible(isInRoom)
    self._KW_PANEL_MATCH_MAIN_LIST:removeAllChildren()
    if isInRoom then
        local _, totalScore = self:getTotalDataByResult()
        local data = XH.lobby:getModule("ScoringAssistant"):getResultData()
        if data and data[1] and data[1].score then
            for i = 1, #data[1].score do
                local item = self:addPlayerItem(data[1].score[i].user_name, totalScore[data[1].score[i].user_name] or 0, true)
                item:setVisible(true)
                local posX = 20 + ((i - 1) % 4) * item:getContentSize().width
                local posY = self._KW_PANEL_MATCH_MAIN_LIST:getContentSize().height - math.floor((i - 1) / 4) * item:getContentSize().height
                item:setPosition(posX, posY)
                self._KW_PANEL_MATCH_MAIN_LIST:addChild(item)
            end
        end
    end
end

-- 开始计分
function ScoringAssistantView:onTouchEventStart()
    self:flushRoomUI()
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

-- 返回房间
function ScoringAssistantView:onTouchEventBack()
    self:flushRoomUI(XH.lobby:getModule("ScoringAssistant"):getLastMatchRecord())
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

function ScoringAssistantView:initUI()
    self:setShowName(self._KW_PANEL_MATCH_MAIN_NAME, XH.playerData:getNickName(), self._maxNameLen)
    self:setHead(self._KW_PANEL_MATCH_MAIN_HEAD)
    self:flushIsInRoomState()
end

function ScoringAssistantView:setShowName(node, nickname, length)
    nickname = nickname or ""
    nickname = nickname .. ""
    nickname = XH.StringTool.cutStringByLengthWithDot(nickname, math.floor(length * 3 / 2))
    if XH.StringTool.simpleGetStrWidth(nickname) > length then
        nickname = XH.StringTool.simpleSubStrUtilWidth(nickname, length)
    end
    node:setText(nickname)
end

function ScoringAssistantView:setHead(headNode)
    local head = XH.playerData:getHead()
    local sex = XH.playerData:getSex()
    if head == 0 then --default head
        local headImageKey
        if sex == 0 then --girl
            headImageKey = "_0002_mrtx_w.png"
        else   --boy
            headImageKey = "_0002_mrtx_m.png"
        end
        XH.UITool.setPlistTextureOnNode(headNode, headImageKey)
    end
    local url = XH.playerData:getWeChatURL()
    if not url or url == "" then
        return
    end
    local size = headNode:getContentSize()
    local headImg = XH.RemoteImage.new()
    :setTouchEnabled(false)
    :setPosition(size.width / 2, size.height / 2)
    :ignoreContentAdaptWithSize(false)
    :setContentSize(size.width, size.height)
    :addTo(headNode)
    headImg:setUrl(url, true)
end

-- 获取总局数/总分数
function ScoringAssistantView:getTotalDataByResult(result)
    local data = XH.lobby:getModule("ScoringAssistant"):getResultData()
    if result then
        data = result
    end
    if not data then
        return 0, {}
    end
    local totalCnt = 0
    local totalScore = {}
    for _, v in pairs(data) do
        totalCnt = totalCnt + 1
        local players = v.score
        for i = 1, #players do
            if totalScore[players[i].user_name] == nil then
                totalScore[players[i].user_name] = 0
            end
            totalScore[players[i].user_name] = totalScore[players[i].user_name] + players[i].score
        end
    end
    return totalCnt, totalScore
end

-- 刷新小结算页数据
function ScoringAssistantView:flushResultData(headList, headExList, scoreList, scrollList, data, scoreListBg)
    headList:removeAllChildren()
    headExList:removeAllChildren()
    scoreList:removeAllChildren()
    local totalScore = {}
    if self._maxScoreHeight == nil then
        self._maxScoreHeight = scoreList:getContentSize().height
    end
    if data then
        local maxLineCnt = math.floor(self._maxScoreHeight / self._KW_PANEL_RESULT_SCORE_ITEM:getContentSize().height)
        local totalCnt, totalScore = self:getTotalDataByResult(data)
        local listHeight = scoreList:getContentSize().height
        if totalCnt > maxLineCnt then
            listHeight = self._KW_PANEL_RESULT_SCORE_ITEM:getContentSize().height * totalCnt
        end
        local index = 0
        for k, v in pairs(data) do
            index = index + 1
            local players = v.score
            local innerWidth = self._KW_PANEL_RECORD_RESULT_LIST_HOR:getContentSize().width
            if index == 1 then
                for i = 1, #players do
                    -- 头顶头像
                    local playerItem = self:addPlayerItem(players[i].user_name, totalScore[players[i].user_name] or 0)
                    playerItem:setVisible(true)
                    playerItem:setPosition(playerItem:getContentSize().width * (i - 1), headList:getContentSize().height)
                    headList:addChild(playerItem)
                    -- 分数头像
                    local playerItemSingle = self:addPlayerItemSingle(players[i].user_name)
                    playerItemSingle:setVisible(true)
                    playerItemSingle:setPosition(playerItemSingle:getContentSize().width * i + self._scoreWidth * (i - 1), headExList:getContentSize().height)
                    headExList:addChild(playerItemSingle)
                    -- 其他
                    local listSize = scoreListBg:getInnerContainerSize()
                    if #players > 4 then
                        innerWidth = self._KW_PANEL_RECORD_RESULT_LIST_HOR:getContentSize().width + (playerItem:getContentSize().width) * (#players - 4)
                    end
                    if totalCnt > maxLineCnt then
                        scoreList:setContentSize(innerWidth, self._maxScoreHeight)
                        scoreList:setInnerContainerSize(cc.size(innerWidth, listHeight))
                    else
                        scoreList:setContentSize(innerWidth, self._KW_PANEL_RESULT_SCORE_ITEM:getContentSize().height * totalCnt)
                        scoreList:setInnerContainerSize(cc.size(innerWidth, self._KW_PANEL_RESULT_SCORE_ITEM:getContentSize().height * totalCnt))
                    end
                    scrollList:setInnerContainerSize(cc.size(innerWidth, scrollList:getContentSize().height))
                    scoreListBg:setContentSize(innerWidth, listSize.height)
                    scoreListBg:setInnerContainerSize(cc.size(innerWidth, listSize.height))
                end
            end
            -- 局数分数
            local resultItem = self:addPlayerResultItem(k, players, index, v.juTime, innerWidth)
            resultItem:setVisible(true)
            resultItem:setPosition(0, self._KW_PANEL_RESULT_SCORE_ITEM:getContentSize().height * k)
            scoreList:addChild(resultItem)
        end
    end
end

function ScoringAssistantView:flushResultUI(isShow)
    self._KW_PANEL_MATCH_RESULT_BACK:setVisible(not isShow)
    self._KW_PANEL_MATCH_RESULT_END:setVisible(not isShow)
    self._KW_PANEL_MATCH_RESULT_NEXT:setVisible(isShow)
    self._KW_PANEL_MATCH_RESULT_END2:setVisible(isShow)
end

-- 添加玩家头像
function ScoringAssistantView:onTouchEventhHideEditBox()
    self:flushDelState(false)
    self:autoFlushLastScore()
    self:showInputEdit(false)
end

-- 刷新我的内部界面
function ScoringAssistantView:flushMainSelectIndex(idx)
    self._firstIndex = idx
    self._KW_PANEL_MATCH_MAIN:setVisible(idx == ScoringAssistantConfig.MAIN_INDEX.MAIN)
    self._KW_PANEL_MATCH_SCORE:setVisible(idx == ScoringAssistantConfig.MAIN_INDEX.SCORE)
    self._KW_PANEL_MATCH_RESULT:setVisible(idx == ScoringAssistantConfig.MAIN_INDEX.RESULT)
    self._KW_PANEL_MATCH_BIGRESULT:setVisible(idx == ScoringAssistantConfig.MAIN_INDEX.BIGRESULT)
end

function ScoringAssistantView:flushBtnState(btn)
    self:flushNodeBtn(self._KW_BTN_CLICK_MATCH, btn)
    self:flushNodeBtn(self._KW_BTN_CLICK_RECORD, btn)
    self:flushNodeBtn(self._KW_BTN_CLICK_MY, btn)
end

function ScoringAssistantView:flushNodeBtn(showBtn, btn)
    local CHOSE_COLOR = cc.c3b(74, 90, 106)
    local UNCHOSE_COLOR = cc.c3b(124, 124, 124)
    showBtn:setBright(btn ~= showBtn)
    showBtn:setEnabled(btn ~= showBtn)
    showBtn:getChildByName("_KW_CHOSE"):setVisible(showBtn == btn)
    showBtn:getChildByName("_KW_UN_CHOSE"):setVisible(showBtn ~= btn)
    showBtn:getChildByName("_TEXT"):setColor(btn == showBtn and CHOSE_COLOR or UNCHOSE_COLOR)
    self._KW_PANEL_MATCH:setVisible(btn == self._KW_BTN_CLICK_MATCH)
    self._KW_PANEL_RECORD:setVisible(btn == self._KW_BTN_CLICK_RECORD)
    self._KW_PANEL_MY:setVisible(btn == self._KW_BTN_CLICK_MY)
end

-- 点击首页
function ScoringAssistantView:onTouchEventMatch()
    if self._isFirstIn then
        self._isFirstIn = false
        XH.lobby:getModule("ScoringAssistant"):reqInGamingData()
    end
    self._curIndex = ScoringAssistantConfig.INDEX.MATCH
    self:flushBtnState(self._KW_BTN_CLICK_MATCH)
end

-- 点击统计
function ScoringAssistantView:onTouchEventRecord()
    self:flushRecordUI(true)
    self._curPage = 1
    self._maxPage = 1
    XH.lobby:getModule("ScoringAssistant"):reqTotalBills(self._curPage)
    self._curIndex = ScoringAssistantConfig.INDEX.RECORD
    self:flushBtnState(self._KW_BTN_CLICK_RECORD)
end

-- 点击我的
function ScoringAssistantView:onTouchEventMy()
    XH.lobby:getModule("ScoringAssistant"):reqMyData()
    self._curIndex = ScoringAssistantConfig.INDEX.MY
    self:flushBtnState(self._KW_BTN_CLICK_MY)
end

function ScoringAssistantView:onTouchEventClose()
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
    self:close()
end

------------------页签记录
function ScoringAssistantView:onTouchEventRecordBack()
    self:flushRecordUI(true)
end

function ScoringAssistantView:onTouchEventLeft()
    if self._curPage <= 1 then
        self:showToast("已经是第一页了~")
        return
    end
    XH.lobby:getModule("ScoringAssistant"):reqTotalBills(self._curPage - 1)
end

function ScoringAssistantView:onTouchEventRight()
    if self._maxPage <= self._curPage then
        self:showToast("已经是最后一页了~")
        return
    end
    XH.lobby:getModule("ScoringAssistant"):reqTotalBills(self._curPage + 1)
end

-- 分享详单界面
function ScoringAssistantView:onTouchEventRecordShare()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092406)
    self._KW_PANEL_RECORD_RESULT_SHARE:setVisible(false)
    self._KW_PANEL_MATCH_RESULT_SHARECODE:setVisible(true)
    self._KW_SHARE_CLICK:setVisible(true)
    local callback = function()
        if self and not tolua.isnull(self) then
            if self._KW_PANEL_MATCH_RESULT_SHARECODE:isVisible() then
                self._KW_SHARE_CLICK:setVisible(false)
                self._KW_PANEL_MATCH_RESULT_SHARECODE:setVisible(false)
                self._KW_PANEL_RECORD_RESULT_SHARE:setVisible(true)
            end
        end
    end
    XH.lobby:getModule("ScoringAssistant"):startShareImg("ScoringRecord" .. os.time(), callback, self)
end

function ScoringAssistantView:flushRecordUI(isMain)
    self._KW_PANEL_RECORD_MAIN:setVisible(isMain)
    self._KW_PANEL_RECORD_RESULT:setVisible(not isMain)
end

-------------------页签我的
-- 分享我的
function ScoringAssistantView:onTouchEventMyShare()
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092407)
    self._KW_PANEL_MY_MAIN_QRCODE:setVisible(true)
    self._KW_PANEL_MY_MAIN_SHARE:setVisible(false)
    self._KW_SHARE_CLICK:setVisible(true)
    local callback = function()
        if self and not tolua.isnull(self) then
            if self._KW_PANEL_MY_MAIN_QRCODE:isVisible() then
                self._KW_SHARE_CLICK:setVisible(false)
                self._KW_PANEL_MY_MAIN_SHARE:setVisible(true)
                self._KW_PANEL_MY_MAIN_QRCODE:setVisible(false)
            end
        end
    end
    XH.lobby:getModule("ScoringAssistant"):startShareImg("ScoringMy" .. os.time(), callback, self)
end

-------------------各个list对应的item
-- 添加玩家通用头像
function ScoringAssistantView:addPlayerItem(name, score, isBig, nameLen)
    local item
    if isBig then
        item = self._KW_PANEL_HEAD_ITEM_BIG:clone()
    else
        item = self._KW_PANEL_HEAD_ITEM:clone()
    end
    self:flushPlayerNormal(item, name, score, nameLen)
    return item
end

function ScoringAssistantView:getHeadColorByName(name)
    name = name .. ""
    if self._colorList[name] == nil then
        self._colorList[name] = COLOR_LIST[self._colorIndex % #COLOR_LIST + 1]
        self._colorIndex = self._colorIndex + 1
    end
    return self._colorList[name]
end

-- 添加玩家头像-仅头像
function ScoringAssistantView:addPlayerItemSingle(name)
    local item = self._KW_PANEL_HEAD_ITEM_SINGLE:clone()
    self:flushPlayerNormal(item, name)
    return item
end

function ScoringAssistantView:flushWinLoseTag(item, isShow)
    item:getChildByName("_EDIT_SCORE"):setColor(isShow and RED_COLOR or GREEN_COLOR)
    item:getChildByName("_KW_BTN_WIN_TAG"):setVisible(isShow)
    item:getChildByName("_KW_BTN_LOSE_TAG"):setVisible(not isShow)
end

function ScoringAssistantView:showInputEdit(isShow)
    self._KW_PANEL_EDIT_BOX:setVisible(isShow)
    self:removeInputLineSchedule()
    if isShow then
        local list = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
        if #list > 0 then
            local posY = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()[#list]:getPositionY() + self._KW_PANEL_MATCH_SCORE_LIST:getChildren()[#list]:getContentSize().height
            self._KW_PANEL_EDIT_BOX_3:setPositionY(posY)
        end
        self:setInpuLineSchedule()
    end
    if self and not tolua.isnull(self) and self._curNode and not tolua.isnull(self._curNode) then
        self._curNode:getChildByName("_INPUT_LINE"):setVisible(isShow)
        self._curNode:getChildByName("_INPUT_LINE"):setPositionX(self._curNode:getChildByName("_EDIT_SCORE"):getPositionX() + self._curNode:getChildByName("_EDIT_SCORE"):getContentSize().width / 2)
    end
end

function ScoringAssistantView:flushInputLineVisible()
    if self and not tolua.isnull(self) and self._curNode and not tolua.isnull(self._curNode) then
        self._curNode:getChildByName("_INPUT_LINE"):setVisible(not self._curNode:getChildByName("_INPUT_LINE"):isVisible())
    end
end

function ScoringAssistantView:setInpuLineSchedule()
    self:flushInputLineVisible()
    self._listener = cc.Director:getInstance():getScheduler():scheduleScriptFunc(function()
        if self and not tolua.isnull(self) then
            self:flushInputLineVisible()
        end
    end, 0.8, false)
end

function ScoringAssistantView:removeInputLineSchedule()
    if self and not tolua.isnull(self) and self._curNode and not tolua.isnull(self._curNode) then
        self._curNode:getChildByName("_INPUT_LINE"):setVisible(false)
    end
    if self._listener then
        cc.Director:getInstance():getScheduler():unscheduleScriptEntry(self._listener)
    end
    self._listener = nil
end

function ScoringAssistantView:flushChoseInpuItem(item)
    if self._curNode and not tolua.isnull(self._curNode) then
        self._curNode:getChildByName("_INPUT_LINE"):setVisible(false)
    end
    self._curNode = item
end

-- 计分页玩家头像
function ScoringAssistantView:addPlayerMatchItem(name, score)
    local item = self._KW_PANEL_MATCH_SCORE_ITEM:clone()
    local isSelf = XH.playerData:getNumberID() .. "" == name
    if score ~= nil then
        self:flushWinLoseTag(item, score >= 0 and true or false)
        item:getChildByName("_EDIT_SCORE"):setString(score >= 0 and score or -score)
    else
        self:flushWinLoseTag(item, true)
    end
    item:setName(name)
    self:flushPlayerNormal(item, name)
    item:getChildByName("_KW_BTN_WIN"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            self:flushWinLoseTag(item, true)
            self:flushDelState(false)
            self:flushChoseInpuItem(item)
            self:showInputEdit(true)
        end
    end)
    item:getChildByName("_KW_BTN_LOSE"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            self:flushWinLoseTag(item, false)
            self:flushDelState(false)
            self:flushChoseInpuItem(item)
            self:showInputEdit(true)
        end
    end)
    item:getChildByName("_BTN_DEL"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            item:removeFromParent()
            self:flushMatchListPosition()
        end
    end)
    item:getChildByName("_KW_BTN_CHANGE_SCORE"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            self:flushChoseInpuItem(item)
            self:showInputEdit(true)
        end
    end)
    local editBox = ccui.EditBox:create(cc.size(210, 55), "tea_house_createroom_textfield.png")
    if editBox then
        editBox:setMaxLength(self._maxNameLen)
        editBox:setName("_EDIT_NAME")
        editBox:setAnchorPoint(cc.p(0, 0.5))
        editBox:setPosition(cc.p(160, 75))
        editBox:setFontSize(36)
        editBox:setFontColor(cc.c3b(67, 68, 71))
        editBox:setInputMode(cc.EDITBOX_INPUT_MODE_ANY)
        editBox:setContentSize(330, editBox:getContentSize().height)
        if isSelf then
            name = XH.playerData:getNickName()
        end
        self:setShowName(editBox, name, self._maxNameLen)
        editBox:registerScriptEditBoxHandler(function(eventName)
            if eventName == "ended" or eventName == "return" then
                if editBox:getText() == XH.playerData:getNumberID() .. "" then
                    self:showToast("修改失败，不能使用自己的id作为名字")
                    editBox:setText(item:getName())
                else
                    local list = self._KW_PANEL_MATCH_SCORE_LIST:getChildren()
                    for i = 1, #list do
                        if list[i] ~= item and list[i]:getName() == editBox:getText() then
                            self:showToast("修改失败，名字重复")
                            editBox:setText(item:getName())
                            break
                        end
                    end
                end
                self:setShowName(editBox, editBox:getText(), self._maxNameLen)
                item:setName(editBox:getText())
                self:setShowName(item:getChildByName("_HEAD_TEXT"), editBox:getText(), 2)
                self:flushDelState(false)
                self:saveLastPlayerDatas()
            end
        end)
        editBox:setEnabled(not isSelf and self._curCnt <= 1)
        item:getChildByName("_EDIT"):setVisible(not isSelf and self._curCnt <= 1)
        item:addChild(editBox)
    end
    return item
end

-- 小结算分数
function ScoringAssistantView:addPlayerResultItem(cnt, data, index, time, innerWidth)
    local item = self._KW_PANEL_RESULT_SCORE_ITEM:clone()
    item:getChildByName("_COLOR"):setVisible(index % 2 ~= 0)
    item:getChildByName("_TEXT_SCORE"):setString(os.date("%H:%M:%S", time))
    item:getChildByName("_TEXT_CNT"):setString("第" .. cnt .. "局")
    for i = 1, #data do
        local tmp = item:getChildByName("_TEXT_SCORE_1"):clone()
        tmp:setString(data[i].score)
        tmp:setPosition(330 + (100 + self._scoreWidth) * (i - 1), item:getContentSize().height / 2)
        tmp:setColor(data[i].score >= 0 and RED_COLOR or GREEN_COLOR)
        tmp:setVisible(true)
        item:addChild(tmp)
    end
    return item
end

-- 大结算分数
function ScoringAssistantView:addPlayerBigResultItem(name, score)
    local item = self._KW_PANEL_BIG_RESULT_SCORE_ITEM:clone()
    self:flushPlayerNormal(item, name, score)
    return item
end

-- 通用刷新头像内容
function ScoringAssistantView:flushPlayerNormal(item, name, score, nameLen)
    local isSelf = XH.playerData:getNumberID() .. "" == name
    if isSelf then
        self:setHead(item:getChildByName("_SELF_HEAD"))
        name = XH.playerData:getNickName()
    else
        item:getChildByName("_HEAD"):setColor(self:getHeadColorByName(name))
    end
    item:getChildByName("_SELF_HEAD"):setVisible(isSelf)
    item:getChildByName("_HEAD"):setVisible(not isSelf)
    item:getChildByName("_HEAD_TEXT"):setVisible(not isSelf)
    self:setShowName(item:getChildByName("_HEAD_TEXT"), name, 2)
    if item:getChildByName("_NAME") ~= nil then
        self:setShowName(item:getChildByName("_NAME"), name, nameLen or self._maxNameLen)
    end
    if score ~= nil then
        item:getChildByName("_SCORE"):setString(score)
        item:getChildByName("_SCORE"):setColor(score >= 0 and RED_COLOR or GREEN_COLOR)
    end
end

function ScoringAssistantView:flushCollectState(item, isLike)
    item:getChildByName("_COLLECT_CANCEL"):setVisible(isLike)
    item:getChildByName("_COLLECT"):setVisible(not isLike)
end

function ScoringAssistantView:flushRecordShareBtn(isShow)
    if isShow == false and not self._KW_PANEL_MATCH_BIGRESULT_SHARECODE:isVisible() then
        return
    end
    self._KW_SHARE_CLICK:setVisible(isShow)
    self._KW_PANEL_MATCH:setVisible(isShow)
    self._KW_PANEL_MATCH_BIGRESULT:setVisible(isShow)
    self._KW_PANEL_MATCH_BIGRESULT_NEXT:setVisible(not isShow)
    self._KW_PANEL_MATCH_BIGRESULT_SHARECODE:setVisible(isShow)
    self._KW_PANEL_MATCH_BIGRESULT_SHARE:setVisible(not isShow)
    -- 如果首页本身就在结算页的话
    if isShow == false and self._firstIndex == ScoringAssistantConfig.MAIN_INDEX.BIGRESULT then
        self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.MAIN)
    end
end

-- 统计界面增加战绩
function ScoringAssistantView:addRecordItem(data)
    local item = self._KW_PANEL_TOTAL_RECORD_ITEM:clone()
    item:setName(data.ledgerId)
    item:getChildByName("_SCROLL"):removeAllChildren()
    self:flushCollectState(item, data.isLike == 1)
    item:getChildByName("_END_TIME"):setString(os.date("%Y-%m-%d %H:%M:%S", data.ledgerTime))
    -- 增加玩家头像
    for i = 1, #data.ledgerScore do
        local playerItem = self:addPlayerItem(data.ledgerScore[i].userName, tonumber(data.ledgerScore[i].score), false)
        -- if #data.ledgerScore * playerItem:getContentSize().width < item:getChildByName("_SCROLL"):getContentSize().width then
        --     item:getChildByName("_SCROLL"):setContentSize(cc.size(#data.ledgerScore * playerItem:getContentSize().width, item:getChildByName("_SCROLL"):getContentSize().height))
        -- end
        -- item:getChildByName("_SCROLL"):setInnerContainerSize(cc.size(#data.ledgerScore * playerItem:getContentSize().width, item:getChildByName("_SCROLL"):getContentSize().height))
        item:getChildByName("_SCROLL"):setScrollBarEnabled(false)
        playerItem:setVisible(true)
        playerItem:setPosition(playerItem:getContentSize().width * (i - 1), item:getChildByName("_SCROLL"):getContentSize().height)
        item:getChildByName("_SCROLL"):addChild(playerItem)
    end
    item:getChildByName("_DETAIL"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            XH.lobby:getModule("ScoringAssistant"):reqDetailBills(item:getName())
        end
    end)
    item:getChildByName("_DETAIL_EX"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            XH.lobby:getModule("ScoringAssistant"):reqDetailBills(item:getName())
        end
    end)
    item:getChildByName("_SHARE"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.sfz24092405)
            -- 分享
            self:flushRecordShareBtn(true)
            self:setBigWinlostData(data.ledgerScore)
            local callback = function()
                if self and not tolua.isnull(self) then
                    self:flushRecordShareBtn(false)
                end
            end
            XH.lobby:getModule("ScoringAssistant"):startShareImg("ScoringRecordResult" .. os.time(), callback, self)
        end
    end)
    item:getChildByName("_COLLECT"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            self._collectItem = item
            XH.lobby:getModule("ScoringAssistant"):reqSetCollectState(item:getName(), true)
        end
    end)
    item:getChildByName("_COLLECT_CANCEL"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            self._collectItem = item
            XH.lobby:getModule("ScoringAssistant"):reqSetCollectState(item:getName(), false)
        end
    end)
    item:getChildByName("_DEL"):addTouchEventListener(function(send, eventType)
        if eventType == ccui.TouchEventType.ended then
            -- 删除
            local view = XH.TipTool.showTip({
                type = XH.TIP_LAYER_TYPE.OK_CANCEL,
                funcOK = function()
                    XH.lobby:getModule("ScoringAssistant"):reqDelBill(item:getName())
                end
            }, "您是否要删除此条战绩？")
            if view and view._csbRoot:getChildByName("KW_UI_ROOT_BG") then
                view._csbRoot:getChildByName("KW_UI_ROOT_BG"):setRotation(270)
            end
        end
    end)
    return item
end

------------------------------event事件
-- 展示小局结算页
function ScoringAssistantView:onEventFlushCurBill()
    self:clearLastPlayerDatas()
    self:flushIsInRoomState(true)
    self:flushResultUI(true)
    self:flushResultData(self._KW_PANEL_MATCH_RESULT_HEAD, self._KW_PANEL_MATCH_RESULT_HEAD_EX, self._KW_PANEL_MATCH_RESULT_SCORE, self._KW_PANEL_MATCH_RESULT_LIST_HOR, XH.lobby:getModule("ScoringAssistant"):getResultData(), self._KW_PANEL_MATCH_RESULT_SCORE_BG)
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.RESULT)
end

-- 对局结束通知
function ScoringAssistantView:onEventFlushEndBill()
    self:clearLastPlayerDatas()
    self:flushIsInRoomState(false)
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.BIGRESULT)
    -- 数据塞入
    local totalCnt, totalScore = self:getTotalDataByResult()
    local showData = {}
    for k, v in pairs(totalScore) do
        showData[#showData + 1] = {
            user_name = k,
            score = v,
            user_id = XH.playerData:getNumberID()
        }
    end
    self:setBigWinlostData(showData)
end

function ScoringAssistantView:setBigWinlostData(showData)
    self._KW_PANEL_MATCH_BIGRESULT_LIST:removeAllChildren()
    table.sort(
    showData,
    function(data1, data2)
        return tonumber(data1.score) > tonumber(data2.score)
    end
    )
    local listHeight = #showData * self._KW_PANEL_BIG_RESULT_SCORE_ITEM:getContentSize().height
    self._KW_PANEL_MATCH_BIGRESULT_BG2:setContentSize(self._KW_PANEL_MATCH_BIGRESULT_BG2:getContentSize().width, listHeight + 50)
    self._KW_PANEL_MATCH_BIGRESULT_LIST:setContentSize(self._KW_PANEL_MATCH_BIGRESULT_LIST:getContentSize().width, listHeight)
    self._KW_PANEL_MATCH_BIGRESULT_LIST:setInnerContainerSize(cc.size(self._KW_PANEL_MATCH_BIGRESULT_LIST:getContentSize().width, listHeight))
    for i = 1, #showData do
        local item = self:addPlayerBigResultItem(showData[i].user_name or showData[i].userName, tonumber(showData[i].score) or 0)
        item:setVisible(true)
        item:setPosition(0, self._KW_PANEL_MATCH_BIGRESULT_LIST:getContentSize().height - (i - 1) * item:getContentSize().height)
        self._KW_PANEL_MATCH_BIGRESULT_LIST:addChild(item)
    end
end

-- 刷新总战绩
function ScoringAssistantView:onEventFlushTotalBills(event)
    local totalData = XH.lobby:getModule("ScoringAssistant"):getTotalBillsData()
    if not totalData then
        return
    end
    self._KW_PANEL_RECORD_MAIN_NONE:setVisible(#totalData == 0)
    self._maxPage = event.data.max
    self._curPage = event.data.cur
    self._KW_PANEL_RECORD_MAIN_TEXT_RIGHT:setString("/" .. self._maxPage)
    self._KW_PANEL_RECORD_MAIN_TEXT_LEFT:setString(self._curPage)
    self._KW_PANEL_RECORD_MAIN_LIST:removeAllChildren()
    local totalCnt = #totalData
    local listHeight = self._KW_PANEL_RECORD_MAIN_LIST:getContentSize().height
    if totalCnt > math.floor(listHeight / self._KW_PANEL_TOTAL_RECORD_ITEM:getContentSize().height) then
        listHeight = self._KW_PANEL_TOTAL_RECORD_ITEM:getContentSize().height * totalCnt
    end
    self._KW_PANEL_RECORD_MAIN_LIST:setInnerContainerSize(cc.size(self._KW_PANEL_RECORD_MAIN_LIST:getContentSize().width, listHeight))
    for i = 1, #totalData do
        local item = self:addRecordItem(totalData[i])
        item:setPosition(0, listHeight - item:getContentSize().height * (i - 1))
        item:setVisible(true)
        self._KW_PANEL_RECORD_MAIN_LIST:addChild(item)
    end
end

-- 刷新详单
function ScoringAssistantView:onEventFlushDetailBill()
    self:flushResultData(self._KW_PANEL_RECORD_RESULT_LIST_HEAD, self._KW_PANEL_RECORD_RESULT_LIST_HEAD_EX, self._KW_PANEL_RECORD_RESULT_LIST_SCORE, self._KW_PANEL_RECORD_RESULT_LIST_HOR, XH.lobby:getModule("ScoringAssistant"):getDetailBillsData(), self._KW_PANEL_RECORD_RESULT_LIST_SCORE_BG)
    self:flushRecordUI(false)
end

-- 刷新我的
function ScoringAssistantView:onEventFlushMy()
    local data = XH.lobby:getModule("ScoringAssistant"):getMyData()
    if not data then
        return
    end
    self._KW_PANEL_MY_MAIN_ZCS:setString(data.totalPlay)   -- 总场数
    self._KW_PANEL_MY_MAIN_ZSC:setString(data.winPlay)   -- 总胜场
    self._KW_PANEL_MY_MAIN_ZFC:setString(data.totalPlay - data.winPlay)   -- 总负场
    self._KW_PANEL_MY_MAIN_ZDF:setString(data.totalScore)   -- 总得分
    self._KW_PANEL_MY_MAIN_ZSF:setString(data.winScore)   -- 总胜分
    self._KW_PANEL_MY_MAIN_ZFF:setString(data.totalScore - data.winScore)   -- 总负分
    self:setShowName(self._KW_PANEL_MY_MAIN_BEST, data.winMax, self._maxNameLen) -- 最佳牌友
    self:setShowName(self._KW_PANEL_MY_MAIN_WRONG, data.lostMax, self._maxNameLen)-- 最菜牌友
    self:setShowName(self._KW_PANEL_MY_MAIN_BEST_S, data.winMax, 2)-- 最佳牌友
    self:setShowName(self._KW_PANEL_MY_MAIN_WRONG_S, data.lostMax, 2)-- 最菜牌友
end

-- 刷新收藏状态
function ScoringAssistantView:onEventCollectState()
    if not self._collectItem then
        return
    end
    local isShow = self._collectItem:getChildByName("_COLLECT_CANCEL"):isVisible()
    self._collectItem:getChildByName("_COLLECT_CANCEL"):setVisible(not isShow)
    self._collectItem:getChildByName("_COLLECT"):setVisible(isShow)
end

-- 刷新删除状态
function ScoringAssistantView:onEventDelBill()
    XH.lobby:getModule("ScoringAssistant"):reqTotalBills(self._curPage)
end

-- 刷新是否游戏中
function ScoringAssistantView:onEventInGaming()
    local data = XH.lobby:getModule("ScoringAssistant"):getLastMatchRecord()
    self:flushIsInRoomState(not (data == nil or #data == 0))
    self:flushRoomUI(data)
    if not (data == nil or #data == 0) then
        self:flushResultData(self._KW_PANEL_MATCH_RESULT_HEAD, self._KW_PANEL_MATCH_RESULT_HEAD_EX, self._KW_PANEL_MATCH_RESULT_SCORE, self._KW_PANEL_MATCH_RESULT_LIST_HOR, XH.lobby:getModule("ScoringAssistant"):getResultData(), self._KW_PANEL_MATCH_RESULT_SCORE_BG)
    end
    self:flushMainSelectIndex(ScoringAssistantConfig.MAIN_INDEX.SCORE)
end

function ScoringAssistantView:isFitLocalWithRemote(remote, localData)
    if remote and remote[1] then
        local cnt = 1
        for _, _ in pairs(remote) do
            cnt = cnt + 1
        end
        for i = 1, #remote[1].score do
            local isFind = false
            for j = 1, #localData.score do
                if localData.score[j].user_name == remote[1].score[i].user_name then
                    isFind = true
                    break
                end
            end
            if not isFind then
                return false
            end
        end
        if localData.juId == cnt then
            return true
        end
    end
    return false
end

function ScoringAssistantView:onEventShowToast(event)
    if event and event.data then
        self:showToast(event.data)
    end
end

return ScoringAssistantView