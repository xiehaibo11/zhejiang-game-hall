package com.igexin.push.extension.distribution.basic.d;

import android.content.ContentValues;
import com.igexin.push.extension.distribution.basic.c.e;

/* JADX INFO: loaded from: classes2.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static b f2631a;
    private static final String b = "EXT-" + b.class.getName();
    private static com.igexin.push.extension.distribution.basic.e.a c = null;

    public static b a() {
        if (f2631a == null) {
            f2631a = new b();
            c = new com.igexin.push.extension.distribution.basic.e.a(e.f2629a);
        }
        return f2631a;
    }

    public void a(int i, String str) {
        ContentValues contentValues = new ContentValues();
        contentValues.put("key", Integer.valueOf(i));
        contentValues.put("value", str);
        c.a("extconfig", (String) null, contentValues);
    }

    public void a(long j) {
        e.i = j;
        a(6, String.valueOf(j));
    }

    /* JADX WARN: Removed duplicated region for block: B:47:0x0058 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:49:0x004d A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void b() {
        /*
            r4 = this;
            r0 = 0
            com.igexin.push.extension.distribution.basic.e.a r1 = com.igexin.push.extension.distribution.basic.c.e.e     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            java.lang.String r2 = "select key, value from extconfig order by key"
            android.database.Cursor r0 = r1.a(r2, r0)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            if (r0 == 0) goto L5b
        Lb:
            boolean r1 = r0.moveToNext()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            if (r1 == 0) goto L5b
            java.lang.String r1 = "key"
            int r1 = r0.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            r2 = 11
            java.lang.String r3 = "value"
            if (r1 == r2) goto L33
            r2 = 12
            if (r1 == r2) goto L33
            r2 = 14
            if (r1 != r2) goto L2a
            goto L33
        L2a:
            int r2 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Throwable -> Lb
            goto L4a
        L33:
            int r2 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lb
            byte[] r2 = r0.getBlob(r2)     // Catch: java.lang.Throwable -> Lb
            if (r2 == 0) goto L41
            byte[] r2 = com.igexin.b.b.a.c(r2)     // Catch: java.lang.Throwable -> Lb
        L41:
            if (r2 != 0) goto L44
            goto Lb
        L44:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> Lb
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lb
            r2 = r3
        L4a:
            r3 = 4
            if (r1 == r3) goto L58
            r3 = 6
            if (r1 == r3) goto L51
            goto Lb
        L51:
            long r1 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> Lb
            com.igexin.push.extension.distribution.basic.c.e.i = r1     // Catch: java.lang.Throwable -> Lb
            goto Lb
        L58:
            com.igexin.push.extension.distribution.basic.c.e.d = r2     // Catch: java.lang.Throwable -> Lb
            goto Lb
        L5b:
            if (r0 == 0) goto L6a
            goto L67
        L5e:
            r1 = move-exception
            if (r0 == 0) goto L64
            r0.close()
        L64:
            throw r1
        L65:
            if (r0 == 0) goto L6a
        L67:
            r0.close()
        L6a:
            return
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.extension.distribution.basic.d.b.b():void");
    }
}
