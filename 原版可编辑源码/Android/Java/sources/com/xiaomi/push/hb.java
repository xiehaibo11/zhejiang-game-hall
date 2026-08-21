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

public class hb {
    private static ao a = new ao(true);
    private static volatile int a = -1;
    private static long a = System.currentTimeMillis();
    private static final Object a = new Object();
    private static List<a> a = Collections.synchronizedList(new ArrayList());
    private static String a = "";
    private static com.xiaomi.push.providers.a a = null;

    class a {
        public int a;
        public long a;
        public String a;
        public int b;
        public long b;
        public String b;

        public a(String str, long j, int i, int i2, String str2, long j2) {
            this.a = "";
            this.a = 0L;
            this.a = -1;
            this.b = -1;
            this.b = "";
            this.b = 0L;
            this.a = str;
            this.a = j;
            this.a = i;
            this.b = i2;
            this.b = str2;
            this.b = j2;
        }

        public boolean a(a aVar) {
            return TextUtils.equals(aVar.a, this.a) && TextUtils.equals(aVar.b, this.b) && aVar.a == this.a && aVar.b == this.b && Math.abs(aVar.a - this.a) <= 5000;
        }
    }

    public static int a(Context context) {
        if (a == -1) {
            a = b(context);
        }
        return a;
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
            long j3 = a;
            a = j2;
            if (j2 - j3 > 30000 && j > 1024) {
                return j * 2;
            }
        }
        return (j * ((long) (i == 0 ? 13 : 11))) / 10;
    }

    private static com.xiaomi.push.providers.a a(Context context) {
        com.xiaomi.push.providers.a aVar = a;
        if (aVar != null) {
            return aVar;
        }
        com.xiaomi.push.providers.a aVar2 = new com.xiaomi.push.providers.a(context);
        a = aVar2;
        return aVar2;
    }

    private static synchronized String a(Context context) {
        if (TextUtils.isEmpty(a)) {
            return "";
        }
        return a;
    }

    public static void a(Context context) {
        a = b(context);
    }

    private static void a(Context context, String str, long j, boolean z, long j2) {
        int iA;
        boolean zIsEmpty;
        if (context == null || TextUtils.isEmpty(str) || !"com.xiaomi.xmsf".equals(context.getPackageName()) || "com.xiaomi.xmsf".equals(str) || -1 == (iA = a(context))) {
            return;
        }
        synchronized (a) {
            zIsEmpty = a.isEmpty();
            a(new a(str, j2, iA, z ? 1 : 0, iA == 0 ? a(context) : "", j));
        }
        if (zIsEmpty) {
            a.a(new hc(context), 5000L);
        }
    }

    public static void a(Context context, String str, long j, boolean z, boolean z2, long j2) {
        a(context, str, a(a(context), j, z, j2, z2), z, j2);
    }

    private static void a(a aVar) {
        for (a aVar2 : a) {
            if (aVar2.a(aVar)) {
                aVar2.b += aVar.b;
                return;
            }
        }
        a.add(aVar);
    }

    public static synchronized void a(String str) {
        if (!m.d() && !TextUtils.isEmpty(str)) {
            a = str;
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

    private static void b(Context context, List<a> list) {
        try {
            synchronized (com.xiaomi.push.providers.a.a) {
                SQLiteDatabase writableDatabase = a(context).getWritableDatabase();
                writableDatabase.beginTransaction();
                try {
                    for (a aVar : list) {
                        ContentValues contentValues = new ContentValues();
                        contentValues.put("package_name", aVar.a);
                        contentValues.put("message_ts", Long.valueOf(aVar.a));
                        contentValues.put("network_type", Integer.valueOf(aVar.a));
                        contentValues.put("bytes", Long.valueOf(aVar.b));
                        contentValues.put("rcv", Integer.valueOf(aVar.b));
                        contentValues.put("imsi", aVar.b);
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
