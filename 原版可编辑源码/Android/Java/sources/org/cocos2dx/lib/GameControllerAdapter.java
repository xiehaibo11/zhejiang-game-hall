package org.cocos2dx.lib;

import java.util.ArrayList;

public class GameControllerAdapter {
    private static ArrayList<Runnable> sRunnableFrameStartList;

    private static native void nativeControllerAxisEvent(String str, int i, int i2, float f, boolean z);

    private static native void nativeControllerButtonEvent(String str, int i, int i2, boolean z, float f, boolean z2);

    private static native void nativeControllerConnected(String str, int i);

    private static native void nativeControllerDisconnected(String str, int i);

    public static void addRunnableToFrameStartList(Runnable runnable) {
        if (sRunnableFrameStartList == null) {
            sRunnableFrameStartList = new ArrayList<>();
        }
        sRunnableFrameStartList.add(runnable);
    }

    public static void removeRunnableFromFrameStartList(Runnable runnable) {
        ArrayList<Runnable> arrayList = sRunnableFrameStartList;
        if (arrayList != null) {
            arrayList.remove(runnable);
        }
    }

    public static void onDrawFrameStart() {
        ArrayList<Runnable> arrayList = sRunnableFrameStartList;
        if (arrayList != null) {
            int size = arrayList.size();
            for (int i = 0; i < size; i++) {
                sRunnableFrameStartList.get(i).run();
            }
        }
    }

    public static void onConnected(final String str, final int i) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                GameControllerAdapter.nativeControllerConnected(str, i);
            }
        });
    }

    public static void onDisconnected(final String str, final int i) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                GameControllerAdapter.nativeControllerDisconnected(str, i);
            }
        });
    }

    public static void onButtonEvent(final String str, final int i, final int i2, final boolean z, final float f, final boolean z2) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                GameControllerAdapter.nativeControllerButtonEvent(str, i, i2, z, f, z2);
            }
        });
    }

    public static void onAxisEvent(final String str, final int i, final int i2, final float f, final boolean z) {
        Cocos2dxHelper.runOnGLThread(new Runnable() {
            @Override
            public void run() {
                GameControllerAdapter.nativeControllerAxisEvent(str, i, i2, f, z);
            }
        });
    }
}
