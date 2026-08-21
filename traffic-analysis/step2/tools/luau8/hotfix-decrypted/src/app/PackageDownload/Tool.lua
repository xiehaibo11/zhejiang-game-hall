local tool = {}

function tool.download(url, savePath, packageSize, progressCallback, endCallback)
    local d2 = un.downloader2
    local cbId
    cbId =
        d2.addListener(
        function(tag, costTime, errCode, errMsg)
            if tag ~= "apk" then
                return
            end
            if errCode > 0 then
                print("Downloader error " .. errMsg)
            end
            if endCallback and errCode == 0 then
                endCallback()
            end
            print(string.format("download result tag=%s, msg=%s", tag, errMsg))
            d2.removeListener(cbId)
        end
    )

    d2.addProgressListener(
        cbId,
        function(tag, progress)
            if tag ~= "apk" then
                return
            end
            if progressCallback then
                progressCallback(progress)
            end
        end
    )
    d2.add(
        url,
        savePath,
        "", -- md5
        packageSize, -- 文件大小
        0, -- 开始位置
        0, -- 包体大小
        true, -- 支持断点续传
        false, -- 需要详细时间
        true, -- 需要进度
        0, -- 优先级
        "apk", -- 包体tag
        cbId
    )
    d2.commit()
end

function tool.install(apkPath)
    xh.XHBridge:xhCallOCFunc(
        "UserInterface",
        "callFunction",
        json.encode(
            {
                functionName = "sysfunc_install_apk",
                args = {
                    [1] = apkPath
                }
            }
        )
    )
end

function tool.findNodeByName(root, strKeyword)
    if root == nil then
        return nil
    end

    local getName = function()
        return root:getName()
    end

    local success, name = pcall(getName)

    if success == false then
        return nil
    end

    if name == strKeyword then
        return root
    end

    local node = nil
    local childrennode = root:getChildren()
    for i = 1, root:getChildrenCount() do
        node = tool.findNodeByName(childrennode[i], strKeyword)
        if node ~= nil then
            break
        end
    end
    return node
end

return tool
�