package com.cmic.gen.sdk.b;

import android.content.Context;
import android.os.Build;
import android.telephony.SubscriptionManager;
import com.cmic.gen.sdk.e.c;
import com.cmic.gen.sdk.e.m;

/* JADX INFO: compiled from: UMCTelephonyManagement.java */
/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f1633a;
    private static long b;
    private C0062a c = null;

    /* JADX INFO: renamed from: com.cmic.gen.sdk.b.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: UMCTelephonyManagement.java */
    public static class C0062a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private int f1634a = -1;
        private int b = -1;

        public int a() {
            return this.b;
        }
    }

    private a() {
    }

    public static a a() {
        if (f1633a == null) {
            f1633a = new a();
        }
        return f1633a;
    }

    public C0062a b() {
        C0062a c0062a = this.c;
        return c0062a == null ? new C0062a() : c0062a;
    }

    public void a(Context context, boolean z) {
        long jCurrentTimeMillis = System.currentTimeMillis() - b;
        if (jCurrentTimeMillis >= 5000 || jCurrentTimeMillis <= 0) {
            this.c = new C0062a();
            if (z) {
                a(context);
                if (m.e() && m.d()) {
                    c.b("UMCTelephonyManagement", "华为手机兼容性处理");
                    if (this.c.b == 0 || this.c.b == 1) {
                        if (this.c.f1634a == -1) {
                            C0062a c0062a = this.c;
                            c0062a.f1634a = c0062a.b;
                        }
                        this.c.b = -1;
                    }
                    if ((this.c.f1634a != -1 || this.c.b != -1) && Build.VERSION.SDK_INT >= 21) {
                        b(context);
                    }
                }
                b = System.currentTimeMillis();
            }
        }
    }

    private void a(Context context) {
        if (Build.VERSION.SDK_INT < 22) {
            this.c.f1634a = -1;
            return;
        }
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(context.getApplicationContext());
        if (subscriptionManagerFrom != null) {
            try {
                if (this.c.f1634a == -1 && Build.VERSION.SDK_INT >= 24) {
                    this.c.b = SubscriptionManager.getDefaultDataSubscriptionId();
                    c.b("UMCTelephonyManagement", "android 7.0及以上手机getDefaultDataSubscriptionId适配成功: dataSubId = " + this.c.b);
                    return;
                }
            } catch (Exception unused) {
                c.a("UMCTelephonyManagement", "android 7.0及以上手机getDefaultDataSubscriptionId适配失败");
            }
            try {
                Object objInvoke = subscriptionManagerFrom.getClass().getMethod("getDefaultDataSubId", new Class[0]).invoke(subscriptionManagerFrom, new Object[0]);
                if ((objInvoke instanceof Integer) || (objInvoke instanceof Long)) {
                    this.c.b = ((Integer) objInvoke).intValue();
                    c.b("UMCTelephonyManagement", "android 7.0以下手机getDefaultDataSubId适配成功: dataSubId = " + this.c.b);
                    return;
                }
            } catch (Exception unused2) {
                c.a("UMCTelephonyManagement", "readDefaultDataSubId-->getDefaultDataSubId 反射出错");
            }
            try {
                Object objInvoke2 = subscriptionManagerFrom.getClass().getMethod("getDefaultDataSubscriptionId", new Class[0]).invoke(subscriptionManagerFrom, new Object[0]);
                if ((objInvoke2 instanceof Integer) || (objInvoke2 instanceof Long)) {
                    this.c.b = ((Integer) objInvoke2).intValue();
                    c.b("UMCTelephonyManagement", "反射getDefaultDataSubscriptionId适配成功: dataSubId = " + this.c.b);
                }
            } catch (Exception unused3) {
                c.a("UMCTelephonyManagement", "getDefaultDataSubscriptionId-->getDefaultDataSubscriptionId 反射出错");
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:24:0x0093 A[PHI: r3
      0x0093: PHI (r3v5 android.database.Cursor) = (r3v4 android.database.Cursor), (r3v6 android.database.Cursor) binds: [B:23:0x0091, B:18:0x0087] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(android.content.Context r11) {
        /*
            r10 = this;
            java.lang.String r0 = "sim_id"
            java.lang.String r1 = "_id"
            java.lang.String r2 = "UMCTelephonyManagement"
            java.lang.String r3 = "readSimInfoDbStart"
            com.cmic.gen.sdk.e.c.b(r2, r3)
            java.lang.String r3 = "content://telephony/siminfo"
            android.net.Uri r5 = android.net.Uri.parse(r3)
            android.content.ContentResolver r4 = r11.getContentResolver()
            r11 = 2
            r3 = 0
            java.lang.String[] r6 = new java.lang.String[r11]     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r11 = 0
            r6[r11] = r1     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r7 = 1
            r6[r7] = r0     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r8 = "sim_id>=?"
            java.lang.String[] r9 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r7 = "0"
            r9[r11] = r7     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r11 = 0
            r7 = r8
            r8 = r9
            r9 = r11
            android.database.Cursor r3 = r4.query(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r3 == 0) goto L87
        L31:
            boolean r11 = r3.moveToNext()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r11 == 0) goto L87
            int r11 = r3.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r11 = r3.getInt(r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r4 = r3.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r4 = r3.getInt(r4)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.C0062a.b(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r6 = -1
            if (r5 != r6) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.C0062a.a(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 == r6) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.C0062a.a(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 != r4) goto L79
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a.C0062a.a(r5, r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.<init>()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r6 = "通过读取sim db获取数据流量卡的卡槽值："
            r5.append(r6)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            r5.append(r11)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.e.c.b(r2, r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
        L79:
            com.cmic.gen.sdk.b.a$a r5 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            int r5 = com.cmic.gen.sdk.b.a.C0062a.b(r5)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            if (r5 != r11) goto L31
            com.cmic.gen.sdk.b.a$a r11 = r10.c     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            com.cmic.gen.sdk.b.a.C0062a.b(r11, r4)     // Catch: java.lang.Throwable -> L8a java.lang.Exception -> L8c
            goto L31
        L87:
            if (r3 == 0) goto L96
            goto L93
        L8a:
            r11 = move-exception
            goto L9c
        L8c:
            java.lang.String r11 = "readSimInfoDb error"
            com.cmic.gen.sdk.e.c.a(r2, r11)     // Catch: java.lang.Throwable -> L8a
            if (r3 == 0) goto L96
        L93:
            r3.close()
        L96:
            java.lang.String r11 = "readSimInfoDbEnd"
            com.cmic.gen.sdk.e.c.b(r2, r11)
            return
        L9c:
            if (r3 == 0) goto La1
            r3.close()
        La1:
            goto La3
        La2:
            throw r11
        La3:
            goto La2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.cmic.gen.sdk.b.a.b(android.content.Context):void");
    }
}
