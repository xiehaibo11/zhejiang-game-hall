package com.xiaomi.push;

import android.content.Context;
import android.os.Build;
import android.os.Looper;
import android.os.PowerManager;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Collection;

public class w {

    public class a {
        private final String a;
        private final StringBuilder a;
        private final String b;

        public a() {
            this(Constants.COLON_SEPARATOR, Constants.ACCEPT_TIME_SEPARATOR_SP);
        }

        public a(String str, String str2) {
            this.a = new StringBuilder();
            this.a = str;
            this.b = str2;
        }

        public a a(String str, Object obj) {
            if (!TextUtils.isEmpty(str)) {
                if (this.a.length() > 0) {
                    this.a.append(this.b);
                }
                StringBuilder sb = this.a;
                sb.append(str);
                sb.append(this.a);
                sb.append(obj);
            }
            return this;
        }

        public String toString() {
            return this.a.toString();
        }
    }

    public static int a(String str, int i) {
        if (TextUtils.isEmpty(str)) {
            return i;
        }
        try {
            return Integer.parseInt(str);
        } catch (Exception unused) {
            return i;
        }
    }

    public static boolean a() {
        return Thread.currentThread() == Looper.getMainLooper().getThread();
    }

    public static boolean a(Context context) {
        PowerManager powerManager = (PowerManager) context.getSystemService("power");
        return Build.VERSION.SDK_INT >= 20 ? powerManager != null && powerManager.isInteractive() : powerManager != null && powerManager.isScreenOn();
    }

    public static boolean a(Collection<?> collection) {
        return collection == null || collection.isEmpty();
    }

    public static int b(String str, int i) {
        return !TextUtils.isEmpty(str) ? ((str.hashCode() / 10) * 10) + i : i;
    }
}
