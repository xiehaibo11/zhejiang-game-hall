package com.bytedance.pangle;

public class ComponentManager {
    public static java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> stubActivity2TargetActivities;
    public static java.util.HashMap<java.lang.String, java.lang.String> targetString2PluginPkgName;
    public static java.util.HashMap<java.lang.String, java.lang.String> targetString2StubActivity;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.ComponentManager.stubActivity2TargetActivities = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.ComponentManager.targetString2StubActivity = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.ComponentManager.targetString2PluginPkgName = r0
            return
    }

    public ComponentManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getTargetStubActivityString(java.lang.String r1) {
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.bytedance.pangle.ComponentManager.targetString2StubActivity
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    private static boolean isSupportLibIso(java.lang.String r1) {
            com.bytedance.pangle.plugin.PluginManager r0 = com.bytedance.pangle.plugin.PluginManager.getInstance()     // Catch: java.lang.Throwable -> Lb
            com.bytedance.pangle.plugin.Plugin r1 = r0.getPlugin(r1)     // Catch: java.lang.Throwable -> Lb
            boolean r1 = r1.mIsSupportLibIso     // Catch: java.lang.Throwable -> Lb
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static void realStartActivity(java.lang.Object r3, android.content.Context r4, android.content.Intent r5, android.os.Bundle r6, java.lang.String r7) {
            boolean r0 = r4 instanceof com.bytedance.pangle.PluginContext
            if (r0 == 0) goto L8
            com.bytedance.pangle.PluginContext r4 = (com.bytedance.pangle.PluginContext) r4
            android.content.Context r4 = r4.mOriginContext
        L8:
            android.content.ComponentName r0 = r5.getComponent()
            if (r0 == 0) goto L33
            android.content.ComponentName r0 = r5.getComponent()
            java.lang.String r0 = r0.getClassName()
            com.bytedance.pangle.Zeus.loadPlugin(r7)
            java.lang.String r1 = getTargetStubActivityString(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L33
            com.bytedance.pangle.activity.IntentUtils.a(r5, r7)
            android.content.ComponentName r2 = new android.content.ComponentName
            r2.<init>(r4, r1)
            r5.setComponent(r2)
            java.lang.String r1 = "targetPlugin"
            r5.putExtra(r1, r0)
        L33:
            boolean r7 = isSupportLibIso(r7)     // Catch: java.lang.Throwable -> L51
            if (r7 != 0) goto L43
            boolean r7 = r3 instanceof android.support.v4.app.Fragment     // Catch: java.lang.Throwable -> L51
            if (r7 == 0) goto L43
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3     // Catch: java.lang.Throwable -> L51
            r3.startActivity(r5, r6)     // Catch: java.lang.Throwable -> L51
            return
        L43:
            boolean r7 = r3 instanceof android.app.Fragment     // Catch: java.lang.Throwable -> L51
            if (r7 == 0) goto L4d
            android.app.Fragment r3 = (android.app.Fragment) r3     // Catch: java.lang.Throwable -> L51
            r3.startActivity(r5, r6)     // Catch: java.lang.Throwable -> L51
            return
        L4d:
            r4.startActivity(r5, r6)     // Catch: java.lang.Throwable -> L51
            return
        L51:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "component = "
            r6.<init>(r7)
            android.content.ComponentName r5 = r5.getComponent()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5, r3)
            throw r4
    }

    private static void realStartActivityForResult(java.lang.Object r3, android.app.Activity r4, android.content.Intent r5, int r6, android.os.Bundle r7, java.lang.String r8) {
            android.content.ComponentName r0 = r5.getComponent()
            if (r0 == 0) goto L2b
            android.content.ComponentName r0 = r5.getComponent()
            java.lang.String r0 = r0.getClassName()
            com.bytedance.pangle.Zeus.loadPlugin(r8)
            java.lang.String r1 = getTargetStubActivityString(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L2b
            com.bytedance.pangle.activity.IntentUtils.a(r5, r8)
            android.content.ComponentName r2 = new android.content.ComponentName
            r2.<init>(r4, r1)
            r5.setComponent(r2)
            java.lang.String r1 = "targetPlugin"
            r5.putExtra(r1, r0)
        L2b:
            boolean r8 = isSupportLibIso(r8)     // Catch: java.lang.Throwable -> L49
            if (r8 != 0) goto L3b
            boolean r8 = r3 instanceof android.support.v4.app.Fragment     // Catch: java.lang.Throwable -> L49
            if (r8 == 0) goto L3b
            android.support.v4.app.Fragment r3 = (android.support.v4.app.Fragment) r3     // Catch: java.lang.Throwable -> L49
            r3.startActivityForResult(r5, r6, r7)     // Catch: java.lang.Throwable -> L49
            return
        L3b:
            boolean r8 = r3 instanceof android.app.Fragment     // Catch: java.lang.Throwable -> L49
            if (r8 == 0) goto L45
            android.app.Fragment r3 = (android.app.Fragment) r3     // Catch: java.lang.Throwable -> L49
            r3.startActivityForResult(r5, r6, r7)     // Catch: java.lang.Throwable -> L49
            return
        L45:
            r4.startActivityForResult(r5, r6, r7)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "component =  "
            r6.<init>(r7)
            android.content.ComponentName r5 = r5.getComponent()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            r4.<init>(r5, r3)
            throw r4
    }

    public static void registerActivity(java.lang.String r6, java.lang.String r7, java.lang.String... r8) {
            if (r8 == 0) goto L55
            int r0 = r8.length
            r1 = 0
            r2 = r1
        L5:
            if (r2 >= r0) goto L55
            r3 = r8[r2]
            java.util.HashMap<java.lang.String, java.lang.String> r4 = com.bytedance.pangle.ComponentManager.targetString2PluginPkgName
            java.lang.Object r4 = r4.get(r3)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L31
            boolean r5 = android.text.TextUtils.equals(r4, r6)
            if (r5 != 0) goto L1a
            goto L31
        L1a:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            r8 = 3
            java.lang.Object[] r8 = new java.lang.Object[r8]
            r8[r1] = r3
            r0 = 1
            r8[r0] = r6
            r6 = 2
            r8[r6] = r4
            java.lang.String r6 = "%s is repeated in %s and %s"
            java.lang.String r6 = java.lang.String.format(r6, r8)
            r7.<init>(r6)
            throw r7
        L31:
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r4 = com.bytedance.pangle.ComponentManager.stubActivity2TargetActivities
            java.lang.Object r4 = r4.get(r7)
            java.util.List r4 = (java.util.List) r4
            if (r4 != 0) goto L45
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.HashMap<java.lang.String, java.util.List<java.lang.String>> r5 = com.bytedance.pangle.ComponentManager.stubActivity2TargetActivities
            r5.put(r7, r4)
        L45:
            r4.add(r3)
            java.util.HashMap<java.lang.String, java.lang.String> r4 = com.bytedance.pangle.ComponentManager.targetString2StubActivity
            r4.put(r3, r7)
            java.util.HashMap<java.lang.String, java.lang.String> r4 = com.bytedance.pangle.ComponentManager.targetString2PluginPkgName
            r4.put(r3, r6)
            int r2 = r2 + 1
            goto L5
        L55:
            return
    }

    public static android.content.Intent registerReceiver(android.content.Context r3, com.bytedance.pangle.receiver.PluginBroadcastReceiver r4, android.content.IntentFilter r5, int r6, java.lang.String r7) {
            com.bytedance.pangle.Zeus.loadPlugin(r7)
            com.bytedance.pangle.receiver.c r7 = com.bytedance.pangle.receiver.c.a()
            r0 = 0
            if (r5 == 0) goto L30
            java.util.Iterator r1 = r5.actionsIterator()
            if (r1 == 0) goto L30
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto L17
            goto L30
        L17:
            if (r4 != 0) goto L1e
            android.content.Intent r3 = r3.registerReceiver(r0, r5)
            return r3
        L1e:
            com.bytedance.pangle.receiver.a r0 = new com.bytedance.pangle.receiver.a
            r0.<init>()
            android.content.Intent r3 = r3.registerReceiver(r0, r5, r6)
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r6 = r7.b
            r6.put(r4, r0)
            r7.a(r5, r4)
            return r3
        L30:
            return r0
    }

    public static android.content.Intent registerReceiver(android.content.Context r2, com.bytedance.pangle.receiver.PluginBroadcastReceiver r3, android.content.IntentFilter r4, java.lang.String r5) {
            com.bytedance.pangle.Zeus.loadPlugin(r5)
            com.bytedance.pangle.receiver.c r5 = com.bytedance.pangle.receiver.c.a()
            r0 = 0
            if (r4 == 0) goto L2a
            java.util.Iterator r1 = r4.actionsIterator()
            if (r1 != 0) goto L11
            goto L2a
        L11:
            if (r3 != 0) goto L18
            android.content.Intent r2 = r2.registerReceiver(r0, r4)
            return r2
        L18:
            com.bytedance.pangle.receiver.a r0 = new com.bytedance.pangle.receiver.a
            r0.<init>()
            android.content.Intent r2 = r2.registerReceiver(r0, r4)
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r1 = r5.b
            r1.put(r3, r0)
            r5.a(r4, r3)
            return r2
        L2a:
            return r0
    }

    public static android.content.Intent registerReceiver(android.content.Context r7, com.bytedance.pangle.receiver.PluginBroadcastReceiver r8, android.content.IntentFilter r9, java.lang.String r10, android.os.Handler r11, int r12, java.lang.String r13) {
            com.bytedance.pangle.Zeus.loadPlugin(r13)
            com.bytedance.pangle.receiver.c r13 = com.bytedance.pangle.receiver.c.a()
            r0 = 0
            if (r9 == 0) goto L45
            java.util.Iterator r1 = r9.actionsIterator()
            if (r1 == 0) goto L45
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto L17
            goto L45
        L17:
            if (r8 != 0) goto L1e
            android.content.Intent r7 = r7.registerReceiver(r0, r9)
            return r7
        L1e:
            com.bytedance.pangle.receiver.a r6 = new com.bytedance.pangle.receiver.a
            r6.<init>()
            r0 = r7
            r1 = r6
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.content.Intent r7 = r0.registerReceiver(r1, r2, r3, r4, r5)
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r10 = r13.b
            r10.put(r8, r6)
            if (r11 == 0) goto L41
            java.util.Set<java.lang.Integer> r10 = r13.c
            int r11 = r6.hashCode()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r10.add(r11)
        L41:
            r13.a(r9, r8)
            return r7
        L45:
            return r0
    }

    public static android.content.Intent registerReceiver(android.content.Context r2, com.bytedance.pangle.receiver.PluginBroadcastReceiver r3, android.content.IntentFilter r4, java.lang.String r5, android.os.Handler r6, java.lang.String r7) {
            com.bytedance.pangle.Zeus.loadPlugin(r7)
            com.bytedance.pangle.receiver.c r7 = com.bytedance.pangle.receiver.c.a()
            r0 = 0
            if (r4 == 0) goto L39
            java.util.Iterator r1 = r4.actionsIterator()
            if (r1 != 0) goto L11
            goto L39
        L11:
            if (r3 != 0) goto L18
            android.content.Intent r2 = r2.registerReceiver(r0, r4)
            return r2
        L18:
            com.bytedance.pangle.receiver.a r0 = new com.bytedance.pangle.receiver.a
            r0.<init>()
            android.content.Intent r2 = r2.registerReceiver(r0, r4, r5, r6)
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r5 = r7.b
            r5.put(r3, r0)
            if (r6 == 0) goto L35
            java.util.Set<java.lang.Integer> r5 = r7.c
            int r6 = r0.hashCode()
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r5.add(r6)
        L35:
            r7.a(r4, r3)
            return r2
        L39:
            return r0
    }

    public static void startActivity(android.content.Context r1, android.content.Intent r2, android.os.Bundle r3, java.lang.String r4) {
            r0 = 0
            realStartActivity(r0, r1, r2, r3, r4)
            return
    }

    public static void startActivity(android.content.Context r1, android.content.Intent r2, java.lang.String r3) {
            r0 = 0
            realStartActivity(r0, r1, r2, r0, r3)
            return
    }

    public static void startActivity(java.lang.Object r3, android.content.Intent r4, android.os.Bundle r5, java.lang.String r6) {
            boolean r0 = r3 instanceof android.content.Context
            if (r0 == 0) goto Lb
            r0 = 0
            android.content.Context r3 = (android.content.Context) r3
            realStartActivity(r0, r3, r4, r5, r6)
            return
        Lb:
            boolean r0 = isSupportLibIso(r6)
            if (r0 != 0) goto L20
            boolean r0 = r3 instanceof android.support.v4.app.Fragment
            if (r0 == 0) goto L20
            r0 = r3
            android.support.v4.app.Fragment r0 = (android.support.v4.app.Fragment) r0
            android.support.v4.app.FragmentActivity r0 = r0.getActivity()
            realStartActivity(r3, r0, r4, r5, r6)
            return
        L20:
            boolean r0 = r3 instanceof android.app.Fragment
            if (r0 == 0) goto L2f
            r0 = r3
            android.app.Fragment r0 = (android.app.Fragment) r0
            android.app.Activity r0 = r0.getActivity()
            realStartActivity(r3, r0, r4, r5, r6)
            return
        L2f:
            java.lang.String r6 = "startActivity"
            r0 = 2
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L48
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Throwable -> L48
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Throwable -> L48
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L48
            java.lang.Class<android.content.Intent> r0 = android.content.Intent.class
            r5[r2] = r0     // Catch: java.lang.Throwable -> L48
            java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
            r5[r4] = r0     // Catch: java.lang.Throwable -> L48
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r6, r1, r5)     // Catch: java.lang.Throwable -> L48
            return
        L48:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void startActivityForResult(android.app.Activity r6, android.content.Intent r7, int r8, android.os.Bundle r9, java.lang.String r10) {
            r0 = 0
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            realStartActivityForResult(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void startActivityForResult(java.lang.Object r7, android.content.Intent r8, int r9, android.os.Bundle r10, java.lang.String r11) {
            boolean r0 = r7 instanceof android.app.Activity
            if (r0 == 0) goto L10
            r1 = 0
            r2 = r7
            android.app.Activity r2 = (android.app.Activity) r2
            r5 = 0
            r3 = r8
            r4 = r9
            r6 = r11
            realStartActivityForResult(r1, r2, r3, r4, r5, r6)
            return
        L10:
            boolean r0 = isSupportLibIso(r11)
            if (r0 != 0) goto L2a
            boolean r0 = r7 instanceof android.support.v4.app.Fragment
            if (r0 == 0) goto L2a
            r10 = r7
            android.support.v4.app.Fragment r10 = (android.support.v4.app.Fragment) r10
            android.support.v4.app.FragmentActivity r1 = r10.getActivity()
            r4 = 0
            r0 = r7
            r2 = r8
            r3 = r9
            r5 = r11
            realStartActivityForResult(r0, r1, r2, r3, r4, r5)
            return
        L2a:
            boolean r0 = r7 instanceof android.app.Fragment
            if (r0 == 0) goto L3e
            r10 = r7
            android.app.Fragment r10 = (android.app.Fragment) r10
            android.app.Activity r1 = r10.getActivity()
            r4 = 0
            r0 = r7
            r2 = r8
            r3 = r9
            r5 = r11
            realStartActivityForResult(r0, r1, r2, r3, r4, r5)
            return
        L3e:
            java.lang.String r11 = "startActivityForResult"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L62
            r2 = 0
            r1[r2] = r8     // Catch: java.lang.Throwable -> L62
            java.lang.Integer r8 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L62
            r9 = 1
            r1[r9] = r8     // Catch: java.lang.Throwable -> L62
            r8 = 2
            r1[r8] = r10     // Catch: java.lang.Throwable -> L62
            java.lang.Class[] r10 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L62
            java.lang.Class<android.content.Intent> r0 = android.content.Intent.class
            r10[r2] = r0     // Catch: java.lang.Throwable -> L62
            java.lang.Class r0 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L62
            r10[r9] = r0     // Catch: java.lang.Throwable -> L62
            java.lang.Class<android.os.Bundle> r9 = android.os.Bundle.class
            r10[r8] = r9     // Catch: java.lang.Throwable -> L62
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r11, r1, r10)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>(r7)
            throw r8
    }

    public static void unregisterReceiver(android.content.Context r7, com.bytedance.pangle.receiver.PluginBroadcastReceiver r8) {
            if (r8 == 0) goto La2
            com.bytedance.pangle.receiver.c r0 = com.bytedance.pangle.receiver.c.a()
            java.util.Map<java.lang.String, com.bytedance.pangle.receiver.c$a> r1 = r0.a
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L10:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto La2
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r2 = r2.getValue()
            com.bytedance.pangle.receiver.c$a r2 = (com.bytedance.pangle.receiver.c.a) r2
            java.lang.String r3 = "Zeus/receiver_pangle"
            if (r2 == 0) goto L79
            if (r8 == 0) goto L79
            java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> r4 = r2.b     // Catch: java.lang.Throwable -> L60
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L60
            if (r4 <= 0) goto L79
            java.util.Set<com.bytedance.pangle.receiver.PluginBroadcastReceiver> r4 = r2.b     // Catch: java.lang.Throwable -> L60
            boolean r4 = r4.remove(r8)     // Catch: java.lang.Throwable -> L60
            if (r4 == 0) goto L79
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = "unregisterReceiver->[移除Action]:"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = r2.a     // Catch: java.lang.Throwable -> L60
            r5.append(r6)     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = ",receiver.hashCode()="
            r5.append(r6)     // Catch: java.lang.Throwable -> L60
            int r6 = r8.hashCode()     // Catch: java.lang.Throwable -> L60
            r5.append(r6)     // Catch: java.lang.Throwable -> L60
            java.lang.String r6 = ",是否成功，success:"
            r5.append(r6)     // Catch: java.lang.Throwable -> L60
            r5.append(r4)     // Catch: java.lang.Throwable -> L60
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L60
            com.bytedance.pangle.log.ZeusLogger.d(r3, r4)     // Catch: java.lang.Throwable -> L60
            goto L79
        L60:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "unregisterReceiver-plugin-receiver->action:"
            r5.<init>(r6)
            java.lang.String r2 = r2.a
            r5.append(r2)
            java.lang.String r2 = "[exception]:"
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            com.bytedance.pangle.log.ZeusLogger.w(r3, r2, r4)
        L79:
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r2 = r0.b
            java.lang.Object r2 = r2.get(r8)
            android.content.BroadcastReceiver r2 = (android.content.BroadcastReceiver) r2
            if (r2 == 0) goto L10
            java.util.Set<java.lang.Integer> r4 = r0.c     // Catch: java.lang.Throwable -> L9a
            int r5 = r2.hashCode()     // Catch: java.lang.Throwable -> L9a
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L9a
            r4.remove(r5)     // Catch: java.lang.Throwable -> L9a
            java.util.Map<com.bytedance.pangle.receiver.PluginBroadcastReceiver, android.content.BroadcastReceiver> r4 = r0.b     // Catch: java.lang.Throwable -> L9a
            r4.remove(r8)     // Catch: java.lang.Throwable -> L9a
            r7.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L9a
            goto L10
        L9a:
            r2 = move-exception
            java.lang.String r4 = "unregisterReceiver-移除系统注册的广播发生异常:"
            com.bytedance.pangle.log.ZeusLogger.w(r3, r4, r2)
            goto L10
        La2:
            return
    }
}
