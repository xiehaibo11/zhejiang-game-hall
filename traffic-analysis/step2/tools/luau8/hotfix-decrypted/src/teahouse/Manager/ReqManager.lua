---@class ReqManager 请求管理
local ReqManager = class("ReqManager")

---@param path string 模块路径
function ReqManager:ctor(path)
    ---模块路径
    self._path = path
end

function ReqManager:reset()

end

---创建调用
---@param reqName string
---@return Req
function ReqManager:createReq(reqName)
    local ok, Req = xpcall(function()
        return require(self._path .. reqName)
    end, __G__TRACKBACK__)
    if not ok then
        return nil
    end

    return Req.new()
end

return ReqManager 