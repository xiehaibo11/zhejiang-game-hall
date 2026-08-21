package org.cocos2dx.lib;

public class Cocos2dxLuaJavaBridge {
    public Cocos2dxLuaJavaBridge() {
            r0 = this;
            r0.<init>()
            return
    }

    public static native int callLuaFunctionWithString(int r0, java.lang.String r1);

    public static native int callLuaGlobalFunctionWithString(java.lang.String r0, java.lang.String r1);

    public static native int releaseLuaFunction(int r0);

    public static native int retainLuaFunction(int r0);
}
