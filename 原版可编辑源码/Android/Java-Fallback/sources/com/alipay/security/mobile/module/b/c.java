package com.alipay.security.mobile.module.b;

final class c implements java.io.FileFilter {
    final com.alipay.security.mobile.module.b.b a;

    c(com.alipay.security.mobile.module.b.b r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public final boolean accept(java.io.File r2) {
            r1 = this;
            java.lang.String r2 = r2.getName()
            java.lang.String r0 = "cpu[0-9]+"
            boolean r2 = java.util.regex.Pattern.matches(r0, r2)
            if (r2 == 0) goto Le
            r2 = 1
            return r2
        Le:
            r2 = 0
            return r2
    }
}
