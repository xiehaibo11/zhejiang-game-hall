package kotlin.internal;

@kotlin.Metadata(d1 = {"\u0000\u001e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\b\n\u0002\b\u0004\n\u0002\u0010\u0000\n\u0002\b\u0004\u001a \u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0005H\u0001\u001a\"\u0010\b\u001a\u0002H\t\"\n\b\u0000\u0010\t\u0018\u0001*\u00020\n2\u0006\u0010\u000b\u001a\u00020\nH\u0083\b¢\u0006\u0002\u0010\f\u001a\b\u0010\r\u001a\u00020\u0005H\u0002\"\u0010\u0010\u0000\u001a\u00020\u00018\u0000X\u0081\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"IMPLEMENTATIONS", "Lkotlin/internal/PlatformImplementations;", "apiVersionIsAtLeast", "", "major", "", "minor", "patch", "castToBaseType", "T", "", "instance", "(Ljava/lang/Object;)Ljava/lang/Object;", "getJavaVersion", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class PlatformImplementationsKt {
    public static final kotlin.internal.PlatformImplementations IMPLEMENTATIONS = null;

    static {
            int r0 = getJavaVersion()
            r1 = 65536(0x10000, float:9.1835E-41)
            java.lang.String r2 = ", base type classloader: "
            java.lang.String r3 = "Instance class was loaded from a different classloader: "
            java.lang.String r4 = "null cannot be cast to non-null type kotlin.internal.PlatformImplementations"
            java.lang.String r5 = "forName(\"kotlin.internal…entations\").newInstance()"
            r6 = 65544(0x10008, float:9.1847E-41)
            if (r0 >= r6) goto L15
            if (r0 >= r1) goto Laf
        L15:
            java.lang.String r6 = "kotlin.internal.jdk8.JDK8PlatformImplementations"
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.ClassNotFoundException -> L62
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r6, r5)     // Catch: java.lang.ClassNotFoundException -> L62
            if (r6 == 0) goto L2a
            kotlin.internal.PlatformImplementations r6 = (kotlin.internal.PlatformImplementations) r6     // Catch: java.lang.ClassCastException -> L28 java.lang.ClassNotFoundException -> L62
            goto L156
        L28:
            r7 = move-exception
            goto L30
        L2a:
            java.lang.NullPointerException r7 = new java.lang.NullPointerException     // Catch: java.lang.ClassCastException -> L28 java.lang.ClassNotFoundException -> L62
            r7.<init>(r4)     // Catch: java.lang.ClassCastException -> L28 java.lang.ClassNotFoundException -> L62
            throw r7     // Catch: java.lang.ClassCastException -> L28 java.lang.ClassNotFoundException -> L62
        L30:
            java.lang.Class r6 = r6.getClass()     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.Class<kotlin.internal.PlatformImplementations> r8 = kotlin.internal.PlatformImplementations.class
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L62
            boolean r9 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r8)     // Catch: java.lang.ClassNotFoundException -> L62
            if (r9 != 0) goto L61
            java.lang.ClassNotFoundException r9 = new java.lang.ClassNotFoundException     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L62
            r10.<init>()     // Catch: java.lang.ClassNotFoundException -> L62
            r10.append(r3)     // Catch: java.lang.ClassNotFoundException -> L62
            r10.append(r6)     // Catch: java.lang.ClassNotFoundException -> L62
            r10.append(r2)     // Catch: java.lang.ClassNotFoundException -> L62
            r10.append(r8)     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.String r6 = r10.toString()     // Catch: java.lang.ClassNotFoundException -> L62
            java.lang.Throwable r7 = (java.lang.Throwable) r7     // Catch: java.lang.ClassNotFoundException -> L62
            r9.<init>(r6, r7)     // Catch: java.lang.ClassNotFoundException -> L62
            throw r9     // Catch: java.lang.ClassNotFoundException -> L62
        L61:
            throw r7     // Catch: java.lang.ClassNotFoundException -> L62
        L62:
            java.lang.String r6 = "kotlin.internal.JRE8PlatformImplementations"
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.ClassNotFoundException -> Laf
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r6, r5)     // Catch: java.lang.ClassNotFoundException -> Laf
            if (r6 == 0) goto L77
            kotlin.internal.PlatformImplementations r6 = (kotlin.internal.PlatformImplementations) r6     // Catch: java.lang.ClassCastException -> L75 java.lang.ClassNotFoundException -> Laf
            goto L156
        L75:
            r7 = move-exception
            goto L7d
        L77:
            java.lang.NullPointerException r7 = new java.lang.NullPointerException     // Catch: java.lang.ClassCastException -> L75 java.lang.ClassNotFoundException -> Laf
            r7.<init>(r4)     // Catch: java.lang.ClassCastException -> L75 java.lang.ClassNotFoundException -> Laf
            throw r7     // Catch: java.lang.ClassCastException -> L75 java.lang.ClassNotFoundException -> Laf
        L7d:
            java.lang.Class r6 = r6.getClass()     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.Class<kotlin.internal.PlatformImplementations> r8 = kotlin.internal.PlatformImplementations.class
            java.lang.ClassLoader r8 = r8.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> Laf
            boolean r9 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r8)     // Catch: java.lang.ClassNotFoundException -> Laf
            if (r9 != 0) goto Lae
            java.lang.ClassNotFoundException r9 = new java.lang.ClassNotFoundException     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> Laf
            r10.<init>()     // Catch: java.lang.ClassNotFoundException -> Laf
            r10.append(r3)     // Catch: java.lang.ClassNotFoundException -> Laf
            r10.append(r6)     // Catch: java.lang.ClassNotFoundException -> Laf
            r10.append(r2)     // Catch: java.lang.ClassNotFoundException -> Laf
            r10.append(r8)     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.String r6 = r10.toString()     // Catch: java.lang.ClassNotFoundException -> Laf
            java.lang.Throwable r7 = (java.lang.Throwable) r7     // Catch: java.lang.ClassNotFoundException -> Laf
            r9.<init>(r6, r7)     // Catch: java.lang.ClassNotFoundException -> Laf
            throw r9     // Catch: java.lang.ClassNotFoundException -> Laf
        Lae:
            throw r7     // Catch: java.lang.ClassNotFoundException -> Laf
        Laf:
            r6 = 65543(0x10007, float:9.1845E-41)
            if (r0 >= r6) goto Lb6
            if (r0 >= r1) goto L151
        Lb6:
            java.lang.String r0 = "kotlin.internal.jdk7.JDK7PlatformImplementations"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.ClassNotFoundException -> L104
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r5)     // Catch: java.lang.ClassNotFoundException -> L104
            if (r0 == 0) goto Lcc
            r6 = r0
            kotlin.internal.PlatformImplementations r6 = (kotlin.internal.PlatformImplementations) r6     // Catch: java.lang.ClassCastException -> Lca java.lang.ClassNotFoundException -> L104
            goto L156
        Lca:
            r1 = move-exception
            goto Ld2
        Lcc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException     // Catch: java.lang.ClassCastException -> Lca java.lang.ClassNotFoundException -> L104
            r1.<init>(r4)     // Catch: java.lang.ClassCastException -> Lca java.lang.ClassNotFoundException -> L104
            throw r1     // Catch: java.lang.ClassCastException -> Lca java.lang.ClassNotFoundException -> L104
        Ld2:
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.Class<kotlin.internal.PlatformImplementations> r6 = kotlin.internal.PlatformImplementations.class
            java.lang.ClassLoader r6 = r6.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L104
            boolean r7 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r6)     // Catch: java.lang.ClassNotFoundException -> L104
            if (r7 != 0) goto L103
            java.lang.ClassNotFoundException r7 = new java.lang.ClassNotFoundException     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L104
            r8.<init>()     // Catch: java.lang.ClassNotFoundException -> L104
            r8.append(r3)     // Catch: java.lang.ClassNotFoundException -> L104
            r8.append(r0)     // Catch: java.lang.ClassNotFoundException -> L104
            r8.append(r2)     // Catch: java.lang.ClassNotFoundException -> L104
            r8.append(r6)     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.String r0 = r8.toString()     // Catch: java.lang.ClassNotFoundException -> L104
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.ClassNotFoundException -> L104
            r7.<init>(r0, r1)     // Catch: java.lang.ClassNotFoundException -> L104
            throw r7     // Catch: java.lang.ClassNotFoundException -> L104
        L103:
            throw r1     // Catch: java.lang.ClassNotFoundException -> L104
        L104:
            java.lang.String r0 = "kotlin.internal.JRE7PlatformImplementations"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.ClassNotFoundException -> L151
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r5)     // Catch: java.lang.ClassNotFoundException -> L151
            if (r0 == 0) goto L119
            r6 = r0
            kotlin.internal.PlatformImplementations r6 = (kotlin.internal.PlatformImplementations) r6     // Catch: java.lang.ClassCastException -> L117 java.lang.ClassNotFoundException -> L151
            goto L156
        L117:
            r1 = move-exception
            goto L11f
        L119:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException     // Catch: java.lang.ClassCastException -> L117 java.lang.ClassNotFoundException -> L151
            r1.<init>(r4)     // Catch: java.lang.ClassCastException -> L117 java.lang.ClassNotFoundException -> L151
            throw r1     // Catch: java.lang.ClassCastException -> L117 java.lang.ClassNotFoundException -> L151
        L11f:
            java.lang.Class r0 = r0.getClass()     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.Class<kotlin.internal.PlatformImplementations> r4 = kotlin.internal.PlatformImplementations.class
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L151
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r4)     // Catch: java.lang.ClassNotFoundException -> L151
            if (r5 != 0) goto L150
            java.lang.ClassNotFoundException r5 = new java.lang.ClassNotFoundException     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.ClassNotFoundException -> L151
            r6.<init>()     // Catch: java.lang.ClassNotFoundException -> L151
            r6.append(r3)     // Catch: java.lang.ClassNotFoundException -> L151
            r6.append(r0)     // Catch: java.lang.ClassNotFoundException -> L151
            r6.append(r2)     // Catch: java.lang.ClassNotFoundException -> L151
            r6.append(r4)     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.String r0 = r6.toString()     // Catch: java.lang.ClassNotFoundException -> L151
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.ClassNotFoundException -> L151
            r5.<init>(r0, r1)     // Catch: java.lang.ClassNotFoundException -> L151
            throw r5     // Catch: java.lang.ClassNotFoundException -> L151
        L150:
            throw r1     // Catch: java.lang.ClassNotFoundException -> L151
        L151:
            kotlin.internal.PlatformImplementations r6 = new kotlin.internal.PlatformImplementations
            r6.<init>()
        L156:
            kotlin.internal.PlatformImplementationsKt.IMPLEMENTATIONS = r6
            return
    }

    public static final boolean apiVersionIsAtLeast(int r1, int r2, int r3) {
            kotlin.KotlinVersion r0 = kotlin.KotlinVersion.CURRENT
            boolean r1 = r0.isAtLeast(r1, r2, r3)
            return r1
    }

    private static final <T> T castToBaseType(java.lang.Object r5) {
            java.lang.String r0 = "T"
            r1 = 1
            kotlin.jvm.internal.Intrinsics.reifiedOperationMarker(r1, r0)     // Catch: java.lang.ClassCastException -> L9
            java.lang.Object r5 = (java.lang.Object) r5     // Catch: java.lang.ClassCastException -> L9
            return r5
        L9:
            r1 = move-exception
            java.lang.Class r5 = r5.getClass()
            java.lang.ClassLoader r5 = r5.getClassLoader()
            r2 = 4
            kotlin.jvm.internal.Intrinsics.reifiedOperationMarker(r2, r0)
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            java.lang.Class r0 = (java.lang.Class) r0
            java.lang.ClassLoader r0 = r0.getClassLoader()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r5, r0)
            if (r2 != 0) goto L45
            java.lang.ClassNotFoundException r2 = new java.lang.ClassNotFoundException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Instance class was loaded from a different classloader: "
            r3.append(r4)
            r3.append(r5)
            java.lang.String r5 = ", base type classloader: "
            r3.append(r5)
            r3.append(r0)
            java.lang.String r5 = r3.toString()
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            r2.<init>(r5, r1)
            throw r2
        L45:
            throw r1
    }

    private static final int getJavaVersion() {
            java.lang.String r0 = "java.specification.version"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            r1 = 65542(0x10006, float:9.1844E-41)
            if (r0 != 0) goto Lc
            return r1
        Lc:
            r8 = r0
            java.lang.CharSequence r8 = (java.lang.CharSequence) r8
            r3 = 46
            r4 = 0
            r5 = 0
            r6 = 6
            r7 = 0
            r2 = r8
            int r9 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
            r10 = 65536(0x10000, float:9.1835E-41)
            if (r9 >= 0) goto L25
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L24
            int r1 = r0 * r10
        L24:
            return r1
        L25:
            r3 = 46
            int r11 = r9 + 1
            r5 = 0
            r6 = 4
            r7 = 0
            r2 = r8
            r4 = r11
            int r2 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
            if (r2 >= 0) goto L38
            int r2 = r0.length()
        L38:
            r3 = 0
            java.lang.String r3 = r0.substring(r3, r9)
            java.lang.String r4 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
            java.lang.String r0 = r0.substring(r11, r2)
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r4)
            int r2 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L54
            int r2 = r2 * r10
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L54
            int r1 = r2 + r0
        L54:
            return r1
    }
}
