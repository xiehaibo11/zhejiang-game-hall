package com.ss.android.socialbase.appdownloader.c.rg;

class rg implements com.ss.android.socialbase.appdownloader.c.rg.rz {
    private int b;
    private int bm;
    private com.ss.android.socialbase.appdownloader.c.rg.rg.rg c;
    private com.ss.android.socialbase.appdownloader.c.rg.pt df;
    private int f;
    private boolean fw;
    private int[] hq;
    private int oh;
    private int[] pp;
    private com.ss.android.socialbase.appdownloader.c.rg.c pt;
    private boolean q;
    private int rz;
    private int ux;
    private int v;

    private static final class rg {
        private int df;
        private int q;
        private int[] rg;

        public rg() {
                r1 = this;
                r1.<init>()
                r0 = 32
                int[] r0 = new int[r0]
                r1.rg = r0
                return
        }

        private void rg(int r4) {
                r3 = this;
                int[] r0 = r3.rg
                int r1 = r0.length
                int r2 = r3.df
                int r1 = r1 - r2
                if (r1 > r4) goto L14
                int r4 = r0.length
                int r4 = r4 + r1
                int r4 = r4 * 2
                int[] r4 = new int[r4]
                r1 = 0
                java.lang.System.arraycopy(r0, r1, r4, r1, r2)
                r3.rg = r4
            L14:
                return
        }

        public final void c() {
                r3 = this;
                int r0 = r3.df
                if (r0 == 0) goto L1c
                int r1 = r0 + (-1)
                int[] r2 = r3.rg
                r2 = r2[r1]
                int r1 = r1 + (-1)
                int r2 = r2 * 2
                int r1 = r1 - r2
                if (r1 == 0) goto L1c
                int r2 = r2 + 2
                int r0 = r0 - r2
                r3.df = r0
                int r0 = r3.q
                int r0 = r0 + (-1)
                r3.q = r0
            L1c:
                return
        }

        public final int df() {
                r2 = this;
                int r0 = r2.df
                if (r0 != 0) goto L6
                r0 = 0
                return r0
            L6:
                int r0 = r0 + (-1)
                int[] r1 = r2.rg
                r0 = r1[r0]
                return r0
        }

        public final void pp() {
                r5 = this;
                r0 = 2
                r5.rg(r0)
                int r1 = r5.df
                int[] r2 = r5.rg
                r3 = 0
                r2[r1] = r3
                int r4 = r1 + 1
                r2[r4] = r3
                int r1 = r1 + r0
                r5.df = r1
                int r0 = r5.q
                int r0 = r0 + 1
                r5.q = r0
                return
        }

        public final int pt() {
                r1 = this;
                int r0 = r1.q
                return r0
        }

        public final boolean q() {
                r6 = this;
                int r0 = r6.df
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                int r2 = r0 + (-1)
                int[] r3 = r6.rg
                r4 = r3[r2]
                if (r4 != 0) goto Lf
                return r1
            Lf:
                int r4 = r4 + (-1)
                int r2 = r2 + (-2)
                r3[r2] = r4
                int r1 = r4 * 2
                r5 = 1
                int r1 = r1 + r5
                int r2 = r2 - r1
                r3[r2] = r4
                int r0 = r0 + (-2)
                r6.df = r0
                return r5
        }

        public final void rg() {
                r1 = this;
                r0 = 0
                r1.df = r0
                r1.q = r0
                return
        }

        public final void rg(int r8, int r9) {
                r7 = this;
                int r0 = r7.q
                if (r0 != 0) goto L7
                r7.pp()
            L7:
                r0 = 2
                r7.rg(r0)
                int r1 = r7.df
                int r2 = r1 + (-1)
                int[] r3 = r7.rg
                r4 = r3[r2]
                int r5 = r2 + (-1)
                int r6 = r4 * 2
                int r5 = r5 - r6
                int r4 = r4 + 1
                r3[r5] = r4
                r3[r2] = r8
                int r8 = r2 + 1
                r3[r8] = r9
                int r2 = r2 + r0
                r3[r2] = r4
                int r1 = r1 + r0
                r7.df = r1
                return
        }
    }

    public rg() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.q = r0
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r0 = new com.ss.android.socialbase.appdownloader.c.rg.rg$rg
            r0.<init>()
            r1.c = r0
            r1.fw()
            return
    }

    private final void fw() {
            r2 = this;
            r0 = -1
            r2.ux = r0
            r2.rz = r0
            r2.bm = r0
            r2.b = r0
            r1 = 0
            r2.hq = r1
            r2.oh = r0
            r2.f = r0
            r2.v = r0
            return
    }

    private final int pp(int r4) {
            r3 = this;
            int r0 = r3.ux
            r1 = 2
            if (r0 != r1) goto L29
            int r0 = r4 * 5
            int[] r1 = r3.hq
            int r1 = r1.length
            if (r0 >= r1) goto Ld
            return r0
        Ld:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid attribute index ("
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = ")."
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L29:
            java.lang.IndexOutOfBoundsException r4 = new java.lang.IndexOutOfBoundsException
            java.lang.String r0 = "Current event is not START_TAG."
            r4.<init>(r0)
            throw r4
    }

    private final void ux() throws java.io.IOException {
            r10 = this;
            com.ss.android.socialbase.appdownloader.c.rg.c r0 = r10.pt
            r1 = 1
            if (r0 != 0) goto L21
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            r2 = 524291(0x80003, float:7.34688E-40)
            com.ss.android.socialbase.appdownloader.c.rg.df.rg(r0, r2)
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            r0.q()
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            com.ss.android.socialbase.appdownloader.c.rg.c r0 = com.ss.android.socialbase.appdownloader.c.rg.c.rg(r0)
            r10.pt = r0
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r0 = r10.c
            r0.pp()
            r10.q = r1
        L21:
            int r0 = r10.ux
            if (r0 == r1) goto L18d
            r10.fw()
        L28:
            boolean r2 = r10.fw
            r3 = 0
            if (r2 == 0) goto L34
            r10.fw = r3
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r2 = r10.c
            r2.c()
        L34:
            r2 = 3
            if (r0 != r2) goto L4b
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r4 = r10.c
            int r4 = r4.pt()
            if (r4 != r1) goto L4b
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r4 = r10.c
            int r4 = r4.df()
            if (r4 != 0) goto L4b
            r10.ux = r1
            goto L14c
        L4b:
            r4 = 1048834(0x100102, float:1.46973E-39)
            if (r0 != 0) goto L52
            r5 = r4
            goto L58
        L52:
            com.ss.android.socialbase.appdownloader.c.rg.pt r5 = r10.df
            int r5 = r5.df()
        L58:
            r6 = 524672(0x80180, float:7.35222E-40)
            r7 = 2
            java.lang.String r8 = ")."
            if (r5 != r6) goto L94
            com.ss.android.socialbase.appdownloader.c.rg.pt r2 = r10.df
            int r2 = r2.df()
            r3 = 8
            if (r2 < r3) goto L7a
            int r3 = r2 % 4
            if (r3 != 0) goto L7a
            com.ss.android.socialbase.appdownloader.c.rg.pt r3 = r10.df
            int r2 = r2 / 4
            int r2 = r2 - r7
            int[] r2 = r3.df(r2)
            r10.pp = r2
            goto L28
        L7a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Invalid resource ids size ("
            r1.append(r3)
            r1.append(r2)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L94:
            r6 = 1048832(0x100100, float:1.469727E-39)
            if (r5 < r6) goto L173
            r9 = 1048836(0x100104, float:1.469732E-39)
            if (r5 > r9) goto L173
            if (r5 != r4) goto La7
            r8 = -1
            if (r0 != r8) goto La7
            r10.ux = r3
            goto L14c
        La7:
            com.ss.android.socialbase.appdownloader.c.rg.pt r3 = r10.df
            r3.q()
            com.ss.android.socialbase.appdownloader.c.rg.pt r3 = r10.df
            int r3 = r3.df()
            com.ss.android.socialbase.appdownloader.c.rg.pt r8 = r10.df
            r8.q()
            if (r5 == r6) goto L14d
            r8 = 1048833(0x100101, float:1.469728E-39)
            if (r5 != r8) goto Lc0
            goto L14d
        Lc0:
            r10.rz = r3
            if (r5 != r4) goto L119
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            r10.b = r0
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            r10.bm = r0
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            r0.q()
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            int r3 = r0 >>> 16
            int r3 = r3 - r1
            r10.oh = r3
            r3 = 65535(0xffff, float:9.1834E-41)
            r0 = r0 & r3
            com.ss.android.socialbase.appdownloader.c.rg.pt r4 = r10.df
            int r4 = r4.df()
            r10.f = r4
            int r5 = r4 >>> 16
            int r5 = r5 - r1
            r10.v = r5
            r3 = r3 & r4
            int r3 = r3 - r1
            r10.f = r3
            com.ss.android.socialbase.appdownloader.c.rg.pt r1 = r10.df
            int r0 = r0 * 5
            int[] r0 = r1.df(r0)
            r10.hq = r0
        L103:
            int[] r0 = r10.hq
            int r1 = r0.length
            if (r2 >= r1) goto L111
            r1 = r0[r2]
            int r1 = r1 >>> 24
            r0[r2] = r1
            int r2 = r2 + 5
            goto L103
        L111:
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r0 = r10.c
            r0.pp()
            r10.ux = r7
            goto L14c
        L119:
            r3 = 1048835(0x100103, float:1.469731E-39)
            if (r5 != r3) goto L133
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            r10.b = r0
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            r10.bm = r0
            r10.ux = r2
            r10.fw = r1
            goto L14c
        L133:
            if (r5 == r9) goto L137
            goto L28
        L137:
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            int r0 = r0.df()
            r10.bm = r0
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            r0.q()
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r10.df
            r0.q()
            r0 = 4
            r10.ux = r0
        L14c:
            return
        L14d:
            if (r5 != r6) goto L162
            com.ss.android.socialbase.appdownloader.c.rg.pt r2 = r10.df
            int r2 = r2.df()
            com.ss.android.socialbase.appdownloader.c.rg.pt r3 = r10.df
            int r3 = r3.df()
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r4 = r10.c
            r4.rg(r2, r3)
            goto L28
        L162:
            com.ss.android.socialbase.appdownloader.c.rg.pt r2 = r10.df
            r2.q()
            com.ss.android.socialbase.appdownloader.c.rg.pt r2 = r10.df
            r2.q()
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r2 = r10.c
            r2.q()
            goto L28
        L173:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid chunk type ("
            r1.append(r2)
            r1.append(r5)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L18d:
            return
    }

    @Override
    public int c() {
            r1 = this;
            r0 = -1
            return r0
    }

    public int df() throws com.ss.android.socialbase.appdownloader.c.rg.ux, java.io.IOException {
            r3 = this;
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r3.df
            if (r0 == 0) goto Lf
            r3.ux()     // Catch: java.io.IOException -> La
            int r0 = r3.ux     // Catch: java.io.IOException -> La
            return r0
        La:
            r0 = move-exception
            r3.rg()
            throw r0
        Lf:
            com.ss.android.socialbase.appdownloader.c.rg.ux r0 = new com.ss.android.socialbase.appdownloader.c.rg.ux
            r1 = 0
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            java.lang.String r2 = "Parser is not opened."
            r0.<init>(r2, r3, r1)
            throw r0
    }

    public int df(int r2) {
            r1 = this;
            int r2 = r1.pp(r2)
            int[] r0 = r1.hq
            int r2 = r2 + 3
            r2 = r0[r2]
            return r2
    }

    public int pp() {
            r2 = this;
            int r0 = r2.ux
            r1 = 2
            if (r0 == r1) goto L7
            r0 = -1
            goto Lc
        L7:
            int[] r0 = r2.hq
            int r0 = r0.length
            int r0 = r0 / 5
        Lc:
            return r0
    }

    @Override
    public java.lang.String pt() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "XML line #"
            r0.append(r1)
            int r1 = r2.q()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public java.lang.String pt(int r4) {
            r3 = this;
            int r4 = r3.pp(r4)
            int[] r0 = r3.hq
            int r1 = r4 + 3
            r1 = r0[r1]
            r2 = 3
            if (r1 != r2) goto L18
            int r4 = r4 + 2
            r4 = r0[r4]
            com.ss.android.socialbase.appdownloader.c.rg.c r0 = r3.pt
            java.lang.String r4 = r0.rg(r4)
            return r4
        L18:
            int r4 = r4 + 4
            r4 = r0[r4]
            java.lang.String r4 = ""
            return r4
    }

    @Override
    public int q() {
            r1 = this;
            int r0 = r1.rz
            return r0
    }

    public int q(int r2) {
            r1 = this;
            int r2 = r1.pp(r2)
            int[] r0 = r1.hq
            int r2 = r2 + 4
            r2 = r0[r2]
            return r2
    }

    public java.lang.String rg(int r2) {
            r1 = this;
            int r2 = r1.pp(r2)
            int[] r0 = r1.hq
            int r2 = r2 + 1
            r2 = r0[r2]
            r0 = -1
            if (r2 != r0) goto L10
            java.lang.String r2 = ""
            goto L16
        L10:
            com.ss.android.socialbase.appdownloader.c.rg.c r0 = r1.pt
            java.lang.String r2 = r0.rg(r2)
        L16:
            return r2
    }

    public void rg() {
            r1 = this;
            boolean r0 = r1.q
            if (r0 == 0) goto L1b
            r0 = 0
            r1.q = r0
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = r1.df
            r0.rg()
            r0 = 0
            r1.df = r0
            r1.pt = r0
            r1.pp = r0
            com.ss.android.socialbase.appdownloader.c.rg.rg$rg r0 = r1.c
            r0.rg()
            r1.fw()
        L1b:
            return
    }

    public void rg(java.io.InputStream r3) {
            r2 = this;
            r2.rg()
            if (r3 == 0) goto Ld
            com.ss.android.socialbase.appdownloader.c.rg.pt r0 = new com.ss.android.socialbase.appdownloader.c.rg.pt
            r1 = 0
            r0.<init>(r3, r1)
            r2.df = r0
        Ld:
            return
    }
}
