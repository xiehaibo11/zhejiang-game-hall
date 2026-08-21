package com.bytedance.pangle.transform;

public class ZeusProviderTransform {
    public ZeusProviderTransform() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.os.Bundle call(java.lang.Object r8, android.net.Uri r9, java.lang.String r10, java.lang.String r11, android.os.Bundle r12, java.lang.String r13) {
            boolean r0 = r8 instanceof android.content.ContentResolver
            if (r0 == 0) goto L15
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r8
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.os.Bundle r8 = r1.call(r2, r3, r4, r5, r6, r7)
            return r8
        L15:
            java.lang.String r13 = "call"
            r0 = 4
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3f
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L3f
            r9 = 1
            r1[r9] = r10     // Catch: java.lang.Exception -> L3f
            r10 = 2
            r1[r10] = r11     // Catch: java.lang.Exception -> L3f
            r11 = 3
            r1[r11] = r12     // Catch: java.lang.Exception -> L3f
            java.lang.Class[] r12 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r12[r2] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            r12[r9] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r12[r10] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.os.Bundle> r9 = android.os.Bundle.class
            r12[r11] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Object r8 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r8, r13, r1, r12)     // Catch: java.lang.Exception -> L3f
            android.os.Bundle r8 = (android.os.Bundle) r8     // Catch: java.lang.Exception -> L3f
            return r8
        L3f:
            r8 = move-exception
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            r9.<init>(r8)
            throw r9
    }

    public static android.os.Bundle call(java.lang.Object r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, android.os.Bundle r12, java.lang.String r13) {
            boolean r0 = r8 instanceof android.content.ContentResolver
            if (r0 == 0) goto L15
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r8
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.os.Bundle r8 = r1.call(r2, r3, r4, r5, r6, r7)
            return r8
        L15:
            java.lang.String r13 = "call"
            r0 = 4
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3f
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L3f
            r9 = 1
            r1[r9] = r10     // Catch: java.lang.Exception -> L3f
            r10 = 2
            r1[r10] = r11     // Catch: java.lang.Exception -> L3f
            r11 = 3
            r1[r11] = r12     // Catch: java.lang.Exception -> L3f
            java.lang.Class[] r12 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            r12[r2] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            r12[r9] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r12[r10] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.os.Bundle> r9 = android.os.Bundle.class
            r12[r11] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Object r8 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r8, r13, r1, r12)     // Catch: java.lang.Exception -> L3f
            android.os.Bundle r8 = (android.os.Bundle) r8     // Catch: java.lang.Exception -> L3f
            return r8
        L3f:
            r8 = move-exception
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            r9.<init>(r8)
            throw r9
    }

    public static int delete(java.lang.Object r3, android.net.Uri r4, android.os.Bundle r5, java.lang.String r6) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Lf
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            int r3 = r0.delete(r3, r4, r5, r6)
            return r3
        Lf:
            java.lang.String r6 = "delete"
            r0 = 2
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L2f
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L2f
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L2f
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L2f
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L2f
            java.lang.Class<android.os.Bundle> r0 = android.os.Bundle.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L2f
            java.lang.Object r3 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r6, r1, r5)     // Catch: java.lang.Exception -> L2f
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L2f
            int r3 = r3.intValue()     // Catch: java.lang.Exception -> L2f
            return r3
        L2f:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static int delete(java.lang.Object r7, android.net.Uri r8, java.lang.String r9, java.lang.String[] r10, java.lang.String r11) {
            boolean r0 = r7 instanceof android.content.ContentResolver
            if (r0 == 0) goto L14
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r7
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            int r7 = r1.delete(r2, r3, r4, r5, r6)
            return r7
        L14:
            java.lang.String r11 = "delete"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3b
            r2 = 0
            r1[r2] = r8     // Catch: java.lang.Exception -> L3b
            r8 = 1
            r1[r8] = r9     // Catch: java.lang.Exception -> L3b
            r9 = 2
            r1[r9] = r10     // Catch: java.lang.Exception -> L3b
            java.lang.Class[] r10 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r10[r2] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            r10[r8] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Class<java.lang.String[]> r8 = java.lang.String[].class
            r10[r9] = r8     // Catch: java.lang.Exception -> L3b
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r11, r1, r10)     // Catch: java.lang.Exception -> L3b
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Exception -> L3b
            int r7 = r7.intValue()     // Catch: java.lang.Exception -> L3b
            return r7
        L3b:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>(r7)
            throw r8
    }

    public static java.lang.String getType(java.lang.Object r3, android.net.Uri r4, java.lang.String r5) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Lf
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            java.lang.String r3 = r0.getType(r3, r4, r5)
            return r3
        Lf:
            java.lang.String r5 = "getType"
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L24
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L24
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L24
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r4[r2] = r0     // Catch: java.lang.Exception -> L24
            java.lang.Object r3 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r5, r1, r4)     // Catch: java.lang.Exception -> L24
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L24
            return r3
        L24:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static android.net.Uri insert(java.lang.Object r7, android.net.Uri r8, android.content.ContentValues r9, android.os.Bundle r10, java.lang.String r11) {
            boolean r0 = r7 instanceof android.content.ContentResolver
            if (r0 == 0) goto L14
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r7
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            android.net.Uri r7 = r1.insert(r2, r3, r4, r5, r6)
            return r7
        L14:
            java.lang.String r11 = "insert"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L37
            r2 = 0
            r1[r2] = r8     // Catch: java.lang.Exception -> L37
            r8 = 1
            r1[r8] = r9     // Catch: java.lang.Exception -> L37
            r9 = 2
            r1[r9] = r10     // Catch: java.lang.Exception -> L37
            java.lang.Class[] r10 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L37
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r10[r2] = r0     // Catch: java.lang.Exception -> L37
            java.lang.Class<android.content.ContentValues> r0 = android.content.ContentValues.class
            r10[r8] = r0     // Catch: java.lang.Exception -> L37
            java.lang.Class<android.os.Bundle> r8 = android.os.Bundle.class
            r10[r9] = r8     // Catch: java.lang.Exception -> L37
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r11, r1, r10)     // Catch: java.lang.Exception -> L37
            android.net.Uri r7 = (android.net.Uri) r7     // Catch: java.lang.Exception -> L37
            return r7
        L37:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>(r7)
            throw r8
    }

    public static android.net.Uri insert(java.lang.Object r3, android.net.Uri r4, android.content.ContentValues r5, java.lang.String r6) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Lf
            com.bytedance.pangle.provider.ContentProviderManager r0 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            android.net.Uri r3 = r0.insert(r3, r4, r5, r6)
            return r3
        Lf:
            java.lang.String r6 = "insert"
            r0 = 2
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L2b
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L2b
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L2b
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L2b
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L2b
            java.lang.Class<android.content.ContentValues> r0 = android.content.ContentValues.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L2b
            java.lang.Object r3 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r6, r1, r5)     // Catch: java.lang.Exception -> L2b
            android.net.Uri r3 = (android.net.Uri) r3     // Catch: java.lang.Exception -> L2b
            return r3
        L2b:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void notifyChange(java.lang.Object r3, android.net.Uri r4, android.database.ContentObserver r5, int r6, java.lang.String r7) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Le
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            android.net.Uri r4 = com.bytedance.pangle.provider.a.a(r4, r7)
            r3.notifyChange(r4, r5, r6)
            return
        Le:
            java.lang.String r7 = "notifyChange"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L32
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L32
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L32
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L32
            r6 = 2
            r1[r6] = r5     // Catch: java.lang.Exception -> L32
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.database.ContentObserver> r0 = android.database.ContentObserver.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L32
            r5[r6] = r4     // Catch: java.lang.Exception -> L32
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r7, r1, r5)     // Catch: java.lang.Exception -> L32
            return
        L32:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void notifyChange(java.lang.Object r3, android.net.Uri r4, android.database.ContentObserver r5, java.lang.String r6) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Le
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            android.net.Uri r4 = com.bytedance.pangle.provider.a.a(r4, r6)
            r3.notifyChange(r4, r5)
            return
        Le:
            java.lang.String r6 = "notifyChange"
            r0 = 2
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L27
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L27
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L27
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L27
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L27
            java.lang.Class<android.database.ContentObserver> r0 = android.database.ContentObserver.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L27
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r6, r1, r5)     // Catch: java.lang.Exception -> L27
            return
        L27:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void notifyChange(java.lang.Object r3, android.net.Uri r4, android.database.ContentObserver r5, boolean r6, java.lang.String r7) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Le
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            android.net.Uri r4 = com.bytedance.pangle.provider.a.a(r4, r7)
            r3.notifyChange(r4, r5, r6)
            return
        Le:
            java.lang.String r7 = "notifyChange"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L32
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L32
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L32
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Exception -> L32
            r6 = 2
            r1[r6] = r5     // Catch: java.lang.Exception -> L32
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.database.ContentObserver> r0 = android.database.ContentObserver.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class r4 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L32
            r5[r6] = r4     // Catch: java.lang.Exception -> L32
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r7, r1, r5)     // Catch: java.lang.Exception -> L32
            return
        L32:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void notifyChange(java.lang.Object r3, java.util.Collection<android.net.Uri> r4, android.database.ContentObserver r5, int r6, java.lang.String r7) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto L27
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        Ld:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r4.next()
            android.net.Uri r1 = (android.net.Uri) r1
            android.net.Uri r1 = com.bytedance.pangle.provider.a.a(r1, r7)
            r0.add(r1)
            goto Ld
        L21:
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            r3.notifyChange(r0, r5, r6)
            return
        L27:
            java.lang.String r7 = "notifyChange"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L4b
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L4b
            r4 = 1
            r1[r4] = r5     // Catch: java.lang.Exception -> L4b
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L4b
            r6 = 2
            r1[r6] = r5     // Catch: java.lang.Exception -> L4b
            java.lang.Class[] r5 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L4b
            java.lang.Class<java.util.Collection> r0 = java.util.Collection.class
            r5[r2] = r0     // Catch: java.lang.Exception -> L4b
            java.lang.Class<android.database.ContentObserver> r0 = android.database.ContentObserver.class
            r5[r4] = r0     // Catch: java.lang.Exception -> L4b
            java.lang.Class r4 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L4b
            r5[r6] = r4     // Catch: java.lang.Exception -> L4b
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r7, r1, r5)     // Catch: java.lang.Exception -> L4b
            return
        L4b:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static android.database.Cursor query(java.lang.Object r8, android.net.Uri r9, java.lang.String[] r10, android.os.Bundle r11, android.os.CancellationSignal r12, java.lang.String r13) {
            boolean r0 = r8 instanceof android.content.ContentResolver
            if (r0 == 0) goto L15
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r8
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            android.database.Cursor r8 = r1.query(r2, r3, r4, r5, r6, r7)
            return r8
        L15:
            java.lang.String r13 = "query"
            r0 = 4
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3f
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L3f
            r9 = 1
            r1[r9] = r10     // Catch: java.lang.Exception -> L3f
            r10 = 2
            r1[r10] = r11     // Catch: java.lang.Exception -> L3f
            r11 = 3
            r1[r11] = r12     // Catch: java.lang.Exception -> L3f
            java.lang.Class[] r12 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r12[r2] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<java.lang.String[]> r0 = java.lang.String[].class
            r12[r9] = r0     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.os.Bundle> r9 = android.os.Bundle.class
            r12[r10] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Class<android.os.CancellationSignal> r9 = android.os.CancellationSignal.class
            r12[r11] = r9     // Catch: java.lang.Exception -> L3f
            java.lang.Object r8 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r8, r13, r1, r12)     // Catch: java.lang.Exception -> L3f
            android.database.Cursor r8 = (android.database.Cursor) r8     // Catch: java.lang.Exception -> L3f
            return r8
        L3f:
            r8 = move-exception
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            r9.<init>(r8)
            throw r9
    }

    public static android.database.Cursor query(java.lang.Object r11, android.net.Uri r12, java.lang.String[] r13, java.lang.String r14, java.lang.String[] r15, java.lang.String r16, android.os.CancellationSignal r17, java.lang.String r18) {
            r0 = r11
            boolean r1 = r0 instanceof android.content.ContentResolver
            if (r1 == 0) goto L1b
            com.bytedance.pangle.provider.ContentProviderManager r2 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r3 = r0
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            r10 = r18
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
        L1b:
            java.lang.String r1 = "query"
            r2 = 6
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L53
            r4 = 0
            r3[r4] = r12     // Catch: java.lang.Exception -> L53
            r5 = 1
            r3[r5] = r13     // Catch: java.lang.Exception -> L53
            r6 = 2
            r3[r6] = r14     // Catch: java.lang.Exception -> L53
            r7 = 3
            r3[r7] = r15     // Catch: java.lang.Exception -> L53
            r8 = 4
            r3[r8] = r16     // Catch: java.lang.Exception -> L53
            r9 = 5
            r3[r9] = r17     // Catch: java.lang.Exception -> L53
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L53
            java.lang.Class<android.net.Uri> r10 = android.net.Uri.class
            r2[r4] = r10     // Catch: java.lang.Exception -> L53
            java.lang.Class<java.lang.String[]> r4 = java.lang.String[].class
            r2[r5] = r4     // Catch: java.lang.Exception -> L53
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r2[r6] = r4     // Catch: java.lang.Exception -> L53
            java.lang.Class<java.lang.String[]> r4 = java.lang.String[].class
            r2[r7] = r4     // Catch: java.lang.Exception -> L53
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r2[r8] = r4     // Catch: java.lang.Exception -> L53
            java.lang.Class<android.os.CancellationSignal> r4 = android.os.CancellationSignal.class
            r2[r9] = r4     // Catch: java.lang.Exception -> L53
            java.lang.Object r0 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r11, r1, r3, r2)     // Catch: java.lang.Exception -> L53
            android.database.Cursor r0 = (android.database.Cursor) r0     // Catch: java.lang.Exception -> L53
            return r0
        L53:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            r1.<init>(r0)
            throw r1
    }

    public static android.database.Cursor query(java.lang.Object r9, android.net.Uri r10, java.lang.String[] r11, java.lang.String r12, java.lang.String[] r13, java.lang.String r14, java.lang.String r15) {
            boolean r0 = r9 instanceof android.content.ContentResolver
            if (r0 == 0) goto L16
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r9
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            android.database.Cursor r9 = r1.query(r2, r3, r4, r5, r6, r7, r8)
            return r9
        L16:
            java.lang.String r15 = "query"
            r0 = 5
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L47
            r2 = 0
            r1[r2] = r10     // Catch: java.lang.Exception -> L47
            r10 = 1
            r1[r10] = r11     // Catch: java.lang.Exception -> L47
            r11 = 2
            r1[r11] = r12     // Catch: java.lang.Exception -> L47
            r12 = 3
            r1[r12] = r13     // Catch: java.lang.Exception -> L47
            r13 = 4
            r1[r13] = r14     // Catch: java.lang.Exception -> L47
            java.lang.Class[] r14 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L47
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r14[r2] = r0     // Catch: java.lang.Exception -> L47
            java.lang.Class<java.lang.String[]> r0 = java.lang.String[].class
            r14[r10] = r0     // Catch: java.lang.Exception -> L47
            java.lang.Class<java.lang.String> r10 = java.lang.String.class
            r14[r11] = r10     // Catch: java.lang.Exception -> L47
            java.lang.Class<java.lang.String[]> r10 = java.lang.String[].class
            r14[r12] = r10     // Catch: java.lang.Exception -> L47
            java.lang.Class<java.lang.String> r10 = java.lang.String.class
            r14[r13] = r10     // Catch: java.lang.Exception -> L47
            java.lang.Object r9 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r9, r15, r1, r14)     // Catch: java.lang.Exception -> L47
            android.database.Cursor r9 = (android.database.Cursor) r9     // Catch: java.lang.Exception -> L47
            return r9
        L47:
            r9 = move-exception
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            r10.<init>(r9)
            throw r10
    }

    public static void registerContentObserver(java.lang.Object r3, android.net.Uri r4, boolean r5, android.database.ContentObserver r6, java.lang.String r7) {
            boolean r0 = r3 instanceof android.content.ContentResolver
            if (r0 == 0) goto Le
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            android.net.Uri r4 = com.bytedance.pangle.provider.a.a(r4, r7)
            r3.registerContentObserver(r4, r5, r6)
            return
        Le:
            java.lang.String r7 = "registerContentObserver"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L32
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L32
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> L32
            r5 = 1
            r1[r5] = r4     // Catch: java.lang.Exception -> L32
            r4 = 2
            r1[r4] = r6     // Catch: java.lang.Exception -> L32
            java.lang.Class[] r6 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r6[r2] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class r0 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L32
            r6[r5] = r0     // Catch: java.lang.Exception -> L32
            java.lang.Class<android.database.ContentObserver> r5 = android.database.ContentObserver.class
            r6[r4] = r5     // Catch: java.lang.Exception -> L32
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r7, r1, r6)     // Catch: java.lang.Exception -> L32
            return
        L32:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static void unregisterContentObserver(java.lang.Object r3, android.database.ContentObserver r4, java.lang.String r5) {
            boolean r5 = r3 instanceof android.content.ContentResolver
            if (r5 == 0) goto La
            android.content.ContentResolver r3 = (android.content.ContentResolver) r3
            r3.unregisterContentObserver(r4)
            return
        La:
            java.lang.String r5 = "unregisterContentObserver"
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L1c
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L1c
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L1c
            java.lang.Class<android.database.ContentObserver> r0 = android.database.ContentObserver.class
            r4[r2] = r0     // Catch: java.lang.Exception -> L1c
            com.bytedance.pangle.util.MethodUtils.invokeMethod(r3, r5, r1, r4)     // Catch: java.lang.Exception -> L1c
            return
        L1c:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            r4.<init>(r3)
            throw r4
    }

    public static int update(java.lang.Object r7, android.net.Uri r8, android.content.ContentValues r9, android.os.Bundle r10, java.lang.String r11) {
            boolean r0 = r7 instanceof android.content.ContentResolver
            if (r0 == 0) goto L14
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r7
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            int r7 = r1.update(r2, r3, r4, r5, r6)
            return r7
        L14:
            java.lang.String r11 = "update"
            r0 = 3
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L3b
            r2 = 0
            r1[r2] = r8     // Catch: java.lang.Exception -> L3b
            r8 = 1
            r1[r8] = r9     // Catch: java.lang.Exception -> L3b
            r9 = 2
            r1[r9] = r10     // Catch: java.lang.Exception -> L3b
            java.lang.Class[] r10 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r10[r2] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.content.ContentValues> r0 = android.content.ContentValues.class
            r10[r8] = r0     // Catch: java.lang.Exception -> L3b
            java.lang.Class<android.os.Bundle> r8 = android.os.Bundle.class
            r10[r9] = r8     // Catch: java.lang.Exception -> L3b
            java.lang.Object r7 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r7, r11, r1, r10)     // Catch: java.lang.Exception -> L3b
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Exception -> L3b
            int r7 = r7.intValue()     // Catch: java.lang.Exception -> L3b
            return r7
        L3b:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            r8.<init>(r7)
            throw r8
    }

    public static int update(java.lang.Object r8, android.net.Uri r9, android.content.ContentValues r10, java.lang.String r11, java.lang.String[] r12, java.lang.String r13) {
            boolean r0 = r8 instanceof android.content.ContentResolver
            if (r0 == 0) goto L15
            com.bytedance.pangle.provider.ContentProviderManager r1 = com.bytedance.pangle.provider.ContentProviderManager.getInstance()
            r2 = r8
            android.content.ContentResolver r2 = (android.content.ContentResolver) r2
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            int r8 = r1.update(r2, r3, r4, r5, r6, r7)
            return r8
        L15:
            java.lang.String r13 = "update"
            r0 = 4
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L43
            r2 = 0
            r1[r2] = r9     // Catch: java.lang.Exception -> L43
            r9 = 1
            r1[r9] = r10     // Catch: java.lang.Exception -> L43
            r10 = 2
            r1[r10] = r11     // Catch: java.lang.Exception -> L43
            r11 = 3
            r1[r11] = r12     // Catch: java.lang.Exception -> L43
            java.lang.Class[] r12 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L43
            java.lang.Class<android.net.Uri> r0 = android.net.Uri.class
            r12[r2] = r0     // Catch: java.lang.Exception -> L43
            java.lang.Class<android.content.ContentValues> r0 = android.content.ContentValues.class
            r12[r9] = r0     // Catch: java.lang.Exception -> L43
            java.lang.Class<java.lang.String> r9 = java.lang.String.class
            r12[r10] = r9     // Catch: java.lang.Exception -> L43
            java.lang.Class<java.lang.String[]> r9 = java.lang.String[].class
            r12[r11] = r9     // Catch: java.lang.Exception -> L43
            java.lang.Object r8 = com.bytedance.pangle.util.MethodUtils.invokeMethod(r8, r13, r1, r12)     // Catch: java.lang.Exception -> L43
            java.lang.Integer r8 = (java.lang.Integer) r8     // Catch: java.lang.Exception -> L43
            int r8 = r8.intValue()     // Catch: java.lang.Exception -> L43
            return r8
        L43:
            r8 = move-exception
            java.lang.RuntimeException r9 = new java.lang.RuntimeException
            r9.<init>(r8)
            throw r9
    }
}
