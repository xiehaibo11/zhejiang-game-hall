package com.kwad.sdk.ranger;

import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class d extends com.kwad.sdk.core.response.a.a {
    public long aGF;
    public List<String> aGG;
    public List<a> aGH;
    public long aGI = 1000;
    public double aGJ = 1.0d;
    public List<com.kwad.sdk.ranger.a.a> aGK;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public String aGL;
        public String aGM;
    }

    private boolean da(int i) {
        return (Hp() || (this.aGF & ((long) i)) == 0) ? false : true;
    }

    public final boolean Hp() {
        return (this.aGF & 1) == 0;
    }

    public final boolean Hq() {
        return da(2);
    }

    public final boolean Hr() {
        return da(4);
    }

    public final boolean Hs() {
        return da(16);
    }
}
