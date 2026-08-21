local GoldPlayActView = class("GoldPlayActView", XH.ViewBase)
local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"

function GoldPlayActView:getCSBPath()
    return "res/cocosStudio/hall/CSB/Activity/GoldPlayAct/GoldPlayActLayer.csb"
end
function GoldPlayActView:getBindingInfo()
    return {
        ["_KW_PIC_AWARD"] = { varName = "_imgAward" },
        ["_KW_BTN_CLOSE"] = { varName = "_btnClose", type = XH.UI_TYPE.BUTTON, onTouchEnded = "onTouchEventClose" },
        ["_KW_TEXT_1"] = { varName = "_textAwardInfo" },
        ["_KW_TEXT_2"] = { varName = "_textTiShi" },
    }
end

function GoldPlayActView:ctor(param)
    param = param or {}
    GoldPlayActView.super.ctor(self, param)
    self:initUI(param)
end

function GoldPlayActView:initUI(param)
    self._textAwardInfo:setString(param.test1)
    self._textTiShi:setString(param.test2)
    local reqDownloadImageCallback = function(node, cell, type, data)
        if type == cell.TYPE.SUCCESS then
            local imageName = XH.StringTool.getImageNameByUrl(data)
            local imagePath = DEFAULT_DOWNLOAD_IMAGE_DIR .. imageName
            node._imgAward:loadTexture(imagePath, ccui.TextureResType.localType)
            node._imgAward:setVisible(true)
        end
    end
    XH.lobby:getModule("GoldPlayAct"):reqDownloadImage(param.awardUrl, false, self, reqDownloadImageCallback)
end

function GoldPlayActView:onTouchEventClose(send, eventType)
    self:close()
end

return GoldPlayActView�