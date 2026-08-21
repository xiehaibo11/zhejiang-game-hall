package com.meizu.cloud.pushsdk.platform.a;

public class a {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;

    public a(android.content.Context r17) {
            r16 = this;
            r0 = r16
            r16.<init>()
            java.lang.String r1 = "https://api-push.meizu.com/garcia/api/client/"
            r0.a = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            java.lang.String r2 = "message/registerPush"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.b = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = r0.a
            r1.append(r3)
            java.lang.String r3 = "message/unRegisterPush"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = r0.a
            r1.append(r4)
            java.lang.String r4 = "advance/unRegisterPush"
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.d = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = r0.a
            r1.append(r5)
            java.lang.String r5 = "message/getRegisterSwitch"
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.e = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r6 = r0.a
            r1.append(r6)
            java.lang.String r6 = "message/changeRegisterSwitch"
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.f = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r7 = r0.a
            r1.append(r7)
            java.lang.String r7 = "message/changeAllSwitch"
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            r0.g = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r8 = r0.a
            r1.append(r8)
            java.lang.String r8 = "message/subscribeTags"
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            r0.h = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r9 = r0.a
            r1.append(r9)
            java.lang.String r9 = "message/unSubscribeTags"
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.i = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r10 = r0.a
            r1.append(r10)
            java.lang.String r10 = "message/unSubAllTags"
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            r0.j = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r11 = r0.a
            r1.append(r11)
            java.lang.String r11 = "message/getSubTags"
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            r0.k = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r12 = r0.a
            r1.append(r12)
            java.lang.String r12 = "message/subscribeAlias"
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            r0.l = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r13 = r0.a
            r1.append(r13)
            java.lang.String r13 = "message/unSubscribeAlias"
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            r0.m = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r14 = r0.a
            r1.append(r14)
            java.lang.String r14 = "message/getSubAlias"
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            r0.n = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r15 = r0.a
            r1.append(r15)
            java.lang.String r15 = "advance/changeRegisterSwitch"
            r1.append(r15)
            java.lang.String r1 = r1.toString()
            r0.o = r1
            com.meizu.cloud.pushsdk.c.a.a()
            boolean r1 = com.meizu.cloud.pushsdk.util.MzSystemUtils.isOverseas()
            if (r1 == 0) goto L24a
            java.lang.String r1 = "https://api-push.in.meizu.com/garcia/api/client/"
            r0.a = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r17 = r15
            java.lang.String r15 = r0.a
            r1.append(r15)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.b = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.c = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.d = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.e = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.f = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            r0.g = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            r0.h = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r9)
            java.lang.String r1 = r1.toString()
            r0.i = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r10)
            java.lang.String r1 = r1.toString()
            r0.j = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r11)
            java.lang.String r1 = r1.toString()
            r0.k = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            r0.l = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r13)
            java.lang.String r1 = r1.toString()
            r0.m = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            r0.n = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r0.a
            r1.append(r2)
            r2 = r17
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.o = r1
        L24a:
            return
    }

    public com.meizu.cloud.pushsdk.c.a.c a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "deviceId"
            r0.put(r3, r5)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "register post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.b
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c a(java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, boolean r7) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.lang.String r3 = java.lang.String.valueOf(r6)
            java.lang.String r5 = "msgType"
            r0.put(r5, r3)
            if (r7 == 0) goto L1d
            java.lang.String r3 = "1"
            goto L1f
        L1d:
            java.lang.String r3 = "0"
        L1f:
            java.lang.String r5 = "subSwitch"
            r0.put(r5, r3)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r2.f
            r4.append(r5)
            java.lang.String r5 = " switchPush post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.f
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c<java.lang.String> a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.io.File r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "msgId"
            r0.put(r1, r3)
            java.lang.String r3 = "deviceId"
            r0.put(r3, r4)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = "4a2ca769d79f4856bb3bd982d30de790"
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r0 = "sign"
            r3.put(r0, r4)
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 != 0) goto L2a
            java.lang.String r4 = "errorMsg"
            r3.put(r4, r5)
        L2a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "uploadLogFile post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = "https://api-push.meizu.com/garcia/api/client/log/upload"
            com.meizu.cloud.pushsdk.c.a.b$c r4 = com.meizu.cloud.pushsdk.c.a.c(r4)
            com.meizu.cloud.pushsdk.c.a.b$c r3 = r4.a(r3)
            java.lang.String r4 = "logFile"
            com.meizu.cloud.pushsdk.c.a.b$c r3 = r3.a(r4, r6)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.lang.String r3 = "tags"
            r0.put(r3, r6)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "subScribeTags post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.h
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c a(java.lang.String r3, java.lang.String r4, java.lang.String r5, boolean r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            if (r6 == 0) goto L14
            java.lang.String r3 = "1"
            goto L16
        L14:
            java.lang.String r3 = "0"
        L16:
            java.lang.String r5 = "subSwitch"
            r0.put(r5, r3)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r2.g
            r4.append(r5)
            java.lang.String r5 = " switchPush post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.g
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c b(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "deviceId"
            r0.put(r3, r5)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "unregister post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.c
            com.meizu.cloud.pushsdk.c.a.b$b r4 = com.meizu.cloud.pushsdk.c.a.a(r4)
            com.meizu.cloud.pushsdk.c.a.b$b r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c b(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.lang.String r3 = "tags"
            r0.put(r3, r6)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "subScribeTags post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.i
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c c(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkPush post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.e
            com.meizu.cloud.pushsdk.c.a.b$b r4 = com.meizu.cloud.pushsdk.c.a.a(r4)
            com.meizu.cloud.pushsdk.c.a.b$b r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c c(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "appKey"
            r0.put(r3, r4)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.lang.String r3 = "alias"
            r0.put(r3, r6)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "subScribeTags post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.l
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c d(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "subScribeAllTags post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.j
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c d(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.lang.String r3 = "alias"
            r0.put(r3, r6)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "subScribeTags post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.m
            com.meizu.cloud.pushsdk.c.a.b$d r4 = com.meizu.cloud.pushsdk.c.a.b(r4)
            com.meizu.cloud.pushsdk.c.a.b$d r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }

    public com.meizu.cloud.pushsdk.c.a.c e(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.String r1 = "appId"
            r0.put(r1, r3)
            java.lang.String r3 = "pushId"
            r0.put(r3, r5)
            java.util.LinkedHashMap r3 = new java.util.LinkedHashMap
            r3.<init>(r0)
            java.lang.String r4 = com.meizu.cloud.pushsdk.platform.b.a(r0, r4)
            java.lang.String r5 = "sign"
            r3.put(r5, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "checkPush post map "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "PushAPI"
            com.meizu.cloud.pushinternal.DebugLogger.i(r5, r4)
            java.lang.String r4 = r2.k
            com.meizu.cloud.pushsdk.c.a.b$b r4 = com.meizu.cloud.pushsdk.c.a.a(r4)
            com.meizu.cloud.pushsdk.c.a.b$b r3 = r4.a(r3)
            com.meizu.cloud.pushsdk.c.a.b r3 = r3.a()
            com.meizu.cloud.pushsdk.c.a.c r3 = r3.a()
            return r3
    }
}
