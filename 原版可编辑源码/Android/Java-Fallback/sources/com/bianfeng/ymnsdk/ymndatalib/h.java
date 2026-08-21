package com.bianfeng.ymnsdk.ymndatalib;

public class h {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.h d;
    public java.util.Map<java.lang.String, java.lang.String> a;
    public boolean b;
    public com.bianfeng.netlibsdk.BaseRequest.Listener c;

    public class a implements com.bianfeng.netlibsdk.BaseRequest.Listener<com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean> {
        public final com.bianfeng.ymnsdk.ymndatalib.h a;

        public a(com.bianfeng.ymnsdk.ymndatalib.h r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        public void a(com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean r5) {
                r4 = this;
                r0 = 1
                int r1 = r5.getCode()     // Catch: java.lang.Exception -> L43
                if (r1 != 0) goto L3d
                com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean$DataBean r5 = r5.getData()     // Catch: java.lang.Exception -> L43
                java.util.List r1 = r5.getFunctions()     // Catch: java.lang.Exception -> L43
                if (r5 == 0) goto L37
                if (r1 != 0) goto L14
                goto L37
            L14:
                java.util.Iterator r5 = r1.iterator()     // Catch: java.lang.Exception -> L43
            L18:
                boolean r1 = r5.hasNext()     // Catch: java.lang.Exception -> L43
                if (r1 == 0) goto L30
                java.lang.Object r1 = r5.next()     // Catch: java.lang.Exception -> L43
                java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L43
                com.bianfeng.ymnsdk.ymndatalib.h r2 = r4.a     // Catch: java.lang.Exception -> L43
                java.util.Map r2 = com.bianfeng.ymnsdk.ymndatalib.h.a(r2)     // Catch: java.lang.Exception -> L43
                java.lang.String r3 = "1"
                r2.put(r1, r3)     // Catch: java.lang.Exception -> L43
                goto L18
            L30:
                com.bianfeng.ymnsdk.ymndatalib.h r5 = r4.a     // Catch: java.lang.Exception -> L43
                r1 = 0
                com.bianfeng.ymnsdk.ymndatalib.h.a(r5, r1)     // Catch: java.lang.Exception -> L43
                goto L42
            L37:
                com.bianfeng.ymnsdk.ymndatalib.h r5 = r4.a     // Catch: java.lang.Exception -> L43
                com.bianfeng.ymnsdk.ymndatalib.h.a(r5, r0)     // Catch: java.lang.Exception -> L43
                return
            L3d:
                com.bianfeng.ymnsdk.ymndatalib.h r5 = r4.a     // Catch: java.lang.Exception -> L43
                com.bianfeng.ymnsdk.ymndatalib.h.a(r5, r0)     // Catch: java.lang.Exception -> L43
            L42:
                goto L4c
            L43:
                r5 = move-exception
                r5.printStackTrace()
                com.bianfeng.ymnsdk.ymndatalib.h r5 = r4.a
                com.bianfeng.ymnsdk.ymndatalib.h.a(r5, r0)
            L4c:
                return
        }

        @Override
        public void onFail(java.lang.String r2) {
                r1 = this;
                com.bianfeng.ymnsdk.ymndatalib.h r2 = r1.a
                r0 = 1
                com.bianfeng.ymnsdk.ymndatalib.h.a(r2, r0)
                return
        }

        @Override
        public void onSuccess(com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean r1) {
                r0 = this;
                com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean r1 = (com.bianfeng.ymnsdk.ymndatalib.bean.base.WhitelistBean) r1
                r0.a(r1)
                return
        }
    }

    public h() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            com.bianfeng.ymnsdk.ymndatalib.h$a r0 = new com.bianfeng.ymnsdk.ymndatalib.h$a
            r0.<init>(r1)
            r1.c = r0
            return
    }

    public static java.util.Map a(com.bianfeng.ymnsdk.ymndatalib.h r0) {
            java.util.Map<java.lang.String, java.lang.String> r0 = r0.a
            return r0
    }

    public static boolean a(com.bianfeng.ymnsdk.ymndatalib.h r0, boolean r1) {
            r0.b = r1
            return r1
    }

    public static com.bianfeng.ymnsdk.ymndatalib.h b() {
            com.bianfeng.ymnsdk.ymndatalib.h r0 = com.bianfeng.ymnsdk.ymndatalib.h.d
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.h> r0 = com.bianfeng.ymnsdk.ymndatalib.h.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.h r1 = com.bianfeng.ymnsdk.ymndatalib.h.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.h r1 = new com.bianfeng.ymnsdk.ymndatalib.h     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.h.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.h r0 = com.bianfeng.ymnsdk.ymndatalib.h.d
            return r0
    }

    public java.lang.String a(java.lang.String r7) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmndataWhiteListSdk getKey "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            r0 = 0
            boolean r1 = r6.b     // Catch: java.lang.Exception -> L4a
            if (r1 != 0) goto L49
            java.lang.String r1 = ";"
            java.lang.String[] r7 = r7.split(r1)     // Catch: java.lang.Exception -> L4a
            int r1 = r7.length     // Catch: java.lang.Exception -> L4a
            r2 = 0
        L21:
            if (r2 >= r1) goto L49
            r3 = r7[r2]     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r3)     // Catch: java.lang.Exception -> L4a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            r4.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r5 = "YmndataWhiteListSdk md5 "
            r4.append(r5)     // Catch: java.lang.Exception -> L4a
            r4.append(r3)     // Catch: java.lang.Exception -> L4a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L4a
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r4)     // Catch: java.lang.Exception -> L4a
            java.util.Map<java.lang.String, java.lang.String> r4 = r6.a     // Catch: java.lang.Exception -> L4a
            boolean r4 = r4.containsKey(r3)     // Catch: java.lang.Exception -> L4a
            if (r4 == 0) goto L46
            return r3
        L46:
            int r2 = r2 + 1
            goto L21
        L49:
            return r0
        L4a:
            r7 = move-exception
            r7.printStackTrace()
            return r0
    }

    public void a() {
            r2 = this;
            com.bianfeng.ymnsdk.ymndatalib.g r0 = new com.bianfeng.ymnsdk.ymndatalib.g
            r0.<init>()
            com.bianfeng.netlibsdk.DefaultRetryPolicy r1 = new com.bianfeng.netlibsdk.DefaultRetryPolicy
            r1.<init>()
            r0.setRetryPolicy(r1)
            com.bianfeng.netlibsdk.BaseRequest$Listener r1 = r2.c
            r0.setListener(r1)
            com.bianfeng.netlibsdk.NetlibSdk r1 = com.bianfeng.netlibsdk.NetlibSdk.getInstance()
            r1.add(r0)
            return
    }
}
