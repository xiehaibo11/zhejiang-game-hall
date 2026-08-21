
local ReqPlayerGoldCoin = class("ReqPlayerGoldCoin", XH.ReqProtocol)

function ReqPlayerGoldCoin:ctor()
    ReqPlayerGoldCoin.super.ctor(self) 
end


function ReqPlayerGoldCoin:start(gameID,srsgroupid,timeout) 
    if ReqPlayerGoldCoin.super.start(self, timeout,srsgroupid) == false then
        return
    end
    local reqSr = XH.ToolProtocol.ReqSR:new()--��ȡ�Ƹ�
    reqSr.gameid = gameID
    reqSr.askid = 0
    self:sendMsg(reqSr, XH.ToolProtocol.ResSR, srsgroupid, 0)
end

function ReqPlayerGoldCoin:onMsgReceive(msgData)
    if msgData.flag == XH.ToolProtocol.ResSR.FLAG.SUCCESS then
        self:success(msgData)
    else
        local msg = self:getErrInfoMsg(msgData.flag)   
        print("error "..msg)
        self:setMessage(msg)
        self:fail()
    end
end

function ReqPlayerGoldCoin:getErrInfoMsg(flag)
    if flag then
         for i,v in pairs(XH.ToolProtocol.ResSR.FLAG) do
            if flag == v then
                print(v)
                return XH.ConstString.getStr(i)
            end
         end
    end
    return ""
end

return ReqPlayerGoldCoinl