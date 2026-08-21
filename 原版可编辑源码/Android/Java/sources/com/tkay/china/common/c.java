package com.tkay.china.common;

import android.os.SystemClock;
import com.tkay.china.api.CustomAdapterDownloadListener;
import com.tkay.china.api.TYAppDownloadListener;
import com.tkay.core.api.BaseAd;
import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYBaseAdAdapter;
import com.tkay.core.api.TYEventInterface;
import com.tkay.core.common.b.i;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.e;
import com.tkay.core.common.r;
import java.lang.ref.WeakReference;

public final class c implements CustomAdapterDownloadListener {
    TYBaseAdAdapter a;
    BaseAd b;
    TYAdInfo c;
    WeakReference<TYAppDownloadListener> d;
    long e;
    boolean f;
    boolean g;

    public c(TYBaseAdAdapter tYBaseAdAdapter, BaseAd baseAd, TYEventInterface tYEventInterface) {
        this.a = tYBaseAdAdapter;
        this.b = baseAd;
        if (tYEventInterface == null || !(tYEventInterface instanceof TYAppDownloadListener)) {
            return;
        }
        this.d = new WeakReference<>((TYAppDownloadListener) tYEventInterface);
    }

    @Override
    public final void onDownloadStart(long j, long j2, String str, String str2) {
        if (this.c == null) {
            a();
        }
        this.e = SystemClock.elapsedRealtime();
        a(18, 0L, str2);
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onDownloadStart(this.c, j, j2, str, str2);
        }
    }

    @Override
    public final void onDownloadUpdate(long j, long j2, String str, String str2) {
        if (this.c == null) {
            a();
        }
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onDownloadUpdate(this.c, j, j2, str, str2);
        }
    }

    @Override
    public final void onDownloadPause(long j, long j2, String str, String str2) {
        if (this.c == null) {
            a();
        }
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onDownloadPause(this.c, j, j2, str, str2);
        }
    }

    @Override
    public final void onDownloadFinish(long j, String str, String str2) {
        if (this.c == null) {
            a();
        }
        if (this.e != 0 && !this.g) {
            this.g = true;
            a(19, SystemClock.elapsedRealtime() - this.e, str2);
        }
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onDownloadFinish(this.c, j, str, str2);
        }
    }

    @Override
    public final void onDownloadFail(long j, long j2, String str, String str2) {
        if (this.c == null) {
            a();
        }
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onDownloadFail(this.c, j, j2, str, str2);
        }
    }

    @Override
    public final void onInstalled(String str, String str2) {
        if (this.c == null) {
            a();
        }
        if (!this.f) {
            this.f = true;
            a(20, 0L, str2);
        }
        WeakReference<TYAppDownloadListener> weakReference = this.d;
        TYAppDownloadListener tYAppDownloadListener = weakReference != null ? weakReference.get() : null;
        if (tYAppDownloadListener != null) {
            tYAppDownloadListener.onInstalled(this.c, str, str2);
        }
    }

    private void a() {
        BaseAd baseAd = this.b;
        if (baseAd != null) {
            this.c = i.a(baseAd);
        } else {
            this.c = i.a(this.a);
        }
    }

    private void a(final int i, final long j, final String str) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() {
            @Override
            public final void run() {
                try {
                    e eVar = new e();
                    eVar.b = c.this.b != null ? c.this.b.getDetail() : c.this.a.getTrackingInfo();
                    eVar.a = i;
                    eVar.c = System.currentTimeMillis();
                    if (eVar.b instanceof com.tkay.core.common.f.d) {
                        ((com.tkay.core.common.f.d) eVar.b).b(str);
                        ((com.tkay.core.common.f.d) eVar.b).b(j);
                    }
                    r.a(m.a().f()).a(i, eVar, com.tkay.core.c.b.a(m.a().f()).b(m.a().o()));
                } catch (Throwable unused) {
                }
            }
        });
    }
}
