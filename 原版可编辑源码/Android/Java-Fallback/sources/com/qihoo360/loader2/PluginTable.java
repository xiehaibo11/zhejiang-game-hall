package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginTable {
    static final java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> PLUGINS = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.qihoo360.loader2.PluginTable.PLUGINS = r0
            return
    }

    PluginTable() {
            r0 = this;
            r0.<init>()
            return
    }

    static final java.util.List<com.qihoo360.replugin.model.PluginInfo> buildPlugins() {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            java.lang.String r1 = "ws001"
            if (r0 == 0) goto Lb
            java.lang.String r0 = "build plugins"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        Lb:
            r0 = 0
            java.util.List r0 = com.qihoo360.loader2.MP.getPlugins(r0)
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L31
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "build "
            r2.append(r3)
            int r3 = r0.size()
            r2.append(r3)
            java.lang.String r3 = " plugins"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r2)
        L31:
            return r0
    }

    static final void dump(java.io.FileDescriptor r0, java.io.PrintWriter r1, java.lang.String[] r2) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.DUMP_ENABLED
            if (r0 == 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "--- PluginTable.size = "
            r0.append(r2)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r2 = com.qihoo360.loader2.PluginTable.PLUGINS
            int r2 = r2.size()
            r0.append(r2)
            java.lang.String r2 = " ---"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r1.println(r0)
            r0 = 0
            java.util.List r0 = com.qihoo360.loader2.MP.getPlugins(r0)
            java.util.Iterator r0 = r0.iterator()
        L2c:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r0.next()
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2
            r1.println(r2)
            goto L2c
        L3c:
            r1.println()
        L3f:
            return
    }

    static final com.qihoo360.replugin.model.PluginInfo getPluginInfo(java.lang.String r2) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r1 = com.qihoo360.loader2.PluginTable.PLUGINS     // Catch: java.lang.Throwable -> Ld
            java.lang.Object r2 = r1.get(r2)     // Catch: java.lang.Throwable -> Ld
            com.qihoo360.replugin.model.PluginInfo r2 = (com.qihoo360.replugin.model.PluginInfo) r2     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Ld
            throw r2
    }

    static final void initPlugins(java.util.Map<java.lang.String, com.qihoo360.loader2.Plugin> r2) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L1f
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L1f
        Lb:
            boolean r1 = r2.hasNext()     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.loader2.Plugin r1 = (com.qihoo360.loader2.Plugin) r1     // Catch: java.lang.Throwable -> L1f
            com.qihoo360.replugin.model.PluginInfo r1 = r1.mInfo     // Catch: java.lang.Throwable -> L1f
            putPluginInfo(r1)     // Catch: java.lang.Throwable -> L1f
            goto Lb
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            return
        L1f:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1f
            throw r2
    }

    private static void putPluginInfo(com.qihoo360.replugin.model.PluginInfo r2) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            java.lang.String r1 = r2.getPackageName()
            r0.put(r1, r2)
            java.lang.String r0 = r2.getAlias()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            java.lang.String r1 = r2.getAlias()
            r0.put(r1, r2)
        L1c:
            return
    }

    static final void removeInfo(com.qihoo360.replugin.model.PluginInfo r3) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r1 = com.qihoo360.loader2.PluginTable.PLUGINS     // Catch: java.lang.Throwable -> L3b
            java.lang.String r2 = r3.getName()     // Catch: java.lang.Throwable -> L3b
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L3b
            com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L16
            removePluginInfo(r3)     // Catch: java.lang.Throwable -> L3b
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "removeInfo plugin table: info="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r3 = " rc="
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L3a:
            return
        L3b:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            throw r3
    }

    private static void removePluginInfo(com.qihoo360.replugin.model.PluginInfo r2) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            java.lang.String r1 = r2.getPackageName()
            r0.remove(r1)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            java.lang.String r2 = r2.getAlias()
            r0.remove(r2)
            return
    }

    static final void replaceInfo(com.qihoo360.replugin.model.PluginInfo r3) {
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r1 = com.qihoo360.loader2.PluginTable.PLUGINS     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = r3.getName()     // Catch: java.lang.Throwable -> L41
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L41
            com.qihoo360.replugin.model.PluginInfo r1 = (com.qihoo360.replugin.model.PluginInfo) r1     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L1c
            boolean r1 = r1.canReplaceForPn(r3)     // Catch: java.lang.Throwable -> L41
            if (r1 == 0) goto L1c
            putPluginInfo(r3)     // Catch: java.lang.Throwable -> L41
            r1 = 1
            goto L1d
        L1c:
            r1 = 0
        L1d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L40
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "replace plugin table: info="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r3 = " rc="
            r0.append(r3)
            r0.append(r1)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)
        L40:
            return
        L41:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L41
            throw r3
    }

    static final void updatePlugin(com.qihoo360.replugin.model.PluginInfo r4) {
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L1a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "update plugin table: info="
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L1a:
            java.util.HashMap<java.lang.String, com.qihoo360.replugin.model.PluginInfo> r0 = com.qihoo360.loader2.PluginTable.PLUGINS
            monitor-enter(r0)
            com.qihoo360.replugin.RePluginConfig r1 = com.qihoo360.replugin.RePlugin.getConfig()     // Catch: java.lang.Throwable -> L4c
            com.qihoo360.replugin.RePluginCallbacks r1 = r1.getCallbacks()     // Catch: java.lang.Throwable -> L4c
            boolean r1 = r1.isPluginBlocked(r4)     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L47
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L4c
            if (r1 == 0) goto L45
            java.lang.String r1 = "ws001"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r2.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = "update plugin table: plugin is blocked, in="
            r2.append(r3)     // Catch: java.lang.Throwable -> L4c
            r2.append(r4)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Throwable -> L4c
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)     // Catch: java.lang.Throwable -> L4c
        L45:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4c
            return
        L47:
            putPluginInfo(r4)     // Catch: java.lang.Throwable -> L4c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4c
            return
        L4c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4c
            throw r4
    }
}
