un.instance = function ()
    local t = {}

    t.__index = t
    t.new = function (...)
        local instance = {}
        setmetatable(instance, t)
        instance:ctor(...)
        return instance 
    end

    return t
end
