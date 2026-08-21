package com.kwad.framework.filedownloader.message;

public class f {
    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot a(byte r8, com.kwad.framework.filedownloader.d.c r9, com.kwad.framework.filedownloader.download.d.a r10) {
            int r1 = r9.getId()
            r0 = 1
            r2 = 0
            r3 = -4
            if (r8 == r3) goto L162
            r3 = -3
            if (r8 == r3) goto L147
            r3 = -1
            if (r8 == r3) goto L123
            if (r8 == r0) goto Lfe
            r3 = 2
            if (r8 == r3) goto Lc0
            r4 = 3
            if (r8 == r4) goto La3
            r4 = 5
            if (r8 == r4) goto L75
            r4 = 6
            if (r8 == r4) goto L6e
            java.lang.Object[] r4 = new java.lang.Object[r3]
            r4[r2] = r9
            java.lang.Byte r5 = java.lang.Byte.valueOf(r8)
            r4[r0] = r5
            java.lang.String r5 = "it can't takes a snapshot for the task(%s) when its status is %d,"
            java.lang.String r4 = com.kwad.framework.filedownloader.f.f.b(r5, r4)
            java.lang.Class<com.kwad.framework.filedownloader.message.f> r6 = com.kwad.framework.filedownloader.message.f.class
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r3[r2] = r9
            java.lang.Byte r8 = java.lang.Byte.valueOf(r8)
            r3[r0] = r8
            com.kwad.framework.filedownloader.f.d.d(r6, r5, r3)
            java.lang.Exception r8 = r10.getException()
            if (r8 == 0) goto L4c
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.Exception r10 = r10.getException()
            r8.<init>(r4, r10)
            goto L51
        L4c:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            r8.<init>(r4)
        L51:
            boolean r10 = r9.td()
            if (r10 == 0) goto L62
            com.kwad.framework.filedownloader.message.d$d r10 = new com.kwad.framework.filedownloader.message.d$d
            long r2 = r9.vm()
            r10.<init>(r1, r2, r8)
            goto L161
        L62:
            com.kwad.framework.filedownloader.message.h$d r10 = new com.kwad.framework.filedownloader.message.h$d
            long r2 = r9.vm()
            int r9 = (int) r2
            r10.<init>(r1, r9, r8)
            goto L161
        L6e:
            com.kwad.framework.filedownloader.message.MessageSnapshot$b r10 = new com.kwad.framework.filedownloader.message.MessageSnapshot$b
            r10.<init>(r1)
            goto L161
        L75:
            boolean r8 = r9.td()
            if (r8 == 0) goto L8f
            com.kwad.framework.filedownloader.message.d$h r8 = new com.kwad.framework.filedownloader.message.d$h
            long r2 = r9.vm()
            java.lang.Exception r4 = r10.getException()
            int r5 = r10.tb()
            r0 = r8
            r0.<init>(r1, r2, r4, r5)
            goto L145
        L8f:
            com.kwad.framework.filedownloader.message.h$h r8 = new com.kwad.framework.filedownloader.message.h$h
            long r2 = r9.vm()
            int r9 = (int) r2
            java.lang.Exception r0 = r10.getException()
            int r10 = r10.tb()
            r8.<init>(r1, r9, r0, r10)
            goto L145
        La3:
            boolean r8 = r9.td()
            if (r8 == 0) goto Lb4
            com.kwad.framework.filedownloader.message.d$g r10 = new com.kwad.framework.filedownloader.message.d$g
            long r8 = r9.vm()
            r10.<init>(r1, r8)
            goto L161
        Lb4:
            com.kwad.framework.filedownloader.message.h$g r10 = new com.kwad.framework.filedownloader.message.h$g
            long r8 = r9.vm()
            int r8 = (int) r8
            r10.<init>(r1, r8)
            goto L161
        Lc0:
            boolean r8 = r9.sT()
            if (r8 == 0) goto Lcb
            java.lang.String r8 = r9.getFilename()
            goto Lcc
        Lcb:
            r8 = 0
        Lcc:
            boolean r0 = r9.td()
            if (r0 == 0) goto Le8
            com.kwad.framework.filedownloader.message.d$c r7 = new com.kwad.framework.filedownloader.message.d$c
            boolean r2 = r10.uR()
            long r3 = r9.getTotal()
            java.lang.String r5 = r9.vn()
            r0 = r7
            r6 = r8
            r0.<init>(r1, r2, r3, r5, r6)
            r10 = r7
            goto L161
        Le8:
            com.kwad.framework.filedownloader.message.h$c r6 = new com.kwad.framework.filedownloader.message.h$c
            boolean r2 = r10.uR()
            long r3 = r9.getTotal()
            int r3 = (int) r3
            java.lang.String r4 = r9.vn()
            r0 = r6
            r5 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r10 = r6
            goto L161
        Lfe:
            boolean r8 = r9.td()
            if (r8 == 0) goto L113
            com.kwad.framework.filedownloader.message.d$f r10 = new com.kwad.framework.filedownloader.message.d$f
            long r2 = r9.vm()
            long r4 = r9.getTotal()
            r0 = r10
            r0.<init>(r1, r2, r4)
            goto L161
        L113:
            com.kwad.framework.filedownloader.message.h$f r10 = new com.kwad.framework.filedownloader.message.h$f
            long r2 = r9.vm()
            int r8 = (int) r2
            long r2 = r9.getTotal()
            int r9 = (int) r2
            r10.<init>(r1, r8, r9)
            goto L161
        L123:
            boolean r8 = r9.td()
            if (r8 == 0) goto L137
            com.kwad.framework.filedownloader.message.d$d r8 = new com.kwad.framework.filedownloader.message.d$d
            long r2 = r9.vm()
            java.lang.Exception r9 = r10.getException()
            r8.<init>(r1, r2, r9)
            goto L145
        L137:
            com.kwad.framework.filedownloader.message.h$d r8 = new com.kwad.framework.filedownloader.message.h$d
            long r2 = r9.vm()
            int r9 = (int) r2
            java.lang.Exception r10 = r10.getException()
            r8.<init>(r1, r9, r10)
        L145:
            r10 = r8
            goto L161
        L147:
            boolean r8 = r9.td()
            if (r8 == 0) goto L157
            com.kwad.framework.filedownloader.message.d$b r10 = new com.kwad.framework.filedownloader.message.d$b
            long r8 = r9.getTotal()
            r10.<init>(r1, r2, r8)
            goto L161
        L157:
            com.kwad.framework.filedownloader.message.h$b r10 = new com.kwad.framework.filedownloader.message.h$b
            long r8 = r9.getTotal()
            int r8 = (int) r8
            r10.<init>(r1, r2, r8)
        L161:
            return r10
        L162:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.Object[] r9 = new java.lang.Object[r0]
            java.lang.Integer r10 = java.lang.Integer.valueOf(r1)
            r9[r2] = r10
            java.lang.String r10 = "please use #catchWarn instead %d"
            java.lang.String r9 = com.kwad.framework.filedownloader.f.f.b(r10, r9)
            r8.<init>(r9)
            throw r8
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot a(int r7, long r8, long r10, boolean r12) {
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1d
            if (r12 == 0) goto L13
            com.kwad.framework.filedownloader.message.d$i r12 = new com.kwad.framework.filedownloader.message.d$i
            r1 = r12
            r2 = r7
            r3 = r8
            r5 = r10
            r1.<init>(r2, r3, r5)
            return r12
        L13:
            com.kwad.framework.filedownloader.message.d$j r12 = new com.kwad.framework.filedownloader.message.d$j
            r0 = r12
            r1 = r7
            r2 = r8
            r4 = r10
            r0.<init>(r1, r2, r4)
            return r12
        L1d:
            if (r12 == 0) goto L27
            com.kwad.framework.filedownloader.message.h$i r12 = new com.kwad.framework.filedownloader.message.h$i
            int r8 = (int) r8
            int r9 = (int) r10
            r12.<init>(r7, r8, r9)
            return r12
        L27:
            com.kwad.framework.filedownloader.message.h$j r12 = new com.kwad.framework.filedownloader.message.h$j
            int r8 = (int) r8
            int r9 = (int) r10
            r12.<init>(r7, r8, r9)
            return r12
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot a(int r2, long r3, java.lang.Throwable r5) {
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            com.kwad.framework.filedownloader.message.d$d r0 = new com.kwad.framework.filedownloader.message.d$d
            r0.<init>(r2, r3, r5)
            return r0
        Ld:
            com.kwad.framework.filedownloader.message.h$d r0 = new com.kwad.framework.filedownloader.message.h$d
            int r3 = (int) r3
            r0.<init>(r2, r3, r5)
            return r0
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot a(int r4, java.io.File r5, boolean r6) {
            long r0 = r5.length()
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r2 = 1
            if (r5 <= 0) goto L1a
            if (r6 == 0) goto L14
            com.kwad.framework.filedownloader.message.d$a r5 = new com.kwad.framework.filedownloader.message.d$a
            r5.<init>(r4, r2, r0)
            return r5
        L14:
            com.kwad.framework.filedownloader.message.d$b r5 = new com.kwad.framework.filedownloader.message.d$b
            r5.<init>(r4, r2, r0)
            return r5
        L1a:
            if (r6 == 0) goto L23
            com.kwad.framework.filedownloader.message.h$a r5 = new com.kwad.framework.filedownloader.message.h$a
            int r6 = (int) r0
            r5.<init>(r4, r2, r6)
            return r5
        L23:
            com.kwad.framework.filedownloader.message.h$b r5 = new com.kwad.framework.filedownloader.message.h$b
            int r6 = (int) r0
            r5.<init>(r4, r2, r6)
            return r5
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot e(com.kwad.framework.filedownloader.a r7) {
            boolean r0 = r7.td()
            if (r0 == 0) goto L19
            com.kwad.framework.filedownloader.message.d$e r0 = new com.kwad.framework.filedownloader.message.d$e
            int r2 = r7.getId()
            long r3 = r7.sV()
            long r5 = r7.sW()
            r1 = r0
            r1.<init>(r2, r3, r5)
            return r0
        L19:
            com.kwad.framework.filedownloader.message.h$e r0 = new com.kwad.framework.filedownloader.message.h$e
            int r1 = r7.getId()
            int r2 = r7.getSmallFileSoFarBytes()
            int r7 = r7.getSmallFileTotalBytes()
            r0.<init>(r1, r2, r7)
            return r0
    }

    public static com.kwad.framework.filedownloader.message.MessageSnapshot t(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            byte r0 = r4.sX()
            r1 = -3
            if (r0 != r1) goto Ld
            com.kwad.framework.filedownloader.message.a$a r0 = new com.kwad.framework.filedownloader.message.a$a
            r0.<init>(r4)
            return r0
        Ld:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r3 = r4.getId()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 1
            byte r4 = r4.sX()
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r1[r2] = r4
            java.lang.String r4 = "take block completed snapshot, must has already be completed. %d %d"
            java.lang.String r4 = com.kwad.framework.filedownloader.f.f.b(r4, r1)
            r0.<init>(r4)
            throw r0
    }
}
