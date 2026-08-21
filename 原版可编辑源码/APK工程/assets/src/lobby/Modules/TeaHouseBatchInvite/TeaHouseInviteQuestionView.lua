local TeaHouseInviteQuestionView = class("TeaHouseInviteQuestionView",XH.ViewBase)
local LOBBY_BATCH_INVITE_QUE_ANS = "LOBBY_BATCH_INVITE_QUE_ANS_"

function TeaHouseInviteQuestionView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/TeaBatchInvite/TeaBatchQuestionLayer.csb"
end

function TeaHouseInviteQuestionView:getBindingInfo()
    return {
        ["_KW_IMG_BG"] = { varName = "_bg" },
        ["_KW_BTN_REFUSE"] = { varName = "_btnRefuse", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventRefuse" },
        ["_KW_BTN_AGREE"] = { varName = "_btnAgree", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventAgree" },
        ["_KW_IMG_HEAD"] = { varName = "_imgHead", type = XH.UI_TYPE.REMOTEIMAGE },
        ["_KW_CHECK_BOX_NODE_"] = { varName = "_checkBox_", beginIndex = 1, endIndex = 4 ,type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventCheckBtn"}
    }
end

function TeaHouseInviteQuestionView:ctor(param)
    param = param or {}
    TeaHouseInviteQuestionView.super.ctor(self, param)
    self._info = param.teaHouseInfo
    self._selectItem = {}
end

function TeaHouseInviteQuestionView:onTouchEventRefuse(send,eventType)
    local isCheck = false
    for _,v in pairs(self._selectItem) do
        if v then
            isCheck = true
        end
    end
    if isCheck then
        XH.lobby:getModule("TeaHouseBatchInvite"):reqDealRecomendInvitation(self._info.teaappid, false, self._info.numid, self._info.teaid)
    else
        XH.TipTool.showToast("请至少选择一个理由", 2)
        return
    end 
    for k,v in pairs(self._selectItem) do
        if v then
            XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable[LOBBY_BATCH_INVITE_QUE_ANS .. k])
        end
    end 
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BATCH_INVITE_QUE_REFUSE)
    self:close()
end

function TeaHouseInviteQuestionView:onTouchEventAgree(send,eventType)
    XH.lobby:getModule("TeaHouseBatchInvite"):reqDealRecomendInvitation(self._info.teaappid, true, self._info.numid, self._info.teaid)
    self:close()
    XH.throwDataManager:recordButtonClick(XH.ThrowDataDefine.ButtonEnumTable.LOBBY_BATCH_INVITE_QUE_AGREE)
end

function TeaHouseInviteQuestionView:onTouchEventCheckBtn(send, eventType)
    local bottonName = send:getName()
    local splitStr = string.split(bottonName, "_")
    local num = splitStr[#splitStr]
    self._selectItem[num] = send:isSelected()
end

return TeaHouseInviteQuestionView