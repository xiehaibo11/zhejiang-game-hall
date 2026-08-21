package com.tkay.core.common.b;

import android.util.Log;
import com.tkay.core.api.AdError;
import com.tkay.core.api.TYAdSourceStatusListener;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WeakReference<TYAdSourceStatusListener> f6033a;

    public final void a(TYAdSourceStatusListener tYAdSourceStatusListener) {
        if (tYAdSourceStatusListener == null) {
            return;
        }
        this.f6033a = new WeakReference<>(tYAdSourceStatusListener);
    }

    private TYAdSourceStatusListener a() {
        WeakReference<TYAdSourceStatusListener> weakReference = this.f6033a;
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.1
            @Override // java.lang.Runnable
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.2
            @Override // java.lang.Runnable
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.3
            @Override // java.lang.Runnable
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.4
            @Override // java.lang.Runnable
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.5
            @Override // java.lang.Runnable
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
        m.a().a(new Runnable() { // from class: com.tkay.core.common.b.b.6
            @Override // java.lang.Runnable
            public final void run() {
                TYAdSourceStatusListener tYAdSourceStatusListenerA = b.a(b.this);
                if (tYAdSourceStatusListenerA != null) {
                    tYAdSourceStatusListenerA.onAdSourceLoadFail(iVarA, adError);
                }
            }
        });
    }

    static /* synthetic */ TYAdSourceStatusListener a(b bVar) {
        WeakReference<TYAdSourceStatusListener> weakReference = bVar.f6033a;
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
