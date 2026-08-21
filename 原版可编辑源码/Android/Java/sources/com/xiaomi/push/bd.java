package com.xiaomi.push;

import android.os.IBinder;
import com.xiaomi.push.bb;

class bd implements Runnable {
    final IBinder a;
    final bb.b a;

    bd(bb.b bVar, IBinder iBinder) {
        this.a = bVar;
        this.a = iBinder;
    }

    @Override
    public void run() {
        try {
            String packageName = bb.this.a.getPackageName();
            String strB = bb.this.b();
            bb.a aVar = new bb.a();
            aVar.a = bb.c.a(this.a, packageName, strB, "GUID");
            aVar.b = bb.c.a(this.a, packageName, strB, "OUID");
            aVar.c = bb.c.a(this.a, packageName, strB, "DUID");
            aVar.d = bb.c.a(this.a, packageName, strB, "AUID");
            bb.this.a = aVar;
            bb.this.b();
            bb.this.a = 2;
            synchronized (bb.this.a) {
                try {
                    bb.this.a.notifyAll();
                } catch (Exception unused) {
                }
            }
        } catch (Exception unused2) {
            bb.this.b();
            bb.this.a = 2;
            synchronized (bb.this.a) {
                try {
                    bb.this.a.notifyAll();
                } catch (Exception unused3) {
                }
            }
        } catch (Throwable th) {
            bb.this.b();
            bb.this.a = 2;
            synchronized (bb.this.a) {
                try {
                    bb.this.a.notifyAll();
                } catch (Exception unused4) {
                }
                throw th;
            }
        }
    }
}
