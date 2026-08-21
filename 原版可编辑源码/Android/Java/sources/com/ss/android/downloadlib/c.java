package com.ss.android.downloadlib;

public class c {
    private static volatile c rg;
    private com.ss.android.download.api.config.c df = null;

    private c() {
    }

    public static c rg() {
        if (rg == null) {
            synchronized (c.class) {
                if (rg == null) {
                    rg = new c();
                }
            }
        }
        return rg;
    }

    public com.ss.android.download.api.config.c df() {
        return this.df;
    }
}
