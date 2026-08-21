local ShowPropFunction = {}

local KW_HEAD_FRAM_ANI = {
    [150680] = {
        AniInfo = {
            File = "animation/Lobby/PropAni/HeadFrameAni/Ios_qinglong_txk/Ios_qinglong_txk.ExportJson",
            ArmatureName = "Ios_qinglong_txk",
            AniName = "txk"
        }
    },
    [150675] = {
        AniInfo = {
            File = "animation/Lobby/PropAni/HeadFrameAni/Ios_qinglong_txk/Ios_qinglong_txk.ExportJson",
            ArmatureName = "Ios_qinglong_txk",
            AniName = "txk"
        }
    },
}

function ShowPropFunction.createHeadFrameAni(node, propid, scale, name)
    scale = scale or 0.6
    name = name or "KW_HEAD_FRAME_ANI"
    if propid and node and KW_HEAD_FRAM_ANI[propid] then
        node:removeAllChildren()
        if KW_HEAD_FRAM_ANI[propid].AniInfo then
            local aniInfo = KW_HEAD_FRAM_ANI[propid].AniInfo
            if not cc.FileUtils:getInstance():isFileExist(aniInfo.File) then
                return false
            end
            ccs.ArmatureDataManager:getInstance():addArmatureFileInfo(aniInfo.File)
            local showArmature = ccs.Armature:create(aniInfo.ArmatureName)
            if showArmature then
                showArmature:setName(name)
                node:addChild(showArmature)
                showArmature:setAnchorPoint(cc.p(0.5, 0.5))
                showArmature:getAnimation():play(aniInfo.AniName, -1, 1)
                showArmature:setScale(scale)
                showArmature:setPosition(node:getContentSize().width/2,node:getContentSize().height/2)
            end
            return true
        elseif KW_HEAD_FRAM_ANI[propid].DargonBonesInfo then
            return false
        end
    end
    return false
end


return ShowPropFunction