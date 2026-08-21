package com.google.gson.internal;

public final class ConstructorConstructor {
    private final com.google.gson.internal.reflect.ReflectionAccessor accessor;
    private final java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> instanceCreators;















    public ConstructorConstructor(java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r2) {
            r1 = this;
            r1.<init>()
            com.google.gson.internal.reflect.ReflectionAccessor r0 = com.google.gson.internal.reflect.ReflectionAccessor.getInstance()
            r1.accessor = r0
            r1.instanceCreators = r2
            return
    }

    private <T> com.google.gson.internal.ObjectConstructor<T> newDefaultConstructor(java.lang.Class<? super T> r3) {
            r2 = this;
            r0 = 0
            java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L18
            java.lang.reflect.Constructor r0 = r3.getDeclaredConstructor(r0)     // Catch: java.lang.NoSuchMethodException -> L18
            boolean r1 = r0.isAccessible()     // Catch: java.lang.NoSuchMethodException -> L18
            if (r1 != 0) goto L12
            com.google.gson.internal.reflect.ReflectionAccessor r1 = r2.accessor     // Catch: java.lang.NoSuchMethodException -> L18
            r1.makeAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L18
        L12:
            com.google.gson.internal.ConstructorConstructor$3 r1 = new com.google.gson.internal.ConstructorConstructor$3     // Catch: java.lang.NoSuchMethodException -> L18
            r1.<init>(r2, r0)     // Catch: java.lang.NoSuchMethodException -> L18
            return r1
        L18:
            r0 = move-exception
            r1 = 0
            return r1
    }

    private <T> com.google.gson.internal.ObjectConstructor<T> newDefaultImplementationConstructor(java.lang.reflect.Type r4, java.lang.Class<? super T> r5) {
            r3 = this;
            java.lang.Class<java.util.Collection> r0 = java.util.Collection.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L46
            java.lang.Class<java.util.SortedSet> r0 = java.util.SortedSet.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L16
            com.google.gson.internal.ConstructorConstructor$4 r0 = new com.google.gson.internal.ConstructorConstructor$4
            r0.<init>(r3)
            return r0
        L16:
            java.lang.Class<java.util.EnumSet> r0 = java.util.EnumSet.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L24
            com.google.gson.internal.ConstructorConstructor$5 r0 = new com.google.gson.internal.ConstructorConstructor$5
            r0.<init>(r3, r4)
            return r0
        L24:
            java.lang.Class<java.util.Set> r0 = java.util.Set.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L32
            com.google.gson.internal.ConstructorConstructor$6 r0 = new com.google.gson.internal.ConstructorConstructor$6
            r0.<init>(r3)
            return r0
        L32:
            java.lang.Class<java.util.Queue> r0 = java.util.Queue.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L40
            com.google.gson.internal.ConstructorConstructor$7 r0 = new com.google.gson.internal.ConstructorConstructor$7
            r0.<init>(r3)
            return r0
        L40:
            com.google.gson.internal.ConstructorConstructor$8 r0 = new com.google.gson.internal.ConstructorConstructor$8
            r0.<init>(r3)
            return r0
        L46:
            java.lang.Class<java.util.Map> r0 = java.util.Map.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto La2
            java.lang.Class<java.util.concurrent.ConcurrentNavigableMap> r0 = java.util.concurrent.ConcurrentNavigableMap.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L5c
            com.google.gson.internal.ConstructorConstructor$9 r0 = new com.google.gson.internal.ConstructorConstructor$9
            r0.<init>(r3)
            return r0
        L5c:
            java.lang.Class<java.util.concurrent.ConcurrentMap> r0 = java.util.concurrent.ConcurrentMap.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L6a
            com.google.gson.internal.ConstructorConstructor$10 r0 = new com.google.gson.internal.ConstructorConstructor$10
            r0.<init>(r3)
            return r0
        L6a:
            java.lang.Class<java.util.SortedMap> r0 = java.util.SortedMap.class
            boolean r0 = r0.isAssignableFrom(r5)
            if (r0 == 0) goto L78
            com.google.gson.internal.ConstructorConstructor$11 r0 = new com.google.gson.internal.ConstructorConstructor$11
            r0.<init>(r3)
            return r0
        L78:
            boolean r0 = r4 instanceof java.lang.reflect.ParameterizedType
            if (r0 == 0) goto L9c
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            r1 = r4
            java.lang.reflect.ParameterizedType r1 = (java.lang.reflect.ParameterizedType) r1
            java.lang.reflect.Type[] r1 = r1.getActualTypeArguments()
            r2 = 0
            r1 = r1[r2]
            com.google.gson.reflect.TypeToken r1 = com.google.gson.reflect.TypeToken.get(r1)
            java.lang.Class r1 = r1.getRawType()
            boolean r0 = r0.isAssignableFrom(r1)
            if (r0 != 0) goto L9c
            com.google.gson.internal.ConstructorConstructor$12 r0 = new com.google.gson.internal.ConstructorConstructor$12
            r0.<init>(r3)
            return r0
        L9c:
            com.google.gson.internal.ConstructorConstructor$13 r0 = new com.google.gson.internal.ConstructorConstructor$13
            r0.<init>(r3)
            return r0
        La2:
            r0 = 0
            return r0
    }

    private <T> com.google.gson.internal.ObjectConstructor<T> newUnsafeAllocator(java.lang.reflect.Type r2, java.lang.Class<? super T> r3) {
            r1 = this;
            com.google.gson.internal.ConstructorConstructor$14 r0 = new com.google.gson.internal.ConstructorConstructor$14
            r0.<init>(r1, r3, r2)
            return r0
    }

    public <T> com.google.gson.internal.ObjectConstructor<T> get(com.google.gson.reflect.TypeToken<T> r8) {
            r7 = this;
            java.lang.reflect.Type r0 = r8.getType()
            java.lang.Class r1 = r8.getRawType()
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r2 = r7.instanceCreators
            java.lang.Object r2 = r2.get(r0)
            com.google.gson.InstanceCreator r2 = (com.google.gson.InstanceCreator) r2
            if (r2 == 0) goto L18
            com.google.gson.internal.ConstructorConstructor$1 r3 = new com.google.gson.internal.ConstructorConstructor$1
            r3.<init>(r7, r2, r0)
            return r3
        L18:
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r3 = r7.instanceCreators
            java.lang.Object r3 = r3.get(r1)
            com.google.gson.InstanceCreator r3 = (com.google.gson.InstanceCreator) r3
            if (r3 == 0) goto L28
            com.google.gson.internal.ConstructorConstructor$2 r4 = new com.google.gson.internal.ConstructorConstructor$2
            r4.<init>(r7, r3, r0)
            return r4
        L28:
            com.google.gson.internal.ObjectConstructor r4 = r7.newDefaultConstructor(r1)
            if (r4 == 0) goto L2f
            return r4
        L2f:
            com.google.gson.internal.ObjectConstructor r5 = r7.newDefaultImplementationConstructor(r0, r1)
            if (r5 == 0) goto L36
            return r5
        L36:
            com.google.gson.internal.ObjectConstructor r6 = r7.newUnsafeAllocator(r0, r1)
            return r6
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.Map<java.lang.reflect.Type, com.google.gson.InstanceCreator<?>> r0 = r1.instanceCreators
            java.lang.String r0 = r0.toString()
            return r0
    }
}
