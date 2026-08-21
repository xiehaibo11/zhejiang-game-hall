package com.xiaomi.mipush.sdk;

public class am {
    private static com.xiaomi.mipush.sdk.am a;
    private static java.lang.Object a;
    private static java.util.Queue<java.lang.String> a;
    private android.content.Context a;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.mipush.sdk.am.a = r0
            return
    }

    private am(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            android.content.Context r0 = r2.getApplicationContext()
            r1.a = r0
            if (r0 != 0) goto Ld
            r1.a = r2
        Ld:
            return
    }

    public static android.content.Intent a(android.content.Context r0, java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, int r3) {
            android.content.Intent r0 = com.xiaomi.push.service.al.b(r0, r1, r2, r3)
            return r0
    }

    private com.xiaomi.mipush.sdk.PushMessageHandler.a a(com.xiaomi.push.if r21, boolean r22, byte[] r23, java.lang.String r24, int r25, android.content.Intent r26) {
            r20 = this;
            r1 = r20
            r2 = r21
            r3 = r22
            r0 = r23
            r8 = r24
            r9 = r25
            r10 = 0
            android.content.Context r4 = r1.a     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            com.xiaomi.push.iu r4 = com.xiaomi.mipush.sdk.ai.a(r4, r2)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            if (r4 != 0) goto L46
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            r0.<init>()     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            java.lang.String r4 = "receiving an un-recognized message. "
            r0.append(r4)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            com.xiaomi.push.hj r4 = r2.a     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            r0.append(r4)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            java.lang.String r0 = r0.toString()     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            android.content.Context r0 = r1.a     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            android.content.Context r4 = r1.a     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            java.lang.String r4 = r4.getPackageName()     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            java.lang.String r5 = com.xiaomi.push.en.a(r25)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            java.lang.String r6 = "18"
            r0.b(r4, r5, r8, r6)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            android.content.Context r0 = r1.a     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            com.xiaomi.mipush.sdk.s.c(r0, r2, r3)     // Catch: com.xiaomi.push.iz -> Laa3 com.xiaomi.mipush.sdk.u -> Lac8
            return r10
        L46:
            com.xiaomi.push.hj r5 = r21.a()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "processing a message, action="
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            int[] r6 = com.xiaomi.mipush.sdk.an.a
            int r5 = r5.ordinal()
            r5 = r6[r5]
            r6 = 1
            r11 = 0
            r7 = 0
            switch(r5) {
                case 1: goto L7d0;
                case 2: goto L71a;
                case 3: goto L6f3;
                case 4: goto L696;
                case 5: goto L639;
                case 6: goto L507;
                case 7: goto L70;
                default: goto L6d;
            }
        L6d:
            r2 = r10
            goto Laa2
        L70:
            android.content.Context r3 = r1.a
            java.lang.String r3 = r3.getPackageName()
            android.content.Context r5 = r1.a
            com.xiaomi.push.hj r8 = com.xiaomi.push.hj.i
            int r0 = r0.length
            com.xiaomi.push.db.a(r3, r5, r4, r8, r0)
            boolean r0 = r4 instanceof com.xiaomi.push.ia
            if (r0 == 0) goto L23b
            com.xiaomi.push.ia r4 = (com.xiaomi.push.ia) r4
            java.lang.String r0 = r4.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "resp-type:"
            r2.append(r3)
            java.lang.String r3 = r4.b()
            r2.append(r3)
            java.lang.String r3 = ", code:"
            r2.append(r3)
            long r8 = r4.a
            r2.append(r8)
            java.lang.String r3 = ", "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r2)
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.E
            java.lang.String r2 = r2.a
            java.lang.String r3 = r4.d
            boolean r2 = r2.equalsIgnoreCase(r3)
            r3 = 10
            if (r2 == 0) goto L177
            long r4 = r4.a
            int r2 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r2 != 0) goto L11b
            java.lang.Class<com.xiaomi.mipush.sdk.af> r2 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r2)
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L118
            boolean r3 = r3.a(r0)     // Catch: java.lang.Throwable -> L118
            if (r3 == 0) goto L115
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L118
            r3.c(r0)     // Catch: java.lang.Throwable -> L118
            java.lang.String r0 = "syncing"
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.a     // Catch: java.lang.Throwable -> L118
            java.lang.String r3 = r3.a(r4)     // Catch: java.lang.Throwable -> L118
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L118
            if (r0 == 0) goto L115
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.au r3 = com.xiaomi.mipush.sdk.au.a     // Catch: java.lang.Throwable -> L118
            java.lang.String r4 = "synced"
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L118
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.MiPushClient.clearNotification(r0)     // Catch: java.lang.Throwable -> L118
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.MiPushClient.clearLocalNotificationType(r0)     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.PushMessageHandler.a()     // Catch: java.lang.Throwable -> L118
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L118
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r0)     // Catch: java.lang.Throwable -> L118
            r0.b()     // Catch: java.lang.Throwable -> L118
        L115:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L118
            goto L6d
        L118:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L118
            throw r0
        L11b:
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.a
            java.lang.String r2 = r2.a(r4)
            java.lang.String r4 = "syncing"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L16c
            java.lang.Class<com.xiaomi.mipush.sdk.af> r2 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r2)
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> L169
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L169
            boolean r4 = r4.a(r0)     // Catch: java.lang.Throwable -> L169
            if (r4 == 0) goto L166
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> L169
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L169
            int r4 = r4.a(r0)     // Catch: java.lang.Throwable -> L169
            if (r4 >= r3) goto L15d
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L169
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L169
            r3.b(r0)     // Catch: java.lang.Throwable -> L169
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L169
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)     // Catch: java.lang.Throwable -> L169
            r3.a(r6, r0)     // Catch: java.lang.Throwable -> L169
            goto L166
        L15d:
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L169
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L169
            r3.c(r0)     // Catch: java.lang.Throwable -> L169
        L166:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L169
            goto L6d
        L169:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L169
            throw r0
        L16c:
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)
            r2.c(r0)
            goto L6d
        L177:
            com.xiaomi.push.ht r2 = com.xiaomi.push.ht.F
            java.lang.String r2 = r2.a
            java.lang.String r5 = r4.d
            boolean r2 = r2.equalsIgnoreCase(r5)
            if (r2 == 0) goto L219
            long r4 = r4.a
            int r2 = (r4 > r11 ? 1 : (r4 == r11 ? 0 : -1))
            if (r2 != 0) goto L1c8
            java.lang.Class<com.xiaomi.mipush.sdk.af> r2 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r2)
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L1c5
            boolean r3 = r3.a(r0)     // Catch: java.lang.Throwable -> L1c5
            if (r3 == 0) goto L1c2
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L1c5
            r3.c(r0)     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r0 = "syncing"
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.b     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r3 = r3.a(r4)     // Catch: java.lang.Throwable -> L1c5
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L1c5
            if (r0 == 0) goto L1c2
            android.content.Context r0 = r1.a     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.af r0 = com.xiaomi.mipush.sdk.af.a(r0)     // Catch: java.lang.Throwable -> L1c5
            com.xiaomi.mipush.sdk.au r3 = com.xiaomi.mipush.sdk.au.b     // Catch: java.lang.Throwable -> L1c5
            java.lang.String r4 = "synced"
            r0.a(r3, r4)     // Catch: java.lang.Throwable -> L1c5
        L1c2:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1c5
            goto L6d
        L1c5:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L1c5
            throw r0
        L1c8:
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.af r2 = com.xiaomi.mipush.sdk.af.a(r2)
            com.xiaomi.mipush.sdk.au r4 = com.xiaomi.mipush.sdk.au.b
            java.lang.String r2 = r2.a(r4)
            java.lang.String r4 = "syncing"
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L16c
            java.lang.Class<com.xiaomi.mipush.sdk.af> r2 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r2)
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> L216
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L216
            boolean r4 = r4.a(r0)     // Catch: java.lang.Throwable -> L216
            if (r4 == 0) goto L213
            android.content.Context r4 = r1.a     // Catch: java.lang.Throwable -> L216
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L216
            int r4 = r4.a(r0)     // Catch: java.lang.Throwable -> L216
            if (r4 >= r3) goto L20a
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L216
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L216
            r3.b(r0)     // Catch: java.lang.Throwable -> L216
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L216
            com.xiaomi.mipush.sdk.ao r3 = com.xiaomi.mipush.sdk.ao.a(r3)     // Catch: java.lang.Throwable -> L216
            r3.a(r7, r0)     // Catch: java.lang.Throwable -> L216
            goto L213
        L20a:
            android.content.Context r3 = r1.a     // Catch: java.lang.Throwable -> L216
            com.xiaomi.mipush.sdk.af r3 = com.xiaomi.mipush.sdk.af.a(r3)     // Catch: java.lang.Throwable -> L216
            r3.c(r0)     // Catch: java.lang.Throwable -> L216
        L213:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L216
            goto L6d
        L216:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L216
            throw r0
        L219:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.N
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L22a
            r1.b(r4)
            goto L6d
        L22a:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.B
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L6d
            r1.a(r4)
            goto L6d
        L23b:
            boolean r0 = r4 instanceof com.xiaomi.push.ii
            if (r0 == 0) goto L6d
            com.xiaomi.push.ii r4 = (com.xiaomi.push.ii) r4
            java.lang.String r0 = r4.d
            java.lang.String r3 = "registration id expired"
            boolean r0 = r3.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2f7
            android.content.Context r0 = r1.a
            java.util.List r0 = com.xiaomi.mipush.sdk.MiPushClient.getAllAlias(r0)
            android.content.Context r2 = r1.a
            java.util.List r2 = com.xiaomi.mipush.sdk.MiPushClient.getAllTopic(r2)
            android.content.Context r3 = r1.a
            java.util.List r3 = com.xiaomi.mipush.sdk.MiPushClient.getAllUserAccount(r3)
            android.content.Context r5 = r1.a
            java.lang.String r5 = com.xiaomi.mipush.sdk.MiPushClient.getAcceptTime(r5)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "resp-type:"
            r8.append(r9)
            java.lang.String r9 = r4.d
            r8.append(r9)
            java.lang.String r9 = ", "
            r8.append(r9)
            java.lang.String r4 = r4.a()
            r8.append(r4)
            java.lang.String r4 = r8.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r4)
            android.content.Context r4 = r1.a
            com.xiaomi.push.hx r8 = com.xiaomi.push.hx.a
            com.xiaomi.mipush.sdk.MiPushClient.reInitialize(r4, r8)
            java.util.Iterator r0 = r0.iterator()
        L290:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L2a7
            java.lang.Object r4 = r0.next()
            java.lang.String r4 = (java.lang.String) r4
            android.content.Context r8 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.removeAlias(r8, r4)
            android.content.Context r8 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.setAlias(r8, r4, r10)
            goto L290
        L2a7:
            java.util.Iterator r0 = r2.iterator()
        L2ab:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2c2
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            android.content.Context r4 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.removeTopic(r4, r2)
            android.content.Context r4 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.subscribe(r4, r2, r10)
            goto L2ab
        L2c2:
            java.util.Iterator r0 = r3.iterator()
        L2c6:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2dd
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            android.content.Context r3 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.removeAccount(r3, r2)
            android.content.Context r3 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.setUserAccount(r3, r2, r10)
            goto L2c6
        L2dd:
            java.lang.String r0 = ","
            java.lang.String[] r0 = r5.split(r0)
            int r2 = r0.length
            r3 = 2
            if (r2 != r3) goto L6d
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.removeAcceptTime(r2)
            android.content.Context r2 = r1.a
            r3 = r0[r7]
            r0 = r0[r6]
            com.xiaomi.mipush.sdk.MiPushClient.addAcceptTime(r2, r3, r0)
            goto L6d
        L2f7:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.h
            java.lang.String r0 = r0.a
            java.lang.String r3 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto L32c
            java.util.Map r0 = r4.a()
            if (r0 == 0) goto L6d
            java.util.Map r0 = r4.a()
            java.lang.String r2 = "app_version"
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L6d
            java.util.Map r0 = r4.a()
            java.lang.String r2 = "app_version"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            r2.a(r0)
            goto L6d
        L32c:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.m
            java.lang.String r0 = r0.a
            java.lang.String r3 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r3)
            if (r0 == 0) goto L37b
            boolean r0 = r21.b()
            if (r0 == 0) goto L6d
            java.util.Map r0 = r4.a()
            if (r0 == 0) goto L6d
            java.util.Map r0 = r4.a()
            java.lang.String r2 = "awake_info"
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L6d
            java.util.Map r0 = r4.a()
            java.lang.String r2 = "awake_info"
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r3 = r3.a()
            android.content.Context r4 = r1.a
            com.xiaomi.push.service.ba r4 = com.xiaomi.push.service.ba.a(r4)
            com.xiaomi.push.ho r5 = com.xiaomi.push.ho.aF
            int r5 = r5.a()
            int r4 = r4.a(r5, r7)
            com.xiaomi.mipush.sdk.o.a(r2, r3, r4, r0)
            goto L6d
        L37b:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.n
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L39e
            com.xiaomi.push.ih r0 = new com.xiaomi.push.ih
            r0.<init>()
            byte[] r2 = r4.a()     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.it.a(r0, r2)     // Catch: com.xiaomi.push.iz -> L6d
            android.content.Context r2 = r1.a     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a(r2)     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.service.bb.a(r2, r0)     // Catch: com.xiaomi.push.iz -> L6d
            goto L6d
        L39e:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.o
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L3c1
            com.xiaomi.push.ig r0 = new com.xiaomi.push.ig
            r0.<init>()
            byte[] r2 = r4.a()     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.it.a(r0, r2)     // Catch: com.xiaomi.push.iz -> L6d
            android.content.Context r2 = r1.a     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.service.ba r2 = com.xiaomi.push.service.ba.a(r2)     // Catch: com.xiaomi.push.iz -> L6d
            com.xiaomi.push.service.bb.a(r2, r0)     // Catch: com.xiaomi.push.iz -> L6d
            goto L6d
        L3c1:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.w
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L3d4
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.av.a(r0, r4)
            goto L6d
        L3d4:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.x
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equalsIgnoreCase(r2)
            if (r0 == 0) goto L3ec
            java.lang.String r0 = "receive force sync notification"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.av.a(r0, r7)
            goto L6d
        L3ec:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.C
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L492
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "resp-type:"
            r0.append(r2)
            java.lang.String r2 = r4.d
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            java.util.Map r0 = r4.a()
            if (r0 == 0) goto L48d
            java.util.Map r0 = r4.a()
            java.lang.String r2 = com.xiaomi.push.service.bk.M
            boolean r0 = r0.containsKey(r2)
            r2 = -2
            if (r0 == 0) goto L449
            java.util.Map r0 = r4.a()
            java.lang.String r3 = com.xiaomi.push.service.bk.M
            java.lang.Object r0 = r0.get(r3)
            java.lang.String r0 = (java.lang.String) r0
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L449
            int r2 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L444
            goto L449
        L444:
            r0 = move-exception
            r3 = r0
            r3.printStackTrace()
        L449:
            r0 = -1
            if (r2 < r0) goto L452
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.clearNotification(r0, r2)
            goto L48d
        L452:
            java.util.Map r0 = r4.a()
            java.lang.String r2 = com.xiaomi.push.service.bk.K
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L46b
            java.util.Map r0 = r4.a()
            java.lang.String r2 = com.xiaomi.push.service.bk.K
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            goto L46d
        L46b:
            java.lang.String r0 = ""
        L46d:
            java.util.Map r2 = r4.a()
            java.lang.String r3 = com.xiaomi.push.service.bk.L
            boolean r2 = r2.containsKey(r3)
            if (r2 == 0) goto L486
            java.util.Map r2 = r4.a()
            java.lang.String r3 = com.xiaomi.push.service.bk.L
            java.lang.Object r2 = r2.get(r3)
            java.lang.String r2 = (java.lang.String) r2
            goto L488
        L486:
            java.lang.String r2 = ""
        L488:
            android.content.Context r3 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.clearNotification(r3, r0, r2)
        L48d:
            r1.a(r4)
            goto L6d
        L492:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.K
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L4b7
            com.xiaomi.push.ik r0 = new com.xiaomi.push.ik     // Catch: com.xiaomi.push.iz -> L4b1
            r0.<init>()     // Catch: com.xiaomi.push.iz -> L4b1
            byte[] r2 = r4.a()     // Catch: com.xiaomi.push.iz -> L4b1
            com.xiaomi.push.it.a(r0, r2)     // Catch: com.xiaomi.push.iz -> L4b1
            android.content.Context r2 = r1.a     // Catch: com.xiaomi.push.iz -> L4b1
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid.onReceiveRegisterResult(r2, r0)     // Catch: com.xiaomi.push.iz -> L4b1
            goto L6d
        L4b1:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            goto L6d
        L4b7:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.M
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L4d6
            com.xiaomi.push.iq r0 = new com.xiaomi.push.iq     // Catch: com.xiaomi.push.iz -> L4b1
            r0.<init>()     // Catch: com.xiaomi.push.iz -> L4b1
            byte[] r2 = r4.a()     // Catch: com.xiaomi.push.iz -> L4b1
            com.xiaomi.push.it.a(r0, r2)     // Catch: com.xiaomi.push.iz -> L4b1
            android.content.Context r2 = r1.a     // Catch: com.xiaomi.push.iz -> L4b1
            com.xiaomi.mipush.sdk.MiPushClient4Hybrid.onReceiveUnregisterResult(r2, r0)     // Catch: com.xiaomi.push.iz -> L4b1
            goto L6d
        L4d6:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.P
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L4e4
            goto L6d
        L4e4:
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.af
            java.lang.String r0 = r0.a
            java.lang.String r2 = r4.d
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L4fa
            java.lang.String r0 = "receive detect msg"
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            r1.b(r4)
            goto L6d
        L4fa:
            boolean r0 = com.xiaomi.push.service.i.a(r4)
            if (r0 == 0) goto L6d
            java.lang.String r0 = "receive notification handle by cpra"
            com.xiaomi.channel.commonutils.logger.b.b(r0)
            goto L6d
        L507:
            android.content.Context r2 = r1.a
            java.lang.String r2 = r2.getPackageName()
            android.content.Context r3 = r1.a
            com.xiaomi.push.hj r5 = com.xiaomi.push.hj.j
            int r0 = r0.length
            com.xiaomi.push.db.a(r2, r3, r4, r5, r0)
            com.xiaomi.push.ie r4 = (com.xiaomi.push.ie) r4
            java.lang.String r13 = r4.b()
            java.util.List r0 = r4.a()
            long r2 = r4.a
            int r2 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r2 != 0) goto L606
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.i
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L583
            if (r0 == 0) goto L583
            int r2 = r0.size()
            if (r2 <= r6) goto L583
            android.content.Context r2 = r1.a
            java.lang.Object r3 = r0.get(r7)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r5 = r0.get(r6)
            java.lang.String r5 = (java.lang.String) r5
            com.xiaomi.mipush.sdk.MiPushClient.addAcceptTime(r2, r3, r5)
            java.lang.Object r2 = r0.get(r7)
            java.lang.String r3 = "00:00"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L56a
            java.lang.Object r2 = r0.get(r6)
            java.lang.String r3 = "00:00"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L56a
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            r2.a(r6)
            goto L573
        L56a:
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            r2.a(r7)
        L573:
            java.lang.String r2 = "GMT+08"
            java.util.TimeZone r2 = java.util.TimeZone.getTimeZone(r2)
            java.util.TimeZone r3 = java.util.TimeZone.getDefault()
            java.util.List r0 = r1.a(r2, r3, r0)
            goto L606
        L583:
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.c
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L5a1
            if (r0 == 0) goto L5a1
            int r2 = r0.size()
            if (r2 <= 0) goto L5a1
            android.content.Context r2 = r1.a
            java.lang.Object r3 = r0.get(r7)
            java.lang.String r3 = (java.lang.String) r3
            com.xiaomi.mipush.sdk.MiPushClient.addAlias(r2, r3)
            goto L606
        L5a1:
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.d
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L5bf
            if (r0 == 0) goto L5bf
            int r2 = r0.size()
            if (r2 <= 0) goto L5bf
            android.content.Context r2 = r1.a
            java.lang.Object r3 = r0.get(r7)
            java.lang.String r3 = (java.lang.String) r3
            com.xiaomi.mipush.sdk.MiPushClient.removeAlias(r2, r3)
            goto L606
        L5bf:
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.e
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L5dd
            if (r0 == 0) goto L5dd
            int r2 = r0.size()
            if (r2 <= 0) goto L5dd
            android.content.Context r2 = r1.a
            java.lang.Object r3 = r0.get(r7)
            java.lang.String r3 = (java.lang.String) r3
            com.xiaomi.mipush.sdk.MiPushClient.addAccount(r2, r3)
            goto L606
        L5dd:
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.f
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L5fb
            if (r0 == 0) goto L5fb
            int r2 = r0.size()
            if (r2 <= 0) goto L5fb
            android.content.Context r2 = r1.a
            java.lang.Object r3 = r0.get(r7)
            java.lang.String r3 = (java.lang.String) r3
            com.xiaomi.mipush.sdk.MiPushClient.removeAccount(r2, r3)
            goto L606
        L5fb:
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.j
            java.lang.String r2 = r2.a
            boolean r2 = android.text.TextUtils.equals(r13, r2)
            if (r2 == 0) goto L606
            return r10
        L606:
            r14 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "resp-cmd:"
            r0.append(r2)
            r0.append(r13)
            java.lang.String r2 = ", "
            r0.append(r2)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            long r2 = r4.a
            java.lang.String r0 = r4.d
            java.lang.String r18 = r4.c()
            r19 = 0
            r15 = r2
            r17 = r0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r13, r14, r15, r17, r18, r19)
            return r0
        L639:
            com.xiaomi.push.is r4 = (com.xiaomi.push.is) r4
            long r2 = r4.a
            int r0 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r0 != 0) goto L64a
            android.content.Context r0 = r1.a
            java.lang.String r2 = r4.b()
            com.xiaomi.mipush.sdk.MiPushClient.removeTopic(r0, r2)
        L64a:
            java.lang.String r0 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L660
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.lang.String r0 = r4.b()
            r10.add(r0)
        L660:
            r12 = r10
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "resp-cmd:"
            r0.append(r2)
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.h
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.h
            java.lang.String r11 = r0.a
            long r13 = r4.a
            java.lang.String r15 = r4.d
            java.lang.String r16 = r4.c()
            r17 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r11, r12, r13, r15, r16, r17)
            return r0
        L696:
            com.xiaomi.push.io r4 = (com.xiaomi.push.io) r4
            long r2 = r4.a
            int r0 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r0 != 0) goto L6a7
            android.content.Context r0 = r1.a
            java.lang.String r2 = r4.b()
            com.xiaomi.mipush.sdk.MiPushClient.addTopic(r0, r2)
        L6a7:
            java.lang.String r0 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L6bd
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.lang.String r0 = r4.b()
            r10.add(r0)
        L6bd:
            r12 = r10
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "resp-cmd:"
            r0.append(r2)
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.g
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            java.lang.String r2 = r4.a()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.e(r0)
            com.xiaomi.push.ey r0 = com.xiaomi.push.ey.g
            java.lang.String r11 = r0.a
            long r13 = r4.a
            java.lang.String r15 = r4.d
            java.lang.String r16 = r4.c()
            r17 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r11, r12, r13, r15, r16, r17)
            return r0
        L6f3:
            boolean r0 = r21.b()
            if (r0 != 0) goto L6ff
            java.lang.String r0 = "receiving an un-encrypt message(UnRegistration)."
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            return r10
        L6ff:
            com.xiaomi.push.iq r4 = (com.xiaomi.push.iq) r4
            long r2 = r4.a
            int r0 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r0 != 0) goto L715
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.b r0 = com.xiaomi.mipush.sdk.b.a(r0)
            r0.a()
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.MiPushClient.clearExtras(r0)
        L715:
            com.xiaomi.mipush.sdk.PushMessageHandler.a()
            goto L6d
        L71a:
            r0 = r4
            com.xiaomi.push.ik r0 = (com.xiaomi.push.ik) r0
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r2 = r2.a
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L7b5
            java.lang.String r3 = r0.a()
            boolean r2 = android.text.TextUtils.equals(r2, r3)
            if (r2 != 0) goto L737
            goto L7b5
        L737:
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            r2.a = r10
            long r2 = r0.a
            int r2 = (r2 > r11 ? 1 : (r2 == r11 ? 0 : -1))
            if (r2 != 0) goto L76e
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.b r2 = com.xiaomi.mipush.sdk.b.a(r2)
            java.lang.String r3 = r0.e
            java.lang.String r4 = r0.f
            java.lang.String r5 = r0.l
            r2.b(r3, r4, r5)
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.FCMPushHelper.persistIfXmsfSupDecrypt(r2)
            android.content.Context r2 = r1.a
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            android.content.Context r3 = r1.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r25)
            r6 = 6006(0x1776, float:8.416E-42)
            java.lang.String r7 = "1"
            goto L782
        L76e:
            android.content.Context r2 = r1.a
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            android.content.Context r3 = r1.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r25)
            r6 = 6006(0x1776, float:8.416E-42)
            java.lang.String r7 = "2"
        L782:
            r5 = r24
            r2.a(r3, r4, r5, r6, r7)
            java.lang.String r2 = r0.e
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L799
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            java.lang.String r2 = r0.e
            r10.add(r2)
        L799:
            r4 = r10
            java.util.List r9 = r0.a()
            com.xiaomi.push.ey r2 = com.xiaomi.push.ey.a
            java.lang.String r3 = r2.a
            long r5 = r0.a
            java.lang.String r7 = r0.d
            r8 = 0
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = com.xiaomi.mipush.sdk.PushMessageHelper.generateCommandMessage(r3, r4, r5, r7, r8, r9)
            android.content.Context r2 = r1.a
            com.xiaomi.mipush.sdk.ao r2 = com.xiaomi.mipush.sdk.ao.a(r2)
            r2.d()
            return r0
        L7b5:
            java.lang.String r0 = "bad Registration result:"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r2 = r1.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = com.xiaomi.push.en.a(r25)
            java.lang.String r4 = "21"
            r0.b(r2, r3, r8, r4)
            return r10
        L7d0:
            boolean r5 = r21.b()
            if (r5 != 0) goto L7dc
            java.lang.String r0 = "receiving an un-encrypt message(SendMessage)."
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            return r10
        L7dc:
            android.content.Context r5 = r1.a
            com.xiaomi.mipush.sdk.b r5 = com.xiaomi.mipush.sdk.b.a(r5)
            boolean r5 = r5.e()
            if (r5 == 0) goto L805
            if (r3 != 0) goto L805
            java.lang.String r0 = "receive a message in pause state. drop it"
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r2 = r1.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = com.xiaomi.push.en.a(r25)
            java.lang.String r4 = "12"
            r0.a(r2, r3, r8, r4)
            return r10
        L805:
            com.xiaomi.push.im r4 = (com.xiaomi.push.im) r4
            com.xiaomi.push.hv r5 = r4.a()
            if (r5 != 0) goto L82d
            java.lang.String r0 = "receive an empty message without push content, drop it"
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r4 = r1.a
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r5 = com.xiaomi.push.en.a(r25)
            java.lang.String r6 = "22"
            r0.b(r4, r5, r8, r6)
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.s.d(r0, r2, r3)
            return r10
        L82d:
            java.lang.String r6 = "notification_click_button"
            r13 = r26
            int r6 = r13.getIntExtra(r6, r7)
            if (r3 == 0) goto L88e
            boolean r7 = com.xiaomi.push.service.al.a(r21)
            if (r7 == 0) goto L851
            android.content.Context r7 = r1.a
            java.lang.String r13 = r5.a()
            com.xiaomi.push.hw r14 = r21.a()
            java.lang.String r15 = r2.b
            java.lang.String r10 = r5.b()
            com.xiaomi.mipush.sdk.MiPushClient.reportIgnoreRegMessageClicked(r7, r13, r14, r15, r10)
            goto L88e
        L851:
            com.xiaomi.push.hw r7 = r21.a()
            if (r7 == 0) goto L861
            com.xiaomi.push.hw r7 = new com.xiaomi.push.hw
            com.xiaomi.push.hw r10 = r21.a()
            r7.<init>(r10)
            goto L866
        L861:
            com.xiaomi.push.hw r7 = new com.xiaomi.push.hw
            r7.<init>()
        L866:
            java.util.Map r10 = r7.a()
            if (r10 != 0) goto L874
            java.util.HashMap r10 = new java.util.HashMap
            r10.<init>()
            r7.a(r10)
        L874:
            java.util.Map r10 = r7.a()
            java.lang.String r13 = java.lang.String.valueOf(r6)
            java.lang.String r14 = "notification_click_button"
            r10.put(r14, r13)
            android.content.Context r10 = r1.a
            java.lang.String r13 = r5.a()
            java.lang.String r14 = r5.b()
            com.xiaomi.mipush.sdk.MiPushClient.reportMessageClicked(r10, r13, r7, r14)
        L88e:
            if (r3 != 0) goto L8d3
            java.lang.String r7 = r4.d()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L8b2
            android.content.Context r7 = r1.a
            java.lang.String r10 = r4.d()
            long r13 = com.xiaomi.mipush.sdk.MiPushClient.aliasSetTime(r7, r10)
            int r7 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r7 >= 0) goto L8b2
            android.content.Context r7 = r1.a
            java.lang.String r10 = r4.d()
            com.xiaomi.mipush.sdk.MiPushClient.addAlias(r7, r10)
            goto L8d3
        L8b2:
            java.lang.String r7 = r4.c()
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L8d3
            android.content.Context r7 = r1.a
            java.lang.String r10 = r4.c()
            long r13 = com.xiaomi.mipush.sdk.MiPushClient.topicSubscribedTime(r7, r10)
            int r7 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
            if (r7 >= 0) goto L8d3
            android.content.Context r7 = r1.a
            java.lang.String r10 = r4.c()
            com.xiaomi.mipush.sdk.MiPushClient.addTopic(r7, r10)
        L8d3:
            com.xiaomi.push.hw r7 = r2.a
            if (r7 == 0) goto L8ed
            com.xiaomi.push.hw r7 = r2.a
            java.util.Map r7 = r7.a()
            if (r7 == 0) goto L8ed
            com.xiaomi.push.hw r7 = r2.a
            java.util.Map<java.lang.String, java.lang.String> r7 = r7.a
            java.lang.String r10 = "jobkey"
            java.lang.Object r7 = r7.get(r10)
            java.lang.String r7 = (java.lang.String) r7
            r10 = r7
            goto L8ef
        L8ed:
            r7 = 0
            r10 = 0
        L8ef:
            boolean r11 = android.text.TextUtils.isEmpty(r7)
            if (r11 == 0) goto L8f9
            java.lang.String r7 = r5.a()
        L8f9:
            if (r3 != 0) goto L93e
            android.content.Context r11 = r1.a
            boolean r11 = a(r11, r7)
            if (r11 == 0) goto L93e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r5 = "drop a duplicate message, key="
            r0.append(r5)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r5 = r1.a
            java.lang.String r5 = r5.getPackageName()
            java.lang.String r6 = com.xiaomi.push.en.a(r25)
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "2:"
            r9.append(r10)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r0.c(r5, r6, r8, r7)
            r10 = 0
            goto La96
        L93e:
            com.xiaomi.push.hw r11 = r21.a()
            com.xiaomi.mipush.sdk.MiPushMessage r11 = com.xiaomi.mipush.sdk.PushMessageHelper.generateMessage(r4, r11, r3)
            int r12 = r11.getPassThrough()
            if (r12 != 0) goto L95f
            if (r3 != 0) goto L95f
            java.util.Map r12 = r11.getExtra()
            boolean r12 = com.xiaomi.push.service.al.a(r12)
            if (r12 == 0) goto L95f
            android.content.Context r3 = r1.a
            com.xiaomi.push.service.al.a(r3, r2, r0)
        L95d:
            r2 = 0
            return r2
        L95f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r12 = "receive a message, msgid="
            r0.append(r12)
            java.lang.String r12 = r5.a()
            r0.append(r12)
            java.lang.String r12 = ", jobkey="
            r0.append(r12)
            r0.append(r7)
            java.lang.String r7 = ", btn="
            r0.append(r7)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.util.Map r0 = r11.getExtra()
            java.lang.String r0 = com.xiaomi.push.service.al.a(r0, r6)
            if (r3 == 0) goto La95
            java.util.Map r7 = r11.getExtra()
            if (r7 == 0) goto La95
            boolean r7 = android.text.TextUtils.isEmpty(r0)
            if (r7 != 0) goto La95
            java.util.Map r3 = r11.getExtra()
            if (r6 == 0) goto L9ba
            com.xiaomi.push.hw r4 = r21.a()
            if (r4 == 0) goto L9ba
            android.content.Context r4 = r1.a
            com.xiaomi.mipush.sdk.ao r4 = com.xiaomi.mipush.sdk.ao.a(r4)
            com.xiaomi.push.hw r7 = r21.a()
            int r7 = r7.c()
            r4.a(r7, r6)
        L9ba:
            boolean r4 = com.xiaomi.push.service.al.a(r21)
            if (r4 == 0) goto La27
            android.content.Context r4 = r1.a
            java.lang.String r7 = r2.b
            android.content.Intent r3 = a(r4, r7, r3, r6)
            java.lang.String r4 = "eventMessageType"
            r3.putExtra(r4, r9)
            java.lang.String r4 = "messageId"
            r3.putExtra(r4, r8)
            java.lang.String r4 = "jobkey"
            r3.putExtra(r4, r10)
            if (r3 != 0) goto L9f5
            java.lang.String r0 = "Getting Intent fail from ignore reg message. "
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r2 = r1.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = com.xiaomi.push.en.a(r25)
            java.lang.String r4 = "23"
            r0.b(r2, r3, r8, r4)
            goto L95d
        L9f5:
            java.lang.String r4 = r5.c()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 != 0) goto La04
            java.lang.String r5 = "payload"
            r3.putExtra(r5, r4)
        La04:
            android.content.Context r4 = r1.a
            r4.startActivity(r3)
            android.content.Context r3 = r1.a
            com.xiaomi.mipush.sdk.s.a(r3, r2)
            android.content.Context r2 = r1.a
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            android.content.Context r3 = r1.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r25)
            r6 = 3006(0xbbe, float:4.212E-42)
            r5 = r24
            r7 = r0
            r2.a(r3, r4, r5, r6, r7)
            goto La93
        La27:
            android.content.Context r4 = r1.a
            java.lang.String r5 = r4.getPackageName()
            android.content.Intent r3 = a(r4, r5, r3, r6)
            if (r3 == 0) goto La93
            java.lang.String r4 = com.xiaomi.push.service.bk.c
            boolean r4 = r0.equals(r4)
            if (r4 != 0) goto La4f
            java.lang.String r4 = "key_message"
            r3.putExtra(r4, r11)
            java.lang.String r4 = "eventMessageType"
            r3.putExtra(r4, r9)
            java.lang.String r4 = "messageId"
            r3.putExtra(r4, r8)
            java.lang.String r4 = "jobkey"
            r3.putExtra(r4, r10)
        La4f:
            android.content.Context r4 = r1.a
            r4.startActivity(r3)
            android.content.Context r3 = r1.a
            com.xiaomi.mipush.sdk.s.a(r3, r2)
            java.lang.String r2 = "start activity succ"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.content.Context r2 = r1.a
            com.xiaomi.push.eo r2 = com.xiaomi.push.eo.a(r2)
            android.content.Context r3 = r1.a
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = com.xiaomi.push.en.a(r25)
            r6 = 1006(0x3ee, float:1.41E-42)
            r5 = r24
            r7 = r0
            r2.a(r3, r4, r5, r6, r7)
            java.lang.String r2 = com.xiaomi.push.service.bk.c
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto La93
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r2 = r1.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = com.xiaomi.push.en.a(r25)
            java.lang.String r4 = "13"
            r0.a(r2, r3, r8, r4)
        La93:
            r2 = 0
            return r2
        La95:
            r10 = r11
        La96:
            com.xiaomi.push.hw r0 = r21.a()
            if (r0 != 0) goto Laa1
            if (r3 != 0) goto Laa1
            r1.a(r4, r2)
        Laa1:
            return r10
        Laa2:
            return r2
        Laa3:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            java.lang.String r0 = "receive a message which action string is not valid. is the reg expired?"
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r4 = r1.a
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r5 = com.xiaomi.push.en.a(r25)
            java.lang.String r6 = "20"
        Labe:
            r0.b(r4, r5, r8, r6)
            android.content.Context r0 = r1.a
            com.xiaomi.mipush.sdk.s.c(r0, r2, r3)
            goto L95d
        Lac8:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r20.a(r21)
            android.content.Context r0 = r1.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r4 = r1.a
            java.lang.String r4 = r4.getPackageName()
            java.lang.String r5 = com.xiaomi.push.en.a(r25)
            java.lang.String r6 = "19"
            goto Labe
    }

    private com.xiaomi.mipush.sdk.PushMessageHandler.a a(com.xiaomi.push.if r5, byte[] r6) {
            r4 = this;
            r6 = 0
            android.content.Context r0 = r4.a     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            com.xiaomi.push.iu r0 = com.xiaomi.mipush.sdk.ai.a(r0, r5)     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            if (r0 != 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            r0.<init>()     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            java.lang.String r1 = "message arrived: receiving an un-recognized message. "
            r0.append(r1)     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            com.xiaomi.push.hj r5 = r5.a     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            r0.append(r5)     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            java.lang.String r5 = r0.toString()     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            com.xiaomi.channel.commonutils.logger.b.d(r5)     // Catch: com.xiaomi.push.iz -> La0 com.xiaomi.mipush.sdk.u -> La7
            return r6
        L20:
            com.xiaomi.push.hj r1 = r5.a()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "message arrived: processing an arrived message, action="
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            int[] r2 = com.xiaomi.mipush.sdk.an.a
            int r1 = r1.ordinal()
            r1 = r2[r1]
            r2 = 1
            if (r1 == r2) goto L44
            return r6
        L44:
            boolean r1 = r5.b()
            if (r1 != 0) goto L50
            java.lang.String r5 = "message arrived: receiving an un-encrypt message(SendMessage)."
        L4c:
            com.xiaomi.channel.commonutils.logger.b.d(r5)
            return r6
        L50:
            com.xiaomi.push.im r0 = (com.xiaomi.push.im) r0
            com.xiaomi.push.hv r1 = r0.a()
            if (r1 != 0) goto L5b
            java.lang.String r5 = "message arrived: receive an empty message without push content, drop it"
            goto L4c
        L5b:
            com.xiaomi.push.hw r3 = r5.a
            if (r3 == 0) goto L73
            com.xiaomi.push.hw r3 = r5.a
            java.util.Map r3 = r3.a()
            if (r3 == 0) goto L73
            com.xiaomi.push.hw r6 = r5.a
            java.util.Map<java.lang.String, java.lang.String> r6 = r6.a
            java.lang.String r3 = "jobkey"
            java.lang.Object r6 = r6.get(r3)
            java.lang.String r6 = (java.lang.String) r6
        L73:
            com.xiaomi.push.hw r5 = r5.a()
            r3 = 0
            com.xiaomi.mipush.sdk.MiPushMessage r5 = com.xiaomi.mipush.sdk.PushMessageHelper.generateMessage(r0, r5, r3)
            r5.setArrivedMessage(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "message arrived: receive a message, msgid="
            r0.append(r2)
            java.lang.String r1 = r1.a()
            r0.append(r1)
            java.lang.String r1 = ", jobkey="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r6)
            return r5
        La0:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            java.lang.String r5 = "message arrived: receive a message which action string is not valid. is the reg expired?"
            goto L4c
        La7:
            r5 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r5)
            java.lang.String r5 = "message arrived: receive a message but decrypt failed. report when click."
            goto L4c
    }

    public static com.xiaomi.mipush.sdk.am a(android.content.Context r1) {
            com.xiaomi.mipush.sdk.am r0 = com.xiaomi.mipush.sdk.am.a
            if (r0 != 0) goto Lb
            com.xiaomi.mipush.sdk.am r0 = new com.xiaomi.mipush.sdk.am
            r0.<init>(r1)
            com.xiaomi.mipush.sdk.am.a = r0
        Lb:
            com.xiaomi.mipush.sdk.am r1 = com.xiaomi.mipush.sdk.am.a
            return r1
    }

    private void a() {
            r8 = this;
            android.content.Context r0 = r8.a
            java.lang.String r1 = "mipush_extra"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "last_reinitialize"
            r4 = 0
            long r4 = r0.getLong(r3, r4)
            long r4 = r1 - r4
            long r4 = java.lang.Math.abs(r4)
            r6 = 1800000(0x1b7740, double:8.89318E-318)
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L34
            android.content.Context r4 = r8.a
            com.xiaomi.push.hx r5 = com.xiaomi.push.hx.b
            com.xiaomi.mipush.sdk.MiPushClient.reInitialize(r4, r5)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            android.content.SharedPreferences$Editor r0 = r0.putLong(r3, r1)
            r0.commit()
        L34:
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            java.lang.Object r0 = com.xiaomi.mipush.sdk.am.a
            monitor-enter(r0)
            java.util.Queue<java.lang.String> r1 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L25
            r1.remove(r3)     // Catch: java.lang.Throwable -> L25
            com.xiaomi.mipush.sdk.b.a(r2)     // Catch: java.lang.Throwable -> L25
            android.content.SharedPreferences r2 = com.xiaomi.mipush.sdk.b.a(r2)     // Catch: java.lang.Throwable -> L25
            java.util.Queue<java.lang.String> r3 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = ","
            java.lang.String r3 = com.xiaomi.push.bp.a(r3, r1)     // Catch: java.lang.Throwable -> L25
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "pref_msg_ids"
            r2.putString(r1, r3)     // Catch: java.lang.Throwable -> L25
            com.xiaomi.push.t.a(r2)     // Catch: java.lang.Throwable -> L25
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            return
        L25:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L25
            throw r2
    }

    private void a(com.xiaomi.push.ia r8) {
            r7 = this;
            java.lang.String r0 = r8.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "receive ack "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r1)
            java.util.Map r1 = r8.a()
            if (r1 == 0) goto L60
            java.lang.String r2 = "real_source"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L60
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "receive ack : messageId = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r3 = "  realSource = "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.b(r2)
            android.content.Context r2 = r7.a
            com.xiaomi.push.bx r2 = com.xiaomi.push.bx.a(r2)
            long r3 = r8.a
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 != 0) goto L58
            r8 = 1
            goto L59
        L58:
            r8 = 0
        L59:
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)
            r2.a(r0, r1, r8)
        L60:
            return
    }

    private void a(com.xiaomi.push.if r5) {
            r4 = this;
            java.lang.String r0 = "receive a message but decrypt failed. report now."
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            com.xiaomi.push.ii r0 = new com.xiaomi.push.ii
            com.xiaomi.push.hw r1 = r5.a()
            java.lang.String r1 = r1.a
            r2 = 0
            r0.<init>(r1, r2)
            com.xiaomi.push.ht r1 = com.xiaomi.push.ht.u
            java.lang.String r1 = r1.a
            r0.c(r1)
            java.lang.String r1 = r5.a()
            r0.b(r1)
            java.lang.String r5 = r5.b
            r0.d(r5)
            java.util.HashMap r5 = new java.util.HashMap
            r5.<init>()
            r0.a = r5
            java.util.Map<java.lang.String, java.lang.String> r5 = r0.a
            android.content.Context r1 = r4.a
            java.lang.String r1 = com.xiaomi.mipush.sdk.MiPushClient.getRegId(r1)
            java.lang.String r3 = "regid"
            r5.put(r3, r1)
            android.content.Context r5 = r4.a
            com.xiaomi.mipush.sdk.ao r5 = com.xiaomi.mipush.sdk.ao.a(r5)
            com.xiaomi.push.hj r1 = com.xiaomi.push.hj.i
            r3 = 0
            r5.a(r0, r1, r2, r3)
            return
    }

    private void a(com.xiaomi.push.ii r11) {
            r10 = this;
            com.xiaomi.push.ia r1 = new com.xiaomi.push.ia
            r1.<init>()
            com.xiaomi.push.ht r0 = com.xiaomi.push.ht.D
            java.lang.String r0 = r0.a
            r1.c(r0)
            java.lang.String r0 = r11.a()
            r1.a(r0)
            com.xiaomi.push.hy r0 = r11.a()
            r1.a(r0)
            java.lang.String r0 = r11.b()
            r1.b(r0)
            java.lang.String r11 = r11.c()
            r1.e(r11)
            r2 = 0
            r1.a(r2)
            java.lang.String r11 = "success clear push message."
            r1.d(r11)
            android.content.Context r11 = r10.a
            com.xiaomi.mipush.sdk.ao r0 = com.xiaomi.mipush.sdk.ao.a(r11)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.i
            android.content.Context r11 = r10.a
            java.lang.String r7 = r11.getPackageName()
            android.content.Context r11 = r10.a
            com.xiaomi.mipush.sdk.b r11 = com.xiaomi.mipush.sdk.b.a(r11)
            java.lang.String r8 = r11.a()
            r3 = 0
            r4 = 1
            r5 = 0
            r6 = 0
            r9 = 0
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    private void a(com.xiaomi.push.im r5, com.xiaomi.push.if r6) {
            r4 = this;
            com.xiaomi.push.hw r0 = r6.a()
            if (r0 == 0) goto Le
            com.xiaomi.push.hw r0 = r0.a()
            com.xiaomi.push.hw r0 = com.xiaomi.push.service.br.a(r0)
        Le:
            com.xiaomi.push.hz r1 = new com.xiaomi.push.hz
            r1.<init>()
            java.lang.String r2 = r5.b()
            r1.b(r2)
            java.lang.String r2 = r5.a()
            r1.a(r2)
            com.xiaomi.push.hv r2 = r5.a()
            long r2 = r2.a()
            r1.a(r2)
            java.lang.String r2 = r5.c()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L3d
            java.lang.String r2 = r5.c()
            r1.c(r2)
        L3d:
            java.lang.String r2 = r5.d()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L4e
            java.lang.String r5 = r5.d()
            r1.d(r5)
        L4e:
            android.content.Context r5 = r4.a
            short r5 = com.xiaomi.push.it.a(r5, r6)
            r1.a(r5)
            android.content.Context r5 = r4.a
            com.xiaomi.mipush.sdk.ao r5 = com.xiaomi.mipush.sdk.ao.a(r5)
            com.xiaomi.push.hj r6 = com.xiaomi.push.hj.f
            r5.a(r1, r6, r0)
            return
    }

    private void a(java.lang.String r4, long r5, com.xiaomi.mipush.sdk.e r7) {
            r3 = this;
            com.xiaomi.mipush.sdk.au r0 = com.xiaomi.mipush.sdk.l.a(r7)
            if (r0 != 0) goto L7
            return
        L7:
            r1 = 0
            int r5 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r5 != 0) goto L47
            java.lang.Class<com.xiaomi.mipush.sdk.af> r5 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r5)
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L44
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L44
            boolean r6 = r6.a(r4)     // Catch: java.lang.Throwable -> L44
            if (r6 == 0) goto L42
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L44
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L44
            r6.c(r4)     // Catch: java.lang.Throwable -> L44
            java.lang.String r4 = "syncing"
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L44
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L44
            java.lang.String r6 = r6.a(r0)     // Catch: java.lang.Throwable -> L44
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L42
            android.content.Context r4 = r3.a     // Catch: java.lang.Throwable -> L44
            com.xiaomi.mipush.sdk.af r4 = com.xiaomi.mipush.sdk.af.a(r4)     // Catch: java.lang.Throwable -> L44
            java.lang.String r6 = "synced"
            r4.a(r0, r6)     // Catch: java.lang.Throwable -> L44
        L42:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L44
            goto La0
        L44:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L44
            throw r4
        L47:
            android.content.Context r5 = r3.a
            com.xiaomi.mipush.sdk.af r5 = com.xiaomi.mipush.sdk.af.a(r5)
            java.lang.String r5 = r5.a(r0)
            java.lang.String r6 = "syncing"
            boolean r5 = r6.equals(r5)
            if (r5 == 0) goto L97
            java.lang.Class<com.xiaomi.mipush.sdk.af> r5 = com.xiaomi.mipush.sdk.af.class
            monitor-enter(r5)
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L94
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L94
            boolean r6 = r6.a(r4)     // Catch: java.lang.Throwable -> L94
            if (r6 == 0) goto L92
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L94
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L94
            int r6 = r6.a(r4)     // Catch: java.lang.Throwable -> L94
            r1 = 10
            if (r6 >= r1) goto L89
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L94
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L94
            r6.b(r4)     // Catch: java.lang.Throwable -> L94
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L94
            com.xiaomi.mipush.sdk.ao r6 = com.xiaomi.mipush.sdk.ao.a(r6)     // Catch: java.lang.Throwable -> L94
            r6.a(r4, r0, r7)     // Catch: java.lang.Throwable -> L94
            goto L92
        L89:
            android.content.Context r6 = r3.a     // Catch: java.lang.Throwable -> L94
            com.xiaomi.mipush.sdk.af r6 = com.xiaomi.mipush.sdk.af.a(r6)     // Catch: java.lang.Throwable -> L94
            r6.c(r4)     // Catch: java.lang.Throwable -> L94
        L92:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L94
            goto La0
        L94:
            r4 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L94
            throw r4
        L97:
            android.content.Context r5 = r3.a
            com.xiaomi.mipush.sdk.af r5 = com.xiaomi.mipush.sdk.af.a(r5)
            r5.c(r4)
        La0:
            return
    }

    private static boolean a(android.content.Context r7, java.lang.String r8) {
            java.lang.Object r0 = com.xiaomi.mipush.sdk.am.a
            monitor-enter(r0)
            com.xiaomi.mipush.sdk.b.a(r7)     // Catch: java.lang.Throwable -> L67
            android.content.SharedPreferences r7 = com.xiaomi.mipush.sdk.b.a(r7)     // Catch: java.lang.Throwable -> L67
            java.util.Queue<java.lang.String> r1 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            r2 = 0
            if (r1 != 0) goto L32
            java.lang.String r1 = "pref_msg_ids"
            java.lang.String r3 = ""
            java.lang.String r1 = r7.getString(r1, r3)     // Catch: java.lang.Throwable -> L67
            java.lang.String r3 = ","
            java.lang.String[] r1 = r1.split(r3)     // Catch: java.lang.Throwable -> L67
            java.util.LinkedList r3 = new java.util.LinkedList     // Catch: java.lang.Throwable -> L67
            r3.<init>()     // Catch: java.lang.Throwable -> L67
            com.xiaomi.mipush.sdk.am.a = r3     // Catch: java.lang.Throwable -> L67
            int r3 = r1.length     // Catch: java.lang.Throwable -> L67
            r4 = r2
        L26:
            if (r4 >= r3) goto L32
            r5 = r1[r4]     // Catch: java.lang.Throwable -> L67
            java.util.Queue<java.lang.String> r6 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            r6.add(r5)     // Catch: java.lang.Throwable -> L67
            int r4 = r4 + 1
            goto L26
        L32:
            java.util.Queue<java.lang.String> r1 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.contains(r8)     // Catch: java.lang.Throwable -> L67
            if (r1 == 0) goto L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            r7 = 1
            return r7
        L3d:
            java.util.Queue<java.lang.String> r1 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            r1.add(r8)     // Catch: java.lang.Throwable -> L67
            java.util.Queue<java.lang.String> r8 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            int r8 = r8.size()     // Catch: java.lang.Throwable -> L67
            r1 = 25
            if (r8 <= r1) goto L51
            java.util.Queue<java.lang.String> r8 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            r8.poll()     // Catch: java.lang.Throwable -> L67
        L51:
            java.util.Queue<java.lang.String> r8 = com.xiaomi.mipush.sdk.am.a     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = ","
            java.lang.String r8 = com.xiaomi.push.bp.a(r8, r1)     // Catch: java.lang.Throwable -> L67
            android.content.SharedPreferences$Editor r7 = r7.edit()     // Catch: java.lang.Throwable -> L67
            java.lang.String r1 = "pref_msg_ids"
            r7.putString(r1, r8)     // Catch: java.lang.Throwable -> L67
            com.xiaomi.push.t.a(r7)     // Catch: java.lang.Throwable -> L67
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            return r2
        L67:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            throw r7
    }

    private boolean a(com.xiaomi.push.if r3) {
            r2 = this;
            com.xiaomi.push.hw r0 = r3.a()
            if (r0 != 0) goto L8
            r3 = 0
            goto L10
        L8:
            com.xiaomi.push.hw r3 = r3.a()
            java.util.Map r3 = r3.a()
        L10:
            r0 = 0
            if (r3 != 0) goto L14
            return r0
        L14:
            java.lang.String r1 = "push_server_action"
            java.lang.Object r3 = r3.get(r1)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r1 = "hybrid_message"
            boolean r1 = android.text.TextUtils.equals(r3, r1)
            if (r1 != 0) goto L2e
            java.lang.String r1 = "platform_message"
            boolean r3 = android.text.TextUtils.equals(r3, r1)
            if (r3 == 0) goto L2d
            goto L2e
        L2d:
            return r0
        L2e:
            r3 = 1
            return r3
    }

    private void b(com.xiaomi.push.ia r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "ASSEMBLE_PUSH : "
            r0.append(r1)
            java.lang.String r1 = r6.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r0)
            java.lang.String r0 = r6.a()
            java.util.Map r1 = r6.a()
            if (r1 == 0) goto Le7
            java.lang.String r2 = "RegInfo"
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Le7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "brand:"
            r2.append(r3)
            com.xiaomi.mipush.sdk.ag r4 = com.xiaomi.mipush.sdk.ag.c
            java.lang.String r4 = r4.name()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L62
            java.lang.String r2 = "ASSEMBLE_PUSH : receive fcm token sync ack"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.content.Context r2 = r5.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.b
            com.xiaomi.mipush.sdk.i.b(r2, r3, r1)
            long r1 = r6.a
            com.xiaomi.mipush.sdk.e r6 = com.xiaomi.mipush.sdk.e.b
        L5d:
            r5.a(r0, r1, r6)
            goto Le7
        L62:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            com.xiaomi.mipush.sdk.ag r4 = com.xiaomi.mipush.sdk.ag.a
            java.lang.String r4 = r4.name()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L8e
            java.lang.String r2 = "ASSEMBLE_PUSH : receive hw token sync ack"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.content.Context r2 = r5.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.a
            com.xiaomi.mipush.sdk.i.b(r2, r3, r1)
            long r1 = r6.a
            com.xiaomi.mipush.sdk.e r6 = com.xiaomi.mipush.sdk.e.a
            goto L5d
        L8e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            com.xiaomi.mipush.sdk.ag r4 = com.xiaomi.mipush.sdk.ag.d
            java.lang.String r4 = r4.name()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto Lba
            java.lang.String r2 = "ASSEMBLE_PUSH : receive COS token sync ack"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.content.Context r2 = r5.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.c
            com.xiaomi.mipush.sdk.i.b(r2, r3, r1)
            long r1 = r6.a
            com.xiaomi.mipush.sdk.e r6 = com.xiaomi.mipush.sdk.e.c
            goto L5d
        Lba:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            com.xiaomi.mipush.sdk.ag r3 = com.xiaomi.mipush.sdk.ag.e
            java.lang.String r3 = r3.name()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto Le7
            java.lang.String r2 = "ASSEMBLE_PUSH : receive FTOS token sync ack"
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            android.content.Context r2 = r5.a
            com.xiaomi.mipush.sdk.e r3 = com.xiaomi.mipush.sdk.e.d
            com.xiaomi.mipush.sdk.i.b(r2, r3, r1)
            long r1 = r6.a
            com.xiaomi.mipush.sdk.e r6 = com.xiaomi.mipush.sdk.e.d
            goto L5d
        Le7:
            return
    }

    private void b(com.xiaomi.push.if r5) {
            r4 = this;
            com.xiaomi.push.hw r0 = r5.a()
            if (r0 == 0) goto Le
            com.xiaomi.push.hw r0 = r0.a()
            com.xiaomi.push.hw r0 = com.xiaomi.push.service.br.a(r0)
        Le:
            com.xiaomi.push.hz r1 = new com.xiaomi.push.hz
            r1.<init>()
            java.lang.String r2 = r5.a()
            r1.b(r2)
            java.lang.String r2 = r0.a()
            r1.a(r2)
            long r2 = r0.a()
            r1.a(r2)
            java.lang.String r2 = r0.b()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L39
            java.lang.String r2 = r0.b()
            r1.c(r2)
        L39:
            android.content.Context r2 = r4.a
            short r5 = com.xiaomi.push.it.a(r2, r5)
            r1.a(r5)
            android.content.Context r5 = r4.a
            com.xiaomi.mipush.sdk.ao r5 = com.xiaomi.mipush.sdk.ao.a(r5)
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.f
            r3 = 0
            r5.a(r1, r2, r3, r0)
            return
    }

    private void b(com.xiaomi.push.ii r14) {
            r13 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = ","
            java.util.Map r2 = r14.a()
            if (r2 != 0) goto L10
            java.lang.String r14 = "detect failed because null"
        Lc:
            com.xiaomi.channel.commonutils.logger.b.a(r14)
            return
        L10:
            r3 = 0
            java.lang.String r4 = "pkgList"
            java.lang.Object r4 = com.xiaomi.push.service.ay.a(r2, r4, r3)
            java.lang.String r4 = (java.lang.String) r4
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L22
            java.lang.String r14 = "detect failed because empty"
            goto Lc
        L22:
            android.content.Context r5 = r13.a
            java.lang.String r6 = "activity"
            java.lang.Object r5 = r5.getSystemService(r6)
            android.app.ActivityManager r5 = (android.app.ActivityManager) r5
            java.util.List r5 = r5.getRunningAppProcesses()     // Catch: java.lang.Throwable -> L128
            boolean r6 = com.xiaomi.push.w.a(r5)     // Catch: java.lang.Throwable -> L128
            if (r6 != 0) goto L122
            java.lang.String[] r4 = r4.split(r1)     // Catch: java.lang.Throwable -> L128
            java.util.HashMap r6 = new java.util.HashMap     // Catch: java.lang.Throwable -> L128
            r6.<init>()     // Catch: java.lang.Throwable -> L128
            int r7 = r4.length     // Catch: java.lang.Throwable -> L128
            r8 = 0
            r9 = r8
        L42:
            java.lang.String r10 = "~"
            if (r9 >= r7) goto L5b
            r11 = r4[r9]     // Catch: java.lang.Throwable -> L128
            java.lang.String[] r10 = r11.split(r10)     // Catch: java.lang.Throwable -> L128
            int r11 = r10.length     // Catch: java.lang.Throwable -> L128
            r12 = 2
            if (r11 < r12) goto L58
            r11 = 1
            r11 = r10[r11]     // Catch: java.lang.Throwable -> L128
            r10 = r10[r8]     // Catch: java.lang.Throwable -> L128
            r6.put(r11, r10)     // Catch: java.lang.Throwable -> L128
        L58:
            int r9 = r9 + 1
            goto L42
        L5b:
            com.xiaomi.push.w$a r4 = new com.xiaomi.push.w$a     // Catch: java.lang.Throwable -> L128
            r4.<init>(r10, r1)     // Catch: java.lang.Throwable -> L128
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L128
        L64:
            boolean r7 = r5.hasNext()     // Catch: java.lang.Throwable -> L128
            if (r7 == 0) goto L8f
            java.lang.Object r7 = r5.next()     // Catch: java.lang.Throwable -> L128
            android.app.ActivityManager$RunningAppProcessInfo r7 = (android.app.ActivityManager.RunningAppProcessInfo) r7     // Catch: java.lang.Throwable -> L128
            java.lang.String r9 = r7.processName     // Catch: java.lang.Throwable -> L128
            boolean r9 = r6.containsKey(r9)     // Catch: java.lang.Throwable -> L128
            if (r9 == 0) goto L64
            java.lang.String r9 = r7.processName     // Catch: java.lang.Throwable -> L128
            java.lang.Object r9 = r6.get(r9)     // Catch: java.lang.Throwable -> L128
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L128
            int r10 = r7.importance     // Catch: java.lang.Throwable -> L128
            java.lang.String r10 = java.lang.String.valueOf(r10)     // Catch: java.lang.Throwable -> L128
            r4.a(r9, r10)     // Catch: java.lang.Throwable -> L128
            java.lang.String r7 = r7.processName     // Catch: java.lang.Throwable -> L128
            r6.remove(r7)     // Catch: java.lang.Throwable -> L128
            goto L64
        L8f:
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L128
            int r5 = r5.length()     // Catch: java.lang.Throwable -> L128
            if (r5 <= 0) goto L11c
            com.xiaomi.push.ii r5 = new com.xiaomi.push.ii     // Catch: java.lang.Throwable -> L128
            r5.<init>()     // Catch: java.lang.Throwable -> L128
            java.lang.String r7 = r14.a()     // Catch: java.lang.Throwable -> L128
            r5.a(r7)     // Catch: java.lang.Throwable -> L128
            java.lang.String r7 = r14.b()     // Catch: java.lang.Throwable -> L128
            r5.b(r7)     // Catch: java.lang.Throwable -> L128
            java.lang.String r14 = r14.c()     // Catch: java.lang.Throwable -> L128
            r5.d(r14)     // Catch: java.lang.Throwable -> L128
            com.xiaomi.push.ht r14 = com.xiaomi.push.ht.ag     // Catch: java.lang.Throwable -> L128
            java.lang.String r14 = r14.a     // Catch: java.lang.Throwable -> L128
            r5.c(r14)     // Catch: java.lang.Throwable -> L128
            java.util.HashMap r14 = new java.util.HashMap     // Catch: java.lang.Throwable -> L128
            r14.<init>()     // Catch: java.lang.Throwable -> L128
            r5.a = r14     // Catch: java.lang.Throwable -> L128
            java.util.Map<java.lang.String, java.lang.String> r14 = r5.a     // Catch: java.lang.Throwable -> L128
            java.lang.String r7 = "alive"
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L128
            r14.put(r7, r4)     // Catch: java.lang.Throwable -> L128
            java.lang.String r14 = "reportNotAliveApp"
            java.lang.String r4 = "false"
            java.lang.Object r14 = com.xiaomi.push.service.ay.a(r2, r14, r4)     // Catch: java.lang.Throwable -> L128
            java.lang.String r14 = (java.lang.String) r14     // Catch: java.lang.Throwable -> L128
            boolean r14 = java.lang.Boolean.parseBoolean(r14)     // Catch: java.lang.Throwable -> L128
            if (r14 == 0) goto L110
            int r14 = r6.size()     // Catch: java.lang.Throwable -> L128
            if (r14 <= 0) goto L110
            com.xiaomi.push.w$a r14 = new com.xiaomi.push.w$a     // Catch: java.lang.Throwable -> L128
            r14.<init>(r0, r1)     // Catch: java.lang.Throwable -> L128
            java.util.Set r1 = r6.keySet()     // Catch: java.lang.Throwable -> L128
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L128
        Lef:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L128
            if (r2 == 0) goto L105
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L128
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L128
            java.lang.Object r2 = r6.get(r2)     // Catch: java.lang.Throwable -> L128
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L128
            r14.a(r2, r0)     // Catch: java.lang.Throwable -> L128
            goto Lef
        L105:
            java.util.Map<java.lang.String, java.lang.String> r0 = r5.a     // Catch: java.lang.Throwable -> L128
            java.lang.String r1 = "notAlive"
            java.lang.String r14 = r14.toString()     // Catch: java.lang.Throwable -> L128
            r0.put(r1, r14)     // Catch: java.lang.Throwable -> L128
        L110:
            android.content.Context r14 = r13.a     // Catch: java.lang.Throwable -> L128
            com.xiaomi.mipush.sdk.ao r14 = com.xiaomi.mipush.sdk.ao.a(r14)     // Catch: java.lang.Throwable -> L128
            com.xiaomi.push.hj r0 = com.xiaomi.push.hj.i     // Catch: java.lang.Throwable -> L128
            r14.a(r5, r0, r8, r3)     // Catch: java.lang.Throwable -> L128
            goto L13d
        L11c:
            java.lang.String r14 = "detect failed because no alive process"
            com.xiaomi.channel.commonutils.logger.b.b(r14)     // Catch: java.lang.Throwable -> L128
            goto L13d
        L122:
            java.lang.String r14 = "detect failed because params illegal"
            com.xiaomi.channel.commonutils.logger.b.a(r14)     // Catch: java.lang.Throwable -> L128
            goto L13d
        L128:
            r14 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "detect failed "
            r0.append(r1)
            r0.append(r14)
            java.lang.String r14 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r14)
        L13d:
            return
    }

    public com.xiaomi.mipush.sdk.PushMessageHandler.a a(android.content.Intent r15) {
            r14 = this;
            java.lang.String r0 = r15.getAction()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "receive an intent from server, action="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            java.lang.String r1 = "mrt"
            java.lang.String r2 = r15.getStringExtra(r1)
            if (r2 != 0) goto L28
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r2 = java.lang.Long.toString(r2)
        L28:
            java.lang.String r3 = "messageId"
            java.lang.String r8 = r15.getStringExtra(r3)
            r3 = -1
            java.lang.String r4 = "eventMessageType"
            int r9 = r15.getIntExtra(r4, r3)
            java.lang.String r3 = "com.xiaomi.mipush.RECEIVE_MESSAGE"
            boolean r3 = r3.equals(r0)
            java.lang.String r4 = "mipush_payload"
            r11 = 0
            r5 = 0
            if (r3 == 0) goto L269
            byte[] r7 = r15.getByteArrayExtra(r4)
            java.lang.String r0 = "mipush_notified"
            boolean r6 = r15.getBooleanExtra(r0, r5)
            if (r7 != 0) goto L64
            java.lang.String r0 = "receiving an empty message, drop"
            com.xiaomi.channel.commonutils.logger.b.d(r0)
            android.content.Context r0 = r14.a
            com.xiaomi.push.eo r0 = com.xiaomi.push.eo.a(r0)
            android.content.Context r1 = r14.a
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r2 = "12"
            r0.a(r1, r15, r2)
            return r11
        L64:
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.it.a(r0, r7)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r3 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.b r3 = com.xiaomi.mipush.sdk.b.a(r3)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hw r4 = r0.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r10 = r0.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r12 = com.xiaomi.push.hj.e     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r10 != r12) goto Lc3
            if (r4 == 0) goto Lc3
            boolean r10 = r3.e()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r10 != 0) goto Lc3
            if (r6 != 0) goto Lc3
            r4.a(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = "mat"
            long r12 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = java.lang.Long.toString(r12)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4.a(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            boolean r1 = r14.a(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 != 0) goto La2
            r14.b(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto Lc3
        La2:
            java.lang.String r1 = "this is a mina's message, ack later"
            com.xiaomi.channel.commonutils.logger.b.b(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = "__hybrid_message_ts"
            long r12 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = java.lang.String.valueOf(r12)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4.a(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = "__hybrid_device_status"
            android.content.Context r2 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            short r2 = com.xiaomi.push.it.a(r2, r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4.a(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
        Lc3:
            com.xiaomi.push.hj r1 = r0.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.e     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r10 = ""
            r12 = 2
            r13 = 1
            if (r1 != r2) goto L14c
            boolean r1 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 != 0) goto L14c
            boolean r1 = com.xiaomi.push.service.al.a(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L112
            java.lang.String r1 = "drop an un-encrypted wake-up messages. %1$s, %2$s"
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r2[r5] = r3     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r4 == 0) goto Leb
            java.lang.String r10 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
        Leb:
            r2[r13] = r10     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r2 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = "13: %1$s"
            java.lang.Object[] r4 = new java.lang.Object[r13]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r7 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4[r5] = r7     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
        L10e:
            r1.a(r2, r15, r3)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L146
        L112:
            java.lang.String r1 = "drop an un-encrypted messages. %1$s, %2$s"
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r2[r5] = r3     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r4 == 0) goto L122
            java.lang.String r10 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
        L122:
            r2[r13] = r10     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r2 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = "14: %1$s"
            java.lang.Object[] r4 = new java.lang.Object[r13]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r7 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4[r5] = r7     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L10e
        L146:
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.s.a(r1, r0, r6)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            return r11
        L14c:
            com.xiaomi.push.hj r1 = r0.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.e     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 != r2) goto L1b3
            boolean r1 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L1b3
            boolean r1 = com.xiaomi.push.service.al.a(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L1b3
            if (r6 == 0) goto L177
            if (r4 == 0) goto L177
            java.util.Map r1 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L177
            java.util.Map r1 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = "notify_effect"
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L177
            goto L1b3
        L177:
            java.lang.String r1 = "drop a wake-up messages which not has 'notify_effect' attr. %1$s, %2$s"
            java.lang.Object[] r2 = new java.lang.Object[r12]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r2[r5] = r3     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r4 == 0) goto L187
            java.lang.String r10 = r4.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
        L187:
            r2[r13] = r10     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.channel.commonutils.logger.b.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r2 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = "25: %1$s"
            java.lang.Object[] r4 = new java.lang.Object[r13]     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r7 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r4[r5] = r7     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = java.lang.String.format(r3, r4)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r1.a(r2, r15, r3)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.s.b(r1, r0, r6)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            return r11
        L1b3:
            boolean r1 = r3.c()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 != 0) goto L202
            com.xiaomi.push.hj r1 = r0.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == r2) goto L202
            boolean r1 = com.xiaomi.push.service.al.a(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L1cd
            r4 = r14
            r5 = r0
            r10 = r15
            com.xiaomi.mipush.sdk.PushMessageHandler$a r15 = r4.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            return r15
        L1cd:
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.s.e(r1, r0, r6)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            boolean r0 = r3.d()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r1.<init>()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = "receive message without registration. need re-register!registered?"
            r1.append(r2)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            r1.append(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.channel.commonutils.logger.b.d(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r2 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            java.lang.String r3 = "15"
            r1.a(r2, r15, r3)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r0 == 0) goto L327
            r14.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L327
        L202:
            boolean r1 = r3.c()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L23a
            boolean r1 = r3.f()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 == 0) goto L23a
            com.xiaomi.push.hj r1 = r0.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.push.hj r2 = com.xiaomi.push.hj.b     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r1 != r2) goto L22e
            boolean r0 = r0.b()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            if (r0 == 0) goto L227
            r3.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r0 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.MiPushClient.clearExtras(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.PushMessageHandler.a()     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L327
        L227:
            java.lang.String r0 = "receiving an un-encrypt unregistration message"
            com.xiaomi.channel.commonutils.logger.b.d(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L327
        L22e:
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.s.e(r1, r0, r6)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            android.content.Context r0 = r14.a     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            com.xiaomi.mipush.sdk.MiPushClient.unregisterPush(r0)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            goto L327
        L23a:
            r4 = r14
            r5 = r0
            r10 = r15
            com.xiaomi.mipush.sdk.PushMessageHandler$a r15 = r4.a(r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Exception -> L242 com.xiaomi.push.iz -> L252
            return r15
        L242:
            r0 = move-exception
            android.content.Context r1 = r14.a
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)
            android.content.Context r2 = r14.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = "17"
            goto L261
        L252:
            r0 = move-exception
            android.content.Context r1 = r14.a
            com.xiaomi.push.eo r1 = com.xiaomi.push.eo.a(r1)
            android.content.Context r2 = r14.a
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r3 = "16"
        L261:
            r1.a(r2, r15, r3)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            goto L327
        L269:
            java.lang.String r1 = "com.xiaomi.mipush.ERROR"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L2c7
            com.xiaomi.mipush.sdk.MiPushCommandMessage r0 = new com.xiaomi.mipush.sdk.MiPushCommandMessage
            r0.<init>()
            com.xiaomi.push.if r1 = new com.xiaomi.push.if
            r1.<init>()
            byte[] r2 = r15.getByteArrayExtra(r4)     // Catch: com.xiaomi.push.iz -> L284
            if (r2 == 0) goto L284
            com.xiaomi.push.it.a(r1, r2)     // Catch: com.xiaomi.push.iz -> L284
        L284:
            com.xiaomi.push.hj r1 = r1.a()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.setCommand(r1)
            java.lang.String r1 = "mipush_error_code"
            int r2 = r15.getIntExtra(r1, r5)
            long r2 = (long) r2
            r0.setResultCode(r2)
            java.lang.String r2 = "mipush_error_msg"
            java.lang.String r3 = r15.getStringExtra(r2)
            r0.setReason(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "receive a error message. code = "
            r3.append(r4)
            int r1 = r15.getIntExtra(r1, r5)
            r3.append(r1)
            java.lang.String r1 = ", msg= "
            r3.append(r1)
            java.lang.String r15 = r15.getStringExtra(r2)
            r3.append(r15)
            java.lang.String r15 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r15)
            return r0
        L2c7:
            java.lang.String r1 = "com.xiaomi.mipush.MESSAGE_ARRIVED"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L327
            byte[] r15 = r15.getByteArrayExtra(r4)
            if (r15 != 0) goto L2db
            java.lang.String r15 = "message arrived: receiving an empty message, drop"
            com.xiaomi.channel.commonutils.logger.b.d(r15)
            return r11
        L2db:
            com.xiaomi.push.if r0 = new com.xiaomi.push.if
            r0.<init>()
            com.xiaomi.push.it.a(r0, r15)     // Catch: java.lang.Exception -> L312
            android.content.Context r1 = r14.a     // Catch: java.lang.Exception -> L312
            com.xiaomi.mipush.sdk.b r1 = com.xiaomi.mipush.sdk.b.a(r1)     // Catch: java.lang.Exception -> L312
            boolean r2 = com.xiaomi.push.service.al.a(r0)     // Catch: java.lang.Exception -> L312
            if (r2 == 0) goto L2f5
            java.lang.String r15 = "message arrived: receive ignore reg message, ignore!"
        L2f1:
            com.xiaomi.channel.commonutils.logger.b.d(r15)     // Catch: java.lang.Exception -> L312
            goto L327
        L2f5:
            boolean r2 = r1.c()     // Catch: java.lang.Exception -> L312
            if (r2 != 0) goto L2fe
            java.lang.String r15 = "message arrived: receive message without registration. need unregister or re-register!"
            goto L2f1
        L2fe:
            boolean r2 = r1.c()     // Catch: java.lang.Exception -> L312
            if (r2 == 0) goto L30d
            boolean r1 = r1.f()     // Catch: java.lang.Exception -> L312
            if (r1 == 0) goto L30d
            java.lang.String r15 = "message arrived: app info is invalidated"
            goto L2f1
        L30d:
            com.xiaomi.mipush.sdk.PushMessageHandler$a r15 = r14.a(r0, r15)     // Catch: java.lang.Exception -> L312
            return r15
        L312:
            r15 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fail to deal with arrived message. "
            r0.append(r1)
            r0.append(r15)
            java.lang.String r15 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r15)
        L327:
            return r11
    }

    public java.util.List<java.lang.String> a(java.util.TimeZone r18, java.util.TimeZone r19, java.util.List<java.lang.String> r20) {
            r17 = this;
            r0 = r20
            boolean r1 = r18.equals(r19)
            if (r1 == 0) goto L9
            return r0
        L9:
            r1 = 1440(0x5a0, double:7.115E-321)
            int r3 = r18.getRawOffset()
            int r4 = r19.getRawOffset()
            int r3 = r3 - r4
            int r3 = r3 / 1000
            int r3 = r3 / 60
            long r3 = (long) r3
            r5 = 0
            java.lang.Object r6 = r0.get(r5)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String r7 = ":"
            java.lang.String[] r6 = r6.split(r7)
            r6 = r6[r5]
            long r8 = java.lang.Long.parseLong(r6)
            java.lang.Object r6 = r0.get(r5)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String[] r6 = r6.split(r7)
            r10 = 1
            r6 = r6[r10]
            long r11 = java.lang.Long.parseLong(r6)
            java.lang.Object r6 = r0.get(r10)
            java.lang.String r6 = (java.lang.String) r6
            java.lang.String[] r6 = r6.split(r7)
            r6 = r6[r5]
            long r13 = java.lang.Long.parseLong(r6)
            java.lang.Object r0 = r0.get(r10)
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String[] r0 = r0.split(r7)
            r0 = r0[r10]
            long r6 = java.lang.Long.parseLong(r0)
            r15 = 60
            long r8 = r8 * r15
            long r8 = r8 + r11
            long r8 = r8 - r3
            long r8 = r8 + r1
            long r8 = r8 % r1
            long r13 = r13 * r15
            long r13 = r13 + r6
            long r13 = r13 - r3
            long r13 = r13 + r1
            long r13 = r13 % r1
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            long r3 = r8 / r15
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r2[r5] = r3
            long r8 = r8 % r15
            java.lang.Long r3 = java.lang.Long.valueOf(r8)
            r2[r10] = r3
            java.lang.String r3 = "%1$02d:%2$02d"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            r0.add(r2)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            long r6 = r13 / r15
            java.lang.Long r2 = java.lang.Long.valueOf(r6)
            r1[r5] = r2
            long r13 = r13 % r15
            java.lang.Long r2 = java.lang.Long.valueOf(r13)
            r1[r10] = r2
            java.lang.String r1 = java.lang.String.format(r3, r1)
            r0.add(r1)
            return r0
    }
}
