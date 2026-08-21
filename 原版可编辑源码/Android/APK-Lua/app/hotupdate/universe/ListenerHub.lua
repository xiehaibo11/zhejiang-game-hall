local ListenerHub = {}

local hubMeta = {
    __index = function (t, k)
        local func = function(self, ...)
            local tTargets = table.shallow_copy(self._targets)
            for _,v in ipairs(tTargets) do
                v[k](v, ...)
            end
        end
        t[k] = func
        return func
    end
}

local function add(hub, target)
    if target then
        table.insert(hub._targets, target)
    end
end

local function remove(hub, target)
    for i,v in ipairs(hub._targets) do
        if v == target then
            table.remove(hub._targets, i)
            return
        end
    end
end

local function clear(hub)
    hub._targets = {}
end

function ListenerHub.new()
    local hub = {}
    
    hub.add = add
    hub.remove = remove
    hub.clear = clear

    hub.__eventFunc = {}
    hub._targets = {}
    setmetatable(hub, hubMeta)
    
    return hub
end

un.ListenerHub = ListenerHub