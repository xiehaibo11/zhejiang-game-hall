package com.qihoo360.replugin.component.provider;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProviderClient {
    private static final int PROCESS_UNKNOWN = Integer.MAX_VALUE;
    private static final java.lang.String TAG = "PluginProviderClient";

    public PluginProviderClient() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.ContentProviderClient acquireContentProviderClient(android.content.Context r0, java.lang.String r1) {
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r1 = com.qihoo360.replugin.component.provider.PluginPitProviderP0.AUTHORITY
            android.content.ContentProviderClient r0 = r0.acquireContentProviderClient(r1)
            return r0
    }

    public static int bulkInsert(android.content.Context r0, android.net.Uri r1, android.content.ContentValues[] r2) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            int r0 = r0.bulkInsert(r1, r2)
            return r0
    }

    public static int delete(android.content.Context r0, android.net.Uri r1, java.lang.String r2, java.lang.String[] r3) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            int r0 = r0.delete(r1, r2, r3)
            return r0
    }

    private static java.lang.String fetchPluginByContext(android.content.Context r3, android.net.Uri r4) {
            java.lang.ClassLoader r3 = r3.getClassLoader()
            java.lang.String r3 = com.qihoo360.i.Factory.fetchPluginName(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            java.lang.String r2 = "ws001"
            if (r0 == 0) goto L26
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "ppc.fubc: pn is n. u="
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r2, r3)
            return r1
        L26:
            java.lang.String r0 = "main"
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L47
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L46
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "PluginProviderClient.fubc(): Call Main! u="
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r3)
        L46:
            return r1
        L47:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L5f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PluginProviderClient.fubc(): Call Plugin! u="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r2, r4)
        L5f:
            return r3
    }

    private static int getProcessByAuthority(java.lang.String r5, java.lang.String r6) {
            com.qihoo360.replugin.component.ComponentList r0 = com.qihoo360.i.Factory.queryPluginComponentList(r5)
            java.lang.String r1 = "; au="
            r2 = 2147483647(0x7fffffff, float:NaN)
            java.lang.String r3 = "PluginProviderClient"
            if (r0 != 0) goto L2c
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L2b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "getProcessByAuthority(): Fetch Component List Error! pn="
            r0.append(r4)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
        L2b:
            return r2
        L2c:
            android.content.pm.ProviderInfo r0 = r0.getProviderByAuthority(r6)
            if (r0 != 0) goto L51
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L50
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "getProcessByAuthority(): Not register! pn="
            r0.append(r4)
            r0.append(r5)
            r0.append(r1)
            r0.append(r6)
            java.lang.String r5 = r0.toString()
            android.util.Log.e(r3, r5)
        L50:
            return r2
        L51:
            java.lang.String r6 = r0.processName
            java.lang.Integer r6 = com.qihoo360.replugin.component.utils.PluginClientHelper.getProcessInt(r6)
            int r6 = r6.intValue()
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L7b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getProcessByAuthority(): Okay! Process="
            r0.append(r1)
            r0.append(r6)
            java.lang.String r1 = "; pn="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.d(r3, r5)
        L7b:
            return r6
    }

    public static java.lang.String getType(android.content.Context r0, android.net.Uri r1) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r0 = r0.getType(r1)
            return r0
    }

    public static android.net.Uri insert(android.content.Context r0, android.net.Uri r1, android.content.ContentValues r2) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            android.net.Uri r0 = r0.insert(r1, r2)
            return r0
    }

    public static void notifyChange(android.content.Context r0, android.net.Uri r1, android.database.ContentObserver r2) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            r0.notifyChange(r1, r2)
            return
    }

    public static void notifyChange(android.content.Context r0, android.net.Uri r1, android.database.ContentObserver r2, boolean r3) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            r0.notifyChange(r1, r2, r3)
            return
    }

    public static android.os.ParcelFileDescriptor openFileDescriptor(android.content.Context r0, android.net.Uri r1, java.lang.String r2) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            android.os.ParcelFileDescriptor r0 = r0.openFileDescriptor(r1, r2)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static android.os.ParcelFileDescriptor openFileDescriptor(android.content.Context r0, android.net.Uri r1, java.lang.String r2, android.os.CancellationSignal r3) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            android.os.ParcelFileDescriptor r0 = r0.openFileDescriptor(r1, r2, r3)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static java.io.InputStream openInputStream(android.content.Context r0, android.net.Uri r1) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            java.io.InputStream r0 = r0.openInputStream(r1)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static java.io.OutputStream openOutputStream(android.content.Context r0, android.net.Uri r1) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            java.io.OutputStream r0 = r0.openOutputStream(r1)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static java.io.OutputStream openOutputStream(android.content.Context r0, android.net.Uri r1, java.lang.String r2) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Ld
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Ld
            java.io.OutputStream r0 = r0.openOutputStream(r1, r2)     // Catch: java.lang.Throwable -> Ld
            return r0
        Ld:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static android.database.Cursor query(android.content.Context r6, android.net.Uri r7, java.lang.String[] r8, java.lang.String r9, java.lang.String[] r10, java.lang.String r11) {
            android.net.Uri r1 = toCalledUri(r6, r7)
            android.content.ContentResolver r0 = r6.getContentResolver()
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            android.database.Cursor r6 = r0.query(r1, r2, r3, r4, r5)
            return r6
    }

    public static android.database.Cursor query(android.content.Context r7, android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12, android.os.CancellationSignal r13) {
            android.net.Uri r1 = toCalledUri(r7, r8)
            android.content.ContentResolver r0 = r7.getContentResolver()
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static void registerContentObserver(android.content.Context r0, android.net.Uri r1, boolean r2, android.database.ContentObserver r3) {
            android.net.Uri r1 = toCalledUri(r0, r1)     // Catch: java.lang.Throwable -> Lc
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Throwable -> Lc
            r0.registerContentObserver(r1, r2, r3)     // Catch: java.lang.Throwable -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            return
    }

    public static android.net.Uri toCalledUri(android.content.Context r2, android.net.Uri r3) {
            java.lang.String r0 = fetchPluginByContext(r2, r3)
            if (r0 != 0) goto L7
            return r3
        L7:
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            android.net.Uri r2 = toCalledUri(r2, r0, r3, r1)
            return r2
    }

    public static android.net.Uri toCalledUri(android.content.Context r1, java.lang.String r2, android.net.Uri r3, int r4) {
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L67
            if (r3 == 0) goto L61
            java.lang.String r1 = r3.getAuthority()
            java.lang.String r0 = com.qihoo360.replugin.component.provider.PluginPitProviderBase.AUTHORITY_PREFIX
            boolean r1 = r1.startsWith(r0)
            if (r1 == 0) goto L15
            return r3
        L15:
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r4 != r1) goto L27
            java.lang.String r1 = r3.getAuthority()
            int r4 = getProcessByAuthority(r2, r1)
            r1 = 2147483647(0x7fffffff, float:NaN)
            if (r4 != r1) goto L27
            return r3
        L27:
            r1 = -2
            if (r4 != r1) goto L2d
            java.lang.String r1 = com.qihoo360.replugin.component.provider.PluginPitProviderPersist.AUTHORITY
            goto L3e
        L2d:
            boolean r1 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r4)
            if (r1 == 0) goto L3c
            android.util.SparseArray<java.lang.String> r1 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_AUTHORITY_MAP
            java.lang.Object r1 = r1.get(r4)
            java.lang.String r1 = (java.lang.String) r1
            goto L3e
        L3c:
            java.lang.String r1 = com.qihoo360.replugin.component.provider.PluginPitProviderUI.AUTHORITY
        L3e:
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r0 = 0
            r4[r0] = r1
            r1 = 1
            r4[r1] = r2
            r1 = 2
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "content://"
            java.lang.String r0 = ""
            java.lang.String r2 = r2.replace(r3, r0)
            r4[r1] = r2
            java.lang.String r1 = "content://%s/%s/%s"
            java.lang.String r1 = java.lang.String.format(r1, r4)
            android.net.Uri r1 = android.net.Uri.parse(r1)
            return r1
        L61:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
        L67:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>()
            throw r1
    }

    public static int update(android.content.Context r0, android.net.Uri r1, android.content.ContentValues r2, java.lang.String r3, java.lang.String[] r4) {
            android.net.Uri r1 = toCalledUri(r0, r1)
            android.content.ContentResolver r0 = r0.getContentResolver()
            int r0 = r0.update(r1, r2, r3, r4)
            return r0
    }
}
