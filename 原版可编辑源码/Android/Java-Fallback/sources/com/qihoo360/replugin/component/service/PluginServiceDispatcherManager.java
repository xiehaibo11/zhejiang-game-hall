package com.qihoo360.replugin.component.service;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceDispatcherManager {
    private static final byte[] SERVICES_LOCKER = null;
    private static final java.lang.String TAG = "PSDM";
    private com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> mServices;
    private com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> mUnboundServices;

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.component.service.PluginServiceDispatcherManager.SERVICES_LOCKER = r0
            return
    }

    public PluginServiceDispatcherManager() {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.mServices = r0
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.mUnboundServices = r0
            return
    }

    public com.qihoo360.replugin.component.service.ServiceDispatcher forget(android.content.Context r6, android.content.ServiceConnection r7) {
            r5 = this;
            byte[] r0 = com.qihoo360.replugin.component.service.PluginServiceDispatcherManager.SERVICES_LOCKER
            monitor-enter(r0)
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r1 = r5.mServices     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.utils.basic.ArrayMap r1 = (com.qihoo360.replugin.utils.basic.ArrayMap) r1     // Catch: java.lang.Throwable -> Le0
            if (r1 == 0) goto L54
            java.lang.Object r2 = r1.get(r7)     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.component.service.ServiceDispatcher r2 = (com.qihoo360.replugin.component.service.ServiceDispatcher) r2     // Catch: java.lang.Throwable -> Le0
            if (r2 == 0) goto L54
            r1.remove(r7)     // Catch: java.lang.Throwable -> Le0
            r2.doForget()     // Catch: java.lang.Throwable -> Le0
            int r1 = r1.size()     // Catch: java.lang.Throwable -> Le0
            if (r1 != 0) goto L26
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r1 = r5.mServices     // Catch: java.lang.Throwable -> Le0
            r1.remove(r6)     // Catch: java.lang.Throwable -> Le0
        L26:
            int r1 = r2.getFlags()     // Catch: java.lang.Throwable -> Le0
            r1 = r1 & 2
            if (r1 == 0) goto L52
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r1 = r5.mUnboundServices     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.utils.basic.ArrayMap r1 = (com.qihoo360.replugin.utils.basic.ArrayMap) r1     // Catch: java.lang.Throwable -> Le0
            if (r1 != 0) goto L42
            com.qihoo360.replugin.utils.basic.ArrayMap r1 = new com.qihoo360.replugin.utils.basic.ArrayMap     // Catch: java.lang.Throwable -> Le0
            r1.<init>()     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r3 = r5.mUnboundServices     // Catch: java.lang.Throwable -> Le0
            r3.put(r6, r1)     // Catch: java.lang.Throwable -> Le0
        L42:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Le0
            java.lang.String r3 = "Originally unbound here:"
            r6.<init>(r3)     // Catch: java.lang.Throwable -> Le0
            r6.fillInStackTrace()     // Catch: java.lang.Throwable -> Le0
            r2.setUnbindLocation(r6)     // Catch: java.lang.Throwable -> Le0
            r1.put(r7, r2)     // Catch: java.lang.Throwable -> Le0
        L52:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le0
            return r2
        L54:
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r1 = r5.mUnboundServices     // Catch: java.lang.Throwable -> Le0
            java.lang.Object r1 = r1.get(r6)     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.utils.basic.ArrayMap r1 = (com.qihoo360.replugin.utils.basic.ArrayMap) r1     // Catch: java.lang.Throwable -> Le0
            r2 = 0
            if (r1 == 0) goto L93
            java.lang.Object r1 = r1.get(r7)     // Catch: java.lang.Throwable -> Le0
            com.qihoo360.replugin.component.service.ServiceDispatcher r1 = (com.qihoo360.replugin.component.service.ServiceDispatcher) r1     // Catch: java.lang.Throwable -> Le0
            if (r1 == 0) goto L93
            java.lang.RuntimeException r6 = r1.getUnbindLocation()     // Catch: java.lang.Throwable -> Le0
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Le0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r3.<init>()     // Catch: java.lang.Throwable -> Le0
            java.lang.String r4 = "Unbinding Service "
            r3.append(r4)     // Catch: java.lang.Throwable -> Le0
            r3.append(r7)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = " that was already unbound"
            r3.append(r7)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r3.toString()     // Catch: java.lang.Throwable -> Le0
            r1.<init>(r7, r6)     // Catch: java.lang.Throwable -> Le0
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Le0
            if (r6 == 0) goto L91
            java.lang.String r6 = "PSDM"
            java.lang.String r7 = "forgetServiceDispatcher(): Unbind Error!"
            android.util.Log.e(r6, r7, r1)     // Catch: java.lang.Throwable -> Le0
        L91:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le0
            return r2
        L93:
            if (r6 != 0) goto Lbd
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Le0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r1.<init>()     // Catch: java.lang.Throwable -> Le0
            java.lang.String r3 = "Unbinding Service "
            r1.append(r3)     // Catch: java.lang.Throwable -> Le0
            r1.append(r7)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = " from Context that is no longer in use"
            r1.append(r7)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Le0
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Le0
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Le0
            if (r7 == 0) goto Lbb
            java.lang.String r7 = "PSDM"
            java.lang.String r1 = "forgetServiceDispatcher(): Unbind Error!"
            android.util.Log.e(r7, r1, r6)     // Catch: java.lang.Throwable -> Le0
        Lbb:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le0
            return r2
        Lbd:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Le0
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le0
            r1.<init>()     // Catch: java.lang.Throwable -> Le0
            java.lang.String r3 = "Service not registered: "
            r1.append(r3)     // Catch: java.lang.Throwable -> Le0
            r1.append(r7)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r7 = r1.toString()     // Catch: java.lang.Throwable -> Le0
            r6.<init>(r7)     // Catch: java.lang.Throwable -> Le0
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Le0
            if (r7 == 0) goto Lde
            java.lang.String r7 = "PSDM"
            java.lang.String r1 = "forgetServiceDispatcher(): Unbind Error!"
            android.util.Log.e(r7, r1, r6)     // Catch: java.lang.Throwable -> Le0
        Lde:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le0
            return r2
        Le0:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le0
            throw r6
    }

    public com.qihoo360.replugin.component.service.ServiceDispatcher get(android.content.ServiceConnection r10, android.content.Context r11, android.os.Handler r12, int r13, int r14) {
            r9 = this;
            byte[] r0 = com.qihoo360.replugin.component.service.PluginServiceDispatcherManager.SERVICES_LOCKER
            monitor-enter(r0)
            r1 = 0
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r2 = r9.mServices     // Catch: java.lang.Throwable -> L36
            java.lang.Object r2 = r2.get(r11)     // Catch: java.lang.Throwable -> L36
            com.qihoo360.replugin.utils.basic.ArrayMap r2 = (com.qihoo360.replugin.utils.basic.ArrayMap) r2     // Catch: java.lang.Throwable -> L36
            if (r2 == 0) goto L14
            java.lang.Object r1 = r2.get(r10)     // Catch: java.lang.Throwable -> L36
            com.qihoo360.replugin.component.service.ServiceDispatcher r1 = (com.qihoo360.replugin.component.service.ServiceDispatcher) r1     // Catch: java.lang.Throwable -> L36
        L14:
            if (r1 != 0) goto L31
            com.qihoo360.replugin.component.service.ServiceDispatcher r1 = new com.qihoo360.replugin.component.service.ServiceDispatcher     // Catch: java.lang.Throwable -> L36
            r3 = r1
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r3.<init>(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L36
            if (r2 != 0) goto L2d
            com.qihoo360.replugin.utils.basic.ArrayMap r2 = new com.qihoo360.replugin.utils.basic.ArrayMap     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            com.qihoo360.replugin.utils.basic.ArrayMap<android.content.Context, com.qihoo360.replugin.utils.basic.ArrayMap<android.content.ServiceConnection, com.qihoo360.replugin.component.service.ServiceDispatcher>> r12 = r9.mServices     // Catch: java.lang.Throwable -> L36
            r12.put(r11, r2)     // Catch: java.lang.Throwable -> L36
        L2d:
            r2.put(r10, r1)     // Catch: java.lang.Throwable -> L36
            goto L34
        L31:
            r1.validate(r11, r12)     // Catch: java.lang.Throwable -> L36
        L34:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            return r1
        L36:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L36
            throw r10
    }
}
