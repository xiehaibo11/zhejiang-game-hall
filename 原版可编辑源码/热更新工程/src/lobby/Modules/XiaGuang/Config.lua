local Config = {VideoPath = "animation/Common/xiaguangshengjing/video.mp4"}
Config.aniCfg = {
    nil, nil, {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/paixuanran/paixuranran.plist",
        fileName = "paixuanran2_%05d.png",
        start = 0,
        endIdx = 13,
        interval = 0.13,
        scale = 1.8
    }, {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/chupai/chupai.plist",
        fileName = "chupai_%05d.png",
        start = 0,
        endIdx = 19,
        interval = 0.05,
        scale = 2.5,
        gap = 0.5
    }, {
        frame = true,
        plist = "animation/Common/xiaguangshengjing/hupai/hupai.plist",
        fileName = "hupai_%05d.png",
        start = 0,
        endIdx = 16,
        interval = 0.1,
        scale = 1.5,
        gap = 0.3,
        bottom = {
            frame = true,
            plist = "animation/Common/xiaguangshengjing/hupai/hupai_bottom.plist",
            fileName = "hupaiD_%05d.png",
            start = 0,
            endIdx = 16,
            interval = 0.1,
            scale = 1.5,
            gap = 0.3
        }
    }, {spine = true, aniPath = "animation/Common/xiaguangshengjing/", filename = "xgsj_card", animation = "animation", scale = 1.5},
    {spine = true, aniPath = "animation/Common/xiaguangshengjing/clock/", filename = "fanbeichang_naozhong", animation = "loop"},
    {spine = true, aniPath = "animation/Common/xiaguangshengjing/", filename = "ImgIconXgsj3big", animation = "animation", scale = 1.5}

}

return Config
