package com.ymnsdk.replugin.entity;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginFailInfo {
    static java.util.Map<java.lang.String, java.lang.String> failInfo;

    public PluginFailInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ymnsdk.replugin.entity.PluginFailInfo getInstance() {
            com.ymnsdk.replugin.entity.PluginFailInfo r0 = new com.ymnsdk.replugin.entity.PluginFailInfo
            r0.<init>()
            return r0
    }

    public java.lang.String getPluginFailInfo(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = com.ymnsdk.replugin.entity.PluginFailInfo.failInfo
            java.lang.String r1 = ""
            if (r0 != 0) goto Le
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            com.ymnsdk.replugin.entity.PluginFailInfo.failInfo = r3
            return r1
        Le:
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L1d
            java.util.Map<java.lang.String, java.lang.String> r0 = com.ymnsdk.replugin.entity.PluginFailInfo.failInfo
            java.lang.Object r3 = r0.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            return r3
        L1d:
            return r1
    }

    public void savePluginFailInfo(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = com.ymnsdk.replugin.entity.PluginFailInfo.failInfo
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.ymnsdk.replugin.entity.PluginFailInfo.failInfo = r0
        Lb:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.ymnsdk.replugin.entity.PluginFailInfo.failInfo
            r0.put(r2, r3)
            return
    }
}
