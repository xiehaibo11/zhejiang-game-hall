package com.ss.android.socialbase.appdownloader.c.rg;

public class ux extends java.lang.Exception {
    protected int df;
    protected int q;
    protected java.lang.Throwable rg;

    public ux(java.lang.String r4, com.ss.android.socialbase.appdownloader.c.rg.fw r5, java.lang.Throwable r6) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            if (r4 != 0) goto Lb
            r4 = r1
            goto L1c
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = " "
            r2.append(r4)
            java.lang.String r4 = r2.toString()
        L1c:
            r0.append(r4)
            if (r5 != 0) goto L23
            r4 = r1
            goto L3d
        L23:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r2 = "(position:"
            r4.append(r2)
            java.lang.String r2 = r5.pt()
            r4.append(r2)
            java.lang.String r2 = ") "
            r4.append(r2)
            java.lang.String r4 = r4.toString()
        L3d:
            r0.append(r4)
            if (r6 != 0) goto L43
            goto L54
        L43:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "caused by: "
            r4.append(r1)
            r4.append(r6)
            java.lang.String r1 = r4.toString()
        L54:
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            r3.<init>(r4)
            r4 = -1
            r3.df = r4
            r3.q = r4
            if (r5 == 0) goto L71
            int r4 = r5.q()
            r3.df = r4
            int r4 = r5.c()
            r3.q = r4
        L71:
            r3.rg = r6
            return
    }

    @Override
    public void printStackTrace() {
            r4 = this;
            java.lang.Throwable r0 = r4.rg
            if (r0 != 0) goto L8
            super.printStackTrace()
            goto L2b
        L8:
            java.io.PrintStream r0 = java.lang.System.err
            monitor-enter(r0)
            java.io.PrintStream r1 = java.lang.System.err     // Catch: java.lang.Throwable -> L2c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c
            r2.<init>()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = super.getMessage()     // Catch: java.lang.Throwable -> L2c
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r3 = "; nested exception is:"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2c
            r1.println(r2)     // Catch: java.lang.Throwable -> L2c
            java.lang.Throwable r1 = r4.rg     // Catch: java.lang.Throwable -> L2c
            r1.printStackTrace()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
        L2b:
            return
        L2c:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2c
            throw r1
    }
}
