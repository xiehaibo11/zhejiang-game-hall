package com.loc;

public final class ch extends com.loc.ci {
    public ch() {
            r0 = this;
            r0.<init>()
            return
    }

    public ch(com.loc.ci r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final byte[] a(byte[] r5) {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyyMMdd HHmmss"
            r1.<init>(r2)
            java.util.Date r2 = new java.util.Date
            r2.<init>()
            java.lang.String r1 = r1.format(r2)
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            java.util.UUID r2 = java.util.UUID.randomUUID()
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            r0.append(r1)
            int r1 = r0.length()
            r2 = 0
            r3 = 53
            if (r1 == r3) goto L37
            byte[] r5 = new byte[r2]
            return r5
        L37:
            java.lang.String r0 = r0.toString()
            byte[] r0 = com.loc.x.a(r0)
            int r1 = r0.length
            int r3 = r5.length
            int r1 = r1 + r3
            byte[] r1 = new byte[r1]
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r2, r1, r2, r3)
            int r0 = r0.length
            int r3 = r5.length
            java.lang.System.arraycopy(r5, r2, r1, r0, r3)
            return r1
    }
}
