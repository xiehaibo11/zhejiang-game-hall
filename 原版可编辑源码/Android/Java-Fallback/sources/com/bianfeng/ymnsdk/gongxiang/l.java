package com.bianfeng.ymnsdk.gongxiang;

public class l {
    public static volatile com.bianfeng.ymnsdk.gongxiang.l a;

    public l() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.gongxiang.l a() {
            com.bianfeng.ymnsdk.gongxiang.l r0 = com.bianfeng.ymnsdk.gongxiang.l.a
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.gongxiang.l> r0 = com.bianfeng.ymnsdk.gongxiang.l.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.gongxiang.l r1 = com.bianfeng.ymnsdk.gongxiang.l.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.gongxiang.l r1 = new com.bianfeng.ymnsdk.gongxiang.l     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.gongxiang.l.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.gongxiang.l r0 = com.bianfeng.ymnsdk.gongxiang.l.a
            return r0
    }

    private void a(int r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13, java.lang.String r14, int r15, java.lang.String r16, java.lang.String r17) {
            r8 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1 = new com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils
            r2 = 0
            java.lang.Long r0 = java.lang.Long.valueOf(r2)
            r2 = r15
            r3 = r16
            r1.<init>(r15, r3, r0)
            com.bianfeng.ymnsdk.ymndatalib.e r7 = new com.bianfeng.ymnsdk.ymndatalib.e
            r0 = r7
            r2 = r10
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r17
            r0.<init>(r1, r2, r3, r4, r5, r6)
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            r2 = r9
            r3 = r11
            r1.<init>(r7, r9, r11)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            return
    }

    public void a(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, int r17, java.lang.String r18, java.lang.String r19) {
            r12 = this;
            r0 = r13
            com.bianfeng.ymnsdk.ymndatalib.h r1 = com.bianfeng.ymnsdk.ymndatalib.h.b()
            java.lang.String r5 = r1.a(r13)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L24
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "不在白名单"
            r1.append(r2)
            r1.append(r13)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            return
        L24:
            r3 = 30899(0x78b3, float:4.3299E-41)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()     // Catch: java.lang.Exception -> L3d
            java.lang.String r4 = r0.getPluginTrace(r5)     // Catch: java.lang.Exception -> L3d
            r2 = r12
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            r10 = r18
            r11 = r19
            r2.a(r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L3d
            goto L3e
        L3d:
            r0 = move-exception
        L3e:
            return
    }

    public void a(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17) {
            r12 = this;
            r0 = r13
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "测试："
            r1.append(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r1)
            com.bianfeng.ymnsdk.ymndatalib.h r1 = com.bianfeng.ymnsdk.ymndatalib.h.b()
            java.lang.String r5 = r1.a(r13)
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L38
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "不在白名单"
            r1.append(r2)
            r1.append(r13)
            java.lang.String r0 = r1.toString()
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            return
        L38:
            r3 = 30001(0x7531, float:4.204E-41)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()     // Catch: java.lang.Exception -> L50
            java.lang.String r4 = r0.getStartPluginTrace(r5)     // Catch: java.lang.Exception -> L50
            r9 = 0
            java.lang.String r11 = ""
            r2 = r12
            r6 = r14
            r7 = r15
            r8 = r16
            r10 = r17
            r2.a(r3, r4, r5, r6, r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            return
    }
}
