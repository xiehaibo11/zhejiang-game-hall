package com.igexin.push.core.b;

import android.content.ContentValues;
import android.database.Cursor;
import android.database.sqlite.SQLiteDatabase;
import android.os.SystemClock;
import android.text.TextUtils;
import com.igexin.push.util.EncryptUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Random;
import java.util.UUID;

public class i implements b {
    private static final String a = i.class.getName();
    private static i b;
    private boolean c;

    private i() {
    }

    public static i a() {
        if (b == null) {
            b = new i();
        }
        return b;
    }

    private void a(SQLiteDatabase sQLiteDatabase, int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", str);
        sQLiteDatabase.replace("runtime", null, contentValues);
    }

    private void a(SQLiteDatabase sQLiteDatabase, int i, byte[] bArr) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", bArr);
        sQLiteDatabase.replace("runtime", null, contentValues);
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x004f A[PHI: r11
      0x004f: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:20:0x004d, B:13:0x0042] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private byte[] a(SQLiteDatabase sQLiteDatabase, int i) throws Throwable {
        Cursor cursorQuery;
        Cursor cursor = null;
        try {
            cursorQuery = sQLiteDatabase.query("runtime", new String[]{"value"}, "id=" + i, null, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.moveToFirst()) {
                        byte[] bArrC = com.igexin.b.a.a.a.c(cursorQuery.getBlob(cursorQuery.getColumnIndex("value")), com.igexin.push.core.d.E);
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return bArrC;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorQuery;
                    if (cursor != null) {
                        cursor.close();
                    }
                    throw th;
                }
            }
        } catch (Exception unused2) {
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0049 A[PHI: r11
      0x0049: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:20:0x0047, B:13:0x003c] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private String b(SQLiteDatabase sQLiteDatabase, int i) throws Throwable {
        Cursor cursorQuery;
        Cursor cursor = null;
        try {
            cursorQuery = sQLiteDatabase.query("runtime", new String[]{"value"}, "id=" + i, null, null, null, null);
            if (cursorQuery != null) {
                try {
                    if (cursorQuery.moveToFirst()) {
                        String string = cursorQuery.getString(cursorQuery.getColumnIndex("value"));
                        if (cursorQuery != null) {
                            cursorQuery.close();
                        }
                        return string;
                    }
                } catch (Exception unused) {
                    if (cursorQuery != null) {
                    }
                } catch (Throwable th) {
                    th = th;
                    cursor = cursorQuery;
                    if (cursor != null) {
                        cursor.close();
                    }
                    throw th;
                }
            }
        } catch (Exception unused2) {
            cursorQuery = null;
        } catch (Throwable th2) {
            th = th2;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        return null;
    }

    private void e() {
        String string = com.igexin.push.core.d.w;
        if (TextUtils.isEmpty(string) || string.length() <= 8) {
            try {
                StringBuilder sb = new StringBuilder();
                sb.append("V");
                sb.append(com.igexin.b.b.a.a(h() + com.igexin.push.core.d.e + UUID.randomUUID()));
                string = sb.toString();
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(a + "|" + th.toString(), new Object[0]);
                StringBuilder sb2 = new StringBuilder();
                sb2.append("V");
                sb2.append(h());
                string = sb2.toString();
            }
        }
        com.igexin.push.core.d.D = "A-" + string + Constants.ACCEPT_TIME_SEPARATOR_SERVER + System.currentTimeMillis();
        if (com.igexin.push.core.d.D.length() >= 64) {
            try {
                com.igexin.push.core.d.D = com.igexin.push.core.d.D.substring(0, 62);
            } catch (Throwable th2) {
                com.igexin.b.a.c.b.a(a + "|" + th2.toString(), new Object[0]);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004a A[PHI: r1
      0x004a: PHI (r1v3 android.database.Cursor) = (r1v2 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:14:0x0048, B:8:0x003e] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void e(SQLiteDatabase sQLiteDatabase) {
        Cursor cursorQuery = null;
        try {
            cursorQuery = sQLiteDatabase.query("runtime", new String[]{"value"}, "id=?", new String[]{com.tencent.connect.common.Constants.VIA_REPORT_TYPE_CHAT_AUDIO}, null, null, null);
            if (cursorQuery != null && cursorQuery.moveToFirst()) {
                com.igexin.push.core.d.E = new String(com.igexin.b.a.a.a.c(cursorQuery.getBlob(cursorQuery.getColumnIndex("value")), com.igexin.b.b.a.a(com.igexin.push.core.d.g.getPackageName())));
            }
        } catch (Exception unused) {
            if (cursorQuery != null) {
            }
        } catch (Throwable th) {
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            throw th;
        }
        if (cursorQuery != null) {
            cursorQuery.close();
        }
        if (com.igexin.push.core.d.E == null) {
            com.igexin.push.core.d.E = com.igexin.b.b.a.a(com.igexin.push.core.d.w == null ? "cantgetimei" : com.igexin.push.core.d.w);
        }
    }

    private void f(SQLiteDatabase sQLiteDatabase) throws Throwable {
        String strB = b(sQLiteDatabase, 2);
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        if (strB.equals("null")) {
            strB = null;
        }
        com.igexin.push.core.d.A = strB;
    }

    private boolean f() {
        return com.igexin.b.a.b.c.b().a(new y(this), false, true);
    }

    private void g() {
        com.igexin.push.core.d.d.a().b(com.igexin.push.core.d.g, com.igexin.push.core.d.u);
        com.igexin.push.core.d.d.a().a(com.igexin.push.core.d.g, com.igexin.push.core.d.t);
        String strC = com.igexin.push.util.c.c();
        if (strC == null || strC.length() <= 5) {
            com.igexin.push.util.c.e();
        }
    }

    private void g(SQLiteDatabase sQLiteDatabase) throws Throwable {
        String strB = b(sQLiteDatabase, 46);
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        if (strB.equals("null")) {
            strB = null;
        }
        com.igexin.push.core.d.B = strB;
    }

    private byte[] g(String str) {
        return EncryptUtils.getBytesEncrypted(str.getBytes());
    }

    private String h() {
        Random random = new Random(Math.abs(new Random().nextLong()));
        String str = "";
        for (int i = 0; i < 15; i++) {
            str = str + random.nextInt(10);
        }
        return str;
    }

    private void h(SQLiteDatabase sQLiteDatabase) throws Throwable {
        String strB = b(sQLiteDatabase, 48);
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        if (strB.equals("null")) {
            strB = null;
        }
        com.igexin.push.core.d.C = strB;
    }

    private void i(SQLiteDatabase sQLiteDatabase) throws Throwable {
        String strB = b(sQLiteDatabase, 3);
        if (TextUtils.isEmpty(strB)) {
            return;
        }
        if (strB.equals("null")) {
            strB = null;
        }
        com.igexin.push.core.d.D = strB;
    }

    private void j(SQLiteDatabase sQLiteDatabase) throws Throwable {
        byte[] bArrA = a(sQLiteDatabase, 1);
        if (bArrA != null) {
            try {
                String str = new String(bArrA);
                com.igexin.push.core.d.t = str.equals("null") ? 0L : Long.parseLong(str);
            } catch (Exception unused) {
            }
            com.igexin.b.a.c.b.a(a + "|db version changed, save session = " + com.igexin.push.core.d.t, new Object[0]);
        }
    }

    private void k(SQLiteDatabase sQLiteDatabase) throws Throwable {
        byte[] bArrA = a(sQLiteDatabase, 20);
        if (bArrA != null) {
            String str = new String(bArrA);
            if (str.equals("null")) {
                str = null;
            }
            com.igexin.push.core.d.v = str;
            com.igexin.push.core.d.u = str;
            com.igexin.b.a.c.b.a(a + "|db version changed, save cid = " + str, new Object[0]);
        }
    }

    @Override
    public void a(SQLiteDatabase sQLiteDatabase) {
    }

    public boolean a(int i) {
        com.igexin.push.core.d.P = i;
        return com.igexin.b.a.b.c.b().a(new o(this), false, true);
    }

    public boolean a(long j) {
        com.igexin.push.core.d.a(j);
        return com.igexin.b.a.b.c.b().a(new z(this), false, true);
    }

    public boolean a(String str) {
        return com.igexin.b.a.b.c.b().a(new x(this, str), false, true);
    }

    public boolean a(String str, String str2, long j) {
        com.igexin.push.core.d.t = j;
        if (TextUtils.isEmpty(com.igexin.push.core.d.A)) {
            com.igexin.push.core.d.A = str2;
        }
        com.igexin.push.core.d.u = str;
        return f();
    }

    public boolean a(String str, boolean z) {
        com.igexin.b.a.b.c cVarB;
        com.igexin.b.a.d.e qVar;
        if (str == null) {
            return false;
        }
        if (z) {
            if (!str.equals(com.igexin.push.core.d.ah)) {
                com.igexin.push.core.d.ah = str.equals("null") ? null : str;
                cVarB = com.igexin.b.a.b.c.b();
                qVar = new p(this, str);
                return cVarB.a(qVar, false, true);
            }
            return false;
        }
        if (!str.equals(com.igexin.push.core.d.ai)) {
            com.igexin.push.core.d.ai = str.equals("null") ? null : str;
            cVarB = com.igexin.b.a.b.c.b();
            qVar = new q(this, str);
            return cVarB.a(qVar, false, true);
        }
        return false;
    }

    public boolean a(boolean z) {
        if (com.igexin.push.core.d.K == z) {
            return false;
        }
        com.igexin.push.core.d.K = z;
        if (!z) {
            com.igexin.push.f.a.k();
        }
        return com.igexin.b.a.b.c.b().a(new l(this), false, true);
    }

    public void b() {
        com.igexin.b.a.b.c.b().a(new j(this), false, true);
    }

    /* JADX WARN: Removed duplicated region for block: B:180:0x0314 A[PHI: r2 r12 r14 r15
      0x0314: PHI (r2v2 android.database.Cursor) = (r2v1 android.database.Cursor), (r2v28 android.database.Cursor) binds: [B:179:0x0312, B:171:0x0303] A[DONT_GENERATE, DONT_INLINE]
      0x0314: PHI (r12v3 int) = (r12v2 int), (r12v5 int) binds: [B:179:0x0312, B:171:0x0303] A[DONT_GENERATE, DONT_INLINE]
      0x0314: PHI (r14v3 int) = (r14v2 int), (r14v5 int) binds: [B:179:0x0312, B:171:0x0303] A[DONT_GENERATE, DONT_INLINE]
      0x0314: PHI (r15v3 boolean) = (r15v2 boolean), (r15v5 boolean) binds: [B:179:0x0312, B:171:0x0303] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:183:0x031d  */
    /* JADX WARN: Removed duplicated region for block: B:202:0x0391  */
    /* JADX WARN: Removed duplicated region for block: B:204:0x0397  */
    /* JADX WARN: Removed duplicated region for block: B:205:0x03a8  */
    /* JADX WARN: Removed duplicated region for block: B:210:0x03be  */
    /* JADX WARN: Removed duplicated region for block: B:219:0x03f0  */
    /* JADX WARN: Removed duplicated region for block: B:222:0x0415  */
    /* JADX WARN: Removed duplicated region for block: B:261:0x02c3 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:295:0x0082 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:340:? A[RETURN, SYNTHETIC] */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void b(SQLiteDatabase sQLiteDatabase) throws Throwable {
        boolean z;
        int i;
        int i2;
        Cursor cursorQuery;
        String strC;
        String strB;
        byte[] blob;
        String string;
        e(sQLiteDatabase);
        Cursor cursor = null;
        try {
            try {
                z = false;
                i = 1;
                i2 = 20;
                try {
                    cursorQuery = sQLiteDatabase.query("runtime", new String[]{"id", "value"}, null, null, null, null, "id");
                    if (cursorQuery != null) {
                        while (cursorQuery.moveToNext()) {
                            try {
                                try {
                                    int i3 = cursorQuery.getInt(0);
                                    if (i3 == 1 || i3 == 14 || i3 == 19 || i3 == 20 || i3 == 23 || i3 == 25 || i3 == 22 || i3 == 31 || i3 == 30 || i3 == 49 || i3 == 50) {
                                        blob = cursorQuery.getBlob(1);
                                        if (blob != null) {
                                            blob = com.igexin.b.a.a.a.c(blob, com.igexin.push.core.d.E);
                                        }
                                        string = null;
                                        if (blob == null || string != null) {
                                            if (i3 != 1) {
                                                String str = new String(blob);
                                                try {
                                                    com.igexin.push.core.d.t = str.equals("null") ? 0L : Long.parseLong(str);
                                                } catch (Exception unused) {
                                                    com.igexin.push.core.d.t = 0L;
                                                }
                                            } else if (i3 == 2) {
                                                if (string.equals("null")) {
                                                    string = null;
                                                }
                                                com.igexin.push.core.d.A = string;
                                            } else if (i3 == 3) {
                                                if (string.equals("null")) {
                                                    string = null;
                                                }
                                                com.igexin.push.core.d.D = string;
                                            } else if (i3 == 4) {
                                                com.igexin.push.core.d.m = string.equals("null") || Boolean.parseBoolean(string);
                                            } else if (i3 == 6) {
                                                com.igexin.push.core.d.H = string.equals("null") ? 0L : Long.parseLong(string);
                                            } else if (i3 == 40) {
                                                com.igexin.push.d.b.a().a(!string.equals("null") && Boolean.parseBoolean(string));
                                            } else if (i3 == 30) {
                                                String str2 = new String(blob);
                                                if (str2.equals("null")) {
                                                    str2 = null;
                                                }
                                                com.igexin.push.core.d.ai = str2;
                                                com.igexin.b.a.c.b.a(a + "|DT_ read last domainWifiStatus = " + com.igexin.push.core.d.ai, new Object[0]);
                                            } else if (i3 != 31) {
                                                switch (i3) {
                                                    case 13:
                                                        if (string.equals("null")) {
                                                            string = null;
                                                        }
                                                        com.igexin.push.core.d.J = string;
                                                        break;
                                                    case 14:
                                                        com.igexin.push.core.d.ad = new String(blob);
                                                        break;
                                                    case 15:
                                                        if (!string.equals("null")) {
                                                            com.igexin.push.core.d.K = Boolean.parseBoolean(string);
                                                        }
                                                        break;
                                                    case 16:
                                                        com.igexin.push.core.d.L = string.equals("null") ? 0L : Long.parseLong(string);
                                                        break;
                                                    case 17:
                                                        if (string.equals("null")) {
                                                            string = null;
                                                        }
                                                        com.igexin.push.core.d.N = string;
                                                        break;
                                                    case 18:
                                                        com.igexin.push.core.d.P = string.equals("null") ? 0 : Integer.parseInt(string);
                                                        break;
                                                    case 19:
                                                        String str3 = new String(blob);
                                                        if (str3.equals("null")) {
                                                            str3 = null;
                                                        }
                                                        com.igexin.push.core.d.z = str3;
                                                        break;
                                                    case 20:
                                                        String str4 = new String(blob);
                                                        if (str4.equals("null")) {
                                                            str4 = null;
                                                        }
                                                        com.igexin.push.core.d.v = str4;
                                                        com.igexin.push.core.d.u = str4;
                                                        break;
                                                    case 21:
                                                        com.igexin.push.core.d.ae = string.equals("null") ? 0L : Long.parseLong(string);
                                                        break;
                                                    case 22:
                                                        String str5 = new String(blob);
                                                        if (str5.equals("null")) {
                                                            str5 = null;
                                                        }
                                                        com.igexin.push.core.d.ag = str5;
                                                        com.igexin.b.a.c.b.a(a + "|DT_ read last wifi result = " + com.igexin.push.core.d.ag, new Object[0]);
                                                        break;
                                                    case 23:
                                                        String str6 = new String(blob);
                                                        if (str6.equals("null")) {
                                                            str6 = null;
                                                        }
                                                        com.igexin.push.core.d.af = str6;
                                                        com.igexin.b.a.c.b.a(a + "|DT_ read last mobile result = " + com.igexin.push.core.d.af, new Object[0]);
                                                        break;
                                                    default:
                                                        switch (i3) {
                                                            case 46:
                                                                if (string.equals("null")) {
                                                                    string = null;
                                                                }
                                                                com.igexin.push.core.d.B = string;
                                                                break;
                                                            case 47:
                                                                com.igexin.push.core.d.am = string.equals("null") ? 0 : Integer.parseInt(string);
                                                                break;
                                                            case 48:
                                                                if (string.equals("null")) {
                                                                    string = null;
                                                                }
                                                                com.igexin.push.core.d.C = string;
                                                                break;
                                                            case 49:
                                                                String str7 = new String(blob);
                                                                if (str7.equals("null")) {
                                                                    str7 = null;
                                                                }
                                                                com.igexin.push.core.d.aj = str7;
                                                                com.igexin.b.a.c.b.a(a + "|read last wifiRedirectCmList = " + com.igexin.push.core.d.aj, new Object[0]);
                                                                break;
                                                            case 50:
                                                                String str8 = new String(blob);
                                                                if (str8.equals("null")) {
                                                                    str8 = null;
                                                                }
                                                                com.igexin.push.core.d.ak = str8;
                                                                com.igexin.b.a.c.b.a(a + "|read last mobileRedirectCmList = " + com.igexin.push.core.d.ak, new Object[0]);
                                                                break;
                                                            case 51:
                                                                com.igexin.push.core.d.T = string.equals("null") ? 0L : Long.parseLong(string);
                                                                break;
                                                        }
                                                        break;
                                                }
                                            } else {
                                                String str9 = new String(blob);
                                                if (str9.equals("null")) {
                                                    str9 = null;
                                                }
                                                com.igexin.push.core.d.ah = str9;
                                                com.igexin.b.a.c.b.a(a + "|DT_ read last domainMobileStatus = " + com.igexin.push.core.d.ah, new Object[0]);
                                            }
                                        }
                                    } else {
                                        try {
                                            string = cursorQuery.getString(1);
                                            blob = null;
                                            if (blob == null) {
                                            }
                                            if (i3 != 1) {
                                            }
                                        } catch (Throwable th) {
                                            com.igexin.b.a.c.b.a(a + "|" + th.toString(), new Object[0]);
                                        }
                                    }
                                } catch (Exception unused2) {
                                    if (cursorQuery != null) {
                                    }
                                }
                            } catch (Throwable th2) {
                                th = th2;
                                cursor = cursorQuery;
                                if (cursor != null) {
                                    cursor.close();
                                }
                                throw th;
                            }
                        }
                    }
                } catch (Exception unused3) {
                    cursorQuery = null;
                    if (cursorQuery != null) {
                    }
                    if (com.igexin.push.core.d.t == 0) {
                    }
                    if (com.igexin.push.core.d.u == null) {
                        com.igexin.push.core.d.v = strB;
                        com.igexin.push.core.d.u = strB;
                        a(sQLiteDatabase, i2, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.u.getBytes()));
                    }
                    if (com.igexin.push.core.d.u == null) {
                        com.igexin.push.core.d.v = com.igexin.b.b.a.a(String.valueOf(com.igexin.push.core.d.t));
                        com.igexin.push.core.d.a(com.igexin.push.core.d.t);
                        a(sQLiteDatabase, i2, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.u.getBytes()));
                    }
                    if (!"cfcd208495d565ef66e7dff9f98764da".equals(com.igexin.push.core.d.u)) {
                        if (com.igexin.push.core.d.t == 0) {
                        }
                    }
                    if (!TextUtils.isEmpty(com.igexin.push.core.d.ad)) {
                        com.igexin.push.core.d.ad = com.igexin.b.b.a.a(32);
                        a(sQLiteDatabase, 14, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.ad.getBytes()));
                    }
                    strC = com.igexin.push.util.c.c();
                    if (com.igexin.push.core.d.A == null) {
                        com.igexin.push.core.d.A = strC;
                        a(sQLiteDatabase, 2, com.igexin.push.core.d.A);
                    }
                    if (com.igexin.push.core.d.D == null) {
                    }
                    if (this.c) {
                    }
                }
            } catch (Exception unused4) {
                z = false;
                i = 1;
                i2 = 20;
            }
            if (cursorQuery != null) {
                cursorQuery.close();
            }
            if (com.igexin.push.core.d.t == 0) {
                long jD = com.igexin.push.util.c.d();
                if (jD != 0) {
                    com.igexin.push.core.d.t = jD;
                    a(sQLiteDatabase, i, EncryptUtils.getBytesEncrypted(String.valueOf(jD).getBytes()));
                }
            }
            if (com.igexin.push.core.d.u == null && (strB = com.igexin.push.util.c.b()) != null) {
                com.igexin.push.core.d.v = strB;
                com.igexin.push.core.d.u = strB;
                a(sQLiteDatabase, i2, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.u.getBytes()));
            }
            if (com.igexin.push.core.d.u == null && com.igexin.push.core.d.t != 0) {
                com.igexin.push.core.d.v = com.igexin.b.b.a.a(String.valueOf(com.igexin.push.core.d.t));
                com.igexin.push.core.d.a(com.igexin.push.core.d.t);
                a(sQLiteDatabase, i2, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.u.getBytes()));
            }
            if (!"cfcd208495d565ef66e7dff9f98764da".equals(com.igexin.push.core.d.u) || (com.igexin.push.core.d.u != null && !com.igexin.push.core.d.u.matches("([a-f]|[0-9]){32}"))) {
                if (com.igexin.push.core.d.t == 0) {
                    a().a(com.igexin.push.core.d.t);
                    com.igexin.push.core.d.v = com.igexin.push.core.d.u;
                    com.igexin.push.util.c.f();
                } else {
                    com.igexin.push.core.d.v = null;
                    com.igexin.push.core.d.u = "null";
                    com.igexin.push.core.d.t = 0L;
                }
            }
            if (!TextUtils.isEmpty(com.igexin.push.core.d.ad) || "null".equals(com.igexin.push.core.d.ad)) {
                com.igexin.push.core.d.ad = com.igexin.b.b.a.a(32);
                a(sQLiteDatabase, 14, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.ad.getBytes()));
            }
            strC = com.igexin.push.util.c.c();
            if (com.igexin.push.core.d.A == null && strC != null && strC.length() > 5) {
                com.igexin.push.core.d.A = strC;
                a(sQLiteDatabase, 2, com.igexin.push.core.d.A);
            }
            if (com.igexin.push.core.d.D == null) {
                e();
                a(sQLiteDatabase, 3, com.igexin.push.core.d.D);
                com.igexin.b.a.c.b.a(a, "new registerId : " + com.igexin.push.core.d.D);
            }
            if (this.c) {
                return;
            }
            this.c = z;
            if (!TextUtils.isEmpty(com.igexin.push.core.d.E)) {
                a(sQLiteDatabase, 25, com.igexin.b.a.a.a.d(com.igexin.push.core.d.E.getBytes(), com.igexin.b.b.a.a(com.igexin.push.core.d.g.getPackageName())));
            }
            if (com.igexin.push.core.d.t != 0) {
                a(sQLiteDatabase, i, EncryptUtils.getBytesEncrypted(String.valueOf(com.igexin.push.core.d.t).getBytes()));
            }
            if (!TextUtils.isEmpty(com.igexin.push.core.d.u)) {
                a(sQLiteDatabase, i2, EncryptUtils.getBytesEncrypted(com.igexin.push.core.d.u.getBytes()));
            }
            if (!TextUtils.isEmpty(com.igexin.push.core.d.A) && com.igexin.push.core.d.A.length() > 5) {
                a(sQLiteDatabase, 2, com.igexin.push.core.d.A);
            }
            if (!TextUtils.isEmpty(com.igexin.push.core.d.D)) {
                a(sQLiteDatabase, 3, com.igexin.push.core.d.D);
            }
            if (!TextUtils.isEmpty(com.igexin.push.core.d.B)) {
                a(sQLiteDatabase, 46, com.igexin.push.core.d.B);
            }
            if (TextUtils.isEmpty(com.igexin.push.core.d.C)) {
                return;
            }
            a(sQLiteDatabase, 48, com.igexin.push.core.d.C);
        } catch (Throwable th3) {
            th = th3;
        }
    }

    public boolean b(int i) {
        if (com.igexin.push.core.d.am == i) {
            return false;
        }
        com.igexin.push.core.d.am = i;
        return com.igexin.b.a.b.c.b().a(new u(this), false, true);
    }

    public boolean b(long j) {
        com.igexin.push.core.d.ae = j;
        com.igexin.b.a.c.b.a(a + "|save idc config failed time : " + j, new Object[0]);
        return com.igexin.b.a.b.c.b().a(new ad(this, j), false, true);
    }

    public boolean b(String str) {
        com.igexin.push.core.d.A = str;
        return com.igexin.b.a.b.c.b().a(new aa(this), false, true);
    }

    public boolean b(String str, boolean z) {
        com.igexin.b.a.b.c cVarB;
        com.igexin.b.a.d.e sVar;
        if (str == null) {
            return false;
        }
        if (z) {
            if (!str.equals(com.igexin.push.core.d.af)) {
                com.igexin.push.core.d.af = str.equals("null") ? null : str;
                cVarB = com.igexin.b.a.b.c.b();
                sVar = new r(this, str);
                return cVarB.a(sVar, false, true);
            }
            return false;
        }
        if (!str.equals(com.igexin.push.core.d.ag)) {
            com.igexin.push.core.d.ag = str.equals("null") ? null : str;
            cVarB = com.igexin.b.a.b.c.b();
            sVar = new s(this, str);
            return cVarB.a(sVar, false, true);
        }
        return false;
    }

    public boolean b(boolean z) {
        return com.igexin.b.a.b.c.b().a(new v(this, z), false, true);
    }

    public void c() {
        com.igexin.push.core.d.t = 0L;
        com.igexin.push.core.d.u = "null";
        f();
    }

    @Override
    public void c(SQLiteDatabase sQLiteDatabase) {
        a(sQLiteDatabase, 1, com.igexin.b.a.a.a.d(String.valueOf(com.igexin.push.core.d.t).getBytes(), com.igexin.push.core.d.E));
        a(sQLiteDatabase, 4, String.valueOf(com.igexin.push.core.d.m));
        a(sQLiteDatabase, 3, com.igexin.push.core.d.D);
        a(sQLiteDatabase, 20, com.igexin.b.a.a.a.d(com.igexin.push.core.d.u.getBytes(), com.igexin.push.core.d.E));
        a(sQLiteDatabase, 2, com.igexin.push.core.d.A);
        a(sQLiteDatabase, 25, com.igexin.b.a.a.a.d(com.igexin.push.core.d.E.getBytes(), com.igexin.b.b.a.a(com.igexin.push.core.d.g.getPackageName())));
    }

    public boolean c(long j) {
        if (com.igexin.push.core.d.L == j) {
            return false;
        }
        com.igexin.push.core.d.L = j;
        return com.igexin.b.a.b.c.b().a(new m(this), false, true);
    }

    public boolean c(String str) {
        com.igexin.push.core.d.B = str;
        return com.igexin.b.a.b.c.b().a(new ab(this), false, true);
    }

    public boolean c(String str, boolean z) {
        if (str == null) {
            return false;
        }
        String str2 = str.equals("null") ? null : str;
        if (z && !TextUtils.equals(com.igexin.push.core.d.ak, str)) {
            com.igexin.push.core.d.ak = str2;
        } else {
            if (z || TextUtils.equals(com.igexin.push.core.d.aj, str)) {
                return false;
            }
            com.igexin.push.core.d.aj = str2;
        }
        com.igexin.b.a.c.b.a(a + "|saveLastRedirectCmList isMobile = " + z + ", lastRedirectCmList = " + str, new Object[0]);
        return com.igexin.b.a.b.c.b().a(new w(this, z, str), false, true);
    }

    public void d() {
        com.igexin.b.a.c.b.a(a + "| found a duplicate cid " + com.igexin.push.core.d.u, new Object[0]);
        com.igexin.push.core.d.D = null;
        e();
        a().a(com.igexin.push.core.d.D);
        a().c();
        com.igexin.push.core.d.q = 0;
        com.igexin.push.f.b.f.i().a(SystemClock.elapsedRealtime());
    }

    public void d(SQLiteDatabase sQLiteDatabase) {
        this.c = true;
        e(sQLiteDatabase);
        j(sQLiteDatabase);
        k(sQLiteDatabase);
        i(sQLiteDatabase);
        f(sQLiteDatabase);
        g(sQLiteDatabase);
        h(sQLiteDatabase);
    }

    public boolean d(long j) {
        if (com.igexin.push.core.d.H == j) {
            return false;
        }
        com.igexin.push.core.d.H = j;
        return com.igexin.b.a.b.c.b().a(new t(this), false, true);
    }

    public boolean d(String str) {
        com.igexin.push.core.d.C = str;
        return com.igexin.b.a.b.c.b().a(new ac(this), false, true);
    }

    public boolean e(String str) {
        if (str == null || str.equals(com.igexin.push.core.d.J)) {
            return false;
        }
        com.igexin.push.core.d.J = str;
        com.igexin.b.a.b.c.b().a(new k(this), false, true);
        return true;
    }

    public boolean f(String str) {
        if (str.equals(com.igexin.push.core.d.N)) {
            return false;
        }
        com.igexin.push.core.d.N = str;
        return com.igexin.b.a.b.c.b().a(new n(this), false, true);
    }
}
