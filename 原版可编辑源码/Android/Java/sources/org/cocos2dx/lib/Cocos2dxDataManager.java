package org.cocos2dx.lib;

import com.oppo.oiface.engine.OifaceGameEngineManager;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;

public class Cocos2dxDataManager {
    public static void setOptimise(String str, float f) {
        OifaceGameEngineManager.getInstance().updateGameEngineInfo("{\"" + str + "\":" + String.valueOf(f) + "}");
    }

    public static void setProcessID(int i) {
        setOptimise("render_pid", i);
    }

    public static void setFrameSize(int i, int i2) {
        setOptimise(DownloadSettingKeys.SegmentConfig.BUFFER_SIZE, i * i2);
    }

    public static void onSceneLoaderBegin() {
        setOptimise("load_scene", 1.0f);
    }

    public static void onSceneLoaderEnd() {
        setOptimise("load_scene", 0.0f);
    }

    public static void onShaderLoaderBegin() {
        setOptimise("shader_compile", 1.0f);
    }

    public static void onShaderLoaderEnd() {
        setOptimise("shader_compile", 0.0f);
    }
}
