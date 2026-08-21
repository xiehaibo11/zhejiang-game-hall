package com.loc;

public final class cx extends com.loc.gb {
    cx(java.nio.ByteBuffer r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public final int a(java.lang.CharSequence r1) {
            r0 = this;
            int r1 = super.a(r1)     // Catch: java.lang.Throwable -> L5
            return r1
        L5:
            r1 = move-exception
            com.loc.ej.a(r1)
            java.lang.String r1 = ""
            int r1 = super.a(r1)
            return r1
    }
}
