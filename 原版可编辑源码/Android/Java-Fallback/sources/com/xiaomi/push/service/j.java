package com.xiaomi.push.service;

public class j {
    private com.xiaomi.push.service.y a;

    public j() {
            r1 = this;
            r1.<init>()
            com.xiaomi.push.service.y r0 = new com.xiaomi.push.service.y
            r0.<init>()
            r1.a = r0
            return
    }

    public static java.lang.String a(com.xiaomi.push.service.bg.b r2) {
            java.lang.String r0 = r2.g
            java.lang.String r1 = "9"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r2.a
            r0.append(r2)
            java.lang.String r2 = ".permission.MIPUSH_RECEIVE"
        L16:
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r2.a
            r0.append(r2)
            java.lang.String r2 = ".permission.MIMC_RECEIVE"
            goto L16
    }

    private static void a(android.content.Context r2, android.content.Intent r3, com.xiaomi.push.service.bg.b r4) {
            java.lang.String r0 = r2.getPackageName()
            java.lang.String r1 = "com.xiaomi.xmsf"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L10
            r2.sendBroadcast(r3)
            goto L17
        L10:
            java.lang.String r4 = a(r4)
            r2.sendBroadcast(r3, r4)
        L17:
            return
    }

    com.xiaomi.push.service.bg.b a(com.xiaomi.push.fl r5) {
            r4 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            int r1 = r5.a()
            java.lang.String r1 = java.lang.Integer.toString(r1)
            java.util.Collection r0 = r0.a(r1)
            boolean r1 = r0.isEmpty()
            r2 = 0
            if (r1 == 0) goto L18
            return r2
        L18:
            java.util.Iterator r1 = r0.iterator()
            int r0 = r0.size()
            r3 = 1
            if (r0 != r3) goto L2a
            java.lang.Object r5 = r1.next()
            com.xiaomi.push.service.bg$b r5 = (com.xiaomi.push.service.bg.b) r5
            return r5
        L2a:
            java.lang.String r5 = r5.g()
        L2e:
            boolean r0 = r1.hasNext()
            if (r0 == 0) goto L43
            java.lang.Object r0 = r1.next()
            com.xiaomi.push.service.bg$b r0 = (com.xiaomi.push.service.bg.b) r0
            java.lang.String r3 = r0.b
            boolean r3 = android.text.TextUtils.equals(r5, r3)
            if (r3 == 0) goto L2e
            return r0
        L43:
            return r2
    }

    com.xiaomi.push.service.bg.b a(com.xiaomi.push.gn r6) {
            r5 = this;
            com.xiaomi.push.service.bg r0 = com.xiaomi.push.service.bg.a()
            java.lang.String r1 = r6.k()
            java.util.Collection r0 = r0.a(r1)
            boolean r1 = r0.isEmpty()
            r2 = 0
            if (r1 == 0) goto L14
            return r2
        L14:
            java.util.Iterator r1 = r0.iterator()
            int r0 = r0.size()
            r3 = 1
            if (r0 != r3) goto L26
            java.lang.Object r6 = r1.next()
            com.xiaomi.push.service.bg$b r6 = (com.xiaomi.push.service.bg.b) r6
            return r6
        L26:
            java.lang.String r0 = r6.m()
            java.lang.String r6 = r6.l()
        L2e:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto L4b
            java.lang.Object r3 = r1.next()
            com.xiaomi.push.service.bg$b r3 = (com.xiaomi.push.service.bg.b) r3
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.equals(r0, r4)
            if (r4 != 0) goto L4a
            java.lang.String r4 = r3.b
            boolean r4 = android.text.TextUtils.equals(r6, r4)
            if (r4 == 0) goto L2e
        L4a:
            return r3
        L4b:
            return r2
    }

    public void a(android.content.Context r3) {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.xiaomi.push.service_started"
            r0.setAction(r1)
            boolean r1 = com.xiaomi.push.m.c()
            if (r1 == 0) goto L15
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            r0.addFlags(r1)
        L15:
            java.lang.String r1 = "[Bcst] send ***.push.service_started broadcast to inform push service has started."
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r3.sendBroadcast(r0)
            return
    }

    public void a(android.content.Context r5, com.xiaomi.push.service.bg.b r6, int r7) {
            r4 = this;
            java.lang.String r0 = r6.g
            java.lang.String r1 = "5"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto Lc
            goto L95
        Lc:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.xiaomi.push.channel_closed"
            r0.setAction(r1)
            java.lang.String r1 = r6.a
            r0.setPackage(r1)
            java.lang.String r1 = com.xiaomi.push.service.bk.t
            java.lang.String r2 = r6.g
            r0.putExtra(r1, r2)
            java.lang.String r1 = "ext_reason"
            r0.putExtra(r1, r7)
            java.lang.String r1 = com.xiaomi.push.service.bk.q
            java.lang.String r2 = r6.b
            r0.putExtra(r1, r2)
            java.lang.String r1 = com.xiaomi.push.service.bk.F
            java.lang.String r2 = r6.i
            r0.putExtra(r1, r2)
            android.os.Messenger r1 = r6.a
            if (r1 == 0) goto L75
            java.lang.String r1 = r6.g
            java.lang.String r2 = "9"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L75
            r5 = 17
            r7 = 0
            android.os.Message r5 = android.os.Message.obtain(r7, r5, r0)
            android.os.Messenger r0 = r6.a     // Catch: android.os.RemoteException -> L50
            r0.send(r5)     // Catch: android.os.RemoteException -> L50
            return
        L50:
            r6.a = r7
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "peer may died: "
            r5.append(r7)
            java.lang.String r7 = r6.b
            java.lang.String r6 = r6.b
            r0 = 64
            int r6 = r6.lastIndexOf(r0)
            java.lang.String r6 = r7.substring(r6)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            goto L95
        L75:
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = r6.g
            r1[r2] = r3
            r2 = 1
            java.lang.String r3 = r6.a
            r1[r2] = r3
            r2 = 2
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r1[r2] = r7
            java.lang.String r7 = "[Bcst] notify channel closed. %s,%s,%d"
            java.lang.String r7 = java.lang.String.format(r7, r1)
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            a(r5, r0, r6)
        L95:
            return
    }

    public void a(android.content.Context r4, com.xiaomi.push.service.bg.b r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            if (r5 != 0) goto L8
            java.lang.String r4 = "error while notify kick by server!"
            com.xiaomi.channel.commonutils.logger.b.d(r4)
            return
        L8:
            java.lang.String r0 = r5.g
            java.lang.String r1 = "5"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L18
            java.lang.String r4 = "mipush kicked by server"
            com.xiaomi.channel.commonutils.logger.b.d(r4)
            goto L62
        L18:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.xiaomi.push.kicked"
            r0.setAction(r1)
            java.lang.String r1 = r5.a
            r0.setPackage(r1)
            java.lang.String r1 = "ext_kick_type"
            r0.putExtra(r1, r6)
            java.lang.String r6 = "ext_kick_reason"
            r0.putExtra(r6, r7)
            java.lang.String r6 = r5.g
            java.lang.String r1 = "ext_chid"
            r0.putExtra(r1, r6)
            java.lang.String r6 = com.xiaomi.push.service.bk.q
            java.lang.String r1 = r5.b
            r0.putExtra(r6, r1)
            java.lang.String r6 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = r5.i
            r0.putExtra(r6, r1)
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r1 = 0
            java.lang.String r2 = r5.g
            r6[r1] = r2
            r1 = 1
            java.lang.String r2 = r5.a
            r6[r1] = r2
            r1 = 2
            r6[r1] = r7
            java.lang.String r7 = "[Bcst] notify packet(blob) arrival. %s,%s,%s"
            java.lang.String r6 = java.lang.String.format(r7, r6)
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            a(r4, r0, r5)
        L62:
            return
    }

    public void a(android.content.Context r8, com.xiaomi.push.service.bg.b r9, boolean r10, int r11, java.lang.String r12) {
            r7 = this;
            java.lang.String r0 = r9.g
            java.lang.String r1 = "5"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L15
            com.xiaomi.push.service.y r1 = r7.a
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.a(r2, r3, r4, r5, r6)
            goto L77
        L15:
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "com.xiaomi.push.channel_opened"
            r0.setAction(r1)
            java.lang.String r1 = r9.a
            r0.setPackage(r1)
            java.lang.String r1 = "ext_succeeded"
            r0.putExtra(r1, r10)
            if (r10 != 0) goto L30
            java.lang.String r1 = "ext_reason"
            r0.putExtra(r1, r11)
        L30:
            boolean r1 = android.text.TextUtils.isEmpty(r12)
            if (r1 != 0) goto L3b
            java.lang.String r1 = "ext_reason_msg"
            r0.putExtra(r1, r12)
        L3b:
            java.lang.String r12 = r9.g
            java.lang.String r1 = "ext_chid"
            r0.putExtra(r1, r12)
            java.lang.String r12 = com.xiaomi.push.service.bk.q
            java.lang.String r1 = r9.b
            r0.putExtra(r12, r1)
            java.lang.String r12 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = r9.i
            r0.putExtra(r12, r1)
            r12 = 4
            java.lang.Object[] r12 = new java.lang.Object[r12]
            r1 = 0
            java.lang.String r2 = r9.g
            r12[r1] = r2
            r1 = 1
            java.lang.String r2 = r9.a
            r12[r1] = r2
            r1 = 2
            java.lang.Boolean r10 = java.lang.Boolean.valueOf(r10)
            r12[r1] = r10
            r10 = 3
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12[r10] = r11
            java.lang.String r10 = "[Bcst] notify channel open result. %s,%s,%b,%d"
            java.lang.String r10 = java.lang.String.format(r10, r12)
            com.xiaomi.channel.commonutils.logger.b.a(r10)
            a(r8, r0, r9)
        L77:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService r8, java.lang.String r9, com.xiaomi.push.fl r10) {
            r7 = this;
            com.xiaomi.push.service.bg$b r0 = r7.a(r10)
            if (r0 != 0) goto L20
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r10 = "error while notify channel closed! channel "
            r8.append(r10)
            r8.append(r9)
            java.lang.String r9 = " not registered"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r8)
            return
        L20:
            java.lang.String r1 = "5"
            boolean r1 = r1.equalsIgnoreCase(r9)
            if (r1 == 0) goto L2f
            com.xiaomi.push.service.y r9 = r7.a
            r9.a(r8, r10, r0)
            goto Lf9
        L2f:
            java.lang.String r1 = r0.a
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "com.xiaomi.push.new_msg"
            r2.setAction(r3)
            r2.setPackage(r1)
            long r3 = android.os.SystemClock.elapsedRealtime()
            java.lang.String r5 = "ext_rcv_timestamp"
            r2.putExtra(r5, r3)
            java.lang.String r3 = "ext_chid"
            r2.putExtra(r3, r9)
            java.lang.String r3 = r0.h
            byte[] r3 = r10.a(r3)
            java.lang.String r4 = "ext_raw_packet"
            r2.putExtra(r4, r3)
            java.lang.String r3 = com.xiaomi.push.service.bk.F
            java.lang.String r4 = r0.i
            r2.putExtra(r3, r4)
            java.lang.String r3 = com.xiaomi.push.service.bk.x
            java.lang.String r4 = r0.h
            r2.putExtra(r3, r4)
            android.os.Messenger r3 = r0.a
            if (r3 == 0) goto Lae
            r3 = 17
            r4 = 0
            android.os.Message r3 = android.os.Message.obtain(r4, r3, r2)
            android.os.Messenger r5 = r0.a     // Catch: android.os.RemoteException -> L8a
            r5.send(r3)     // Catch: android.os.RemoteException -> L8a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: android.os.RemoteException -> L8a
            r3.<init>()     // Catch: android.os.RemoteException -> L8a
            java.lang.String r5 = "message was sent by messenger for chid="
            r3.append(r5)     // Catch: android.os.RemoteException -> L8a
            r3.append(r9)     // Catch: android.os.RemoteException -> L8a
            java.lang.String r3 = r3.toString()     // Catch: android.os.RemoteException -> L8a
            com.xiaomi.channel.commonutils.logger.b.a(r3)     // Catch: android.os.RemoteException -> L8a
            return
        L8a:
            r0.a = r4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "peer may died: "
            r3.append(r4)
            java.lang.String r4 = r0.b
            java.lang.String r5 = r0.b
            r6 = 64
            int r5 = r5.lastIndexOf(r6)
            java.lang.String r4 = r4.substring(r5)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
        Lae:
            java.lang.String r3 = "com.xiaomi.xmsf"
            boolean r1 = r3.equals(r1)
            if (r1 != 0) goto Lf9
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r4 = 0
            java.lang.String r5 = r0.g
            r1[r4] = r5
            java.lang.String r4 = r0.a
            r5 = 1
            r1[r5] = r4
            r4 = 2
            java.lang.String r6 = r10.e()
            r1[r4] = r6
            java.lang.String r4 = "[Bcst] notify packet(blob) arrival. %s,%s,%s"
            java.lang.String r1 = java.lang.String.format(r4, r1)
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            a(r8, r2, r0)
            java.lang.String r0 = "10"
            boolean r9 = r0.equals(r9)
            if (r9 == 0) goto Lf9
            com.xiaomi.push.service.ao r9 = r10.a
            if (r9 == 0) goto Lf9
            com.xiaomi.push.service.ao r9 = r10.a
            long r0 = java.lang.System.currentTimeMillis()
            r9.d = r0
            boolean r8 = com.xiaomi.push.hi.a(r8, r5)
            if (r8 == 0) goto Lf9
            com.xiaomi.push.service.ao r8 = r10.a
            java.lang.String r9 = "category_coord_down"
            java.lang.String r10 = "coord_down"
            com.xiaomi.push.service.bz.a(r9, r10, r3, r8)
        Lf9:
            return
    }

    public void a(com.xiaomi.push.service.XMPushService r5, java.lang.String r6, com.xiaomi.push.gn r7) {
            r4 = this;
            com.xiaomi.push.service.bg$b r0 = r4.a(r7)
            if (r0 != 0) goto L20
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "error while notify channel closed! channel "
            r5.append(r7)
            r5.append(r6)
            java.lang.String r6 = " not registered"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
        L1c:
            com.xiaomi.channel.commonutils.logger.b.d(r5)
            return
        L20:
            java.lang.String r1 = "5"
            boolean r1 = r1.equalsIgnoreCase(r6)
            if (r1 == 0) goto L2e
            com.xiaomi.push.service.y r6 = r4.a
            r6.a(r5, r7, r0)
            goto L8b
        L2e:
            java.lang.String r1 = r0.a
            boolean r2 = r7 instanceof com.xiaomi.push.gm
            if (r2 == 0) goto L37
            java.lang.String r2 = "com.xiaomi.push.new_msg"
            goto L44
        L37:
            boolean r2 = r7 instanceof com.xiaomi.push.gl
            if (r2 == 0) goto L3e
            java.lang.String r2 = "com.xiaomi.push.new_iq"
            goto L44
        L3e:
            boolean r2 = r7 instanceof com.xiaomi.push.gp
            if (r2 == 0) goto L8c
            java.lang.String r2 = "com.xiaomi.push.new_pres"
        L44:
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            r3.setAction(r2)
            r3.setPackage(r1)
            java.lang.String r1 = "ext_chid"
            r3.putExtra(r1, r6)
            android.os.Bundle r6 = r7.a()
            java.lang.String r1 = "ext_packet"
            r3.putExtra(r1, r6)
            java.lang.String r6 = com.xiaomi.push.service.bk.F
            java.lang.String r1 = r0.i
            r3.putExtra(r6, r1)
            java.lang.String r6 = com.xiaomi.push.service.bk.x
            java.lang.String r1 = r0.h
            r3.putExtra(r6, r1)
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r1 = 0
            java.lang.String r2 = r0.g
            r6[r1] = r2
            r1 = 1
            java.lang.String r2 = r0.a
            r6[r1] = r2
            r1 = 2
            java.lang.String r7 = r7.j()
            r6[r1] = r7
            java.lang.String r7 = "[Bcst] notify packet arrival. %s,%s,%s"
            java.lang.String r6 = java.lang.String.format(r7, r6)
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            a(r5, r3, r0)
        L8b:
            return
        L8c:
            java.lang.String r5 = "unknown packet type, drop it"
            goto L1c
    }
}
