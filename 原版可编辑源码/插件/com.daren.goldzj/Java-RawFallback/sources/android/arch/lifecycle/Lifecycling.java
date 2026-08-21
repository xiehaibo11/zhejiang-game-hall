package android.arch.lifecycle;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class Lifecycling {
    private static final int GENERATED_CALLBACK = 2;
    private static final int REFLECTIVE_CALLBACK = 1;
    private static java.util.Map<java.lang.Class, java.lang.Integer> sCallbackCache;
    private static java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> sClassToAdapters;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.arch.lifecycle.Lifecycling.sCallbackCache = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.arch.lifecycle.Lifecycling.sClassToAdapters = r0
            return
    }

    public Lifecycling() {
            r0 = this;
            r0.<init>()
            return
    }

    private static android.arch.lifecycle.GeneratedAdapter createGeneratedAdapter(java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter> r2, java.lang.Object r3) {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.InstantiationException -> L14 java.lang.IllegalAccessException -> L1b
            r1 = 0
            r0[r1] = r3     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.InstantiationException -> L14 java.lang.IllegalAccessException -> L1b
            java.lang.Object r2 = r2.newInstance(r0)     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.InstantiationException -> L14 java.lang.IllegalAccessException -> L1b
            android.arch.lifecycle.GeneratedAdapter r2 = (android.arch.lifecycle.GeneratedAdapter) r2     // Catch: java.lang.reflect.InvocationTargetException -> Ld java.lang.InstantiationException -> L14 java.lang.IllegalAccessException -> L1b
            return r2
        Ld:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r2)
            throw r3
        L14:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r2)
            throw r3
        L1b:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            r3.<init>(r2)
            throw r3
    }

    @android.support.annotation.Nullable
    private static java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter> generatedConstructor(java.lang.Class<?> r4) {
            java.lang.Package r0 = r4.getPackage()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            java.lang.String r1 = r4.getCanonicalName()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getName()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            goto L11
        Lf:
            java.lang.String r0 = ""
        L11:
            boolean r2 = r0.isEmpty()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            r3 = 1
            if (r2 == 0) goto L19
            goto L22
        L19:
            int r2 = r0.length()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            int r2 = r2 + r3
            java.lang.String r1 = r1.substring(r2)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
        L22:
            java.lang.String r1 = getAdapterName(r1)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            boolean r2 = r0.isEmpty()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            if (r2 == 0) goto L2d
            goto L41
        L2d:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            r2.<init>()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            r2.append(r0)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            java.lang.String r0 = "."
            r2.append(r0)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            r2.append(r1)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            java.lang.String r1 = r2.toString()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
        L41:
            java.lang.Class r0 = java.lang.Class.forName(r1)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            java.lang.Class[] r1 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            java.lang.reflect.Constructor r4 = r0.getDeclaredConstructor(r1)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            boolean r0 = r4.isAccessible()     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
            if (r0 != 0) goto L57
            r4.setAccessible(r3)     // Catch: java.lang.NoSuchMethodException -> L58 java.lang.ClassNotFoundException -> L5f
        L57:
            return r4
        L58:
            r4 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r4)
            throw r0
        L5f:
            r4 = 0
            return r4
    }

    public static java.lang.String getAdapterName(java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "."
            java.lang.String r2 = "_"
            java.lang.String r3 = r3.replace(r1, r2)
            r0.append(r3)
            java.lang.String r3 = "_LifecycleAdapter"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    @android.support.annotation.NonNull
    static android.arch.lifecycle.GenericLifecycleObserver getCallback(java.lang.Object r4) {
            boolean r0 = r4 instanceof android.arch.lifecycle.FullLifecycleObserver
            if (r0 == 0) goto Lc
            android.arch.lifecycle.FullLifecycleObserverAdapter r0 = new android.arch.lifecycle.FullLifecycleObserverAdapter
            android.arch.lifecycle.FullLifecycleObserver r4 = (android.arch.lifecycle.FullLifecycleObserver) r4
            r0.<init>(r4)
            return r0
        Lc:
            boolean r0 = r4 instanceof android.arch.lifecycle.GenericLifecycleObserver
            if (r0 == 0) goto L13
            android.arch.lifecycle.GenericLifecycleObserver r4 = (android.arch.lifecycle.GenericLifecycleObserver) r4
            return r4
        L13:
            java.lang.Class r0 = r4.getClass()
            int r1 = getObserverConstructorType(r0)
            r2 = 2
            if (r1 != r2) goto L5f
            java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> r1 = android.arch.lifecycle.Lifecycling.sClassToAdapters
            java.lang.Object r0 = r1.get(r0)
            java.util.List r0 = (java.util.List) r0
            int r1 = r0.size()
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L3e
            java.lang.Object r0 = r0.get(r2)
            java.lang.reflect.Constructor r0 = (java.lang.reflect.Constructor) r0
            android.arch.lifecycle.GeneratedAdapter r4 = createGeneratedAdapter(r0, r4)
            android.arch.lifecycle.SingleGeneratedAdapterObserver r0 = new android.arch.lifecycle.SingleGeneratedAdapterObserver
            r0.<init>(r4)
            return r0
        L3e:
            int r1 = r0.size()
            android.arch.lifecycle.GeneratedAdapter[] r1 = new android.arch.lifecycle.GeneratedAdapter[r1]
        L44:
            int r3 = r0.size()
            if (r2 >= r3) goto L59
            java.lang.Object r3 = r0.get(r2)
            java.lang.reflect.Constructor r3 = (java.lang.reflect.Constructor) r3
            android.arch.lifecycle.GeneratedAdapter r3 = createGeneratedAdapter(r3, r4)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L44
        L59:
            android.arch.lifecycle.CompositeGeneratedAdaptersObserver r4 = new android.arch.lifecycle.CompositeGeneratedAdaptersObserver
            r4.<init>(r1)
            return r4
        L5f:
            android.arch.lifecycle.ReflectiveGenericLifecycleObserver r0 = new android.arch.lifecycle.ReflectiveGenericLifecycleObserver
            r0.<init>(r4)
            return r0
    }

    private static int getObserverConstructorType(java.lang.Class<?> r3) {
            java.util.Map<java.lang.Class, java.lang.Integer> r0 = android.arch.lifecycle.Lifecycling.sCallbackCache
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.Class, java.lang.Integer> r0 = android.arch.lifecycle.Lifecycling.sCallbackCache
            java.lang.Object r3 = r0.get(r3)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            return r3
        L15:
            int r0 = resolveObserverCallbackType(r3)
            java.util.Map<java.lang.Class, java.lang.Integer> r1 = android.arch.lifecycle.Lifecycling.sCallbackCache
            java.lang.Integer r2 = java.lang.Integer.valueOf(r0)
            r1.put(r3, r2)
            return r0
    }

    private static boolean isLifecycleParent(java.lang.Class<?> r1) {
            if (r1 == 0) goto Lc
            java.lang.Class<android.arch.lifecycle.LifecycleObserver> r0 = android.arch.lifecycle.LifecycleObserver.class
            boolean r1 = r0.isAssignableFrom(r1)
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    private static int resolveObserverCallbackType(java.lang.Class<?> r8) {
            java.lang.String r0 = r8.getCanonicalName()
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.reflect.Constructor r0 = generatedConstructor(r8)
            r2 = 2
            if (r0 == 0) goto L19
            java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> r1 = android.arch.lifecycle.Lifecycling.sClassToAdapters
            java.util.List r0 = java.util.Collections.singletonList(r0)
            r1.put(r8, r0)
            return r2
        L19:
            android.arch.lifecycle.ClassesInfoCache r0 = android.arch.lifecycle.ClassesInfoCache.sInstance
            boolean r0 = r0.hasLifecycleMethods(r8)
            if (r0 == 0) goto L22
            return r1
        L22:
            java.lang.Class r0 = r8.getSuperclass()
            r3 = 0
            boolean r4 = isLifecycleParent(r0)
            if (r4 == 0) goto L41
            int r3 = getObserverConstructorType(r0)
            if (r3 != r1) goto L34
            return r1
        L34:
            java.util.ArrayList r3 = new java.util.ArrayList
            java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> r4 = android.arch.lifecycle.Lifecycling.sClassToAdapters
            java.lang.Object r0 = r4.get(r0)
            java.util.Collection r0 = (java.util.Collection) r0
            r3.<init>(r0)
        L41:
            java.lang.Class[] r0 = r8.getInterfaces()
            int r4 = r0.length
            r5 = 0
        L47:
            if (r5 >= r4) goto L6e
            r6 = r0[r5]
            boolean r7 = isLifecycleParent(r6)
            if (r7 != 0) goto L52
            goto L6b
        L52:
            int r7 = getObserverConstructorType(r6)
            if (r7 != r1) goto L59
            return r1
        L59:
            if (r3 != 0) goto L60
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
        L60:
            java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> r7 = android.arch.lifecycle.Lifecycling.sClassToAdapters
            java.lang.Object r6 = r7.get(r6)
            java.util.Collection r6 = (java.util.Collection) r6
            r3.addAll(r6)
        L6b:
            int r5 = r5 + 1
            goto L47
        L6e:
            if (r3 == 0) goto L76
            java.util.Map<java.lang.Class, java.util.List<java.lang.reflect.Constructor<? extends android.arch.lifecycle.GeneratedAdapter>>> r0 = android.arch.lifecycle.Lifecycling.sClassToAdapters
            r0.put(r8, r3)
            return r2
        L76:
            return r1
    }
}
