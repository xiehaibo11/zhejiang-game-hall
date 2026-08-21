package com.iab.omid.library.mmadbridge.utils;

import android.text.TextUtils;
import android.util.Log;

public final class d {
    public static void a(String str) {
        if (!com.iab.omid.library.mmadbridge.a.a.booleanValue() || TextUtils.isEmpty(str)) {
            return;
        }
        Log.i("OMIDLIB", str);
    }

    public static void a(String str, Exception exc) {
        if ((!com.iab.omid.library.mmadbridge.a.a.booleanValue() || TextUtils.isEmpty(str)) && exc == null) {
            return;
        }
        Log.e("OMIDLIB", str, exc);
    }
}
