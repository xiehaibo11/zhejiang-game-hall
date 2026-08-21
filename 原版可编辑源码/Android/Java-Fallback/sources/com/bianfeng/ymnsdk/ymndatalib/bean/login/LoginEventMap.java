package com.bianfeng.ymnsdk.ymndatalib.bean.login;

public class LoginEventMap {
    public static volatile com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap loginEventMap;
    public java.lang.String loginAsynServerName;
    public java.lang.String loginCheckServerName;
    public java.lang.String loginCustomServerName;
    public java.lang.String loginOldServerName;
    public long startCallSdkTime;
    public long startCheckRequestTime;
    public long startCustomTime;
    public long startOldRequestTime;
    public long startRequestTime;

    public LoginEventMap() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.startCallSdkTime = r0
            r2.startRequestTime = r0
            r2.startOldRequestTime = r0
            r2.startCheckRequestTime = r0
            r2.startCustomTime = r0
            java.lang.String r0 = ""
            r2.loginAsynServerName = r0
            r2.loginOldServerName = r0
            r2.loginCheckServerName = r0
            r2.loginCustomServerName = r0
            return
    }

    public static com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.loginEventMap
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap> r0 = com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r1 = com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.loginEventMap     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.loginEventMap = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.login.LoginEventMap.loginEventMap
            return r0
    }

    private void onLoginDataEvent(int r2, java.lang.String r3, java.lang.Long r4, java.lang.String r5, java.lang.String r6, int r7) {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r0 = new com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils
            r0.<init>(r2, r3, r4)
            com.bianfeng.ymnsdk.ymndatalib.b r2 = new com.bianfeng.ymnsdk.ymndatalib.b
            r2.<init>(r0, r5, r6)
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r3 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            java.lang.String r4 = "login"
            r3.<init>(r2, r7, r4)
            java.lang.String r2 = r3.toString()
            com.bianfeng.ymnsdk.ymndatalib.f r3 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            r3.a(r2)
            return
    }

    private void onLoginDataEvent(int r7, java.lang.String r8, java.lang.Long r9, java.lang.String r10, java.lang.String r11, int r12, java.lang.String r13, java.lang.String r14) {
            r6 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1 = new com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils
            r1.<init>(r7, r8, r9)
            com.bianfeng.ymnsdk.ymndatalib.b r7 = new com.bianfeng.ymnsdk.ymndatalib.b
            r0 = r7
            r2 = r10
            r3 = r11
            r4 = r13
            r5 = r14
            r0.<init>(r1, r2, r3, r4, r5)
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r8 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            java.lang.String r9 = "login"
            r8.<init>(r7, r12, r9)
            java.lang.String r7 = r8.toString()
            com.bianfeng.ymnsdk.ymndatalib.f r8 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            r8.a(r7)
            return
    }

    public void loginCustomCallEvent(java.lang.Integer r10, java.lang.String r11, java.lang.String r12) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r9.startCustomTime = r0
            r9.loginCustomServerName = r11
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            int r8 = r10.intValue()
            r3 = 0
            java.lang.String r4 = ""
            r2 = r9
            r6 = r12
            r7 = r11
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8)
            return
    }

    public void loginCustomReturnEvent(java.lang.Integer r8, java.lang.Integer r9, java.lang.String r10) {
            r7 = this;
            int r1 = r9.intValue()
            long r2 = r7.startCustomTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r7.loginCustomServerName
            int r6 = r8.intValue()
            java.lang.String r4 = ""
            r0 = r7
            r2 = r10
            r0.onLoginDataEvent(r1, r2, r3, r4, r5, r6)
            return
    }

    public void loginFinishEvent(java.lang.Integer r8, java.lang.String r9) {
            r7 = this;
            int r1 = r8.intValue()
            long r2 = r7.startCallSdkTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r4 = ""
            java.lang.String r5 = ""
            r6 = 12000(0x2ee0, float:1.6816E-41)
            r0 = r7
            r2 = r9
            r0.onLoginDataEvent(r1, r2, r3, r4, r5, r6)
            return
    }

    public void loginNewRequestEvent(java.lang.String r10) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r9.startRequestTime = r0
            r9.loginAsynServerName = r10
            java.lang.String r0 = "触发loginNewRequestEvent埋点"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            long r0 = r9.startRequestTime
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r8 = 10002(0x2712, float:1.4016E-41)
            r2 = r9
            r7 = r10
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8)
            return
    }

    public void loginNewResponseEvent(java.lang.Integer r8, java.lang.String r9) {
            r7 = this;
            int r1 = r8.intValue()
            long r2 = r7.startRequestTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r7.loginAsynServerName
            java.lang.String r4 = ""
            r6 = 10003(0x2713, float:1.4017E-41)
            r0 = r7
            r2 = r9
            r0.onLoginDataEvent(r1, r2, r3, r4, r5, r6)
            return
    }

    public void loginOldRequestCheckEvent(java.lang.String r10) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r9.startCheckRequestTime = r0
            r9.loginCheckServerName = r10
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r8 = 10022(0x2726, float:1.4044E-41)
            r2 = r9
            r7 = r10
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8)
            return
    }

    public void loginOldRequestEvent(java.lang.String r10) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r9.startOldRequestTime = r0
            r9.loginOldServerName = r10
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            r8 = 10012(0x271c, float:1.403E-41)
            r2 = r9
            r7 = r10
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8)
            return
    }

    public void loginOldResponseCheckEvent(java.lang.Integer r8, java.lang.String r9) {
            r7 = this;
            int r1 = r8.intValue()
            long r2 = r7.startCheckRequestTime
            java.lang.Long r3 = java.lang.Long.valueOf(r2)
            java.lang.String r5 = r7.loginCheckServerName
            java.lang.String r4 = ""
            r6 = 10023(0x2727, float:1.4045E-41)
            r0 = r7
            r2 = r9
            r0.onLoginDataEvent(r1, r2, r3, r4, r5, r6)
            return
    }

    public void loginOldResponseEvent(int r12, java.lang.String r13, java.lang.String r14, java.lang.String r15) {
            r11 = this;
            long r0 = r11.startOldRequestTime
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            java.lang.String r7 = r11.loginOldServerName
            java.lang.String r6 = ""
            r8 = 10013(0x271d, float:1.4031E-41)
            r2 = r11
            r3 = r12
            r4 = r13
            r9 = r14
            r10 = r15
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    public void loginSdkReturnEvent(java.lang.Integer r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "触发 loginSdkReturnEvent 埋点"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            int r2 = r9.intValue()
            long r0 = r8.startCallSdkTime
            java.lang.Long r4 = java.lang.Long.valueOf(r0)
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            r7 = 10001(0x2711, float:1.4014E-41)
            r1 = r8
            r3 = r10
            r1.onLoginDataEvent(r2, r3, r4, r5, r6, r7)
            return
    }

    public void loginStartEvent() {
            r9 = this;
            java.lang.String r0 = "触发loginStartEvent埋点"
            com.bianfeng.ymnsdk.ymndatalib.utils.YmnDatalibLogger.i(r0)
            com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils r0 = com.bianfeng.ymnsdk.ymndatalib.utils.TraceUtils.getInstance()
            r0.getStartLoginTrace()
            long r0 = java.lang.System.currentTimeMillis()
            r9.startCallSdkTime = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            r8 = 10000(0x2710, float:1.4013E-41)
            r2 = r9
            r2.onLoginDataEvent(r3, r4, r5, r6, r7, r8)
            return
    }
}
