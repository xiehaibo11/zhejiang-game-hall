package com.ss.android.download.api.model;

public class rg {
    public String df;
    public String pp;
    public String pt;
    public String q;
    public String rg;

    public rg(rg rgVar) {
        this.df = "";
        this.rg = rgVar.rg;
        this.df = rgVar.df;
        this.q = rgVar.q;
        this.pt = rgVar.pt;
        this.pp = rgVar.pp;
    }

    public static class rg {
        private String df;
        private String pp;
        private String pt;
        private String q;
        private String rg;

        public rg rg(String str) {
            this.rg = str;
            return this;
        }

        public rg df(String str) {
            this.df = str;
            return this;
        }

        public rg q(String str) {
            this.pt = str;
            return this;
        }

        public rg pt(String str) {
            this.pp = str;
            return this;
        }

        public rg rg() {
            return new rg(this);
        }
    }
}
