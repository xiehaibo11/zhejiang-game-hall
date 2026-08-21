local ProcessorHolder = {}

local processors = {}
local refCounts = {}

function ProcessorHolder.obtain(manager, key, rootPath, workPath, localManifestPath, prefix, downloadPriority, isFirst, isPreferZip)
    local psr = processors[key]
    if psr then
        refCounts[key] = refCounts[key] + 1
    else
        psr = un.hotfix.HotFixProcessor.new(key, rootPath, workPath, localManifestPath, prefix, downloadPriority, isFirst, isPreferZip)
        processors[key] = psr
        refCounts[key] = 1
    end
    local listener = psr:getListener()
    listener:add(manager)
    return psr
end

local function clear_processor_listeners(psr)
    local listener = psr:getListener()
    if listener then
        listener:clear()
    end
end

function ProcessorHolder.release(manager, key)
    local psr = processors[key]
    if psr then
        local ref = refCounts[key]
        if ref then
            if ref == 1 then
                clear_processor_listeners(psr)
                processors[key] = nil
                refCounts[key] = nil
            else
                refCounts[key] = ref - 1
                local listener = psr:getListener()
                if listener then
                    listener:remove(manager)
                end
            end
        else
            clear_processor_listeners(psr)
            processors[key] = nil
        end
    else
        refCounts[key] = nil
    end
end

un.hotfix.processorHolder = ProcessorHolder�