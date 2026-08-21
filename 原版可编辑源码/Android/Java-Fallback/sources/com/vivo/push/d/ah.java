package com.vivo.push.d;

final class ah extends com.vivo.push.l {
    ah(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r7) {
            r6 = this;
            android.content.Context r0 = r6.a
            java.lang.String r1 = "SendCommandTask "
            java.lang.String r2 = "SendCommandTask"
            if (r0 != 0) goto L1d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r7)
            java.lang.String r7 = " ; mContext is Null"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.vivo.push.util.p.d(r2, r7)
            return
        L1d:
            if (r7 != 0) goto L25
            java.lang.String r7 = "SendCommandTask pushCommand is Null"
            com.vivo.push.util.p.d(r2, r7)
            return
        L25:
            android.content.Context r0 = r6.a
            com.vivo.push.model.b r0 = com.vivo.push.util.t.a(r0)
            int r3 = r7.b()
            r4 = 2009(0x7d9, float:2.815E-42)
            if (r3 == r4) goto L80
            r4 = 2011(0x7db, float:2.818E-42)
            if (r3 == r4) goto L6b
            switch(r3) {
                case 2002: goto L3c;
                case 2003: goto L3c;
                case 2004: goto L3c;
                case 2005: goto L3c;
                default: goto L3a;
            }
        L3a:
            goto Lcb
        L3c:
            if (r0 == 0) goto L5a
            boolean r3 = r0.c()
            if (r3 == 0) goto L45
            goto L5a
        L45:
            r3 = r7
            com.vivo.push.b.c r3 = (com.vivo.push.b.c) r3
            int r4 = com.vivo.push.util.s.a(r3)
            if (r4 == 0) goto Lcb
            com.vivo.push.e r7 = com.vivo.push.e.a()
            java.lang.String r0 = r3.h()
            r7.a(r0, r4)
            return
        L5a:
            com.vivo.push.e r3 = com.vivo.push.e.a()
            r4 = r7
            com.vivo.push.b.c r4 = (com.vivo.push.b.c) r4
            java.lang.String r4 = r4.h()
            r5 = 1005(0x3ed, float:1.408E-42)
            r3.a(r4, r5)
            goto Lcb
        L6b:
            android.content.Context r3 = r6.a
            com.vivo.push.cache.ClientConfigManagerImpl r3 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r3)
            r4 = r7
            com.vivo.push.b.w r4 = (com.vivo.push.b.w) r4
            int r4 = r4.d()
            boolean r3 = r3.isDebug(r4)
            com.vivo.push.util.p.a(r3)
            goto Lcb
        L80:
            android.content.Context r3 = r6.a
            com.vivo.push.cache.ClientConfigManagerImpl r3 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r3)
            boolean r3 = r3.isDebug()
            com.vivo.push.util.p.a(r3)
            boolean r3 = com.vivo.push.util.p.a()
            if (r3 == 0) goto Lcb
            com.vivo.push.e r3 = com.vivo.push.e.a()
            r3.i()
            com.vivo.push.util.b r3 = new com.vivo.push.util.b
            r3.<init>()
            android.content.Context r4 = r6.a
            java.lang.String r5 = "com.vivo.push_preferences.hybridapptoken_v1"
            r3.a(r4, r5)
            r3.a()
            com.vivo.push.util.b r3 = new com.vivo.push.util.b
            r3.<init>()
            android.content.Context r4 = r6.a
            java.lang.String r5 = "com.vivo.push_preferences.appconfig_v1"
            r3.a(r4, r5)
            r3.a()
            com.vivo.push.e r3 = com.vivo.push.e.a()
            boolean r3 = r3.e()
            if (r3 != 0) goto Lcb
            android.content.Context r3 = r6.a
            com.vivo.push.cache.ClientConfigManagerImpl r3 = com.vivo.push.cache.ClientConfigManagerImpl.getInstance(r3)
            r3.clearPush()
        Lcb:
            if (r0 != 0) goto Le2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r7)
            java.lang.String r7 = " ; pushPkgInfo is Null"
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.vivo.push.util.p.d(r2, r7)
            return
        Le2:
            java.lang.String r3 = r0.a()
            boolean r0 = r0.c()
            if (r0 == 0) goto L119
            com.vivo.push.e r0 = com.vivo.push.e.a()     // Catch: java.lang.Exception -> Lfc
            com.vivo.push.b.c r7 = (com.vivo.push.b.c) r7     // Catch: java.lang.Exception -> Lfc
            java.lang.String r7 = r7.h()     // Catch: java.lang.Exception -> Lfc
            r4 = 1004(0x3ec, float:1.407E-42)
            r0.a(r7, r4)     // Catch: java.lang.Exception -> Lfc
            goto L100
        Lfc:
            r7 = move-exception
            r7.printStackTrace()
        L100:
            com.vivo.push.b.e r7 = new com.vivo.push.b.e
            r7.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r7)
            java.lang.String r1 = " ; pkgName is InBlackList "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.vivo.push.util.p.d(r2, r0)
        L119:
            android.content.Context r0 = r6.a
            com.vivo.push.a.a.a(r0, r3, r7)
            return
    }
}
