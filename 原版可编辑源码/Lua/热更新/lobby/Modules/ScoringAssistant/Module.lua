local ScoringAssistantModule = class("ScoringAssistantModule", XH.ModuleBase)
local ScoringAssistantConfig = require("lobby.Modules.ScoringAssistant.Config")

ScoringAssistantModule.EVENT_FLUSH_CUR_BILL = "EVENT_FLUSH_CUR_BILL" -- 首页当前战绩
ScoringAssistantModule.EVENT_FLUSH_END_BILL = "EVENT_FLUSH_END_BILL" -- 首页结束战绩
ScoringAssistantModule.EVENT_FLUSH_TOTAL_BILLS = "EVENT_FLUSH_TOTAL_BILLS" -- 统计战绩
ScoringAssistantModule.EVENT_FLUSH_DETAIL_BILL = "EVENT_FLUSH_DETAIL_BILL" -- 统计详细战绩
ScoringAssistantModule.EVENT_FLUSH_MY = "EVENT_FLUSH_MY" -- 我的
ScoringAssistantModule.EVENT_COLLECT_STATE = "EVENT_COLLECT_STATE" -- 刷新收藏/取消收藏
ScoringAssistantModule.EVENT_DEL_BILL = "EVENT_DEL_BILL" -- 刷新删除
ScoringAssistantModule.EVENT_IN_GAMING = "EVENT_IN_GAMING" -- 请求是否存在对局中的记录
ScoringAssistantModule.EVENT_SHOW_TOAST = "EVENT_SHOW_TOAST" -- 刷新弱提示

function ScoringAssistantModule:ctor()
    ScoringAssistantModule.super.ctor(self)
    self._resultData = {} -- 结算数据
    self._detailData = nil -- 详单数据
    self._totalData = nil -- 总单数据
    self._myData = nil -- 我的数据
    self._curID = "" -- 总单ID
    self._tmpData = nil -- 临时存储本局战绩
end

function ScoringAssistantModule:clearData()
    self._resultData = {}
    self._detailData = nil
    self._totalData = nil
    self._myData = nil
    self._curID = ""
    self._tmpData = nil
end

function ScoringAssistantModule:getReqConfig()
    return {
        ReqSetRoomBillEnd = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respSetRoomBillEnd },
        ReqSetRoomBill = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respSetRoomBill },
        ReqInGamingData = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respInGamingData },
        ReqTotalBills = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respTotalBills },
        ReqDetailBills = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respDetailBills },
        ReqSetCollectState = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respSetCollectState },
        ReqDelBill = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respDelBill },
        ReqMyData = { reqPath = "lobby.Req.Act.ReqScoringAssistant", callBack = self.respMyData },
    }
end

-- 获取我的数据
function ScoringAssistantModule:getMyData()
    -- return ScoringAssistantConfig.TEST_MY_DATA
    return self._myData
end

-- 获取详单数据
function ScoringAssistantModule:getDetailBillsData()
    -- return ScoringAssistantConfig.TEST_DETAIL_DATA
    return self._detailData
end

-- 获取总单数据
function ScoringAssistantModule:getTotalBillsData()
    -- return ScoringAssistantConfig.TEST_TOTAL_DATA
    return self._totalData
end

-- 获取结算数据
function ScoringAssistantModule:getResultData()
    return self._resultData
end

-- 获取最后对局记录
-- 先走服务拿数据
-- 再看本地是否有存储下一局的数据
function ScoringAssistantModule:getLastMatchRecord()
    return self._resultData
end

-- 请求对局结束
function ScoringAssistantModule:reqSetRoomBillEnd(data)
    XH.TipTool.showLoading()
    -- self._resultData[data.juId] = data
    -- self:respSetRoomBillEnd()
    self._tmpData = data
    local ledgerId = self._curID
    local ju_score = {}
    local juId = 0
    if data ~= nil then
        if data.juId == 1 then
            ledgerId = ""
        end
        ju_score = {
            score_list = data.score,
            ju_id = data.juId,
        }
        juId = data.juId
    end
    local reqData = {
        ju_score = ju_score,
        opt = ScoringAssistantConfig.OPT.End,
        ledger_id = ledgerId,
        ju_id = juId,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqSetRoomBillEnd", reqData)
end

function ScoringAssistantModule:respSetRoomBillEnd(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.act.forbidName and data.act.forbidName ~= "" then
            self:showToast("存在敏感词" .. data.act.forbidName .. "，结束失败，请修改~")
            return
        end
        if self._tmpData then
            self._resultData[self._tmpData.juId] = self._tmpData
        end
        self:dispatchEvent({ name = self.EVENT_FLUSH_END_BILL })
    else
        self:showToast("请求设置失败，请重试~")
    end
end

function ScoringAssistantModule:getLedgerId()
    if self._resultData and self._resultData[1] then
        return self._resultData
    end
    return 0
end

-- 请求保存下一局
function ScoringAssistantModule:reqSetRoomBill(data)
    XH.TipTool.showLoading()
    -- self._resultData[data.juId] = data
    -- self:respSetRoomBill()
    self._tmpData = data
    local ledgerId = self._curID
    if data.juId == 1 then
        ledgerId = ""
    end
    local reqData = {
        ju_score = {
            score_list = data.score,
            ju_id = data.juId,
        },
        opt = ScoringAssistantConfig.OPT.Set,
        ledger_id = ledgerId,
        ju_id = data.juId,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqSetRoomBill", reqData)
end

function ScoringAssistantModule:respSetRoomBill(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        if data.act.forbidName and data.act.forbidName ~= "" then
            self:showToast("存在敏感词" .. data.act.forbidName .. "，保存失败，请修改~")
            return
        end
        self:setTransferCData(data)
        -- if self._tmpData then
        --     self._resultData[self._tmpData.juId] = self._tmpData
        -- end
        self:dispatchEvent({ name = self.EVENT_FLUSH_CUR_BILL })
    else
        self:showToast("请求设置失败，请重试~")
    end
end

function ScoringAssistantModule:setTransferCData(data)
    if data and data.act.juScoreList and #data.act.juScoreList > 0 then
        self._curID = data.act.ledgerId
        for i = 1, #data.act.juScoreList do
            self._resultData[data.act.juScoreList[i].juId] = {
                score = {},
                juId = data.act.juScoreList[i].juId,
                juTime = tonumber(data.act.juScoreList[i].juTime),
            }
            for j = 1, #(data.act.juScoreList[i].scoreList) do
                self._resultData[data.act.juScoreList[i].juId].score[#self._resultData[data.act.juScoreList[i].juId].score + 1] = {
                    user_name = data.act.juScoreList[i].scoreList[j].userName,
                    score = tonumber(data.act.juScoreList[i].scoreList[j].score),
                    user_id = data.act.juScoreList[i].scoreList[j].userId
                }
            end
        end
    end
end

-- 请求是否存在正在对局
function ScoringAssistantModule:reqInGamingData()
    XH.TipTool.showLoading()
    -- self:respInGamingData()
    local reqData = {
        ju_score = {},
        opt = ScoringAssistantConfig.OPT.Get_In,
        ledger_id = "",
        ju_id = 0,
        start_time = self:getStartTime(),
        end_time = XH.lobby:getModule("Shop"):getServerTime(),
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqInGamingData", reqData)
end

function ScoringAssistantModule:respInGamingData(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._resultData = {}
        self:setTransferCData(data)
    end
    self:dispatchEvent({ name = self.EVENT_IN_GAMING })
end

function ScoringAssistantModule:getStartTime()
    local now = XH.lobby:getModule("Shop"):getServerTime()
    local date = os.date("*t", now)
    local startOfMonth = {
        year = date.year,
        month = date.month,
        day = 1,
        hour = 0,
        min = 0,
        sec = 0
    }
    local startTimestamp = os.time(startOfMonth)
    return startTimestamp
end

-- 请求总单数据
function ScoringAssistantModule:reqTotalBills(curPage)
    XH.TipTool.showLoading()
    -- self:respTotalBills(curPage)
    local reqData = {
        ju_score = {},
        opt = ScoringAssistantConfig.OPT.Get_His,
        ledger_id = "",
        ju_id = 0,
        start_time = XH.lobby:getModule("Shop"):getServerTime() - 86400 * 30,
        end_time = XH.lobby:getModule("Shop"):getServerTime(),
        page_size = 10,
        page = curPage,
    }
    self:startReq("ReqTotalBills", reqData)
end

function ScoringAssistantModule:respTotalBills(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._totalData = data.act.ledgerScoreList
        if data.act.totalCount == 0 then
            data.act.totalCount = 1
        end
        self:dispatchEvent({ name = self.EVENT_FLUSH_TOTAL_BILLS, data = { cur = data.ccurPage, max = math.ceil(data.act.totalCount / 10) } })
    else
        self:showToast("请求失败，请重试~")
    end
end

-- 请求详单数据
function ScoringAssistantModule:reqDetailBills(ledgerId)
    XH.TipTool.showLoading()
    -- self:respDetailBills()
    local reqData = {
        ju_score = {},
        opt = ScoringAssistantConfig.OPT.Get_In,
        ledger_id = ledgerId,
        ju_id = 0,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqDetailBills", reqData)
end

function ScoringAssistantModule:respDetailBills(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._detailData = {}
        if data and data.act.juScoreList and #data.act.juScoreList > 0 then
            for i = 1, #data.act.juScoreList do
                self._detailData[data.act.juScoreList[i].juId] = {
                    score = {},
                    juId = data.act.juScoreList[i].juId,
                    juTime = tonumber(data.act.juScoreList[i].juTime),
                }
                for j = 1, #(data.act.juScoreList[i].scoreList) do
                    self._detailData[data.act.juScoreList[i].juId].score[#self._detailData[data.act.juScoreList[i].juId].score + 1] = {
                        user_name = data.act.juScoreList[i].scoreList[j].userName,
                        score = tonumber(data.act.juScoreList[i].scoreList[j].score),
                        user_id = data.act.juScoreList[i].scoreList[j].userId
                    }
                end
            end
        end
        self:dispatchEvent({ name = self.EVENT_FLUSH_DETAIL_BILL })
    else
        self:showToast("请求失败，请重试~")
    end
end

-- 请求收藏/取消收藏
function ScoringAssistantModule:reqSetCollectState(ledgerId, isLike)
    XH.TipTool.showLoading()
    -- self:respSetCollectState()
    local reqData = {
        ju_score = {},
        opt = isLike and ScoringAssistantConfig.OPT.Like or ScoringAssistantConfig.OPT.UnLike,
        ledger_id = ledgerId,
        ju_id = 0,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqSetCollectState", reqData)
end

function ScoringAssistantModule:respSetCollectState(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:showToast("设置成功~")
        self:dispatchEvent({ name = self.EVENT_COLLECT_STATE })
    else
        self:showToast("设置失败，请重试~")
    end
end

-- 请求删除
function ScoringAssistantModule:reqDelBill(ledgerId)
    XH.TipTool.showLoading()
    -- self:respDelBill()
    local reqData = {
        ju_score = {},
        opt = ScoringAssistantConfig.OPT.Del,
        ledger_id = ledgerId,
        ju_id = 0,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqDelBill", reqData)
end

function ScoringAssistantModule:respDelBill(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self:dispatchEvent({ name = self.EVENT_DEL_BILL })
    else
        self:showToast("请求删除超时，请重试~")
    end
end

-- 请求我的数据
function ScoringAssistantModule:reqMyData()
    XH.TipTool.showLoading()
    -- self:respMyData()
    local reqData = {
        ju_score = {},
        opt = ScoringAssistantConfig.OPT.Get_Month,
        ledger_id = "",
        ju_id = 0,
        start_time = 0,
        end_time = 0,
        page_size = 0,
        page = 0,
    }
    self:startReq("ReqMyData", reqData)
end

function ScoringAssistantModule:respMyData(cell, type, data)
    XH.TipTool.hideLoading()
    if type == XH.Req.TYPE.SUCCESS then
        self._myData = data.act
        self:dispatchEvent({ name = self.EVENT_FLUSH_MY })
    else
        self:showToast("请求数据超时，请切换页签重试~")
    end
end

function ScoringAssistantModule:showToast(msg)
    self:dispatchEvent({ name = self.EVENT_SHOW_TOAST, data = msg })
end

-- 分享旋转图片
function ScoringAssistantModule:startShareImg(savePicName, callback, obj)
    savePicName = savePicName .. ".jpg"
    local shareToWeChat = function(succeed, outputFile)
        if not succeed or not cc.FileUtils:getInstance():isFileExist(outputFile) then
            print("captureScreen failed")
            if callback then
                callback(obj)
            end
            return
        end
        local shareInfo = {
            textTitle = XH.SysTool:getAppName() .. os.date("%Y%m%d %H%M%S") or "", --分享标题
            imagePath = outputFile, --微信不用
            type = "pic", --word是文字分享，url网页模式分享，pic分享图片
            scene = 0, --0是分享到好友会话，1是分享到朋友圈
            imageUrl = "", --分享图片地址（分享网页模式，需要传安卓包名）
            text = "扫二维码 一起玩", --分享内容
            sharePath = ""
        }
        XH.sdkManager:startShare(shareInfo, callback, obj)
    end
    XH.SysTool.takeScreenshotAndRotate(shareToWeChat, savePicName)
    -- 超时设置
    XH.SysTool.performDelayOnce(function()
        if callback then
            callback(obj)
        end
    end, 3)
end

return ScoringAssistantModule