package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderStub {
    private static final java.lang.String KEY_COOKIE = "cookie";
    private static final java.lang.String KEY_METHOD = "main_method";
    private static final java.lang.String METHOD_START_PROCESS = "start_process";
    private static final java.lang.String[] PROJECTION_MAIN = null;
    private static final java.lang.String SELECTION_MAIN_BINDER = "main_binder";
    private static final java.lang.String SELECTION_MAIN_PREF = "main_pref";
    private static final java.lang.String URL_PARAM_KEY_LOADED = "loaded";
    static com.qihoo360.loader2.sp.IPref sPref;
    static com.qihoo360.loader2.sp.PrefImpl sPrefImpl;


    static {
            java.lang.String r0 = "main"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            com.qihoo360.loader2.PluginProviderStub.PROJECTION_MAIN = r0
            return
    }

    public PluginProviderStub() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final com.qihoo360.loader2.sp.IPref getPref(android.content.Context r2) throws android.os.RemoteException {
            com.qihoo360.loader2.sp.IPref r0 = com.qihoo360.loader2.PluginProviderStub.sPref
            if (r0 != 0) goto L21
            boolean r0 = com.qihoo360.replugin.base.IPC.isPersistentProcess()
            if (r0 == 0) goto Le
            initPref()
            goto L21
        Le:
            android.os.IBinder r2 = proxyFetchHostPref(r2)
            com.qihoo360.loader2.PluginProviderStub$1 r0 = new com.qihoo360.loader2.PluginProviderStub$1
            r0.<init>()
            r1 = 0
            r2.linkToDeath(r0, r1)
            com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.sp.IPref.Stub.asInterface(r2)
            com.qihoo360.loader2.PluginProviderStub.sPref = r2
        L21:
            com.qihoo360.loader2.sp.IPref r2 = com.qihoo360.loader2.PluginProviderStub.sPref
            return r2
    }

    static final void initPref() {
            com.qihoo360.loader2.sp.PrefImpl r0 = com.qihoo360.loader2.PluginProviderStub.sPrefImpl
            if (r0 != 0) goto Ld
            com.qihoo360.loader2.sp.PrefImpl r0 = new com.qihoo360.loader2.sp.PrefImpl
            r0.<init>()
            com.qihoo360.loader2.PluginProviderStub.sPrefImpl = r0
            com.qihoo360.loader2.PluginProviderStub.sPref = r0
        Ld:
            return
    }

    static final android.os.IBinder proxyFetchHostBinder(android.content.Context r1) {
            java.lang.String r0 = "main_binder"
            android.os.IBinder r1 = proxyFetchHostBinder(r1, r0)
            return r1
    }

    private static final android.os.IBinder proxyFetchHostBinder(android.content.Context r7, java.lang.String r8) {
            r0 = 0
            android.net.Uri r2 = com.qihoo360.replugin.component.process.ProcessPitProviderPersist.URI     // Catch: java.lang.Throwable -> L4b
            android.content.ContentResolver r1 = r7.getContentResolver()     // Catch: java.lang.Throwable -> L4b
            java.lang.String[] r3 = com.qihoo360.loader2.PluginProviderStub.PROJECTION_MAIN     // Catch: java.lang.Throwable -> L4b
            r5 = 0
            r6 = 0
            r4 = r8
            android.database.Cursor r7 = r1.query(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r8 = "ws001"
            if (r7 != 0) goto L21
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L1d
            java.lang.String r1 = "proxy fetch binder: cursor is null"
            com.qihoo360.replugin.helper.LogDebug.d(r8, r1)     // Catch: java.lang.Throwable -> L48
        L1d:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r7)
            return r0
        L21:
            boolean r0 = r7.moveToNext()     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L28
            goto L21
        L28:
            android.os.IBinder r0 = com.qihoo360.loader2.BinderCursor.getBinder(r7)     // Catch: java.lang.Throwable -> L48
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L48
            if (r1 == 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
            r1.<init>()     // Catch: java.lang.Throwable -> L48
            java.lang.String r2 = "proxy fetch binder: binder="
            r1.append(r2)     // Catch: java.lang.Throwable -> L48
            r1.append(r0)     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L48
            com.qihoo360.replugin.helper.LogDebug.d(r8, r1)     // Catch: java.lang.Throwable -> L48
        L44:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r7)
            return r0
        L48:
            r8 = move-exception
            r0 = r7
            goto L4c
        L4b:
            r8 = move-exception
        L4c:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r0)
            throw r8
    }

    static final android.os.IBinder proxyFetchHostPref(android.content.Context r1) {
            java.lang.String r0 = "main_pref"
            android.os.IBinder r1 = proxyFetchHostBinder(r1, r0)
            return r1
    }

    static final boolean proxyStartPluginProcess(android.content.Context r3, int r4) {
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.String r1 = "main_method"
            java.lang.String r2 = "start_process"
            r0.put(r1, r2)
            com.qihoo360.loader2.PmBase r1 = com.qihoo360.loader2.PMF.sPluginMgr
            long r1 = r1.mLocalCookie
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "cookie"
            r0.put(r2, r1)
            android.content.ContentResolver r3 = r3.getContentResolver()
            android.net.Uri r4 = com.qihoo360.replugin.component.process.ProcessPitProviderBase.buildUri(r4)
            android.net.Uri r3 = r3.insert(r4, r0)
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r0 = "ws001"
            if (r4 == 0) goto L48
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r1 = "proxyStartPluginProcess insert.rc="
            r4.append(r1)
            if (r3 == 0) goto L3c
            java.lang.String r1 = r3.toString()
            goto L3e
        L3c:
            java.lang.String r1 = "null"
        L3e:
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r4)
        L48:
            if (r3 != 0) goto L55
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L53
            java.lang.String r3 = "proxyStartPluginProcess failed"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L53:
            r3 = 0
            return r3
        L55:
            r3 = 1
            return r3
    }

    public static final android.database.Cursor stubMain(android.net.Uri r0, java.lang.String[] r1, java.lang.String r2, java.lang.String[] r3, java.lang.String r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L26
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "stubMain projection="
            r0.append(r3)
            java.lang.String r1 = java.util.Arrays.toString(r1)
            r0.append(r1)
            java.lang.String r1 = " selection="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L26:
            java.lang.String r0 = "main_binder"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L39
            com.qihoo360.loader2.PmBase r0 = com.qihoo360.loader2.PMF.sPluginMgr
            android.os.IBinder r0 = r0.getHostBinder()
            android.database.Cursor r0 = com.qihoo360.loader2.BinderCursor.queryBinder(r0)
            return r0
        L39:
            java.lang.String r0 = "main_pref"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L4b
            initPref()
            com.qihoo360.loader2.sp.PrefImpl r0 = com.qihoo360.loader2.PluginProviderStub.sPrefImpl
            android.database.Cursor r0 = com.qihoo360.loader2.BinderCursor.queryBinder(r0)
            return r0
        L4b:
            r0 = 0
            return r0
    }

    public static final android.net.Uri stubPlugin(android.net.Uri r7, android.content.ContentValues r8) {
            boolean r7 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r0 = "ws001"
            if (r7 == 0) goto L1a
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "stubPlugin values="
            r7.append(r1)
            r7.append(r8)
            java.lang.String r7 = r7.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r7)
        L1a:
            java.lang.String r7 = "main_method"
            java.lang.String r7 = r8.getAsString(r7)
            java.lang.String r1 = "start_process"
            boolean r7 = android.text.TextUtils.equals(r7, r1)
            if (r7 == 0) goto Lba
            android.net.Uri$Builder r7 = new android.net.Uri$Builder
            r7.<init>()
            java.lang.String r1 = "content"
            android.net.Uri$Builder r7 = r7.scheme(r1)
            java.lang.String r1 = "process"
            android.net.Uri$Builder r7 = r7.authority(r1)
            java.lang.String r1 = "status"
            android.net.Uri$Builder r7 = r7.encodedPath(r1)
            java.lang.String r1 = "loaded=1"
            android.net.Uri$Builder r7 = r7.encodedQuery(r1)
            android.net.Uri r7 = r7.build()
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L61
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "plugin provider: return uri="
            r1.append(r2)
            r1.append(r7)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r1)
        L61:
            java.lang.String r1 = "cookie"
            java.lang.Long r8 = r8.getAsLong(r1)
            long r1 = r8.longValue()
            com.qihoo360.loader2.PmBase r8 = com.qihoo360.loader2.PMF.sPluginMgr
            long r3 = r8.mLocalCookie
            r5 = 0
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r8 != 0) goto L92
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L8d
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "set cookie: "
            r8.append(r3)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r8)
        L8d:
            com.qihoo360.loader2.PmBase r8 = com.qihoo360.loader2.PMF.sPluginMgr
            r8.mLocalCookie = r1
            goto Lb9
        L92:
            com.qihoo360.loader2.PmBase r8 = com.qihoo360.loader2.PMF.sPluginMgr
            long r3 = r8.mLocalCookie
            int r8 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r8 == 0) goto Lb9
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto Lb2
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r3 = "reset cookie: "
            r8.append(r3)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r8)
        Lb2:
            com.qihoo360.loader2.PmBase r8 = com.qihoo360.loader2.PMF.sPluginMgr
            r8.mLocalCookie = r1
            com.qihoo360.loader2.PluginProcessMain.connectToHostSvc()
        Lb9:
            return r7
        Lba:
            r7 = 0
            return r7
    }
}
