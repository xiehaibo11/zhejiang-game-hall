package com.igexin.push.core;

final class e implements java.io.FilenameFilter {
    e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean accept(java.io.File r1, java.lang.String r2) {
            r0 = this;
            java.lang.String r1 = "tdata"
            boolean r1 = r2.startsWith(r1)
            return r1
    }
}
