package com.kwad.library.solder.lib.ext;

import com.kuaishou.weapon.p0.bh;

public final class c {
    private final int afX;
    private final String agl;
    private final String agm;
    private final String agn;
    private final String ago;
    private final String agp;
    private final String agq;
    private final String agr;
    private final boolean ags;
    private final boolean agt;
    private final boolean agu;
    private String agv;
    private byte[] agw;
    private boolean agx;

    public static class a {
        private String agr;
        private boolean agu;
        private String agv;
        private byte[] agw;
        private boolean agx;
        private int afX = 3;
        private String agl = "sodler";
        private String agm = "code-cache";
        private String agn = "lib";
        private String ago = "temp";
        private String agq = "base-1.apk";
        private String agp = bh.k;
        private boolean agt = false;
        private boolean ags = false;

        public final a bK(int i) {
            if (i > 0) {
                this.afX = i;
            }
            return this;
        }

        public final a bM(String str) {
            this.agl = str;
            return this;
        }

        public final a ba(boolean z) {
            this.agx = false;
            return this;
        }

        public final a bb(boolean z) {
            this.agu = z;
            return this;
        }

        public final c wN() {
            return new c(this.ags, this.agt, this.agr, this.agl, this.agm, this.agn, this.ago, this.agp, this.agq, this.afX, this.agv, this.agw, this.agx, this.agu, (byte) 0);
        }
    }

    private c(boolean z, boolean z2, String str, String str2, String str3, String str4, String str5, String str6, String str7, int i, String str8, byte[] bArr, boolean z3, boolean z4) {
        this.afX = i;
        this.agl = str2;
        this.agm = str3;
        this.agn = str4;
        this.ago = str5;
        this.agp = str6;
        this.agq = str7;
        this.agr = str;
        this.ags = z;
        this.agt = z2;
        this.agv = str8;
        this.agw = bArr;
        this.agx = z3;
        this.agu = z4;
    }

    c(boolean z, boolean z2, String str, String str2, String str3, String str4, String str5, String str6, String str7, int i, String str8, byte[] bArr, boolean z3, boolean z4, byte b) {
        this(z, z2, str, str2, str3, str4, str5, str6, str7, i, str8, bArr, z3, z4);
    }

    public final int getRetryCount() {
        return this.afX;
    }

    public final String wF() {
        return this.agl;
    }

    public final String wG() {
        return this.agm;
    }

    public final String wH() {
        return this.agn;
    }

    public final String wI() {
        return this.ago;
    }

    public final String wJ() {
        return this.agp;
    }

    public final String wK() {
        return this.agq;
    }

    public final boolean wL() {
        return this.agt;
    }

    public final boolean wM() {
        return this.agu;
    }
}
