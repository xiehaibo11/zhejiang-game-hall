local Loader = class("Loader")

--热更新完 需要载入的模块
function Loader.load()
    require "config"
	require "cocos.init"
	
end
	
function Loader.reload()
   --不需要重新载入的文件列表
    --代码都放在最开始更新
    local unReloadModule = {["app.hotupdate.lobby.LobbyHotUpdateLoader"]=true,
							["app.hotupdate.lobby.LobbyHotUpdateScene"]=true,
                            ["app.hotupdate.lobby.LobbyHotUpdateData"]=true,
                            ["app.hotupdate.lobby.ResChecker"]=true,
                            
                            ["app.hotupdate.universe.hotfix.Compat"]=true,
                            ["app.hotupdate.universe.hotfix.DeferMerge"]=true,
                            ["app.hotupdate.universe.hotfix.DiffList"]=true,
                            ["app.hotupdate.universe.hotfix.HotFixManager"]=true,
                            ["app.hotupdate.universe.hotfix.HotFixProcessor"]=true,
                            ["app.hotupdate.universe.hotfix.init"]=true,
                            ["app.hotupdate.universe.hotfix.LayerFS"]=true,
                            ["app.hotupdate.universe.hotfix.Manifest"]=true,
                            ["app.hotupdate.universe.hotfix.ProcessorHolder"]=true,
                            ["app.hotupdate.universe.hotfix.ZipDownloader"]=true,

                            ["app.hotupdate.universe.basexx"]=true,
                            ["app.hotupdate.universe.Constants"]=true,
                            ["app.hotupdate.universe.FunctionCabinet"]=true,
                            ["app.hotupdate.universe.init"]=true,
                            ["app.hotupdate.universe.instance"]=true,
                            ["app.hotupdate.universe.ListenerHub"]=true,
                            ["app.hotupdate.universe.table"]=true,
                            ["app.hotupdate.universe.Url"]=true,
                            ["app.hotupdate.universe.Utils"]=true,
						    }
                            
    for k,_ in pairs(package.loaded) do
        local path = string.gsub(k, "%.", "/");
		print("reload 000 :"..path)
        local luaFullPath =  cc.FileUtils:getInstance():fullPathForFilename("src/"..path .. ".lua")
        local luacFullPath =  cc.FileUtils:getInstance():fullPathForFilename("src/"..path .. ".luac")
        print("reload:"..luaFullPath)
        if (cc.FileUtils:getInstance():isFileExist(luaFullPath) 
            or cc.FileUtils:getInstance():isFileExist(luacFullPath)) 
            and unReloadModule[k]==nil then
            local parent = require(k)
            if type(parent) == "table" then
                for k1,_ in pairs(parent) do
                    parent[k1] = nil;
                end
            end

            package.loaded[k] = nil;
            _G[k] = nil;
        end
    end

    Loader.load() 
end

return Loader