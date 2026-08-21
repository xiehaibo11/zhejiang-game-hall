local PropsData = class("PropsData", XH.ModuleBase)

PropsData.packageID = {
    Lobby32Game = 1,    --企业包
    ZheJiangGame = 2,   --浙江包
    FrameworkGame = 3,  --框架包
}

function PropsData:ctor()
    PropsData.super.ctor(self)
    self:initDatas()
end

function PropsData:initDatas()
    -- 自定义道具配置
    self._extendPropsConfig = {}
    --配置按propsid分类
    self._extendPropsConfigByPropid = {}
    --配置按props_tag_id分类
    self._extendPropsConfigByProptag = {}
end

function PropsData:setExtendPropsConfig(extendPropsConfig)
    if not extendPropsConfig then
        return
    end
    self._extendPropsConfig = clone(extendPropsConfig)
    --整理一下数据
    self:_devideExtendPropsConfigByPropid()
    self:_devideExtendPropsConfigByProptag()
end

function PropsData:_devideExtendPropsConfigByPropid()
    for _, rec in pairs(self._extendPropsConfig) do
	    self._extendPropsConfigByPropid[rec.propsid] = rec
    end
end

function PropsData:_devideExtendPropsConfigByProptag()
    for _, rec in pairs(self._extendPropsConfig) do
        if not self._extendPropsConfigByProptag[rec.props_tag_id] then
            self._extendPropsConfigByProptag[rec.props_tag_id] = {}
        end
	    table.insert(self._extendPropsConfigByProptag[rec.props_tag_id], rec)
    end
end

function PropsData:getExtendPropsConfig()
    return self._extendPropsConfig
end

function PropsData:getExtendPropsConfigByPropid(propId)
    if not propId then
        return self._extendPropsConfigByPropid
    end
    return self._extendPropsConfigByPropid[propId]
end

function PropsData:getExtendPropsConfigByPropTag(propTag)
    if not propTag then
        return self._extendPropsConfigByProptag
    end
    return self._extendPropsConfigByProptag[propTag]
end

--获取道具的图片下载链接
function PropsData:getExtendPropImgUrlByPropid(propId)
    if not propId then
        return ""
    end
    local propItemConfig = self:getExtendPropsConfigByPropid(propId)
    if not propItemConfig then
        return ""
    end
    for _, var in pairs(propItemConfig.props_img) do 
        if tonumber(var.package_id) == PropsData.packageID.ZheJiangGame then
            return var.img[1].img_url
        end
    end
    return ""
end

--获取道具的名字
function PropsData:getExtendPropNameByPropid(propId)
    if not propId then
        return ""
    end
    local propItemConfig = self:getExtendPropsConfigByPropid(propId)
    if not propItemConfig then
        return ""
    end
    return propItemConfig.props_tag_name
end

function PropsData:getExtendPropTagIdByPropid(propId)
    if not propId then
        return ""
    end
    local propItemConfig = self:getExtendPropsConfigByPropid(propId)
    if not propItemConfig then
        return ""
    end
    return propItemConfig.props_tag_id
end

return PropsData
