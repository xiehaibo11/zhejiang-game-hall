package com.kwad.framework.filedownloader.f;

public class e {
    public final int aeJ;
    public final long aeK;
    public final boolean aeL;
    public final boolean aeM;
    public final int aeN;
    public final boolean aeO;
    public final boolean aeP;

    public static class a {
        private static final com.kwad.framework.filedownloader.f.e aeQ = null;

        static {
                com.kwad.framework.filedownloader.f.e r0 = new com.kwad.framework.filedownloader.f.e
                r1 = 0
                r0.<init>(r1)
                com.kwad.framework.filedownloader.f.e.a.aeQ = r0
                return
        }

        static com.kwad.framework.filedownloader.f.e vP() {
                com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.a.aeQ
                return r0
        }
    }

    private e() {
            r21 = this;
            r1 = r21
            java.lang.String r2 = "broadcast.completed"
            java.lang.String r3 = "file.non-pre-allocation"
            java.lang.String r4 = "download.max-network-thread-count"
            java.lang.String r5 = "download.min-progress-time"
            java.lang.String r6 = "download.min-progress-step"
            java.lang.Class<com.kwad.framework.filedownloader.f.e> r7 = com.kwad.framework.filedownloader.f.e.class
            java.lang.String r8 = "http.lenient"
            r21.<init>()
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            if (r0 == 0) goto L1d3
            long r9 = java.lang.System.currentTimeMillis()
            java.util.Properties r0 = new java.util.Properties
            r0.<init>()
            r12 = 0
            android.content.Context r13 = com.kwad.framework.filedownloader.f.c.vM()     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6f
            android.content.res.AssetManager r13 = r13.getAssets()     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6f
            java.lang.String r14 = "filedownloader.properties"
            java.io.InputStream r13 = r13.open(r14)     // Catch: java.lang.Throwable -> L6b java.io.IOException -> L6f
            if (r13 == 0) goto L5c
            r0.load(r13)     // Catch: java.io.IOException -> L5a java.lang.Throwable -> L1cd
            java.lang.String r14 = r0.getProperty(r8)     // Catch: java.io.IOException -> L5a java.lang.Throwable -> L1cd
            java.lang.String r15 = r0.getProperty(r6)     // Catch: java.io.IOException -> L58 java.lang.Throwable -> L1cd
            java.lang.String r16 = r0.getProperty(r5)     // Catch: java.io.IOException -> L56 java.lang.Throwable -> L1cd
            java.lang.String r17 = r0.getProperty(r4)     // Catch: java.io.IOException -> L54 java.lang.Throwable -> L1cd
            java.lang.String r18 = r0.getProperty(r3)     // Catch: java.io.IOException -> L52 java.lang.Throwable -> L1cd
            java.lang.String r0 = r0.getProperty(r2)     // Catch: java.io.IOException -> L50 java.lang.Throwable -> L1cd
            r11 = r14
            goto L65
        L50:
            r0 = move-exception
            goto L79
        L52:
            r0 = move-exception
            goto L77
        L54:
            r0 = move-exception
            goto L75
        L56:
            r0 = move-exception
            goto L73
        L58:
            r0 = move-exception
            goto L72
        L5a:
            r0 = move-exception
            goto L71
        L5c:
            r0 = 0
            r11 = 0
            r15 = 0
            r16 = 0
            r17 = 0
            r18 = 0
        L65:
            com.kwad.sdk.crash.utils.b.closeQuietly(r13)
            r13 = r18
            goto L93
        L6b:
            r0 = move-exception
            r11 = 0
            goto L1cf
        L6f:
            r0 = move-exception
            r13 = 0
        L71:
            r14 = 0
        L72:
            r15 = 0
        L73:
            r16 = 0
        L75:
            r17 = 0
        L77:
            r18 = 0
        L79:
            boolean r11 = r0 instanceof java.io.FileNotFoundException     // Catch: java.lang.Throwable -> L1cd
            if (r11 == 0) goto L89
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cd
            if (r0 == 0) goto L8c
            java.lang.String r0 = "not found filedownloader.properties"
            java.lang.Object[] r11 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L1cd
            com.kwad.framework.filedownloader.f.d.c(r7, r0, r11)     // Catch: java.lang.Throwable -> L1cd
            goto L8c
        L89:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L1cd
        L8c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r13)
            r11 = r14
            r13 = r18
            r0 = 0
        L93:
            java.lang.String r14 = "the value of '%s' must be '%s' or '%s'"
            r18 = 2
            java.lang.String r12 = "false"
            r19 = r7
            java.lang.String r7 = "true"
            if (r11 == 0) goto Lcb
            boolean r20 = r11.equals(r7)
            if (r20 != 0) goto Lc1
            boolean r20 = r11.equals(r12)
            if (r20 == 0) goto Lac
            goto Lc1
        Lac:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r8
            r3 = 1
            r2[r3] = r7
            r2[r18] = r12
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r14, r2)
            r0.<init>(r2)
            throw r0
        Lc1:
            r20 = r4
            r4 = 0
            boolean r11 = r11.equals(r7)
            r1.aeL = r11
            goto Ld0
        Lcb:
            r20 = r4
            r4 = 0
            r1.aeL = r4
        Ld0:
            r11 = 1
            r1.aeM = r11
            if (r15 == 0) goto Le4
            java.lang.Integer r11 = java.lang.Integer.valueOf(r15)
            int r11 = r11.intValue()
            int r11 = java.lang.Math.max(r4, r11)
            r1.aeJ = r11
            goto Le8
        Le4:
            r4 = 65536(0x10000, float:9.1835E-41)
            r1.aeJ = r4
        Le8:
            if (r16 == 0) goto Lfc
            java.lang.Long r4 = java.lang.Long.valueOf(r16)
            r11 = r5
            long r4 = r4.longValue()
            r15 = r9
            r10 = r8
            r8 = 0
            long r4 = java.lang.Math.max(r8, r4)
            goto L101
        Lfc:
            r11 = r5
            r15 = r9
            r10 = r8
            r4 = 2000(0x7d0, double:9.88E-321)
        L101:
            r1.aeK = r4
            if (r17 == 0) goto L115
            java.lang.Integer r4 = java.lang.Integer.valueOf(r17)
            int r4 = r4.intValue()
            int r4 = bG(r4)
            r1.aeN = r4
            r4 = 3
            goto L118
        L115:
            r4 = 3
            r1.aeN = r4
        L118:
            if (r13 == 0) goto L143
            boolean r5 = r13.equals(r7)
            if (r5 != 0) goto L13b
            boolean r5 = r13.equals(r12)
            if (r5 == 0) goto L127
            goto L13b
        L127:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.Object[] r2 = new java.lang.Object[r4]
            r4 = 0
            r2[r4] = r3
            r3 = 1
            r2[r3] = r7
            r2[r18] = r12
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r14, r2)
            r0.<init>(r2)
            throw r0
        L13b:
            r4 = 0
            boolean r3 = r13.equals(r7)
            r1.aeO = r3
            goto L146
        L143:
            r4 = 0
            r1.aeO = r4
        L146:
            if (r0 == 0) goto L170
            boolean r3 = r0.equals(r7)
            if (r3 != 0) goto L169
            boolean r3 = r0.equals(r12)
            if (r3 == 0) goto L155
            goto L169
        L155:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r3 = 3
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r4] = r2
            r2 = 1
            r3[r2] = r7
            r3[r18] = r12
            java.lang.String r2 = com.kwad.framework.filedownloader.f.f.b(r14, r3)
            r0.<init>(r2)
            throw r0
        L169:
            boolean r0 = r0.equals(r7)
            r1.aeP = r0
            goto L172
        L170:
            r1.aeP = r4
        L172:
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L1cc
            r0 = 11
            java.lang.Object[] r0 = new java.lang.Object[r0]
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r15
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0[r4] = r2
            r2 = 1
            r0[r2] = r10
            boolean r2 = r1.aeL
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r0[r18] = r2
            java.lang.String r2 = "process.non-separate"
            r3 = 3
            r0[r3] = r2
            r2 = 4
            boolean r3 = r1.aeM
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0[r2] = r3
            r2 = 5
            r0[r2] = r6
            r2 = 6
            int r3 = r1.aeJ
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r2] = r3
            r2 = 7
            r0[r2] = r11
            r2 = 8
            long r3 = r1.aeK
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0[r2] = r3
            r2 = 9
            r0[r2] = r20
            r2 = 10
            int r3 = r1.aeN
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r2] = r3
            java.lang.String r2 = "init properties %d\n load properties: %s=%B; %s=%B; %s=%d; %s=%d; %s=%d"
            r3 = r19
            com.kwad.framework.filedownloader.f.d.b(r3, r2, r0)
        L1cc:
            return
        L1cd:
            r0 = move-exception
            r11 = r13
        L1cf:
            com.kwad.sdk.crash.utils.b.closeQuietly(r11)
            throw r0
        L1d3:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r2 = "Please invoke the 'FileDownloader#setup' before using FileDownloader. If you want to register some components on FileDownloader please invoke the 'FileDownloader#setupOnApplicationOnCreate' on the 'Application#onCreate' first."
            r0.<init>(r2)
            throw r0
    }

    e(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static int bG(int r8) {
            java.lang.Class<com.kwad.framework.filedownloader.f.e> r0 = com.kwad.framework.filedownloader.f.e.class
            r1 = 2
            r2 = 0
            r3 = 3
            r4 = 12
            java.lang.Integer r5 = java.lang.Integer.valueOf(r4)
            r6 = 1
            java.lang.Integer r7 = java.lang.Integer.valueOf(r6)
            if (r8 <= r4) goto L24
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r3[r2] = r8
            r3[r6] = r5
            r3[r1] = r5
            java.lang.String r8 = "require the count of network thread  is %d, what is more than the max valid count(%d), so adjust to %d auto"
            com.kwad.framework.filedownloader.f.d.d(r0, r8, r3)
            return r4
        L24:
            if (r8 > 0) goto L38
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            r3[r2] = r8
            r3[r6] = r7
            r3[r1] = r7
            java.lang.String r8 = "require the count of network thread  is %d, what is less than the min valid count(%d), so adjust to %d auto"
            com.kwad.framework.filedownloader.f.d.d(r0, r8, r3)
            return r6
        L38:
            return r8
    }

    public static com.kwad.framework.filedownloader.f.e vO() {
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.a.vP()
            return r0
    }
}
