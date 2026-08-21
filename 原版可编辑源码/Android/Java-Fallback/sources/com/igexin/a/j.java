package com.igexin.a;

class j implements java.io.FilenameFilter {
    final java.lang.String a;
    final com.igexin.a.i b;

    j(com.igexin.a.i r1, java.lang.String r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public boolean accept(java.io.File r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = r0.a
            boolean r1 = r2.startsWith(r1)
            return r1
    }
}
