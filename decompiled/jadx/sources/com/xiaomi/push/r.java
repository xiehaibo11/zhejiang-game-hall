package com.xiaomi.push;

import android.content.Context;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes4.dex */
public class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile r f8269a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Context f840a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Handler f841a = new Handler(Looper.getMainLooper());

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Map<String, Map<String, String>> f842a = new HashMap();

    private r(Context context) {
        this.f840a = context;
    }

    public static r a(Context context) {
        if (f8269a == null) {
            synchronized (r.class) {
                if (f8269a == null) {
                    f8269a = new r(context);
                }
            }
        }
        return f8269a;
    }

    private synchronized String a(String str, String str2) {
        if (this.f842a != null && !TextUtils.isEmpty(str)) {
            if (!TextUtils.isEmpty(str2)) {
                try {
                    Map<String, String> map = this.f842a.get(str);
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
        if (this.f842a == null) {
            this.f842a = new HashMap();
        }
        Map<String, String> map = this.f842a.get(str);
        if (map == null) {
            map = new HashMap<>();
        }
        map.put(str2, str3);
        this.f842a.put(str, map);
    }

    public synchronized String a(String str, String str2, String str3) {
        String strA = a(str, str2);
        if (!TextUtils.isEmpty(strA)) {
            return strA;
        }
        return this.f840a.getSharedPreferences(str, 4).getString(str2, str3);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m583a(String str, String str2, String str3) {
        b(str, str2, str3);
        this.f841a.post(new s(this, str, str2, str3));
    }
}
