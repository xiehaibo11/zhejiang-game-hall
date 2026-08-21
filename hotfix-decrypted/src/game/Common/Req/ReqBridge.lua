local ShopConfig = require("lobby.Modules.Shop.Config")

local updateModuleReqInfo = function( obj, reqObj, callBackFunc )
    if not obj then
        return
    end
    local reqInfo = {}
    obj._reqInfos = obj._reqInfos or {}
    reqInfo.id = #obj._reqInfos + 1
    reqInfo.callBack = callBackFunc
    reqInfo.req = reqObj
    obj._reqInfos[reqInfo.id] = reqInfo
end

function CF.reqTaskPercentById(taskId, obj, callBackFunc)
    local reqTaskPercent = require("app.Req.Task.ReqTaskPercent")
    local TaskPercent = reqTaskPercent:new()
    TaskPercent:addReqCallBack(obj, callBackFunc)
    local srsGroupID = XH.areaData:getSrsGroupID()
    updateModuleReqInfo(obj, TaskPercent, callBackFunc)
    TaskPercent:start(CF.selfPlayerData.getNumberID(), 0, 120, taskId, srsGroupID, 10)    
end

function CF.reqTaskProtocolByIdAndStr(taskId, str, obj, callBackFunc)
    local ReqTaskProtocol = require("app.Req.Task.ReqTaskProtocol")
    local reqTaskProtocol = ReqTaskProtocol:new()
    reqTaskProtocol:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqTaskProtocol, callBackFunc)
    reqTaskProtocol:start(taskId,0,0,XH.areaData:getSrsGroupID(),CF.KW_CONFIG_LOGIC_TIME_OUT,str)
end

local reqExchangeProductList = function(obj, callBackFunc, propType, tag, productTypeEx)
    local userData =  CF.selfPlayerData
    local numId = userData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(userData:getUserID())
    local areaId = userData:getBrandID()
    
    local ReqExchangeProductList = require("lobby.Req.Shop.ReqExchangeProductList")
    local reqExchange = ReqExchangeProductList.new()
    reqExchange:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqExchange, callBackFunc)
    reqExchange:start(numId, userId, areaId, CF.areaData:getAreaWindID(), propType, CF.KW_CONFIG_LOGIC_TIME_OUT, tag, productTypeEx)
end

function CF.reqMarkerProductList(obj, callBackFunc)
    reqExchangeProductList(obj, callBackFunc, ShopConfig.ProductType.MARKER)
end

-- 拜财神商品列表
function CF.reqCaiYunProductList(obj, callBackFunc)
    reqExchangeProductList(obj, callBackFunc, ShopConfig.ProductType.CAIYUN)
end

-- 求财运风信商品列表请求
function CF.reqCaiYunNewProductList(obj, callBackFunc)
    reqExchangeProductList(obj, callBackFunc, ShopConfig.ProductType.CAIYUNNEW)
end

-- 洗牌风信商品列表请求
function CF.reqShuffleProductList(obj, callBackFunc)
    reqExchangeProductList(obj, callBackFunc, ShopConfig.ProductType.SHUFFLE)
end

function CF.reqPropAniList(obj, callBackFunc)
    if XH.isEmbeddedApp and XH.isEmbeddedApp() then
        local params = XH.PluginModule.getStartParams()
        if params.zjbGoldPropType ~= 0 then
            reqExchangeProductList(obj, callBackFunc, params.zjbGoldPropType, "", params.zjbGoldPropType)
        end
    end
end

-- 换牌卡风信商品列表请求
function CF.reqChangeCardProductList(obj, callBackFunc)
    reqExchangeProductList(obj, callBackFunc, ShopConfig.ProductType.CHANGECARD)
end

function CF.reqExchangeProduct(productType, productId, obj, callBackFunc, richType, propValue, propCount, needPropID)
    local userData =  CF.selfPlayerData
    local numId = userData:getNumberID()
    local userId = un.StringUtils.GB_18030_2000_TO_UTF8(userData:getUserID())
    local areaId = userData:getBrandID()
    local gameId = CF.areaData:getConfigGameID()
    local ReqExchange = require("lobby.Req.Shop.ReqExchange")
    local reqExchange = ReqExchange.new()
    reqExchange:setDataEx(propValue,propCount,needPropID)
    reqExchange:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqExchange, callBackFunc)
    reqExchange:start(areaId, CF.areaData:getAreaWindID(), numId, userId, gameId, productId, productType, CF.KW_CONFIG_LOGIC_TIME_OUT, nil, nil, richType, propValue)
end

function CF.reqreqExchangeCaiYunProduct(productId, obj, callBackFunc, richType, propValue, propCount, needPropID)
    CF.reqExchangeProduct(ShopConfig.ProductType.CAIYUN, productId, obj, callBackFunc, richType, propValue, propCount, needPropID)
end

function CF.reqUseEquipCard(param, obj, callBackFunc)
    local ReqUseEquipCard = require("lobby.Req.Prop.ReqUseEquipCard")
    local reqUseEquipCard = ReqUseEquipCard.new()
    reqUseEquipCard:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqUseEquipCard, callBackFunc)
    reqUseEquipCard:start(param, 10)
end

function CF.reqGetPropsCount(userID, teaID, propIDs, obj, callBackFunc)
    local ReqGetPropsCount = require("lobby.Req.ReqGetPropsCount")
    local reqGetPropsCount = ReqGetPropsCount.new()
    reqGetPropsCount:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqGetPropsCount, callBackFunc)
    reqGetPropsCount:start(userID, teaID, propIDs, 10)
end

function CF.reqJoinDispatchQueue(gameId,chaircnt,srsGroupID,roomnameflag)
    local ReqJoin = require("lobby.Req.Room.ReqJoinDispatchQueue")
    local reqJoin = ReqJoin:new()
    reqJoin:start(gameId,chaircnt,srsGroupID,roomnameflag,15)
end

function CF.reqJoinGoldRoom(gameId,areaTypeID,chaircnt,goldMode,srsGroupID,roomnameflag)
    local ReqJoin = require("lobby.Req.Room.ReqJoinGoldRoom")
    local reqJoin = ReqJoin:new()
    reqJoin:start(gameId,areaTypeID,chaircnt,goldMode,srsGroupID,roomnameflag,15)
end

function CF.linkReqJoinRoomGT( gameId,rooms,chaircnt,srsGroupID)
    local ReqJoin = require("lobby.Req.Room.LinkReqJoinRoomGT")
    local reqJoin = ReqJoin:new()
    reqJoin:start(gameId,rooms,chaircnt,srsGroupID,15, {})
end

function CF.reqEmojiPropFreeTimes(freeemoji,obj,callBackFunc)
    local ReqGetUseEmojiPropInfo = require("lobby.Req.BagSysNew.ReqGetUseEmojiPropInfo")
    local reqGetUseEmojiPropInfo = ReqGetUseEmojiPropInfo:new()
    reqGetUseEmojiPropInfo:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqGetUseEmojiPropInfo, callBackFunc)
    reqGetUseEmojiPropInfo:start(freeemoji,CF.KW_CONFIG_LOGIC_TIME_OUT)
end

function CF.reqGetCaiYunInfo(obj, callBackFunc)
    local userData =  CF.selfPlayerData
    local numId = userData:getNumberID()
    local ReqGetCaiYunInfo = require("lobby.Req.CaiYunPropNew.ReqGetCaiYunInfo")
    local reqGetCaiYunInfo = ReqGetCaiYunInfo.new()
    reqGetCaiYunInfo:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqGetCaiYunInfo, callBackFunc)
    reqGetCaiYunInfo:start(numId, 10)
end

function CF.reqGetCaiYunAward(type, obj, callBackFunc)
    local userData =  CF.selfPlayerData
    local numId = userData:getNumberID()
    local ReqGetCaiYunAward = require("lobby.Req.CaiYunPropNew.ReqGetCaiYunAward")
    local reqGetCaiYunAward = ReqGetCaiYunAward.new()
    reqGetCaiYunAward:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqGetCaiYunAward, callBackFunc)
    reqGetCaiYunAward:start(numId, type, 10)
end

function CF.reqGetCaiYunStrategy(obj, callBackFunc)
    local ReqGetCaiYunStrategy = require("lobby.Req.CaiYunPropNew.ReqGetCaiYunStrategy")
    local reqGetCaiYunStrategy = ReqGetCaiYunStrategy.new()
    reqGetCaiYunStrategy:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqGetCaiYunStrategy, callBackFunc)
    reqGetCaiYunStrategy:start(10)
end

function CF.reqTransferProps(params, priceConfig, targetPropId, obj, callBackFunc)
    local userData =  CF.selfPlayerData
    local numId = userData:getNumberID()
    local ReqTransferProps = require("lobby.Req.CaiYunPropNew.ReqTransferProps")
    local reqTransferProps = ReqTransferProps.new()
    reqTransferProps:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqTransferProps, callBackFunc)
    reqTransferProps:start(numId, params, priceConfig, targetPropId, 10)
end
function CF.reqTransferPropsCaiYunFreeUse(params, propid, cnt, obj, callBackFunc)
    local userData =  CF.selfPlayerData
    local ReqTransferProps = require("lobby.Req.CaiYunPropNew.ReqTransferPropsCaiYunFreeUse")
    local reqTransferProps = ReqTransferProps.new()
    reqTransferProps:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqTransferProps, callBackFunc)
    reqTransferProps:start(params, propid, cnt, 10)
end

function CF.reqPreShuffle(roomID, juNum, opt, obj, callBackFunc)
    local ReqPreShuffle = require("lobby.Req.Shuffle.ReqPreShuffle")
    local reqPreShuffle = ReqPreShuffle.new()
    reqPreShuffle:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqPreShuffle, callBackFunc)
    reqPreShuffle:start(roomID, juNum, opt, 2)
end

-- 洗牌5.0，data: { type, discount, remain_time, act_id }
function CF.reqShuffle5(data, target, callBackFunc)
    local ReqShuffle5 = require("lobby.Req.Shuffle.ReqShuffle5")
    local reqShuffle5 = ReqShuffle5.new()
    reqShuffle5:addReqCallBack(target, callBackFunc)
    updateModuleReqInfo(target, reqShuffle5, callBackFunc)
    reqShuffle5:start(data, 10)
end

-- 洗牌功能破冰策略 
function CF.reqShufflePlan(data, target, callBackFunc)
    local ReqShufflePlan = require("lobby.Req.Shuffle.ReqShufflePlan")
    local reqShufflePlan = ReqShufflePlan.new()
    reqShufflePlan:addReqCallBack(target, callBackFunc)
    updateModuleReqInfo(target, reqShufflePlan, callBackFunc)
    reqShufflePlan:start(data, 10)
end

-- 请求换牌卡
function CF.reqChangeCard(param, obj, callBackFunc)
    local ReqChangeCard = require("lobby.Req.Shuffle.ReqChangeCard")
    local reqChangeCard = ReqChangeCard.new()
    reqChangeCard:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqChangeCard, callBackFunc)
    reqChangeCard:start(param, 2)
end

-- 游戏区请求观战
function CF.reqRealtimeGameRecord(roomid, offset, gameid, obj, callBackFunc, isDelay, playercount)
    local ReqRealtimeGameRecord = require("lobby.Req.Watch.ReqRealtimeGameRecord")
    local reqwatch = ReqRealtimeGameRecord.new()
    reqwatch:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqwatch, callBackFunc)
    reqwatch:start(roomid, offset, gameid, isDelay, 10, playercount)
end

-- 取消观战请求
function CF.reqUnwatchRealtimeGameRecord(roomid, target, callBackFunc)
    local ReqUnwatch = require("lobby.Req.Watch.ReqUnwatchRealtimeGameRecord")
    local reqUnwatch = ReqUnwatch.new()
    if target and callBackFunc then
        reqUnwatch:addReqCallBack(target, callBackFunc)
        updateModuleReqInfo(target, reqUnwatch, callBackFunc)
    end
    reqUnwatch:start(roomid, 10)
end

-- 连接50SRS直接请求50协议扣除道具
function CF.reqUsePropsByProtobuf(param, obj, callBackFunc)
    local ReqUseProps = require("lobby.Req.BagSysNew.ReqUsePropsByProtobuf")
    local reqUseProps = ReqUseProps.new()
    reqUseProps:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqUseProps, callBackFunc)
    reqUseProps:start(param, 10)
end

function CF.reqUseEquipCardProtobuf(param, obj, callBackFunc)
    local ReqUseEquipCard = require("lobby.Req.Prop.ReqUseEquipCardProtobuf")
    local reqUseEquipCard = ReqUseEquipCard.new()
    reqUseEquipCard:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqUseEquipCard, callBackFunc)
    reqUseEquipCard:start(param, 10)
end

function CF.reqJoin50MatchList(param,srsGoupID, obj, callBackFunc)
    local ReqJoin50MatchList = require("lobby.Req.Room.ReqJoin50MatchList")
    local req = ReqJoin50MatchList.new()
    req:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, req, callBackFunc)
    req:start(param,srsGoupID, 10)
end

function CF.reqPlayerPlace(obj, callBackFunc)
    local ReqPlayerPlace33And50 = require("lobby.Req.Room.ReqPlayerPlace33And50")
    local reqPlayerPlace33And50 = ReqPlayerPlace33And50.new()
    reqPlayerPlace33And50:addReqCallBack(obj, callBackFunc)
    reqPlayerPlace33And50:start(10)
end

function CF.reqKickTimes(param, obj, callBackFunc)
    local ReqKickTimes = require("lobby.Req.Sxvip.ReqKickTimes")
    local reqKickTimes = ReqKickTimes.new()
    reqKickTimes:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqKickTimes, callBackFunc)
    reqKickTimes:start(param, 10)
end

function CF.reqSxvipRecordStatistics(param, obj, callBackFunc)
    local ReqSxvipGameRecord = require("lobby.Req.Sxvip.ReqSxvipGameRecord")
    local reqSxvipGameRecord = ReqSxvipGameRecord.new()
    reqSxvipGameRecord:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqSxvipGameRecord, callBackFunc)
    reqSxvipGameRecord:start(param, 10)
end

function CF.reqCurTime(obj, callBackFunc)
    local ReqCurTimeBill = require("lobby.Req.PlayerBill.ReqCurTime")
    local reqCurTimeBill = ReqCurTimeBill.new()
    reqCurTimeBill:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqCurTimeBill, callBackFunc)
    reqCurTimeBill:start(XH.KW_CONFIG_LOGIC_TIME_OUT)
end

function CF.reqPlayerCurRoomBill(reqTime, obj, callBackFunc)
    local param = {}
    param.nDay = reqTime
    param.nCnt = 1 or 0
    param.areaid = XH.areaData:getAreaID()
    param.numberid = XH.playerData:getNumberID()
    param.timeoutTime = XH.KW_CONFIG_LOGIC_TIME_OUT
    param.startIndex = 0
    param.flag = 0
    local ReqPlayerBillSingle = require("lobby.Req.PlayerBill.ReqPlayerBillSingle")
    local reqPlayerBill = ReqPlayerBillSingle.new()
    reqPlayerBill:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqPlayerBill, callBackFunc)
    reqPlayerBill:start(param)
end

function CF.reqSingleRight(obj, callBackFunc)
    local ReqSxvipGetSingleRight = require("lobby.Req.Sxvip.ReqSxvipGetSingleRight")
    local reqSxvipGetSingleRight = ReqSxvipGetSingleRight.new()
    reqSxvipGetSingleRight:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqSxvipGetSingleRight, callBackFunc)
    reqSxvipGetSingleRight:start()
end

function CF.reqLockSingleRight(param, obj, callBackFunc) 
    local ReqSxvipLockSingleRight = require("lobby.Req.Sxvip.ReqSxvipLockSingleRight")
    local reqSxvipLockSingleRight = ReqSxvipLockSingleRight.new()
    reqSxvipLockSingleRight:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqSxvipLockSingleRight, callBackFunc)
    reqSxvipLockSingleRight:start(param)
end

function CF.reqBoxGuideInfo(param, obj, callBackFunc)
    local ReqBoxGuideInfo = require("lobby.Req.BoxGuide.CellReqBoxGuideInfo")
    local reqBoxGuideInfo = ReqBoxGuideInfo.new()
    reqBoxGuideInfo:addReqCallBack(obj, callBackFunc)
    updateModuleReqInfo(obj, reqBoxGuideInfo, callBackFunc)
    reqBoxGuideInfo:start(param)
end

function CF.reqSendPropSuccess(strData)
    strData = strData or ""
    local num = tonumber(string.match(strData, "propCnt=(%d+);"))
    local backTable = XH.StringTool.getTableByString(strData, ";", "=")
    local isMass = backTable["isMassSend"]
    if isMass then
        local realSendPlayers = string.split(isMass, ",")
        num = #realSendPlayers * num
    end
    local luckyMissionConfig = require("lobby.Modules.LuckyMission.Config")
    XH.lobby:getModule("LuckyMission"):reqTaskV2Finish(luckyMissionConfig.TaskType.Res_PropHuDong, num)
end  �;  