package com.tramini.plugin.a.g.a;

public final class a implements java.lang.CharSequence {
    java.lang.CharSequence a;

    public a(java.lang.CharSequence r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public final char charAt(int r2) {
            r1 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L11
            java.lang.CharSequence r0 = r1.a
            char r2 = r0.charAt(r2)
            return r2
        L11:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "Interrupted!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public final int length() {
            r1 = this;
            java.lang.CharSequence r0 = r1.a
            int r0 = r0.length()
            return r0
    }

    @Override
    public final java.lang.CharSequence subSequence(int r3, int r4) {
            r2 = this;
            com.tramini.plugin.a.g.a.a r0 = new com.tramini.plugin.a.g.a.a
            java.lang.CharSequence r1 = r2.a
            java.lang.CharSequence r3 = r1.subSequence(r3, r4)
            r0.<init>(r3)
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.CharSequence r0 = r1.a
            java.lang.String r0 = r0.toString()
            return r0
    }
}
