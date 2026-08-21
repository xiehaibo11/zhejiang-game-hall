package com.xiaomi.push.service;

import android.content.Context;
import android.content.SharedPreferences;
import com.xiaomi.mipush.sdk.Constants;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes4.dex */
public final class bx implements ar {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile bx f8349a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f969a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    Context f970a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private SharedPreferences f971a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private volatile boolean f973a = false;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private ConcurrentHashMap<String, a> f972a = new ConcurrentHashMap<>();

    public abstract class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        long f8350a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        String f974a;

        a(String str, long j) {
            this.f974a = str;
            this.f8350a = j;
        }

        abstract void a(bx bxVar);

        @Override // java.lang.Runnable
        public void run() {
            if (bx.f8349a != null) {
                Context context = bx.f8349a.f970a;
                if (com.xiaomi.push.bj.d(context)) {
                    if (System.currentTimeMillis() - bx.f8349a.f971a.getLong(":ts-" + this.f974a, 0L) > this.f8350a || com.xiaomi.push.ai.a(context)) {
                        com.xiaomi.push.t.a(bx.f8349a.f971a.edit().putLong(":ts-" + this.f974a, System.currentTimeMillis()));
                        a(bx.f8349a);
                    }
                }
            }
        }
    }

    private bx(Context context) {
        this.f970a = context.getApplicationContext();
        this.f971a = context.getSharedPreferences("sync", 0);
    }

    public static bx a(Context context) {
        if (f8349a == null) {
            synchronized (bx.class) {
                if (f8349a == null) {
                    f8349a = new bx(context);
                }
            }
        }
        return f8349a;
    }

    public String a(String str, String str2) {
        return this.f971a.getString(str + Constants.COLON_SEPARATOR + str2, "");
    }

    @Override // com.xiaomi.push.service.ar
    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void mo669a() {
        if (this.f973a) {
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        if (jCurrentTimeMillis - this.f969a < 3600000) {
            return;
        }
        this.f969a = jCurrentTimeMillis;
        this.f973a = true;
        com.xiaomi.push.al.a(this.f970a).a(new by(this), (int) (Math.random() * 10.0d));
    }

    public void a(a aVar) {
        if (this.f972a.putIfAbsent(aVar.f974a, aVar) == null) {
            com.xiaomi.push.al.a(this.f970a).a(aVar, ((int) (Math.random() * 30.0d)) + 10);
        }
    }

    public void a(String str, String str2, String str3) {
        com.xiaomi.push.t.a(f8349a.f971a.edit().putString(str + Constants.COLON_SEPARATOR + str2, str3));
    }
}
