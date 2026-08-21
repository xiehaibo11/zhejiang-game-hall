package com.ss.android.downloadlib.utils;

import java.lang.ref.SoftReference;

public class Chain<P, R> implements Runnable {
    private Chain<R, ?> c;
    private R df;
    private Chain<?, P> pp;
    private SoftReference<rg<P, R>> pt;
    private int q;
    private P rg;

    public @interface ThreadType {
        public static final int CPU = 1;
        public static final int IO = 2;
        public static final int MAIN = 0;
    }

    public interface rg<PARAM, RESULT> {
        RESULT rg(PARAM param);
    }

    private Chain(int i, rg<P, R> rgVar, P p) {
        this.q = i;
        this.pt = new SoftReference<>(rgVar);
        this.rg = p;
    }

    public static <P, R> Chain<P, R> rg(rg<P, R> rgVar, P p) {
        return new Chain<>(2, rgVar, p);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public <NR> Chain<R, NR> rg(int i, rg<R, NR> rgVar) {
        Chain chain = (Chain<R, ?>) new Chain(i, rgVar, null);
        this.c = chain;
        chain.pp = this;
        return chain;
    }

    public <NR> Chain<R, NR> rg(rg<R, NR> rgVar) {
        return rg(0, rgVar);
    }

    public void rg() {
        Chain<?, P> chain = this.pp;
        if (chain != null) {
            chain.rg();
        } else {
            run();
        }
    }

    @Override
    public void run() {
        Chain<?, P> chain;
        if (this.q == 0 && !b.rg()) {
            com.ss.android.downloadlib.fw.rg().df().post(this);
            return;
        }
        if (this.q == 1 && b.rg()) {
            com.ss.android.downloadlib.pt.rg().rg(this);
            return;
        }
        if (this.q == 2 && b.rg()) {
            com.ss.android.downloadlib.pt.rg().df(this);
            return;
        }
        if (this.rg == null && (chain = this.pp) != null) {
            this.rg = chain.df();
        }
        rg<P, R> rgVar = this.pt.get();
        if (rgVar == null) {
            return;
        }
        this.df = rgVar.rg(this.rg);
        Chain<R, ?> chain2 = this.c;
        if (chain2 != null) {
            chain2.run();
        }
    }

    private R df() {
        return this.df;
    }
}
