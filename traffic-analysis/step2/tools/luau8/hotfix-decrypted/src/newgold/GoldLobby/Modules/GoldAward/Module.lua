local GoldAwardModule = class("GoldAwardModule", NG.ModuleBase)

local DEFAULT_DOWNLOAD_IMAGE_DIR = device.writablePath .. "tmpImageCachDir/"
GoldAwardModule.KW_BACK_ACT_DOWNLOAD_IMAGE = "BackActivityDownloadImage"

function GoldAwardModule:ctor()
    GoldAwardModule.super.ctor(self)
end

function GoldAwardModule:reqDownloadImage(image_url)
    local downloadImage = require("app.Req.DownloadImage")
    local reqDownloadImage = downloadImage:new()
    reqDownloadImage:addReqCallBack(self, self.reqDownloadImageCallBack)
    reqDownloadImage:setUrl(image_url, false)
end

function GoldAwardModule:reqDownloadImageCallBack(cell, ntype, backData)
    if ntype == cell.TYPE.SUCCESS then
        local imageName = NG.StringTool.getImageNameByUrl(backData)
        local imagePath = DEFAULT_DOWNLOAD_IMAGE_DIR .. imageName
        local acData = {}
        acData.imagePath = imagePath
        acData.url = backData
        self:dispatchEvent({name = GoldAwardModule.KW_BACK_ACT_DOWNLOAD_IMAGE, data = acData})
    end
end

return GoldAwardModule
1