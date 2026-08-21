local AnalyseTool = {}

-- 暂时先保留以下5个方法，后续直接删除。
function AnalyseTool:reportAcCollect(data)
end

function AnalyseTool:reportLuaError(data)
end

function AnalyseTool:reportMonitorPoint(type,data)
end

function AnalyseTool:sendLuaDebugLogo(data)
end

function AnalyseTool:reportTempMonitorPoint(type,data)
end

return AnalyseTool{