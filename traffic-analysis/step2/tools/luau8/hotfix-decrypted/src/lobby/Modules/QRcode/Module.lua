local GenerateQRCodeModule = class("GenerateQRCodeModule", XH.ModuleBase)
local qrencode = import(".qrencode")

function GenerateQRCodeModule:savePic(data, saveName, with)
    -- 定义二维码数据（仅支持数字、大写字母和空格）
    -- 将数据转换为二进制字符串
    local ret, qr = qrencode.qrcode(data)
    if ret then
        -- 定义二维码尺寸
        local size = with or 512
        
        -- 计算每个模块的大小
        local rowCnt = #qr + 2
        local moduleSize = math.floor(size / rowCnt)
        size = moduleSize * rowCnt

        -- 创建一个新的CCRenderTexture作为渲染目标
        local renderTexture = cc.RenderTexture:create(size, size)
        -- 清空渲染目标为白色背景
        renderTexture:beginWithClear(255, 255, 255, 255)

        -- 创建一个DrawNode对象
        local drawNode = cc.DrawNode:create()

        -- 在渲染目标上绘制二维码
        for row = 1, #qr do
            for col = 1, #qr[row] do
                -- 根据二进制值绘制黑白模块
                local value = tonumber(qr[row][col])

                local startX = col * moduleSize
                local startY = row * moduleSize
                local endX = startX + moduleSize
                local endY = startY + moduleSize

                if value > 0 then
                    drawNode:drawSolidRect(cc.p(startX, startY), cc.p(endX, endY), cc.c4f(0, 0, 0, 1))
                end
            end
        end

        -- 渲染黑白块
        drawNode:visit()

        -- 结束渲染
        renderTexture:endToLua()

        -- 将渲染目标保存为PNG文件
        renderTexture:saveToFile(cc.FileUtils:getInstance():getWritablePath() .. (saveName or "qrcode.png"), cc.IMAGE_FORMAT_JPEG, false)
        return true
    else
        return false
    end
end

function GenerateQRCodeModule:createNode(text, size)
    -- --- A. 生成数据 ---
    -- 调用库的核心函数，生成二维码矩阵
    -- 注意：具体函数名取决于你下载的库的 API，这里是通用示例
    local ret, matrix = qrencode.qrcode(text)
    if not ret then
        return nil
    end
    
    -- 获取矩阵宽高
    local matrixSize = #matrix 

    -- --- B. 绘制图形 ---
    local canvas = cc.Node:create() -- 使用普通 Node 作为容器
    local blockSize = size / matrixSize -- 计算每个小格子的像素

    -- 遍历矩阵数据
    for y = 1, matrixSize do
        for x = 1, matrixSize do
            -- 检查该坐标是否需要绘制 (值通常为 true, 1 或 "#")
            if matrix[y][x] then 
                -- 创建一个实心矩形 (利用 cc.DrawNode 或直接用 Sprite)
                -- 这里为了性能，推荐使用 cc.Sprite 或预制色块，但为了简单演示用 DrawNode
                local drawNode = cc.DrawNode:create()
                
                -- 定义矩形的四个点
                local rect = {
                    cc.p((x-1) * blockSize, (matrixSize - y) * blockSize),       -- 左下
                    cc.p(x * blockSize, (matrixSize - y) * blockSize),            -- 右下
                    cc.p(x * blockSize, (matrixSize - y + 1) * blockSize),        -- 右上
                    cc.p((x-1) * blockSize, (matrixSize - y + 1) * blockSize),    -- 左上
                }
                
                -- 绘制并填充为黑色
                drawNode:drawPolygon(rect, 4, matrix[y][x] > 0 and cc.c4f(0,0,0,1) or cc.c4f(1,1,1,1), 0, cc.c4f(0,0,0,0))
                canvas:addChild(drawNode)
            end
        end
    end

    canvas:setContentSize(size, size)
    return canvas
end
return GenerateQRCodeModule
�