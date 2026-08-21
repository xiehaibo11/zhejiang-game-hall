CF.IMMessage = require("lobby.Modules.Im.MessageView")
CF.IMListLayerPath = "lobby.Modules.Im.View"
CF.NewIMFriendLayerPath = "lobby.Modules.Im.NewIMView"
CF.NewIMGroupLayerPath = "lobby.Modules.IMTeaHouse.IMTeaHouseOnlineListView"
CF.TeaHouseOnlineLayerPath = "teahouse.View.TeaHouseOnlineListView"

function CF.getLobbyModule(moduleName)
    return XH.lobby:getModule(moduleName)
end
�