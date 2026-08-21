package com.ss.android.downloadlib.utils;

public class Chain<P, R> implements java.lang.Runnable {
    private com.ss.android.downloadlib.utils.Chain<R, ?> c;
    private R df;
    private com.ss.android.downloadlib.utils.Chain<?, P> pp;
    private java.lang.ref.SoftReference<com.ss.android.downloadlib.utils.Chain.rg<P, R>> pt;
    private int q;
    private P rg;

    public @interface ThreadType {
        public static final int CPU = 1;
        public static final int IO = 2;
        public static final int MAIN = 0;
    }

    public interface rg<PARAM, RESULT> {
        RESULT rg(PARAM r1);
    }

    private Chain(int r1, com.ss.android.downloadlib.utils.Chain.rg<P, R> r2, P r3) {
            r0 = this;
            r0.<init>()
            r0.q = r1
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r2)
            r0.pt = r1
            r0.rg = r3
            return
    }

    private R df() {
            r1 = this;
            R r0 = r1.df
            return r0
    }

    public static <P, R> com.ss.android.downloadlib.utils.Chain<P, R> rg(com.ss.android.downloadlib.utils.Chain.rg<P, R> r2, P r3) {
            com.ss.android.downloadlib.utils.Chain r0 = new com.ss.android.downloadlib.utils.Chain
            r1 = 2
            r0.<init>(r1, r2, r3)
            return r0
    }

    public <NR> com.ss.android.downloadlib.utils.Chain<R, NR> rg(int r3, com.ss.android.downloadlib.utils.Chain.rg<R, NR> r4) {
            r2 = this;
            com.ss.android.downloadlib.utils.Chain r0 = new com.ss.android.downloadlib.utils.Chain
            r1 = 0
            r0.<init>(r3, r4, r1)
            r2.c = r0
            r0.pp = r2
            return r0
    }

    public <NR> com.ss.android.downloadlib.utils.Chain<R, NR> rg(com.ss.android.downloadlib.utils.Chain.rg<R, NR> r2) {
            r1 = this;
            r0 = 0
            com.ss.android.downloadlib.utils.Chain r2 = r1.rg(r0, r2)
            return r2
    }

    public void rg() {
            r1 = this;
            com.ss.android.downloadlib.utils.Chain<?, P> r0 = r1.pp
            if (r0 == 0) goto L8
            r0.rg()
            goto Lb
        L8:
            r1.run()
        Lb:
            return
    }

    @Override
    public void run() {
            r2 = this;
            int r0 = r2.q
            if (r0 != 0) goto L16
            boolean r0 = com.ss.android.downloadlib.utils.b.rg()
            if (r0 != 0) goto L16
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg()
            android.os.Handler r0 = r0.df()
            r0.post(r2)
            return
        L16:
            int r0 = r2.q
            r1 = 1
            if (r0 != r1) goto L29
            boolean r0 = com.ss.android.downloadlib.utils.b.rg()
            if (r0 == 0) goto L29
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            r0.rg(r2)
            return
        L29:
            int r0 = r2.q
            r1 = 2
            if (r0 != r1) goto L3c
            boolean r0 = com.ss.android.downloadlib.utils.b.rg()
            if (r0 == 0) goto L3c
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            r0.df(r2)
            return
        L3c:
            P r0 = r2.rg
            if (r0 != 0) goto L4a
            com.ss.android.downloadlib.utils.Chain<?, P> r0 = r2.pp
            if (r0 == 0) goto L4a
            java.lang.Object r0 = r0.df()
            r2.rg = r0
        L4a:
            java.lang.ref.SoftReference<com.ss.android.downloadlib.utils.Chain$rg<P, R>> r0 = r2.pt
            java.lang.Object r0 = r0.get()
            com.ss.android.downloadlib.utils.Chain$rg r0 = (com.ss.android.downloadlib.utils.Chain.rg) r0
            if (r0 != 0) goto L55
            return
        L55:
            P r1 = r2.rg
            java.lang.Object r0 = r0.rg(r1)
            r2.df = r0
            com.ss.android.downloadlib.utils.Chain<R, ?> r0 = r2.c
            if (r0 == 0) goto L64
            r0.run()
        L64:
            return
    }
}
