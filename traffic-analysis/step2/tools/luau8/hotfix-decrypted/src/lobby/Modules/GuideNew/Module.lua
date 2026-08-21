local GuideNewModule = class("GuideNewModule", XH.ModuleBase)
local GuideNewConfig = require("lobby.Modules.GuideNew.Config")

function GuideNewModule:ctor()
    GuideNewModule.super.ctor(self)

    self:initGuideData()
end

function GuideNewModule:initGuideData()
    -- {
    --     { 
    --         type = 1,   --引导类型
    --         params = 2, --引导参数
    --         style = 1   --样式
    --         tag = 1     --标签图片
    --         desc1 = 1,  --描述1
    --         desc2 = 1,  --描述2
    --         desc = 1,   --描述
    --     }
    -- }
    self._guideList = {}
    local guideConfig = GuideNewConfig:getGuideList()
    if guideConfig then
        for _, guide in ipairs(guideConfig) do
            local guideData = clone(guide)
            local params = string.split(guide.params, "|")
            guideData.params = params
            table.insert(self._guideList, guideData)
        end
    end
end

function GuideNewModule:getProxyEvents()
    return {
        -- { module = XH.playerData, eventKeyName = "EVENT_IDENTITY_GETBACK", callBack = "onIdentityBack" },
        -- { module = XH.lobby:getModule("Configuration"), eventKeyName = "EVENT_REQ_CONFIGURATION_SUCCESS", callBack = "onGetConfiguration" },
    }
end

-- function GuideNewModule:onIdentityBack()
--     self:initGuideData()
--     self:checkShowGuide()
-- end

-- function GuideNewModule:onGetConfiguration(event)
--     local key = event.data.key
--     if key and key == ConfigurationDefine.Config.ALL then
--        self:initGuideData()
--        self:checkShowGuide()
--     end
-- end

function GuideNewModule:checkShowGuide()
     if #self._guideList == 0 then
        return
     end
    -- 不在大厅场景
    local runningScene = display.getRunningScene()
    local topScene = XH.SceneManager:getInstance():getTopScene()
    if topScene ~= runningScene then
        return
    end
    if topScene and topScene.getTag then
        if topScene:getTag() ~= XH.SCENE_TAG.LOBBY then
            return
        end
    end
    --未实名
    -- if not self:isRealName() then
    --     return
    -- end
    -- 已经展示
    if self:checkIsShowGuide() then
        return
    end
    -- 执行展示逻辑
    self:showGuideView()
end

function GuideNewModule:showGuideView()
    XH.viewManager:openView("GuideNewView", nil, self._guideList)
    XH.userDefault:setValue(XH.userDefault.KEY_ID.KW_NEWGUIDE , true)
end

function GuideNewModule:isRealName()
    if XH.configerManager:getIsNewRealName() then 
        return XH.playerData:getIdentityStatus() == 0 or XH.playerData:getIdentityStatus() == 1
    end 
    return false
end

function GuideNewModule:checkIsShowGuide()
    -- 不是新用户
    if not self:isNewPlayer() then
        return true
    end
    -- 存在引导记录
    local isGuide = XH.userDefault:getValue(XH.userDefault.KEY_ID.KW_NEWGUIDE , false)
    if isGuide then
        return true
    end

    return false
end

-- 3天内算新用户
function GuideNewModule:isNewPlayer()
   return os.time() - XH.playerData:getRegTime() < 60 * 60 * 24 * 3
end

return GuideNewModule�