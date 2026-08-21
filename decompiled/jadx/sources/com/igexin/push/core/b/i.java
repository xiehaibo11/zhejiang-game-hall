package com.igexin.push.core.b;

import android.content.ContentValues;
import android.database.sqlite.SQLiteDatabase;
import android.os.SystemClock;
import android.text.TextUtils;
import com.igexin.push.util.EncryptUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.Random;
import java.util.UUID;

/* JADX INFO: loaded from: classes2.dex */
public class i implements b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2532a = i.class.getName();
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

    /* JADX INFO: Access modifiers changed from: private */
    public void a(SQLiteDatabase sQLiteDatabase, int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", str);
        sQLiteDatabase.replace("runtime", null, contentValues);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(SQLiteDatabase sQLiteDatabase, int i, byte[] bArr) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("id", Integer.valueOf(i));
        contentValues.put("value", bArr);
        sQLiteDatabase.replace("runtime", null, contentValues);
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x004f A[PHI: r11
      0x004f: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:20:0x004d, B:13:0x0042] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private byte[] a(android.database.sqlite.SQLiteDatabase r11, int r12) throws java.lang.Throwable {
        /*
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r2.<init>()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.String r5 = "id="
            r2.append(r5)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r2.append(r12)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            if (r11 == 0) goto L42
            boolean r12 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            if (r12 == 0) goto L42
            int r12 = r11.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            byte[] r12 = r11.getBlob(r12)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            java.lang.String r0 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            byte[] r12 = com.igexin.b.a.a.a.c(r12, r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            if (r11 == 0) goto L3e
            r11.close()
        L3e:
            return r12
        L3f:
            r12 = move-exception
            r1 = r11
            goto L46
        L42:
            if (r11 == 0) goto L52
            goto L4f
        L45:
            r12 = move-exception
        L46:
            if (r1 == 0) goto L4b
            r1.close()
        L4b:
            throw r12
        L4c:
            r11 = r1
        L4d:
            if (r11 == 0) goto L52
        L4f:
            r11.close()
        L52:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.b.i.a(android.database.sqlite.SQLiteDatabase, int):byte[]");
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0049 A[PHI: r11
      0x0049: PHI (r11v3 android.database.Cursor) = (r11v2 android.database.Cursor), (r11v4 android.database.Cursor) binds: [B:20:0x0047, B:13:0x003c] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String b(android.database.sqlite.SQLiteDatabase r11, int r12) throws java.lang.Throwable {
        /*
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r2.<init>()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.String r5 = "id="
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r2.append(r12)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            if (r11 == 0) goto L3c
            boolean r12 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            if (r12 == 0) goto L3c
            int r12 = r11.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            java.lang.String r12 = r11.getString(r12)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            if (r11 == 0) goto L38
            r11.close()
        L38:
            return r12
        L39:
            r12 = move-exception
            r1 = r11
            goto L40
        L3c:
            if (r11 == 0) goto L4c
            goto L49
        L3f:
            r12 = move-exception
        L40:
            if (r1 == 0) goto L45
            r1.close()
        L45:
            throw r12
        L46:
            r11 = r1
        L47:
            if (r11 == 0) goto L4c
        L49:
            r11.close()
        L4c:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.b.i.b(android.database.sqlite.SQLiteDatabase, int):java.lang.String");
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
                com.igexin.b.a.c.b.a(f2532a + "|" + th.toString(), new Object[0]);
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
                com.igexin.b.a.c.b.a(f2532a + "|" + th2.toString(), new Object[0]);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004a A[PHI: r1
      0x004a: PHI (r1v3 android.database.Cursor) = (r1v2 android.database.Cursor), (r1v4 android.database.Cursor) binds: [B:14:0x0048, B:8:0x003e] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void e(android.database.sqlite.SQLiteDatabase r11) {
        /*
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r5 = "id=?"
            java.lang.String r2 = "25"
            java.lang.String[] r6 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            if (r1 == 0) goto L3e
            boolean r11 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            if (r11 == 0) goto L3e
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            byte[] r0 = r1.getBlob(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r2 = com.igexin.b.b.a.a(r2)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            byte[] r0 = com.igexin.b.a.a.a.c(r0, r2)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            com.igexin.push.core.d.E = r11     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
        L3e:
            if (r1 == 0) goto L4d
            goto L4a
        L41:
            r11 = move-exception
            if (r1 == 0) goto L47
            r1.close()
        L47:
            throw r11
        L48:
            if (r1 == 0) goto L4d
        L4a:
            r1.close()
        L4d:
            java.lang.String r11 = com.igexin.push.core.d.E
            if (r11 != 0) goto L60
            java.lang.String r11 = com.igexin.push.core.d.w
            if (r11 != 0) goto L58
            java.lang.String r11 = "cantgetimei"
            goto L5a
        L58:
            java.lang.String r11 = com.igexin.push.core.d.w
        L5a:
            java.lang.String r11 = com.igexin.b.b.a.a(r11)
            com.igexin.push.core.d.E = r11
        L60:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.b.i.e(android.database.sqlite.SQLiteDatabase):void");
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

    /* JADX INFO: Access modifiers changed from: private */
    public void g() {
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

    /* JADX INFO: Access modifiers changed from: private */
    public byte[] g(String str) {
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
            com.igexin.b.a.c.b.a(f2532a + "|db version changed, save session = " + com.igexin.push.core.d.t, new Object[0]);
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
            com.igexin.b.a.c.b.a(f2532a + "|db version changed, save cid = " + str, new Object[0]);
        }
    }

    @Override // com.igexin.push.core.b.b
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
    @Override // com.igexin.push.core.b.b
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void b(android.database.sqlite.SQLiteDatabase r22) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 1234
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.b.i.b(android.database.sqlite.SQLiteDatabase):void");
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
        com.igexin.b.a.c.b.a(f2532a + "|save idc config failed time : " + j, new Object[0]);
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

    @Override // com.igexin.push.core.b.b
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
        com.igexin.b.a.c.b.a(f2532a + "|saveLastRedirectCmList isMobile = " + z + ", lastRedirectCmList = " + str, new Object[0]);
        return com.igexin.b.a.b.c.b().a(new w(this, z, str), false, true);
    }

    public void d() {
        com.igexin.b.a.c.b.a(f2532a + "| found a duplicate cid " + com.igexin.push.core.d.u, new Object[0]);
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
