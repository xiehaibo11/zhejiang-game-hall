package com.huawei.hms.framework.common;

import android.content.Context;
import com.tkay.expressad.foundation.g.b.b;
import java.io.IOException;
import java.io.InputStream;

public class AssetsUtil {
    private static final String TAG = "AssetsUtil";

    public static String[] list(Context context, String str) throws IOException {
        if (context == null) {
            Logger.w(TAG, b.a);
            return new String[0];
        }
        try {
            return context.getAssets().list(str);
        } catch (RuntimeException e) {
            Logger.e(TAG, "AssetManager has been destroyed", e);
            return null;
        }
    }

    public static InputStream open(Context context, String str) throws IOException {
        if (context == null) {
            Logger.w(TAG, b.a);
            return null;
        }
        try {
            return context.getAssets().open(str);
        } catch (RuntimeException e) {
            Logger.e(TAG, "AssetManager has been destroyed", e);
            return null;
        }
    }
}
