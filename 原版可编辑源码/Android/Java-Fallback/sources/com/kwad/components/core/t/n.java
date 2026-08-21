package com.kwad.components.core.t;

public final class n implements java.lang.Runnable {
    private java.lang.ref.WeakReference<java.lang.Runnable> weakReference;

    public n(java.lang.Runnable r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.weakReference = r0
            return
    }

    @Override
    public final void run() {
            r1 = this;
            java.lang.ref.WeakReference<java.lang.Runnable> r0 = r1.weakReference
            java.lang.Object r0 = r0.get()
            java.lang.Runnable r0 = (java.lang.Runnable) r0
            if (r0 == 0) goto Ld
            r0.run()
        Ld:
            return
    }
}
