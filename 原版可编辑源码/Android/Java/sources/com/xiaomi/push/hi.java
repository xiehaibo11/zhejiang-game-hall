package com.xiaomi.push;

import android.content.Context;
import android.text.TextUtils;

public class hi {
    public static boolean a(Context context) {
        return !com.xiaomi.push.service.ca.a.isEmpty() && bj.e(context) && j.b(context);
    }

    public static boolean a(Context context, int i) {
        if (context != null && i > 0) {
            String strA = com.xiaomi.push.service.u.a(context);
            if (!TextUtils.isEmpty(strA)) {
                for (int i2 = 1; i2 <= i; i2++) {
                    if (g.a(10) == w.a(strA.substring(strA.length() - 1, strA.length()), -1)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}
