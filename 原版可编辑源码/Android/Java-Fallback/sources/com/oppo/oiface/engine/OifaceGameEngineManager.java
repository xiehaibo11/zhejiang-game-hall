package com.oppo.oiface.engine;

public class OifaceGameEngineManager {
    private static final java.lang.String TAG = "OppoManager";
    private static com.oppo.oiface.engine.OifaceGameEngineManager mOppoManager = null;
    private static com.oppo.oiface.engine.IOIfaceService mService = null;
    private static final java.lang.String oppoSdkVersion = "2.1";
    private java.lang.ref.WeakReference<com.oppo.oiface.engine.CallBack> mCallbacks;
    private android.os.IBinder.DeathRecipient mDeathRecipient;
    private android.os.IBinder mRemote;



    static {
            return
    }

    private OifaceGameEngineManager() {
            r1 = this;
            r1.<init>()
            com.oppo.oiface.engine.OifaceGameEngineManager$2 r0 = new com.oppo.oiface.engine.OifaceGameEngineManager$2
            r0.<init>(r1)
            r1.mDeathRecipient = r0
            r1.connectOifaceService()
            return
    }

    static java.lang.ref.WeakReference access$000(com.oppo.oiface.engine.OifaceGameEngineManager r0) {
            java.lang.ref.WeakReference<com.oppo.oiface.engine.CallBack> r0 = r0.mCallbacks
            return r0
    }

    static com.oppo.oiface.engine.IOIfaceService access$102(com.oppo.oiface.engine.IOIfaceService r0) {
            com.oppo.oiface.engine.OifaceGameEngineManager.mService = r0
            return r0
    }

    private boolean connectOifaceService() {
            r4 = this;
            java.lang.String r0 = "oiface"
            android.os.IBinder r0 = android.os.ServiceManager.checkService(r0)
            r4.mRemote = r0
            android.os.IBinder r0 = r4.mRemote
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.IOIfaceService.Stub.asInterface(r0)
            com.oppo.oiface.engine.OifaceGameEngineManager.mService = r0
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            r1 = 0
            if (r0 == 0) goto L40
            com.oppo.oiface.engine.OifaceGameEngineManager$1 r2 = new com.oppo.oiface.engine.OifaceGameEngineManager$1     // Catch: java.lang.Exception -> L26
            r2.<init>(r4)     // Catch: java.lang.Exception -> L26
            r0.registerEngineClient(r2)     // Catch: java.lang.Exception -> L26
            android.os.IBinder r0 = r4.mRemote     // Catch: java.lang.Exception -> L26
            android.os.IBinder$DeathRecipient r2 = r4.mDeathRecipient     // Catch: java.lang.Exception -> L26
            r0.linkToDeath(r2, r1)     // Catch: java.lang.Exception -> L26
            r0 = 1
            return r0
        L26:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "IOIfaceService registerEngineClient error"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "OppoManager"
            android.util.Slog.d(r2, r0)
            r0 = 0
            com.oppo.oiface.engine.OifaceGameEngineManager.mService = r0
        L40:
            return r1
    }

    public static com.oppo.oiface.engine.OifaceGameEngineManager getInstance() {
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            if (r0 != 0) goto L17
            java.lang.Class<com.oppo.oiface.engine.OifaceGameEngineManager> r0 = com.oppo.oiface.engine.OifaceGameEngineManager.class
            monitor-enter(r0)
            com.oppo.oiface.engine.IOIfaceService r1 = com.oppo.oiface.engine.OifaceGameEngineManager.mService     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.oppo.oiface.engine.OifaceGameEngineManager r1 = new com.oppo.oiface.engine.OifaceGameEngineManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.oppo.oiface.engine.OifaceGameEngineManager.mOppoManager = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.oppo.oiface.engine.OifaceGameEngineManager r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mOppoManager
            return r0
    }

    public int getMemoryUsage(int r3) {
            r2 = this;
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            r1 = -1
            if (r0 != 0) goto Lc
            boolean r0 = r2.connectOifaceService()
            if (r0 != 0) goto Lc
            return r1
        Lc:
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService     // Catch: android.os.RemoteException -> L13
            int r3 = r0.getMemoryUsage(r3)     // Catch: android.os.RemoteException -> L13
            return r3
        L13:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public java.lang.String getOifaceVersion() {
            r4 = this;
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            r1 = 0
            if (r0 != 0) goto Lc
            boolean r0 = r4.connectOifaceService()
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L29
            r0.<init>()     // Catch: java.lang.Exception -> L29
            com.oppo.oiface.engine.IOIfaceService r2 = com.oppo.oiface.engine.OifaceGameEngineManager.mService     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = r2.getOifaceVersion()     // Catch: java.lang.Exception -> L29
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = ":"
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r2 = "2.1"
            r0.append(r2)     // Catch: java.lang.Exception -> L29
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L29
            return r0
        L29:
            r0 = move-exception
            com.oppo.oiface.engine.OifaceGameEngineManager.mService = r1
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "getOifaceVersion error:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "OppoManager"
            android.util.Slog.d(r2, r0)
            return r1
    }

    public void systemStatus(com.oppo.oiface.engine.CallBack r2) {
            r1 = this;
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference     // Catch: android.os.RemoteException -> L12
            r0.<init>(r2)     // Catch: android.os.RemoteException -> L12
            r1.mCallbacks = r0     // Catch: android.os.RemoteException -> L12
            com.oppo.oiface.engine.IOIfaceService r2 = com.oppo.oiface.engine.OifaceGameEngineManager.mService     // Catch: android.os.RemoteException -> L12
            r2.onAppRegister()     // Catch: android.os.RemoteException -> L12
            goto L16
        L12:
            r2 = move-exception
            r2.printStackTrace()
        L16:
            return
    }

    public boolean updateGameEngineInfo(java.lang.String r4) {
            r3 = this;
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService
            r1 = 0
            if (r0 != 0) goto Lc
            boolean r0 = r3.connectOifaceService()
            if (r0 != 0) goto Lc
            return r1
        Lc:
            com.oppo.oiface.engine.IOIfaceService r0 = com.oppo.oiface.engine.OifaceGameEngineManager.mService     // Catch: java.lang.Exception -> L13
            r0.updateGameEngineInfo(r4)     // Catch: java.lang.Exception -> L13
            r4 = 1
            return r4
        L13:
            r4 = move-exception
            r0 = 0
            com.oppo.oiface.engine.OifaceGameEngineManager.mService = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "updateGameInfo error:"
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "OppoManager"
            android.util.Slog.d(r0, r4)
            return r1
    }
}
