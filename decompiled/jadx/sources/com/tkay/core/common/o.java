package com.tkay.core.common;

import android.content.Context;
import android.os.CountDownTimer;
import com.tkay.core.common.f.p;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public abstract class o<T extends com.tkay.core.common.f.p> {
    protected CountDownTimer c;
    protected Context e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f6276a = getClass().getSimpleName();
    ArrayList<T> b = new ArrayList<>();
    String d = com.tkay.core.common.b.m.a().o();

    protected abstract void a(List<T> list);

    protected o(Context context) {
        this.e = context.getApplicationContext();
    }

    public final synchronized void a(T t, boolean z) {
        boolean z2 = true;
        if (z) {
            this.b.add(t);
            a(true);
            return;
        }
        com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.e).b(this.d);
        if (!this.b.isEmpty()) {
            z2 = false;
        } else if (aVarB.aa() > 0) {
            com.tkay.core.common.b.m.a().a(new AnonymousClass1(aVarB));
            z2 = false;
        }
        this.b.add(t);
        a(z2);
    }

    /* JADX INFO: renamed from: com.tkay.core.common.o$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ com.tkay.core.c.a f6277a;

        AnonymousClass1(com.tkay.core.c.a aVar) {
            this.f6277a = aVar;
        }

        @Override // java.lang.Runnable
        public final void run() {
            o.this.c = new CountDownTimer(this.f6277a.aa(), this.f6277a.aa()) { // from class: com.tkay.core.common.o.1.1
                @Override // android.os.CountDownTimer
                public final void onTick(long j) {
                }

                @Override // android.os.CountDownTimer
                public final void onFinish() {
                    com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.common.o.1.1.1
                        @Override // java.lang.Runnable
                        public final void run() {
                            o.this.a(true);
                        }
                    });
                }
            };
            o.this.c.start();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public synchronized void a(boolean z) {
        if (z) {
            ArrayList arrayList = new ArrayList();
            arrayList.addAll(this.b);
            if (arrayList.size() > 0) {
                a(arrayList);
            }
            this.b.clear();
        } else {
            com.tkay.core.c.a aVarB = com.tkay.core.c.b.a(this.e).b(this.d);
            ArrayList arrayList2 = new ArrayList();
            if (this.b.size() >= aVarB.Y()) {
                for (int iY = aVarB.Y() - 1; iY >= 0; iY--) {
                    arrayList2.add(this.b.get(iY));
                    this.b.remove(iY);
                }
                if (arrayList2.size() > 0) {
                    a(arrayList2);
                }
            }
        }
        com.tkay.core.common.b.m.a().a(new Runnable() { // from class: com.tkay.core.common.o.2
            @Override // java.lang.Runnable
            public final void run() {
                if (!o.this.b.isEmpty() || o.this.c == null) {
                    return;
                }
                o.this.c.cancel();
            }
        });
    }
}
