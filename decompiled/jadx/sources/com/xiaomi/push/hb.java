package com.xiaomi.push;

import android.content.ContentValues;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.text.TextUtils;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
public class hb {

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static ao f467a = new ao(true);

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile int f8198a = -1;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static long f466a = System.currentTimeMillis();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static final Object f469a = new Object();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static List<a> f471a = Collections.synchronizedList(new ArrayList());

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static String f470a = "";

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static com.xiaomi.push.providers.a f468a = null;

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public int f8199a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public long f472a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        public String f473a;
        public int b;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        public long f474b;

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        public String f475b;

        public a(String str, long j, int i, int i2, String str2, long j2) {
            this.f473a = "";
            this.f472a = 0L;
            this.f8199a = -1;
            this.b = -1;
            this.f475b = "";
            this.f474b = 0L;
            this.f473a = str;
            this.f472a = j;
            this.f8199a = i;
            this.b = i2;
            this.f475b = str2;
            this.f474b = j2;
        }

        public boolean a(a aVar) {
            return TextUtils.equals(aVar.f473a, this.f473a) && TextUtils.equals(aVar.f475b, this.f475b) && aVar.f8199a == this.f8199a && aVar.b == this.b && Math.abs(aVar.f472a - this.f472a) <= 5000;
        }
    }

    public static int a(Context context) {
        if (f8198a == -1) {
            f8198a = b(context);
        }
        return f8198a;
    }

    public static int a(String str) {
        try {
            return str.getBytes("UTF-8").length;
        } catch (UnsupportedEncodingException unused) {
            return str.getBytes().length;
        }
    }

    private static long a(int i, long j, boolean z, long j2, boolean z2) {
        if (z && z2) {
            long j3 = f466a;
            f466a = j2;
            if (j2 - j3 > 30000 && j > 1024) {
                return j * 2;
            }
        }
        return (j * ((long) (i == 0 ? 13 : 11))) / 10;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static com.xiaomi.push.providers.a m402a(Context context) {
        com.xiaomi.push.providers.a aVar = f468a;
        if (aVar != null) {
            return aVar;
        }
        com.xiaomi.push.providers.a aVar2 = new com.xiaomi.push.providers.a(context);
        f468a = aVar2;
        return aVar2;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    private static synchronized String m403a(Context context) {
        if (TextUtils.isEmpty(f470a)) {
            return "";
        }
        return f470a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static void m405a(Context context) {
        f8198a = b(context);
    }

    private static void a(Context context, String str, long j, boolean z, long j2) {
        int iA;
        boolean zIsEmpty;
        if (context == null || TextUtils.isEmpty(str) || !"com.xiaomi.xmsf".equals(context.getPackageName()) || "com.xiaomi.xmsf".equals(str) || -1 == (iA = a(context))) {
            return;
        }
        synchronized (f469a) {
            zIsEmpty = f471a.isEmpty();
            a(new a(str, j2, iA, z ? 1 : 0, iA == 0 ? m403a(context) : "", j));
        }
        if (zIsEmpty) {
            f467a.a(new hc(context), 5000L);
        }
    }

    public static void a(Context context, String str, long j, boolean z, boolean z2, long j2) {
        a(context, str, a(a(context), j, z, j2, z2), z, j2);
    }

    private static void a(a aVar) {
        for (a aVar2 : f471a) {
            if (aVar2.a(aVar)) {
                aVar2.f474b += aVar.f474b;
                return;
            }
        }
        f471a.add(aVar);
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static synchronized void m406a(String str) {
        if (!m.m580d() && !TextUtils.isEmpty(str)) {
            f470a = str;
        }
    }

    private static int b(Context context) {
        try {
            ConnectivityManager connectivityManager = (ConnectivityManager) context.getSystemService("connectivity");
            if (connectivityManager == null) {
                return -1;
            }
            NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
            if (activeNetworkInfo == null) {
                return -1;
            }
            return activeNetworkInfo.getType();
        } catch (Exception unused) {
            return -1;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(Context context, List<a> list) {
        try {
            synchronized (com.xiaomi.push.providers.a.f837a) {
                SQLiteDatabase writableDatabase = m402a(context).getWritableDatabase();
                writableDatabase.beginTransaction();
                try {
                    for (a aVar : list) {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("package_name", aVar.f473a);
                        contentValues.put("message_ts", Long.valueOf(aVar.f472a));
                        contentValues.put("network_type", Integer.valueOf(aVar.f8199a));
                        contentValues.put("bytes", Long.valueOf(aVar.f474b));
                        contentValues.put("rcv", Integer.valueOf(aVar.b));
                        contentValues.put("imsi", aVar.f475b);
                        writableDatabase.insert("traffic", null, contentValues);
                    }
                    writableDatabase.setTransactionSuccessful();
                } finally {
                    writableDatabase.endTransaction();
                }
            }
        } catch (Throwable th) {
            com.xiaomi.channel.commonutils.logger.b.a(th);
        }
    }
}
