package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginDesc {
    public static final java.lang.String ACTION_UPDATE = "com.qihoo360.mobilesafe.plugin_desc_update";
    private static final boolean DEBUG = false;
    private static final byte[] INSTANCE_LOCKER = null;
    private static final byte[] REG_RECEIVER_LOCKER = null;
    private static final java.lang.String TAG = null;
    private static volatile boolean sChanged;
    private static volatile java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> sMap;
    private static volatile android.content.BroadcastReceiver sUpdateReceiver;
    private java.lang.String mDesc;
    private java.lang.String mDisplay;
    private boolean mLarge;
    private java.lang.String mPlugin;


    static {
            java.lang.Class<com.qihoo360.loader2.PluginDesc> r0 = com.qihoo360.loader2.PluginDesc.class
            java.lang.String r0 = r0.getSimpleName()
            com.qihoo360.loader2.PluginDesc.TAG = r0
            boolean r0 = com.qihoo360.mobilesafe.core.BuildConfig.DEBUG
            com.qihoo360.loader2.PluginDesc.DEBUG = r0
            r0 = 0
            byte[] r1 = new byte[r0]
            com.qihoo360.loader2.PluginDesc.INSTANCE_LOCKER = r1
            byte[] r0 = new byte[r0]
            com.qihoo360.loader2.PluginDesc.REG_RECEIVER_LOCKER = r0
            return
    }

    public PluginDesc(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.mPlugin = r1
            return
    }

    static boolean access$000() {
            boolean r0 = com.qihoo360.loader2.PluginDesc.DEBUG
            return r0
    }

    static java.lang.String access$100() {
            java.lang.String r0 = com.qihoo360.loader2.PluginDesc.TAG
            return r0
    }

    static boolean access$202(boolean r0) {
            com.qihoo360.loader2.PluginDesc.sChanged = r0
            return r0
    }

    static java.util.HashMap access$300() {
            java.util.HashMap r0 = getCurrentMap()
            return r0
    }

    public static com.qihoo360.loader2.PluginDesc get(java.lang.String r1) {
            java.util.HashMap r0 = getCurrentMap()
            java.lang.Object r1 = r0.get(r1)
            com.qihoo360.loader2.PluginDesc r1 = (com.qihoo360.loader2.PluginDesc) r1
            return r1
    }

    private static java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> getCurrentMap() {
            registerReceiverIfNeeded()
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r0 = com.qihoo360.loader2.PluginDesc.sMap
            if (r0 == 0) goto Le
            boolean r0 = com.qihoo360.loader2.PluginDesc.sChanged
            if (r0 != 0) goto Le
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r0 = com.qihoo360.loader2.PluginDesc.sMap
            return r0
        Le:
            byte[] r0 = com.qihoo360.loader2.PluginDesc.INSTANCE_LOCKER
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r1 = com.qihoo360.loader2.PluginDesc.sMap     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L1d
            boolean r1 = com.qihoo360.loader2.PluginDesc.sChanged     // Catch: java.lang.Throwable -> L3d
            if (r1 != 0) goto L1d
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r1 = com.qihoo360.loader2.PluginDesc.sMap     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            return r1
        L1d:
            boolean r1 = com.qihoo360.loader2.PluginDesc.DEBUG     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L28
            java.lang.String r1 = com.qihoo360.loader2.PluginDesc.TAG     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "load(): Change, Ready to load"
            android.util.Log.d(r1, r2)     // Catch: java.lang.Throwable -> L3d
        L28:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> L3d
            r1.<init>()     // Catch: java.lang.Throwable -> L3d
            com.qihoo360.loader2.PluginDesc.sMap = r1     // Catch: java.lang.Throwable -> L3d
            android.content.Context r1 = com.qihoo360.loader2.PMF.getApplicationContext()     // Catch: java.lang.Throwable -> L3d
            load(r1)     // Catch: java.lang.Throwable -> L3d
            r1 = 0
            com.qihoo360.loader2.PluginDesc.sChanged = r1     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r0 = com.qihoo360.loader2.PluginDesc.sMap
            return r0
        L3d:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r1
    }

    private static boolean load(android.content.Context r5) {
            org.json.JSONArray r5 = loadArray(r5)
            r0 = 0
            if (r5 != 0) goto L8
            return r0
        L8:
            int r1 = r5.length()
            if (r0 >= r1) goto L47
            org.json.JSONObject r1 = r5.optJSONObject(r0)
            if (r1 != 0) goto L15
            goto L44
        L15:
            java.lang.String r2 = "name"
            java.lang.String r2 = r1.optString(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L22
            goto L44
        L22:
            com.qihoo360.loader2.PluginDesc r3 = new com.qihoo360.loader2.PluginDesc
            r3.<init>(r2)
            java.lang.String r4 = "display"
            java.lang.String r4 = r1.optString(r4)
            r3.mDisplay = r4
            java.lang.String r4 = "desc"
            java.lang.String r4 = r1.optString(r4)
            r3.mDesc = r4
            java.lang.String r4 = "large"
            boolean r1 = r1.optBoolean(r4)
            r3.mLarge = r1
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginDesc> r1 = com.qihoo360.loader2.PluginDesc.sMap
            r1.put(r2, r3)
        L44:
            int r0 = r0 + 1
            goto L8
        L47:
            r5 = 1
            return r5
    }

    private static org.json.JSONArray loadArray(android.content.Context r5) {
            r0 = 0
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L27
            com.qihoo360.replugin.RePluginCallbacks r1 = r1.getCallbacks()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L27
            java.lang.String r2 = "plugins-list.json"
            java.io.InputStream r5 = r1.openLatestFile(r5, r2)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L27
            if (r5 == 0) goto L36
            java.nio.charset.Charset r1 = com.qihoo360.replugin.utils.Charsets.UTF_8     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3a
            java.lang.String r1 = com.qihoo360.replugin.utils.IOUtils.toString(r5, r1)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3a
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3a
            r2.<init>(r1)     // Catch: java.lang.Exception -> L20 java.lang.Throwable -> L3a
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            return r2
        L20:
            r1 = move-exception
            goto L29
        L22:
            r5 = move-exception
            r4 = r0
            r0 = r5
            r5 = r4
            goto L3b
        L27:
            r1 = move-exception
            r5 = r0
        L29:
            boolean r2 = com.qihoo360.loader2.PluginDesc.DEBUG     // Catch: java.lang.Throwable -> L3a
            if (r2 == 0) goto L36
            java.lang.String r2 = com.qihoo360.loader2.PluginDesc.TAG     // Catch: java.lang.Throwable -> L3a
            java.lang.String r3 = r1.getMessage()     // Catch: java.lang.Throwable -> L3a
            android.util.Log.e(r2, r3, r1)     // Catch: java.lang.Throwable -> L3a
        L36:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            return r0
        L3a:
            r0 = move-exception
        L3b:
            com.qihoo360.replugin.utils.CloseableUtils.closeQuietly(r5)
            throw r0
    }

    private static void registerReceiverIfNeeded() {
            android.content.BroadcastReceiver r0 = com.qihoo360.loader2.PluginDesc.sUpdateReceiver
            if (r0 == 0) goto L5
            return
        L5:
            byte[] r0 = com.qihoo360.loader2.PluginDesc.REG_RECEIVER_LOCKER
            monitor-enter(r0)
            android.content.BroadcastReceiver r1 = com.qihoo360.loader2.PluginDesc.sUpdateReceiver     // Catch: java.lang.Throwable -> L2b
            if (r1 == 0) goto Le
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return
        Le:
            com.qihoo360.loader2.PluginDesc$1 r1 = new com.qihoo360.loader2.PluginDesc$1     // Catch: java.lang.Throwable -> L2b
            r1.<init>()     // Catch: java.lang.Throwable -> L2b
            com.qihoo360.loader2.PluginDesc.sUpdateReceiver = r1     // Catch: java.lang.Throwable -> L2b
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = "com.qihoo360.mobilesafe.plugin_desc_update"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2b
            android.content.Context r2 = com.qihoo360.loader2.PMF.getApplicationContext()     // Catch: java.lang.Throwable -> L2b
            com.qihoo360.replugin.compat.LocalBroadcastManager r2 = com.qihoo360.replugin.compat.LocalBroadcastManager.getInstance(r2)     // Catch: java.lang.Throwable -> L2b
            android.content.BroadcastReceiver r3 = com.qihoo360.loader2.PluginDesc.sUpdateReceiver     // Catch: java.lang.Throwable -> L2b
            r2.registerReceiver(r3, r1)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            return
        L2b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r1
    }

    public java.lang.String getDescription() {
            r1 = this;
            java.lang.String r0 = r1.mDesc
            return r0
    }

    public java.lang.String getDisplayName() {
            r1 = this;
            java.lang.String r0 = r1.mDisplay
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.mDisplay
            return r0
        Lb:
            java.lang.String r0 = r1.mPlugin
            return r0
    }

    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = r1.mPlugin
            return r0
    }

    public boolean isLarge() {
            r1 = this;
            boolean r0 = r1.mLarge
            return r0
    }
}
