-- 选择需要创建的比赛场
local TeaHouseTwiceConfirmTip = class("TeaHouseTwiceConfirmTip",TeaHouse.View)
local TeaHouseRemodelModifyInventory = class("src.teahouse.View.TeaHouseRemodelModifyInventory")
TeaHouseTwiceConfirmTip.RAW_RES_BINDING_CSB =
{
    csb = "res/cocosStudio/TeaHouse/CSB/TeaHouseTwiceConfirmTip.csb",
    binding = {
        ["_KW_BTN_QUIT_CLOSE"] = {tag = "_KW_BTN_QUIT_CLOSE",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_CANCEL"] = {tag = "_KW_BTN_CANCEL",name = "_btnClose",class = "btn",events = "onCloseClicked"},
        ["_KW_BTN_SURE"] = {tag = "_KW_BTN_SURE",name = "_btnSure",class = "btn",events = "onSureClicked"},
        ["_KW_TEXT_MSG"] = {tag = "_KW_TEXT_MSG",name = "_textTextMsg"},
    }
}

function TeaHouseTwiceConfirmTip:ctor(propnum)
    TeaHouseTwiceConfirmTip.super.ctor(self)
    self:init(propnum)
end

function TeaHouseTwiceConfirmTip:init(propnum)
    local teahouseData = TeaHouse.manager.teahouseData
    local teaname = teahouseData:getOwnerName()
    local teanum = string.format("%06d", TeaHouse.manager.teahouseData:getTeaHousePwd())
    self.propnum = propnum
    local textStr = "<font face='cocosStudio/Common/Font/fangzhengcuyuan.TTF' size='56' color='#B97345'>是否向<font color='#FF0000'>"
                        .. teaname .. "</font><font color='#B97345'>比赛场(</font><font color='#FF0000'>"..teanum
                        .."</font><font color='#B97345'>)\n添加</font><font color='#FF0000'>"..propnum
                        .."</font><font color='#B97345'>张房卡</font></font>"
    local richText = ccui.RichText:createWithXML(textStr, { })
    richText:setAnchorPoint(cc.p(0.5, 0.5))
    richText:ignoreContentAdaptWithSize(false)
    richText:setContentSize(800,500)
    richText:setHorizontalAlignment(cc.VERTICAL_TEXT_ALIGNMENT_CENTER)
    richText:setPosition(0,50)
    self._textTextMsg:addChild(richText)
end

function TeaHouseTwiceConfirmTip:onCloseClicked(send, eventType)
    TeaHouse.UITool.onDefaultButtonClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_93)
end

function TeaHouseTwiceConfirmTip:onSureClicked(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then return end
    self:rechargeCardToTeaHouse(self.propnum)
    self:close()
    TeaHouse.throwDataManager:throwDataClick(XH.ThrowDataDefine.Tea_92)
end

--副领队划大厅卡(副领队自己购买的卡)到领队的比赛场里
function TeaHouseTwiceConfirmTip:rechargeCardToTeaHouse(rechargeNum)
    local teahouseData = TeaHouse.manager.teahouseData
    local netReqSubProp = TeaHouse.manager.reqManager:createReq("NetReqSubProp")
    netReqSubProp:addReqCallBack(self, self.onRespSubPropCallBack)
    netReqSubProp:start(teahouseData:getTeaNumber(), rechargeNum, 10)
    return true
end

--请求增加比赛场房卡回调
function TeaHouseTwiceConfirmTip:onRespSubPropCallBack(req, type, data)
    if type == TeaHouse.Req.TYPE.SUCCESS then
        if data.nCurSubPropCnt then
            local teahouseData = TeaHouse.manager.teahouseData
            teahouseData:setSelfPropcount(teahouseData:getSelfPropcount() + data.nCurSubPropCnt, teahouseData:getTeaNumber()) --总划卡数
            TeaHouse.BridgeData.reqPlayerDrop()
            TeaHouse.TipTool.showToast("划卡成功")
            TeaHouse.manager.viewManager:closeView("TeaHouseRemodelModifyInventory")
        end
    else
        TeaHouse.TipTool.showTip({ type = TeaHouse.TipTool.TIP_TYPE.OK }, req:getMessage())
    end
end

return TeaHouseTwiceConfirmTip
