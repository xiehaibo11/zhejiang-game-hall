local AskIDManager = class("AskIDManager")

function AskIDManager:ctor()
    self._askID = 1000 -- 默认给一个初始值，为了避免和其他冲突，从一个稍大的值开始
end

function AskIDManager:getAskID()
    self._askID = self._askID + 1
    return self._askID
end

return AskIDManager
<