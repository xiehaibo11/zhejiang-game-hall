package com.cmic.gen.sdk.b;

import android.content.Context;
import android.database.Cursor;
import android.net.Uri;
import android.os.Build;
import android.telephony.SubscriptionManager;
import com.cmic.gen.sdk.e.c;
import com.cmic.gen.sdk.e.m;

public class a {
    private static a a;
    private static long b;
    private a c = null;

    public static class a {
        private int a = -1;
        private int b = -1;

        public int a() {
            return this.b;
        }
    }

    private a() {
    }

    public static a a() {
        if (a == null) {
            a = new a();
        }
        return a;
    }

    public a b() {
        a aVar = this.c;
        return aVar == null ? new a() : aVar;
    }

    public void a(Context context, boolean z) {
        long jCurrentTimeMillis = System.currentTimeMillis() - b;
        if (jCurrentTimeMillis >= 5000 || jCurrentTimeMillis <= 0) {
            this.c = new a();
            if (z) {
                a(context);
                if (m.e() && m.d()) {
                    c.b("UMCTelephonyManagement", "华为手机兼容性处理");
                    if (this.c.b == 0 || this.c.b == 1) {
                        if (this.c.a == -1) {
                            a aVar = this.c;
                            aVar.a = aVar.b;
                        }
                        this.c.b = -1;
                    }
                    if ((this.c.a != -1 || this.c.b != -1) && Build.VERSION.SDK_INT >= 21) {
                        b(context);
                    }
                }
                b = System.currentTimeMillis();
            }
        }
    }

    private void a(Context context) {
        if (Build.VERSION.SDK_INT < 22) {
            this.c.a = -1;
            return;
        }
        SubscriptionManager subscriptionManagerFrom = SubscriptionManager.from(context.getApplicationContext());
        if (subscriptionManagerFrom != null) {
            try {
                if (this.c.a == -1 && Build.VERSION.SDK_INT >= 24) {
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
    */
    private void b(Context context) {
        c.b("UMCTelephonyManagement", "readSimInfoDbStart");
        Cursor cursorQuery = null;
        try {
            try {
                cursorQuery = context.getContentResolver().query(Uri.parse("content://telephony/siminfo"), new String[]{"_id", "sim_id"}, "sim_id>=?", new String[]{"0"}, null);
                if (cursorQuery != null) {
                    while (cursorQuery.moveToNext()) {
                        int i = cursorQuery.getInt(cursorQuery.getColumnIndex("sim_id"));
                        int i2 = cursorQuery.getInt(cursorQuery.getColumnIndex("_id"));
                        if (this.c.a == -1 && this.c.b != -1 && this.c.b == i2) {
                            this.c.a = i;
                            c.b("UMCTelephonyManagement", "通过读取sim db获取数据流量卡的卡槽值：" + i);
                        }
                        if (this.c.a == i) {
                            this.c.b = i2;
                        }
                    }
                }
            } catch (Exception unused) {
                c.a("UMCTelephonyManagement", "readSimInfoDb error");
                if (cursorQuery != null) {
                }
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            c.b("UMCTelephonyManagement", "readSimInfoDbEnd");
        } catch (Throwable th) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
    }
}
