
-- 0 - disable debug info, 1 - less debug info, 2 - verbose debug info
DEBUG = 1

-- use framework, will disable all deprecated API, false - use legacy API
CC_USE_FRAMEWORK = true

-- show FPS on screen
CC_SHOW_FPS = true

-- disable create unexpected global variable
CC_DISABLE_GLOBAL = false

-- for module display
CC_DESIGN_RESOLUTION = {
    width = 1920,
    height = 1080,
    autoscale = "FIXED_WIDTH",
    callback = function(framesize)
        local ratio = framesize.width / framesize.height
        if ratio > 16 / 9 then
            return {autoscale = "FIXED_HEIGHT"}
        end
    end
}

-- auto scale mode
CONFIG_SCREEN_AUTOSCALE = "FIXED_WIDTH"

-- edit by lushihan
-- ��Ļ��̬���䷽������ͨ�����callback��
-- e.g.
CONFIG_SCREEN_AUTOSCALE_CALLBACK = function(frameSize)
	local ratio = frameSize.width / frameSize.height
	if ratio > 16 / 9 then
		return "FIXED_HEIGHT"
	else
		return "FIXED_WIDTH"
	end
end

�