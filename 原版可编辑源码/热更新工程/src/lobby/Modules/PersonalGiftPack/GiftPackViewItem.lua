local PersonalGiftPackViewItem = class("PersonalGiftPackViewItem", XH.ViewBase)

function PersonalGiftPackViewItem:ctor(viewSize)
    PersonalGiftPackViewItem.super.ctor(self)
    self._bgImg = nil
    self:setContentSize(viewSize)
end

function PersonalGiftPackViewItem:updateInfo(confData)
    local bgConf = confData.bgConf or {}
    self._bgImg = XH.RemoteImage.new()
    self._bgImg:setCallBack(
        function ()
            if not self._bgImg then
                return
            end
            local allBtnsConf = confData.btnsConf
            for _, btnConf in pairs(allBtnsConf) do
                local newBtnImg = self:createButtonImg(btnConf)
                newBtnImg:setClickCallBack(handler(self, self.onTouchedButton))
                local size = self._bgImg:getContentSize()
                local positionX = size.width / 2
                local positionY = size.height / 2
                if btnConf.posX then
                    positionX = btnConf.posX * size.width / 100
                end
                if btnConf.posY then
                    positionY =(100 - btnConf.posY) * size.height / 100
                end
                newBtnImg:setPosition(positionX, positionY)
                self._bgImg:addChild(newBtnImg)
            end
        end
    )
    self._bgImg:setUrl(bgConf.imageUrl)
    local size = self:getContentSize()
    self._bgImg:setPosition(cc.p(size.width/2, size.height/2))
    self._bgImg:setAnchorPoint(cc.p(0.5, 0.5))
    self:addChild(self._bgImg)
end

function PersonalGiftPackViewItem:onTouchedButton(send, eventType)
    if eventType ~= ccui.TouchEventType.ended then
        return
    end
    if send.productID and send.productID ~= "" and send.propID and send.propID ~= 0 then
        XH.lobby:getModule("PersonalGiftPack"):buyDiamond(send.productID, send.propID)

        local data = {}
        data.userid = XH.playerData:getNumberID()
        data.goldCnt = XH.playerData:getSR()
        data.diamondCnt = XH.playerData:getDiamnd()
        data.productID = send.productID
        data.propID = send.propID
        XH.throwDataManager:throwData(XH.ThrowDataDefine.PersonalGiftPackBuyBtn,data)
    end
end

function PersonalGiftPackViewItem:createButtonImg(conf)
    local newBtnImg = XH.RemoteImage.new()
    newBtnImg:setTouchEnabled(true)
    newBtnImg:ignoreContentAdaptWithSize(false)
    newBtnImg:setUrl(conf.imageUrl)
    newBtnImg.productID = conf.productID
    newBtnImg.propID = conf.propID
    return XH.UIButton.create(newBtnImg)
end

return PersonalGiftPackViewItem