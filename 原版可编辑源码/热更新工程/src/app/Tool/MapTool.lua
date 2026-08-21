-- wgs84_to_gcj02.lua

local math = math
local abs, sqrt, sin, cos, atan2, log = math.abs, math.sqrt, math.sin, math.cos, math.atan2, math.log

-- 判断是否在中国范围内（粗略）
local function out_of_china(lat, lng)
    if lng < 72.004 or lng > 137.8347 then
        return true
    end
    if lat < 0.8293 or lat > 55.8271 then
        return true
    end
    return false
end

-- 计算偏移量
local function transform_lat(x, y)
    local ret = -100.0 + 2.0 * x + 3.0 * y + 0.2 * y * y + 0.1 * x * y + 0.2 * sqrt(abs(x))
    ret = ret + (20.0 * sin(6.0 * x * math.pi) + 20.0 * sin(2.0 * x * math.pi)) * 2.0 / 3.0
    ret = ret + (20.0 * sin(y * math.pi) + 40.0 * sin(y / 3.0 * math.pi)) * 2.0 / 3.0
    ret = ret + (160.0 * sin(y / 12.0 * math.pi) + 320 * sin(y * math.pi / 30.0)) * 2.0 / 3.0
    return ret
end

local function transform_lng(x, y)
    local ret = 300.0 + x + 2.0 * y + 0.1 * x * x + 0.1 * x * y + 0.1 * sqrt(abs(x))
    ret = ret + (20.0 * sin(6.0 * x * math.pi) + 20.0 * sin(2.0 * x * math.pi)) * 2.0 / 3.0
    ret = ret + (20.0 * sin(x * math.pi) + 40.0 * sin(x / 3.0 * math.pi)) * 2.0 / 3.0
    ret = ret + (150.0 * sin(x / 12.0 * math.pi) + 300.0 * sin(x / 30.0 * math.pi)) * 2.0 / 3.0
    return ret
end

-- WGS-84 转 GCJ-02
function wgs84_to_gcj02(wgs_lat, wgs_lng)
    if out_of_china(wgs_lat, wgs_lng) then
        return wgs_lat, wgs_lng
    end

    local d_lat = transform_lat(wgs_lng - 105.0, wgs_lat - 35.0)
    local d_lng = transform_lng(wgs_lng - 105.0, wgs_lat - 35.0)

    local rad_lat = wgs_lat / 180.0 * math.pi
    local magic = sin(rad_lat)
    magic = 1 - 0.00669342162296594323 * magic * magic
    local sqrt_magic = sqrt(magic)

    d_lat = (d_lat * 180.0) / ((6378137.0 * (1 - 0.00669342162296594323)) / (magic * sqrt_magic) * math.pi)
    d_lng = (d_lng * 180.0) / (6378137.0 / sqrt_magic * cos(rad_lat) * math.pi)

    local gcj_lat = wgs_lat + d_lat
    local gcj_lng = wgs_lng + d_lng

    return gcj_lat, gcj_lng
end

-- 导出
return {
    wgs84_to_gcj02 = wgs84_to_gcj02
}