package com.kwad.library.solder.lib.c;

public final class a implements java.lang.Comparable<com.kwad.library.solder.lib.c.a> {
    public java.lang.String agy;
    public boolean qB;
    public java.lang.String version;

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private int a(com.kwad.library.solder.lib.c.a r2) {
            r1 = this;
            java.lang.String r2 = r2.version
            java.lang.String r0 = r1.version
            int r2 = r2.compareTo(r0)
            return r2
    }

    @Override
    public final int compareTo(com.kwad.library.solder.lib.c.a r1) {
            r0 = this;
            com.kwad.library.solder.lib.c.a r1 = (com.kwad.library.solder.lib.c.a) r1
            int r1 = r0.a(r1)
            return r1
    }
}
