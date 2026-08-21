package com.bianfeng.libuniverse;

import android.content.Context;
import android.content.res.AssetManager;

public class Helper {
    public static native void nativeSetContext(Context context, AssetManager assetManager);

    public static String getWritablePath() {
        return Universe.getContext().getFilesDir().getAbsolutePath();
    }
}
