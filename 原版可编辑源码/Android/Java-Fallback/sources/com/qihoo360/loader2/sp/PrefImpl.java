package com.qihoo360.loader2.sp;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class PrefImpl extends com.qihoo360.loader2.sp.IPref.Stub {
    java.util.HashMap<java.lang.String, android.os.Bundle> mBundles;

    public PrefImpl() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.mBundles = r0
            return
    }

    private android.os.Bundle load(java.lang.String r4) {
            r3 = this;
            java.util.HashMap<java.lang.String, android.os.Bundle> r0 = r3.mBundles
            monitor-enter(r0)
            java.util.HashMap<java.lang.String, android.os.Bundle> r1 = r3.mBundles     // Catch: java.lang.Throwable -> L19
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L19
            android.os.Bundle r1 = (android.os.Bundle) r1     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L17
            android.os.Bundle r1 = new android.os.Bundle     // Catch: java.lang.Throwable -> L19
            r1.<init>()     // Catch: java.lang.Throwable -> L19
            java.util.HashMap<java.lang.String, android.os.Bundle> r2 = r3.mBundles     // Catch: java.lang.Throwable -> L19
            r2.put(r4, r1)     // Catch: java.lang.Throwable -> L19
        L17:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            return r1
        L19:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r4
    }

    @Override
    public java.lang.String get(java.lang.String r4, java.lang.String r5, java.lang.String r6) throws android.os.RemoteException {
            r3 = this;
            android.os.Bundle r0 = r3.load(r4)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L2e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "get: category="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " bundle="
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = " key="
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L2e:
            boolean r4 = r0.containsKey(r5)
            if (r4 == 0) goto L39
            java.lang.String r4 = r0.getString(r5)
            return r4
        L39:
            return r6
    }

    @Override
    public android.os.Bundle getAll(java.lang.String r4) throws android.os.RemoteException {
            r3 = this;
            android.os.Bundle r0 = r3.load(r4)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L26
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getAll: category="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " bundle="
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L26:
            return r0
    }

    @Override
    public void set(java.lang.String r4, java.lang.String r5, java.lang.String r6) throws android.os.RemoteException {
            r3 = this;
            android.os.Bundle r0 = r3.load(r4)
            boolean r1 = com.qihoo360.replugin.helper.LogDebug.LOG
            if (r1 == 0) goto L36
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "set: category="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " bundle="
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = " key="
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = " value="
            r1.append(r4)
            r1.append(r6)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "ws001"
            com.qihoo360.replugin.helper.LogDebug.d(r1, r4)
        L36:
            r0.putString(r5, r6)
            return
    }
}
