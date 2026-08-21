local TeachingGiftModule = class("TeachingGiftModule", XH.ModuleBase)

function TeachingGiftModule:ctor()
    TeachingGiftModule.super.ctor(self)
    self._actId = 0
    self._afterFist = false
    self._gift = {}
end

function TeachingGiftModule:getReqConfig()
    return {
        ReqGetTeachingInfo = {reqPath = XH.goldLobbyRootPath .. ".Modules.TeachingGift.ReqGetTeachingInfo", callBack = self.respGetTeachingInfo},
        ReqCompleteTeaching = {reqPath = XH.goldLobbyRootPath .. ".Modules.TeachingGift.ReqCompleteTeaching", callBack = self.respCompleteTeaching}
    }
end

function TeachingGiftModule:getProxyEvents()
    return {}
end

function TeachingGiftModule:onLoginSuccess()
    if self._actId == 0 then
        return
    end
end

function TeachingGiftModule:setActivityId(actId)
    self._actId = actId
    self:reqGetTeachingInfo()
end

function TeachingGiftModule:reqGetTeachingInfo()
    self._gift = {}
    if self._actId > 0 then
        local data = {
            actId = self._actId
        }
        self:startReq("ReqGetTeachingInfo", data, 5)
    end
end

function TeachingGiftModule:respGetTeachingInfo(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        self._gift = data.rewards
    end
    -- if #self._gift > 0 then
    --     self:reqCompleteTeaching(2)
    -- end
end

-- finish 1: 完成 可以领奖  2: 中途有退出也算完成 但没有奖励
function TeachingGiftModule:reqCompleteTeaching(finish, cb)
    self._cb = cb
    if self._actId > 0 then
        local data = {
            actId = self._actId,
            finish = finish
        }
        self:startReq("ReqCompleteTeaching", data, 5)
    end
end

function TeachingGiftModule:respCompleteTeaching(req, type, data)
    if type == XH.Req.TYPE.SUCCESS then
        if self._cb then
            self._cb(data.rewards)
        end
    else
        if self._cb then
            self._cb({})
        end
    end
    self._gift = {}
end

function TeachingGiftModule:getGifts()
    return self._gift
end

function TeachingGiftModule:getAfterTeachingFirst()
    return self._afterFist
end

-- 是否新手引导后首局
function TeachingGiftModule:setAfterTeachingFirst(data)
    self._afterFist = data
end

function TeachingGiftModule:getDarkShuangKouTeachingABTest()
    -- 全开，不读后台配置了
    return true
end

return TeachingGiftModule
