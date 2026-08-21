package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ConcurrentHashMap;

public final class bx implements ar {
    private static volatile bx a;
    private long a;
    Context a;
    private SharedPreferences a;
    private volatile boolean a = false;
    private ConcurrentHashMap<String, a> a = new ConcurrentHashMap<>();

    public abstract class a implements Runnable {
        long a;
        String a;

        a(String str, long j) {
            this.a = str;
            this.a = j;
        }

        abstract void a(bx bxVar);

        @Override
        public void run() {
            if (bx.a != null) {
                Context context = bx.a.a;
                if (com.xiaomi.push.bj.d(context)) {
                    if (System.currentTimeMillis() - bx.a.a.getLong(":ts-" + this.a, 0L) > this.a || com.xiaomi.push.ai.a(context)) {
                        com.xiaomi.push.t.a(bx.a.a.edit().putLong(":ts-" + this.a, System.currentTimeMillis()));
                        a(bx.a);
                    }
                }
            }
        }
    }

    private bx(Context context) {
        this.a = context.getApplicationContext();
        this.a = context.getSharedPreferences("sync", 0);
    }

    public static bx a(Context context) {
        if (a == null) {
            synchronized (bx.class) {
                if (a == null) {
                    a = new bx(context);
                }
            }
        }
        return a;
    }

    public String a(String str, String str2) {
        return this.a.getString(str + Constants.COLON_SEPARATOR + str2, "");
    }

    @Override
    public void a() {
        if (this.a) {
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.a < 3600000) {
            return;
        }
        this.a = jCurrentTimeMillis;
        this.a = true;
        com.xiaomi.push.al.a(this.a).a(new by(this), (int) (Math.random() * 10.0d));
    }

    public void a(a aVar) {
        if (this.a.putIfAbsent(aVar.a, aVar) == null) {
            com.xiaomi.push.al.a(this.a).a(aVar, ((int) (Math.random() * 30.0d)) + 10);
        }
    }

    public void a(String str, String str2, String str3) {
        com.xiaomi.push.t.a(a.a.edit().putString(str + Constants.COLON_SEPARATOR + str2, str3));
    }
}
