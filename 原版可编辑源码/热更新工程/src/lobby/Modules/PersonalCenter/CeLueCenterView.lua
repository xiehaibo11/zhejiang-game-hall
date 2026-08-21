local CeLueCenterView = class("CeLueCenterView", XH.ViewBase)

local PositionMove = 0

function CeLueCenterView:getCSBPath()
    return "cocosStudio/hall/CSB/window/YinSiCeLue/YsclCenterView.csb"
end

function CeLueCenterView:getBindingInfo()
    return{
        ["_KW_BTN_CLOSE"] = { varName = "_closeBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_LISTVIEW"] = { varName = "_listView" },
        ["_KW_PANEL_MODEL"] = { varName = "_panelModel" },
        ["_KW_TEXT_CONTENT"] = { varName = "_textModel" },
        ["_KW_PANEL_SYSM"] = { varName = "_sysmModel", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSysm" },
        ["_KW_IMG_QIPAO"] = { varName = "_qiPao" },
        ["_KW_TEXT_QIPAO"] = { varName = "_textQipao" },
        ["_KW_BTN_QXSZ"] = { varName = "_qxszBtn", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventQxsz" },
        ["_KW_BTN_ONOFF"] = { varName = "_qxszOnOff", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventSwitch" },
    }
end

local QuanConfigAndroid = {
    [1] = {
        ["qxName"] = "123",
        ["name"] = "设备信息权限",
        ["qipao"] = "用于区分玩家的唯一性和账号的登录，如不授权可能会造成账号错误/丢失等问题",
    },
    [2] = {
        ["qxName"] = "789",
        ["name"] = "设备麦克风权限",
        ["qipao"] = "用于玩家在指定场景下的语音信息录制，如不授权则无法使用语音功能",
    },
    [3] = {
        ["qxName"] = "910",
        ["name"] = "设备定位权限",
        ["qipao"] = "用于获取玩家的位置信息，防止距离过近的玩家进入游戏陈胜作弊行为，如不授权，则无法进入防作弊房间",
    },
    [4] = {
        ["qxName"] = "101",
        ["name"] = "设备存储权限",
        ["qipao"] = "用于玩家信息的本地存储，如不授权可能会导致游戏信息发生丢失",
    },
    [5] = {
        ["qxName"] = "912",
        ["name"] = "设备剪切板权限",
        ["qipao"] = "用于游戏内快速加入房间、比赛场，查看战绩，如不授权，则无法快速加入房间、比赛场，快速查看战绩",
        ["onOffSwitch"] = true
    }
}

local QuanConfigIos = {
    [1] = {
        ["qxName"] = "123",
        ["name"] = "设备信息权限",
        ["qipao"] = "用于区分玩家的唯一性和账号的登录，如不授权可能会造成账号错误/丢失等问题",
    },
    [2] = {
        ["qxName"] = "456",
        ["name"] = "设备相机权限",
        ["qipao"] = "用于玩家在指定场景下照片的拍摄和视频的录制，如不授权则无法在应用内调起相机功能",
    },
    [3] = {
        ["qxName"] = "789",
        ["name"] = "设备麦克风权限",
        ["qipao"] = "用于玩家在指定场景下的语音信息录制，如不授权则无法使用语音功能",
    },
    [4] = {
        ["qxName"] = "910",
        ["name"] = "设备定位权限",
        ["qipao"] = "用于获取玩家的位置信息，防止距离过近的玩家进入游戏陈胜作弊行为，如不授权，则无法进入防作弊房间",
    },
    [5] = {
        ["qxName"] = "912",
        ["name"] = "设备剪切板权限",
        ["qipao"] = "用于游戏内快速加入房间、比赛场，查看战绩，如不授权，则无法快速加入房间、比赛场，快速查看战绩",
        ["onOffSwitch"] = true
    }
}

function CeLueCenterView:ctor()
    CeLueCenterView.super.ctor(self)
    self:initUI()
end

--设置listview
function CeLueCenterView:initUI()
    local QuanConfig = nil
    if #QuanConfigAndroid > 4 then
        self._listView:setPositionY(self._listView:getPositionY() + PositionMove)
    end
    if device.platform == "android" or device.platform == "windows" then
        QuanConfig = QuanConfigAndroid
    elseif device.platform == "ios" then
        QuanConfig = QuanConfigIos
    end
    if QuanConfig then
        for _, value in pairs(QuanConfig) do
            local panel = self._panelModel:clone()
            panel:setName(value.qxName)
            XH.UITool.setText(panel, "_KW_TEXT_CONTENT", value.name)
            XH.UITool.setText(panel, "_KW_TEXT_QIPAO", value.qipao)
            if value.onOffSwitch then
                XH.UITool.setVisible(panel, "_KW_BTN_QXSZ", false)
                XH.UITool.setVisible(panel, "_KW_BTN_ONOFF", true)
                self:updateSwitchUI(panel)
            end
            self._listView:addChild(panel)
            panel:setVisible(true)
        end
        self._listView:setInnerContainerSize(cc.size(self._panelModel:getContentSize().width, #QuanConfig * self._panelModel:getContentSize().height))
    end
end

-- 点击权限设置
function CeLueCenterView:onTouchEventQxsz(send, eventType)
    XH.throwDataManager:throwDataClick(XH.ThrowDataDefine.MY_08)   
    if self:judgeVersion() then
        if device.platform == "ios" then
            XH.sdkManager:xhCallOCFunc("XHsysfunc", "sysfunc_jump_permission_system", "{}")
        elseif device.platform == "android" then
            XH.sdkManager:callFunction("jump_permission_system")
        end
    else
        XH.TipTool.showTip( {
            type = XH.TIP_LAYER_TYPE.OK,
        } , "该版本暂不支持跳转设置，请下载最新包！")
    end
end

--开关
function CeLueCenterView:onTouchEventSwitch(send,eventType)
    local parent = send:getParent()
    local a = parent:getName()
    if parent:getName() == "912" then
        -- 设备剪切板权限
        cc.UserDefault:getInstance():setBoolForKey("copy_allow", not cc.UserDefault:getInstance():getBoolForKey("copy_allow", false))
        self:updateSwitchUI(parent)
        return
    end

    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_PUSH_STATE, not XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PUSH_STATE, true))
    self:updateSwitchUI(parent)
    if device.platform == "android" then
        if XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PUSH_STATE, true) then
            XH.sdkManager:callFunction("getui_turn_on_push")
        else
            XH.sdkManager:callFunction("getui_turn_off_push")
        end
    end
end
-- 版本判断
function CeLueCenterView:judgeVersion()
    local getVersion = XH.SysTool:GetBundleVersion()
    if device.platform == "android" and getVersion < "1.0.3" then
        return false
    elseif device.platform == "ios" and getVersion < "1.0.45" then
        return false
    end
    return true
end

-- 点击使用说明
function CeLueCenterView:onTouchEventSysm(send, eventType)
    local getParent = send:getParent()
    XH.UITool.setVisible(getParent, "_KW_IMG_QIPAO", true)
    self:performWithDelay(function()
		XH.UITool.setVisible(getParent, "_KW_IMG_QIPAO", false)
	end, 3)
end

-- 关闭按钮
function CeLueCenterView:onTouchEventClose(send, eventType)
    self:close()
end

function CeLueCenterView:updateSwitchUI(node)
    -- cc.SpriteFrameCache:getInstance():addSpriteFrames("cocosStudio/hall/Image/yscl/yscl.plist")
    local isOn = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_PUSH_STATE, true)
    local imgName
    if node:getName() == "912" then
        isOn = cc.UserDefault:getInstance():getBoolForKey("copy_allow", false)
    end
    if isOn then
        imgName = "yscl_btn_no.png"
    else
        imgName = "yscl_btn_off.png"
    end
    XH.UITool.loadTexture(node, "_KW_BTN_ONOFF", imgName, ccui.TextureResType.plistType)
end

return CeLueCenterView
