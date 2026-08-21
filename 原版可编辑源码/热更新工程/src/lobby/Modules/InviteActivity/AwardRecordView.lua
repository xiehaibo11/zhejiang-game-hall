local BaseView = import(".InviteRecordView")
local AwardRecordView = class("AwardRecordView", BaseView)
local Utils = require("lobby.Modules.GoldNew.Tool.Utils")

function AwardRecordView:getCSBPath()
    return "cocosStudio/hall/CSB/Activity/Invite/InviteAwardRecordLayer.csb"
end

function AwardRecordView:getProxyEvents()
    return {{module = self._module, eventName = "EVENT_INVITE_REWARD_RECORD", callBack = "refreshRecordData"}}
end

function AwardRecordView:firstReq()
    self._module:resetInviteAwardRecord()
    self._module:reqInviteAwardRecord({page = 0})
    XH.UITool.setText(self._body, "Text_1_1", "领奖记录")
end
function AwardRecordView:NextReq()
    self._module:reqInviteAwardRecord({page = self._module.curAwardPage + 1})
end

function AwardRecordView:updateInfo(item, info, idx)
    XH.UITool.setText(item, "txtTime", info.created_at)
    XH.UITool.setText(item, "txtName", string.gsub(info.prize_name, ";", "\n"))
end
return AwardRecordView
