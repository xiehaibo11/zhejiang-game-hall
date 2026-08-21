package com.czhj.sdk.common.utils;

import android.content.Context;
import android.content.SharedPreferences;
import com.czhj.sdk.common.utils.Preconditions;

public final class SharedPreferencesUtil {
    private static String a = "com.sigmob.Settings";

    private SharedPreferencesUtil(String str) {
        a = str;
    }

    public static SharedPreferences getSharedPreferences(Context context) {
        Preconditions.NoThrow.checkNotNull(context);
        return context.getSharedPreferences(a, 4);
    }

    public static SharedPreferences getSharedPreferences(Context context, String str) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(str);
        return context.getSharedPreferences(str, 4);
    }
}
