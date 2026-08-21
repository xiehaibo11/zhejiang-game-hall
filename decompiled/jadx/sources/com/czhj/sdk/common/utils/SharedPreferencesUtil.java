package com.czhj.sdk.common.utils;

import android.content.Context;
import android.content.SharedPreferences;
import com.czhj.sdk.common.utils.Preconditions;

/* JADX INFO: loaded from: classes.dex */
public final class SharedPreferencesUtil {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f1817a = "com.sigmob.Settings";

    private SharedPreferencesUtil(String str) {
        f1817a = str;
    }

    public static SharedPreferences getSharedPreferences(Context context) {
        Preconditions.NoThrow.checkNotNull(context);
        return context.getSharedPreferences(f1817a, 4);
    }

    public static SharedPreferences getSharedPreferences(Context context, String str) {
        Preconditions.NoThrow.checkNotNull(context);
        Preconditions.NoThrow.checkNotNull(str);
        return context.getSharedPreferences(str, 4);
    }
}
