package com.qihoo360.replugin.component.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginClientHelper {

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    public static class ShouldCallSystem extends java.lang.RuntimeException {
        private static final long serialVersionUID = -2987516993124234548L;

        public ShouldCallSystem() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public PluginClientHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.content.ComponentName getComponentNameByContext(android.content.Context r3, android.content.ComponentName r4) {
            if (r4 != 0) goto L4
            r3 = 0
            return r3
        L4:
            java.lang.String r0 = com.qihoo360.replugin.base.IPC.getPackageName()
            java.lang.String r1 = r4.getPackageName()
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 != 0) goto L13
            return r4
        L13:
            java.lang.ClassLoader r3 = r3.getClassLoader()
            java.lang.String r3 = com.qihoo360.i.Factory.fetchPluginName(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto L38
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "pch.iibc: pn is n. n="
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r1, r3)
            goto L58
        L38:
            java.lang.String r0 = "main"
            boolean r0 = android.text.TextUtils.equals(r3, r0)
            if (r0 == 0) goto L59
            boolean r3 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r3 == 0) goto L58
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "PluginClientHelper.iibc(): Call Main! n="
            r3.append(r0)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)
        L58:
            return r4
        L59:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L71
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "PluginClientHelper.iibc(): Call Plugin! n="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L71:
            android.content.ComponentName r0 = new android.content.ComponentName
            java.lang.String r4 = r4.getClassName()
            r0.<init>(r3, r4)
            return r0
    }

    public static java.lang.String getPluginName(android.content.pm.ComponentInfo r2) {
            if (r2 == 0) goto L19
            java.lang.String r0 = r2.packageName
            if (r0 == 0) goto L19
            java.lang.String r0 = r2.packageName
            java.lang.String r1 = "."
            int r0 = r0.lastIndexOf(r1)
            if (r0 <= 0) goto L19
            java.lang.String r2 = r2.packageName
            int r0 = r0 + 1
            java.lang.String r2 = r2.substring(r0)
            return r2
        L19:
            java.lang.String r2 = ""
            return r2
    }

    public static java.lang.Integer getProcessInt(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L48
            java.lang.String r0 = r3.toLowerCase()
            java.lang.String r1 = com.qihoo360.replugin.helper.HostConfigHelper.PERSISTENT_NAME
            java.lang.String r1 = r1.toLowerCase()
            boolean r1 = r0.contains(r1)
            r2 = -2
            if (r1 == 0) goto L1c
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            return r3
        L1c:
            java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPersistentProcessName()
            java.lang.String r1 = r1.toLowerCase()
            boolean r0 = android.text.TextUtils.equals(r0, r1)
            if (r0 == 0) goto L2f
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            return r3
        L2f:
            java.lang.String r3 = r3.toLowerCase()
            java.lang.String r3 = com.qihoo360.replugin.component.process.PluginProcessHost.processTail(r3)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L48
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.qihoo360.replugin.component.process.PluginProcessHost.PROCESS_INT_MAP
            java.lang.Object r3 = r0.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            return r3
        L48:
            r3 = -1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            return r3
    }
}
