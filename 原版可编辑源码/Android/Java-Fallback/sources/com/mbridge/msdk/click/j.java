package com.mbridge.msdk.click;

public final class j extends com.mbridge.msdk.click.d implements com.mbridge.msdk.foundation.same.e.a.b {
    private boolean a;
    private long b;
    private com.mbridge.msdk.click.e c;
    private com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult d;
    private boolean e;
    private boolean f;
    private android.content.Context g;
    private com.mbridge.msdk.foundation.same.e.b h;
    private com.mbridge.msdk.click.g.a i;
    private android.os.Handler j;
    private boolean k;


    private class a extends com.mbridge.msdk.foundation.same.e.a {
        final com.mbridge.msdk.click.j a;
        private final java.util.concurrent.Semaphore b;
        private final android.content.Context c;
        private java.lang.String d;
        private java.lang.String e;
        private java.lang.String f;
        private java.lang.String g;
        private com.mbridge.msdk.rover.d h;
        private com.mbridge.msdk.foundation.entity.CampaignEx i;
        private boolean j;
        private boolean k;
        private int l;
        private com.mbridge.msdk.click.i.a m;


        public a(com.mbridge.msdk.click.j r2, android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, com.mbridge.msdk.rover.d r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, boolean r10, boolean r11, int r12) {
                r1 = this;
                r1.a = r2
                r1.<init>()
                java.util.concurrent.Semaphore r2 = new java.util.concurrent.Semaphore
                r0 = 0
                r2.<init>(r0)
                r1.b = r2
                com.mbridge.msdk.click.j$a$1 r2 = new com.mbridge.msdk.click.j$a$1
                r2.<init>(r1)
                r1.m = r2
                r1.c = r3
                r1.d = r4
                r1.e = r5
                r1.f = r6
                r1.g = r7
                r1.h = r8
                r1.i = r9
                r1.j = r10
                r1.k = r11
                r1.l = r12
                return
        }

        private com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult a(java.lang.String r20, boolean r21, boolean r22, com.mbridge.msdk.foundation.entity.CampaignEx r23, int r24) {
                r19 = this;
                r0 = r19
                r1 = r20
                java.lang.String r2 = ""
                java.lang.String r3 = "302"
                java.lang.String r4 = "startJavaHTTPSpider"
                com.mbridge.msdk.foundation.tools.z.d(r3, r4)
                com.mbridge.msdk.click.j r3 = r0.a
                boolean r3 = com.mbridge.msdk.click.j.a(r3)
                if (r3 == 0) goto L30
                android.content.Context r3 = r0.c
                java.lang.String r3 = com.mbridge.msdk.c.a.a(r3, r1)
                boolean r4 = android.text.TextUtils.isEmpty(r3)
                if (r4 != 0) goto L30
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r1)
                r4.append(r3)
                java.lang.String r1 = r4.toString()
            L30:
                com.mbridge.msdk.foundation.entity.CampaignEx r3 = r0.i
                if (r3 == 0) goto L38
                java.lang.String r1 = r3.matchLoopback(r1)
            L38:
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r3 = new com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult
                r3.<init>()
                com.mbridge.msdk.click.g r4 = new com.mbridge.msdk.click.g
                r4.<init>()
                boolean r5 = r0.b(r1)     // Catch: java.lang.Exception -> L57
                if (r5 != 0) goto L55
                java.net.URI r5 = java.net.URI.create(r1)     // Catch: java.lang.Exception -> L57
                java.lang.String r6 = r5.getScheme()     // Catch: java.lang.Exception -> L57
                java.lang.String r2 = r5.getHost()     // Catch: java.lang.Exception -> L58
                goto L58
            L55:
                r5 = r2
                goto L5a
            L57:
                r6 = r2
            L58:
                r5 = r2
                r2 = r6
            L5a:
                r6 = 0
                r14 = r6
            L5c:
                r7 = 10
                if (r14 >= r7) goto L269
                com.mbridge.msdk.click.j r7 = r0.a
                boolean r7 = com.mbridge.msdk.click.j.b(r7)
                r15 = 0
                if (r7 != 0) goto L6a
                return r15
            L6a:
                long r7 = java.lang.System.currentTimeMillis()
                com.mbridge.msdk.click.j r9 = r0.a
                r13 = r21
                r12 = r22
                r11 = r23
                com.mbridge.msdk.click.g$a r10 = r4.a(r1, r13, r12, r11)
                com.mbridge.msdk.click.j.a(r9, r10)
                long r9 = java.lang.System.currentTimeMillis()
                long r9 = r9 - r7
                int r10 = (int) r9
                com.mbridge.msdk.click.j r7 = r0.a
                com.mbridge.msdk.click.g$a r7 = com.mbridge.msdk.click.j.c(r7)
                if (r7 != 0) goto La2
                r3.setUrl(r1)
                r3.setSuccess(r6)
                com.mbridge.msdk.rover.d r7 = r0.h
                if (r7 == 0) goto L269
                int r9 = com.mbridge.msdk.rover.a.a
                r11 = 0
                java.lang.String r12 = ""
                java.lang.String r13 = "headerFiled is null"
                r8 = r1
                r7.c(r8, r9, r10, r11, r12, r13)
                goto L269
            La2:
                com.mbridge.msdk.click.j r7 = r0.a
                com.mbridge.msdk.click.g$a r7 = com.mbridge.msdk.click.j.c(r7)
                java.lang.String r7 = r7.h
                boolean r7 = android.text.TextUtils.isEmpty(r7)
                r9 = 1
                if (r7 != 0) goto L11c
                r3.setUrl(r1)
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r2 = r2.h
                r3.setExceptionMsg(r2)
                r3.setType(r9)
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r2 = r2.a()
                r3.setHeader(r2)
                r3.setSuccess(r6)
                if (r14 != 0) goto Lf2
                com.mbridge.msdk.click.a.a r7 = com.mbridge.msdk.click.a.a.a()
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r9 = r2.h
                java.lang.String r2 = r0.g
                r8 = r1
                r16 = r10
                r10 = r23
                r11 = r2
                r12 = r21
                r13 = r22
                r14 = r24
                r7.a(r8, r9, r10, r11, r12, r13, r14)
                goto Lf4
            Lf2:
                r16 = r10
            Lf4:
                com.mbridge.msdk.rover.d r7 = r0.h
                if (r7 == 0) goto L269
                int r9 = com.mbridge.msdk.rover.a.a
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                int r11 = r2.f
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r12 = r2.toString()
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r13 = r2.h
                r8 = r1
                r10 = r16
                r7.c(r8, r9, r10, r11, r12, r13)
                goto L269
            L11c:
                r16 = r10
                r3.setSuccess(r9)
                com.mbridge.msdk.rover.d r7 = r0.h
                if (r7 == 0) goto L151
                int r10 = com.mbridge.msdk.rover.a.a
                com.mbridge.msdk.click.j r8 = r0.a
                com.mbridge.msdk.click.g$a r8 = com.mbridge.msdk.click.j.c(r8)
                int r12 = r8.f
                com.mbridge.msdk.click.j r8 = r0.a
                com.mbridge.msdk.click.g$a r8 = com.mbridge.msdk.click.j.c(r8)
                java.lang.String r17 = r8.toString()
                com.mbridge.msdk.click.j r8 = r0.a
                com.mbridge.msdk.click.g$a r8 = com.mbridge.msdk.click.j.c(r8)
                java.lang.String r8 = r8.h
                r18 = r8
                r8 = r1
                r15 = r9
                r9 = r10
                r10 = r16
                r11 = r12
                r12 = r17
                r13 = r18
                r7.b(r8, r9, r10, r11, r12, r13)
                goto L152
            L151:
                r15 = r9
            L152:
                com.mbridge.msdk.click.j r7 = r0.a
                com.mbridge.msdk.click.g$a r7 = com.mbridge.msdk.click.j.c(r7)
                int r7 = r7.f
                r8 = 301(0x12d, float:4.22E-43)
                if (r7 == r8) goto L169
                r8 = 302(0x12e, float:4.23E-43)
                if (r7 == r8) goto L169
                r8 = 307(0x133, float:4.3E-43)
                if (r7 != r8) goto L167
                goto L169
            L167:
                r9 = r6
                goto L16a
            L169:
                r9 = r15
            L16a:
                if (r9 == 0) goto L218
                r3.setIs302Jump(r15)
                com.mbridge.msdk.click.j r7 = r0.a
                com.mbridge.msdk.click.g$a r7 = com.mbridge.msdk.click.j.c(r7)
                java.lang.String r7 = r7.a
                boolean r7 = android.text.TextUtils.isEmpty(r7)
                if (r7 == 0) goto L185
                r3.setjumpDone(r15)
                r3.setUrl(r1)
                goto L269
            L185:
                com.mbridge.msdk.click.j r1 = r0.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r1 = r1.a
                boolean r7 = r0.b(r1)
                if (r7 == 0) goto L1c9
                java.lang.String r7 = "/"
                boolean r7 = r1.startsWith(r7)
                if (r7 == 0) goto L1c1
                boolean r7 = android.text.TextUtils.isEmpty(r2)
                if (r7 != 0) goto L1c1
                boolean r7 = android.text.TextUtils.isEmpty(r5)
                if (r7 != 0) goto L1c1
                java.lang.StringBuilder r7 = new java.lang.StringBuilder
                r7.<init>()
                r7.append(r2)
                java.lang.String r2 = "://"
                r7.append(r2)
                r7.append(r5)
                r7.append(r1)
                java.lang.String r1 = r7.toString()
                r2 = 0
                r5 = 0
                goto L1db
            L1c1:
                r3.setjumpDone(r15)
                r3.setUrl(r1)
                goto L269
            L1c9:
                boolean r7 = r0.b(r1)
                if (r7 != 0) goto L1db
                java.net.URI r7 = java.net.URI.create(r1)     // Catch: java.lang.Exception -> L1db
                java.lang.String r2 = r7.getScheme()     // Catch: java.lang.Exception -> L1db
                java.lang.String r5 = r7.getHost()     // Catch: java.lang.Exception -> L1db
            L1db:
                boolean r7 = com.mbridge.msdk.foundation.tools.ad.a.a(r1)
                if (r7 == 0) goto L1e9
                r3.setjumpDone(r15)
                r3.setUrl(r1)
                goto L269
            L1e9:
                com.mbridge.msdk.click.j r7 = r0.a
                boolean r7 = com.mbridge.msdk.click.j.a(r7)
                if (r7 == 0) goto L20c
                android.content.Context r7 = r0.c
                java.lang.String r7 = com.mbridge.msdk.c.a.a(r7, r1)
                boolean r8 = android.text.TextUtils.isEmpty(r7)
                if (r8 != 0) goto L20c
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                r8.append(r1)
                r8.append(r7)
                java.lang.String r1 = r8.toString()
            L20c:
                com.mbridge.msdk.foundation.entity.CampaignEx r7 = r0.i
                if (r7 == 0) goto L214
                java.lang.String r1 = r7.matchLoopback(r1)
            L214:
                int r14 = r14 + 1
                goto L5c
            L218:
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                int r2 = r2.f
                r4 = 200(0xc8, float:2.8E-43)
                if (r2 != r4) goto L226
                r9 = r15
                goto L227
            L226:
                r9 = r6
            L227:
                if (r9 == 0) goto L247
                r3.setjumpDone(r15)
                r3.setUrl(r1)
                com.mbridge.msdk.click.j r1 = r0.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r1 = r1.g
                if (r1 != 0) goto L23b
                r15 = 0
                goto L243
            L23b:
                com.mbridge.msdk.click.j r1 = r0.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r15 = r1.g
            L243:
                r3.setContent(r15)
                goto L269
            L247:
                r3.setjumpDone(r6)
                r3.setUrl(r1)
                if (r14 != 0) goto L269
                com.mbridge.msdk.click.a.a r7 = com.mbridge.msdk.click.a.a.a()
                com.mbridge.msdk.click.j r2 = r0.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                java.lang.String r9 = r2.h
                java.lang.String r11 = r0.g
                r8 = r1
                r10 = r23
                r12 = r21
                r13 = r22
                r14 = r24
                r7.a(r8, r9, r10, r11, r12, r13, r14)
            L269:
                return r3
        }

        static void a(com.mbridge.msdk.click.j.a r0) {
                java.util.concurrent.Semaphore r0 = r0.b
                r0.release()
                return
        }

        static void a(com.mbridge.msdk.click.j.a r11, boolean r12, boolean r13, java.lang.String r14, java.lang.String r15) {
                com.mbridge.msdk.click.j r0 = r11.a
                long r0 = com.mbridge.msdk.click.j.d(r0)
                r2 = 0
                int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r2 != 0) goto L17
                long r0 = java.lang.System.currentTimeMillis()
                com.mbridge.msdk.click.j r2 = r11.a
                com.mbridge.msdk.click.j.a(r2, r0)
                r0 = 0
                goto L23
            L17:
                long r2 = java.lang.System.currentTimeMillis()
                long r0 = r2 - r0
                int r0 = (int) r0
                com.mbridge.msdk.click.j r1 = r11.a
                com.mbridge.msdk.click.j.a(r1, r2)
            L23:
                r7 = r0
                if (r12 == 0) goto L65
                r12 = 1
                if (r13 == 0) goto L47
                com.mbridge.msdk.rover.d r13 = r11.h
                if (r13 == 0) goto L73
                com.mbridge.msdk.click.j r13 = r11.a
                boolean r13 = com.mbridge.msdk.click.j.e(r13)
                if (r13 != 0) goto L73
                com.mbridge.msdk.click.j r13 = r11.a
                com.mbridge.msdk.click.j.a(r13, r12)
                com.mbridge.msdk.rover.d r4 = r11.h
                int r6 = com.mbridge.msdk.rover.a.b
                r8 = 0
                java.lang.String r9 = ""
                r5 = r14
                r10 = r15
                r4.a(r5, r6, r7, r8, r9, r10)
                goto L73
            L47:
                com.mbridge.msdk.rover.d r13 = r11.h
                if (r13 == 0) goto L73
                com.mbridge.msdk.click.j r13 = r11.a
                boolean r13 = com.mbridge.msdk.click.j.e(r13)
                if (r13 != 0) goto L73
                com.mbridge.msdk.click.j r13 = r11.a
                com.mbridge.msdk.click.j.a(r13, r12)
                com.mbridge.msdk.rover.d r4 = r11.h
                int r6 = com.mbridge.msdk.rover.a.b
                r8 = 0
                java.lang.String r9 = ""
                r5 = r14
                r10 = r15
                r4.c(r5, r6, r7, r8, r9, r10)
                goto L73
            L65:
                com.mbridge.msdk.rover.d r4 = r11.h
                if (r4 == 0) goto L73
                int r6 = com.mbridge.msdk.rover.a.b
                r8 = 0
                java.lang.String r9 = ""
                r5 = r14
                r10 = r15
                r4.b(r5, r6, r7, r8, r9, r10)
            L73:
                return
        }

        static boolean a(com.mbridge.msdk.click.j.a r0, java.lang.String r1) {
                boolean r0 = r0.a(r1)
                return r0
        }

        private boolean a(java.lang.String r4) {
                r3 = this;
                com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.i
                if (r0 == 0) goto L7
                r0.getLinkType()
            L7:
                boolean r0 = com.mbridge.msdk.foundation.tools.ad.a.a(r4)
                r1 = 1
                if (r0 == 0) goto L2a
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setCode(r1)
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setUrl(r4)
                com.mbridge.msdk.click.j r4 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r4 = com.mbridge.msdk.click.j.f(r4)
                r4.setjumpDone(r1)
                return r1
            L2a:
                boolean r0 = r3.c(r4)
                if (r0 == 0) goto L4d
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r2 = 3
                r0.setCode(r2)
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setUrl(r4)
                com.mbridge.msdk.click.j r4 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r4 = com.mbridge.msdk.click.j.f(r4)
                r4.setjumpDone(r1)
                return r1
            L4d:
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r1 = 2
                r0.setCode(r1)
                com.mbridge.msdk.click.j r0 = r3.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setUrl(r4)
                r4 = 0
                return r4
        }

        private boolean b(java.lang.String r1) {
                r0 = this;
                boolean r1 = android.webkit.URLUtil.isNetworkUrl(r1)
                r1 = r1 ^ 1
                return r1
        }

        private boolean c(java.lang.String r2) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L14
                java.lang.String r2 = r2.toLowerCase()
                java.lang.String r0 = "apk"
                boolean r2 = r2.contains(r0)
                if (r2 == 0) goto L14
                r2 = 1
                goto L15
            L14:
                r2 = 0
            L15:
                return r2
        }

        @Override
        public final void cancelTask() {
                r0 = this;
                return
        }

        @Override
        public final void pauseTask(boolean r1) {
                r0 = this;
                return
        }

        @Override
        public final void runTask() {
                r10 = this;
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.e r0 = com.mbridge.msdk.click.j.g(r0)
                if (r0 == 0) goto L12
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.e r0 = com.mbridge.msdk.click.j.g(r0)
                r1 = 0
                r0.a(r1)
            L12:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r1 = new com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult
                r1.<init>()
                com.mbridge.msdk.click.j.a(r0, r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r1 = r10.d
                r0.setUrl(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                java.lang.String r2 = r10.d
                boolean r3 = r10.j
                boolean r4 = r10.k
                com.mbridge.msdk.foundation.entity.CampaignEx r5 = r10.i
                int r6 = r10.l
                r1 = r10
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r1 = r1.a(r2, r3, r4, r5, r6)
                com.mbridge.msdk.click.j.a(r0, r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getExceptionMsg()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 1
                if (r0 != 0) goto L55
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setSuccess(r1)
            L55:
                com.mbridge.msdk.click.j r0 = r10.a
                boolean r0 = com.mbridge.msdk.click.j.b(r0)
                if (r0 != 0) goto L5e
                return
            L5e:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                boolean r0 = r0.isSuccess()
                if (r0 != 0) goto L6b
                return
            L6b:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.g$a r0 = com.mbridge.msdk.click.j.c(r0)
                if (r0 == 0) goto L84
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                com.mbridge.msdk.click.j r2 = r10.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                int r2 = r2.f
                r0.setStatusCode(r2)
            L84:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getUrl()
                boolean r0 = r10.c(r0)
                if (r0 != 0) goto L159
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getUrl()
                boolean r0 = com.mbridge.msdk.foundation.tools.ad.a.a(r0)
                if (r0 != 0) goto L159
                r0 = 200(0xc8, float:2.8E-43)
                com.mbridge.msdk.click.j r2 = r10.a
                com.mbridge.msdk.click.g$a r2 = com.mbridge.msdk.click.j.c(r2)
                int r2 = r2.f
                if (r0 != r2) goto L159
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getContent()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L159
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getContent()
                java.lang.String r2 = "EXCEPTION_CAMPAIGN_NOT_ACTIVE"
                boolean r0 = r0.contains(r2)
                if (r0 != 0) goto L159
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r1 = 2
                r0.setType(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getContent()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                java.lang.String r1 = "302"
                if (r0 != 0) goto L123
                java.lang.String r0 = "startWebViewHtmlParser"
                android.util.Log.e(r1, r0)
                com.mbridge.msdk.click.i r2 = new com.mbridge.msdk.click.i
                com.mbridge.msdk.click.j r3 = r10.a
                boolean r3 = com.mbridge.msdk.click.j.h(r3)
                r2.<init>(r3)
                java.lang.String r3 = r10.e
                java.lang.String r4 = r10.f
                java.lang.String r5 = r10.g
                android.content.Context r6 = r10.c
                com.mbridge.msdk.click.j r7 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r7 = com.mbridge.msdk.click.j.f(r7)
                java.lang.String r7 = r7.getUrl()
                com.mbridge.msdk.click.j r8 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r8 = com.mbridge.msdk.click.j.f(r8)
                java.lang.String r8 = r8.getContent()
                com.mbridge.msdk.click.i$a r9 = r10.m
                r2.a(r3, r4, r5, r6, r7, r8, r9)
                com.mbridge.msdk.foundation.tools.z.d(r1, r0)
                goto L152
            L123:
                java.lang.String r0 = "startWebViewSpider"
                com.mbridge.msdk.foundation.tools.z.a(r1, r0)
                com.mbridge.msdk.click.i r2 = new com.mbridge.msdk.click.i     // Catch: java.lang.Exception -> L14b
                com.mbridge.msdk.click.j r0 = r10.a     // Catch: java.lang.Exception -> L14b
                boolean r0 = com.mbridge.msdk.click.j.h(r0)     // Catch: java.lang.Exception -> L14b
                r2.<init>(r0)     // Catch: java.lang.Exception -> L14b
                java.lang.String r3 = r10.e     // Catch: java.lang.Exception -> L14b
                java.lang.String r4 = r10.f     // Catch: java.lang.Exception -> L14b
                java.lang.String r5 = r10.g     // Catch: java.lang.Exception -> L14b
                android.content.Context r6 = r10.c     // Catch: java.lang.Exception -> L14b
                com.mbridge.msdk.click.j r0 = r10.a     // Catch: java.lang.Exception -> L14b
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)     // Catch: java.lang.Exception -> L14b
                java.lang.String r7 = r0.getUrl()     // Catch: java.lang.Exception -> L14b
                com.mbridge.msdk.click.i$a r8 = r10.m     // Catch: java.lang.Exception -> L14b
                r2.a(r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Exception -> L14b
                goto L152
            L14b:
                java.lang.String r0 = "TAG"
                java.lang.String r1 = "webview spider start error"
                com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            L152:
                java.util.concurrent.Semaphore r0 = r10.b
                r0.acquireUninterruptibly()
                goto L1d6
            L159:
                com.mbridge.msdk.rover.d r2 = r10.h
                if (r2 == 0) goto L172
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r3 = r0.getUrl()
                int r4 = com.mbridge.msdk.rover.a.a
                r5 = 0
                r6 = 0
                java.lang.String r7 = ""
                java.lang.String r8 = ""
                r2.a(r3, r4, r5, r6, r7, r8)
            L172:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.g$a r0 = com.mbridge.msdk.click.j.c(r0)
                if (r0 == 0) goto L1c9
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                r0.setType(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                com.mbridge.msdk.click.j r1 = r10.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r1 = r1.h
                r0.setExceptionMsg(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                com.mbridge.msdk.click.j r1 = r10.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                int r1 = r1.f
                r0.setStatusCode(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                com.mbridge.msdk.click.j r1 = r10.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r1 = r1.a()
                r0.setHeader(r1)
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                com.mbridge.msdk.click.j r1 = r10.a
                com.mbridge.msdk.click.g$a r1 = com.mbridge.msdk.click.j.c(r1)
                java.lang.String r1 = r1.g
                r0.setContent(r1)
            L1c9:
                com.mbridge.msdk.click.j r0 = r10.a
                com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = com.mbridge.msdk.click.j.f(r0)
                java.lang.String r0 = r0.getUrl()
                r10.a(r0)
            L1d6:
                return
        }
    }

    public j(android.content.Context r3, boolean r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r0 = 0
            r2.b = r0
            r0 = 1
            r2.e = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.j = r0
            r2.g = r3
            r2.k = r4
            if (r4 == 0) goto L27
            com.mbridge.msdk.foundation.same.e.b r4 = new com.mbridge.msdk.foundation.same.e.b
            r0 = 2
            r4.<init>(r3, r0)
            r2.h = r4
            goto L2e
        L27:
            com.mbridge.msdk.foundation.same.e.b r4 = new com.mbridge.msdk.foundation.same.e.b
            r4.<init>(r3)
            r2.h = r4
        L2e:
            return
    }

    static long a(com.mbridge.msdk.click.j r0, long r1) {
            r0.b = r1
            return r1
    }

    static com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult a(com.mbridge.msdk.click.j r0, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r1) {
            r0.d = r1
            return r1
    }

    static com.mbridge.msdk.click.g.a a(com.mbridge.msdk.click.j r0, com.mbridge.msdk.click.g.a r1) {
            r0.i = r1
            return r1
    }

    static boolean a(com.mbridge.msdk.click.j r0) {
            boolean r0 = r0.f
            return r0
    }

    static boolean a(com.mbridge.msdk.click.j r0, boolean r1) {
            r0.a = r1
            return r1
    }

    static boolean b(com.mbridge.msdk.click.j r0) {
            boolean r0 = r0.e
            return r0
    }

    static com.mbridge.msdk.click.g.a c(com.mbridge.msdk.click.j r0) {
            com.mbridge.msdk.click.g$a r0 = r0.i
            return r0
    }

    static long d(com.mbridge.msdk.click.j r2) {
            long r0 = r2.b
            return r0
    }

    static boolean e(com.mbridge.msdk.click.j r0) {
            boolean r0 = r0.a
            return r0
    }

    static com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult f(com.mbridge.msdk.click.j r0) {
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r0 = r0.d
            return r0
    }

    static com.mbridge.msdk.click.e g(com.mbridge.msdk.click.j r0) {
            com.mbridge.msdk.click.e r0 = r0.c
            return r0
    }

    static boolean h(com.mbridge.msdk.click.j r0) {
            boolean r0 = r0.k
            return r0
    }

    @Override
    public final void a() {
            r1 = this;
            r0 = 0
            r1.e = r0
            return
    }

    @Override
    public final void a(com.mbridge.msdk.foundation.same.e.a.a r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.e.a$a r0 = com.mbridge.msdk.foundation.same.e.a.a.e
            if (r2 != r0) goto L13
            boolean r2 = r1.e
            if (r2 != 0) goto L9
            return
        L9:
            android.os.Handler r2 = r1.j
            com.mbridge.msdk.click.j$1 r0 = new com.mbridge.msdk.click.j$1
            r0.<init>(r1)
            r2.post(r0)
        L13:
            return
    }

    public final void a(java.lang.String r16, com.mbridge.msdk.click.e r17, boolean r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, com.mbridge.msdk.rover.d r22, com.mbridge.msdk.foundation.entity.CampaignEx r23, boolean r24, boolean r25, int r26) {
            r15 = this;
            r12 = r15
            r0 = r17
            r12.c = r0
            r0 = r18
            r12.f = r0
            com.mbridge.msdk.foundation.same.e.b r13 = r12.h
            com.mbridge.msdk.click.j$a r14 = new com.mbridge.msdk.click.j$a
            android.content.Context r2 = r12.g
            r0 = r14
            r1 = r15
            r3 = r16
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r13.a(r14, r15)
            return
    }
}
