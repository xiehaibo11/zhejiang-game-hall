package com.qihoo360.replugin.component.service;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginServiceServerFetcher {
    private static final byte[] PSS_LOCKER = null;
    private com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.IPluginServiceServer> mServiceManagerByProcessMap;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    private final class PSSDeathMonitor implements android.os.IBinder.DeathRecipient {
        final int mProcess;
        final android.os.IBinder mService;
        final com.qihoo360.replugin.component.service.PluginServiceServerFetcher this$0;

        PSSDeathMonitor(com.qihoo360.replugin.component.service.PluginServiceServerFetcher r1, int r2, android.os.IBinder r3) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.mProcess = r2
                r0.mService = r3
                return
        }

        @Override
        public void binderDied() {
                r3 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "psc.dm: d, rm p "
                r0.append(r1)
                int r1 = r3.mProcess
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "ws001"
                com.qihoo360.replugin.helper.LogRelease.e(r1, r0)
                byte[] r0 = com.qihoo360.replugin.component.service.PluginServiceServerFetcher.access$000()
                monitor-enter(r0)
                com.qihoo360.replugin.component.service.PluginServiceServerFetcher r1 = r3.this$0     // Catch: java.lang.Throwable -> L2e
                com.qihoo360.replugin.utils.basic.ArrayMap r1 = com.qihoo360.replugin.component.service.PluginServiceServerFetcher.access$100(r1)     // Catch: java.lang.Throwable -> L2e
                int r2 = r3.mProcess     // Catch: java.lang.Throwable -> L2e
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L2e
                r1.remove(r2)     // Catch: java.lang.Throwable -> L2e
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
                return
            L2e:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2e
                throw r1
        }
    }

    static {
            r0 = 0
            byte[] r0 = new byte[r0]
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher.PSS_LOCKER = r0
            return
    }

    public PluginServiceServerFetcher() {
            r1 = this;
            r1.<init>()
            com.qihoo360.replugin.utils.basic.ArrayMap r0 = new com.qihoo360.replugin.utils.basic.ArrayMap
            r0.<init>()
            r1.mServiceManagerByProcessMap = r0
            return
    }

    static byte[] access$000() {
            byte[] r0 = com.qihoo360.replugin.component.service.PluginServiceServerFetcher.PSS_LOCKER
            return r0
    }

    static com.qihoo360.replugin.utils.basic.ArrayMap access$100(com.qihoo360.replugin.component.service.PluginServiceServerFetcher r0) {
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.IPluginServiceServer> r0 = r0.mServiceManagerByProcessMap
            return r0
    }

    public com.qihoo360.replugin.component.service.server.IPluginServiceServer fetchByProcess(int r6) {
            r5 = this;
            r0 = 0
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r6 != r1) goto L7
            return r0
        L7:
            byte[] r1 = com.qihoo360.replugin.component.service.PluginServiceServerFetcher.PSS_LOCKER
            monitor-enter(r1)
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.IPluginServiceServer> r2 = r5.mServiceManagerByProcessMap     // Catch: java.lang.Throwable -> L98
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L98
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L98
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r2 = (com.qihoo360.replugin.component.service.server.IPluginServiceServer) r2     // Catch: java.lang.Throwable -> L98
            if (r2 == 0) goto L34
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L98
            if (r0 == 0) goto L32
            java.lang.String r0 = "ws001"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98
            r3.<init>()     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = "PluginServiceClient.fsmbp(): Exists! p="
            r3.append(r4)     // Catch: java.lang.Throwable -> L98
            r3.append(r6)     // Catch: java.lang.Throwable -> L98
            java.lang.String r6 = r3.toString()     // Catch: java.lang.Throwable -> L98
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> L98
        L32:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L98
            return r2
        L34:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L98
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L4f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "PluginServiceClient.fsmbp(): Create a new one! p="
            r1.append(r3)
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r1)
        L4f:
            r1 = -2
            r3 = 0
            if (r6 != r1) goto L5d
            com.qihoo360.loader2.IPluginHost r0 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L7c
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r0.fetchServiceServer()     // Catch: java.lang.Throwable -> L7c
        L5b:
            r2 = r0
            goto L6b
        L5d:
            com.qihoo360.loader2.PluginBinderInfo r1 = new com.qihoo360.loader2.PluginBinderInfo     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L7c
            com.qihoo360.loader2.IPluginClient r0 = com.qihoo360.loader2.MP.startPluginProcess(r0, r6, r1)     // Catch: java.lang.Throwable -> L7c
            com.qihoo360.replugin.component.service.server.IPluginServiceServer r0 = r0.fetchServiceServer()     // Catch: java.lang.Throwable -> L7c
            goto L5b
        L6b:
            android.os.IBinder r0 = r2.asBinder()     // Catch: java.lang.Throwable -> L7c
            com.qihoo360.replugin.component.service.PluginServiceServerFetcher$PSSDeathMonitor r1 = new com.qihoo360.replugin.component.service.PluginServiceServerFetcher$PSSDeathMonitor     // Catch: java.lang.Throwable -> L7c
            android.os.IBinder r4 = r2.asBinder()     // Catch: java.lang.Throwable -> L7c
            r1.<init>(r5, r6, r4)     // Catch: java.lang.Throwable -> L7c
            r0.linkToDeath(r1, r3)     // Catch: java.lang.Throwable -> L7c
            goto L84
        L7c:
            r0 = move-exception
            java.lang.String r1 = "ws001"
            java.lang.String r3 = "psc.fsm: e"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r3, r0)
        L84:
            if (r2 == 0) goto L97
            byte[] r0 = com.qihoo360.replugin.component.service.PluginServiceServerFetcher.PSS_LOCKER
            monitor-enter(r0)
            com.qihoo360.replugin.utils.basic.ArrayMap<java.lang.Integer, com.qihoo360.replugin.component.service.server.IPluginServiceServer> r1 = r5.mServiceManagerByProcessMap     // Catch: java.lang.Throwable -> L94
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L94
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L94
            goto L97
        L94:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L94
            throw r6
        L97:
            return r2
        L98:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L98
            throw r6
    }
}
