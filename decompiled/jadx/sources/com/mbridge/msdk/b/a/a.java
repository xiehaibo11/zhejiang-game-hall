package com.mbridge.msdk.b.a;

import com.mbridge.msdk.out.PreloadListener;
import java.lang.ref.WeakReference;

/* JADX INFO: compiled from: PreloadListenerEx.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a implements PreloadListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WeakReference<PreloadListener> f3110a;
    private boolean b = false;
    private int c = 0;

    public final boolean a() {
        return this.b;
    }

    public final void a(boolean z) {
        this.b = z;
    }

    public a(PreloadListener preloadListener) {
        if (preloadListener != null) {
            this.f3110a = new WeakReference<>(preloadListener);
        }
    }

    @Override // com.mbridge.msdk.out.PreloadListener
    public final void onPreloadSucceed() {
        WeakReference<PreloadListener> weakReference = this.f3110a;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.f3110a.get().onPreloadSucceed();
    }

    @Override // com.mbridge.msdk.out.PreloadListener
    public final void onPreloadFaild(String str) {
        WeakReference<PreloadListener> weakReference = this.f3110a;
        if (weakReference == null || weakReference.get() == null) {
            return;
        }
        this.f3110a.get().onPreloadFaild(str);
    }
}
