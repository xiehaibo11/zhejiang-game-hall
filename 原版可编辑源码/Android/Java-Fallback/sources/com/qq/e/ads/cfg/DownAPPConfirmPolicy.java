package com.qq.e.ads.cfg;

public enum DownAPPConfirmPolicy extends java.lang.Enum<com.qq.e.ads.cfg.DownAPPConfirmPolicy> {
    public static final com.qq.e.ads.cfg.DownAPPConfirmPolicy Default = null;
    public static final com.qq.e.ads.cfg.DownAPPConfirmPolicy NOConfirm = null;
    private static final com.qq.e.ads.cfg.DownAPPConfirmPolicy[] b = null;
    private final int a;

    static {
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r0 = new com.qq.e.ads.cfg.DownAPPConfirmPolicy
            r1 = 0
            java.lang.String r2 = "Default"
            r0.<init>(r2, r1, r1)
            com.qq.e.ads.cfg.DownAPPConfirmPolicy.Default = r0
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r0 = new com.qq.e.ads.cfg.DownAPPConfirmPolicy
            r2 = 2
            r3 = 1
            java.lang.String r4 = "NOConfirm"
            r0.<init>(r4, r3, r2)
            com.qq.e.ads.cfg.DownAPPConfirmPolicy.NOConfirm = r0
            com.qq.e.ads.cfg.DownAPPConfirmPolicy[] r2 = new com.qq.e.ads.cfg.DownAPPConfirmPolicy[r2]
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r4 = com.qq.e.ads.cfg.DownAPPConfirmPolicy.Default
            r2[r1] = r4
            r2[r3] = r0
            com.qq.e.ads.cfg.DownAPPConfirmPolicy.b = r2
            return
    }

    DownAPPConfirmPolicy(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a = r3
            return
    }

    public static com.qq.e.ads.cfg.DownAPPConfirmPolicy valueOf(java.lang.String r1) {
            java.lang.Class<com.qq.e.ads.cfg.DownAPPConfirmPolicy> r0 = com.qq.e.ads.cfg.DownAPPConfirmPolicy.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.qq.e.ads.cfg.DownAPPConfirmPolicy r1 = (com.qq.e.ads.cfg.DownAPPConfirmPolicy) r1
            return r1
    }

    public static com.qq.e.ads.cfg.DownAPPConfirmPolicy[] values() {
            com.qq.e.ads.cfg.DownAPPConfirmPolicy[] r0 = com.qq.e.ads.cfg.DownAPPConfirmPolicy.b
            java.lang.Object r0 = r0.clone()
            com.qq.e.ads.cfg.DownAPPConfirmPolicy[] r0 = (com.qq.e.ads.cfg.DownAPPConfirmPolicy[]) r0
            return r0
    }

    public int value() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
