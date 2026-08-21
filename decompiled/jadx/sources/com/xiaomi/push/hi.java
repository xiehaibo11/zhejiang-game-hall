package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
public class hi {
    public static boolean a(Context context) {
        return !com.xiaomi.push.service.ca.f978a.isEmpty() && bj.e(context) && j.m551b(context);
    }

    public static boolean a(Context context, int i) {
        if (context != null && i > 0) {
            String strM695a = com.xiaomi.push.service.u.m695a(context);
            if (!TextUtils.isEmpty(strM695a)) {
                for (int i2 = 1; i2 <= i; i2++) {
                    if (g.a(10) == w.a(strM695a.substring(strM695a.length() - 1, strM695a.length()), -1)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
