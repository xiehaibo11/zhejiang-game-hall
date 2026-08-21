local ReqPlayerPlace33And50 = class("ReqPlayerPlace33And50", XH.Req)
local ReqPlayerPosition33 = require("lobby.Req.Room.ReqPlayerPosition")
local ReqPlayerPosition50 = require("lobby.Req.Room.ReqPlayerPosition50")
function ReqPlayerPlace33And50:ctor()
    ReqPlayerPlace33And50.super.ctor(self)
    self._isIn33 = nil 
    self._isIn50 = nil--如果50还没上线，想在正式环境测试互斥的情况，就把它=false
    if XH.isEmbeddedApp() then
        self._isIn33 = false
    end
end

function ReqPlayerPlace33And50:start(timeoutTime)
    if ReqPlayerPlace33And50.super.start(self, timeoutTime) == false then
        return
    end
    if not XH.isEmbeddedApp() then
        local reqPlayerPosition33 = ReqPlayerPosition33.new()
        reqPlayerPosition33:addReqCallBack(self, self.onReqPlayerPosition33)
        reqPlayerPosition33:start(30116,0,0,XH.areaData:getGoldSrsGroupID(),self:getLeftTime())
    end

    local reqPlayerPosition50 = ReqPlayerPosition50.new()
    reqPlayerPosition50:addReqCallBack(self, self.onReqPlayerPosition50)
    reqPlayerPosition50:start(30116,0,0,XH.areaData:getGoldSrsGroupID(),self:getLeftTime())
end 

function ReqPlayerPlace33And50:onReqPlayerPosition33(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data[1] then 
            if data[1].gameappid > 0 and data[1].gameappid ~= 88888888 then 
                self._isIn33 = true
                self:fail(data)
                return 
            end 
        end
        self._isIn33 = false 
        self:trySuccess() 
    elseif ctype == XH.Req.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(self._inRoomData)
    elseif ctype == XH.Req.TYPE.TIMEOUT then
        self:setMessage(cell:getMessage())
        self:timeout(self._inRoomData)
    end
end


function ReqPlayerPlace33And50:onReqPlayerPosition50(cell, ctype, data)
    if ctype == XH.Req.TYPE.SUCCESS then
        if data[1] then 
            if data[1].roomid > 0 and data[1].gameappid == 88888888 then 
                self._isIn50 = true
                self:fail(data)
                return 
            end 
        end
        self._isIn50 = false
        self:trySuccess() 
    elseif ctype == XH.Req.TYPE.FAIL then
        self:setMessage(cell:getMessage())
        self:fail(self._inRoomData)
    elseif ctype == XH.Req.TYPE.TIMEOUT then
        self:setMessage(cell:getMessage())
        self:timeout(self._inRoomData)
    end
end

function ReqPlayerPlace33And50:trySuccess()
    if self._isIn33 == nil then 
        return 
    end 
    if self._isIn50 == nil then 
        return 
    end 
    if self._isIn33 == false and self._isIn50 == false then 
        self:success()
    end
end 

function ReqPlayerPlace33And50:isIn50()
    if self._isIn50 and self._isIn50 == true then 
        return true 
    else 
        return false 
    end
end 

function ReqPlayerPlace33And50:isIn33()
    if self._isIn33 and self._isIn33 == true then 
        return true 
    else 
        return false 
    end
end 

return ReqPlayerPlace33And50



            h