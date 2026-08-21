package com.kwad.library.solder.lib;

public class g extends com.kwad.library.solder.lib.a.a {
    public g(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private static void e(java.io.File r3) {
            boolean r0 = r3.exists()
            java.lang.String r1 = "Sodler.simple.package"
            if (r0 == 0) goto L2e
            java.lang.String r0 = r3.getAbsolutePath()
            java.lang.String r0 = r0.trim()
            java.lang.String r2 = "/data/"
            boolean r0 = r0.startsWith(r2)
            if (r0 != 0) goto L2d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Apk file seems to locate in external path (not executable), path = "
            r0.<init>(r2)
            java.lang.String r3 = r3.getAbsolutePath()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.kwad.library.solder.lib.a.w(r1, r3)
        L2d:
            return
        L2e:
            java.lang.String r3 = "Apk file not exist."
            com.kwad.library.solder.lib.a.w(r1, r3)
            com.kwad.library.solder.lib.ext.PluginError$LoadError r0 = new com.kwad.library.solder.lib.ext.PluginError$LoadError
            r1 = 4001(0xfa1, float:5.607E-42)
            r0.<init>(r3, r1)
            throw r0
    }

    @Override
    public void f(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            java.io.File r1 = new java.io.File
            r1.<init>(r2)
            e(r1)
            return
    }
}
