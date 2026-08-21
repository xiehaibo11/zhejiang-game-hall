package com.loc;

public final class k extends java.lang.Exception {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private int f;
    private int g;
    private volatile boolean h;
    private java.lang.String i;
    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> j;

    public k(java.lang.String r17) {
            r16 = this;
            r0 = r16
            r1 = r17
            r16.<init>(r17)
            java.lang.String r2 = "未知的错误"
            r0.a = r2
            java.lang.String r3 = ""
            r0.b = r3
            r0.c = r3
            java.lang.String r3 = "1900"
            r0.d = r3
            java.lang.String r3 = "UnknownError"
            r0.e = r3
            r3 = -1
            r0.f = r3
            r0.g = r3
            r4 = 0
            r0.h = r4
            r0.a = r1
            java.lang.String r4 = "IO 操作异常 - IOException"
            boolean r5 = r4.equals(r1)
            java.lang.String r6 = "DNS解析失败"
            java.lang.String r7 = "http连接失败 - ConnectionException"
            r8 = 2
            java.lang.String r9 = "未知主机 - UnKnowHostException"
            r10 = 7
            java.lang.String r11 = "socket 连接超时 - SocketTimeoutException"
            java.lang.String r12 = "socket 连接异常 - SocketException"
            r13 = 3
            r14 = 6
            if (r5 == 0) goto L47
            r3 = 21
            r0.f = r3
            java.lang.String r3 = "1902"
            r0.d = r3
            java.lang.String r3 = "IOException"
        L43:
            r0.e = r3
            goto L17b
        L47:
            boolean r5 = r12.equals(r1)
            if (r5 == 0) goto L53
            r3 = 22
        L4f:
            r0.f = r3
            goto L17b
        L53:
            boolean r5 = r11.equals(r1)
            if (r5 == 0) goto L64
            r3 = 23
            r0.f = r3
            java.lang.String r3 = "1802"
            r0.d = r3
            java.lang.String r3 = "SocketTimeoutException"
            goto L43
        L64:
            java.lang.String r5 = "无效的参数 - IllegalArgumentException"
            boolean r5 = r5.equals(r1)
            if (r5 == 0) goto L77
            r3 = 24
            r0.f = r3
            java.lang.String r3 = "1901"
            r0.d = r3
            java.lang.String r3 = "IllegalArgumentException"
            goto L43
        L77:
            java.lang.String r5 = "空指针异常 - NullPointException"
            boolean r5 = r5.equals(r1)
            if (r5 == 0) goto L8a
            r3 = 25
            r0.f = r3
            java.lang.String r3 = "1903"
            r0.d = r3
            java.lang.String r3 = "NullPointException"
            goto L43
        L8a:
            java.lang.String r5 = "url异常 - MalformedURLException"
            boolean r5 = r5.equals(r1)
            if (r5 == 0) goto L9d
            r3 = 26
            r0.f = r3
            java.lang.String r3 = "1803"
            r0.d = r3
            java.lang.String r3 = "MalformedURLException"
            goto L43
        L9d:
            boolean r5 = r9.equals(r1)
            if (r5 == 0) goto Lae
            r3 = 27
            r0.f = r3
            java.lang.String r3 = "1804"
            r0.d = r3
            java.lang.String r3 = "UnknownHostException"
            goto L43
        Lae:
            java.lang.String r5 = "服务器连接失败 - UnknownServiceException"
            boolean r5 = r5.equals(r1)
            if (r5 == 0) goto Lc1
            r3 = 28
            r0.f = r3
            java.lang.String r3 = "1805"
            r0.d = r3
            java.lang.String r3 = "CannotConnectToHostException"
            goto L43
        Lc1:
            java.lang.String r5 = "协议解析错误 - ProtocolException"
            boolean r5 = r5.equals(r1)
            if (r5 == 0) goto Ld5
            r3 = 29
            r0.f = r3
            java.lang.String r3 = "1801"
            r0.d = r3
            java.lang.String r3 = "ProtocolException"
            goto L43
        Ld5:
            boolean r5 = r7.equals(r1)
            java.lang.String r15 = "ConnectionException"
            r3 = 30
            if (r5 == 0) goto Le9
            r0.f = r3
            java.lang.String r3 = "1806"
        Le3:
            r0.d = r3
            r0.e = r15
            goto L17b
        Le9:
            java.lang.String r5 = "服务QPS超限"
            boolean r5 = r5.equalsIgnoreCase(r1)
            if (r5 == 0) goto Lf6
            r0.f = r3
            java.lang.String r3 = "2001"
            goto Le3
        Lf6:
            boolean r3 = r2.equals(r1)
            if (r3 == 0) goto L100
            r3 = 31
            goto L4f
        L100:
            java.lang.String r3 = "key鉴权失败"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L10c
            r3 = 32
            goto L4f
        L10c:
            java.lang.String r3 = "requeust is null"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L117
            r3 = 1
            goto L4f
        L117:
            java.lang.String r3 = "request url is empty"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L122
            r0.f = r8
            goto L17b
        L122:
            java.lang.String r3 = "response is null"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L12d
        L12a:
            r0.f = r13
            goto L17b
        L12d:
            java.lang.String r3 = "thread pool has exception"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L138
            r3 = 4
            goto L4f
        L138:
            java.lang.String r3 = "sdk name is invalid"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L143
            r3 = 5
            goto L4f
        L143:
            java.lang.String r3 = "sdk info is null"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L14e
            r0.f = r14
            goto L17b
        L14e:
            java.lang.String r3 = "sdk packages is null"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L159
            r0.f = r10
            goto L17b
        L159:
            java.lang.String r3 = "线程池为空"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L165
            r3 = 8
            goto L4f
        L165:
            java.lang.String r3 = "获取对象错误"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L171
            r3 = 101(0x65, float:1.42E-43)
            goto L4f
        L171:
            boolean r3 = r6.equals(r1)
            if (r3 == 0) goto L178
            goto L12a
        L178:
            r3 = -1
            goto L4f
        L17b:
            boolean r3 = r4.equals(r1)
            if (r3 == 0) goto L184
            r0.g = r10
            return
        L184:
            boolean r3 = r12.equals(r1)
            if (r3 == 0) goto L18d
            r0.g = r14
            return
        L18d:
            boolean r3 = r11.equals(r1)
            if (r3 == 0) goto L196
            r0.g = r8
            return
        L196:
            boolean r3 = r9.equals(r1)
            if (r3 != 0) goto L1b4
            boolean r3 = r7.equals(r1)
            if (r3 == 0) goto L1a5
            r0.g = r14
            return
        L1a5:
            boolean r2 = r2.equals(r1)
            if (r2 != 0) goto L1b4
            boolean r1 = r6.equals(r1)
            if (r1 == 0) goto L1b4
            r0.g = r13
            return
        L1b4:
            r1 = 9
            r0.g = r1
            return
    }

    public k(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r0.b = r2
            r0.c = r3
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final int g() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    public final int h() {
            r1 = this;
            r0 = 10
            r1.g = r0
            return r0
    }

    public final boolean i() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public final void j() {
            r1 = this;
            r0 = 1
            r1.h = r0
            return
    }
}
