package com.ss.android.downloadlib.q;

public class fw extends com.ss.android.socialbase.appdownloader.q.rg {
    private static java.lang.String rg;


    private static class rg implements com.ss.android.socialbase.appdownloader.q.b {
        private android.app.Dialog rg;

        public rg(android.app.Dialog r1) {
                r0 = this;
                r0.<init>()
                if (r1 == 0) goto La
                r0.rg = r1
                r0.rg()
            La:
                return
        }

        @Override
        public boolean df() {
                r1 = this;
                android.app.Dialog r0 = r1.rg
                if (r0 == 0) goto L9
                boolean r0 = r0.isShowing()
                return r0
            L9:
                r0 = 0
                return r0
        }

        @Override
        public void rg() {
                r1 = this;
                android.app.Dialog r0 = r1.rg
                if (r0 == 0) goto L7
                r0.show()
            L7:
                return
        }
    }

    static {
            java.lang.Class<com.ss.android.downloadlib.q.fw> r0 = com.ss.android.downloadlib.q.fw.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.q.fw.rg = r0
            return
    }

    public fw() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String df() {
            java.lang.String r0 = com.ss.android.downloadlib.q.fw.rg
            return r0
    }

    @Override
    public com.ss.android.socialbase.appdownloader.q.hq rg(android.content.Context r2) {
            r1 = this;
            com.ss.android.downloadlib.q.fw$1 r0 = new com.ss.android.downloadlib.q.fw$1
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public boolean rg() {
            r1 = this;
            r0 = 1
            return r0
    }
}
