package com.ss.android.download.api.model;

/* JADX INFO: loaded from: classes3.dex */
public class q {
    private String df;
    private String rg;

    public q(rg rgVar) {
        this.rg = rgVar.rg;
        this.df = rgVar.df;
    }

    public String rg() {
        return this.rg;
    }

    public static class rg {
        private String df;
        private String rg;

        public rg rg(String str) {
            this.rg = str;
            return this;
        }

        public q rg() {
            return new q(this);
        }
    }
}
