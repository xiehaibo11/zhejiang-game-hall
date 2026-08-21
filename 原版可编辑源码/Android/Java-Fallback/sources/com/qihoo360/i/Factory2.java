package com.qihoo360.i;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class Factory2 {
    public static com.qihoo360.loader2.PluginLibraryInternalProxy sPLProxy;

    public Factory2() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final android.content.Context createActivityContext(android.app.Activity r1, android.content.Context r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            android.content.Context r1 = r0.createActivityContext(r1, r2)
            return r1
    }

    public static final org.json.JSONArray fetchPlugins(java.lang.String r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            org.json.JSONArray r1 = r0.fetchPlugins(r1)
            return r1
    }

    public static final java.lang.String getPluginByDynamicClass(java.lang.String r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            java.lang.String r1 = r0.getPluginByDynamicClass(r1)
            return r1
    }

    public static final void handleActivityCreate(android.app.Activity r1, android.os.Bundle r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleActivityCreate(r1, r2)
            return
    }

    public static final void handleActivityCreateBefore(android.app.Activity r1, android.os.Bundle r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleActivityCreateBefore(r1, r2)
            return
    }

    public static final void handleActivityDestroy(android.app.Activity r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleActivityDestroy(r1)
            return
    }

    public static final void handleRestoreInstanceState(android.app.Activity r1, android.os.Bundle r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleRestoreInstanceState(r1, r2)
            return
    }

    public static final void handleServiceCreate(android.app.Service r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleServiceCreate(r1)
            return
    }

    public static final void handleServiceDestroy(android.app.Service r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.handleServiceDestroy(r1)
            return
    }

    public static final boolean isDynamicClass(java.lang.String r1, java.lang.String r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.isDynamicClass(r1, r2)
            return r1
    }

    public static final boolean registerDynamicClass(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.Class r4) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.registerDynamicClass(r1, r2, r3, r4)
            return r1
    }

    public static final boolean registerDynamicClass(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.registerDynamicClass(r1, r2, r3, r4)
            return r1
    }

    public static final boolean startActivity(android.app.Activity r1, android.content.Intent r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.startActivity(r1, r2)
            return r1
    }

    public static final boolean startActivity(android.content.Context r1, android.content.Intent r2) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.startActivity(r1, r2)
            return r1
    }

    public static final boolean startActivity(android.content.Context r7, android.content.Intent r8, java.lang.String r9, java.lang.String r10, int r11, boolean r12) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            boolean r7 = r0.startActivity(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static final boolean startActivityForResult(android.app.Activity r1, android.content.Intent r2, int r3, android.os.Bundle r4) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            boolean r1 = r0.startActivityForResult(r1, r2, r3, r4)
            return r1
    }

    public static void unregisterDynamicClass(java.lang.String r1) {
            com.qihoo360.loader2.PluginLibraryInternalProxy r0 = com.qihoo360.i.Factory2.sPLProxy
            r0.unregisterDynamicClass(r1)
            return
    }
}
