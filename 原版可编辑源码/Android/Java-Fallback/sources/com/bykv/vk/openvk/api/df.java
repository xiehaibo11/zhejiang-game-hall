package com.bykv.vk.openvk.api;

public final class df {
    private int df;
    private com.bykv.vk.openvk.api.proto.ValueSet pt;
    private java.lang.String q;
    private boolean rg;

    static class 1 {
    }

    private static final class rg implements com.bykv.vk.openvk.api.proto.Result {
        private final int df;
        private final com.bykv.vk.openvk.api.proto.ValueSet pt;
        private final java.lang.String q;
        private final boolean rg;

        private rg(boolean r1, int r2, java.lang.String r3, com.bykv.vk.openvk.api.proto.ValueSet r4) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                r0.df = r2
                r0.q = r3
                r0.pt = r4
                return
        }

        rg(boolean r1, int r2, java.lang.String r3, com.bykv.vk.openvk.api.proto.ValueSet r4, com.bykv.vk.openvk.api.df.1 r5) {
                r0 = this;
                r0.<init>(r1, r2, r3, r4)
                return
        }

        @Override
        public int code() {
                r1 = this;
                int r0 = r1.df
                return r0
        }

        @Override
        public boolean isSuccess() {
                r1 = this;
                boolean r0 = r1.rg
                return r0
        }

        @Override
        public java.lang.String message() {
                r1 = this;
                java.lang.String r0 = r1.q
                return r0
        }

        @Override
        public com.bykv.vk.openvk.api.proto.ValueSet values() {
                r1 = this;
                com.bykv.vk.openvk.api.proto.ValueSet r0 = r1.pt
                return r0
        }
    }

    private df() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rg = r0
            r0 = -1
            r1.df = r0
            r0 = 0
            r1.q = r0
            r1.pt = r0
            return
    }

    public static final com.bykv.vk.openvk.api.df rg() {
            com.bykv.vk.openvk.api.df r0 = new com.bykv.vk.openvk.api.df
            r0.<init>()
            return r0
    }

    public com.bykv.vk.openvk.api.proto.Result df() {
            r7 = this;
            com.bykv.vk.openvk.api.df$rg r6 = new com.bykv.vk.openvk.api.df$rg
            boolean r1 = r7.rg
            int r2 = r7.df
            java.lang.String r3 = r7.q
            com.bykv.vk.openvk.api.proto.ValueSet r0 = r7.pt
            if (r0 != 0) goto L14
            com.bykv.vk.openvk.api.q r0 = com.bykv.vk.openvk.api.q.rg()
            com.bykv.vk.openvk.api.proto.ValueSet r0 = r0.df()
        L14:
            r4 = r0
            r5 = 0
            r0 = r6
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    public com.bykv.vk.openvk.api.df rg(int r1) {
            r0 = this;
            r0.df = r1
            return r0
    }

    public com.bykv.vk.openvk.api.df rg(com.bykv.vk.openvk.api.proto.ValueSet r1) {
            r0 = this;
            r0.pt = r1
            return r0
    }

    public com.bykv.vk.openvk.api.df rg(boolean r1) {
            r0 = this;
            r0.rg = r1
            return r0
    }
}
