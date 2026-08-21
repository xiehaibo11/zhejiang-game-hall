local strConf = {}


local DEBUG = true

--检查是否有重复的value
local function checkValue()
	
	if DEBUG then
		local vd = {}
		for k, v in pairs(strConf) do
			assert(vd[v] == nil, "ERROR:重复的值:", v, "key:", k, "lastKey", vd[v])
			vd[v] = k
		end
	end
end

checkValue()

local ConstString = {}

--根据ID寻找字符串， 并格式化输出
function ConstString.getStr(strID, ...)
	local str = strConf[strID]
	if not str then
		--print("ERROR:无法在ConstantString中找到:", strID, debug.traceback())
        if not ... then
            return strID
        end
		return string.format(strID, ...)
	end
	return string.format(str, ...)
end

--添加字符串配置
function ConstString.addConf(dic)
    for k, v in pairs(dic) do
        --检测是否覆盖
        if DEBUG then
            local oriVal = strConf[k]
            if oriVal then
                print("ConstString: overwrite original value:", oriVal, " by ", v)
            end
        end
        strConf[k] = v
    end
end

function ConstString.getStrConf()
    return strConf
end

return ConstString
