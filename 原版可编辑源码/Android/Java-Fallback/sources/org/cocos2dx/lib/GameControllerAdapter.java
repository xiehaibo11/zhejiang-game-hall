package org.cocos2dx.lib;

public class GameControllerAdapter {
    private static java.util.ArrayList<java.lang.Runnable> sRunnableFrameStartList;





    static {
            return
    }

    public GameControllerAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    static void access$000(java.lang.String r0, int r1) {
            nativeControllerConnected(r0, r1)
            return
    }

    static void access$100(java.lang.String r0, int r1) {
            nativeControllerDisconnected(r0, r1)
            return
    }

    static void access$200(java.lang.String r0, int r1, int r2, boolean r3, float r4, boolean r5) {
            nativeControllerButtonEvent(r0, r1, r2, r3, r4, r5)
            return
    }

    static void access$300(java.lang.String r0, int r1, int r2, float r3, boolean r4) {
            nativeControllerAxisEvent(r0, r1, r2, r3, r4)
            return
    }

    public static void addRunnableToFrameStartList(java.lang.Runnable r1) {
            java.util.ArrayList<java.lang.Runnable> r0 = org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList = r0
        Lb:
            java.util.ArrayList<java.lang.Runnable> r0 = org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList
            r0.add(r1)
            return
    }

    private static native void nativeControllerAxisEvent(java.lang.String r0, int r1, int r2, float r3, boolean r4);

    private static native void nativeControllerButtonEvent(java.lang.String r0, int r1, int r2, boolean r3, float r4, boolean r5);

    private static native void nativeControllerConnected(java.lang.String r0, int r1);

    private static native void nativeControllerDisconnected(java.lang.String r0, int r1);

    public static void onAxisEvent(java.lang.String r7, int r8, int r9, float r10, boolean r11) {
            org.cocos2dx.lib.GameControllerAdapter$4 r6 = new org.cocos2dx.lib.GameControllerAdapter$4
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r6)
            return
    }

    public static void onButtonEvent(java.lang.String r8, int r9, int r10, boolean r11, float r12, boolean r13) {
            org.cocos2dx.lib.GameControllerAdapter$3 r7 = new org.cocos2dx.lib.GameControllerAdapter$3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r7)
            return
    }

    public static void onConnected(java.lang.String r1, int r2) {
            org.cocos2dx.lib.GameControllerAdapter$1 r0 = new org.cocos2dx.lib.GameControllerAdapter$1
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    public static void onDisconnected(java.lang.String r1, int r2) {
            org.cocos2dx.lib.GameControllerAdapter$2 r0 = new org.cocos2dx.lib.GameControllerAdapter$2
            r0.<init>(r1, r2)
            org.cocos2dx.lib.Cocos2dxHelper.runOnGLThread(r0)
            return
    }

    public static void onDrawFrameStart() {
            java.util.ArrayList<java.lang.Runnable> r0 = org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList
            if (r0 == 0) goto L19
            int r0 = r0.size()
            r1 = 0
        L9:
            if (r1 >= r0) goto L19
            java.util.ArrayList<java.lang.Runnable> r2 = org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList
            java.lang.Object r2 = r2.get(r1)
            java.lang.Runnable r2 = (java.lang.Runnable) r2
            r2.run()
            int r1 = r1 + 1
            goto L9
        L19:
            return
    }

    public static void removeRunnableFromFrameStartList(java.lang.Runnable r1) {
            java.util.ArrayList<java.lang.Runnable> r0 = org.cocos2dx.lib.GameControllerAdapter.sRunnableFrameStartList
            if (r0 == 0) goto L7
            r0.remove(r1)
        L7:
            return
    }
}
