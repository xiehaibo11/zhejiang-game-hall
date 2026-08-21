local UIMahConfig3D = nil 

if CF.settingData:get3DVisualAngle() == 2 then 
    UIMahConfig3D = CF.gameRequire("Modules.GameLayer.Config.UIMahConfig3DOld") 
else 
    UIMahConfig3D = CF.gameClass("UIMahConfig3D", "game.Mahjong.BasicMahjong.Modules.GameLayer.Config.UIMahConfig3D")
    UIMahConfig3D.RootPath = "cocosStudio/MahjongNew/MahLayer/Image/Mahjong3D/"

    UIMahConfig3D.MahIconLayout = {
        Joker = {
            Is3D = true,
            ModelPath = UIMahConfig3D.RootPath .. "mahIcons/Cong.c3t",
            Texture = UIMahConfig3D.RootPath .. "mahIcons/CongCai.png",
            Scale = 1,
            Position3D = cc.vec3(0, 0, 0),
            Rotation3D = cc.vec3(0, 0, 0),
            Color = (cc.c3b(255, 255, 119)),
        },
        Ting = {
            Is3D = false,
            ImagePath = UIMahConfig3D.RootPath .. "mahIcons/TingTipIcon.png",
            Scale = 0.02,
            Position3D = cc.vec3(0, 2.4, 0),
        }
    }

    UIMahConfig3D.DeskCameraLayout.FieldOfView = 14.5
    UIMahConfig3D.DeskCameraLayout.FieldOfView = UIMahConfig3D.adaptDeskCameraLayoutFieldOfView()

    UIMahConfig3D.HandAreaLayout [CF.GameDefine.LOCAL_SEAT.TOP].HandMahsStartPos = {
        [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(19, 0),
        [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(19,0),
    }

    UIMahConfig3D.HandAreaLayout [CF.GameDefine.LOCAL_SEAT.TOP].CombsStartPos = {
        [CF.GameDefine.MAX_HAND_COUNT_TYPE.FOURTEEN] = cc.p(23, 0),
        [CF.GameDefine.MAX_HAND_COUNT_TYPE.SEVENTEEN] = cc.p(23, 0),
    }

    UIMahConfig3D.OutMahsLayout.FourDirection[CF.GameDefine.LOCAL_SEAT.BOTTOM].PositionInLayer = cc.vec3(-9, -10.5, UIMahConfig3D.DeskThick)
    UIMahConfig3D.OutMahsLayout.FourDirection[CF.GameDefine.LOCAL_SEAT.TOP].PositionInLayer = cc.vec3(9, 10.5, UIMahConfig3D.DeskThick)
    UIMahConfig3D.OutMahsLayout.FourDirection[CF.GameDefine.LOCAL_SEAT.LEFT].PositionInLayer = cc.vec3(-10.5, 9, UIMahConfig3D.DeskThick)
    UIMahConfig3D.OutMahsLayout.FourDirection[CF.GameDefine.LOCAL_SEAT.RIGHT].PositionInLayer = cc.vec3(10.5, -9, UIMahConfig3D.DeskThick)

    UIMahConfig3D.FlowerAreaLayout[CF.GameDefine.LOCAL_SEAT.BOTTOM].PositionInLayer = cc.vec3(-21, -22.5, UIMahConfig3D.DeskThick)
    UIMahConfig3D.FlowerAreaLayout[CF.GameDefine.LOCAL_SEAT.RIGHT].PositionInLayer = cc.vec3(22.5, -21, UIMahConfig3D.DeskThick)
    UIMahConfig3D.FlowerAreaLayout[CF.GameDefine.LOCAL_SEAT.TOP].PositionInLayer = cc.vec3(21, 22.5, UIMahConfig3D.DeskThick)
    UIMahConfig3D.FlowerAreaLayout[CF.GameDefine.LOCAL_SEAT.LEFT].PositionInLayer =  cc.vec3(-22.5, 21, UIMahConfig3D.DeskThick)

    UIMahConfig3D.WallAreaLayout[CF.GameDefine.LOCAL_SEAT.LEFT].CenterPos = cc.vec3(-27,0,0)
    UIMahConfig3D.WallAreaLayout[CF.GameDefine.LOCAL_SEAT.BOTTOM].CenterPos = cc.vec3(0,-27,0)
    UIMahConfig3D.WallAreaLayout[CF.GameDefine.LOCAL_SEAT.RIGHT].CenterPos = cc.vec3(27,0,0)
    UIMahConfig3D.WallAreaLayout[CF.GameDefine.LOCAL_SEAT.TOP].CenterPos = cc.vec3(0,27,0)

    UIMahConfig3D.HandAreaLayout[CF.GameDefine.LOCAL_SEAT.TOP].PositionInLayer = cc.vec3(3, 34, UIMahConfig3D.DeskThick)
end 

return UIMahConfig3D