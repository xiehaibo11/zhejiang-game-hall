package com.ss.android.download.api.model;

/* JADX INFO: loaded from: classes3.dex */
public class rg {
    public String df;
    public String pp;
    public String pt;
    public String q;
    public String rg;

    public rg(C0346rg c0346rg) {
        this.df = "";
        this.rg = c0346rg.rg;
        this.df = c0346rg.df;
        this.q = c0346rg.q;
        this.pt = c0346rg.pt;
        this.pp = c0346rg.pp;
    }

    /* JADX INFO: renamed from: com.ss.android.download.api.model.rg$rg, reason: collision with other inner class name */
    public static class C0346rg {
        private String df;
        private String pp;
        private String pt;
        private String q;
        private String rg;

        public C0346rg rg(String str) {
            this.rg = str;
            return this;
        }

        public C0346rg df(String str) {
            this.df = str;
            return this;
        }

        public C0346rg q(String str) {
            this.pt = str;
            return this;
        }

        public C0346rg pt(String str) {
            this.pp = str;
            return this;
        }

        public rg rg() {
            return new rg(this);
        }
    }
}
