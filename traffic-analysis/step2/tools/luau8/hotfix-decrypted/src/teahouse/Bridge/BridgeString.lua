---@class BridgeString
local BridgeString = {}

function BridgeString.getFrontStringByFlag(str, cFlag)
    return XH.StringTool.getFrontStringByFlag(str, cFlag)
end

function BridgeString.getBackStringByFlag(str, cFlag)
    return XH.StringTool.getBackStringByFlag(str, cFlag)
end

function BridgeString.splitWithTrim(str, delim)
    return XH.StringTool.splitWithTrim(str, delim)
end

function BridgeString.getNumberSuffixByString(str)
    return XH.StringTool.getNumberSuffixByString(str)
end

function BridgeString.getNumberPrefixByString(str)
    return XH.StringTool.getNumberPrefixByString(str)
end

function BridgeString.cutStringByLength(str, len)
    return XH.StringTool.cutStringByLength(str, len)
end

function BridgeString.replaceMatchStr(str)
    return XH.StringTool.replaceMatchStr(str)
end

return BridgeStringZ