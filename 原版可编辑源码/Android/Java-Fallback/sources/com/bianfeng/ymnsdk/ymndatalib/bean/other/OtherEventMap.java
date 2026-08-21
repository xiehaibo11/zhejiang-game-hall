package com.bianfeng.ymnsdk.ymndatalib.bean.other;

public class OtherEventMap {
    public static final java.lang.String key = "ymn_app_install";
    public static volatile com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap otherEventMap;

    public OtherEventMap() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap getInstance() {
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.otherEventMap
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap> r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.class
            monitor-enter(r0)
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r1 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.otherEventMap     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.otherEventMap = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap r0 = com.bianfeng.ymnsdk.ymndatalib.bean.other.OtherEventMap.otherEventMap
            return r0
    }

    public void appInstall() {
            r5 = this;
            java.lang.String r0 = "ymn_app_install"
            boolean r1 = com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.getBoolean(r0)
            if (r1 != 0) goto L27
            r1 = 1
            com.bianfeng.ymnsdk.utilslib.cache.SharedPreferencesUtils.put(r0, r1)     // Catch: java.lang.Exception -> L26
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()     // Catch: java.lang.Exception -> L26
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent     // Catch: java.lang.Exception -> L26
            com.bianfeng.ymnsdk.ymndatalib.c r2 = new com.bianfeng.ymnsdk.ymndatalib.c     // Catch: java.lang.Exception -> L26
            r2.<init>()     // Catch: java.lang.Exception -> L26
            r3 = 5100(0x13ec, float:7.147E-42)
            java.lang.String r4 = "app_install"
            r1.<init>(r2, r3, r4)     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L26
            r0.a(r1)     // Catch: java.lang.Exception -> L26
            goto L27
        L26:
            r0 = move-exception
        L27:
            return
    }

    public void appOnDestroy() {
            r5 = this;
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            com.bianfeng.ymnsdk.ymndatalib.c r2 = new com.bianfeng.ymnsdk.ymndatalib.c
            r2.<init>()
            r3 = 5203(0x1453, float:7.291E-42)
            java.lang.String r4 = "app_destroy"
            r1.<init>(r2, r3, r4)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            return
    }

    public void appOnPaues() {
            r5 = this;
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            com.bianfeng.ymnsdk.ymndatalib.c r2 = new com.bianfeng.ymnsdk.ymndatalib.c
            r2.<init>()
            r3 = 5202(0x1452, float:7.29E-42)
            java.lang.String r4 = "app_paues"
            r1.<init>(r2, r3, r4)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            return
    }

    public void appOnResume() {
            r5 = this;
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            com.bianfeng.ymnsdk.ymndatalib.c r2 = new com.bianfeng.ymnsdk.ymndatalib.c
            r2.<init>()
            r3 = 5201(0x1451, float:7.288E-42)
            java.lang.String r4 = "app_resume"
            r1.<init>(r2, r3, r4)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            return
    }

    public void appStart() {
            r4 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.base.InitEvent r0 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.InitEvent
            com.bianfeng.ymnsdk.ymndatalib.c r1 = new com.bianfeng.ymnsdk.ymndatalib.c
            r1.<init>()
            r2 = 5200(0x1450, float:7.287E-42)
            java.lang.String r3 = "app_launch"
            r0.<init>(r1, r2, r3)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.f r1 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            r1.a(r0)
            return
    }

    public void appStart(android.content.Context r5) {
            r4 = this;
            com.bianfeng.ymnsdk.ymndatalib.bean.base.InitEvent r0 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.InitEvent
            com.bianfeng.ymnsdk.ymndatalib.c r1 = new com.bianfeng.ymnsdk.ymndatalib.c
            r1.<init>()
            r2 = 5200(0x1450, float:7.287E-42)
            java.lang.String r3 = "app_launch"
            r0.<init>(r1, r2, r3, r5)
            java.lang.String r5 = r0.toString()
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            r0.a(r5)
            return
    }

    public void initSdkReturn(int r4, java.lang.String r5) {
            r3 = this;
            com.bianfeng.ymnsdk.ymndatalib.f r0 = com.bianfeng.ymnsdk.ymndatalib.f.a()
            com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent r1 = new com.bianfeng.ymnsdk.ymndatalib.bean.base.BaseEvent
            com.bianfeng.ymnsdk.ymndatalib.a r2 = new com.bianfeng.ymnsdk.ymndatalib.a
            r2.<init>(r4, r5)
            r4 = 12001(0x2ee1, float:1.6817E-41)
            java.lang.String r5 = "init_sdk_return"
            r1.<init>(r2, r4, r5)
            java.lang.String r4 = r1.toString()
            r0.a(r4)
            return
    }

    public void postPermissionEvent(android.content.Context r1) {
            r0 = this;
            return
    }
}
