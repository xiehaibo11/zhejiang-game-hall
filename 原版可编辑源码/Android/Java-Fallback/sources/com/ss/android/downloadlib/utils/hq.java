package com.ss.android.downloadlib.utils;

public class hq extends android.os.Handler {
    java.lang.ref.WeakReference<com.ss.android.downloadlib.utils.hq.rg> rg;

    public interface rg {
        void rg(android.os.Message r1);
    }

    public hq(android.os.Looper r1, com.ss.android.downloadlib.utils.hq.rg r2) {
            r0 = this;
            r0.<init>(r1)
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r2)
            r0.rg = r1
            return
    }

    @Override
    public void handleMessage(android.os.Message r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.ss.android.downloadlib.utils.hq$rg> r0 = r1.rg
            java.lang.Object r0 = r0.get()
            com.ss.android.downloadlib.utils.hq$rg r0 = (com.ss.android.downloadlib.utils.hq.rg) r0
            if (r0 == 0) goto Lf
            if (r2 == 0) goto Lf
            r0.rg(r2)
        Lf:
            return
    }
}
