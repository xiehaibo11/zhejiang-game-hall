package com.sigmob.sdk.archives;

public final class e {
    private static final com.sigmob.sdk.archives.d a = null;

    static {
            com.sigmob.sdk.archives.d r0 = new com.sigmob.sdk.archives.d
            r0.<init>()
            com.sigmob.sdk.archives.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "Parameters: archive-name [archive-type]"
            r0.println(r1)
            return
    }

    public static void a(java.lang.String[] r4) throws java.lang.Exception {
            int r0 = r4.length
            if (r0 != 0) goto L7
            a()
            return
        L7:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Analysing "
            r1.append(r2)
            r2 = 0
            r3 = r4[r2]
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.io.File r0 = new java.io.File
            r1 = r4[r2]
            r0.<init>(r1)
            boolean r1 = r0.isFile()
            if (r1 != 0) goto L43
            java.io.PrintStream r1 = java.lang.System.err
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = " doesn't exist or is a directory"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
        L43:
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            java.io.FileInputStream r2 = new java.io.FileInputStream
            r2.<init>(r0)
            r1.<init>(r2)
            int r0 = r4.length
            r2 = 1
            if (r0 <= r2) goto L5a
            com.sigmob.sdk.archives.d r0 = com.sigmob.sdk.archives.e.a
            r4 = r4[r2]
            com.sigmob.sdk.archives.c r4 = r0.a(r4, r1)
            goto L60
        L5a:
            com.sigmob.sdk.archives.d r4 = com.sigmob.sdk.archives.e.a
            com.sigmob.sdk.archives.c r4 = r4.a(r1)
        L60:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Created "
            r2.append(r3)
            java.lang.String r3 = r4.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.println(r2)
        L7a:
            com.sigmob.sdk.archives.a r0 = r4.a()
            if (r0 == 0) goto L8a
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.String r0 = r0.a()
            r2.println(r0)
            goto L7a
        L8a:
            r4.close()
            r1.close()
            return
    }
}
