package com.bianfeng.libuniverse;

import android.content.Context;
import android.content.res.AssetManager;

public class Helper {
    public static native void nativeSetContext(Context r0, AssetManager r1);

    public Helper() {
    }

    public static String getWritablePath() {
        return Universe.getContext().getFilesDir().getAbsolutePath();
    }
}
