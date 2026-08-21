package com.bytedance.pangle.a;

import com.bytedance.pangle.d.e;
import java.util.concurrent.CountDownLatch;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final CountDownLatch f1493a;
    Throwable b;

    /* JADX INFO: renamed from: com.bytedance.pangle.a.a$a, reason: collision with other inner class name */
    public interface InterfaceC0052a {
        void a();
    }

    private a(InterfaceC0052a[] interfaceC0052aArr) {
        this.f1493a = new CountDownLatch(interfaceC0052aArr.length);
        for (final InterfaceC0052a interfaceC0052a : interfaceC0052aArr) {
            e.a(new Runnable() { // from class: com.bytedance.pangle.a.a.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        interfaceC0052a.a();
                    } catch (Throwable th) {
                        a.this.b = th;
                    }
                    a.this.f1493a.countDown();
                }
            });
        }
    }

    public static void a(InterfaceC0052a... interfaceC0052aArr) throws Throwable {
        a aVar = new a(interfaceC0052aArr);
        try {
            aVar.f1493a.await();
            Throwable th = aVar.b;
            if (th != null) {
                throw th;
            }
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}
