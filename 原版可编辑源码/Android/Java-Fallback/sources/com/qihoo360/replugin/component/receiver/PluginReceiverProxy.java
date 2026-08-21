package com.qihoo360.replugin.component.receiver;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginReceiverProxy extends android.content.BroadcastReceiver {
    public static final java.lang.String TAG = "ms-receiver";
    private java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> mActionPluginComponents;
    private final java.util.HashMap<java.lang.String, java.lang.Integer> mReceiverProcess;

    public PluginReceiverProxy() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mReceiverProcess = r0
            return
    }

    private int getProcessOfReceiver(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r1 = "-"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.util.HashMap<java.lang.String, java.lang.Integer> r1 = r2.mReceiverProcess
            boolean r1 = r1.containsKey(r0)
            if (r1 != 0) goto L3b
            com.qihoo360.replugin.component.ComponentList r3 = com.qihoo360.i.Factory.queryPluginComponentList(r3)
            if (r3 == 0) goto L3b
            java.util.HashMap r3 = r3.getReceiverMap()
            if (r3 == 0) goto L3b
            java.lang.Object r3 = r3.get(r4)
            android.content.pm.ActivityInfo r3 = (android.content.pm.ActivityInfo) r3
            if (r3 == 0) goto L3b
            java.util.HashMap<java.lang.String, java.lang.Integer> r4 = r2.mReceiverProcess
            java.lang.String r3 = r3.processName
            java.lang.Integer r3 = com.qihoo360.replugin.component.utils.PluginClientHelper.getProcessInt(r3)
            r4.put(r0, r3)
        L3b:
            java.util.HashMap<java.lang.String, java.lang.Integer> r3 = r2.mReceiverProcess
            boolean r3 = r3.containsKey(r0)
            if (r3 == 0) goto L50
            java.util.HashMap<java.lang.String, java.lang.Integer> r3 = r2.mReceiverProcess
            java.lang.Object r3 = r3.get(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            return r3
        L50:
            r3 = -1
            return r3
    }

    public static java.lang.Class loadClassSafety(java.lang.ClassLoader r0, java.lang.String r1) throws java.lang.ClassNotFoundException {
            java.lang.Class r0 = r0.loadClass(r1)
            return r0
    }

    @Override
    public void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            if (r9 == 0) goto L96
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r8 = r7.mActionPluginComponents
            if (r8 != 0) goto L8
            goto L96
        L8:
            java.lang.String r8 = r9.getAction()
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L96
            boolean r0 = com.qihoo360.replugin.helper.LogDebug.LOG
            r1 = 0
            java.lang.String r2 = "ms-receiver"
            if (r0 == 0) goto L27
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r1] = r8
            java.lang.String r3 = "代理 Receiver 收到 action: %s "
            java.lang.String r0 = java.lang.String.format(r3, r0)
            com.qihoo360.replugin.helper.LogDebug.d(r2, r0)
        L27:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r0 = r7.mActionPluginComponents
            java.lang.Object r8 = r0.get(r8)
            java.util.HashMap r8 = (java.util.HashMap) r8
            if (r8 == 0) goto L96
            java.util.Set r8 = r8.entrySet()
            java.util.Iterator r8 = r8.iterator()
        L39:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L96
            java.lang.Object r0 = r8.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r3 = r0.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r0.getValue()
            if (r4 != 0) goto L52
            goto L39
        L52:
            java.util.ArrayList r4 = new java.util.ArrayList
            java.lang.Object r0 = r0.getValue()
            java.util.Collection r0 = (java.util.Collection) r0
            r4.<init>(r0)
            java.util.Iterator r0 = r4.iterator()
        L61:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L39
            java.lang.Object r4 = r0.next()
            java.lang.String r4 = (java.lang.String) r4
            int r5 = r7.getProcessOfReceiver(r3, r4)     // Catch: java.lang.Throwable -> L89
            r6 = -2
            if (r5 != r6) goto L7c
            com.qihoo360.loader2.IPluginHost r5 = com.qihoo360.loader2.PluginProcessMain.getPluginHost()     // Catch: java.lang.Throwable -> L89
            r5.onReceive(r3, r4, r9)     // Catch: java.lang.Throwable -> L89
            goto L61
        L7c:
            com.qihoo360.loader2.PluginBinderInfo r6 = new com.qihoo360.loader2.PluginBinderInfo     // Catch: java.lang.Throwable -> L89
            r6.<init>(r1)     // Catch: java.lang.Throwable -> L89
            com.qihoo360.loader2.IPluginClient r5 = com.qihoo360.loader2.MP.startPluginProcess(r3, r5, r6)     // Catch: java.lang.Throwable -> L89
            r5.onReceive(r3, r4, r9)     // Catch: java.lang.Throwable -> L89
            goto L61
        L89:
            r4 = move-exception
            boolean r5 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r5 == 0) goto L61
            java.lang.String r4 = r4.toString()
            android.util.Log.d(r2, r4)
            goto L61
        L96:
            return
    }

    public void setActionPluginMap(java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, java.util.List<java.lang.String>>> r1) {
            r0 = this;
            r0.mActionPluginComponents = r1
            return
    }
}
