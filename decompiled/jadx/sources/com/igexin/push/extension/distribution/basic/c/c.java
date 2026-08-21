package com.igexin.push.extension.distribution.basic.c;

import android.content.ContentValues;
import android.content.Context;
import android.database.Cursor;
import com.igexin.push.core.CoreConsts;
import com.tkay.expressad.foundation.d.c;
import java.io.File;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2627a = "EXT-" + c.class.getSimpleName();
    private static c d;
    private com.igexin.push.extension.distribution.basic.e.a b;
    private Context c;
    private final String e = "/sdcard/libs//com.getui.sdk.deviceId.db";

    private c(Context context) {
        this.c = context;
    }

    public static c a() {
        if (d == null) {
            d = new c(e.f2629a);
        }
        return d;
    }

    private void a(File file) {
        for (File file2 : file.listFiles()) {
            while (file2.exists()) {
                if (file2.isFile()) {
                    file2.delete();
                } else if (!file2.delete()) {
                    a(file2);
                }
            }
        }
        file.delete();
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00a0 A[EXC_TOP_SPLITTER, PHI: r2
      0x00a0: PHI (r2v3 java.io.FileOutputStream) = (r2v4 java.io.FileOutputStream), (r2v5 java.io.FileOutputStream) binds: [B:26:0x00c9, B:19:0x009e] A[DONT_GENERATE, DONT_INLINE], SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void b(java.lang.String r6) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 214
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.c.c.b(java.lang.String):void");
    }

    private void c(String str) {
        try {
            if (e.l.a()) {
                ContentValues contentValues = new ContentValues();
                contentValues.put("id", (Integer) 2);
                contentValues.put("value", str);
                e.l.a("runtime", (String) null, contentValues);
                e.l.close();
            }
        } catch (Throwable unused) {
        }
    }

    /* JADX WARN: Can't wrap try/catch for region: R(9:4|(4:58|5|56|6)|(5:54|7|(1:9)(1:60)|48|17)|10|(2:14|15)|52|16|48|17) */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String g() throws java.lang.Throwable {
        /*
            r7 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.e
            r0.<init>(r1)
            boolean r0 = r0.exists()
            r1 = 0
            if (r0 == 0) goto L76
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.FileInputStream r2 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            java.lang.String r3 = r7.e     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L6c
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5d
            r3.<init>()     // Catch: java.lang.Throwable -> L59 java.lang.Exception -> L5d
        L1e:
            int r4 = r2.read(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r5 = -1
            r6 = 0
            if (r4 == r5) goto L2a
            r3.write(r0, r6, r4)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            goto L1e
        L2a:
            byte[] r0 = r3.toByteArray()     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            byte[] r0 = com.igexin.b.b.a.c(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r5 = "utf-8"
            r4.<init>(r0, r5)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            java.lang.String r0 = "\\|"
            java.lang.String[] r0 = r4.split(r0)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            int r4 = r0.length     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r5 = 1
            if (r4 <= r5) goto L50
            java.lang.String r4 = "V1"
            r6 = r0[r6]     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            if (r4 == 0) goto L50
            r0 = r0[r5]     // Catch: java.lang.Throwable -> L57 java.lang.Exception -> L6e
            r1 = r0
        L50:
            r2.close()     // Catch: java.lang.Exception -> L53
        L53:
            r3.close()     // Catch: java.lang.Exception -> L76
            goto L76
        L57:
            r0 = move-exception
            goto L5b
        L59:
            r0 = move-exception
            r3 = r1
        L5b:
            r1 = r2
            goto L61
        L5d:
            r3 = r1
            goto L6e
        L5f:
            r0 = move-exception
            r3 = r1
        L61:
            if (r1 == 0) goto L66
            r1.close()     // Catch: java.lang.Exception -> L66
        L66:
            if (r3 == 0) goto L6b
            r3.close()     // Catch: java.lang.Exception -> L6b
        L6b:
            throw r0
        L6c:
            r2 = r1
            r3 = r2
        L6e:
            if (r2 == 0) goto L73
            r2.close()     // Catch: java.lang.Exception -> L73
        L73:
            if (r3 == 0) goto L76
            goto L53
        L76:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.c.c.g():java.lang.String");
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0084 A[DONT_GENERATE, PHI: r1 r8
      0x0084: PHI (r1v1 java.lang.String) = (r1v3 java.lang.String), (r1v4 java.lang.String) binds: [B:24:0x008f, B:18:0x0082] A[DONT_GENERATE, DONT_INLINE]
      0x0084: PHI (r8v3 android.database.Cursor) = (r8v4 android.database.Cursor), (r8v5 android.database.Cursor) binds: [B:24:0x008f, B:18:0x0082] A[DONT_GENERATE, DONT_INLINE]] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String a(java.lang.String r12) {
        /*
            r11 = this;
            java.lang.String r0 = "imageurl"
            java.lang.String r1 = ""
            com.igexin.push.extension.distribution.basic.e.a r2 = r11.b()
            r11.b = r2
            r8 = 0
            java.lang.String r3 = "image"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r9 = 1
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r10 = 0
            r5[r10] = r12     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r6 = 0
            r7 = 0
            android.database.Cursor r8 = r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            if (r8 == 0) goto L82
        L1f:
            r2 = r1
        L20:
            boolean r3 = r8.moveToNext()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r3 == 0) goto L7e
            java.lang.String r3 = "imagesrc"
            int r3 = r8.getColumnIndexOrThrow(r3)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            java.lang.String r2 = r8.getString(r3)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            java.io.File r3 = new java.io.File     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            r3.<init>(r2)     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            boolean r4 = r3.exists()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r4 == 0) goto L41
            boolean r3 = r3.canRead()     // Catch: java.lang.Exception -> L80 java.lang.Throwable -> L88
            if (r3 != 0) goto L20
        L41:
            com.igexin.push.extension.distribution.basic.e.a r2 = r11.b     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "image"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String[] r5 = new java.lang.String[r9]     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r5[r10] = r12     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.a(r3, r4, r5)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.Context r2 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.pm.PackageManager r2 = r2.getPackageManager()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "android.permission.WRITE_EXTERNAL_STORAGE"
            android.content.Context r4 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r4 = r4.getPackageName()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            int r2 = r2.checkPermission(r3, r4)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            if (r2 == 0) goto L1f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.<init>()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            android.content.Context r3 = r11.c     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.io.File r3 = r3.getCacheDir()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r3 = "/ImgCache/"
            r2.append(r3)     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            com.igexin.push.extension.distribution.basic.c.e.k = r2     // Catch: java.lang.Throwable -> L88 java.lang.Exception -> L8f
            goto L1f
        L7e:
            r1 = r2
            goto L82
        L80:
            r1 = r2
            goto L8f
        L82:
            if (r8 == 0) goto L92
        L84:
            r8.close()
            goto L92
        L88:
            r12 = move-exception
            if (r8 == 0) goto L8e
            r8.close()
        L8e:
            throw r12
        L8f:
            if (r8 == 0) goto L92
            goto L84
        L92:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.c.c.a(java.lang.String):java.lang.String");
    }

    public com.igexin.push.extension.distribution.basic.e.a b() {
        if (this.b == null) {
            this.b = new com.igexin.push.extension.distribution.basic.e.a(this.c);
        }
        return this.b;
    }

    public void c() {
        Cursor cursorA = null;
        try {
            cursorA = b().a(c.C0460c.e, new String[]{"taskid"}, "createtime <= " + String.valueOf(System.currentTimeMillis() - 604800000));
            if (cursorA != null) {
                while (cursorA.moveToNext()) {
                    String string = cursorA.getString(cursorA.getColumnIndexOrThrow("taskid"));
                    b().a(c.C0460c.e, new String[]{"taskid"}, new String[]{string});
                    File file = new File(e.k + string);
                    if (file.exists()) {
                        a(file);
                    }
                }
            }
            if (cursorA == null) {
                return;
            }
        } catch (Exception unused) {
            if (cursorA == null) {
                return;
            }
        } catch (Throwable th) {
            if (cursorA != null) {
                cursorA.close();
            }
            throw th;
        }
        cursorA.close();
    }

    public void d() {
        File file = new File(CoreConsts.q);
        if (file.exists()) {
            for (File file2 : file.listFiles(new d(this))) {
                if (file2.exists()) {
                    a(file2);
                }
            }
        }
    }

    public void e() throws Throwable {
        String strG = g();
        com.igexin.b.a.c.b.a(f2627a + "|read from com.getui.sdk.deviceId.db = " + strG + "; CoreRuntimeInfo.deviceId = " + com.igexin.push.core.d.A, new Object[0]);
        if (strG != null) {
            if (strG.equals(com.igexin.push.core.d.A)) {
                return;
            }
            com.igexin.push.core.d.A = strG;
            c(strG);
            return;
        }
        if (com.igexin.push.core.d.A != null) {
            b(com.igexin.push.core.d.A);
            return;
        }
        com.igexin.b.a.c.b.a(f2627a + "|updateDeviceId new file deviceId and CoreRuntimeInfo deviceId is null return", new Object[0]);
    }

    public void f() {
    }
}
