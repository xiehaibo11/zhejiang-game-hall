package com.kwad.library.solder.lib.c;

public final class b implements java.lang.Comparable<com.kwad.library.solder.lib.c.b> {
    public boolean IH;
    public long agA;
    public java.lang.String agB;
    public boolean agC;
    public boolean agD;
    public java.util.HashMap<java.lang.String, java.lang.String> agE;
    public java.util.List<java.lang.String> agF;
    public java.util.List<java.lang.String> agG;
    public java.lang.ClassLoader agH;
    public java.lang.String agf;
    public boolean agg;
    public java.lang.String agy;
    public java.lang.String agz;
    public java.lang.String version;

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.agC = r0
            r0 = 1
            r2.agD = r0
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 10
            r0.<init>(r1)
            r2.agE = r0
            return
    }

    private int c(com.kwad.library.solder.lib.c.b r2) {
            r1 = this;
            java.lang.String r0 = r1.version
            java.lang.String r2 = r2.version
            int r2 = r0.compareTo(r2)
            int r2 = -r2
            return r2
    }

    @Override
    public final int compareTo(com.kwad.library.solder.lib.c.b r1) {
            r0 = this;
            com.kwad.library.solder.lib.c.b r1 = (com.kwad.library.solder.lib.c.b) r1
            int r1 = r0.c(r1)
            return r1
    }

    public final java.lang.String toString() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "RemotePluginInfo{pluginId='"
            r0.<init>(r1)
            java.lang.String r1 = r4.agy
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", version='"
            r0.append(r2)
            java.lang.String r2 = r4.version
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", downloadUrl='"
            r0.append(r2)
            java.lang.String r2 = r4.agz
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", fileSize="
            r0.append(r2)
            long r2 = r4.agA
            r0.append(r2)
            java.lang.String r2 = ", enable="
            r0.append(r2)
            boolean r2 = r4.IH
            r0.append(r2)
            java.lang.String r2 = ", md5sum='"
            r0.append(r2)
            java.lang.String r2 = r4.agB
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = ", onlyWifiDownload="
            r0.append(r1)
            boolean r1 = r4.agC
            r0.append(r1)
            java.lang.String r1 = ", onlyWifiRetryDownload="
            r0.append(r1)
            boolean r1 = r4.agD
            r0.append(r1)
            java.lang.String r1 = ", soMd5s="
            r0.append(r1)
            java.util.HashMap<java.lang.String, java.lang.String> r1 = r4.agE
            r0.append(r1)
            java.lang.String r1 = ", hostPackages="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.agF
            r0.append(r1)
            java.lang.String r1 = ", hostInterfaces="
            r0.append(r1)
            java.util.List<java.lang.String> r1 = r4.agG
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
