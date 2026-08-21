package com.qihoo360.replugin.component.receiver;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class PluginReceiverHelper {


    public PluginReceiverHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void onPluginReceiverReceived(java.lang.String r6, java.lang.String r7, java.util.HashMap<java.lang.String, android.content.BroadcastReceiver> r8, android.content.Intent r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r1 = "ms-receiver"
            if (r0 != 0) goto L7a
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 == 0) goto L10
            goto L7a
        L10:
            android.content.Context r0 = com.qihoo360.i.Factory.queryPluginContext(r6)
            if (r0 != 0) goto L17
            return
        L17:
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r6
            r6 = 1
            r2[r6] = r7
            java.lang.String r4 = "%s-%s"
            java.lang.String r2 = java.lang.String.format(r4, r2)
            r4 = 0
            if (r8 == 0) goto L37
            boolean r5 = r8.containsKey(r2)
            if (r5 != 0) goto L30
            goto L37
        L30:
            java.lang.Object r6 = r8.get(r2)
            android.content.BroadcastReceiver r6 = (android.content.BroadcastReceiver) r6
            goto L6f
        L37:
            java.lang.ClassLoader r5 = r0.getClassLoader()     // Catch: java.lang.Throwable -> L62
            java.lang.Class r5 = com.qihoo360.replugin.component.receiver.PluginReceiverProxy.loadClassSafety(r5, r7)     // Catch: java.lang.Throwable -> L62
            if (r5 == 0) goto L6e
            java.lang.Object r5 = r5.newInstance()     // Catch: java.lang.Throwable -> L62
            android.content.BroadcastReceiver r5 = (android.content.BroadcastReceiver) r5     // Catch: java.lang.Throwable -> L62
            if (r8 == 0) goto L4c
            r8.put(r2, r5)     // Catch: java.lang.Throwable -> L5f
        L4c:
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG     // Catch: java.lang.Throwable -> L5f
            if (r8 == 0) goto L5d
            java.lang.String r8 = "反射创建 Receiver 实例 %s"
            java.lang.Object[] r6 = new java.lang.Object[r6]     // Catch: java.lang.Throwable -> L5f
            r6[r3] = r7     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = java.lang.String.format(r8, r6)     // Catch: java.lang.Throwable -> L5f
            com.qihoo360.replugin.helper.LogDebug.d(r1, r6)     // Catch: java.lang.Throwable -> L5f
        L5d:
            r4 = r5
            goto L6e
        L5f:
            r6 = move-exception
            r4 = r5
            goto L63
        L62:
            r6 = move-exception
        L63:
            boolean r8 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r8 == 0) goto L6e
            java.lang.String r6 = r6.toString()
            com.qihoo360.replugin.helper.LogDebug.d(r1, r6)
        L6e:
            r6 = r4
        L6f:
            if (r6 == 0) goto L79
            com.qihoo360.replugin.component.receiver.PluginReceiverHelper$1 r8 = new com.qihoo360.replugin.component.receiver.PluginReceiverHelper$1
            r8.<init>(r7, r6, r0, r9)
            com.qihoo360.mobilesafe.api.Tasks.post2UI(r8)
        L79:
            return
        L7a:
            boolean r6 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r6 == 0) goto L83
            java.lang.String r6 = "plugin or receiver or intent is null, return."
            com.qihoo360.replugin.helper.LogDebug.d(r1, r6)
        L83:
            return
    }
}
