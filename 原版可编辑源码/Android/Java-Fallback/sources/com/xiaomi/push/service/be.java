package com.xiaomi.push.service;

public class be {
    private com.xiaomi.push.service.XMPushService a;

    be(com.xiaomi.push.service.XMPushService r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private void a(com.xiaomi.push.gk r4) {
            r3 = this;
            java.lang.String r4 = r4.c()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L33
            java.lang.String r0 = ";"
            java.lang.String[] r4 = r4.split(r0)
            com.xiaomi.push.cv r0 = com.xiaomi.push.cv.a()
            java.lang.String r1 = com.xiaomi.push.fx.a()
            r2 = 0
            com.xiaomi.push.cr r0 = r0.a(r1, r2)
            if (r0 == 0) goto L33
            int r1 = r4.length
            if (r1 <= 0) goto L33
            r0.a(r4)
            com.xiaomi.push.service.XMPushService r4 = r3.a
            r0 = 20
            r1 = 0
            r4.a(r0, r1)
            com.xiaomi.push.service.XMPushService r4 = r3.a
            r0 = 1
            r4.a(r0)
        L33:
            return
    }

    private void b(com.xiaomi.push.gn r10) {
            r9 = this;
            java.lang.String r0 = r10.l()
            java.lang.String r1 = r10.k()
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L34
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L34
            com.xiaomi.push.service.bg r2 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r0 = r2.a(r1, r0)
            if (r0 == 0) goto L34
            com.xiaomi.push.service.XMPushService r1 = r9.a
            java.lang.String r2 = r0.a
            java.lang.String r10 = r10.a()
            int r10 = com.xiaomi.push.hb.a(r10)
            long r3 = (long) r10
            r5 = 1
            r6 = 1
            long r7 = java.lang.System.currentTimeMillis()
            com.xiaomi.push.hb.a(r1, r2, r3, r5, r6, r7)
        L34:
            return
    }

    private void c(com.xiaomi.push.fl r10) {
            r9 = this;
            java.lang.String r0 = r10.g()
            int r1 = r10.a()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L34
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L34
            com.xiaomi.push.service.bg r2 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r0 = r2.a(r1, r0)
            if (r0 == 0) goto L34
            com.xiaomi.push.service.XMPushService r1 = r9.a
            java.lang.String r2 = r0.a
            int r10 = r10.c()
            long r3 = (long) r10
            r5 = 1
            r6 = 1
            long r7 = java.lang.System.currentTimeMillis()
            com.xiaomi.push.hb.a(r1, r2, r3, r5, r6, r7)
        L34:
            return
    }

    public void a(com.xiaomi.push.fl r4) {
            r3 = this;
            int r0 = r4.a()
            r1 = 5
            if (r1 == r0) goto La
            r3.c(r4)
        La:
            r3.b(r4)     // Catch: java.lang.Exception -> Le
            goto L44
        Le:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "handle Blob chid = "
            r1.append(r2)
            int r2 = r4.a()
            r1.append(r2)
            java.lang.String r2 = " cmd = "
            r1.append(r2)
            java.lang.String r2 = r4.a()
            r1.append(r2)
            java.lang.String r2 = " packetid = "
            r1.append(r2)
            java.lang.String r4 = r4.e()
            r1.append(r4)
            java.lang.String r4 = " failure "
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4, r0)
        L44:
            return
    }

    public void a(com.xiaomi.push.gn r10) {
            r9 = this;
            java.lang.String r0 = r10.k()
            java.lang.String r1 = "5"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto Lf
            r9.b(r10)
        Lf:
            java.lang.String r0 = r10.k()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1e
            java.lang.String r0 = "1"
            r10.l(r0)
        L1e:
            java.lang.String r1 = "0"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L3e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Received wrong packet with chid = 0 : "
            r1.append(r2)
            java.lang.String r2 = r10.a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
        L3e:
            boolean r1 = r10 instanceof com.xiaomi.push.gl
            if (r1 == 0) goto Lbb
            java.lang.String r1 = "kick"
            com.xiaomi.push.gk r1 = r10.a(r1)
            if (r1 == 0) goto Lda
            java.lang.String r10 = r10.l()
            java.lang.String r2 = "type"
            java.lang.String r8 = r1.a(r2)
            java.lang.String r2 = "reason"
            java.lang.String r7 = r1.a(r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "kicked by server, chid="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = " res="
            r1.append(r2)
            java.lang.String r2 = com.xiaomi.push.service.bg.b.a(r10)
            r1.append(r2)
            java.lang.String r2 = " type="
            r1.append(r2)
            r1.append(r8)
            java.lang.String r2 = " reason="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            java.lang.String r1 = "wait"
            boolean r1 = r1.equals(r8)
            if (r1 == 0) goto La9
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r3 = r1.a(r0, r10)
            if (r3 == 0) goto Lba
            com.xiaomi.push.service.XMPushService r10 = r9.a
            r10.a(r3)
            com.xiaomi.push.service.bg$c r4 = com.xiaomi.push.service.bg.c.a
            r5 = 3
            r6 = 0
            r3.a(r4, r5, r6, r7, r8)
            goto Lba
        La9:
            com.xiaomi.push.service.XMPushService r1 = r9.a
            r4 = 3
            r2 = r0
            r3 = r10
            r5 = r7
            r6 = r8
            r1.a(r2, r3, r4, r5, r6)
            com.xiaomi.push.service.bg r1 = com.xiaomi.push.service.bg.a()
            r1.a(r0, r10)
        Lba:
            return
        Lbb:
            boolean r1 = r10 instanceof com.xiaomi.push.gm
            if (r1 == 0) goto Lda
            r1 = r10
            com.xiaomi.push.gm r1 = (com.xiaomi.push.gm) r1
            java.lang.String r2 = r1.b()
            java.lang.String r3 = "redir"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto Lda
            java.lang.String r10 = "hosts"
            com.xiaomi.push.gk r10 = r1.a(r10)
            if (r10 == 0) goto Ld9
            r9.a(r10)
        Ld9:
            return
        Lda:
            com.xiaomi.push.service.XMPushService r1 = r9.a
            com.xiaomi.push.service.j r1 = r1.b()
            com.xiaomi.push.service.XMPushService r2 = r9.a
            r1.a(r2, r0, r10)
            return
    }

    public void b(com.xiaomi.push.fl r15) {
            r14 = this;
            java.lang.String r0 = r15.a()
            int r1 = r15.a()
            r2 = 0
            r3 = 0
            if (r1 == 0) goto L1b5
            int r1 = r15.a()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            java.lang.String r4 = r15.a()
            java.lang.String r5 = "SECMSG"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L59
            boolean r0 = r15.a()
            if (r0 != 0) goto L33
            com.xiaomi.push.service.XMPushService r0 = r14.a
            com.xiaomi.push.service.j r0 = r0.b()
            com.xiaomi.push.service.XMPushService r2 = r14.a
            r0.a(r2, r1, r15)
            goto L327
        L33:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Recv SECMSG errCode = "
            r0.append(r1)
            int r1 = r15.b()
            r0.append(r1)
            java.lang.String r1 = " errStr = "
            r0.append(r1)
            java.lang.String r15 = r15.c()
        L4d:
            r0.append(r15)
            java.lang.String r15 = r0.toString()
        L54:
            com.xiaomi.channel.commonutils.logger.b.a(r15)
            goto L327
        L59:
            java.lang.String r4 = "BIND"
            boolean r4 = r4.equals(r0)
            java.lang.String r5 = "wait"
            java.lang.String r6 = " reason="
            if (r4 == 0) goto L13a
            byte[] r0 = r15.a()
            com.xiaomi.push.dx$d r0 = com.xiaomi.push.dx.d.a(r0)
            java.lang.String r4 = r15.g()
            com.xiaomi.push.service.bg r7 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r8 = r7.a(r1, r4)
            if (r8 != 0) goto L7c
            return
        L7c:
            boolean r7 = r0.a()
            if (r7 == 0) goto La5
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SMACK: channel bind succeeded, chid="
            r0.append(r1)
            int r15 = r15.a()
            r0.append(r15)
            java.lang.String r15 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r15)
            com.xiaomi.push.service.bg$c r9 = com.xiaomi.push.service.bg.c.c
            r10 = 1
            r11 = 0
            r12 = 0
            r13 = 0
            r8.a(r9, r10, r11, r12, r13)
            goto L327
        La5:
            java.lang.String r13 = r0.a()
            java.lang.String r15 = "auth"
            boolean r15 = r15.equals(r13)
            if (r15 == 0) goto Lec
            java.lang.String r15 = r0.b()
            java.lang.String r5 = "invalid-sig"
            boolean r15 = r5.equals(r15)
            if (r15 == 0) goto Le7
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r5 = "SMACK: bind error invalid-sig token = "
            r15.append(r5)
            java.lang.String r5 = r8.c
            r15.append(r5)
            java.lang.String r5 = " sec = "
            r15.append(r5)
            java.lang.String r5 = r8.h
            r15.append(r5)
            java.lang.String r15 = r15.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r15)
            com.xiaomi.push.ez r15 = com.xiaomi.push.ez.T
            int r15 = r15.a()
            r5 = 1
            com.xiaomi.push.fj.a(r3, r15, r5, r2, r3)
        Le7:
            com.xiaomi.push.service.bg$c r9 = com.xiaomi.push.service.bg.c.a
            r10 = 1
            r11 = 5
            goto Lf8
        Lec:
            java.lang.String r15 = "cancel"
            boolean r15 = r15.equals(r13)
            if (r15 == 0) goto L107
            com.xiaomi.push.service.bg$c r9 = com.xiaomi.push.service.bg.c.a
            r10 = 1
            r11 = 7
        Lf8:
            java.lang.String r12 = r0.b()
            r8.a(r9, r10, r11, r12, r13)
            com.xiaomi.push.service.bg r15 = com.xiaomi.push.service.bg.a()
            r15.a(r1, r4)
            goto L11d
        L107:
            boolean r15 = r5.equals(r13)
            if (r15 == 0) goto L11d
            com.xiaomi.push.service.XMPushService r15 = r14.a
            r15.a(r8)
            com.xiaomi.push.service.bg$c r9 = com.xiaomi.push.service.bg.c.a
            r10 = 1
            r11 = 7
            java.lang.String r12 = r0.b()
            r8.a(r9, r10, r11, r12, r13)
        L11d:
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r2 = "SMACK: channel bind failed, chid="
            r15.append(r2)
            r15.append(r1)
            r15.append(r6)
            java.lang.String r0 = r0.b()
            r15.append(r0)
            java.lang.String r15 = r15.toString()
            goto L54
        L13a:
            java.lang.String r2 = "KICK"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L327
            byte[] r0 = r15.a()
            com.xiaomi.push.dx$g r0 = com.xiaomi.push.dx.g.a(r0)
            java.lang.String r15 = r15.g()
            java.lang.String r12 = r0.a()
            java.lang.String r11 = r0.b()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "kicked by server, chid="
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = " res= "
            r0.append(r2)
            java.lang.String r2 = com.xiaomi.push.service.bg.b.a(r15)
            r0.append(r2)
            java.lang.String r2 = " type="
            r0.append(r2)
            r0.append(r12)
            r0.append(r6)
            r0.append(r11)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            boolean r0 = r5.equals(r12)
            if (r0 == 0) goto L1a2
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            com.xiaomi.push.service.bg$b r7 = r0.a(r1, r15)
            if (r7 == 0) goto L327
            com.xiaomi.push.service.XMPushService r15 = r14.a
            r15.a(r7)
            com.xiaomi.push.service.bg$c r8 = com.xiaomi.push.service.bg.c.a
            r9 = 3
            r10 = 0
            r7.a(r8, r9, r10, r11, r12)
            goto L327
        L1a2:
            com.xiaomi.push.service.XMPushService r4 = r14.a
            r7 = 3
            r5 = r1
            r6 = r15
            r8 = r11
            r9 = r12
            r4.a(r5, r6, r7, r8, r9)
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            r0.a(r1, r15)
            goto L327
        L1b5:
            java.lang.String r1 = "PING"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L20a
            byte[] r0 = r15.a()
            if (r0 == 0) goto L1db
            int r1 = r0.length
            if (r1 <= 0) goto L1db
            com.xiaomi.push.dx$j r0 = com.xiaomi.push.dx.j.a(r0)
            boolean r1 = r0.b()
            if (r1 == 0) goto L1db
            com.xiaomi.push.service.bv r1 = com.xiaomi.push.service.bv.a()
            com.xiaomi.push.dx$b r0 = r0.a()
            r1.a(r0)
        L1db:
            com.xiaomi.push.service.XMPushService r0 = r14.a
            java.lang.String r0 = r0.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1ee
            com.xiaomi.push.service.XMPushService r0 = r14.a
            r0.a()
        L1ee:
            java.lang.String r15 = r15.e()
            java.lang.String r0 = "1"
            boolean r15 = r0.equals(r15)
            if (r15 == 0) goto L200
            java.lang.String r15 = "received a server ping"
            com.xiaomi.channel.commonutils.logger.b.a(r15)
            goto L203
        L200:
            com.xiaomi.push.fj.b()
        L203:
            com.xiaomi.push.service.XMPushService r15 = r14.a
            r15.b()
            goto L327
        L20a:
            java.lang.String r1 = "SYNC"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2f7
            java.lang.String r0 = r15.b()
            java.lang.String r1 = "CONF"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L22f
            byte[] r15 = r15.a()
            com.xiaomi.push.dx$b r15 = com.xiaomi.push.dx.b.a(r15)
            com.xiaomi.push.service.bv r0 = com.xiaomi.push.service.bv.a()
            r0.a(r15)
            goto L327
        L22f:
            java.lang.String r0 = r15.b()
            java.lang.String r1 = "U"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L296
            byte[] r0 = r15.a()
            com.xiaomi.push.dx$k r0 = com.xiaomi.push.dx.k.a(r0)
            com.xiaomi.push.service.XMPushService r1 = r14.a
            com.xiaomi.push.df r4 = com.xiaomi.push.df.a(r1)
            java.lang.String r5 = r0.a()
            java.lang.String r6 = r0.b()
            java.util.Date r7 = new java.util.Date
            long r1 = r0.a()
            r7.<init>(r1)
            java.util.Date r8 = new java.util.Date
            long r1 = r0.b()
            r8.<init>(r1)
            int r1 = r0.c()
            int r9 = r1 * 1024
            boolean r10 = r0.e()
            r4.a(r5, r6, r7, r8, r9, r10)
            com.xiaomi.push.fl r0 = new com.xiaomi.push.fl
            r0.<init>()
            r0.a(r3)
            java.lang.String r1 = r15.a()
            java.lang.String r2 = "UCA"
            r0.a(r1, r2)
            java.lang.String r15 = r15.e()
            r0.a(r15)
            com.xiaomi.push.service.XMPushService r15 = r14.a
            com.xiaomi.push.service.bt r1 = new com.xiaomi.push.service.bt
            com.xiaomi.push.service.XMPushService r2 = r14.a
            r1.<init>(r2, r0)
            r15.a(r1)
            goto L327
        L296:
            java.lang.String r0 = r15.b()
            java.lang.String r1 = "P"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto L327
            byte[] r0 = r15.a()
            com.xiaomi.push.dx$i r0 = com.xiaomi.push.dx.i.a(r0)
            com.xiaomi.push.fl r1 = new com.xiaomi.push.fl
            r1.<init>()
            r1.a(r3)
            java.lang.String r3 = r15.a()
            java.lang.String r4 = "PCA"
            r1.a(r3, r4)
            java.lang.String r3 = r15.e()
            r1.a(r3)
            com.xiaomi.push.dx$i r3 = new com.xiaomi.push.dx$i
            r3.<init>()
            boolean r4 = r0.a()
            if (r4 == 0) goto L2d4
            com.xiaomi.push.a r0 = r0.a()
            r3.a(r0)
        L2d4:
            byte[] r0 = r3.a()
            r1.a(r0, r2)
            com.xiaomi.push.service.XMPushService r0 = r14.a
            com.xiaomi.push.service.bt r2 = new com.xiaomi.push.service.bt
            com.xiaomi.push.service.XMPushService r3 = r14.a
            r2.<init>(r3, r1)
            r0.a(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ACK msgP: id = "
            r0.append(r1)
            java.lang.String r15 = r15.e()
            goto L4d
        L2f7:
            java.lang.String r0 = r15.a()
            java.lang.String r1 = "NOTIFY"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L327
            byte[] r15 = r15.a()
            com.xiaomi.push.dx$h r15 = com.xiaomi.push.dx.h.a(r15)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "notify by server err = "
            r0.append(r1)
            int r1 = r15.c()
            r0.append(r1)
            java.lang.String r1 = " desc = "
            r0.append(r1)
            java.lang.String r15 = r15.a()
            goto L4d
        L327:
            return
    }
}
