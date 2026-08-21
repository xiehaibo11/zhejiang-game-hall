package android.support.v4.content;

public final class ContentResolverCompat {
    private ContentResolverCompat() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.database.Cursor query(android.content.ContentResolver r7, android.net.Uri r8, java.lang.String[] r9, java.lang.String r10, java.lang.String[] r11, java.lang.String r12, android.support.v4.os.CancellationSignal r13) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r0 < r1) goto L2b
            if (r13 == 0) goto Lf
            java.lang.Object r13 = r13.getCancellationSignalObject()     // Catch: java.lang.Exception -> Ld
            goto L10
        Ld:
            r7 = move-exception
            goto L20
        Lf:
            r13 = 0
        L10:
            android.os.CancellationSignal r13 = (android.os.CancellationSignal) r13     // Catch: java.lang.Exception -> Ld
            r6 = r13
            android.os.CancellationSignal r6 = (android.os.CancellationSignal) r6     // Catch: java.lang.Exception -> Ld
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> Ld
            return r7
        L20:
            boolean r8 = r7 instanceof android.os.OperationCanceledException
            if (r8 == 0) goto L2a
            android.support.v4.os.OperationCanceledException r7 = new android.support.v4.os.OperationCanceledException
            r7.<init>()
            throw r7
        L2a:
            throw r7
        L2b:
            if (r13 == 0) goto L30
            r13.throwIfCanceled()
        L30:
            android.database.Cursor r7 = r7.query(r8, r9, r10, r11, r12)
            return r7
    }
}
