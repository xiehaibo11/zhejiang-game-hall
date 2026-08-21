package com.qihoo360.replugin.component.process;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginProcessHost {
    public static final java.util.Map<java.lang.String, java.lang.String> PROCESS_ADJUST_MAP = null;
    public static final android.util.SparseArray<java.lang.String> PROCESS_AUTHORITY_MAP = null;
    public static final int PROCESS_COUNT = 3;
    public static final int PROCESS_INIT = -100;
    public static final java.util.Map<java.lang.String, java.lang.Integer> PROCESS_INT_MAP = null;
    public static final java.lang.String PROCESS_PLUGIN_SUFFIX = "p";
    public static final java.lang.String PROCESS_PLUGIN_SUFFIX2 = ":p";

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_ADJUST_MAP = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_AUTHORITY_MAP = r0
            r0 = 0
        L16:
            r1 = 3
            if (r0 >= r1) goto L81
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = ":p"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            int r3 = r0 + (-100)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r3)
            r1.put(r2, r4)
            java.util.Map<java.lang.String, java.lang.String> r1 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_ADJUST_MAP
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "$p"
            r2.append(r4)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = com.qihoo360.replugin.base.IPC.getPackageName()
            r4.append(r5)
            java.lang.String r5 = ":"
            r4.append(r5)
            java.lang.String r5 = "p"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r1.put(r2, r4)
            android.util.SparseArray<java.lang.String> r1 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_AUTHORITY_MAP
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = com.qihoo360.replugin.component.provider.PluginPitProviderBase.AUTHORITY_PREFIX
            r2.append(r4)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r1.put(r3, r2)
            int r0 = r0 + 1
            goto L16
        L81:
            return
    }

    public PluginProcessHost() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isCustomPluginProcess(int r1) {
            r0 = -100
            if (r1 < r0) goto La
            r0 = -97
            if (r1 >= r0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static java.lang.String processTail(java.lang.String r1) {
            r0 = 58
            int r0 = r1.indexOf(r0)
            if (r0 < 0) goto L10
            java.lang.String r1 = r1.toLowerCase()
            java.lang.String r1 = r1.substring(r0)
        L10:
            return r1
    }
}
