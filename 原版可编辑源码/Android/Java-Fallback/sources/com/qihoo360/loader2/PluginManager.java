package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginManager {
    public static final int COUNTER_MAX = 10;
    public static final int PROCESS_AUTO = Integer.MIN_VALUE;
    private static final java.util.regex.Pattern PROCESS_NAME_PATTERN = null;

    @java.lang.Deprecated
    static int sPluginProcessIndex;

    @java.lang.Deprecated
    static int sUid;

    static {
            java.lang.String r0 = "^(.*):loader([0-1])$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.qihoo360.loader2.PluginManager.PROCESS_NAME_PATTERN = r0
            r0 = -1
            com.qihoo360.loader2.PluginManager.sPluginProcessIndex = r0
            return
    }

    public PluginManager() {
            r0 = this;
            r0.<init>()
            return
    }

    static final int evalPluginProcess(java.lang.String r6) {
            java.lang.String r0 = "ws001"
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            java.lang.String r2 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> Ld0
            boolean r2 = android.text.TextUtils.equals(r2, r6)     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto L19
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Ld0
            if (r6 == 0) goto L17
            java.lang.String r6 = "plugin process checker: default, index=0"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> Ld0
        L17:
            r6 = -1
            return r6
        L19:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Ld0
            if (r2 != 0) goto L38
            java.lang.String r2 = ":p"
            boolean r2 = r6.contains(r2)     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto L38
            java.lang.String r6 = com.qihoo360.replugin.component.process.PluginProcessHost.processTail(r6)     // Catch: java.lang.Throwable -> Ld0
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP     // Catch: java.lang.Throwable -> Ld0
            java.lang.Object r6 = r2.get(r6)     // Catch: java.lang.Throwable -> Ld0
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Throwable -> Ld0
            int r6 = r6.intValue()     // Catch: java.lang.Throwable -> Ld0
            return r6
        L38:
            java.util.regex.Pattern r2 = com.qihoo360.loader2.PluginManager.PROCESS_NAME_PATTERN     // Catch: java.lang.Throwable -> Ld0
            java.util.regex.Matcher r2 = r2.matcher(r6)     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto Lb7
            boolean r3 = r2.matches()     // Catch: java.lang.Throwable -> Ld0
            if (r3 != 0) goto L47
            goto Lb7
        L47:
            java.util.regex.MatchResult r2 = r2.toMatchResult()     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto L9e
            int r3 = r2.groupCount()     // Catch: java.lang.Throwable -> Ld0
            r4 = 2
            if (r3 == r4) goto L55
            goto L9e
        L55:
            r3 = 1
            java.lang.String r3 = r2.group(r3)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r5 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> Ld0
            boolean r3 = android.text.TextUtils.equals(r5, r3)     // Catch: java.lang.Throwable -> Ld0
            if (r3 != 0) goto L7d
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto L7c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld0
            r2.<init>()     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r3 = "plugin process checker: package name not match in="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld0
            r2.append(r6)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Ld0
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> Ld0
        L7c:
            return r1
        L7d:
            java.lang.String r6 = r2.group(r4)     // Catch: java.lang.Throwable -> Ld0
            int r1 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> Ld0
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Ld0
            if (r6 == 0) goto Ldc
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld0
            r6.<init>()     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r2 = "plugin process checker: index="
            r6.append(r2)     // Catch: java.lang.Throwable -> Ld0
            r6.append(r1)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> Ld0
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> Ld0
            goto Ldc
        L9e:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto Lb6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld0
            r2.<init>()     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r3 = "plugin process checker: no group in="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld0
            r2.append(r6)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Ld0
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> Ld0
        Lb6:
            return r1
        Lb7:
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Ld0
            if (r2 == 0) goto Lcf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ld0
            r2.<init>()     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r3 = "plugin process checker: non plugin process in="
            r2.append(r3)     // Catch: java.lang.Throwable -> Ld0
            r2.append(r6)     // Catch: java.lang.Throwable -> Ld0
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> Ld0
            com.qihoo360.replugin.helper.LogDebug.d(r0, r6)     // Catch: java.lang.Throwable -> Ld0
        Lcf:
            return r1
        Ld0:
            r6 = move-exception
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.getMessage()
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2, r6)
        Ldc:
            return r1
    }

    static final int getPluginProcessIndex() {
            int r0 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            return r0
    }

    @java.lang.Deprecated
    static final void init(android.content.Context r0) {
            com.qihoo360.mobilesafe.api.Tasks.init()
            int r0 = android.os.Process.myUid()
            com.qihoo360.loader2.PluginManager.sUid = r0
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            int r0 = evalPluginProcess(r0)
            com.qihoo360.loader2.PluginManager.sPluginProcessIndex = r0
            return
    }

    public static final boolean isPluginProcess() {
            int r0 = com.qihoo360.loader2.PluginManager.sPluginProcessIndex
            if (r0 < 0) goto L9
            r1 = 2
            if (r0 >= r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    static final boolean isPluginProcess(int r1) {
            if (r1 < 0) goto L7
            r0 = 2
            if (r1 >= r0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            return r1
    }

    public static final boolean isValidActivityProcess(int r1) {
            r0 = -1
            if (r1 == r0) goto L10
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r1 == r0) goto L10
            boolean r1 = isPluginProcess(r1)
            if (r1 == 0) goto Le
            goto L10
        Le:
            r1 = 0
            return r1
        L10:
            r1 = 1
            return r1
    }
}
