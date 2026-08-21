package android.support.v4.content;

public final class ContentResolverCompat {
    private ContentResolverCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.database.Cursor query(android.content.ContentResolver r7, android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12, android.support.v4.os.CancellationSignal r13) {
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 16
            if (r7 < r0) goto L2e
            if (r13 == 0) goto Lf
            java.lang.Object r7 = r13.getCancellationSignalObject()     // Catch: java.lang.Exception -> Ld
            goto L10
        Ld:
            r7 = move-exception
            goto L23
        Lf:
            r7 = 0
        L10:
            android.os.CancellationSignal r7 = (android.os.CancellationSignal) r7     // Catch: java.lang.Exception -> Ld
            r6 = r7
            android.os.CancellationSignal r6 = (android.os.CancellationSignal) r6     // Catch: java.lang.Exception -> Ld
            android.content.Context r0 = com.qihoo360.replugin.RePlugin.getPluginContext()     // Catch: java.lang.Exception -> Ld
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.database.Cursor r7 = com.qihoo360.replugin.loader.p.PluginProviderClient.query(r0, r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> Ld
            return r7
        L23:
            boolean r8 = r7 instanceof android.os.OperationCanceledException
            if (r8 == 0) goto L2d
            android.support.v4.os.OperationCanceledException r7 = new android.support.v4.os.OperationCanceledException
            r7.<init>()
            throw r7
        L2d:
            throw r7
        L2e:
            if (r13 == 0) goto L33
            r13.throwIfCanceled()
        L33:
            android.content.Context r0 = com.qihoo360.replugin.RePlugin.getPluginContext()
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.database.Cursor r7 = com.qihoo360.replugin.loader.p.PluginProviderClient.query(r0, r1, r2, r3, r4, r5)
            return r7
    }
}
