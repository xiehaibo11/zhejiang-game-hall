package org.cocos2dx.lib;

public class Cocos2dxDataManager {
    public Cocos2dxDataManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void onSceneLoaderBegin() {
            java.lang.String r0 = "load_scene"
            r1 = 1065353216(0x3f800000, float:1.0)
            setOptimise(r0, r1)
            return
    }

    public static void onSceneLoaderEnd() {
            java.lang.String r0 = "load_scene"
            r1 = 0
            setOptimise(r0, r1)
            return
    }

    public static void onShaderLoaderBegin() {
            java.lang.String r0 = "shader_compile"
            r1 = 1065353216(0x3f800000, float:1.0)
            setOptimise(r0, r1)
            return
    }

    public static void onShaderLoaderEnd() {
            java.lang.String r0 = "shader_compile"
            r1 = 0
            setOptimise(r0, r1)
            return
    }

    public static void setFrameSize(int r0, int r1) {
            int r0 = r0 * r1
            float r0 = (float) r0
            java.lang.String r1 = "buffer_size"
            setOptimise(r1, r0)
            return
    }

    public static void setOptimise(java.lang.String r2, float r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "{\""
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "\":"
            r0.append(r2)
            java.lang.String r2 = java.lang.String.valueOf(r3)
            r0.append(r2)
            java.lang.String r2 = "}"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.oppo.oiface.engine.OifaceGameEngineManager r3 = com.oppo.oiface.engine.OifaceGameEngineManager.getInstance()
            r3.updateGameEngineInfo(r2)
            return
    }

    public static void setProcessID(int r1) {
            float r1 = (float) r1
            java.lang.String r0 = "render_pid"
            setOptimise(r0, r1)
            return
    }
}
