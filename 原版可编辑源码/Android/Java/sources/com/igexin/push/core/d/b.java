package com.igexin.push.core.d;

import android.content.Context;
import android.text.TextUtils;
import com.igexin.push.util.h;
import java.io.File;
import java.io.FileOutputStream;
import java.util.concurrent.locks.ReentrantReadWriteLock;

class b implements c {
    private String a;
    private long b = 0;

    b() {
    }

    private boolean a() {
        try {
            boolean z = true;
            if (!TextUtils.isEmpty(this.a) && this.b != 0 && this.a.equals(com.igexin.push.core.d.u)) {
                if (this.b == com.igexin.push.core.d.t) {
                    z = false;
                }
            }
            return z;
        } finally {
            this.a = com.igexin.push.core.d.u;
            this.b = com.igexin.push.core.d.t;
        }
    }

    @Override
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

    @Override
    public void a(Context context, long j) {
        if (a()) {
            com.igexin.push.util.c.a();
        }
    }

    @Override
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
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public String b(Context context) {
        byte[] bArrA;
        String str = null;
        try {
            bArrA = com.igexin.push.util.c.a(com.igexin.push.core.d.R);
        } catch (Exception unused) {
        }
        if (bArrA == null) {
            com.igexin.b.a.c.b.a("BasicSDStorage | read file cid id = null", new Object[0]);
            return null;
        }
        String[] strArrSplit = new String(com.igexin.b.a.a.a.c(bArrA, com.igexin.push.core.d.E)).split("\\|");
        if (strArrSplit.length > 2) {
            String str2 = strArrSplit[2];
            if (str2 != null) {
                if (!str2.equals("null")) {
                    str = str2;
                }
            }
        }
        com.igexin.b.a.c.b.a("BasicSDStorage|get cid from file cid = " + str, new Object[0]);
        return str;
    }

    @Override
    public void b(Context context, String str) {
        if (a()) {
            com.igexin.push.util.c.a();
        }
    }

    @Override
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
