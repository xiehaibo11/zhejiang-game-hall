-- BtnBase.lua
-- 定义 BtnBase 类，继承自 XH.Bridge.ViewBase
local BtnBase = class("BtnBase", XH.Bridge.ViewBase)
local LocalConfig = import("..Configs.LocalConfig")
local Utils = import("..Tool.Utils")
local BtnGroupManager = import("..Manager.BtnGroupManager")

-- 获取 CSB 文件路径，子类需要重写此方法
function BtnBase:getCSBPath()
    return nil
end

-- 获取绑定信息，子类需要重写此方法
function BtnBase:getBindingInfo()
    return {}
end

-- 获取代理事件列表
function BtnBase:getProxyEvents()
    return {
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_CHANGE_BTN_VISIBLE", callBack = "onChangeBtnVisible"},
        {module = XH.Bridge:getModule("GoldNew"), eventKeyName = "EVENT_SIMULATE_BTN_CLICK", callBack = "onSimulateClick"}
    }
end

-- 初始化 CSB 文件
function BtnBase:onInitCSB(csbPath)
    self._csbRoot = ccui.Layout:create()
    self:setAnchorPoint(cc.p(0.5, 0.5))
    self:setContentSize(self:getCfgSize())
    self:addChild(self._csbRoot)
end

-- 构造函数
function BtnBase:ctor(id, areaId, cfg)
    BtnBase.super.ctor(self, id, cfg) -- 调用父类构造函数
    self._id = id
    self._areaId = areaId or "-1"
    self._data = cfg or {}

    self:setCascadeOpacityEnabled(true)
    self:addTouchEvent() -- 添加触摸事件
    -- self:addTestNode() -- 添加测试节点
    self:initIcon(self._data.icon) -- 初始化图标
end

function BtnBase:getCfgSize()
    return cc.size(120, 120)
end

function BtnBase:getGroupName()
    return self._data.group
end

-- 添加触摸事件
function BtnBase:addTouchEvent()
    -- self:setTouchEnabled(true)
    -- self:addTouchEventListener(function(sender, eventType)
    --     if eventType == ccui.TouchEventType.began then
    --         -- 触摸开始事件处理
    --     elseif eventType == ccui.TouchEventType.ended or eventType == ccui.TouchEventType.canceled then
    --         -- 触摸结束或取消事件处理
    --     end
    --     if eventType ~= ccui.TouchEventType.ended then
    --         return
    --     end
    --     self:onClick() -- 触摸结束时调用点击事件处理函数
    -- end)

    XH.UIButton.create(self, nil, handler(self, self.onClick))
    -- self:setClickCallBack(function(send, eventType)
    --     if eventType ~= ccui.TouchEventType.ended then
    --         return
    --     end
    --     self:onClick()
    -- end)
end

-- 获取图标 ImageView 对象
function BtnBase:getImageIcon()
    if self._imgIcon then
        return self._imgIcon
    else
        local iv = ccui.ImageView:create()
        local size = self:getContentSize()
        iv:setContentSize(size.width, size.height)
        iv:setPosition(size.width / 2, size.height / 2)
        iv:setCascadeOpacityEnabled(true)
        self:addChild(iv)
        self._imgIcon = iv
        return iv
    end
end

-- 初始化图标
function BtnBase:initIcon(name)
    -- 防止释放
    cc.SpriteFrameCache:getInstance():addSpriteFrames(XH.Bridge:getImgResPath("ActBtns/_Plist.plist"))
    if name and name ~= "" then
        local find = string.find(name, "http")
        if find then
            Utils:setImgUrl(self, name) -- 设置远程图片
            if self._imgIcon then
                self._imgIcon:setVisible(false) -- 隐藏本地图标
            end
        else
            local spriteFrame = cc.SpriteFrameCache:getInstance():getSpriteFrameByName(name)
            if spriteFrame then
                local icon = self:getImageIcon()
                icon:loadTexture(name, ccui.TextureResType.plistType) -- 加载本地图标
                icon:setVisible(true)
                if self.__uiRemoteImage then
                    self.__uiRemoteImage:setVisible(false) -- 隐藏远程图标
                end
            end
        end
    else
        local defaultCfg = LocalConfig.BTN_CFG[self._id]
        if defaultCfg and defaultCfg.res and defaultCfg.res ~= "" then
            local icon = self:getImageIcon()
            icon:loadTexture(defaultCfg.res, ccui.TextureResType.plistType)
        end
    end
end

-- 设置菜单
function BtnBase:setMenu(menu)
    self._menu = menu
end

-- 通过业务逻辑判断是否显示
function BtnBase:getLogicShow()
    return self._data.defaultShow ~= false
end

-- 检查按钮是否显示，按钮的显示一定要调用此方法，否则同一组的按钮刷新会有问题
function BtnBase:checkShow(isFromGroup)
    if self._isLimitShow then
        return self:setVisible(false)
    end
    self:setVisible(self:getLogicShow()) -- 设置按钮可见性
    if not isFromGroup then
        self:updateGroupBtnShow()
    end
end

function BtnBase:updateGroupBtnShow()
    if self:getGroupName() ~= nil then
        BtnGroupManager:flushBtnVisible(self:getGroupName())
    end
end

-- 获取排序值
function BtnBase:getSortValue()
    return self._data.sortValue[1]
end

-- 显示线条（子类可以重写此方法）
function BtnBase:showLine()
end

-- 添加测试节点
function BtnBase:addTestNode()
    -- 创建一个黑色的 LayerColor 作为测试节点
    local layer = cc.LayerColor:create(cc.c4b(0, 0, 0, 255), 100, 100)
    self:addChild(layer)

    -- 创建一个显示按钮 ID 的标签
    local txt = cc.Label:createWithSystemFont("test", "Arial", 30)
    local size = self:getContentSize()
    txt:setPosition(size.width / 2, size.height / 2)
    txt:setString("" .. self._id)
    self:addChild(txt)
end

-- 点击事件处理
function BtnBase:onClick()
    print(self._id) -- 打印按钮 ID
    self:throwClickData()
    local defaultCfg = LocalConfig.BTN_CFG[self._id]
    if self._data.view then
        XH.Bridge.viewManager:openView(self._data.view, nil, self._data.openParam) -- 打开指定视图
    elseif self._data.script then
        local luaString = "return {" .. self._data.script .. "}"
        local func = loadstring(luaString)
        func() -- 执行指定脚本
    elseif defaultCfg and defaultCfg.view then
        XH.Bridge.viewManager:openView(defaultCfg.view, nil, defaultCfg.openParam)
    end
end

function BtnBase:throwClickData()
    local eventKey = "xjb25022806"
    if LocalConfig.BTN_AREA_ID.MAIN_TOP_ACT == self._areaId or LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT == self._areaId or
        LocalConfig.BTN_AREA_ID.CHOOSEROOM_TOP_ACT == self._areaId then
        eventKey = "xjb25022803"
    end
    local defaultCfg = LocalConfig.BTN_CFG[self._id] or {name = ""}
    local name = defaultCfg.name
    XH.Bridge:throwData(eventKey, {page_label = name, block_item_id = self._areaId .. (self._idx or 0)})
end

function BtnBase:setIdx(idx, isLimitShow)
    self._idx = idx
    self._isLimitShow = isLimitShow
end

-- 检查按钮是否全屏显示
function BtnBase:isFullScreen()
    return false
end

-- 模拟点击事件处理
function BtnBase:onSimulateClick(event)
    if not event.done and self.onClick then
        local data = event.msg
        if data and data.btnID == self._id then
            self:onClick(false) -- 调用点击事件处理函数
            event.done = true
            event:stop() -- 停止事件传播
        end
    end
end

-- 改变按钮可见性事件处理
function BtnBase:onChangeBtnVisible(event)
    local data = event.msg
    if data and data.btnID == self._id then
        self:setVisible(data.visible) -- 设置按钮可见性
    end
end

function BtnBase:initSpine(spineInfo, parent)
    if not spineInfo then
        return
    end
    spineInfo.path = LocalConfig.IMG_PATH.SPINE_ROOT .. spineInfo.path
    local armature = display.playDargonBonesSpine(spineInfo)
    if armature then
        parent = parent or self
        armature:setPosition(cc.p(parent:getContentSize().width / 2, parent:getContentSize().height / 2))
        parent:addChild(armature)
    end
end

function BtnBase:initArmature(aniInfo)
    if not aniInfo or not aniInfo.File or not aniInfo.ArmatureName or not aniInfo.AniName then
        return
    end
    if not cc.FileUtils:getInstance():isFileExist(aniInfo.File) then
        return
    end
    ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniInfo.File)
    local armature = ccs.Armature:create(aniInfo.ArmatureName)
    self:addChild(armature)
    armature:setAnchorPoint(cc.p(0.5, 0.5))
    local size = self:getContentSize()
    armature:setPosition(cc.p(self:getContentSize().width / 2, self:getContentSize().height / 2))
    armature:getAnimation():play(aniInfo.AniName, -1, 1)
    if aniInfo.iconAniScale then
        armature:setScale(aniInfo.iconAniScale)
    end
end

function BtnBase:isAutoInMid()
    return false
end
return BtnBase
