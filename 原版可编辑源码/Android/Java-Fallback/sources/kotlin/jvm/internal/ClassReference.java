package kotlin.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0010\u001b\n\u0002\b\u0003\n\u0002\u0010\u001e\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0016\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0001\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\u0018\u0000 O2\b\u0012\u0004\u0012\u00020\u00020\u00012\u00020\u0003:\u0001OB\u0011\u0012\n\u0010\u0004\u001a\u0006\u0012\u0002\b\u00030\u0005¢\u0006\u0002\u0010\u0006J\u0013\u0010F\u001a\u00020\u00122\b\u0010G\u001a\u0004\u0018\u00010\u0002H\u0096\u0002J\b\u0010H\u001a\u00020IH\u0002J\b\u0010J\u001a\u00020KH\u0016J\u0012\u0010L\u001a\u00020\u00122\b\u0010M\u001a\u0004\u0018\u00010\u0002H\u0017J\b\u0010N\u001a\u000201H\u0016R\u001a\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\b8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR \u0010\f\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00020\u000e0\r8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0011\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u0013\u0010\u0014\u001a\u0004\b\u0011\u0010\u0015R\u001a\u0010\u0016\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u0017\u0010\u0014\u001a\u0004\b\u0016\u0010\u0015R\u001a\u0010\u0018\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u0019\u0010\u0014\u001a\u0004\b\u0018\u0010\u0015R\u001a\u0010\u001a\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u001b\u0010\u0014\u001a\u0004\b\u001a\u0010\u0015R\u001a\u0010\u001c\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u001d\u0010\u0014\u001a\u0004\b\u001c\u0010\u0015R\u001a\u0010\u001e\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b\u001f\u0010\u0014\u001a\u0004\b\u001e\u0010\u0015R\u001a\u0010 \u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b!\u0010\u0014\u001a\u0004\b \u0010\u0015R\u001a\u0010\"\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b#\u0010\u0014\u001a\u0004\b\"\u0010\u0015R\u001a\u0010$\u001a\u00020\u00128VX\u0097\u0004¢\u0006\f\u0012\u0004\b%\u0010\u0014\u001a\u0004\b$\u0010\u0015R\u0018\u0010\u0004\u001a\u0006\u0012\u0002\b\u00030\u0005X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b&\u0010'R\u001e\u0010(\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030)0\r8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b*\u0010\u0010R\u001e\u0010+\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00010\r8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b,\u0010\u0010R\u0016\u0010-\u001a\u0004\u0018\u00010\u00028VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b.\u0010/R\u0016\u00100\u001a\u0004\u0018\u0001018VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b2\u00103R(\u00104\u001a\u0010\u0012\f\u0012\n\u0012\u0006\b\u0001\u0012\u00020\u00020\u00010\b8VX\u0097\u0004¢\u0006\f\u0012\u0004\b5\u0010\u0014\u001a\u0004\b6\u0010\u000bR\u0016\u00107\u001a\u0004\u0018\u0001018VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b8\u00103R \u00109\u001a\b\u0012\u0004\u0012\u00020:0\b8VX\u0097\u0004¢\u0006\f\u0012\u0004\b;\u0010\u0014\u001a\u0004\b<\u0010\u000bR \u0010=\u001a\b\u0012\u0004\u0012\u00020>0\b8VX\u0097\u0004¢\u0006\f\u0012\u0004\b?\u0010\u0014\u001a\u0004\b@\u0010\u000bR\u001c\u0010A\u001a\u0004\u0018\u00010B8VX\u0097\u0004¢\u0006\f\u0012\u0004\bC\u0010\u0014\u001a\u0004\bD\u0010E¨\u0006P"}, d2 = {"Lkotlin/jvm/internal/ClassReference;", "Lkotlin/reflect/KClass;", "", "Lkotlin/jvm/internal/ClassBasedDeclarationContainer;", "jClass", "Ljava/lang/Class;", "(Ljava/lang/Class;)V", "annotations", "", "", "getAnnotations", "()Ljava/util/List;", "constructors", "", "Lkotlin/reflect/KFunction;", "getConstructors", "()Ljava/util/Collection;", "isAbstract", "", "isAbstract$annotations", "()V", "()Z", "isCompanion", "isCompanion$annotations", "isData", "isData$annotations", "isFinal", "isFinal$annotations", "isFun", "isFun$annotations", "isInner", "isInner$annotations", "isOpen", "isOpen$annotations", "isSealed", "isSealed$annotations", "isValue", "isValue$annotations", "getJClass", "()Ljava/lang/Class;", "members", "Lkotlin/reflect/KCallable;", "getMembers", "nestedClasses", "getNestedClasses", "objectInstance", "getObjectInstance", "()Ljava/lang/Object;", "qualifiedName", "", "getQualifiedName", "()Ljava/lang/String;", "sealedSubclasses", "getSealedSubclasses$annotations", "getSealedSubclasses", "simpleName", "getSimpleName", "supertypes", "Lkotlin/reflect/KType;", "getSupertypes$annotations", "getSupertypes", "typeParameters", "Lkotlin/reflect/KTypeParameter;", "getTypeParameters$annotations", "getTypeParameters", "visibility", "Lkotlin/reflect/KVisibility;", "getVisibility$annotations", "getVisibility", "()Lkotlin/reflect/KVisibility;", "equals", "other", "error", "", "hashCode", "", "isInstance", "value", "toString", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ClassReference implements kotlin.reflect.KClass<java.lang.Object>, kotlin.jvm.internal.ClassBasedDeclarationContainer {
    public static final kotlin.jvm.internal.ClassReference.Companion Companion = null;
    private static final java.util.Map<java.lang.Class<? extends kotlin.Function<?>>, java.lang.Integer> FUNCTION_CLASSES = null;
    private static final java.util.HashMap<java.lang.String, java.lang.String> classFqNames = null;
    private static final java.util.HashMap<java.lang.String, java.lang.String> primitiveFqNames = null;
    private static final java.util.HashMap<java.lang.String, java.lang.String> primitiveWrapperFqNames = null;
    private static final java.util.Map<java.lang.String, java.lang.String> simpleNames = null;
    private final java.lang.Class<?> jClass;

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0014\u0010\u000f\u001a\u0004\u0018\u00010\n2\n\u0010\u0010\u001a\u0006\u0012\u0002\b\u00030\u0005J\u0014\u0010\u0011\u001a\u0004\u0018\u00010\n2\n\u0010\u0010\u001a\u0006\u0012\u0002\b\u00030\u0005J\u001c\u0010\u0012\u001a\u00020\u00132\b\u0010\u0014\u001a\u0004\u0018\u00010\u00012\n\u0010\u0010\u001a\u0006\u0012\u0002\b\u00030\u0005R&\u0010\u0003\u001a\u001a\u0012\u0010\u0012\u000e\u0012\n\b\u0001\u0012\u0006\u0012\u0002\b\u00030\u00060\u0005\u0012\u0004\u0012\u00020\u00070\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\b\u001a\u001e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n0\tj\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n`\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\f\u001a\u001e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n0\tj\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n`\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R*\u0010\r\u001a\u001e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n0\tj\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n`\u000bX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u000e\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n0\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0015"}, d2 = {"Lkotlin/jvm/internal/ClassReference$Companion;", "", "()V", "FUNCTION_CLASSES", "", "Ljava/lang/Class;", "Lkotlin/Function;", "", "classFqNames", "Ljava/util/HashMap;", "", "Lkotlin/collections/HashMap;", "primitiveFqNames", "primitiveWrapperFqNames", "simpleNames", "getClassQualifiedName", "jClass", "getClassSimpleName", "isInstance", "", "value", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final java.lang.String getClassQualifiedName(java.lang.Class<?> r3) {
                r2 = this;
                java.lang.String r0 = "jClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                boolean r0 = r3.isAnonymousClass()
                r1 = 0
                if (r0 == 0) goto Ld
                goto L60
            Ld:
                boolean r0 = r3.isLocalClass()
                if (r0 == 0) goto L14
                goto L60
            L14:
                boolean r0 = r3.isArray()
                if (r0 == 0) goto L4b
                java.lang.Class r3 = r3.getComponentType()
                boolean r0 = r3.isPrimitive()
                if (r0 == 0) goto L46
                java.util.HashMap r0 = kotlin.jvm.internal.ClassReference.access$getClassFqNames$cp()
                java.lang.String r3 = r3.getName()
                java.lang.Object r3 = r0.get(r3)
                java.lang.String r3 = (java.lang.String) r3
                if (r3 == 0) goto L46
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r3)
                java.lang.String r3 = "Array"
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r1 = r3
            L46:
                if (r1 != 0) goto L60
                java.lang.String r1 = "kotlin.Array"
                goto L60
            L4b:
                java.util.HashMap r0 = kotlin.jvm.internal.ClassReference.access$getClassFqNames$cp()
                java.lang.String r1 = r3.getName()
                java.lang.Object r0 = r0.get(r1)
                r1 = r0
                java.lang.String r1 = (java.lang.String) r1
                if (r1 != 0) goto L60
                java.lang.String r1 = r3.getCanonicalName()
            L60:
                return r1
        }

        public final java.lang.String getClassSimpleName(java.lang.Class<?> r8) {
                r7 = this;
                java.lang.String r0 = "jClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                boolean r0 = r8.isAnonymousClass()
                java.lang.String r1 = "Array"
                r2 = 0
                if (r0 == 0) goto L11
            Le:
                r1 = r2
                goto Lb2
            L11:
                boolean r0 = r8.isLocalClass()
                if (r0 == 0) goto L6b
                java.lang.String r0 = r8.getSimpleName()
                java.lang.reflect.Method r1 = r8.getEnclosingMethod()
                r3 = 2
                r4 = 36
                java.lang.String r5 = "name"
                if (r1 == 0) goto L42
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r5)
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                r6.<init>()
                java.lang.String r1 = r1.getName()
                r6.append(r1)
                r6.append(r4)
                java.lang.String r1 = r6.toString()
                java.lang.String r1 = kotlin.text.StringsKt.substringAfter$default(r0, r1, r2, r3, r2)
                if (r1 != 0) goto Lb2
            L42:
                java.lang.reflect.Constructor r8 = r8.getEnclosingConstructor()
                if (r8 == 0) goto L63
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r5)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r8 = r8.getName()
                r1.append(r8)
                r1.append(r4)
                java.lang.String r8 = r1.toString()
                java.lang.String r1 = kotlin.text.StringsKt.substringAfter$default(r0, r8, r2, r3, r2)
                goto Lb2
            L63:
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r5)
                java.lang.String r1 = kotlin.text.StringsKt.substringAfter$default(r0, r4, r2, r3, r2)
                goto Lb2
            L6b:
                boolean r0 = r8.isArray()
                if (r0 == 0) goto L9d
                java.lang.Class r8 = r8.getComponentType()
                boolean r0 = r8.isPrimitive()
                if (r0 == 0) goto L9a
                java.util.Map r0 = kotlin.jvm.internal.ClassReference.access$getSimpleNames$cp()
                java.lang.String r8 = r8.getName()
                java.lang.Object r8 = r0.get(r8)
                java.lang.String r8 = (java.lang.String) r8
                if (r8 == 0) goto L9a
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r8)
                r0.append(r1)
                java.lang.String r2 = r0.toString()
            L9a:
                if (r2 != 0) goto Le
                goto Lb2
            L9d:
                java.util.Map r0 = kotlin.jvm.internal.ClassReference.access$getSimpleNames$cp()
                java.lang.String r1 = r8.getName()
                java.lang.Object r0 = r0.get(r1)
                r1 = r0
                java.lang.String r1 = (java.lang.String) r1
                if (r1 != 0) goto Lb2
                java.lang.String r1 = r8.getSimpleName()
            Lb2:
                return r1
        }

        public final boolean isInstance(java.lang.Object r2, java.lang.Class<?> r3) {
                r1 = this;
                java.lang.String r0 = "jClass"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.util.Map r0 = kotlin.jvm.internal.ClassReference.access$getFUNCTION_CLASSES$cp()
                java.lang.Object r0 = r0.get(r3)
                java.lang.Integer r0 = (java.lang.Integer) r0
                if (r0 == 0) goto L1c
                java.lang.Number r0 = (java.lang.Number) r0
                int r3 = r0.intValue()
                boolean r2 = kotlin.jvm.internal.TypeIntrinsics.isFunctionOfArity(r2, r3)
                return r2
            L1c:
                boolean r0 = r3.isPrimitive()
                if (r0 == 0) goto L2a
                kotlin.reflect.KClass r3 = kotlin.jvm.JvmClassMappingKt.getKotlinClass(r3)
                java.lang.Class r3 = kotlin.jvm.JvmClassMappingKt.getJavaObjectType(r3)
            L2a:
                boolean r2 = r3.isInstance(r2)
                return r2
        }
    }

    static {
            kotlin.jvm.internal.ClassReference$Companion r0 = new kotlin.jvm.internal.ClassReference$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.jvm.internal.ClassReference.Companion = r0
            r0 = 23
            java.lang.Class[] r0 = new java.lang.Class[r0]
            java.lang.Class<kotlin.jvm.functions.Function0> r2 = kotlin.jvm.functions.Function0.class
            r3 = 0
            r0[r3] = r2
            java.lang.Class<kotlin.jvm.functions.Function1> r2 = kotlin.jvm.functions.Function1.class
            r4 = 1
            r0[r4] = r2
            java.lang.Class<kotlin.jvm.functions.Function2> r2 = kotlin.jvm.functions.Function2.class
            r4 = 2
            r0[r4] = r2
            r2 = 3
            java.lang.Class<kotlin.jvm.functions.Function3> r5 = kotlin.jvm.functions.Function3.class
            r0[r2] = r5
            r2 = 4
            java.lang.Class<kotlin.jvm.functions.Function4> r5 = kotlin.jvm.functions.Function4.class
            r0[r2] = r5
            r2 = 5
            java.lang.Class<kotlin.jvm.functions.Function5> r5 = kotlin.jvm.functions.Function5.class
            r0[r2] = r5
            r2 = 6
            java.lang.Class<kotlin.jvm.functions.Function6> r5 = kotlin.jvm.functions.Function6.class
            r0[r2] = r5
            r2 = 7
            java.lang.Class<kotlin.jvm.functions.Function7> r5 = kotlin.jvm.functions.Function7.class
            r0[r2] = r5
            r2 = 8
            java.lang.Class<kotlin.jvm.functions.Function8> r5 = kotlin.jvm.functions.Function8.class
            r0[r2] = r5
            r2 = 9
            java.lang.Class<kotlin.jvm.functions.Function9> r5 = kotlin.jvm.functions.Function9.class
            r0[r2] = r5
            java.lang.Class<kotlin.jvm.functions.Function10> r2 = kotlin.jvm.functions.Function10.class
            r5 = 10
            r0[r5] = r2
            r2 = 11
            java.lang.Class<kotlin.jvm.functions.Function11> r6 = kotlin.jvm.functions.Function11.class
            r0[r2] = r6
            r2 = 12
            java.lang.Class<kotlin.jvm.functions.Function12> r6 = kotlin.jvm.functions.Function12.class
            r0[r2] = r6
            r2 = 13
            java.lang.Class<kotlin.jvm.functions.Function13> r6 = kotlin.jvm.functions.Function13.class
            r0[r2] = r6
            r2 = 14
            java.lang.Class<kotlin.jvm.functions.Function14> r6 = kotlin.jvm.functions.Function14.class
            r0[r2] = r6
            r2 = 15
            java.lang.Class<kotlin.jvm.functions.Function15> r6 = kotlin.jvm.functions.Function15.class
            r0[r2] = r6
            r2 = 16
            java.lang.Class<kotlin.jvm.functions.Function16> r6 = kotlin.jvm.functions.Function16.class
            r0[r2] = r6
            r2 = 17
            java.lang.Class<kotlin.jvm.functions.Function17> r6 = kotlin.jvm.functions.Function17.class
            r0[r2] = r6
            r2 = 18
            java.lang.Class<kotlin.jvm.functions.Function18> r6 = kotlin.jvm.functions.Function18.class
            r0[r2] = r6
            r2 = 19
            java.lang.Class<kotlin.jvm.functions.Function19> r6 = kotlin.jvm.functions.Function19.class
            r0[r2] = r6
            r2 = 20
            java.lang.Class<kotlin.jvm.functions.Function20> r6 = kotlin.jvm.functions.Function20.class
            r0[r2] = r6
            r2 = 21
            java.lang.Class<kotlin.jvm.functions.Function21> r6 = kotlin.jvm.functions.Function21.class
            r0[r2] = r6
            r2 = 22
            java.lang.Class<kotlin.jvm.functions.Function22> r6 = kotlin.jvm.functions.Function22.class
            r0[r2] = r6
            java.util.List r0 = kotlin.collections.CollectionsKt.listOf(r0)
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.ArrayList r2 = new java.util.ArrayList
            int r5 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r0, r5)
            r2.<init>(r5)
            java.util.Collection r2 = (java.util.Collection) r2
            java.util.Iterator r0 = r0.iterator()
        La3:
            boolean r5 = r0.hasNext()
            if (r5 == 0) goto Lc3
            java.lang.Object r5 = r0.next()
            int r6 = r3 + 1
            if (r3 >= 0) goto Lb4
            kotlin.collections.CollectionsKt.throwIndexOverflow()
        Lb4:
            java.lang.Class r5 = (java.lang.Class) r5
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            kotlin.Pair r3 = kotlin.TuplesKt.to(r5, r3)
            r2.add(r3)
            r3 = r6
            goto La3
        Lc3:
            java.util.List r2 = (java.util.List) r2
            java.lang.Iterable r2 = (java.lang.Iterable) r2
            java.util.Map r0 = kotlin.collections.MapsKt.toMap(r2)
            kotlin.jvm.internal.ClassReference.FUNCTION_CLASSES = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r2 = "kotlin.Boolean"
            java.lang.String r3 = "boolean"
            r0.put(r3, r2)
            java.lang.String r3 = "kotlin.Char"
            java.lang.String r5 = "char"
            r0.put(r5, r3)
            java.lang.String r5 = "kotlin.Byte"
            java.lang.String r6 = "byte"
            r0.put(r6, r5)
            java.lang.String r6 = "kotlin.Short"
            java.lang.String r7 = "short"
            r0.put(r7, r6)
            java.lang.String r7 = "kotlin.Int"
            java.lang.String r8 = "int"
            r0.put(r8, r7)
            java.lang.String r8 = "kotlin.Float"
            java.lang.String r9 = "float"
            r0.put(r9, r8)
            java.lang.String r9 = "kotlin.Long"
            java.lang.String r10 = "long"
            r0.put(r10, r9)
            java.lang.String r10 = "kotlin.Double"
            java.lang.String r11 = "double"
            r0.put(r11, r10)
            kotlin.jvm.internal.ClassReference.primitiveFqNames = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r11 = "java.lang.Boolean"
            r0.put(r11, r2)
            java.lang.String r2 = "java.lang.Character"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Byte"
            r0.put(r2, r5)
            java.lang.String r2 = "java.lang.Short"
            r0.put(r2, r6)
            java.lang.String r2 = "java.lang.Integer"
            r0.put(r2, r7)
            java.lang.String r2 = "java.lang.Float"
            r0.put(r2, r8)
            java.lang.String r2 = "java.lang.Long"
            r0.put(r2, r9)
            java.lang.String r2 = "java.lang.Double"
            r0.put(r2, r10)
            kotlin.jvm.internal.ClassReference.primitiveWrapperFqNames = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r2 = "java.lang.Object"
            java.lang.String r3 = "kotlin.Any"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.String"
            java.lang.String r3 = "kotlin.String"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.CharSequence"
            java.lang.String r3 = "kotlin.CharSequence"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Throwable"
            java.lang.String r3 = "kotlin.Throwable"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Cloneable"
            java.lang.String r3 = "kotlin.Cloneable"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Number"
            java.lang.String r3 = "kotlin.Number"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Comparable"
            java.lang.String r3 = "kotlin.Comparable"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Enum"
            java.lang.String r3 = "kotlin.Enum"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.annotation.Annotation"
            java.lang.String r3 = "kotlin.Annotation"
            r0.put(r2, r3)
            java.lang.String r2 = "java.lang.Iterable"
            java.lang.String r3 = "kotlin.collections.Iterable"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.Iterator"
            java.lang.String r3 = "kotlin.collections.Iterator"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.Collection"
            java.lang.String r3 = "kotlin.collections.Collection"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.List"
            java.lang.String r3 = "kotlin.collections.List"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.Set"
            java.lang.String r3 = "kotlin.collections.Set"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.ListIterator"
            java.lang.String r3 = "kotlin.collections.ListIterator"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.Map"
            java.lang.String r3 = "kotlin.collections.Map"
            r0.put(r2, r3)
            java.lang.String r2 = "java.util.Map$Entry"
            java.lang.String r3 = "kotlin.collections.Map.Entry"
            r0.put(r2, r3)
            java.lang.String r2 = "kotlin.jvm.internal.StringCompanionObject"
            java.lang.String r3 = "kotlin.String.Companion"
            r0.put(r2, r3)
            java.lang.String r2 = "kotlin.jvm.internal.EnumCompanionObject"
            java.lang.String r3 = "kotlin.Enum.Companion"
            r0.put(r2, r3)
            java.util.HashMap<java.lang.String, java.lang.String> r2 = kotlin.jvm.internal.ClassReference.primitiveFqNames
            java.util.Map r2 = (java.util.Map) r2
            r0.putAll(r2)
            java.util.HashMap<java.lang.String, java.lang.String> r2 = kotlin.jvm.internal.ClassReference.primitiveWrapperFqNames
            java.util.Map r2 = (java.util.Map) r2
            r0.putAll(r2)
            java.util.HashMap<java.lang.String, java.lang.String> r2 = kotlin.jvm.internal.ClassReference.primitiveFqNames
            java.util.Collection r2 = r2.values()
            java.lang.String r3 = "primitiveFqNames.values"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.lang.Iterable r2 = (java.lang.Iterable) r2
            java.util.Iterator r2 = r2.iterator()
        L1e4:
            boolean r3 = r2.hasNext()
            r5 = 46
            if (r3 == 0) goto L235
            java.lang.Object r3 = r2.next()
            r6 = r0
            java.util.Map r6 = (java.util.Map) r6
            java.lang.String r3 = (java.lang.String) r3
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "kotlin.jvm.internal."
            r7.append(r8)
            java.lang.String r8 = "kotlinName"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r8)
            java.lang.String r5 = kotlin.text.StringsKt.substringAfterLast$default(r3, r5, r1, r4, r1)
            r7.append(r5)
            java.lang.String r5 = "CompanionObject"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r3)
            java.lang.String r3 = ".Companion"
            r7.append(r3)
            java.lang.String r3 = r7.toString()
            kotlin.Pair r3 = kotlin.TuplesKt.to(r5, r3)
            java.lang.Object r5 = r3.getFirst()
            java.lang.Object r3 = r3.getSecond()
            r6.put(r5, r3)
            goto L1e4
        L235:
            r2 = r0
            java.util.Map r2 = (java.util.Map) r2
            java.util.Map<java.lang.Class<? extends kotlin.Function<?>>, java.lang.Integer> r2 = kotlin.jvm.internal.ClassReference.FUNCTION_CLASSES
            java.util.Set r2 = r2.entrySet()
            java.util.Iterator r2 = r2.iterator()
        L242:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L277
            java.lang.Object r3 = r2.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r6 = r3.getKey()
            java.lang.Class r6 = (java.lang.Class) r6
            java.lang.Object r3 = r3.getValue()
            java.lang.Number r3 = (java.lang.Number) r3
            int r3 = r3.intValue()
            java.lang.String r6 = r6.getName()
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "kotlin.Function"
            r7.append(r8)
            r7.append(r3)
            java.lang.String r3 = r7.toString()
            r0.put(r6, r3)
            goto L242
        L277:
            kotlin.jvm.internal.ClassReference.classFqNames = r0
            java.util.Map r0 = (java.util.Map) r0
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            int r3 = r0.size()
            int r3 = kotlin.collections.MapsKt.mapCapacity(r3)
            r2.<init>(r3)
            java.util.Map r2 = (java.util.Map) r2
            java.util.Set r0 = r0.entrySet()
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.Iterator r0 = r0.iterator()
        L294:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L2b2
            java.lang.Object r3 = r0.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r6 = r3.getKey()
            java.lang.Object r3 = r3.getValue()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = kotlin.text.StringsKt.substringAfterLast$default(r3, r5, r1, r4, r1)
            r2.put(r6, r3)
            goto L294
        L2b2:
            kotlin.jvm.internal.ClassReference.simpleNames = r2
            return
    }

    public ClassReference(java.lang.Class<?> r2) {
            r1 = this;
            java.lang.String r0 = "jClass"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.jClass = r2
            return
    }

    public static final java.util.HashMap access$getClassFqNames$cp() {
            java.util.HashMap<java.lang.String, java.lang.String> r0 = kotlin.jvm.internal.ClassReference.classFqNames
            return r0
    }

    public static final java.util.Map access$getFUNCTION_CLASSES$cp() {
            java.util.Map<java.lang.Class<? extends kotlin.Function<?>>, java.lang.Integer> r0 = kotlin.jvm.internal.ClassReference.FUNCTION_CLASSES
            return r0
    }

    public static final java.util.Map access$getSimpleNames$cp() {
            java.util.Map<java.lang.String, java.lang.String> r0 = kotlin.jvm.internal.ClassReference.simpleNames
            return r0
    }

    private final java.lang.Void error() {
            r1 = this;
            kotlin.jvm.KotlinReflectionNotSupportedError r0 = new kotlin.jvm.KotlinReflectionNotSupportedError
            r0.<init>()
            throw r0
    }

    public static void getSealedSubclasses$annotations() {
            return
    }

    public static void getSupertypes$annotations() {
            return
    }

    public static void getTypeParameters$annotations() {
            return
    }

    public static void getVisibility$annotations() {
            return
    }

    public static void isAbstract$annotations() {
            return
    }

    public static void isCompanion$annotations() {
            return
    }

    public static void isData$annotations() {
            return
    }

    public static void isFinal$annotations() {
            return
    }

    public static void isFun$annotations() {
            return
    }

    public static void isInner$annotations() {
            return
    }

    public static void isOpen$annotations() {
            return
    }

    public static void isSealed$annotations() {
            return
    }

    public static void isValue$annotations() {
            return
    }

    @Override
    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof kotlin.jvm.internal.ClassReference
            if (r0 == 0) goto L19
            r0 = r1
            kotlin.reflect.KClass r0 = (kotlin.reflect.KClass) r0
            java.lang.Class r0 = kotlin.jvm.JvmClassMappingKt.getJavaObjectType(r0)
            kotlin.reflect.KClass r2 = (kotlin.reflect.KClass) r2
            java.lang.Class r2 = kotlin.jvm.JvmClassMappingKt.getJavaObjectType(r2)
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
            if (r2 == 0) goto L19
            r2 = 1
            goto L1a
        L19:
            r2 = 0
        L1a:
            return r2
    }

    @Override
    public java.util.List<java.lang.annotation.Annotation> getAnnotations() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.util.Collection<kotlin.reflect.KFunction<java.lang.Object>> getConstructors() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.Class<?> getJClass() {
            r1 = this;
            java.lang.Class<?> r0 = r1.jClass
            return r0
    }

    @Override
    public java.util.Collection<kotlin.reflect.KCallable<?>> getMembers() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.util.Collection<kotlin.reflect.KClass<?>> getNestedClasses() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.Object getObjectInstance() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String getQualifiedName() {
            r2 = this;
            kotlin.jvm.internal.ClassReference$Companion r0 = kotlin.jvm.internal.ClassReference.Companion
            java.lang.Class r1 = r2.getJClass()
            java.lang.String r0 = r0.getClassQualifiedName(r1)
            return r0
    }

    @Override
    public java.util.List<kotlin.reflect.KClass<? extends java.lang.Object>> getSealedSubclasses() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.lang.String getSimpleName() {
            r2 = this;
            kotlin.jvm.internal.ClassReference$Companion r0 = kotlin.jvm.internal.ClassReference.Companion
            java.lang.Class r1 = r2.getJClass()
            java.lang.String r0 = r0.getClassSimpleName(r1)
            return r0
    }

    @Override
    public java.util.List<kotlin.reflect.KType> getSupertypes() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public java.util.List<kotlin.reflect.KTypeParameter> getTypeParameters() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public kotlin.reflect.KVisibility getVisibility() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            r0 = r1
            kotlin.reflect.KClass r0 = (kotlin.reflect.KClass) r0
            java.lang.Class r0 = kotlin.jvm.JvmClassMappingKt.getJavaObjectType(r0)
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean isAbstract() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isCompanion() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isData() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isFinal() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isFun() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isInner() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isInstance(java.lang.Object r3) {
            r2 = this;
            kotlin.jvm.internal.ClassReference$Companion r0 = kotlin.jvm.internal.ClassReference.Companion
            java.lang.Class r1 = r2.getJClass()
            boolean r3 = r0.isInstance(r3, r1)
            return r3
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isSealed() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    @Override
    public boolean isValue() {
            r1 = this;
            r1.error()
            kotlin.KotlinNothingValueException r0 = new kotlin.KotlinNothingValueException
            r0.<init>()
            throw r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getJClass()
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = " (Kotlin reflection is not available)"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
