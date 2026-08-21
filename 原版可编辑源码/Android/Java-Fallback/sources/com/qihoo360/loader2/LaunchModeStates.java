package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class LaunchModeStates {
    public static final java.lang.String TAG = "launchMode";
    private java.util.Map<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState>> mStates;

    LaunchModeStates() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mStates = r0
            return
    }

    private static java.lang.String getInfix(int r0, boolean r1) {
            java.lang.String r0 = getLaunchModeInfix(r0)
            if (r1 == 0) goto L11
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "TS"
            goto L1b
        L11:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "NTS"
        L1b:
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    private static java.lang.String getLaunchModeInfix(int r1) {
            r0 = 1
            if (r1 == r0) goto L12
            r0 = 2
            if (r1 == r0) goto Lf
            r0 = 3
            if (r1 == r0) goto Lc
            java.lang.String r1 = "NR"
            return r1
        Lc:
            java.lang.String r1 = "SI"
            return r1
        Lf:
            java.lang.String r1 = "ST"
            return r1
        L12:
            java.lang.String r1 = "STP"
            return r1
    }

    public static boolean isTranslucentTheme(int r1) {
            r0 = 16973839(0x103000f, float:2.4060942E-38)
            if (r1 == r0) goto L17
            r0 = 16973835(0x103000b, float:2.406093E-38)
            if (r1 == r0) goto L17
            r0 = 16973840(0x1030010, float:2.4060945E-38)
            if (r1 == r0) goto L17
            r0 = 16973841(0x1030011, float:2.4060948E-38)
            if (r1 != r0) goto L15
            goto L17
        L15:
            r1 = 0
            goto L18
        L17:
            r1 = 1
        L18:
            return r1
    }

    void addStates(java.util.Map<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> r5, java.util.HashSet<java.lang.String> r6, java.lang.String r7, int r8, boolean r9, int r10) {
            r4 = this;
            java.lang.String r8 = getInfix(r8, r9)
            java.util.Map<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState>> r9 = r4.mStates
            java.lang.Object r9 = r9.get(r8)
            java.util.HashMap r9 = (java.util.HashMap) r9
            if (r9 != 0) goto L18
            java.util.HashMap r9 = new java.util.HashMap
            r9.<init>()
            java.util.Map<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState>> r0 = r4.mStates
            r0.put(r8, r9)
        L18:
            r0 = 0
        L19:
            if (r0 >= r10) goto L63
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r8)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.qihoo360.replugin.RePluginConfig r2 = com.qihoo360.replugin.RePlugin.getConfig()
            boolean r2 = r2.isPrintDetailLog()
            if (r2 == 0) goto L52
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "LaunchModeStates.add("
            r2.append(r3)
            r2.append(r1)
            java.lang.String r3 = ")"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "launchMode"
            com.qihoo360.replugin.helper.LogDebug.d(r3, r2)
        L52:
            com.qihoo360.loader2.PluginContainers$ActivityState r2 = new com.qihoo360.loader2.PluginContainers$ActivityState
            r2.<init>(r1)
            r9.put(r1, r2)
            r5.put(r1, r2)
            r6.add(r1)
            int r0 = r0 + 1
            goto L19
        L63:
            return
    }

    java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> getStates(int r1, int r2) {
            r0 = this;
            boolean r2 = isTranslucentTheme(r2)
            java.lang.String r1 = getInfix(r1, r2)
            java.util.Map<java.lang.String, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState>> r2 = r0.mStates
            java.lang.Object r1 = r2.get(r1)
            java.util.HashMap r1 = (java.util.HashMap) r1
            return r1
    }
}
