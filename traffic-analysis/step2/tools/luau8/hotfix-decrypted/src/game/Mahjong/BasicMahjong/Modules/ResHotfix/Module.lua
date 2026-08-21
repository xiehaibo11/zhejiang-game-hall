local ResHotfixModule = CF.gameClass("ResHotfixModule", "game.GameBase.Modules.ResHotfix.Module")

ResHotfixModule.EVENT_PERCENT_CHANGED = "EVENT_PERCENT_CHANGED"
ResHotfixModule.SHOW_LOADING_VIEW = "SHOW_LOADING_VIEW"
ResHotfixModule.HIDE_LOADING_VIEW = "HIDE_LOADING_VIEW"

ResHotfixModule.TAG_MAH_FACE = "TAG_MAH_FACE"

function ResHotfixModule:ctor()
    ResHotfixModule.super.ctor(self)
    self:onMahFaceUpdateLoad()
end

function ResHotfixModule:getCustomEventListenerConfig()
    local config = ResHotfixModule.super.getCustomEventListenerConfig(self)
    config[#config + 1] = {eventName = "hotupdate.MahFaceUpdate.ProgressChanged", callBack = handler(self, self.onMahFaceProgressPercent)}
    config[#config + 1] = {eventName = "hotupdate.MahFaceUpdate.startUpdate", callBack = handler(self, self.onMahFaceStartUpdate)}
    config[#config + 1] = {eventName = "hotupdate.MahFaceUpdate.load", callBack = handler(self, self.onMahFaceUpdateLoad)}
    return config
end

function ResHotfixModule:onMahFaceProgressPercent(event)
    if not event.msg or not event.msg.percent then
        return
    end
    local percent = math.ceil(event.msg.percent)
    self:dispatchEvent({name = self.EVENT_PERCENT_CHANGED, msg = {tagName = self.TAG_MAH_FACE, text = "牌花", percent = percent}})
end

function ResHotfixModule:onMahFaceStartUpdate(event)
    if event.msg and event.msg.isStart then
        self:dispatchEvent({name = self.SHOW_LOADING_VIEW, msg = {tagName = self.TAG_MAH_FACE}})
    else
        self:dispatchEvent({name = self.HIDE_LOADING_VIEW, msg = {tagName = self.TAG_MAH_FACE}})
    end
end

function ResHotfixModule:onMahFaceUpdateLoad(event)
    local PATH_MAH_FACE_HOTUPDATE = "res/mahface/" 
    local setConfig = CF.gameRequire("Config.MahSettingConfig")
    local UIMahConfig = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig2D")

    local MahFaceHotUpdateData = CF.getMahFaceHotUpdateData()
    local areaid = MahFaceHotUpdateData.getAreaIdWithSameMahFaceRes()
    if not setConfig[areaid] then return end
    local listTbl = setConfig[areaid]["WORD_TYPE"]
    local index = 1
    while listTbl and listTbl[index] do
        local mahFacePlistName = string.format( "mahlayer_mah_face_%d.plist",listTbl[index] )
        local mahFacePlistPath = PATH_MAH_FACE_HOTUPDATE .. areaid .. "/" .. mahFacePlistName
        if cc.FileUtils:getInstance():isFileExist(mahFacePlistPath) then
            cc.SpriteFrameCache:getInstance():addSpriteFrames(mahFacePlistPath)
            UIMahConfig.MahFacePlistPath[listTbl[index]] = mahFacePlistPath
            print( "load mahface "..mahFacePlistPath)
        end
        index = index + 1
    end
end

return ResHotfixModule�
