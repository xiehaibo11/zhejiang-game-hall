local ScrollIcon = class("ScrollIcon", XH.ViewBase)

local _KW_GAME_IMAGE = "_KW_GAME_IMAGE"
local PANEL_NUMS = 2
local ANI_DELAY_TIME = 2 --延时时间

local KW_UNIUN_ICON_DEFAULT_PNGS = {
    "lobby_game_ly_810025.png",
    "lobby_xiuxian_icon_1.png",
    "lobby_xiuxian_icon_2.png",
    "lobby_xiuxian_icon_3.png",
    "lobby_xiuxian_icon_4.png",
}

--local KW_UNIUN_ICON_DEFAULT_PLIST = "cocosStudio/hall/Image/lobby_uniun_icon.plist"

function ScrollIcon:getCSBPath()
    return "cocosStudio/hall/CSB/ScrollIcon.csb"
end

function ScrollIcon:getBindingInfo()
    return {
        ["_KW_TUIJIAN_ICON_ITEM"] = { varName  ="_tuijianItem"},
        ["_KW_PANEL_LISTVIEW_1"] = { varName = "_panelView1" },
        ["_KW_PANEL_LISTVIEW_2"] = { varName = "_panelView2" },
        ["_KW_GAME_ICON_BG"] = { varName = "_tuijianModel"},
        ["_KW_GAME_IMAGE"] = { varName = "_Itemimage"},
    }
end

function ScrollIcon:ctor()
    ScrollIcon.super.ctor(self)
    self:initData()  
    self:flushImage()
end

function ScrollIcon:initData()
    self._moveTimes = 0     
    self._initPosX = 0
end

--推荐游戏中icon轮播循环的制作

function ScrollIcon:flushImage()
    for i = 1, #KW_UNIUN_ICON_DEFAULT_PNGS do
        local Model_1 = self._tuijianModel:clone()
        Model_1:setPosition(cc.p(self._tuijianModel:getContentSize().width * (i - 0.5), self._tuijianModel:getContentSize().height/2))
        --加载图片 
        Model_1:getChildByName("_KW_GAME_IMAGE"):loadTexture(KW_UNIUN_ICON_DEFAULT_PNGS[i], ccui.TextureResType.plistType)
        XH.UITool.ignoreContentAdaptWithSize(Model_1, _KW_GAME_IMAGE, false)
        Model_1:setVisible(true)
        local Model_2 =  Model_1:clone()
        self._panelView1:addChild(Model_1)
        self._panelView2:addChild(Model_2)
        --开始动画 
        self:startInitAni()
    end
end

function ScrollIcon:setClickCallBack(func)
    self._tuijianItem:addTouchEventListener(func)
end

-- 动画初始化相关数据 
function ScrollIcon:startInitAni()
    self:removeAniAction()
    self._initPosX = self._panelView1:getPositionX() + (#self._panelView1:getChildren() * self._tuijianModel:getContentSize().width)
    self._panelView2:setPositionX(self._initPosX)
    self:startAnimation()
end

-- 开始进行动画
function ScrollIcon:startAnimation()
    local moveFunc = function()
        -- 进行相应移动
        for i = 1, PANEL_NUMS do
            if self._moveTimes == #self._panelView1:getChildren() * i then
                self["_panelView" .. i]:setPositionX(self._initPosX)
                if i == PANEL_NUMS then
                    self._moveTimes = 0
                end
            end
            local getPositionX = self["_panelView" .. i]:getPositionX() - self._tuijianModel:getContentSize().width
            self["_panelView" .. i]:runAction(cc.MoveTo:create(1, cc.p(getPositionX, self["_panelView" .. i]:getPositionY())))
        end
        -- 移动次数增加
        self._moveTimes = self._moveTimes + 1
     end
     local delayAct = cc.DelayTime:create(ANI_DELAY_TIME)

     local updateCallAct = cc.CallFunc:create(moveFunc)
     local sequenceAct = cc.Sequence:create(updateCallAct, delayAct)
     local repeatAct = cc.RepeatForever:create(sequenceAct)
     self._tuijianItem:runAction(repeatAct)

end

-- 停止所有有关动画
function ScrollIcon:removeAniAction()
    if self._tuijianItem then
        self._tuijianItem:stopAllActions()
    end
    if self._panelView1 then
        self._panelView1:stopAllActions()
    end
    if self._panelView2 then
        self._panelView2:stopAllActions()
    end
end

return ScrollIcon
