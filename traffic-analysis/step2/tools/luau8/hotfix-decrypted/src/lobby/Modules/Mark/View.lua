local MarkView = class("MarkView",XH.ViewBase)

function MarkView:getCSBPath()
    return "cocosStudio/hall/CSB/Mark.csb"
end

function MarkView:getBindingInfo()
    return {
        --合规角标
        ["_KW_IMG_MARK"] = {varName = "_imgMark"},
        ["_KW_TEXT_MARK"] = {varName = "_txtMark"},
    }
end

function MarkView:ctor(param)
    param = param or {}
    MarkView.super.ctor(self,param)
    self:initTextMark(param)
end

function MarkView:initTextMark(gameID)
    local MarkGameName = XH.lobby:getModule("Mark"):getMarkTextByGameID(gameID)
    if MarkGameName.markStr then 
    local gameNameLen = string.len(MarkGameName.markStr)
        if gameNameLen == 9 then 
            self._txtMark:setFontSize(36)
        else
            self._txtMark:setFontSize(48)
        end
        self._txtMark:setString(MarkGameName.markStr)
    end 
end

return MarkView





�