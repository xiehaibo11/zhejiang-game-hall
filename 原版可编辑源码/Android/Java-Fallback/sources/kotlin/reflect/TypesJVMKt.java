package kotlin.reflect;

@kotlin.Metadata(d1 = {"\u00000\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\u001a\"\u0010\n\u001a\u00020\u00012\n\u0010\u000b\u001a\u0006\u0012\u0002\b\u00030\f2\f\u0010\r\u001a\b\u0012\u0004\u0012\u00020\u00070\u000eH\u0003\u001a\u0010\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u0001H\u0002\u001a\u0016\u0010\u0012\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\u0013\u001a\u00020\u0014H\u0003\"\u001e\u0010\u0000\u001a\u00020\u0001*\u00020\u00028FX\u0087\u0004¢\u0006\f\u0012\u0004\b\u0003\u0010\u0004\u001a\u0004\b\u0005\u0010\u0006\"\u001e\u0010\u0000\u001a\u00020\u0001*\u00020\u00078BX\u0083\u0004¢\u0006\f\u0012\u0004\b\u0003\u0010\b\u001a\u0004\b\u0005\u0010\t¨\u0006\u0015"}, d2 = {"javaType", "Ljava/lang/reflect/Type;", "Lkotlin/reflect/KType;", "getJavaType$annotations", "(Lkotlin/reflect/KType;)V", "getJavaType", "(Lkotlin/reflect/KType;)Ljava/lang/reflect/Type;", "Lkotlin/reflect/KTypeProjection;", "(Lkotlin/reflect/KTypeProjection;)V", "(Lkotlin/reflect/KTypeProjection;)Ljava/lang/reflect/Type;", "createPossiblyInnerType", "jClass", "Ljava/lang/Class;", "arguments", "", "typeToString", "", "type", "computeJavaType", "forceWrapper", "", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class TypesJVMKt {

    @kotlin.Metadata(k = 3, mv = {1, 6, 0}, xi = 48)
    public class WhenMappings {
        public static final int[] $EnumSwitchMapping$0 = null;

        static {
                kotlin.reflect.KVariance[] r0 = kotlin.reflect.KVariance.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                kotlin.reflect.KVariance r1 = kotlin.reflect.KVariance.IN
                int r1 = r1.ordinal()
                r2 = 1
                r0[r1] = r2
                kotlin.reflect.KVariance r1 = kotlin.reflect.KVariance.INVARIANT
                int r1 = r1.ordinal()
                r2 = 2
                r0[r1] = r2
                kotlin.reflect.KVariance r1 = kotlin.reflect.KVariance.OUT
                int r1 = r1.ordinal()
                r2 = 3
                r0[r1] = r2
                kotlin.reflect.TypesJVMKt.WhenMappings.$EnumSwitchMapping$0 = r0
                return
        }
    }

    public static final java.lang.reflect.Type access$computeJavaType(kotlin.reflect.KType r0, boolean r1) {
            java.lang.reflect.Type r0 = computeJavaType(r0, r1)
            return r0
    }

    public static final java.lang.String access$typeToString(java.lang.reflect.Type r0) {
            java.lang.String r0 = typeToString(r0)
            return r0
    }

    private static final java.lang.reflect.Type computeJavaType(kotlin.reflect.KType r3, boolean r4) {
            kotlin.reflect.KClassifier r0 = r3.getClassifier()
            boolean r1 = r0 instanceof kotlin.reflect.KTypeParameter
            if (r1 == 0) goto L12
            kotlin.reflect.TypeVariableImpl r3 = new kotlin.reflect.TypeVariableImpl
            kotlin.reflect.KTypeParameter r0 = (kotlin.reflect.KTypeParameter) r0
            r3.<init>(r0)
            java.lang.reflect.Type r3 = (java.lang.reflect.Type) r3
            return r3
        L12:
            boolean r1 = r0 instanceof kotlin.reflect.KClass
            if (r1 == 0) goto La7
            kotlin.reflect.KClass r0 = (kotlin.reflect.KClass) r0
            if (r4 == 0) goto L1f
            java.lang.Class r4 = kotlin.jvm.JvmClassMappingKt.getJavaObjectType(r0)
            goto L23
        L1f:
            java.lang.Class r4 = kotlin.jvm.JvmClassMappingKt.getJavaClass(r0)
        L23:
            java.util.List r0 = r3.getArguments()
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L30
            java.lang.reflect.Type r4 = (java.lang.reflect.Type) r4
            return r4
        L30:
            boolean r1 = r4.isArray()
            if (r1 == 0) goto La2
            java.lang.Class r1 = r4.getComponentType()
            boolean r1 = r1.isPrimitive()
            if (r1 == 0) goto L43
            java.lang.reflect.Type r4 = (java.lang.reflect.Type) r4
            return r4
        L43:
            java.lang.Object r0 = kotlin.collections.CollectionsKt.singleOrNull(r0)
            kotlin.reflect.KTypeProjection r0 = (kotlin.reflect.KTypeProjection) r0
            if (r0 == 0) goto L8b
            kotlin.reflect.KVariance r3 = r0.component1()
            kotlin.reflect.KType r0 = r0.component2()
            r1 = -1
            if (r3 != 0) goto L58
            r3 = r1
            goto L60
        L58:
            int[] r2 = kotlin.reflect.TypesJVMKt.WhenMappings.$EnumSwitchMapping$0
            int r3 = r3.ordinal()
            r3 = r2[r3]
        L60:
            if (r3 == r1) goto L88
            r1 = 1
            if (r3 == r1) goto L88
            r2 = 2
            if (r3 == r2) goto L72
            r2 = 3
            if (r3 != r2) goto L6c
            goto L72
        L6c:
            kotlin.NoWhenBranchMatchedException r3 = new kotlin.NoWhenBranchMatchedException
            r3.<init>()
            throw r3
        L72:
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r3 = 0
            r2 = 0
            java.lang.reflect.Type r3 = computeJavaType$default(r0, r3, r1, r2)
            boolean r0 = r3 instanceof java.lang.Class
            if (r0 == 0) goto L80
            goto L85
        L80:
            kotlin.reflect.GenericArrayTypeImpl r4 = new kotlin.reflect.GenericArrayTypeImpl
            r4.<init>(r3)
        L85:
            java.lang.reflect.Type r4 = (java.lang.reflect.Type) r4
            goto L8a
        L88:
            java.lang.reflect.Type r4 = (java.lang.reflect.Type) r4
        L8a:
            return r4
        L8b:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "kotlin.Array must have exactly one type argument: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        La2:
            java.lang.reflect.Type r3 = createPossiblyInnerType(r4, r0)
            return r3
        La7:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported type classifier: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    static java.lang.reflect.Type computeJavaType$default(kotlin.reflect.KType r0, boolean r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L5
            r1 = 0
        L5:
            java.lang.reflect.Type r0 = computeJavaType(r0, r1)
            return r0
    }

    private static final java.lang.reflect.Type createPossiblyInnerType(java.lang.Class<?> r4, java.util.List<kotlin.reflect.KTypeProjection> r5) {
            java.lang.Class r0 = r4.getDeclaringClass()
            r1 = 10
            if (r0 != 0) goto L38
            r0 = 0
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            java.util.ArrayList r2 = new java.util.ArrayList
            int r1 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r5, r1)
            r2.<init>(r1)
            java.util.Collection r2 = (java.util.Collection) r2
            java.util.Iterator r5 = r5.iterator()
        L1a:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r5.next()
            kotlin.reflect.KTypeProjection r1 = (kotlin.reflect.KTypeProjection) r1
            java.lang.reflect.Type r1 = getJavaType(r1)
            r2.add(r1)
            goto L1a
        L2e:
            java.util.List r2 = (java.util.List) r2
            kotlin.reflect.ParameterizedTypeImpl r5 = new kotlin.reflect.ParameterizedTypeImpl
            r5.<init>(r4, r0, r2)
            java.lang.reflect.Type r5 = (java.lang.reflect.Type) r5
            return r5
        L38:
            int r2 = r4.getModifiers()
            boolean r2 = java.lang.reflect.Modifier.isStatic(r2)
            if (r2 == 0) goto L73
            java.lang.reflect.Type r0 = (java.lang.reflect.Type) r0
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            java.util.ArrayList r2 = new java.util.ArrayList
            int r1 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r5, r1)
            r2.<init>(r1)
            java.util.Collection r2 = (java.util.Collection) r2
            java.util.Iterator r5 = r5.iterator()
        L55:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L69
            java.lang.Object r1 = r5.next()
            kotlin.reflect.KTypeProjection r1 = (kotlin.reflect.KTypeProjection) r1
            java.lang.reflect.Type r1 = getJavaType(r1)
            r2.add(r1)
            goto L55
        L69:
            java.util.List r2 = (java.util.List) r2
            kotlin.reflect.ParameterizedTypeImpl r5 = new kotlin.reflect.ParameterizedTypeImpl
            r5.<init>(r4, r0, r2)
            java.lang.reflect.Type r5 = (java.lang.reflect.Type) r5
            return r5
        L73:
            java.lang.reflect.TypeVariable[] r2 = r4.getTypeParameters()
            int r2 = r2.length
            int r3 = r5.size()
            java.util.List r3 = r5.subList(r2, r3)
            java.lang.reflect.Type r0 = createPossiblyInnerType(r0, r3)
            r3 = 0
            java.util.List r5 = r5.subList(r3, r2)
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            java.util.ArrayList r2 = new java.util.ArrayList
            int r1 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r5, r1)
            r2.<init>(r1)
            java.util.Collection r2 = (java.util.Collection) r2
            java.util.Iterator r5 = r5.iterator()
        L9a:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto Lae
            java.lang.Object r1 = r5.next()
            kotlin.reflect.KTypeProjection r1 = (kotlin.reflect.KTypeProjection) r1
            java.lang.reflect.Type r1 = getJavaType(r1)
            r2.add(r1)
            goto L9a
        Lae:
            java.util.List r2 = (java.util.List) r2
            kotlin.reflect.ParameterizedTypeImpl r5 = new kotlin.reflect.ParameterizedTypeImpl
            r5.<init>(r4, r0, r2)
            java.lang.reflect.Type r5 = (java.lang.reflect.Type) r5
            return r5
    }

    public static final java.lang.reflect.Type getJavaType(kotlin.reflect.KType r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3 instanceof kotlin.jvm.internal.KTypeBase
            if (r0 == 0) goto L13
            r0 = r3
            kotlin.jvm.internal.KTypeBase r0 = (kotlin.jvm.internal.KTypeBase) r0
            java.lang.reflect.Type r0 = r0.getJavaType()
            if (r0 == 0) goto L13
            return r0
        L13:
            r0 = 0
            r1 = 1
            r2 = 0
            java.lang.reflect.Type r3 = computeJavaType$default(r3, r0, r1, r2)
            return r3
    }

    private static final java.lang.reflect.Type getJavaType(kotlin.reflect.KTypeProjection r4) {
            kotlin.reflect.KVariance r0 = r4.getVariance()
            if (r0 != 0) goto Lf
            kotlin.reflect.WildcardTypeImpl$Companion r4 = kotlin.reflect.WildcardTypeImpl.Companion
            kotlin.reflect.WildcardTypeImpl r4 = r4.getSTAR()
            java.lang.reflect.Type r4 = (java.lang.reflect.Type) r4
            return r4
        Lf:
            kotlin.reflect.KType r4 = r4.getType()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            int[] r1 = kotlin.reflect.TypesJVMKt.WhenMappings.$EnumSwitchMapping$0
            int r0 = r0.ordinal()
            r0 = r1[r0]
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L3f
            r3 = 2
            if (r0 == r3) goto L3a
            r3 = 3
            if (r0 != r3) goto L34
            kotlin.reflect.WildcardTypeImpl r0 = new kotlin.reflect.WildcardTypeImpl
            java.lang.reflect.Type r4 = computeJavaType(r4, r2)
            r0.<init>(r4, r1)
            java.lang.reflect.Type r0 = (java.lang.reflect.Type) r0
            goto L4a
        L34:
            kotlin.NoWhenBranchMatchedException r4 = new kotlin.NoWhenBranchMatchedException
            r4.<init>()
            throw r4
        L3a:
            java.lang.reflect.Type r0 = computeJavaType(r4, r2)
            goto L4a
        L3f:
            kotlin.reflect.WildcardTypeImpl r0 = new kotlin.reflect.WildcardTypeImpl
            java.lang.reflect.Type r4 = computeJavaType(r4, r2)
            r0.<init>(r1, r4)
            java.lang.reflect.Type r0 = (java.lang.reflect.Type) r0
        L4a:
            return r0
    }

    public static void getJavaType$annotations(kotlin.reflect.KType r0) {
            return
    }

    private static void getJavaType$annotations(kotlin.reflect.KTypeProjection r0) {
            return
    }

    private static final java.lang.String typeToString(java.lang.reflect.Type r2) {
            boolean r0 = r2 instanceof java.lang.Class
            if (r0 == 0) goto L45
            r0 = r2
            java.lang.Class r0 = (java.lang.Class) r0
            boolean r1 = r0.isArray()
            if (r1 == 0) goto L3b
            kotlin.reflect.TypesJVMKt$typeToString$unwrap$1 r0 = kotlin.reflect.TypesJVMKt$typeToString$unwrap$1.INSTANCE
            kotlin.jvm.functions.Function1 r0 = (kotlin.jvm.functions.Function1) r0
            kotlin.sequences.Sequence r2 = kotlin.sequences.SequencesKt.generateSequence(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Object r1 = kotlin.sequences.SequencesKt.last(r2)
            java.lang.Class r1 = (java.lang.Class) r1
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "[]"
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            int r2 = kotlin.sequences.SequencesKt.count(r2)
            java.lang.String r2 = kotlin.text.StringsKt.repeat(r1, r2)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            goto L3f
        L3b:
            java.lang.String r2 = r0.getName()
        L3f:
            java.lang.String r0 = "{\n        if (type.isArr…   } else type.name\n    }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
            goto L49
        L45:
            java.lang.String r2 = r2.toString()
        L49:
            return r2
    }
}
