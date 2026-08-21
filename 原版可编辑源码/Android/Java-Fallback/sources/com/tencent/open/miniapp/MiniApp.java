package com.tencent.open.miniapp;

public class MiniApp extends com.tencent.connect.common.BaseApi {
    public static final int MINIAPP_CONTEXT_NULL = -6;
    public static final int MINIAPP_ID_EMPTY = -1;
    public static final int MINIAPP_ID_NOT_DIGIT = -4;
    public static final int MINIAPP_SHOULD_DOWNLOAD = -2;
    public static final java.lang.String MINIAPP_SRC_ID = "21";
    public static final int MINIAPP_SRC_ID_NOT_DIGIT = -3;
    public static final int MINIAPP_SUCCESS = 0;
    public static final java.lang.String MINIAPP_TYPE_NORMAL = "mini_program_or_game";
    public static final int MINIAPP_UNKNOWN_TYPE = -5;
    public static final java.lang.String MINIAPP_VERSION_DEVELOP = "develop";
    public static final java.lang.String MINIAPP_VERSION_RELEASE = "release";
    public static final java.lang.String MINIAPP_VERSION_TRIAL = "trial";
    public static final int MINIAPP_VERSION_WRONG = -7;
    public static final java.util.List<java.lang.String> OPEN_CONNECT_DEMO_MINI_APP_VERSIONS = null;

    static {
            java.lang.String r0 = "develop"
            java.lang.String r1 = "trial"
            java.lang.String r2 = "release"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            java.util.List r0 = java.util.Arrays.asList(r0)
            com.tencent.open.miniapp.MiniApp.OPEN_CONNECT_DEMO_MINI_APP_VERSIONS = r0
            return
    }

    public MiniApp(android.content.Context r1, com.tencent.connect.auth.QQToken r2) {
            r0 = this;
            r0.<init>(r2)
            return
    }

    public MiniApp(android.content.Context r1, com.tencent.connect.auth.c r2, com.tencent.connect.auth.QQToken r3) {
            r0 = this;
            r0.<init>(r2, r3)
            return
    }

    public MiniApp(com.tencent.connect.auth.QQToken r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public int startMiniApp(android.app.Activity r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19) {
            r13 = this;
            r1 = r13
            r0 = r14
            r2 = r15
            r3 = r16
            java.lang.String r8 = "openSDK_LOG.MiniApp"
            r4 = 0
            boolean r4 = com.tencent.connect.a.a(r8, r4)
            r5 = -5
            if (r4 == 0) goto L10
            return r5
        L10:
            if (r0 != 0) goto L19
            java.lang.String r0 = "Result is MINIAPP_CONTEXT_NULL : -6"
            com.tencent.open.log.SLog.i(r8, r0)
            r0 = -6
            return r0
        L19:
            java.lang.String r4 = "mini_program_or_game"
            boolean r4 = r4.equals(r15)
            if (r4 != 0) goto L27
            java.lang.String r0 = "Result is MINIAPP_UNKNOWN_TYPE : -5"
            com.tencent.open.log.SLog.i(r8, r0)
            return r5
        L27:
            boolean r4 = android.text.TextUtils.isEmpty(r16)
            if (r4 == 0) goto L34
            java.lang.String r0 = "Result is MINIAPP_ID_EMPTY : -1"
            com.tencent.open.log.SLog.i(r8, r0)
            r0 = -1
            return r0
        L34:
            r4 = 0
            r5 = 0
        L36:
            int r6 = r16.length()
            if (r5 >= r6) goto L50
            char r6 = r3.charAt(r5)
            boolean r6 = java.lang.Character.isDigit(r6)
            if (r6 != 0) goto L4d
            java.lang.String r0 = "Result is MINIAPP_ID_NOT_DIGIT : -4"
            com.tencent.open.log.SLog.i(r8, r0)
            r0 = -4
            return r0
        L4d:
            int r5 = r5 + 1
            goto L36
        L50:
            java.lang.String r5 = ""
            if (r18 != 0) goto L56
            r6 = r5
            goto L58
        L56:
            r6 = r18
        L58:
            java.util.List<java.lang.String> r7 = com.tencent.open.miniapp.MiniApp.OPEN_CONNECT_DEMO_MINI_APP_VERSIONS
            r9 = r19
            boolean r7 = r7.contains(r9)
            if (r7 != 0) goto L69
            java.lang.String r0 = "Result is MINIAPP_VERSION_WRONG : -7"
            com.tencent.open.log.SLog.i(r8, r0)
            r0 = -7
            return r0
        L69:
            boolean r7 = com.tencent.open.utils.m.e(r14)
            r10 = -2
            java.lang.String r11 = "Show download dialog exception:"
            if (r7 == 0) goto L10d
            android.content.Intent r7 = new android.content.Intent
            java.lang.String r12 = "android.intent.action.VIEW"
            r7.<init>(r12)
            java.lang.String r12 = "com.tencent.mobileqq"
            r7.setPackage(r12)
            r12 = 8
            java.lang.Object[] r12 = new java.lang.Object[r12]
            r12[r4] = r2
            r2 = 1
            r12[r2] = r3
            r2 = 2
            java.lang.String r3 = com.tencent.open.utils.k.a(r14)
            java.lang.String r3 = com.tencent.open.utils.m.k(r3)
            r12[r2] = r3
            r2 = 3
            com.tencent.connect.auth.QQToken r3 = r1.c
            java.lang.String r3 = r3.getAppId()
            java.lang.String r3 = com.tencent.open.utils.m.k(r3)
            r12[r2] = r3
            r2 = 4
            r12[r2] = r17
            r2 = 5
            java.lang.String r3 = com.tencent.open.utils.m.k(r6)
            r12[r2] = r3
            r2 = 6
            java.lang.String r3 = com.tencent.open.utils.m.k(r19)
            r12[r2] = r3
            r2 = 7
            com.tencent.connect.auth.QQToken r3 = r1.c
            java.lang.String r3 = r3.getOpenId()
            java.lang.String r3 = com.tencent.open.utils.m.k(r3)
            r12[r2] = r3
            java.lang.String r2 = "mqqapi://connect_miniapp/launch?app_type=%1$s&mini_app_id=%2$s&version=1&src_type=app&app_name=%3$s&app_id=%4$s&src_id=%5$s&mini_app_path=%6$s&mini_app_type=%7$s&open_id=%8$s"
            java.lang.String r2 = java.lang.String.format(r2, r12)
            android.net.Uri r2 = android.net.Uri.parse(r2)
            r7.setData(r2)
            java.lang.String r2 = r14.getPackageName()
            java.lang.String r3 = "pkg_name"
            r7.putExtra(r3, r2)
            r14.startActivity(r7)     // Catch: android.content.ActivityNotFoundException -> Ldc
            java.lang.String r0 = "Result is MINIAPP_SUCCESS : 0"
            com.tencent.open.log.SLog.i(r8, r0)
            return r4
        Ldc:
            com.tencent.open.TDialog r9 = new com.tencent.open.TDialog     // Catch: java.lang.RuntimeException -> Lf0
            java.lang.String r4 = ""
            java.lang.String r5 = r13.a(r5)     // Catch: java.lang.RuntimeException -> Lf0
            r6 = 0
            com.tencent.connect.auth.QQToken r7 = r1.c     // Catch: java.lang.RuntimeException -> Lf0
            r2 = r9
            r3 = r14
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.RuntimeException -> Lf0
            r9.show()     // Catch: java.lang.RuntimeException -> Lf0
            goto L107
        Lf0:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.tencent.open.log.SLog.e(r8, r0)
        L107:
            java.lang.String r0 = "QQ is not installed, Result is MINIAPP_SHOULD_DOWNLOAD : -2"
            com.tencent.open.log.SLog.i(r8, r0)
            return r10
        L10d:
            com.tencent.open.TDialog r9 = new com.tencent.open.TDialog     // Catch: java.lang.RuntimeException -> L121
            java.lang.String r4 = ""
            java.lang.String r5 = r13.a(r5)     // Catch: java.lang.RuntimeException -> L121
            r6 = 0
            com.tencent.connect.auth.QQToken r7 = r1.c     // Catch: java.lang.RuntimeException -> L121
            r2 = r9
            r3 = r14
            r2.<init>(r3, r4, r5, r6, r7)     // Catch: java.lang.RuntimeException -> L121
            r9.show()     // Catch: java.lang.RuntimeException -> L121
            goto L138
        L121:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            com.tencent.open.log.SLog.e(r8, r0)
        L138:
            java.lang.String r0 = "Result is MINIAPP_SHOULD_DOWNLOAD : -2"
            com.tencent.open.log.SLog.i(r8, r0)
            return r10
    }
}
