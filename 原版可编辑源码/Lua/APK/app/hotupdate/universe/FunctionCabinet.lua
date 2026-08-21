local FunctionCabinet = un.instance()

function FunctionCabinet:ctor()
    self._map = {}
end

function FunctionCabinet:put(name, func)
    self._map[name] = func
end

function FunctionCabinet:call(name, ...)
    local func = self._map[name]
    if func then
        self._map[name] = nil
        func(...)
    end
end

un.FunctionCabinet = FunctionCabinet