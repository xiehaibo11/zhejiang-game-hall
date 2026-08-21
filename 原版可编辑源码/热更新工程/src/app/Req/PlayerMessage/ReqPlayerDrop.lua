local ReqPlayerDrop = class("ReqPlayerDrop", XH.ReqProtocol)

function ReqPlayerDrop:ctor()
    ReqPlayerDrop.super.ctor(self) 
end


function ReqPlayerDrop:start(gameID,srsgroupid,timeout) 
    if ReqPlayerDrop.super.start(self, timeout,srsgroupid) == false then
        return
    end
    local reqPlayerPropsData = XH.ToolProtocol.ReqPlayerPropsData:new()--��ȡ�Ƹ�
    reqPlayerPropsData.gameid = gameID
    reqPlayerPropsData.askid = 1
    self:sendMsg(reqPlayerPropsData, XH.ToolProtocol.RespPlayerPropsData, srsgroupid, 0)
end

function ReqPlayerDrop:onMsgReceive(msgData)
    if msgData.flag == XH.ToolProtocol.RespPlayerPropsData.FLAG.SUCCESS then
        self:success(msgData)
    else
        local msg = self:getErrInfoMsg(msgData.flag)   
        print("error "..msg)
        self:setMessage(msg)
        self:fail()
    end
end

function ReqPlayerDrop:getErrInfoMsg(flag)
    if flag then
         for i,v in pairs(XH.ToolProtocol.RespPlayerPropsData.FLAG) do
            if flag == v then
                print(v)
                return XH.ConstString.getStr(i)
            end
         end
    end
    return ""
end

return ReqPlayerDrop