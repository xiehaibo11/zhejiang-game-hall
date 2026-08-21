package com.xiaomi.push;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

public class r {
    private static volatile r a;
    private Context a;
    private Handler a = new Handler(Looper.getMainLooper());
    private Map<String, Map<String, String>> a = new HashMap();

    private r(Context context) {
        this.a = context;
    }

    public static r a(Context context) {
        if (a == null) {
            synchronized (r.class) {
                if (a == null) {
                    a = new r(context);
                }
            }
        }
        return a;
    }

    private synchronized String a(String str, String str2) {
        if (this.a != null && !TextUtils.isEmpty(str)) {
            if (!TextUtils.isEmpty(str2)) {
                try {
                    Map<String, String> map = this.a.get(str);
                    if (map == null) {
                        return "";
                    }
                    return map.get(str2);
                } catch (Throwable unused) {
                    return "";
                }
            }
        }
        return "";
    }

    private synchronized void b(String str, String str2, String str3) {
        if (this.a == null) {
            this.a = new HashMap();
        }
        Map<String, String> map = this.a.get(str);
        if (map == null) {
            map = new HashMap<>();
        }
        map.put(str2, str3);
        this.a.put(str, map);
    }

    public synchronized String a(String str, String str2, String str3) {
        String strA = a(str, str2);
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        return this.a.getSharedPreferences(str, 4).getString(str2, str3);
    }

    public synchronized void a(String str, String str2, String str3) {
        b(str, str2, str3);
        this.a.post(new s(this, str, str2, str3));
    }
}
