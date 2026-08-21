package com.qq.e.ads.cfg;

public class MultiProcessFlag {
    private static boolean a;
    private static boolean b;

    public MultiProcessFlag() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isMultiProcess() {
            boolean r0 = com.qq.e.ads.cfg.MultiProcessFlag.a
            return r0
    }

    public static void setMultiProcess(boolean r1) {
            boolean r0 = com.qq.e.ads.cfg.MultiProcessFlag.b
            if (r0 != 0) goto La
            r0 = 1
            com.qq.e.ads.cfg.MultiProcessFlag.b = r0
            com.qq.e.ads.cfg.MultiProcessFlag.a = r1
            goto Lf
        La:
            java.lang.String r1 = "MultiProcessFlag已经设置过，再次设置无效"
            com.qq.e.comm.util.GDTLogger.w(r1)
        Lf:
            return
    }
}
