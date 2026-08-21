local CaiYunGuideView = CF.gameClass("CaiYunGuideView", CF.ViewBase)
local CaiYunGuideConfig = CF.gameRequire("Modules.CaiYunGuide.Config")

local aniPath = "animation/GameCommon/prop_ani/"

function CaiYunGuideView:ctor(normalPrayBtnNode)
    CaiYunGuideView.super.ctor(self)
    self._normalPrayBtnNode = normalPrayBtnNode -- 正常显示的求财运按钮
    self._guideData = nil
end

function CaiYunGuideView:getCSBPath()
    return "cocosStudio/Common/CSB/GameBase/CaiYunGuideUI.csb"
end

function CaiYunGuideView:getProxyEvents()
    return {
        { module = CF.game:getModule("CaiYunGuide"), eventKeyName = "CAIYUN_SHOW_GUIDE_TIP", callBack = "onShow" },
        {module = CF.game:getModule("CaiYunPropNew"), eventKeyName = "EVENT_PROP_TRANSFER_PROP_SUCC", callBack = "onTransferProps"},
    }
end

function CaiYunGuideView:getBindingInfo()
    return {
        ["_KW_panel_guide"] = {varName = "_panel_guide", type = XH.UI_TYPE.BUTTON, onTouch = "onTouchProp"},
        ["_KW_node_spine"] = {varName = "_node_spine"},
        ["_KW_light"] = {varName = "_light"},
        ["_KW_img_icon"] = {varName = "_img_icon"},
        ["_KW_txt_time"] = {varName = "_txt_time"},
        ["_KW_img_cai"] = {varName = "_img_cai"},
        ["_KW_img_yun"] = {varName = "_img_yun"},
        ["_KW_panel_tip"] = {varName = "_panel_tip"},
        ["_KW_panel_img"] = {varName = "_panel_img"},
        ["_KW_txt_tip"] = {varName = "_txt_tip"},
        ["_KW_img_price"] = {varName = "_img_price"},
        ["_KW_txt_price"] = {varName = "_txt_price"},
    }
end

function CaiYunGuideView:onShow(event)
    local function playLightCSS(callback)
        local action = cc.CSLoader:createTimeline(self:getCSBPath())
        self._light:runAction(action)
        action:setFrameEventCallFunc(function(frame)
            if self and not tolua.isnull(self) and frame:getEvent() == "over" and callback then 
                callback()
            end
        end)
        action:gotoFrameAndPlay(0, false)
    end

    local data = event.data
    -- 用于埋点
    if (data.state == CaiYunGuideConfig.State.SHOW) then
        -- 显示
        --XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.CAIYUNNEW_CLICK_CAIYUNITEM, conventionData, extraData)
    elseif (data.state == CaiYunGuideConfig.State.TIMEOUT) then
        -- 超时未使用
    elseif (data.state == CaiYunGuideConfig.State.USE_SUCCESS) then
        -- 使用成功
    end
    if data.propid == 0 and tonumber(self._guideData and self._guideData.scene or 0) > 0 then
        -- 原按钮设置隐藏
        self:setVisByNormalPrayBtn(false)
        self:setVisible(true)
        playLightCSS(function()
            -- 原按钮设置显示
            self:setVisByNormalPrayBtn(true)
            self:setVisible(false)
        end)
        self._panel_tip:runAction(cc.FadeOut:create(0.8))
        self._img_icon:runAction(cc.FadeOut:create(0.8))
        self._guideData = nil
    else
        local prop = CF.game:getModule("CaiYunPropNew"):getPrayPropInfoByID(data.propid)
        local cnt = CF.game:getModule("CaiYunPropNew"):getPropCountByID(data.propid)
        if not prop then
            return
        end
        cnt = cnt or 0
        local price = tonumber(prop.price_config[1] and prop.price_config[1].value or 0)
        self._guideData = {
            prop = prop,
            cnt = cnt,
            scene = data.scene
        }

        self:setVisByNormalPrayBtn(false)
        self:setVisible(true)
        if cnt > 0 then
            self._txt_price:setString('1个')
            self._txt_price:setPositionX(55)
            self._img_price:setVisible(false)
        else
            self._txt_price:setString(price .. "")
            self._txt_price:setPositionX(67)
            self._img_price:setVisible(true)
        end
        self._txt_tip:setString(data.tip or "")
        local cai, yun = CF.game:getModule("CaiYunPropNew"):getCaiYunCountByID(data.propid, 1)
        self._img_cai:setVisible(cai > 0)
        self._img_yun:setVisible(yun > 0)
        self._img_yun:setPositionY(cai > 0 and 19 or 70)
        self._txt_tip:setString(data.tip or "招财进宝")

        local itemIcon = CF.UITool.seekNodeByName(self._img_icon, "ITEM_ICON")
        if itemIcon == nil then
            local size = self._img_icon:getContentSize()
            itemIcon = CF.RemoteImage.new()
            itemIcon:setPosition(size.width / 2, size.height / 2)
                :setScale(0.7)
                :setName("ITEM_ICON")
                :addTo(self._img_icon)
        end
        itemIcon:setUrl(prop.image)

        if sp then
            local spine = self._node_spine:getChildByName("eff_spine")
            if not spine then
                spine = sp.SkeletonAnimation:create(CaiYunGuideConfig.SpineConfig.light.json, CaiYunGuideConfig.SpineConfig.light.atlas)
                spine:setName("eff_spine")
                self._node_spine:addChild(spine)
            end
            spine:setScale(CaiYunGuideConfig.SpineConfig.light.scale)
            spine:setAnimation(0, CaiYunGuideConfig.SpineConfig.light.aniName, true)
            spine:setTimeScale(0.8)
        end

        playLightCSS(function()
            self:guideAniCall(data)
        end)
        self._panel_tip:runAction(cc.FadeIn:create(1.2))
        self._img_icon:runAction(cc.FadeIn:create(1.2))
        self:throwData(CaiYunGuideConfig.State.SHOW)

        self._reportData = {costInfo = {propid = data.propid, cnt = price, task_id = data.scene, costPropid=cnt > 0 and data.propid or XH.areaData:getPropDiamndID()}}
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080830, self._reportData)
    end
    self._isClick = false
end

function CaiYunGuideView:onTouchProp(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return 
    end
    local propinfo = nil
    if self._guideData and self._guideData.prop then
        propinfo = self._guideData.prop
    end
    if not propinfo then
        return
    end
    XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.PRAY_GUIDE_BTN_CLICK)
    self:throwData(CaiYunGuideConfig.State.USE_SUCCESS)
    CF.game:getModule("CaiYunPropNew"):buyCaiYunProp(propinfo, 1, self._guideData.scene)
    XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080831,self._reportData)
    self._isClick = true
end

function CaiYunGuideView:onTransferProps(event)
    if self._reportData and self._isClick then
        XH.lobby:getModule("PropEventTracker"):track(XH.NewThrowDataDefine.dj24080832,self._reportData)
        self._reportData = nil
        self._isClick = false
    end
end

function CaiYunGuideView:guideAniCall(data)
    if not self._txt_time or tolua.isnull(self._txt_time) then
        return
    end
    if data.time == 0 then
        self._node_spine:setVisible(false)
        self._txt_time:setVisible(false)
        self._txt_time:stopAllActions()
        return
    end
    self._txt_time:setString(data.time .. "")
    self._txt_time:setVisible(true)
    self._txt_time:setScale(0.6)
    local scaleAct = cc.ScaleTo:create(0.6, 1.4)
    local delayAct = cc.DelayTime:create(0.55)
    local call = cc.CallFunc:create(function()
        data.time = data.time - 1
        self:guideAniCall(data)
    end)
    local sequence = cc.Sequence:create(scaleAct, delayAct, call)
    self._txt_time:runAction(sequence)
end

function CaiYunGuideView:setVisByNormalPrayBtn(show)
    if self._normalPrayBtnNode and not tolua.isnull(self._normalPrayBtnNode) then
        self._normalPrayBtnNode:setVisible(show)
    end
end

function CaiYunGuideView:updateDirection(posX, posY)
    self._isRight = posX <= display.width / 2
    
    local size = self:getParent():getContentSize()
    self:setPosition(size.width / 2, size.height - 20)

    self._panel_tip:setPositionX(not self._isRight and -75 or 210)
    self._panel_img:setPositionX(not self._isRight and 115 or 15)
end

function CaiYunGuideView:throwData(state)
    if not self._guideData then
        return
    end
	local GameSubByConfID = require("app.Config.GameSub").GameSubByConfID
    local data = {
        block_item_id = GameSubByConfID[gameID] and GameSubByConfID[gameID].GameType or 'Mahjong',
        block_label = self._guideData.scene,
        item_id = string.format('%s_%s', self._guideData.prop.value, self._guideData.prop.name)
    }
    if state == CaiYunGuideConfig.State.SHOW then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dj24042501, data)
    elseif state == CaiYunGuideConfig.State.USE_SUCCESS then
        XH.NewThrowDataManager:throwData(XH.NewThrowDataDefine.dj24042502, data)
    end
end

return CaiYunGuideView