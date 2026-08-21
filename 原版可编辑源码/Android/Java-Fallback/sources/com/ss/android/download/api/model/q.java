package com.ss.android.download.api.model;

public class q {
    private java.lang.String df;
    private java.lang.String rg;

    public static class rg {
        private java.lang.String df;
        private java.lang.String rg;

        public rg() {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String df(com.ss.android.download.api.model.q.rg r0) {
                java.lang.String r0 = r0.df
                return r0
        }

        static java.lang.String rg(com.ss.android.download.api.model.q.rg r0) {
                java.lang.String r0 = r0.rg
                return r0
        }

        public com.ss.android.download.api.model.q.rg rg(java.lang.String r1) {
                r0 = this;
                r0.rg = r1
                return r0
        }

        public com.ss.android.download.api.model.q rg() {
                r1 = this;
                com.ss.android.download.api.model.q r0 = new com.ss.android.download.api.model.q
                r0.<init>(r1)
                return r0
        }
    }

    public q(com.ss.android.download.api.model.q.rg r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = com.ss.android.download.api.model.q.rg.rg(r2)
            r1.rg = r0
            java.lang.String r2 = com.ss.android.download.api.model.q.rg.df(r2)
            r1.df = r2
            return
    }

    public java.lang.String rg() {
            r1 = this;
            java.lang.String r0 = r1.rg
            return r0
    }
}
