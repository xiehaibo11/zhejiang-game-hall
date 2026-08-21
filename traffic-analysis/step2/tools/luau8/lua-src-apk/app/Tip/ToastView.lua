local ToastView = class("ToastView",XH.ViewBase)

local DEFAULT_TIME = 4 --默认持续时间
local DEFAULT_POS_RATE = 0.5 --出现的高度
local DEFAULT_WIDTH = 100 --左右留白

function ToastView:getCSBPath()
    return "cocosStudio/Common/TipLayer/CSB/ToastView.csb"
end

function ToastView:getBindingInfo()
    return {
        ["_KW_IMAGE_BG"] = {varName="_uImgBg"},
        ["_KW_TEXT_CONTENT"] = {varName="_uLabel"}, 
    }
end

function ToastView:ctor(str, id, time)
    ToastView.super.ctor(self)
    self._content = ""
    self._isAlive = false
    self._id = id or 0
    self._maxAliveTime = DEFAULT_TIME
    self:setup(str,time)
end

--设置内容和显示时间
function ToastView:setup(str, time)
    self._maxAliveTime = time or DEFAULT_TIME
    self._content = str or ""
    self:updateUI()
end

function ToastView:updateUI()
    self._uLabel:setString(self._content)
    local txtSize = self._uLabel:getContentSize()
    local imageSize = self._uImgBg:getContentSize()
    self._uImgBg:setContentSize(txtSize.width + DEFAULT_WIDTH, imageSize.height)

    local winSize = cc.Director:getInstance():getWinSize()
    self:setPosition(winSize.width / 2, winSize.height * DEFAULT_POS_RATE)
end

--移除toast
function ToastView:hideSelf()
    self._isAlive = false
    self:close()
end

--展示一个toast
function ToastView:showSelf(zorder)
    local parent = self:getParent()
    if parent == nil then
        self:addToScene(zorder)
    end
    self._isAlive = true
    self:setVisible(true)
end

--添加到当前场景,不显示出来
function ToastView:addToScene(zorder)
    zorder = zorder or 10001
    local parent = display.getRunningScene()
    self:setName("ToastView")
    self:setVisible(false)
    parent:addChild(self, zorder)
end

--获取最长存在时间
function ToastView:getMaxAliveTime()
    return self._maxAliveTime
end

--唯一标识
function ToastView:getID()
    return self._id
end

function ToastView:setAlive(isAlive)
    self._isAlive = isAlive or false
end

function ToastView:getAlive()
    return self._isAlive
end

--获取toast的大小
function ToastView:getSize()
    return self._uImgBg:getContentSize()
end

return ToastView�