package com.bykv.vk.openvk.live;

public final class df extends com.bykv.vk.openvk.downloadnew.rg implements com.bykv.vk.openvk.api.proto.Bridge, java.io.Serializable {
    private static final java.util.concurrent.atomic.AtomicBoolean c = null;
    private static final com.bykv.vk.openvk.live.df df = null;
    private static final java.util.concurrent.atomic.AtomicBoolean pp = null;
    private static final java.util.concurrent.atomic.AtomicBoolean pt = null;
    private static final java.util.concurrent.atomic.AtomicBoolean q = null;
    public static com.bykv.vk.openvk.live.df.rg rg;
    private com.bykv.vk.openvk.live.core.ITTLiveConfig fw;
    private com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth rz;
    private org.json.JSONObject ux;





    private static final class rg implements com.bykv.vk.openvk.TTAdEvent {
        private com.bykv.vk.openvk.api.proto.EventListener df;
        private com.bykv.vk.openvk.TTAdEvent rg;

        private rg(com.bykv.vk.openvk.TTAdEvent r1) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                return
        }

        rg(com.bykv.vk.openvk.TTAdEvent r1, com.bykv.vk.openvk.live.df.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private rg(com.bykv.vk.openvk.api.proto.EventListener r1) {
                r0 = this;
                r0.<init>()
                r0.df = r1
                return
        }

        rg(com.bykv.vk.openvk.api.proto.EventListener r1, com.bykv.vk.openvk.live.df.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onEvent(int r4, android.os.Bundle r5) {
                r3 = this;
                com.bykv.vk.openvk.TTAdEvent r0 = r3.rg
                if (r0 == 0) goto L7
                r0.onEvent(r4, r5)
            L7:
                com.bykv.vk.openvk.api.proto.EventListener r0 = r3.df
                if (r0 == 0) goto L32
                com.bykv.vk.openvk.api.q r0 = com.bykv.vk.openvk.api.q.rg()
                r1 = 0
                com.bykv.vk.openvk.api.q r5 = r0.rg(r1, r5)
                com.bykv.vk.openvk.api.proto.ValueSet r5 = r5.df()
                com.bykv.vk.openvk.api.proto.EventListener r0 = r3.df
                com.bykv.vk.openvk.api.df r2 = com.bykv.vk.openvk.api.df.rg()
                com.bykv.vk.openvk.api.df r1 = r2.rg(r1)
                r2 = 1
                com.bykv.vk.openvk.api.df r1 = r1.rg(r2)
                com.bykv.vk.openvk.api.df r5 = r1.rg(r5)
                com.bykv.vk.openvk.api.proto.Result r5 = r5.df()
                r0.onEvent(r4, r5)
            L32:
                return
        }
    }

    static {
            com.bykv.vk.openvk.live.df r0 = new com.bykv.vk.openvk.live.df
            r0.<init>()
            com.bykv.vk.openvk.live.df.df = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.bykv.vk.openvk.live.df.q = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.bykv.vk.openvk.live.df.pt = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.bykv.vk.openvk.live.df.pp = r0
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>(r1)
            com.bykv.vk.openvk.live.df.c = r0
            r0 = 0
            com.bykv.vk.openvk.live.df.rg = r0
            return
    }

    private df() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.fw = r0
            r1.ux = r0
            return
    }

    private java.lang.Boolean c() {
            r4 = this;
            r0 = 0
            com.bytedance.android.live.base.api.IOuterLiveRoomService r1 = com.bytedance.android.openliveplugin.LivePluginHelper.getLiveRoomService()     // Catch: java.lang.Throwable -> L16
            java.lang.String r2 = "hasAuthenticated"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L16
            java.lang.Object r1 = r1.callExpandMethod(r2, r3)     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto L21
            boolean r2 = r1 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> L16
            if (r2 == 0) goto L21
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L16
            return r1
        L16:
            r1 = move-exception
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r0] = r1
            java.lang.String r1 = "TTLiveSDkBridge"
            com.bykv.vk.openvk.api.rg.rg(r1, r2)
        L21:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean df() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.pt
            return r0
    }

    static void df(com.bykv.vk.openvk.live.df r0) {
            r0.ux()
            return
    }

    private void fw() {
            r4 = this;
            r0 = 0
            com.bytedance.android.live.base.api.IOuterLiveRoomService r1 = com.bytedance.android.openliveplugin.LivePluginHelper.getLiveRoomService()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r2 = "warmingUpBeforeEnter"
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> Ld
            r1.callExpandMethod(r2, r3)     // Catch: java.lang.Throwable -> Ld
            goto L18
        Ld:
            r1 = move-exception
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r0] = r1
            java.lang.String r0 = "TTLiveSDkBridge"
            com.bykv.vk.openvk.api.rg.rg(r0, r2)
        L18:
            return
    }

    private android.content.Context getContext(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.content.Context
            if (r0 == 0) goto L7
            android.content.Context r2 = (android.content.Context) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    private void pp() {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "hasLiveSDKInited："
            r0.append(r1)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.live.df.c
            boolean r1 = r1.get()
            r0.append(r1)
            java.lang.String r1 = ", hasLiveInstalled："
            r0.append(r1)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.live.df.pt
            boolean r1 = r1.get()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TTLiveSDkBridge"
            com.bykv.vk.openvk.api.rg.q(r1, r0)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r8.fw
            r2 = 0
            if (r0 == 0) goto L55
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "GeneralAppId："
            r0.append(r3)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r3 = r8.fw
            java.lang.String r3 = r3.getGeneralAppId()
            r0.append(r3)
            java.lang.String r3 = "，isValid："
            r0.append(r3)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r3 = r8.fw
            boolean r3 = r3.isValid()
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            goto L56
        L55:
            r0 = r2
        L56:
            com.bykv.vk.openvk.api.rg.q(r1, r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.c
            boolean r0 = r0.get()
            if (r0 == 0) goto L62
            return
        L62:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.pt
            boolean r0 = r0.get()
            if (r0 != 0) goto L6b
            return
        L6b:
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r8.fw
            if (r0 == 0) goto L18a
            boolean r0 = r0.isValid()
            if (r0 != 0) goto L77
            goto L18a
        L77:
            java.lang.String r0 = "com.byted.live.lite"
            com.bytedance.pangle.plugin.Plugin r0 = com.bytedance.pangle.Zeus.getPlugin(r0)
            if (r0 != 0) goto L80
            return
        L80:
            java.util.concurrent.atomic.AtomicBoolean r3 = com.bykv.vk.openvk.live.df.pp
            boolean r3 = r3.get()
            if (r3 == 0) goto L89
            return
        L89:
            java.util.concurrent.atomic.AtomicBoolean r3 = com.bykv.vk.openvk.live.df.pp
            r4 = 1
            r3.set(r4)
            int r3 = r0.getVersion()
            long r3 = (long) r3
            boolean r3 = com.bykv.vk.openvk.live.rg.q(r3)
            r4 = 0
            if (r3 != 0) goto Lae
            java.lang.String r2 = "live sdk init crash more than consecutive 5 times , live plugin had uninstalled ! App cold start will request new live plugin ！"
            com.bykv.vk.openvk.api.rg.df(r1, r2)
            int r0 = r0.getVersion()
            long r0 = (long) r0
            com.bykv.vk.openvk.live.rg.pt(r0)
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.pp
            r0.set(r4)
            return
        Lae:
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = new com.bytedance.android.live.base.api.ILiveHostContextParam$Builder
            r3.<init>()
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            java.lang.String r5 = r5.getAppName()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setAppName(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            java.lang.String r5 = r5.getChannel()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setChannel(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            boolean r5 = r5.isDebug()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setIsDebug(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            java.lang.String r5 = r5.getECHostAppId()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setECHostAppId(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            java.lang.String r5 = r5.getPartner()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setPartner(r5)
            com.bykv.vk.openvk.live.df$2 r5 = new com.bykv.vk.openvk.live.df$2
            r5.<init>(r8)
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.provideMethodChannel(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            java.lang.String r5 = r5.getPartnerSecret()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setPartnerSecret(r5)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r5 = r8.fw
            com.bykv.vk.openvk.live.core.TTHostPermissionInner r5 = r5.getHostPermission()
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setHostPermission(r5)
            com.bykv.vk.openvk.live.core.rg r5 = new com.bykv.vk.openvk.live.core.rg
            com.bykv.vk.openvk.live.core.ITTLiveConfig r6 = r8.fw
            com.bykv.vk.openvk.live.core.ITTLiveHostAction r6 = r6.getLiveHostAction()
            r5.<init>(r6)
            com.bytedance.android.live.base.api.ILiveHostContextParam$Builder r3 = r3.setHostActionParam(r5)
            com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r5 = r8.rz
            if (r5 == 0) goto L11d
            com.bykv.vk.openvk.live.core.df r6 = new com.bykv.vk.openvk.live.core.df
            r6.<init>(r5)
            r3.setInjectionAuth(r6)
        L11d:
            com.bykv.vk.openvk.live.df$3 r5 = new com.bykv.vk.openvk.live.df$3
            r5.<init>(r8)
            android.content.Context r6 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            boolean r6 = r6 instanceof android.app.Application
            if (r6 == 0) goto L133
            android.content.Context r6 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            android.app.Application r6 = (android.app.Application) r6
            r3.setContext(r6)
        L133:
            int r6 = r0.getVersion()
            long r6 = (long) r6
            com.bykv.vk.openvk.live.rg.rg(r6)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "execute live sdk initLive method start, GeneralAppId:"
            r6.append(r7)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r7 = r8.fw
            if (r7 == 0) goto L14e
            java.lang.String r7 = r7.getGeneralAppId()
            goto L14f
        L14e:
            r7 = r2
        L14f:
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            com.bykv.vk.openvk.api.rg.df(r1, r6)
            android.content.Context r6 = com.bykv.vk.openvk.TTAppContextHolder.getContext()
            com.bykv.vk.openvk.live.core.ITTLiveConfig r7 = r8.fw
            if (r7 == 0) goto L165
            java.lang.String r2 = r7.getGeneralAppId()
        L165:
            boolean r2 = com.bykv.vk.openvk.live.rg.rg(r6, r2, r3, r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r5 = "execute live sdk initLive method end, (方法顺利执行结果)result: "
            r3.append(r5)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            com.bykv.vk.openvk.api.rg.df(r1, r2)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.live.df.pp
            r1.set(r4)
            int r0 = r0.getVersion()
            long r0 = (long) r0
            com.bykv.vk.openvk.live.rg.df(r0)
        L18a:
            return
    }

    static java.util.concurrent.atomic.AtomicBoolean pt() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.c
            return r0
    }

    static java.util.concurrent.atomic.AtomicBoolean q() {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.q
            return r0
    }

    private android.os.Bundle rg(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.os.Bundle
            if (r0 == 0) goto L7
            android.os.Bundle r2 = (android.os.Bundle) r2
            return r2
        L7:
            r2 = 0
            return r2
    }

    public static com.bykv.vk.openvk.live.df rg() {
            com.bykv.vk.openvk.live.df r0 = com.bykv.vk.openvk.live.df.df
            return r0
    }

    static java.lang.Object rg(com.bykv.vk.openvk.live.df r0, java.lang.Object[] r1) {
            java.lang.Object r0 = r0.rg(r1)
            return r0
    }

    private java.lang.Object rg(java.lang.Object... r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L28
            int r1 = r4.length
            if (r1 != 0) goto L7
            goto L28
        L7:
            r1 = 0
            r4 = r4[r1]     // Catch: java.lang.Throwable -> L28
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L28
            com.bykv.vk.openvk.TTVfManager r1 = com.bykv.vk.openvk.TTVfSdk.getVfManager()     // Catch: java.lang.Throwable -> L28
            if (r1 == 0) goto L28
            com.bykv.vk.openvk.VfSlot$Builder r2 = new com.bykv.vk.openvk.VfSlot$Builder     // Catch: java.lang.Throwable -> L28
            r2.<init>()     // Catch: java.lang.Throwable -> L28
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L28
            com.bykv.vk.openvk.VfSlot$Builder r4 = r2.setAdType(r4)     // Catch: java.lang.Throwable -> L28
            com.bykv.vk.openvk.VfSlot r4 = r4.build()     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r1.getBiddingToken(r4)     // Catch: java.lang.Throwable -> L28
            return r4
        L28:
            return r0
    }

    static void rg(com.bykv.vk.openvk.live.df r0) {
            r0.pp()
            return
    }

    private void rg(java.util.Map<java.lang.String, java.lang.Object> r8) {
            r7 = this;
            java.lang.String r0 = "room_id"
            java.lang.Object r0 = r8.get(r0)     // Catch: java.lang.Throwable -> L70
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Throwable -> L70
            long r0 = r0.longValue()     // Catch: java.lang.Throwable -> L70
            java.lang.String r2 = "event"
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L70
            boolean r2 = r8 instanceof com.bykv.vk.openvk.TTAdEvent     // Catch: java.lang.Throwable -> L70
            r3 = 0
            if (r2 == 0) goto L1f
            com.bykv.vk.openvk.live.df$rg r2 = new com.bykv.vk.openvk.live.df$rg     // Catch: java.lang.Throwable -> L70
            com.bykv.vk.openvk.TTAdEvent r8 = (com.bykv.vk.openvk.TTAdEvent) r8     // Catch: java.lang.Throwable -> L70
            r2.<init>(r8, r3)     // Catch: java.lang.Throwable -> L70
            goto L26
        L1f:
            com.bykv.vk.openvk.live.df$rg r2 = new com.bykv.vk.openvk.live.df$rg     // Catch: java.lang.Throwable -> L70
            com.bykv.vk.openvk.api.proto.EventListener r8 = (com.bykv.vk.openvk.api.proto.EventListener) r8     // Catch: java.lang.Throwable -> L70
            r2.<init>(r8, r3)     // Catch: java.lang.Throwable -> L70
        L26:
            com.bytedance.android.live.base.api.IOuterLiveRoomService r8 = com.bytedance.android.openliveplugin.LivePluginHelper.getLiveRoomService()     // Catch: java.lang.Throwable -> L70
            java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L70
            java.lang.String r3 = "checkRoomAlive"
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L70
            r5 = 0
            com.bykv.vk.openvk.live.df$4 r6 = new com.bykv.vk.openvk.live.df$4     // Catch: java.lang.Throwable -> L70
            r6.<init>(r7, r2)     // Catch: java.lang.Throwable -> L70
            r4[r5] = r6     // Catch: java.lang.Throwable -> L70
            r5 = 1
            java.lang.Long r0 = java.lang.Long.valueOf(r0)     // Catch: java.lang.Throwable -> L70
            r4[r5] = r0     // Catch: java.lang.Throwable -> L70
            r0 = 2
            r1 = 300(0x12c, float:4.2E-43)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L70
            r4[r0] = r1     // Catch: java.lang.Throwable -> L70
            java.lang.Object r8 = r8.callExpandMethod(r3, r4)     // Catch: java.lang.Throwable -> L70
            if (r8 != 0) goto L59
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L70
            r2.notifyAll()     // Catch: java.lang.Throwable -> L54
        L54:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L56
            goto L59
        L56:
            r8 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L56
            throw r8     // Catch: java.lang.Throwable -> L70
        L59:
            java.lang.String r0 = "TTLiveSDkBridge"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L70
            r1.<init>()     // Catch: java.lang.Throwable -> L70
            java.lang.String r2 = "has checkRoomAlive :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L70
            r1.append(r8)     // Catch: java.lang.Throwable -> L70
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L70
            com.bykv.vk.openvk.api.rg.df(r0, r8)     // Catch: java.lang.Throwable -> L70
            goto L78
        L70:
            r8 = move-exception
            java.lang.String r0 = "TTLiveSDkBridge"
            java.lang.String r1 = "getRoomState: exception:"
            com.bykv.vk.openvk.api.rg.rg(r0, r1, r8)
        L78:
            return
    }

    private void ux() {
            r3 = this;
            com.bykv.vk.openvk.live.df$rg r0 = com.bykv.vk.openvk.live.df.rg
            if (r0 == 0) goto L2a
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "live_plugin_installed"
            java.util.concurrent.atomic.AtomicBoolean r2 = com.bykv.vk.openvk.live.df.pt     // Catch: java.lang.Throwable -> L26
            boolean r2 = r2.get()     // Catch: java.lang.Throwable -> L26
            r0.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = "live_plugin_inited"
            java.util.concurrent.atomic.AtomicBoolean r2 = com.bykv.vk.openvk.live.df.c     // Catch: java.lang.Throwable -> L26
            boolean r2 = r2.get()     // Catch: java.lang.Throwable -> L26
            r0.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L26
            com.bykv.vk.openvk.live.df$rg r1 = com.bykv.vk.openvk.live.df.rg     // Catch: java.lang.Throwable -> L26
            r2 = 3
            r1.onEvent(r2, r0)     // Catch: java.lang.Throwable -> L26
            goto L2a
        L26:
            r0 = move-exception
            r0.printStackTrace()
        L2a:
            return
    }

    @Override
    public <T> T call(int r4, com.bykv.vk.openvk.api.proto.ValueSet r5, java.lang.Class<T> r6) {
            r3 = this;
            r0 = 5
            r1 = 0
            r2 = 0
            if (r4 == r0) goto L3c
            r0 = 6
            if (r4 == r0) goto L15
            java.lang.Class<java.util.Map> r0 = java.util.Map.class
            java.lang.Object r5 = r5.objectValue(r2, r0)
            java.util.Map r5 = (java.util.Map) r5
            java.lang.Object r4 = r3.callMethod(r6, r4, r5)
            return r4
        L15:
            java.lang.Class<java.lang.Object> r4 = java.lang.Object.class
            java.lang.Object r4 = r5.objectValue(r2, r4)
            boolean r6 = r4 instanceof com.bykv.vk.openvk.TTAdEvent
            if (r6 == 0) goto L2b
            java.lang.Class<com.bykv.vk.openvk.TTAdEvent> r4 = com.bykv.vk.openvk.TTAdEvent.class
            java.lang.Object r4 = r5.objectValue(r2, r4)
            com.bykv.vk.openvk.TTAdEvent r4 = (com.bykv.vk.openvk.TTAdEvent) r4
            r3.subscribe(r4)
            goto L3b
        L2b:
            boolean r5 = r4 instanceof com.bykv.vk.openvk.api.proto.EventListener
            if (r5 == 0) goto L3b
            com.bykv.vk.openvk.live.df$rg r5 = new com.bykv.vk.openvk.live.df$rg
            com.bykv.vk.openvk.api.proto.EventListener r4 = (com.bykv.vk.openvk.api.proto.EventListener) r4
            r5.<init>(r4, r1)
            com.bykv.vk.openvk.live.df.rg = r5
            r3.ux()
        L3b:
            return r1
        L3c:
            java.lang.Class<android.os.Bundle> r4 = android.os.Bundle.class
            java.lang.Object r4 = r5.objectValue(r2, r4)
            android.os.Bundle r4 = (android.os.Bundle) r4
            r3.init(r4)
            return r1
    }

    @Override
    public <T> T callMethod(java.lang.Class<T> r3, int r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r2 = this;
            r0 = 2
            r1 = 1
            if (r4 == 0) goto L24
            if (r4 == r1) goto L21
            r1 = 0
            if (r4 == r0) goto L1d
            r0 = 3
            if (r4 == r0) goto L19
            r0 = 4
            if (r4 == r0) goto L14
            java.lang.Object r3 = super.callMethod(r3, r4, r5)
            return r3
        L14:
            java.lang.Boolean r3 = r2.c()
            return r3
        L19:
            r2.fw()
            return r1
        L1d:
            r2.rg(r5)
            return r1
        L21:
            java.util.concurrent.atomic.AtomicBoolean r3 = com.bykv.vk.openvk.live.df.c
            return r3
        L24:
            java.util.concurrent.atomic.AtomicBoolean r3 = com.bykv.vk.openvk.live.df.c
            boolean r3 = r3.get()
            if (r3 != 0) goto L31
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)
            return r3
        L31:
            java.lang.String r3 = "context"
            java.lang.Object r3 = r5.get(r3)
            android.content.Context r3 = r2.getContext(r3)
            java.lang.String r4 = "bundle"
            java.lang.Object r4 = r5.get(r4)
            android.os.Bundle r4 = r2.rg(r4)
            boolean r3 = com.bykv.vk.openvk.live.rg.rg(r3, r4)
            if (r3 != 0) goto L50
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            return r3
        L50:
            r3 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
    }

    @Override
    public <T> T getObj(java.lang.Class<T> r1, int r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r0 = this;
            java.lang.Object r1 = super.getObj(r1, r2, r3)
            return r1
    }

    @Override
    public void init(android.os.Bundle r3) {
            r2 = this;
            super.init(r3)
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r2.fw
            if (r0 == 0) goto L39
            boolean r0 = r0.isValid()
            if (r0 == 0) goto L39
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r2.fw
            java.lang.String r0 = r0.getGeneralAppId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r2.fw
            java.lang.String r0 = r0.getPartner()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = r2.fw
            java.lang.String r0 = r0.getPartnerSecret()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L39
            java.lang.String r3 = "TTLiveSDkBridge"
            java.lang.String r0 = "The configuration has been obtained. Do not repeat initialization"
            com.bykv.vk.openvk.api.rg.df(r3, r0)
            return
        L39:
            java.lang.String r0 = "liveInitConfig"
            java.io.Serializable r0 = r3.getSerializable(r0)
            boolean r1 = r0 instanceof com.bykv.vk.openvk.live.core.ITTLiveConfig
            if (r1 == 0) goto L47
            com.bykv.vk.openvk.live.core.ITTLiveConfig r0 = (com.bykv.vk.openvk.live.core.ITTLiveConfig) r0
            r2.fw = r0
        L47:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L55
            java.lang.String r1 = "liveInitExtra"
            java.lang.String r3 = r3.getString(r1)     // Catch: org.json.JSONException -> L55
            r0.<init>(r3)     // Catch: org.json.JSONException -> L55
            r2.ux = r0     // Catch: org.json.JSONException -> L55
            goto L59
        L55:
            r3 = move-exception
            r3.printStackTrace()
        L59:
            r2.pp()
            return
    }

    public void rg(com.bykv.vk.openvk.api.plugin.c r4, android.os.Bundle r5) {
            r3 = this;
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.q
            boolean r0 = r0.get()
            java.lang.String r1 = "TTLiveSDkBridge"
            if (r0 == 0) goto L10
            java.lang.String r4 = "live PL is loading...just wait"
            com.bykv.vk.openvk.api.rg.df(r1, r4)
            return
        L10:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.bykv.vk.openvk.live.df.pt
            boolean r0 = r0.get()
            if (r0 == 0) goto L1e
            java.lang.String r4 = "live PL already loaded, dont load again"
            com.bykv.vk.openvk.api.rg.df(r1, r4)
            return
        L1e:
            com.bykv.vk.openvk.live.df$1 r0 = new com.bykv.vk.openvk.live.df$1
            r0.<init>(r3)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.live.df.q
            r2 = 1
            r1.set(r2)
            java.util.concurrent.atomic.AtomicBoolean r1 = com.bykv.vk.openvk.live.df.pt
            r2 = 0
            r1.set(r2)
            com.bykv.vk.openvk.live.rg.rg(r4, r5, r0)
            return
    }

    public void rg(com.bykv.vk.openvk.live.ITTLiveTokenInjectionAuth r1) {
            r0 = this;
            r0.rz = r1
            return
    }

    @Override
    public void subscribe(com.bykv.vk.openvk.TTAdEvent r3) {
            r2 = this;
            com.bykv.vk.openvk.live.df$rg r0 = new com.bykv.vk.openvk.live.df$rg
            r1 = 0
            r0.<init>(r3, r1)
            com.bykv.vk.openvk.live.df.rg = r0
            r2.ux()
            return
    }

    @Override
    public com.bykv.vk.openvk.api.proto.ValueSet values() {
            r1 = this;
            r0 = 0
            return r0
    }
}
