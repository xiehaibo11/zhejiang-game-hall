package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class DumpUtils {
    private static final java.lang.String TAG = null;

    static {
            boolean r0 = com.qihoo360.replugin.RePluginInternal.FOR_DEV
            if (r0 == 0) goto Lb
            java.lang.Class<com.qihoo360.loader2.DumpUtils> r0 = com.qihoo360.loader2.DumpUtils.class
            java.lang.String r0 = r0.getSimpleName()
            goto Ld
        Lb:
            java.lang.String r0 = "DumpUtils"
        Ld:
            com.qihoo360.loader2.DumpUtils.TAG = r0
            return
    }

    public DumpUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void dump(java.io.FileDescriptor r2, java.io.PrintWriter r3, java.lang.String[] r4) {
            android.content.Context r2 = com.qihoo360.replugin.RePluginInternal.getAppContext()
            android.os.IBinder r2 = com.qihoo360.loader2.PluginProviderStub.proxyFetchHostBinder(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.qihoo360.loader2.IPluginHost r2 = com.qihoo360.loader2.IPluginHost.Stub.asInterface(r2)
            java.lang.String r2 = r2.dump()     // Catch: java.lang.Throwable -> L33
            boolean r4 = com.qihoo360.replugin.RePluginInternal.FOR_DEV     // Catch: java.lang.Throwable -> L33
            if (r4 == 0) goto L2d
            java.lang.String r4 = com.qihoo360.loader2.DumpUtils.TAG     // Catch: java.lang.Throwable -> L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L33
            r0.<init>()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "dumpInfo:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L33
            r0.append(r2)     // Catch: java.lang.Throwable -> L33
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L33
            android.util.Log.d(r4, r0)     // Catch: java.lang.Throwable -> L33
        L2d:
            if (r3 == 0) goto L37
            r3.println(r2)     // Catch: java.lang.Throwable -> L33
            goto L37
        L33:
            r2 = move-exception
            r2.printStackTrace()
        L37:
            return
    }
}
