package com.tkay.expressad.mbbanner.a.e;

import android.os.Handler;
import android.os.Looper;
import com.tkay.expressad.foundation.d.d;

public class a {
    private static final String a = a.class.getSimpleName();
    private final Handler b = new Handler(Looper.getMainLooper());
    private boolean c;

    private void a(boolean z) {
        this.c = z;
    }

    private void a(final com.tkay.expressad.mbbanner.a.c.b bVar, final d dVar, final String str) {
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.mbbanner.a.c.b bVar2 = bVar;
                if (bVar2 != null) {
                    d dVar2 = dVar;
                    boolean unused = a.this.c;
                    bVar2.a(dVar2);
                }
            }
        });
    }

    public final void a(final com.tkay.expressad.mbbanner.a.c.b bVar, final String str, final String str2) {
        StringBuilder sb = new StringBuilder("postCampaignFail errorMsg=");
        sb.append(str);
        sb.append(" unitId=");
        sb.append(str2);
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.mbbanner.a.c.b bVar2 = bVar;
                if (bVar2 != null) {
                    String str3 = str;
                    boolean unused = a.this.c;
                    bVar2.a(str3);
                }
            }
        });
    }

    public final void a(final com.tkay.expressad.mbbanner.a.c.b bVar, final String str) {
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.mbbanner.a.c.b bVar2 = bVar;
                if (bVar2 != null) {
                    boolean unused = a.this.c;
                    bVar2.a();
                }
            }
        });
    }

    public final void b(final com.tkay.expressad.mbbanner.a.c.b bVar, final String str) {
        this.b.post(new Runnable() {
            @Override
            public final void run() {
                com.tkay.expressad.mbbanner.a.c.b bVar2 = bVar;
                if (bVar2 != null) {
                    boolean unused = a.this.c;
                    bVar2.b();
                }
            }
        });
    }
}
