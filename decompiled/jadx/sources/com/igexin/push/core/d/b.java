package com.igexin.push.core.d;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.push.util.h;
import java.io.File;
import java.io.FileOutputStream;
import java.util.concurrent.locks.ReentrantReadWriteLock;

/* JADX INFO: loaded from: classes2.dex */
class b implements c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f2567a;
    private long b = 0;

    b() {
    }

    private boolean a() {
        try {
            boolean z = true;
            if (!TextUtils.isEmpty(this.f2567a) && this.b != 0 && this.f2567a.equals(com.igexin.push.core.d.u)) {
                if (this.b == com.igexin.push.core.d.t) {
                    z = false;
                }
            }
            return z;
        } finally {
            this.f2567a = com.igexin.push.core.d.u;
            this.b = com.igexin.push.core.d.t;
        }
    }

    @Override // com.igexin.push.core.d.c
    public String a(Context context) {
        String str = null;
        try {
            com.igexin.b.a.c.b.a("BasicSDStorage|get device id from file : " + com.igexin.push.core.d.S, new Object[0]);
            byte[] bArrA = com.igexin.push.util.c.a(com.igexin.push.core.d.S);
            if (bArrA == null) {
                com.igexin.b.a.c.b.a("BasicSDStorage|read file device id = null", new Object[0]);
                return null;
            }
            String str2 = new String(bArrA, "UTF-8");
            try {
                com.igexin.b.a.c.b.a("BasicSDStorage|read file device id = " + str2, new Object[0]);
                return str2;
            } catch (Exception e) {
                e = e;
                str = str2;
                com.igexin.b.a.c.b.a("BasicSDStorage|get device id from file : " + e.toString(), new Object[0]);
                return str;
            }
        } catch (Exception e2) {
            e = e2;
        }
    }

    @Override // com.igexin.push.core.d.c
    public void a(Context context, long j) {
        if (a()) {
            com.igexin.push.util.c.a();
        }
    }

    @Override // com.igexin.push.core.d.c
    public void a(Context context, String str) throws Throwable {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        com.igexin.b.a.c.b.a("BasicSDStorage|save device id to file : " + com.igexin.push.core.d.S, new Object[0]);
        FileOutputStream fileOutputStream = null;
        ReentrantReadWriteLock.WriteLock writeLock = new ReentrantReadWriteLock().writeLock();
        try {
            try {
                if (writeLock.tryLock()) {
                    File file = new File(com.igexin.push.core.d.S);
                    if (!file.exists() && !file.createNewFile()) {
                        com.igexin.b.a.c.b.a("BasicSDStorage|create file : " + file.toString() + " failed !!!", new Object[0]);
                        h.a(null);
                        writeLock.unlock();
                        return;
                    }
                    FileOutputStream fileOutputStream2 = new FileOutputStream(com.igexin.push.core.d.S);
                    try {
                        fileOutputStream2.write(str.getBytes("UTF-8"));
                        fileOutputStream = fileOutputStream2;
                    } catch (Exception e) {
                        e = e;
                        fileOutputStream = fileOutputStream2;
                        com.igexin.b.a.c.b.a("BasicSDStorage|" + e.toString(), new Object[0]);
                    } catch (Throwable th) {
                        th = th;
                        fileOutputStream = fileOutputStream2;
                        h.a(fileOutputStream);
                        writeLock.unlock();
                        throw th;
                    }
                }
            } catch (Exception e2) {
                e = e2;
            }
            h.a(fileOutputStream);
            writeLock.unlock();
        } catch (Throwable th2) {
            th = th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0034  */
    @Override // com.igexin.push.core.d.c
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public java.lang.String b(android.content.Context r5) {
        /*
            r4 = this;
            r5 = 0
            r0 = 0
            java.lang.String r1 = com.igexin.push.core.d.R     // Catch: java.lang.Exception -> L35
            byte[] r1 = com.igexin.push.util.c.a(r1)     // Catch: java.lang.Exception -> L35
            if (r1 != 0) goto L12
            java.lang.String r1 = "BasicSDStorage | read file cid id = null"
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> L35
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Exception -> L35
            return r0
        L12:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L35
            java.lang.String r3 = com.igexin.push.core.d.E     // Catch: java.lang.Exception -> L35
            byte[] r1 = com.igexin.b.a.a.a.c(r1, r3)     // Catch: java.lang.Exception -> L35
            r2.<init>(r1)     // Catch: java.lang.Exception -> L35
            java.lang.String r1 = "\\|"
            java.lang.String[] r1 = r2.split(r1)     // Catch: java.lang.Exception -> L35
            int r2 = r1.length     // Catch: java.lang.Exception -> L35
            r3 = 2
            if (r2 <= r3) goto L35
            r1 = r1[r3]     // Catch: java.lang.Exception -> L35
            if (r1 == 0) goto L34
            java.lang.String r2 = "null"
            boolean r2 = r1.equals(r2)     // Catch: java.lang.Exception -> L34
            if (r2 == 0) goto L34
            goto L35
        L34:
            r0 = r1
        L35:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "BasicSDStorage|get cid from file cid = "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r5 = new java.lang.Object[r5]
            com.igexin.b.a.c.b.a(r1, r5)
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.igexin.push.core.d.b.b(android.content.Context):java.lang.String");
    }

    @Override // com.igexin.push.core.d.c
    public void b(Context context, String str) {
        if (a()) {
            com.igexin.push.util.c.a();
        }
    }

    @Override // com.igexin.push.core.d.c
    public long c(Context context) {
        byte[] bArrA;
        long j = 0;
        try {
            bArrA = com.igexin.push.util.c.a(com.igexin.push.core.d.R);
        } catch (Exception e) {
            com.igexin.b.a.c.b.a("BasicSDStorage|" + e.toString(), new Object[0]);
        }
        if (bArrA == null) {
            com.igexin.b.a.c.b.a("BasicSDStorage|read session from file, not exist", new Object[0]);
            return 0L;
        }
        String str = new String(com.igexin.b.a.a.a.c(bArrA, com.igexin.push.core.d.E));
        String strSubstring = str.contains("null") ? str.substring(7) : str.substring(20);
        int iIndexOf = strSubstring.indexOf("|");
        if (iIndexOf >= 0) {
            strSubstring = strSubstring.substring(0, iIndexOf);
        }
        long j2 = Long.parseLong(strSubstring);
        if (j2 != 0) {
            j = j2;
        }
        com.igexin.b.a.c.b.a("BasicSDStorage|session : " + j, new Object[0]);
        return j;
    }
}
