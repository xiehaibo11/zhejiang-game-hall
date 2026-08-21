package com.xiaomi.push;

import android.os.IBinder;
import com.xiaomi.push.bb;

/* JADX INFO: loaded from: classes4.dex */
class bd implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ IBinder f8053a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    final /* synthetic */ bb.b f150a;

    bd(bb.b bVar, IBinder iBinder) {
        this.f150a = bVar;
        this.f8053a = iBinder;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            String packageName = bb.this.f145a.getPackageName();
            String strB = bb.this.b();
            bb.a aVar = new bb.a();
            aVar.f149a = bb.c.a(this.f8053a, packageName, strB, "GUID");
            aVar.b = bb.c.a(this.f8053a, packageName, strB, "OUID");
            aVar.c = bb.c.a(this.f8053a, packageName, strB, "DUID");
            aVar.d = bb.c.a(this.f8053a, packageName, strB, "AUID");
            bb.this.f147a = aVar;
            bb.this.m147b();
            bb.this.f144a = 2;
            synchronized (bb.this.f148a) {
                try {
                    bb.this.f148a.notifyAll();
                } catch (Exception unused) {
                }
            }
        } catch (Exception unused2) {
            bb.this.m147b();
            bb.this.f144a = 2;
            synchronized (bb.this.f148a) {
                try {
                    bb.this.f148a.notifyAll();
                } catch (Exception unused3) {
                }
            }
        } catch (Throwable th) {
            bb.this.m147b();
            bb.this.f144a = 2;
            synchronized (bb.this.f148a) {
                try {
                    bb.this.f148a.notifyAll();
                } catch (Exception unused4) {
                }
                throw th;
            }
        }
    }
}
