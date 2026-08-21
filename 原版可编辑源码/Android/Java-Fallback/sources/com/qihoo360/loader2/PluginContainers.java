package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginContainers {
    private static final java.lang.String CONTAINER_ACTIVITY_PART = ".loader.a.Activity";
    private static final int STATE_NONE = 0;
    private static final int STATE_OCCUPIED = 1;
    private static final int STATE_RESTORED = 2;
    private com.qihoo360.loader2.LaunchModeStates mLaunchModeStates;
    private final java.lang.Object mLock;
    private final java.util.Map<java.lang.String, com.qihoo360.loader2.ProcessStates> mProcessStatesMap;
    private java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> mStates;
    private com.qihoo360.loader2.TaskAffinityStates mTaskAffinityStates;

    /* JADX WARN: Classes with same name are omitted, all sources:
      classes.dex
      classes3.dex
     */
    static final class ActivityState {
        java.lang.String activity;
        final java.lang.String container;
        java.lang.String plugin;
        final java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> refs;
        int state;
        long timestamp;

        public ActivityState(com.qihoo360.loader2.PluginContainers.ActivityState r3) {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = r3.container
                r2.container = r0
                int r0 = r3.state
                r2.state = r0
                java.lang.String r0 = r3.plugin
                r2.plugin = r0
                java.lang.String r0 = r3.activity
                r2.activity = r0
                long r0 = r3.timestamp
                r2.timestamp = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r3 = r3.refs
                r0.<init>(r3)
                r2.refs = r0
                return
        }

        ActivityState(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.container = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.refs = r1
                return
        }

        static void access$100(com.qihoo360.loader2.PluginContainers.ActivityState r0, java.lang.String r1, java.lang.String r2, long r3) {
                r0.restore(r1, r2, r3)
                return
        }

        static void access$200(com.qihoo360.loader2.PluginContainers.ActivityState r0, java.lang.String r1, java.lang.String r2) {
                r0.occupy(r1, r2)
                return
        }

        static boolean access$300(com.qihoo360.loader2.PluginContainers.ActivityState r0, java.lang.String r1, java.lang.String r2) {
                boolean r0 = r0.isTarget(r1, r2)
                return r0
        }

        static boolean access$400(com.qihoo360.loader2.PluginContainers.ActivityState r0) {
                boolean r0 = r0.hasRef()
                return r0
        }

        static void access$500(com.qihoo360.loader2.PluginContainers.ActivityState r0) {
                r0.recycle()
                return
        }

        static void access$600(com.qihoo360.loader2.PluginContainers.ActivityState r0) {
                r0.finishRefs()
                return
        }

        static void access$700(com.qihoo360.loader2.PluginContainers.ActivityState r0, java.lang.String r1, android.app.Activity r2) {
                r0.create(r1, r2)
                return
        }

        static void access$800(com.qihoo360.loader2.PluginContainers.ActivityState r0, android.app.Activity r1) {
                r0.removeRef(r1)
                return
        }

        private final void addRef(android.app.Activity r3) {
                r2 = this;
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.refs
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L19
                java.lang.Object r1 = r0.next()
                java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
                java.lang.Object r1 = r1.get()
                if (r1 != r3) goto L6
                return
            L19:
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.refs
                java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
                r1.<init>(r3)
                r0.add(r1)
                return
        }

        private final void cleanRefs() {
                r4 = this;
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L37
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r4.refs
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L37
                java.lang.Object r1 = r0.next()
                java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
                java.lang.Object r2 = r1.get()
                if (r2 == 0) goto La
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "PACM: clean refs: exist a="
                r2.append(r3)
                java.lang.Object r1 = r1.get()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                java.lang.String r2 = "ws001"
                com.qihoo360.replugin.helper.LogDebug.w(r2, r1)
                goto La
            L37:
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r4.refs
                r0.clear()
                return
        }

        private final void create(java.lang.String r5, android.app.Activity r6) {
                r4 = this;
                int r0 = r4.state
                r1 = 2
                java.lang.String r2 = "ws001"
                r3 = 1
                if (r0 == r3) goto L40
                if (r0 != r1) goto Lb
                goto L40
            Lb:
                if (r0 != 0) goto L17
                boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r5 == 0) goto L16
                java.lang.String r5 = "PACM: create: relaunch activity: blank"
                com.qihoo360.replugin.helper.LogDebug.i(r2, r5)
            L16:
                return
            L17:
                boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r5 == 0) goto L3f
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r6 = "PACM: create: invalid s="
                r5.append(r6)
                int r6 = r4.state
                java.lang.String r6 = toName(r6)
                r5.append(r6)
                java.lang.String r6 = " e=registered c="
                r5.append(r6)
                java.lang.String r6 = r4.container
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.qihoo360.replugin.helper.LogDebug.w(r2, r5)
            L3f:
                return
            L40:
                java.lang.String r0 = r4.plugin
                boolean r0 = android.text.TextUtils.equals(r0, r5)
                if (r0 != 0) goto L6b
                boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r6 == 0) goto L6a
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r0 = "PACM: create: invalid plugin="
                r6.append(r0)
                r6.append(r5)
                java.lang.String r5 = " this.plugin="
                r6.append(r5)
                java.lang.String r5 = r4.plugin
                r6.append(r5)
                java.lang.String r5 = r6.toString()
                com.qihoo360.replugin.helper.LogDebug.w(r2, r5)
            L6a:
                return
            L6b:
                java.lang.String r0 = r4.activity
                java.lang.Class r3 = r6.getClass()
                java.lang.String r3 = r3.getName()
                boolean r0 = android.text.TextUtils.equals(r0, r3)
                if (r0 != 0) goto La6
                boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r5 == 0) goto La5
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r0 = "PACM: create: invalid a="
                r5.append(r0)
                java.lang.Class r6 = r6.getClass()
                java.lang.String r6 = r6.getName()
                r5.append(r6)
                java.lang.String r6 = " this.a="
                r5.append(r6)
                java.lang.String r6 = r4.activity
                r5.append(r6)
                java.lang.String r5 = r5.toString()
                com.qihoo360.replugin.helper.LogDebug.w(r2, r5)
            La5:
                return
            La6:
                int r0 = r4.state
                if (r0 != r1) goto Ld4
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto Ld4
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PACM: create: relaunch activity: history: container="
                r0.append(r1)
                java.lang.String r1 = r4.container
                r0.append(r1)
                java.lang.String r1 = " plugin="
                r0.append(r1)
                r0.append(r5)
                java.lang.String r5 = " activity="
                r0.append(r5)
                r0.append(r6)
                java.lang.String r5 = r0.toString()
                com.qihoo360.replugin.helper.LogDebug.i(r2, r5)
            Ld4:
                r4.addRef(r6)
                long r5 = java.lang.System.currentTimeMillis()
                r4.timestamp = r5
                return
        }

        private final void finishRefs() {
                r2 = this;
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.refs
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
                java.lang.Object r1 = r1.get()
                android.app.Activity r1 = (android.app.Activity) r1
                if (r1 == 0) goto L6
                r1.finish()
                goto L6
            L1e:
                return
        }

        private final boolean hasRef() {
                r3 = this;
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r3.refs
                int r0 = r0.size()
                r1 = 1
                int r0 = r0 - r1
            L8:
                if (r0 < 0) goto L20
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r2 = r3.refs
                java.lang.Object r2 = r2.get(r0)
                java.lang.ref.WeakReference r2 = (java.lang.ref.WeakReference) r2
                java.lang.Object r2 = r2.get()
                if (r2 != 0) goto L1d
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r2 = r3.refs
                r2.remove(r0)
            L1d:
                int r0 = r0 + (-1)
                goto L8
            L20:
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r3.refs
                int r0 = r0.size()
                if (r0 <= 0) goto L29
                goto L2a
            L29:
                r1 = 0
            L2a:
                return r1
        }

        private final boolean isTarget(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r0 = r1.plugin
                boolean r2 = android.text.TextUtils.equals(r0, r2)
                if (r2 == 0) goto L12
                java.lang.String r2 = r1.activity
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L12
                r2 = 1
                return r2
            L12:
                r2 = 0
                return r2
        }

        private final void occupy(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 != 0) goto L27
                boolean r0 = android.text.TextUtils.isEmpty(r4)
                if (r0 == 0) goto Ld
                goto L27
            Ld:
                r0 = 1
                r2.state = r0
                r2.plugin = r3
                r2.activity = r4
                r2.cleanRefs()
                long r3 = java.lang.System.currentTimeMillis()
                r2.timestamp = r3
                java.lang.String r3 = r2.plugin
                java.lang.String r4 = r2.activity
                java.lang.String r0 = r2.container
                com.qihoo360.loader2.PluginContainers.access$000(r3, r4, r0)
                return
            L27:
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L57
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "PACM: occupy: invalid s="
                r0.append(r1)
                int r1 = r2.state
                java.lang.String r1 = toName(r1)
                r0.append(r1)
                java.lang.String r1 = " plugin="
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = " activity="
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "ws001"
                com.qihoo360.replugin.helper.LogDebug.w(r4, r3)
            L57:
                return
        }

        private final void recycle() {
                r2 = this;
                r0 = 0
                r2.state = r0
                r0 = 0
                r2.plugin = r0
                r2.activity = r0
                r2.cleanRefs()
                long r0 = java.lang.System.currentTimeMillis()
                r2.timestamp = r0
                return
        }

        private final void removeRef(android.app.Activity r3) {
                r2 = this;
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r0 = r2.refs
                int r0 = r0.size()
                int r0 = r0 + (-1)
            L8:
                if (r0 < 0) goto L21
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r1 = r2.refs
                java.lang.Object r1 = r1.get(r0)
                java.lang.ref.WeakReference r1 = (java.lang.ref.WeakReference) r1
                java.lang.Object r1 = r1.get()
                if (r1 != r3) goto L1e
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r3 = r2.refs
                r3.remove(r0)
                goto L21
            L1e:
                int r0 = r0 + (-1)
                goto L8
            L21:
                return
        }

        private final void restore(java.lang.String r2, java.lang.String r3, long r4) {
                r1 = this;
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L1a
                boolean r0 = android.text.TextUtils.isEmpty(r3)
                if (r0 == 0) goto Ld
                goto L1a
            Ld:
                r0 = 2
                r1.state = r0
                r1.plugin = r2
                r1.activity = r3
                r1.cleanRefs()
                r1.timestamp = r4
                return
            L1a:
                boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r4 == 0) goto L4a
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "PACM: restore: invalid s="
                r4.append(r5)
                int r5 = r1.state
                java.lang.String r5 = toName(r5)
                r4.append(r5)
                java.lang.String r5 = " plugin="
                r4.append(r5)
                r4.append(r2)
                java.lang.String r2 = " activity="
                r4.append(r2)
                r4.append(r3)
                java.lang.String r2 = r4.toString()
                java.lang.String r3 = "ws001"
                com.qihoo360.replugin.helper.LogDebug.w(r3, r2)
            L4a:
                return
        }

        static final java.lang.String toName(int r1) {
                if (r1 == 0) goto L11
                r0 = 1
                if (r1 == r0) goto Le
                r0 = 2
                if (r1 == r0) goto Lb
                java.lang.String r1 = "unknown"
                return r1
            Lb:
                java.lang.String r1 = "restored"
                return r1
            Le:
                java.lang.String r1 = "occupied"
                return r1
            L11:
                java.lang.String r1 = "none"
                return r1
        }

        final void forwardSelf(android.app.Activity r4, android.content.Intent r5) {
                r3 = this;
                com.qihoo360.loader2.PluginIntent r0 = new com.qihoo360.loader2.PluginIntent     // Catch: java.lang.Throwable -> L31
                r0.<init>(r5)     // Catch: java.lang.Throwable -> L31
                java.lang.String r1 = r3.plugin     // Catch: java.lang.Throwable -> L31
                r0.setPlugin(r1)     // Catch: java.lang.Throwable -> L31
                java.lang.String r1 = r3.activity     // Catch: java.lang.Throwable -> L31
                r0.setActivity(r1)     // Catch: java.lang.Throwable -> L31
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                r0.setProcess(r1)     // Catch: java.lang.Throwable -> L31
                java.lang.String r1 = r3.container     // Catch: java.lang.Throwable -> L31
                r0.setContainer(r1)     // Catch: java.lang.Throwable -> L31
                java.lang.String r0 = "compatible"
                r1 = 1
                r5.putExtra(r0, r1)     // Catch: java.lang.Throwable -> L31
                android.content.ComponentName r0 = new android.content.ComponentName     // Catch: java.lang.Throwable -> L31
                java.lang.String r1 = com.qihoo360.replugin.base.IPC.getPackageName()     // Catch: java.lang.Throwable -> L31
                java.lang.String r2 = r3.container     // Catch: java.lang.Throwable -> L31
                r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L31
                r5.setComponent(r0)     // Catch: java.lang.Throwable -> L31
                r4.startActivity(r5)     // Catch: java.lang.Throwable -> L31
                goto L4c
            L31:
                r4 = move-exception
                java.lang.StringBuilder r5 = new java.lang.StringBuilder
                r5.<init>()
                java.lang.String r0 = "f.a fs: "
                r5.append(r0)
                java.lang.String r0 = r4.getMessage()
                r5.append(r0)
                java.lang.String r5 = r5.toString()
                java.lang.String r0 = "ws001"
                com.qihoo360.replugin.helper.LogRelease.e(r0, r5, r4)
            L4c:
                return
        }

        public java.lang.String toString() {
                r6 = this;
                boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
                if (r0 == 0) goto L7d
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = " state="
                r0.append(r1)
                int r1 = r6.state
                java.lang.String r1 = toName(r1)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = " plugin="
                r1.append(r2)
                java.lang.String r2 = r6.plugin
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = " activity="
                r2.append(r3)
                java.lang.String r3 = r6.activity
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = " size="
                r3.append(r4)
                java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r4 = r6.refs
                int r4 = r4.size()
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "ActivityState {container="
                r4.append(r5)
                java.lang.String r5 = r6.container
                r4.append(r5)
                r4.append(r0)
                r4.append(r1)
                r4.append(r2)
                r4.append(r3)
                java.lang.String r0 = "}"
                r4.append(r0)
                java.lang.String r0 = r4.toString()
                return r0
            L7d:
                java.lang.String r0 = super.toString()
                return r0
        }
    }

    public PluginContainers() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.mLock = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mStates = r0
            com.qihoo360.loader2.TaskAffinityStates r0 = new com.qihoo360.loader2.TaskAffinityStates
            r0.<init>()
            r1.mTaskAffinityStates = r0
            com.qihoo360.loader2.LaunchModeStates r0 = new com.qihoo360.loader2.LaunchModeStates
            r0.<init>()
            r1.mLaunchModeStates = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mProcessStatesMap = r0
            return
    }

    static void access$000(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            save2Pref(r0, r1, r2)
            return
    }

    private final com.qihoo360.loader2.PluginContainers.ActivityState allocLocked(android.content.pm.ActivityInfo r8, java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers.ActivityState> r9, java.lang.String r10, java.lang.String r11, android.content.Intent r12) {
            r7 = this;
            r8 = 0
            java.lang.String r12 = "ws001"
            if (r9 != 0) goto Lf
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto Le
            java.lang.String r9 = "PACM: alloc fail, map is null"
            com.qihoo360.replugin.helper.LogDebug.d(r12, r9)
        Le:
            return r8
        Lf:
            java.util.Collection r0 = r9.values()
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L44
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.PluginContainers$ActivityState r1 = (com.qihoo360.loader2.PluginContainers.ActivityState) r1
            boolean r2 = com.qihoo360.loader2.PluginContainers.ActivityState.access$300(r1, r10, r11)
            if (r2 == 0) goto L17
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L43
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "PACM: alloc registered container="
            r8.append(r9)
            java.lang.String r9 = r1.container
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r12, r8)
        L43:
            return r1
        L44:
            java.util.Collection r0 = r9.values()
            java.util.Iterator r0 = r0.iterator()
        L4c:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L7a
            java.lang.Object r1 = r0.next()
            com.qihoo360.loader2.PluginContainers$ActivityState r1 = (com.qihoo360.loader2.PluginContainers.ActivityState) r1
            int r2 = r1.state
            if (r2 != 0) goto L4c
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L76
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "PACM: alloc empty container="
            r8.append(r9)
            java.lang.String r9 = r1.container
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r12, r8)
        L76:
            com.qihoo360.loader2.PluginContainers.ActivityState.access$200(r1, r10, r11)
            return r1
        L7a:
            java.util.Collection r0 = r9.values()
            java.util.Iterator r0 = r0.iterator()
            r1 = r8
        L83:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto La2
            java.lang.Object r2 = r0.next()
            com.qihoo360.loader2.PluginContainers$ActivityState r2 = (com.qihoo360.loader2.PluginContainers.ActivityState) r2
            boolean r3 = com.qihoo360.loader2.PluginContainers.ActivityState.access$400(r2)
            if (r3 != 0) goto L83
            if (r1 != 0) goto L98
            goto La0
        L98:
            long r3 = r2.timestamp
            long r5 = r1.timestamp
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 >= 0) goto L83
        La0:
            r1 = r2
            goto L83
        La2:
            if (r1 == 0) goto Lc2
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto Lbe
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "PACM: alloc recycled container="
            r8.append(r9)
            java.lang.String r9 = r1.container
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r12, r8)
        Lbe:
            com.qihoo360.loader2.PluginContainers.ActivityState.access$200(r1, r10, r11)
            return r1
        Lc2:
            java.util.Collection r9 = r9.values()
            java.util.Iterator r9 = r9.iterator()
            r0 = r8
        Lcb:
            boolean r1 = r9.hasNext()
            if (r1 == 0) goto Le4
            java.lang.Object r1 = r9.next()
            com.qihoo360.loader2.PluginContainers$ActivityState r1 = (com.qihoo360.loader2.PluginContainers.ActivityState) r1
            if (r0 != 0) goto Lda
            goto Le2
        Lda:
            long r2 = r1.timestamp
            long r4 = r0.timestamp
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto Lcb
        Le2:
            r0 = r1
            goto Lcb
        Le4:
            if (r0 == 0) goto L107
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L100
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "PACM: force alloc container="
            r8.append(r9)
            java.lang.String r9 = r0.container
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r12, r8)
        L100:
            com.qihoo360.loader2.PluginContainers.ActivityState.access$600(r0)
            com.qihoo360.loader2.PluginContainers.ActivityState.access$200(r0, r10, r11)
            return r0
        L107:
            boolean r9 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r9 == 0) goto L127
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "PACM: alloc failed: plugin="
            r9.append(r0)
            r9.append(r10)
            java.lang.String r10 = " activity="
            r9.append(r10)
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            com.qihoo360.replugin.helper.LogDebug.w(r12, r9)
        L127:
            return r8
    }

    private void init2(java.lang.String r19, java.util.HashSet<java.lang.String> r20, com.qihoo360.loader2.ProcessStates r21, java.lang.String r22) {
            r18 = this;
            r0 = r18
            r1 = r19
            r2 = r21
            java.lang.String r3 = r22.toUpperCase()
            com.qihoo360.loader2.LaunchModeStates r4 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r5 = r0.mStates
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            r6.append(r3)
            java.lang.String r7 = r6.toString()
            int r10 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD
            r8 = 0
            r9 = 1
            r6 = r20
            r4.addStates(r5, r6, r7, r8, r9, r10)
            com.qihoo360.loader2.LaunchModeStates r11 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r12 = r0.mStates
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r3)
            java.lang.String r14 = r4.toString()
            int r17 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD
            r15 = 0
            r16 = 0
            r13 = r20
            r11.addStates(r12, r13, r14, r15, r16, r17)
            com.qihoo360.loader2.LaunchModeStates r4 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r5 = r0.mStates
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            r6.append(r3)
            java.lang.String r7 = r6.toString()
            int r10 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP
            r8 = 1
            r6 = r20
            r4.addStates(r5, r6, r7, r8, r9, r10)
            com.qihoo360.loader2.LaunchModeStates r11 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r12 = r0.mStates
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r3)
            java.lang.String r14 = r4.toString()
            int r17 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP
            r15 = 1
            r11.addStates(r12, r13, r14, r15, r16, r17)
            com.qihoo360.loader2.LaunchModeStates r4 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r5 = r0.mStates
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            r6.append(r3)
            java.lang.String r7 = r6.toString()
            int r10 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK
            r8 = 2
            r6 = r20
            r4.addStates(r5, r6, r7, r8, r9, r10)
            com.qihoo360.loader2.LaunchModeStates r11 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r12 = r0.mStates
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r3)
            java.lang.String r14 = r4.toString()
            int r17 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK
            r15 = 2
            r11.addStates(r12, r13, r14, r15, r16, r17)
            com.qihoo360.loader2.LaunchModeStates r4 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r5 = r0.mStates
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r1)
            r6.append(r3)
            java.lang.String r7 = r6.toString()
            int r10 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE
            r8 = 3
            r6 = r20
            r4.addStates(r5, r6, r7, r8, r9, r10)
            com.qihoo360.loader2.LaunchModeStates r11 = r2.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r12 = r0.mStates
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r1)
            r4.append(r3)
            java.lang.String r14 = r4.toString()
            int r17 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE
            r15 = 3
            r11.addStates(r12, r13, r14, r15, r16, r17)
            com.qihoo360.loader2.TaskAffinityStates r2 = r2.mTaskAffinityStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r4 = r0.mStates
            r5 = r20
            r2.init(r1, r3, r4, r5)
            return
    }

    private final void loadFromPref() {
            r10 = this;
            java.lang.String r0 = "ws001"
            java.util.Map r1 = com.qihoo360.mobilesafe.api.Pref.ipcGetAll()     // Catch: java.lang.Throwable -> Lc1
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lc1
            if (r2 == 0) goto L22
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r2.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = "PACM: restore table: size="
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc1
            int r3 = r1.size()     // Catch: java.lang.Throwable -> Lc1
            r2.append(r3)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lc1
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2)     // Catch: java.lang.Throwable -> Lc1
        L22:
            java.util.Set r1 = r1.entrySet()     // Catch: java.lang.Throwable -> Lc1
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lc1
        L2a:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Lc1
            if (r2 == 0) goto Lda
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Lc1
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> Lc1
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> Lc1
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> Lc1
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r4 = r10.mStates     // Catch: java.lang.Throwable -> Lc1
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> Lc1
            com.qihoo360.loader2.PluginContainers$ActivityState r4 = (com.qihoo360.loader2.PluginContainers.ActivityState) r4     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = ":"
            java.lang.String[] r5 = r5.split(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r4 == 0) goto L9f
            if (r5 == 0) goto L9f
            int r6 = r5.length     // Catch: java.lang.Throwable -> Lc1
            r7 = 3
            if (r6 != r7) goto L9f
            r2 = 0
            r2 = r5[r2]     // Catch: java.lang.Throwable -> Lc1
            r6 = 1
            r6 = r5[r6]     // Catch: java.lang.Throwable -> Lc1
            r7 = 2
            r5 = r5[r7]     // Catch: java.lang.Throwable -> Lc1
            long r7 = java.lang.Long.parseLong(r5)     // Catch: java.lang.Throwable -> Lc1
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lc1
            if (r5 == 0) goto L8f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r5.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r9 = "PACM: restore table:  container="
            r5.append(r9)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = " plugin="
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = " activity="
            r5.append(r3)     // Catch: java.lang.Throwable -> Lc1
            r5.append(r6)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> Lc1
            com.qihoo360.replugin.helper.LogDebug.d(r0, r3)     // Catch: java.lang.Throwable -> Lc1
        L8f:
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lc1
            if (r3 != 0) goto L2a
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> Lc1
            if (r3 != 0) goto L2a
            com.qihoo360.loader2.PluginContainers.ActivityState.access$100(r4, r2, r6, r7)     // Catch: java.lang.Throwable -> Lc1
            goto L2a
        L9f:
            boolean r4 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> Lc1
            if (r4 == 0) goto L2a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc1
            r4.<init>()     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r5 = "PACM: invalid table: k="
            r4.append(r5)     // Catch: java.lang.Throwable -> Lc1
            r4.append(r3)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r3 = " v="
            r4.append(r3)     // Catch: java.lang.Throwable -> Lc1
            r4.append(r2)     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> Lc1
            com.qihoo360.replugin.helper.LogDebug.w(r0, r2)     // Catch: java.lang.Throwable -> Lc1
            goto L2a
        Lc1:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "PACM: init e="
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.qihoo360.replugin.helper.LogRelease.e(r0, r2, r1)
        Lda:
            return
    }

    static final java.lang.String[] resolvePluginActivity(java.lang.String r3) {
            java.lang.String r0 = ""
            java.lang.String r0 = com.qihoo360.mobilesafe.api.Pref.ipcGet(r3, r0)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L28
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PACM: load special pref: k="
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " v="
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r3)
        L28:
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L30
            r3 = 0
            return r3
        L30:
            java.lang.String r3 = ":"
            java.lang.String[] r3 = r0.split(r3)
            return r3
    }

    private static final void save2Pref(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            r0.append(r2)
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            boolean r2 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r2 == 0) goto L40
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "PACM: save 2 pref: k="
            r2.append(r0)
            r2.append(r3)
            java.lang.String r0 = " v="
            r2.append(r0)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r0, r2)
        L40:
            com.qihoo360.mobilesafe.api.Pref.ipcSet(r3, r1)
            return
    }

    final java.lang.String alloc(android.content.pm.ActivityInfo r10, java.lang.String r11, java.lang.String r12, int r13, android.content.Intent r14) {
            r9 = this;
            android.content.pm.ApplicationInfo r13 = r10.applicationInfo
            java.lang.String r13 = r13.packageName
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L20
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "originTaskAffinity is "
            r0.append(r1)
            java.lang.String r1 = r10.taskAffinity
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "task-affinity"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L20:
            int r0 = r10.launchMode
            r1 = 3
            if (r0 != r1) goto L40
            java.lang.Object r0 = r9.mLock
            monitor-enter(r0)
            com.qihoo360.loader2.LaunchModeStates r13 = r9.mLaunchModeStates     // Catch: java.lang.Throwable -> L3d
            int r1 = r10.launchMode     // Catch: java.lang.Throwable -> L3d
            int r2 = r10.theme     // Catch: java.lang.Throwable -> L3d
            java.util.HashMap r5 = r13.getStates(r1, r2)     // Catch: java.lang.Throwable -> L3d
            r3 = r9
            r4 = r10
            r6 = r11
            r7 = r12
            r8 = r14
            com.qihoo360.loader2.PluginContainers$ActivityState r10 = r3.allocLocked(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            goto L76
        L3d:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3d
            throw r10
        L40:
            java.lang.String r0 = r10.taskAffinity
            boolean r13 = r13.equals(r0)
            if (r13 != 0) goto L5f
            java.lang.Object r13 = r9.mLock
            monitor-enter(r13)
            com.qihoo360.loader2.TaskAffinityStates r0 = r9.mTaskAffinityStates     // Catch: java.lang.Throwable -> L5c
            java.util.HashMap r3 = r0.getStates(r10)     // Catch: java.lang.Throwable -> L5c
            r1 = r9
            r2 = r10
            r4 = r11
            r5 = r12
            r6 = r14
            com.qihoo360.loader2.PluginContainers$ActivityState r10 = r1.allocLocked(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L5c
            monitor-exit(r13)     // Catch: java.lang.Throwable -> L5c
            goto L76
        L5c:
            r10 = move-exception
            monitor-exit(r13)     // Catch: java.lang.Throwable -> L5c
            throw r10
        L5f:
            java.lang.Object r13 = r9.mLock
            monitor-enter(r13)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates     // Catch: java.lang.Throwable -> L7d
            int r1 = r10.launchMode     // Catch: java.lang.Throwable -> L7d
            int r2 = r10.theme     // Catch: java.lang.Throwable -> L7d
            java.util.HashMap r5 = r0.getStates(r1, r2)     // Catch: java.lang.Throwable -> L7d
            r3 = r9
            r4 = r10
            r6 = r11
            r7 = r12
            r8 = r14
            com.qihoo360.loader2.PluginContainers$ActivityState r10 = r3.allocLocked(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L7d
            monitor-exit(r13)     // Catch: java.lang.Throwable -> L7d
        L76:
            if (r10 == 0) goto L7b
            java.lang.String r10 = r10.container
            return r10
        L7b:
            r10 = 0
            return r10
        L7d:
            r10 = move-exception
            monitor-exit(r13)     // Catch: java.lang.Throwable -> L7d
            throw r10
    }

    java.lang.String alloc2(android.content.pm.ActivityInfo r9, java.lang.String r10, java.lang.String r11, int r12, android.content.Intent r13, java.lang.String r14) {
            r8 = this;
            java.util.Map<java.lang.String, com.qihoo360.loader2.ProcessStates> r12 = r8.mProcessStatesMap
            java.lang.Object r12 = r12.get(r14)
            com.qihoo360.loader2.ProcessStates r12 = (com.qihoo360.loader2.ProcessStates) r12
            android.content.pm.ApplicationInfo r14 = r9.applicationInfo
            java.lang.String r14 = r14.packageName
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L37
            r0 = 2
            java.lang.Object[] r1 = new java.lang.Object[r0]
            r2 = 0
            r1[r2] = r10
            r3 = 1
            r1[r3] = r14
            java.lang.String r4 = "插件 %s 默认 TaskAffinity 为 %s"
            java.lang.String r1 = java.lang.String.format(r4, r1)
            java.lang.String r4 = "task-affinity"
            com.qihoo360.replugin.helper.LogDebug.d(r4, r1)
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r11
            java.lang.String r1 = r9.taskAffinity
            r0[r3] = r1
            java.lang.String r1 = "%s 的 TaskAffinity 为 %s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            java.lang.String r1 = "task-affinity"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L37:
            int r0 = r9.launchMode
            r1 = 3
            if (r0 != r1) goto L57
            java.lang.Object r0 = r8.mLock
            monitor-enter(r0)
            com.qihoo360.loader2.LaunchModeStates r12 = r12.mLaunchModeStates     // Catch: java.lang.Throwable -> L54
            int r14 = r9.launchMode     // Catch: java.lang.Throwable -> L54
            int r1 = r9.theme     // Catch: java.lang.Throwable -> L54
            java.util.HashMap r4 = r12.getStates(r14, r1)     // Catch: java.lang.Throwable -> L54
            r2 = r8
            r3 = r9
            r5 = r10
            r6 = r11
            r7 = r13
            com.qihoo360.loader2.PluginContainers$ActivityState r9 = r2.allocLocked(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L54
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            goto L8d
        L54:
            r9 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            throw r9
        L57:
            java.lang.String r0 = r9.taskAffinity
            boolean r14 = r14.equals(r0)
            if (r14 != 0) goto L76
            java.lang.Object r14 = r8.mLock
            monitor-enter(r14)
            com.qihoo360.loader2.TaskAffinityStates r12 = r12.mTaskAffinityStates     // Catch: java.lang.Throwable -> L73
            java.util.HashMap r2 = r12.getStates(r9)     // Catch: java.lang.Throwable -> L73
            r0 = r8
            r1 = r9
            r3 = r10
            r4 = r11
            r5 = r13
            com.qihoo360.loader2.PluginContainers$ActivityState r9 = r0.allocLocked(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L73
            monitor-exit(r14)     // Catch: java.lang.Throwable -> L73
            goto L8d
        L73:
            r9 = move-exception
            monitor-exit(r14)     // Catch: java.lang.Throwable -> L73
            throw r9
        L76:
            java.lang.Object r14 = r8.mLock
            monitor-enter(r14)
            com.qihoo360.loader2.LaunchModeStates r12 = r12.mLaunchModeStates     // Catch: java.lang.Throwable -> L94
            int r0 = r9.launchMode     // Catch: java.lang.Throwable -> L94
            int r1 = r9.theme     // Catch: java.lang.Throwable -> L94
            java.util.HashMap r4 = r12.getStates(r0, r1)     // Catch: java.lang.Throwable -> L94
            r2 = r8
            r3 = r9
            r5 = r10
            r6 = r11
            r7 = r13
            com.qihoo360.loader2.PluginContainers$ActivityState r9 = r2.allocLocked(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L94
            monitor-exit(r14)     // Catch: java.lang.Throwable -> L94
        L8d:
            if (r9 == 0) goto L92
            java.lang.String r9 = r9.container
            return r9
        L92:
            r9 = 0
            return r9
        L94:
            r9 = move-exception
            monitor-exit(r14)     // Catch: java.lang.Throwable -> L94
            throw r9
    }

    final java.lang.String dump() {
            r7 = this;
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r7.mStates
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7c
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            com.qihoo360.loader2.PluginContainers$ActivityState r2 = (com.qihoo360.loader2.PluginContainers.ActivityState) r2
            java.lang.String r4 = r2.plugin
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lf
            java.lang.String r4 = r2.activity
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto Lf
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r5 = com.qihoo360.replugin.base.IPC.getCurrentProcessName()
            java.lang.String r6 = "process"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r6, r5)
            java.lang.String r5 = "className"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            java.lang.String r3 = r2.plugin
            java.lang.String r5 = "plugin"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            java.lang.String r3 = r2.activity
            java.lang.String r5 = "realClassName"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            int r3 = r2.state
            java.lang.String r3 = com.qihoo360.loader2.PluginContainers.ActivityState.toName(r3)
            java.lang.String r5 = "state"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r5, r3)
            java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r3 = r2.refs
            if (r3 == 0) goto L6e
            java.util.ArrayList<java.lang.ref.WeakReference<android.app.Activity>> r2 = r2.refs
            int r2 = r2.size()
            goto L6f
        L6e:
            r2 = 0
        L6f:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.String r3 = "refs"
            com.qihoo360.replugin.helper.JSONHelper.putNoThrows(r4, r3, r2)
            r0.put(r4)
            goto Lf
        L7c:
            java.lang.String r0 = r0.toString()
            return r0
    }

    final void forwardIntent(android.app.Activity r3, android.content.Intent r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, int r9) {
            r2 = this;
            java.lang.Object r9 = r2.mLock
            monitor-enter(r9)
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r0 = r2.mStates     // Catch: java.lang.Throwable -> L12f
            java.lang.Object r1 = r0.get(r5)     // Catch: java.lang.Throwable -> L12f
            com.qihoo360.loader2.PluginContainers$ActivityState r1 = (com.qihoo360.loader2.PluginContainers.ActivityState) r1     // Catch: java.lang.Throwable -> L12f
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L12f
            com.qihoo360.loader2.PluginContainers$ActivityState r0 = (com.qihoo360.loader2.PluginContainers.ActivityState) r0     // Catch: java.lang.Throwable -> L12f
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L12f
            if (r1 != 0) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "f.a fi: cc: inv c.c="
            r3.append(r4)
            r3.append(r5)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3)
            return
        L2b:
            if (r0 != 0) goto L44
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "f.a fi: cc: inv t.c="
            r3.append(r4)
            r3.append(r6)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r4, r3)
            return
        L44:
            int r5 = r0.state
            if (r5 != 0) goto L62
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "f.a fi: cc: ok, t.c empty, t.c="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r9, r5)
            com.qihoo360.loader2.PluginContainers.ActivityState.access$200(r0, r7, r8)
            goto La5
        L62:
            boolean r5 = com.qihoo360.loader2.PluginContainers.ActivityState.access$300(r0, r7, r8)
            if (r5 != 0) goto L8f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "f.a fi: cc: fly, force, t.c="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r9, r5)
            boolean r5 = com.qihoo360.loader2.PluginContainers.ActivityState.access$400(r0)
            if (r5 == 0) goto L8b
            java.lang.String r5 = "ws001"
            java.lang.String r9 = "f.a fi: cc: exists instances"
            com.qihoo360.replugin.helper.LogRelease.e(r5, r9)
        L8b:
            com.qihoo360.loader2.PluginContainers.ActivityState.access$200(r0, r7, r8)
            goto La5
        L8f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "f.a fi: cc: same, t.c="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r9, r5)
        La5:
            if (r1 == r0) goto Leb
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "f.a fi: t t.c="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r9, r5)
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto Le7
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "forward fly: container="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r6 = " plugin="
            r5.append(r6)
            r5.append(r7)
            java.lang.String r6 = " activity="
            r5.append(r6)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r6, r5)
        Le7:
            com.qihoo360.loader2.PluginContainers.ActivityState.access$500(r1)
            goto L12b
        Leb:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "f.a fi: same t.c="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r9 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.i(r9, r5)
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L12b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "forward registered: container="
            r5.append(r9)
            r5.append(r6)
            java.lang.String r6 = " plugin="
            r5.append(r6)
            r5.append(r7)
            java.lang.String r6 = " activity="
            r5.append(r6)
            r5.append(r8)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.i(r6, r5)
        L12b:
            r0.forwardSelf(r3, r4)
            return
        L12f:
            r3 = move-exception
            monitor-exit(r9)     // Catch: java.lang.Throwable -> L12f
            throw r3
    }

    final void handleCreate(java.lang.String r3, android.app.Activity r4, java.lang.String r5) {
            r2 = this;
            android.content.ComponentName r0 = r4.getComponentName()
            if (r0 == 0) goto La
            java.lang.String r5 = r0.getClassName()
        La:
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r0 == 0) goto L40
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "PACM: activity created h="
            r0.append(r1)
            int r1 = r4.hashCode()
            r0.append(r1)
            java.lang.String r1 = " class="
            r0.append(r1)
            java.lang.Class r1 = r4.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " container="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r0)
        L40:
            java.lang.Object r0 = r2.mLock
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r2.mStates     // Catch: java.lang.Throwable -> L52
            java.lang.Object r5 = r1.get(r5)     // Catch: java.lang.Throwable -> L52
            com.qihoo360.loader2.PluginContainers$ActivityState r5 = (com.qihoo360.loader2.PluginContainers.ActivityState) r5     // Catch: java.lang.Throwable -> L52
            if (r5 == 0) goto L50
            com.qihoo360.loader2.PluginContainers.ActivityState.access$700(r5, r3, r4)     // Catch: java.lang.Throwable -> L52
        L50:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            return
        L52:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            throw r3
    }

    final void handleDestroy(android.app.Activity r4) {
            r3 = this;
            android.content.ComponentName r0 = r4.getComponentName()
            if (r0 == 0) goto Lb
            java.lang.String r0 = r0.getClassName()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L42
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "PACM: activity destroy h="
            r1.append(r2)
            int r2 = r4.hashCode()
            r1.append(r2)
            java.lang.String r2 = " class="
            r1.append(r2)
            java.lang.Class r2 = r4.getClass()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " container="
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r2, r1)
        L42:
            if (r0 != 0) goto L45
            return
        L45:
            java.lang.Object r1 = r3.mLock
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r2 = r3.mStates     // Catch: java.lang.Throwable -> L57
            java.lang.Object r0 = r2.get(r0)     // Catch: java.lang.Throwable -> L57
            com.qihoo360.loader2.PluginContainers$ActivityState r0 = (com.qihoo360.loader2.PluginContainers.ActivityState) r0     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L55
            com.qihoo360.loader2.PluginContainers.ActivityState.access$800(r0, r4)     // Catch: java.lang.Throwable -> L57
        L55:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L57
            return
        L57:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L57
            throw r4
    }

    final void init(int r10, java.util.HashSet<java.lang.String> r11) {
            r9 = this;
            r1 = -1
            if (r10 == r1) goto L10
            boolean r2 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r10)
            if (r2 != 0) goto L10
            boolean r2 = com.qihoo360.loader2.PluginManager.isPluginProcess()
            if (r2 != 0) goto L10
            return
        L10:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = com.qihoo360.replugin.base.IPC.getPackageName()
            r2.append(r3)
            java.lang.String r3 = ".loader.a.Activity"
            r2.append(r3)
            java.lang.String r7 = r2.toString()
            if (r10 == r1) goto L2d
            boolean r0 = com.qihoo360.replugin.component.process.PluginProcessHost.isCustomPluginProcess(r10)
            if (r0 == 0) goto L143
        L2d:
            java.lang.String r8 = "N1"
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r4 = 0
            r5 = 1
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_STANDARD
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r5 = 0
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_STANDARD
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r4 = 1
            r5 = 1
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TOP
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r5 = 0
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TOP
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r4 = 2
            r5 = 1
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_TASK
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r5 = 0
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_TASK
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r4 = 3
            r5 = 1
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_TS_SINGLE_INSTANCE
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.LaunchModeStates r0 = r9.mLaunchModeStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r7)
            r2.append(r8)
            java.lang.String r3 = r2.toString()
            r5 = 0
            int r6 = com.qihoo360.replugin.helper.HostConfigHelper.ACTIVITY_PIT_COUNT_NTS_SINGLE_INSTANCE
            r2 = r11
            r0.addStates(r1, r2, r3, r4, r5, r6)
            com.qihoo360.loader2.TaskAffinityStates r0 = r9.mTaskAffinityStates
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r9.mStates
            r0.init(r7, r8, r1, r11)
            r0 = 0
        L10b:
            r1 = 3
            if (r0 >= r1) goto L140
            com.qihoo360.loader2.ProcessStates r1 = new com.qihoo360.loader2.ProcessStates
            r1.<init>()
            java.util.Map<java.lang.String, com.qihoo360.loader2.ProcessStates> r2 = r9.mProcessStatesMap
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = ":p"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r2.put(r3, r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "p"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            r9.init2(r7, r11, r1, r2)
            int r0 = r0 + 1
            goto L10b
        L140:
            r9.loadFromPref()
        L143:
            return
    }

    final com.qihoo360.loader2.PluginContainers.ActivityState lookupByContainer(java.lang.String r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.Object r1 = r5.mLock
            monitor-enter(r1)
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r2 = r5.mStates     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r2 = r2.get(r6)     // Catch: java.lang.Throwable -> L5d
            com.qihoo360.loader2.PluginContainers$ActivityState r2 = (com.qihoo360.loader2.PluginContainers.ActivityState) r2     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L36
            int r3 = r2.state     // Catch: java.lang.Throwable -> L5d
            if (r3 == 0) goto L36
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L5d
            if (r6 == 0) goto L2f
            java.lang.String r6 = "ws001"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5d
            r0.<init>()     // Catch: java.lang.Throwable -> L5d
            java.lang.String r3 = "found: "
            r0.append(r3)     // Catch: java.lang.Throwable -> L5d
            r0.append(r2)     // Catch: java.lang.Throwable -> L5d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L5d
            com.qihoo360.replugin.helper.LogDebug.d(r6, r0)     // Catch: java.lang.Throwable -> L5d
        L2f:
            com.qihoo360.loader2.PluginContainers$ActivityState r6 = new com.qihoo360.loader2.PluginContainers$ActivityState     // Catch: java.lang.Throwable -> L5d
            r6.<init>(r2)     // Catch: java.lang.Throwable -> L5d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5d
            return r6
        L36:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5d
            java.util.HashMap<java.lang.String, com.qihoo360.loader2.PluginContainers$ActivityState> r1 = r5.mStates
            int r1 = r1.size()
            long r1 = (long) r1
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "not found: c="
            r3.append(r4)
            r3.append(r6)
            java.lang.String r6 = " pool="
            r3.append(r6)
            r3.append(r1)
            java.lang.String r6 = r3.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogRelease.e(r1, r6)
            return r0
        L5d:
            r6 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L5d
            throw r6
    }
}
