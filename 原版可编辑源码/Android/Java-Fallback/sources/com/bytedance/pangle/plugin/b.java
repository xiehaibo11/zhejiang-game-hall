package com.bytedance.pangle.plugin;

final class b {
    private static final com.bytedance.pangle.h a = null;



    public static class a extends java.io.IOException {
        private a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        a(java.lang.String r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private a(java.lang.String r1, java.lang.Throwable r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        a(java.lang.String r1, java.lang.Throwable r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    static {
            com.bytedance.pangle.h r0 = com.bytedance.pangle.h.a()
            com.bytedance.pangle.plugin.b.a = r0
            return
    }

    static void a(java.io.File r11, java.lang.String r12, int r13, java.lang.StringBuffer r14) {
            java.lang.String r0 = ";"
            java.lang.String r1 = "checkSignature cost:"
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r11 = r11.getAbsolutePath()     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            boolean r11 = com.bytedance.pangle.g.e.a(r11, r12)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            if (r11 == 0) goto L21
            r14.append(r1)
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            r14.append(r11)
            r14.append(r0)
            return
        L21:
            java.lang.RuntimeException r11 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            java.lang.String r4 = "安装包签名校验失败[1]"
            r11.<init>(r4)     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
            throw r11     // Catch: java.lang.Throwable -> L29 java.lang.Exception -> L2b
        L29:
            r11 = move-exception
            goto L4e
        L2b:
            r11 = move-exception
            java.lang.String r4 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L29
            int r5 = com.bytedance.pangle.c.b.a.q     // Catch: java.lang.Throwable -> L29
            r8 = -1
            r10 = 0
            r6 = r12
            r7 = r13
            a(r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L29
            com.bytedance.pangle.h r4 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L29
            r5 = 1100(0x44c, float:1.541E-42)
            r6 = -3
            r7 = r12
            r8 = r13
            r9 = r11
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L29
            com.bytedance.pangle.plugin.b$a r12 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L29
            java.lang.String r13 = r11.getMessage()     // Catch: java.lang.Throwable -> L29
            r4 = 0
            r12.<init>(r13, r11, r4)     // Catch: java.lang.Throwable -> L29
            throw r12     // Catch: java.lang.Throwable -> L29
        L4e:
            r14.append(r1)
            long r12 = java.lang.System.currentTimeMillis()
            long r12 = r12 - r2
            r14.append(r12)
            r14.append(r0)
            throw r11
    }

    private static void a(java.lang.String r4, int r5, java.lang.String r6, int r7, long r8, java.lang.String r10) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "status_code"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = com.bytedance.pangle.log.b.a(r5)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r3, r5)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "plugin_package_name"
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r6)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "version_code"
            java.lang.Integer r6 = java.lang.Integer.valueOf(r7)     // Catch: org.json.JSONException -> L4d
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r6)     // Catch: org.json.JSONException -> L4d
            r0.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "duration"
            java.lang.Long r6 = java.lang.Long.valueOf(r8)     // Catch: org.json.JSONException -> L4d
            int r6 = com.bytedance.pangle.log.b.b(r6)     // Catch: org.json.JSONException -> L4d
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: org.json.JSONException -> L4d
            r2.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            java.lang.String r5 = "message"
            java.lang.String r6 = com.bytedance.pangle.log.b.a(r10)     // Catch: org.json.JSONException -> L4d
            r1.putOpt(r5, r6)     // Catch: org.json.JSONException -> L4d
            goto L51
        L4d:
            r5 = move-exception
            r5.printStackTrace()
        L51:
            com.bytedance.pangle.c.b r5 = com.bytedance.pangle.c.b.a()
            r5.a(r4, r0, r2, r1)
            return
    }

    static void a(java.lang.String r11, int r12, java.util.Map r13, java.lang.StringBuffer r14) {
            java.lang.String r0 = ";"
            java.lang.String r1 = "copySo cost:"
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = com.bytedance.pangle.d.c.b(r11, r12)
            java.lang.String r5 = com.bytedance.pangle.d.c.d(r11, r12)
            java.io.File r6 = new java.io.File     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r6.<init>(r4)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.io.File r4 = new java.io.File     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            com.bytedance.pangle.d.b.a(r6, r4, r11, r13)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r14.append(r1)
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            r14.append(r11)
            r14.append(r0)
            return
        L2c:
            r11 = move-exception
            goto L4f
        L2e:
            r13 = move-exception
            java.lang.String r4 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L2c
            int r5 = com.bytedance.pangle.c.b.a.t     // Catch: java.lang.Throwable -> L2c
            r8 = -1
            r10 = 0
            r6 = r11
            r7 = r12
            a(r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L2c
            com.bytedance.pangle.h r4 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L2c
            r5 = 1100(0x44c, float:1.541E-42)
            r6 = -7
            r7 = r11
            r8 = r12
            r9 = r13
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L2c
            com.bytedance.pangle.plugin.b$a r11 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L2c
            java.lang.String r12 = "安装包动态库拷贝失败"
            r4 = 0
            r11.<init>(r12, r13, r4)     // Catch: java.lang.Throwable -> L2c
            throw r11     // Catch: java.lang.Throwable -> L2c
        L4f:
            r14.append(r1)
            long r12 = java.lang.System.currentTimeMillis()
            long r12 = r12 - r2
            r14.append(r12)
            r14.append(r0)
            throw r11
    }

    static void a(java.lang.String r19, java.lang.String r20, int r21, java.lang.StringBuffer r22) {
            r0 = r22
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            com.bytedance.pangle.res.a.c r4 = new com.bytedance.pangle.res.a.c
            r4.<init>()
            java.io.File r5 = new java.io.File
            r6 = r19
            r5.<init>(r6)
            r6 = 0
            int r4 = r4.a(r5, r6, r3)
            r5 = 100
            if (r4 != r5) goto L23
            java.lang.String r7 = "modifyRes"
            goto L25
        L23:
            java.lang.String r7 = "noModifyRes"
        L25:
            r0.append(r7)
            java.lang.String r7 = " cost:"
            r0.append(r7)
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 - r1
            r0.append(r7)
            java.lang.String r1 = ";"
            r0.append(r1)
            if (r4 == r5) goto L7d
            r0 = 200(0xc8, float:2.8E-43)
            if (r4 != r0) goto L41
            goto L7d
        L41:
            java.lang.String r0 = r3.toString()
            java.lang.String r7 = com.bytedance.pangle.c.b.f
            int r8 = com.bytedance.pangle.c.b.a.x
            r11 = -1
            r9 = r20
            r10 = r21
            r13 = r0
            a(r7, r8, r9, r10, r11, r13)
            com.bytedance.pangle.h r13 = com.bytedance.pangle.plugin.b.a
            r14 = 1100(0x44c, float:1.541E-42)
            r15 = -2
            r18 = 0
            r16 = r20
            r17 = r21
            r13.a(r14, r15, r16, r17, r18)
            com.bytedance.pangle.plugin.b$a r1 = new com.bytedance.pangle.plugin.b$a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "modifyRes failed. result = "
            r2.<init>(r3)
            r2.append(r4)
            java.lang.String r3 = ", errorLog = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0, r6)
            throw r1
        L7d:
            return
    }

    static boolean a(java.io.File r14, java.lang.String r15, int r16) {
            r0 = r14
            r8 = r15
            r9 = r16
            java.lang.String r10 = "Zeus/install_pangle"
            java.lang.StringBuffer r11 = new java.lang.StringBuffer
            r11.<init>()
            java.lang.String r1 = "useOpt;"
            r11.append(r1)
            r12 = 0
            com.bytedance.pangle.h r1 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L7d
            r2 = 1000(0x3e8, float:1.401E-42)
            r3 = 0
            r6 = 0
            r4 = r15
            r5 = r16
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = "PluginInstaller"
            java.lang.String r2 = "install:"
            java.lang.String r3 = java.lang.String.valueOf(r15)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r2 = r2.concat(r3)     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.log.a r13 = com.bytedance.pangle.log.a.a(r10, r1, r2)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = com.bytedance.pangle.c.b.e     // Catch: java.lang.Throwable -> L7d
            int r2 = com.bytedance.pangle.c.b.a.n     // Catch: java.lang.Throwable -> L7d
            r5 = -1
            r7 = 0
            r3 = r15
            r4 = r16
            a(r1, r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r1 = com.bytedance.pangle.d.c.a(r15, r16)     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.util.g.a(r1)     // Catch: java.lang.Throwable -> L7d
            r1 = 2
            com.bytedance.pangle.a.a$a[] r1 = new com.bytedance.pangle.a.a.a[r1]     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.plugin.b$1 r2 = new com.bytedance.pangle.plugin.b$1     // Catch: java.lang.Throwable -> L7d
            r2.<init>(r14, r15, r9, r11)     // Catch: java.lang.Throwable -> L7d
            r1[r12] = r2     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.plugin.b$2 r2 = new com.bytedance.pangle.plugin.b$2     // Catch: java.lang.Throwable -> L7d
            r2.<init>(r14, r15, r9, r11)     // Catch: java.lang.Throwable -> L7d
            r7 = 1
            r1[r7] = r2     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.a.a.a(r1)     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.util.g.a(r14)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r0 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L7d
            int r1 = com.bytedance.pangle.c.b.a.o     // Catch: java.lang.Throwable -> L7d
            long r4 = r13.a()     // Catch: java.lang.Throwable -> L7d
            java.lang.String r6 = r11.toString()     // Catch: java.lang.Throwable -> L7d
            r2 = r15
            r3 = r16
            a(r0, r1, r2, r3, r4, r6)     // Catch: java.lang.Throwable -> L7d
            java.lang.String r0 = "success"
            r13.a(r0)     // Catch: java.lang.Throwable -> L7d
            com.bytedance.pangle.h r0 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L7d
            r1 = 1100(0x44c, float:1.541E-42)
            r2 = 0
            r5 = 0
            r3 = r15
            r4 = r16
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L7d
            return r7
        L7d:
            r0 = move-exception
            r7 = r0
            boolean r0 = r7 instanceof com.bytedance.pangle.plugin.b.a
            java.lang.String r1 = "PluginInstaller "
            if (r0 == 0) goto L9b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r15)
            java.lang.String r1 = " install failed."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r10, r0, r7)
            goto Lcb
        L9b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r1)
            r0.append(r15)
            java.lang.String r1 = " install failed unknown error."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r10, r0, r7)
            java.lang.String r0 = com.bytedance.pangle.c.b.f
            int r1 = com.bytedance.pangle.c.b.a.p
            r4 = -1
            java.lang.String r6 = r11.toString()
            r2 = r15
            r3 = r16
            a(r0, r1, r2, r3, r4, r6)
            com.bytedance.pangle.h r0 = com.bytedance.pangle.plugin.b.a
            r1 = 1100(0x44c, float:1.541E-42)
            r2 = -1
            r3 = r15
            r4 = r16
            r5 = r7
            r0.a(r1, r2, r3, r4, r5)
        Lcb:
            return r12
    }

    static java.util.Map b(java.io.File r0, java.lang.String r1, int r2, java.lang.StringBuffer r3) {
            java.util.Map r0 = f(r0, r1, r2, r3)
            return r0
    }

    static void c(java.io.File r14, java.lang.String r15, int r16, java.lang.StringBuffer r17) {
            r1 = r17
            java.lang.String r0 = "The following permissions are declared in the plugin but not in the host: "
            java.lang.String r2 = ";"
            java.lang.String r3 = "checkPermissions cost:"
            long r4 = java.lang.System.currentTimeMillis()
            r6 = 0
            android.app.Application r7 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.content.pm.PackageManager r7 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.app.Application r8 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r9 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r7 = r7.getPackageInfo(r8, r9)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.app.Application r8 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.content.pm.PackageManager r8 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r10 = r14.getAbsolutePath()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            android.content.pm.PackageInfo r8 = r8.getPackageArchiveInfo(r10, r9)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String[] r7 = r7.requestedPermissions     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.util.List r7 = java.util.Arrays.asList(r7)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String[] r9 = r8.requestedPermissions     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r9 == 0) goto L87
            java.lang.String[] r9 = r8.requestedPermissions     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            int r9 = r9.length     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r9 <= 0) goto L87
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r9.<init>()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String[] r8 = r8.requestedPermissions     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            int r10 = r8.length     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r11 = r6
        L4b:
            if (r11 >= r10) goto L5b
            r12 = r8[r11]     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            boolean r13 = r7.contains(r12)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r13 != 0) goto L58
            r9.add(r12)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
        L58:
            int r11 = r11 + 1
            goto L4b
        L5b:
            boolean r7 = r9.isEmpty()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r7 != 0) goto L87
            java.lang.String r7 = "PluginInstaller"
            java.lang.String r8 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r8 = r0.concat(r8)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            com.bytedance.pangle.log.ZeusLogger.w(r7, r8)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            com.bytedance.pangle.GlobalParam r7 = com.bytedance.pangle.GlobalParam.getInstance()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            boolean r7 = r7.checkPermission()     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            if (r7 != 0) goto L79
            goto L87
        L79:
            com.bytedance.pangle.plugin.b$a r7 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r8 = java.lang.String.valueOf(r9)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            java.lang.String r0 = r0.concat(r8)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            r7.<init>(r0, r6)     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
            throw r7     // Catch: java.lang.Throwable -> L96 java.lang.Exception -> L98
        L87:
            r1.append(r3)
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r4
            r1.append(r6)
            r1.append(r2)
            return
        L96:
            r0 = move-exception
            goto Lba
        L98:
            r0 = move-exception
            java.lang.String r7 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L96
            int r8 = com.bytedance.pangle.c.b.a.r     // Catch: java.lang.Throwable -> L96
            r11 = -1
            r13 = 0
            r9 = r15
            r10 = r16
            a(r7, r8, r9, r10, r11, r13)     // Catch: java.lang.Throwable -> L96
            com.bytedance.pangle.h r8 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L96
            r9 = 1100(0x44c, float:1.541E-42)
            r10 = -4
            r11 = r15
            r12 = r16
            r13 = r0
            r8.a(r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L96
            com.bytedance.pangle.plugin.b$a r7 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L96
            java.lang.String r8 = "安装包权限校验失败"
            r7.<init>(r8, r0, r6)     // Catch: java.lang.Throwable -> L96
            throw r7     // Catch: java.lang.Throwable -> L96
        Lba:
            r1.append(r3)
            long r6 = java.lang.System.currentTimeMillis()
            long r6 = r6 - r4
            r1.append(r6)
            r1.append(r2)
            throw r0
    }

    static java.lang.String d(java.io.File r0, java.lang.String r1, int r2, java.lang.StringBuffer r3) {
            java.lang.String r0 = g(r0, r1, r2, r3)
            return r0
    }

    static void e(java.io.File r21, java.lang.String r22, int r23, java.lang.StringBuffer r24) {
            r3 = r22
            r4 = r23
            r8 = r24
            java.lang.String r1 = ".dex"
            java.lang.String r2 = "classes"
            java.lang.String r9 = ";"
            java.lang.String r10 = "dexOpt cost:"
            java.lang.String r5 = "Zeus/install_pangle"
            long r11 = java.lang.System.currentTimeMillis()
            boolean r0 = com.bytedance.pangle.util.i.b()     // Catch: java.lang.Throwable -> L22d java.lang.Exception -> L22f
            if (r0 == 0) goto L1c5
            boolean r0 = r21.exists()     // Catch: java.lang.Throwable -> L22d java.lang.Exception -> L22f
            if (r0 == 0) goto L1ab
            if (r3 == 0) goto L1ab
            r6 = 0
            java.util.zip.ZipFile r7 = new java.util.zip.ZipFile     // Catch: java.lang.Throwable -> L1a4
            r14 = r21
            r7.<init>(r14)     // Catch: java.lang.Throwable -> L1a4
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L19f
            r6.<init>()     // Catch: java.lang.Throwable -> L19f
            java.lang.String r0 = com.bytedance.pangle.d.c.i(r22, r23)     // Catch: java.lang.Throwable -> L19f
            java.io.File r15 = new java.io.File     // Catch: java.lang.Throwable -> L19f
            r15.<init>(r0)     // Catch: java.lang.Throwable -> L19f
            com.bytedance.pangle.e.g.a(r15)     // Catch: java.lang.Throwable -> L19f
            r13 = 1
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19f
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r16 = ""
            r14 = 1
            if (r13 != r14) goto L49
            r14 = r16
            goto L4d
        L49:
            java.lang.Integer r14 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L19f
        L4d:
            r0.append(r14)     // Catch: java.lang.Throwable -> L19f
            r0.append(r1)     // Catch: java.lang.Throwable -> L19f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19f
            java.util.zip.ZipEntry r14 = r7.getEntry(r0)     // Catch: java.lang.Throwable -> L19f
            if (r14 == 0) goto L146
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19f
            r0.<init>()     // Catch: java.lang.Throwable -> L19f
            r0.append(r2)     // Catch: java.lang.Throwable -> L19f
            r17 = r9
            r9 = 1
            if (r13 != r9) goto L6b
            goto L6f
        L6b:
            java.lang.Integer r16 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L19d
        L6f:
            r9 = r16
            r0.append(r9)     // Catch: java.lang.Throwable -> L19d
            r0.append(r1)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19d
            com.bytedance.pangle.e.g$a r9 = new com.bytedance.pangle.e.g$a     // Catch: java.lang.Throwable -> L19d
            r9.<init>(r15, r0)     // Catch: java.lang.Throwable -> L19d
            r18 = r1
            r1 = 0
            r16 = 0
        L85:
            r0 = 3
            if (r1 >= r0) goto L10e
            if (r16 != 0) goto L10e
            com.bytedance.pangle.e.g.a(r7, r14, r9, r2)     // Catch: java.io.IOException -> L94 java.lang.Throwable -> L19d
            r19 = r2
            r20 = r14
            r16 = 1
            goto Laf
        L94:
            r0 = move-exception
            r19 = r2
            r2 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            r20 = r14
            java.lang.String r14 = "Plugin-MultiDex Failed to extract entry from "
            r0.<init>(r14)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r14 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L19d
            r0.append(r14)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19d
            com.bytedance.pangle.log.ZeusLogger.w(r5, r0, r2)     // Catch: java.lang.Throwable -> L19d
        Laf:
            int r1 = r1 + 1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = "Plugin-MultiDex Extraction "
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L19d
            if (r16 == 0) goto Lbd
            java.lang.String r2 = "succeeded"
            goto Lbf
        Lbd:
            java.lang.String r2 = "failed"
        Lbf:
            r0.append(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = " '"
            r0.append(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L19d
            r0.append(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = "': length "
            r0.append(r2)     // Catch: java.lang.Throwable -> L19d
            r14 = r1
            long r1 = r9.length()     // Catch: java.lang.Throwable -> L19d
            r0.append(r1)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19d
            com.bytedance.pangle.log.ZeusLogger.i(r5, r0)     // Catch: java.lang.Throwable -> L19d
            if (r16 != 0) goto L107
            r9.delete()     // Catch: java.lang.Throwable -> L19d
            boolean r0 = r9.exists()     // Catch: java.lang.Throwable -> L19d
            if (r0 == 0) goto L107
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            java.lang.String r1 = "Plugin-MultiDex Failed to delete corrupted secondary dex '"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r1 = r9.getPath()     // Catch: java.lang.Throwable -> L19d
            r0.append(r1)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r1 = "'"
            r0.append(r1)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19d
            com.bytedance.pangle.log.ZeusLogger.w(r5, r0)     // Catch: java.lang.Throwable -> L19d
        L107:
            r1 = r14
            r2 = r19
            r14 = r20
            goto L85
        L10e:
            r19 = r2
            if (r16 == 0) goto L121
            r6.add(r9)     // Catch: java.lang.Throwable -> L19d
            int r13 = r13 + 1
            r14 = r21
            r9 = r17
            r1 = r18
            r2 = r19
            goto L3c
        L121:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L19d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = "Could not create zip file "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L19d
            r1.append(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = " for secondary dex ("
            r1.append(r2)     // Catch: java.lang.Throwable -> L19d
            r1.append(r13)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L19d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L19d
            throw r0     // Catch: java.lang.Throwable -> L19d
        L146:
            r17 = r9
            r21.getName()     // Catch: java.lang.Throwable -> L19d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            r0.<init>()     // Catch: java.lang.Throwable -> L19d
            r0.append(r3)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r1 = "-"
            r0.append(r1)     // Catch: java.lang.Throwable -> L19d
            r0.append(r4)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L19d
            android.content.SharedPreferences r1 = com.bytedance.pangle.e.g.a()     // Catch: java.lang.Throwable -> L19d
            android.content.SharedPreferences$Editor r1 = r1.edit()     // Catch: java.lang.Throwable -> L19d
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L19d
            r2.<init>()     // Catch: java.lang.Throwable -> L19d
            r2.append(r0)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = ".dex.number"
            r2.append(r0)     // Catch: java.lang.Throwable -> L19d
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L19d
            int r2 = r6.size()     // Catch: java.lang.Throwable -> L19d
            r1.putInt(r0, r2)     // Catch: java.lang.Throwable -> L19d
            r1.commit()     // Catch: java.lang.Throwable -> L19d
            com.bytedance.pangle.util.g.a(r7)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences r0 = com.bytedance.pangle.e.b.a(r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences$Editor r0 = r0.putInt(r3, r4)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r0.apply()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            com.bytedance.pangle.e.f.a()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            goto L214
        L19d:
            r0 = move-exception
            goto L1a2
        L19f:
            r0 = move-exception
            r17 = r9
        L1a2:
            r6 = r7
            goto L1a7
        L1a4:
            r0 = move-exception
            r17 = r9
        L1a7:
            com.bytedance.pangle.util.g.a(r6)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            throw r0     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
        L1ab:
            r17 = r9
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r2 = "Could not check apk info "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r2 = r21.getAbsolutePath()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r1.append(r2)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            throw r0     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
        L1c5:
            r17 = r9
            boolean r0 = com.bytedance.pangle.util.i.d()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            if (r0 != 0) goto L1fe
            boolean r0 = com.bytedance.pangle.util.i.f()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            if (r0 == 0) goto L1d4
            goto L1fe
        L1d4:
            boolean r0 = com.bytedance.pangle.util.i.e()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            if (r0 == 0) goto L214
            java.lang.String r0 = com.bytedance.pangle.d.c.c(r22, r23)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r1 = com.bytedance.pangle.d.c.b(r22, r23)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r2.<init>()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r2.append(r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r0 = java.io.File.separator     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r2.append(r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r0 = com.bytedance.pangle.e.b.a(r1)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r2.append(r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            com.bytedance.pangle.e.b.a(r1, r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            goto L214
        L1fe:
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences r0 = com.bytedance.pangle.e.b.a(r0)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            android.content.SharedPreferences$Editor r0 = r0.putInt(r3, r4)     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            r0.apply()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
            com.bytedance.pangle.e.f.a()     // Catch: java.lang.Throwable -> L225 java.lang.Exception -> L229
        L214:
            r8.append(r10)
            long r0 = java.lang.System.currentTimeMillis()
            long r0 = r0 - r11
            r8.append(r0)
            r9 = r17
            r8.append(r9)
            return
        L225:
            r0 = move-exception
            r9 = r17
            goto L247
        L229:
            r0 = move-exception
            r9 = r17
            goto L230
        L22d:
            r0 = move-exception
            goto L247
        L22f:
            r0 = move-exception
        L230:
            java.lang.String r1 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L22d
            int r2 = com.bytedance.pangle.c.b.a.v     // Catch: java.lang.Throwable -> L22d
            r5 = -1
            r7 = 0
            r3 = r22
            r4 = r23
            a(r1, r2, r3, r4, r5, r7)     // Catch: java.lang.Throwable -> L22d
            com.bytedance.pangle.plugin.b$a r1 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L22d
            java.lang.String r2 = "dexOpt失败"
            r3 = 0
            r1.<init>(r2, r0, r3)     // Catch: java.lang.Throwable -> L22d
            throw r1     // Catch: java.lang.Throwable -> L22d
        L247:
            r8.append(r10)
            long r1 = java.lang.System.currentTimeMillis()
            long r1 = r1 - r11
            r8.append(r1)
            r8.append(r9)
            throw r0
    }

    private static java.util.Map<java.lang.String, java.util.List<java.util.zip.ZipEntry>> f(java.io.File r15, java.lang.String r16, int r17, java.lang.StringBuffer r18) {
            r1 = r18
            java.lang.String r2 = "插件包包含so不符合宿主ABI类型"
            java.lang.String r3 = ";"
            java.lang.String r4 = "checkMatchHostAbi cost:"
            com.bytedance.pangle.GlobalParam r0 = com.bytedance.pangle.GlobalParam.getInstance()
            boolean r0 = r0.checkMatchHostAbi()
            if (r0 == 0) goto L71
            long r5 = java.lang.System.currentTimeMillis()
            r7 = 0
            com.bytedance.pangle.util.e r0 = com.bytedance.pangle.d.b.a(r15)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            T r8 = r0.a     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.lang.Boolean r8 = (java.lang.Boolean) r8     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            boolean r8 = r8.booleanValue()     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            U r0 = r0.b     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            if (r8 == 0) goto L38
            r1.append(r4)
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 - r5
            r1.append(r7)
            r1.append(r3)
            return r0
        L38:
            com.bytedance.pangle.plugin.b$a r0 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            r0.<init>(r2, r7)     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
            throw r0     // Catch: java.lang.Throwable -> L3e java.lang.Exception -> L40
        L3e:
            r0 = move-exception
            goto L62
        L40:
            r0 = move-exception
            java.lang.String r8 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L3e
            int r9 = com.bytedance.pangle.c.b.a.w     // Catch: java.lang.Throwable -> L3e
            r12 = -1
            r14 = 0
            r10 = r16
            r11 = r17
            a(r8, r9, r10, r11, r12, r14)     // Catch: java.lang.Throwable -> L3e
            com.bytedance.pangle.h r8 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L3e
            r9 = 1100(0x44c, float:1.541E-42)
            r10 = -5
            r11 = r16
            r12 = r17
            r13 = r0
            r8.a(r9, r10, r11, r12, r13)     // Catch: java.lang.Throwable -> L3e
            com.bytedance.pangle.plugin.b$a r8 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L3e
            r8.<init>(r2, r0, r7)     // Catch: java.lang.Throwable -> L3e
            throw r8     // Catch: java.lang.Throwable -> L3e
        L62:
            r1.append(r4)
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 - r5
            r1.append(r7)
            r1.append(r3)
            throw r0
        L71:
            r0 = 0
            return r0
    }

    private static java.lang.String g(java.io.File r11, java.lang.String r12, int r13, java.lang.StringBuffer r14) {
            java.lang.String r0 = ";"
            java.lang.String r1 = "copyApk cost:"
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.String r4 = com.bytedance.pangle.d.c.b(r12, r13)
            java.lang.String r11 = r11.getAbsolutePath()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            com.bytedance.pangle.util.h.a(r11, r4)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            r14.append(r1)
            long r11 = java.lang.System.currentTimeMillis()
            long r11 = r11 - r2
            r14.append(r11)
            r14.append(r0)
            return r4
        L22:
            r11 = move-exception
            goto L45
        L24:
            r11 = move-exception
            java.lang.String r4 = com.bytedance.pangle.c.b.f     // Catch: java.lang.Throwable -> L22
            int r5 = com.bytedance.pangle.c.b.a.s     // Catch: java.lang.Throwable -> L22
            r8 = -1
            r10 = 0
            r6 = r12
            r7 = r13
            a(r4, r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> L22
            com.bytedance.pangle.h r4 = com.bytedance.pangle.plugin.b.a     // Catch: java.lang.Throwable -> L22
            r5 = 1100(0x44c, float:1.541E-42)
            r6 = -6
            r7 = r12
            r8 = r13
            r9 = r11
            r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L22
            com.bytedance.pangle.plugin.b$a r12 = new com.bytedance.pangle.plugin.b$a     // Catch: java.lang.Throwable -> L22
            java.lang.String r13 = "安装包拷贝失败"
            r4 = 0
            r12.<init>(r13, r11, r4)     // Catch: java.lang.Throwable -> L22
            throw r12     // Catch: java.lang.Throwable -> L22
        L45:
            r14.append(r1)
            long r12 = java.lang.System.currentTimeMillis()
            long r12 = r12 - r2
            r14.append(r12)
            r14.append(r0)
            throw r11
    }
}
