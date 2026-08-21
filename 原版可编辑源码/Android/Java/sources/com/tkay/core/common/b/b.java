package com.tkay.core.common.b;

import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdSourceStatusListener;
import java.lang.ref.WeakReference;

public class b {
    WeakReference<TYAdSourceStatusListener> a;

    public final void a(TYAdSourceStatusListener tYAdSourceStatusListener) {
        if (tYAdSourceStatusListener == null) {
            return;
        }
        this.a = new WeakReference<>(tYAdSourceStatusListener);
    }

    private TYAdSourceStatusListener a() {
        WeakReference<TYAdSourceStatusListener> weakReference = this.a;
        if (weakReference == null) {
            return null;
        }
        TYAdSourceStatusListener tYAdSourceStatusListener = weakReference.get();
        if (tYAdSourceStatusListener == null) {
            Log.e("tkay", "TYAdSourceStatusListener had been released.");
        }
        return tYAdSourceStatusListener;
    }

    public final void a(com.tkay.core.common.f.d dVar) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceBiddingAttempt(iVarA);
                }
            }
        });
    }

    public final void b(com.tkay.core.common.f.d dVar) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceBiddingFilled(iVarA);
                }
            }
        });
    }

    public final void a(com.tkay.core.common.f.d dVar, final AdError adError) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceBiddingFail(iVarA, adError);
                }
            }
        });
    }

    public final void c(com.tkay.core.common.f.d dVar) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceAttempt(iVarA);
                }
            }
        });
    }

    public final void d(com.tkay.core.common.f.d dVar) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceLoadFilled(iVarA);
                }
            }
        });
    }

    public final void b(com.tkay.core.common.f.d dVar, final AdError adError) {
        final i iVarA = i.a(dVar, (n) null);
        m.a().a(new Runnable() {
            @Override
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceLoadFail(iVarA, adError);
                }
            }
        });
    }

    static TYAdSourceStatusListener a(b bVar) {
        WeakReference<TYAdSourceStatusListener> weakReference = bVar.a;
        if (weakReference == null) {
            return null;
        }
        TYAdSourceStatusListener tYAdSourceStatusListener = weakReference.get();
        if (tYAdSourceStatusListener == null) {
            Log.e("tkay", "TYAdSourceStatusListener had been released.");
        }
        return tYAdSourceStatusListener;
    }
}
