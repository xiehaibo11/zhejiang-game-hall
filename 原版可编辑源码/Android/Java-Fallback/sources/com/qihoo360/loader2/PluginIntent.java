package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class PluginIntent {
    public static final java.lang.String EXTRA_ACTIVITY = "activity:";
    public static final java.lang.String EXTRA_CONTAINER = "container:";
    public static final java.lang.String EXTRA_COUNTER = "counter:";
    public static final java.lang.String EXTRA_PLUGIN = "plugin:";
    public static final java.lang.String EXTRA_PROCESS = "process:";
    private final android.content.Intent mIntent;

    PluginIntent(android.content.Intent r1) {
            r0 = this;
            r0.<init>()
            r0.mIntent = r1
            return
    }

    private final int getI(java.lang.String r4, int r5) {
            r3 = this;
            android.content.Intent r0 = r3.mIntent
            java.util.Set r0 = r0.getCategories()
            if (r0 == 0) goto L3e
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r1.startsWith(r4)
            if (r2 == 0) goto Lc
            int r4 = r4.length()
            java.lang.String r4 = r1.substring(r4)
            goto L29
        L27:
            java.lang.String r4 = ""
        L29:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L3e
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L34
            return r4
        L34:
            r4 = move-exception
            java.lang.String r0 = r4.getMessage()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r0, r4)
        L3e:
            return r5
    }

    private final java.lang.String getS(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = r3.mIntent
            java.util.Set r0 = r0.getCategories()
            if (r0 == 0) goto L27
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r1.startsWith(r4)
            if (r2 == 0) goto Lc
            int r4 = r4.length()
            java.lang.String r4 = r1.substring(r4)
            return r4
        L27:
            r4 = 0
            return r4
    }

    private final void remove(java.lang.String r4) {
            r3 = this;
            android.content.Intent r0 = r3.mIntent
            java.util.Set r0 = r0.getCategories()
            if (r0 == 0) goto L23
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r2 = r1.startsWith(r4)
            if (r2 == 0) goto Lc
            android.content.Intent r4 = r3.mIntent
            r4.removeCategory(r1)
        L23:
            return
    }

    private final void setI(java.lang.String r3, int r4) {
            r2 = this;
            r2.remove(r3)
            android.content.Intent r0 = r2.mIntent
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.addCategory(r3)
            return
    }

    private final void setS(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            r2.remove(r3)
            android.content.Intent r0 = r2.mIntent
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.addCategory(r3)
            return
    }

    final java.lang.String getActivity() {
            r1 = this;
            java.lang.String r0 = "activity:"
            java.lang.String r0 = r1.getS(r0)
            return r0
    }

    final java.lang.String getContainer() {
            r1 = this;
            java.lang.String r0 = "container:"
            java.lang.String r0 = r1.getS(r0)
            return r0
    }

    final int getCounter() {
            r2 = this;
            java.lang.String r0 = "counter:"
            r1 = 0
            int r0 = r2.getI(r0, r1)
            return r0
    }

    final java.lang.String getOriginal() {
            r1 = this;
            android.content.Intent r0 = r1.mIntent
            android.content.ComponentName r0 = r0.getComponent()
            if (r0 == 0) goto Ld
            java.lang.String r0 = r0.getClassName()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    final java.lang.String getPlugin() {
            r1 = this;
            java.lang.String r0 = "plugin:"
            java.lang.String r0 = r1.getS(r0)
            return r0
    }

    final int getProcess() {
            r2 = this;
            java.lang.String r0 = "process:"
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            int r0 = r2.getI(r0, r1)
            return r0
    }

    final void setActivity(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "activity:"
            r1.setS(r0, r2)
            return
    }

    final void setContainer(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "container:"
            r1.setS(r0, r2)
            return
    }

    final void setCounter(int r2) {
            r1 = this;
            java.lang.String r0 = "counter:"
            r1.setI(r0, r2)
            return
    }

    final void setPlugin(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "plugin:"
            r1.setS(r0, r2)
            return
    }

    final void setProcess(int r2) {
            r1 = this;
            java.lang.String r0 = "process:"
            r1.setI(r0, r2)
            return
    }
}
