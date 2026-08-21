package com.bytedance.pangle.a;

import com.bytedance.pangle.d.e;
import java.util.concurrent.CountDownLatch;

public final class a {
    final CountDownLatch a;
    Throwable b;

    public interface a {
        void a();
    }

    private a(a[] aVarArr) {
        this.a = new CountDownLatch(aVarArr.length);
        for (final a aVar : aVarArr) {
            e.a(new Runnable() {
                @Override
                public final void run() {
                    try {
                        aVar.a();
                    } catch (Throwable th) {
                        a.this.b = th;
                    }
                    a.this.a.countDown();
                }
            });
        }
    }

    public static void a(a... aVarArr) throws Throwable {
        a aVar = new a(aVarArr);
        try {
            aVar.a.await();
            Throwable th = aVar.b;
            if (th != null) {
                throw th;
            }
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}
