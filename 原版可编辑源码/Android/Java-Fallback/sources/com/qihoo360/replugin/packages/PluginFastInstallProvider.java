package com.qihoo360.replugin.packages;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginFastInstallProvider extends android.content.ContentProvider {
    public static final java.lang.String AUTHORITY = null;
    public static final android.net.Uri CONTENT_URI = null;
    public static final java.lang.String KEY_PLUGIN_INFO = "pi";
    public static final java.lang.String SELECTION_INSTALL = "inst";
    private static final java.lang.String TAG = "PluginFastInstallPv";

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".loader.p.pip"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.packages.PluginFastInstallProvider.AUTHORITY = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "content://"
            r0.append(r1)
            java.lang.String r1 = com.qihoo360.replugin.packages.PluginFastInstallProvider.AUTHORITY
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
            com.qihoo360.replugin.packages.PluginFastInstallProvider.CONTENT_URI = r0
            return
    }

    public PluginFastInstallProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    private int install(android.content.ContentValues r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "pi"
            java.lang.String r3 = r3.getAsString(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 == 0) goto L11
            return r0
        L11:
            com.qihoo360.replugin.model.PluginInfo r3 = com.qihoo360.replugin.model.PluginInfo.parseFromJsonText(r3)
            com.qihoo360.loader2.PluginCommImpl r1 = com.qihoo360.loader2.PMF.getLocal()
            java.lang.ClassLoader r3 = r1.loadPluginClassLoader(r3)
            if (r3 == 0) goto L21
            r3 = 1
            return r3
        L21:
            return r0
    }

    static android.content.ContentValues makeInstallValues(com.qihoo360.replugin.model.PluginInfo r2) {
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            org.json.JSONObject r2 = r2.getJSON()
            java.lang.String r2 = r2.toString()
            java.lang.String r1 = "pi"
            r0.put(r1, r2)
            return r0
    }

    @Override
    public int delete(android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public java.lang.String getType(android.net.Uri r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public android.net.Uri insert(android.net.Uri r1, android.content.ContentValues r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean onCreate() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public android.database.Cursor query(android.net.Uri r1, java.lang.String[] r2, java.lang.String r3, java.lang.String[] r4, java.lang.String r5) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public int update(android.net.Uri r3, android.content.ContentValues r4, java.lang.String r5, java.lang.String[] r6) {
            r2 = this;
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L1a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r6 = "update: cv="
            r3.append(r6)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r6 = "PluginFastInstallPv"
            com.qihoo360.replugin.helper.LogDebug.d(r6, r3)
        L1a:
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            r6 = 0
            if (r3 == 0) goto L22
            return r6
        L22:
            r3 = -1
            int r0 = r5.hashCode()
            r1 = 3237446(0x316646, float:4.536628E-39)
            if (r0 == r1) goto L2d
            goto L36
        L2d:
            java.lang.String r0 = "inst"
            boolean r5 = r5.equals(r0)
            if (r5 == 0) goto L36
            r3 = r6
        L36:
            if (r3 == 0) goto L39
            return r6
        L39:
            int r3 = r2.install(r4)
            return r3
    }
}
