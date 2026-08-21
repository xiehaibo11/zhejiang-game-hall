local BtnGroupManager = class("BtnGroupManager")

function BtnGroupManager:ctor()
    self.allGroup = {}
end

function BtnGroupManager:addGroup(name, btns)
    if not name or not btns then
        return
    end
    if #btns <= 1 then
        return
    end
    self.allGroup[name] = btns
end

function BtnGroupManager:flushBtnVisible(name)
    if not self.allGroup[name] then
        return
    end
    local isHaveShow = false
    for _, btn in ipairs(self.allGroup[name]) do
        if isHaveShow then
            btn:setVisible(false)
        elseif btn.checkShow then
            btn:checkShow(true)
            isHaveShow = btn:isVisible()
        end
    end
end
return BtnGroupManager.new()
