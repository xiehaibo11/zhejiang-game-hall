package kotlin.jvm;

@kotlin.Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u001b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0000\n\u0002\b\u000b\n\u0002\u0010\u000b\n\u0002\u0010\u0011\n\u0002\b\u0002\u001a\u001f\u0010\u0018\u001a\u00020\u0019\"\n\b\u0000\u0010\u0002\u0018\u0001*\u00020\r*\u0006\u0012\u0002\b\u00030\u001a¢\u0006\u0002\u0010\u001b\"'\u0010\u0000\u001a\n\u0012\u0006\b\u0001\u0012\u0002H\u00020\u0001\"\b\b\u0000\u0010\u0002*\u00020\u0003*\u0002H\u00028F¢\u0006\u0006\u001a\u0004\b\u0004\u0010\u0005\"-\u0010\u0006\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0007\"\u0004\b\u0000\u0010\u0002*\b\u0012\u0004\u0012\u0002H\u00020\u00018G¢\u0006\f\u0012\u0004\b\b\u0010\t\u001a\u0004\b\n\u0010\u000b\"&\u0010\f\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0007\"\b\b\u0000\u0010\u0002*\u00020\r*\u0002H\u00028Æ\u0002¢\u0006\u0006\u001a\u0004\b\n\u0010\u000e\";\u0010\f\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\u00010\u0007\"\b\b\u0000\u0010\u0002*\u00020\r*\b\u0012\u0004\u0012\u0002H\u00020\u00018Ç\u0002X\u0087\u0004¢\u0006\f\u0012\u0004\b\u000f\u0010\t\u001a\u0004\b\u0010\u0010\u000b\"+\u0010\u0011\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0007\"\b\b\u0000\u0010\u0002*\u00020\r*\b\u0012\u0004\u0012\u0002H\u00020\u00018F¢\u0006\u0006\u001a\u0004\b\u0012\u0010\u000b\"-\u0010\u0013\u001a\n\u0012\u0004\u0012\u0002H\u0002\u0018\u00010\u0007\"\b\b\u0000\u0010\u0002*\u00020\r*\b\u0012\u0004\u0012\u0002H\u00020\u00018F¢\u0006\u0006\u001a\u0004\b\u0014\u0010\u000b\"+\u0010\u0015\u001a\b\u0012\u0004\u0012\u0002H\u00020\u0001\"\b\b\u0000\u0010\u0002*\u00020\r*\b\u0012\u0004\u0012\u0002H\u00020\u00078G¢\u0006\u0006\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u001c"}, d2 = {"annotationClass", "Lkotlin/reflect/KClass;", "T", "", "getAnnotationClass", "(Ljava/lang/annotation/Annotation;)Lkotlin/reflect/KClass;", "java", "Ljava/lang/Class;", "getJavaClass$annotations", "(Lkotlin/reflect/KClass;)V", "getJavaClass", "(Lkotlin/reflect/KClass;)Ljava/lang/Class;", "javaClass", "", "(Ljava/lang/Object;)Ljava/lang/Class;", "getRuntimeClassOfKClassInstance$annotations", "getRuntimeClassOfKClassInstance", "javaObjectType", "getJavaObjectType", "javaPrimitiveType", "getJavaPrimitiveType", "kotlin", "getKotlinClass", "(Ljava/lang/Class;)Lkotlin/reflect/KClass;", "isArrayOf", "", "", "([Ljava/lang/Object;)Z", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class JvmClassMappingKt {
    public static final <T extends java.lang.annotation.Annotation> kotlin.reflect.KClass<? extends T> getAnnotationClass(T r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Class r1 = r1.annotationType()
            java.lang.String r0 = "this as java.lang.annota…otation).annotationType()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            kotlin.reflect.KClass r1 = getKotlinClass(r1)
            return r1
    }

    public static final <T> java.lang.Class<T> getJavaClass(T r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Class r1 = r1.getClass()
            if (r1 == 0) goto Lc
            return r1
        Lc:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "null cannot be cast to non-null type java.lang.Class<T of kotlin.jvm.JvmClassMappingKt.<get-javaClass>>"
            r1.<init>(r0)
            throw r1
    }

    public static final <T> java.lang.Class<T> getJavaClass(kotlin.reflect.KClass<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ClassBasedDeclarationContainer r1 = (kotlin.jvm.internal.ClassBasedDeclarationContainer) r1
            java.lang.Class r1 = r1.getJClass()
            return r1
    }

    public static void getJavaClass$annotations(kotlin.reflect.KClass r0) {
            return
    }

    public static final <T> java.lang.Class<T> getJavaObjectType(kotlin.reflect.KClass<T> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.jvm.internal.ClassBasedDeclarationContainer r2 = (kotlin.jvm.internal.ClassBasedDeclarationContainer) r2
            java.lang.Class r2 = r2.getJClass()
            boolean r0 = r2.isPrimitive()
            if (r0 != 0) goto L12
            return r2
        L12:
            java.lang.String r0 = r2.getName()
            if (r0 == 0) goto L8e
            int r1 = r0.hashCode()
            switch(r1) {
                case -1325958191: goto L83;
                case 104431: goto L77;
                case 3039496: goto L6b;
                case 3052374: goto L5f;
                case 3327612: goto L53;
                case 3625364: goto L47;
                case 64711720: goto L3b;
                case 97526364: goto L2f;
                case 109413500: goto L21;
                default: goto L1f;
            }
        L1f:
            goto L8e
        L21:
            java.lang.String r1 = "short"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            goto L8e
        L2b:
            java.lang.Class<java.lang.Short> r2 = java.lang.Short.class
            goto L8e
        L2f:
            java.lang.String r1 = "float"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L38
            goto L8e
        L38:
            java.lang.Class<java.lang.Float> r2 = java.lang.Float.class
            goto L8e
        L3b:
            java.lang.String r1 = "boolean"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L44
            goto L8e
        L44:
            java.lang.Class<java.lang.Boolean> r2 = java.lang.Boolean.class
            goto L8e
        L47:
            java.lang.String r1 = "void"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L50
            goto L8e
        L50:
            java.lang.Class<java.lang.Void> r2 = java.lang.Void.class
            goto L8e
        L53:
            java.lang.String r1 = "long"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5c
            goto L8e
        L5c:
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            goto L8e
        L5f:
            java.lang.String r1 = "char"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L68
            goto L8e
        L68:
            java.lang.Class<java.lang.Character> r2 = java.lang.Character.class
            goto L8e
        L6b:
            java.lang.String r1 = "byte"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L74
            goto L8e
        L74:
            java.lang.Class<java.lang.Byte> r2 = java.lang.Byte.class
            goto L8e
        L77:
            java.lang.String r1 = "int"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L80
            goto L8e
        L80:
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            goto L8e
        L83:
            java.lang.String r1 = "double"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L8c
            goto L8e
        L8c:
            java.lang.Class<java.lang.Double> r2 = java.lang.Double.class
        L8e:
            return r2
    }

    public static final <T> java.lang.Class<T> getJavaPrimitiveType(kotlin.reflect.KClass<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.jvm.internal.ClassBasedDeclarationContainer r1 = (kotlin.jvm.internal.ClassBasedDeclarationContainer) r1
            java.lang.Class r1 = r1.getJClass()
            boolean r0 = r1.isPrimitive()
            if (r0 == 0) goto L12
            return r1
        L12:
            java.lang.String r1 = r1.getName()
            if (r1 == 0) goto L8f
            int r0 = r1.hashCode()
            switch(r0) {
                case -2056817302: goto L83;
                case -527879800: goto L77;
                case -515992664: goto L6b;
                case 155276373: goto L5f;
                case 344809556: goto L53;
                case 398507100: goto L47;
                case 398795216: goto L3b;
                case 399092968: goto L2f;
                case 761287205: goto L21;
                default: goto L1f;
            }
        L1f:
            goto L8f
        L21:
            java.lang.String r0 = "java.lang.Double"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L2b
            goto L8f
        L2b:
            java.lang.Class r1 = java.lang.Double.TYPE
            goto L90
        L2f:
            java.lang.String r0 = "java.lang.Void"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L38
            goto L8f
        L38:
            java.lang.Class r1 = java.lang.Void.TYPE
            goto L90
        L3b:
            java.lang.String r0 = "java.lang.Long"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L44
            goto L8f
        L44:
            java.lang.Class r1 = java.lang.Long.TYPE
            goto L90
        L47:
            java.lang.String r0 = "java.lang.Byte"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L50
            goto L8f
        L50:
            java.lang.Class r1 = java.lang.Byte.TYPE
            goto L90
        L53:
            java.lang.String r0 = "java.lang.Boolean"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L5c
            goto L8f
        L5c:
            java.lang.Class r1 = java.lang.Boolean.TYPE
            goto L90
        L5f:
            java.lang.String r0 = "java.lang.Character"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L68
            goto L8f
        L68:
            java.lang.Class r1 = java.lang.Character.TYPE
            goto L90
        L6b:
            java.lang.String r0 = "java.lang.Short"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L74
            goto L8f
        L74:
            java.lang.Class r1 = java.lang.Short.TYPE
            goto L90
        L77:
            java.lang.String r0 = "java.lang.Float"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L80
            goto L8f
        L80:
            java.lang.Class r1 = java.lang.Float.TYPE
            goto L90
        L83:
            java.lang.String r0 = "java.lang.Integer"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L8c
            goto L8f
        L8c:
            java.lang.Class r1 = java.lang.Integer.TYPE
            goto L90
        L8f:
            r1 = 0
        L90:
            return r1
    }

    public static final <T> kotlin.reflect.KClass<T> getKotlinClass(java.lang.Class<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.reflect.KClass r1 = kotlin.jvm.internal.Reflection.getOrCreateKotlinClass(r1)
            return r1
    }

    public static final <T> java.lang.Class<kotlin.reflect.KClass<T>> getRuntimeClassOfKClassInstance(kotlin.reflect.KClass<T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Object r1 = (java.lang.Object) r1
            java.lang.Class r1 = r1.getClass()
            if (r1 == 0) goto Le
            return r1
        Le:
            java.lang.NullPointerException r1 = new java.lang.NullPointerException
            java.lang.String r0 = "null cannot be cast to non-null type java.lang.Class<kotlin.reflect.KClass<T of kotlin.jvm.JvmClassMappingKt.<get-javaClass>>>"
            r1.<init>(r0)
            throw r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "Use 'java' property to get Java class corresponding to this Kotlin class or cast this instance to Any if you really want to get the runtime Java class of this implementation of KClass.", replaceWith = @kotlin.ReplaceWith(expression = "(this as Any).javaClass", imports = {}))
    public static void getRuntimeClassOfKClassInstance$annotations(kotlin.reflect.KClass r0) {
            return
    }

    public static final boolean isArrayOf(java.lang.Object[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 4
            java.lang.String r1 = "T"
            kotlin.jvm.internal.Intrinsics.reifiedOperationMarker(r0, r1)
            java.lang.Class<java.lang.Object> r0 = java.lang.Object.class
            java.lang.Class r0 = (java.lang.Class) r0
            java.lang.Class r2 = r2.getClass()
            java.lang.Class r2 = (java.lang.Class) r2
            java.lang.Class r2 = r2.getComponentType()
            boolean r2 = r0.isAssignableFrom(r2)
            return r2
    }
}
