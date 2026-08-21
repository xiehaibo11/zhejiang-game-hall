package com.google.gson.internal.reflect;

public class ReflectionHelper {
    private static final com.google.gson.internal.reflect.ReflectionHelper.RecordHelper RECORD_HELPER = null;

    static class 1 {
    }

    private static abstract class RecordHelper {
        private RecordHelper() {
                r0 = this;
                r0.<init>()
                return
        }

        RecordHelper(com.google.gson.internal.reflect.ReflectionHelper.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract java.lang.reflect.Method getAccessor(java.lang.Class<?> r1, java.lang.reflect.Field r2);

        abstract <T> java.lang.reflect.Constructor<T> getCanonicalRecordConstructor(java.lang.Class<T> r1);

        abstract java.lang.String[] getRecordComponentNames(java.lang.Class<?> r1);

        abstract boolean isRecord(java.lang.Class<?> r1);
    }

    private static class RecordNotSupportedHelper extends com.google.gson.internal.reflect.ReflectionHelper.RecordHelper {
        private RecordNotSupportedHelper() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }

        RecordNotSupportedHelper(com.google.gson.internal.reflect.ReflectionHelper.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.reflect.Method getAccessor(java.lang.Class<?> r1, java.lang.reflect.Field r2) {
                r0 = this;
                java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
                java.lang.String r2 = "Records are not supported on this JVM, this method should not be called"
                r1.<init>(r2)
                throw r1
        }

        @Override
        <T> java.lang.reflect.Constructor<T> getCanonicalRecordConstructor(java.lang.Class<T> r2) {
                r1 = this;
                java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
                java.lang.String r0 = "Records are not supported on this JVM, this method should not be called"
                r2.<init>(r0)
                throw r2
        }

        @Override
        java.lang.String[] getRecordComponentNames(java.lang.Class<?> r2) {
                r1 = this;
                java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
                java.lang.String r0 = "Records are not supported on this JVM, this method should not be called"
                r2.<init>(r0)
                throw r2
        }

        @Override
        boolean isRecord(java.lang.Class<?> r1) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    private static class RecordSupportedHelper extends com.google.gson.internal.reflect.ReflectionHelper.RecordHelper {
        private final java.lang.reflect.Method getName;
        private final java.lang.reflect.Method getRecordComponents;
        private final java.lang.reflect.Method getType;
        private final java.lang.reflect.Method isRecord;

        private RecordSupportedHelper() throws java.lang.NoSuchMethodException {
                r4 = this;
                r0 = 0
                r4.<init>(r0)
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                r1 = 0
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.String r3 = "isRecord"
                java.lang.reflect.Method r0 = r0.getMethod(r3, r2)
                r4.isRecord = r0
                java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.String r3 = "getRecordComponents"
                java.lang.reflect.Method r0 = r0.getMethod(r3, r2)
                r4.getRecordComponents = r0
                java.lang.reflect.Method r0 = r4.getRecordComponents
                java.lang.Class r0 = r0.getReturnType()
                java.lang.Class r0 = r0.getComponentType()
                java.lang.Class[] r2 = new java.lang.Class[r1]
                java.lang.String r3 = "getName"
                java.lang.reflect.Method r2 = r0.getMethod(r3, r2)
                r4.getName = r2
                java.lang.Class[] r1 = new java.lang.Class[r1]
                java.lang.String r2 = "getType"
                java.lang.reflect.Method r0 = r0.getMethod(r2, r1)
                r4.getType = r0
                return
        }

        RecordSupportedHelper(com.google.gson.internal.reflect.ReflectionHelper.1 r1) throws java.lang.NoSuchMethodException {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public java.lang.reflect.Method getAccessor(java.lang.Class<?> r2, java.lang.reflect.Field r3) {
                r1 = this;
                java.lang.String r3 = r3.getName()     // Catch: java.lang.ReflectiveOperationException -> Lc
                r0 = 0
                java.lang.Class[] r0 = new java.lang.Class[r0]     // Catch: java.lang.ReflectiveOperationException -> Lc
                java.lang.reflect.Method r2 = r2.getMethod(r3, r0)     // Catch: java.lang.ReflectiveOperationException -> Lc
                return r2
            Lc:
                r2 = move-exception
                java.lang.RuntimeException r2 = com.google.gson.internal.reflect.ReflectionHelper.access$300(r2)
                throw r2
        }

        @Override
        public <T> java.lang.reflect.Constructor<T> getCanonicalRecordConstructor(java.lang.Class<T> r8) {
                r7 = this;
                java.lang.reflect.Method r0 = r7.getRecordComponents     // Catch: java.lang.ReflectiveOperationException -> L28
                r1 = 0
                java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Object r0 = r0.invoke(r8, r2)     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Object[] r0 = (java.lang.Object[]) r0     // Catch: java.lang.ReflectiveOperationException -> L28
                int r2 = r0.length     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.ReflectiveOperationException -> L28
                r3 = 0
            Lf:
                int r4 = r0.length     // Catch: java.lang.ReflectiveOperationException -> L28
                if (r3 >= r4) goto L23
                java.lang.reflect.Method r4 = r7.getType     // Catch: java.lang.ReflectiveOperationException -> L28
                r5 = r0[r3]     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Object[] r6 = new java.lang.Object[r1]     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Object r4 = r4.invoke(r5, r6)     // Catch: java.lang.ReflectiveOperationException -> L28
                java.lang.Class r4 = (java.lang.Class) r4     // Catch: java.lang.ReflectiveOperationException -> L28
                r2[r3] = r4     // Catch: java.lang.ReflectiveOperationException -> L28
                int r3 = r3 + 1
                goto Lf
            L23:
                java.lang.reflect.Constructor r8 = r8.getDeclaredConstructor(r2)     // Catch: java.lang.ReflectiveOperationException -> L28
                return r8
            L28:
                r8 = move-exception
                java.lang.RuntimeException r8 = com.google.gson.internal.reflect.ReflectionHelper.access$300(r8)
                throw r8
        }

        @Override
        java.lang.String[] getRecordComponentNames(java.lang.Class<?> r7) {
                r6 = this;
                java.lang.reflect.Method r0 = r6.getRecordComponents     // Catch: java.lang.ReflectiveOperationException -> L24
                r1 = 0
                java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.Object r7 = r0.invoke(r7, r2)     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.Object[] r7 = (java.lang.Object[]) r7     // Catch: java.lang.ReflectiveOperationException -> L24
                int r0 = r7.length     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.String[] r0 = new java.lang.String[r0]     // Catch: java.lang.ReflectiveOperationException -> L24
                r2 = 0
            Lf:
                int r3 = r7.length     // Catch: java.lang.ReflectiveOperationException -> L24
                if (r2 >= r3) goto L23
                java.lang.reflect.Method r3 = r6.getName     // Catch: java.lang.ReflectiveOperationException -> L24
                r4 = r7[r2]     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.Object[] r5 = new java.lang.Object[r1]     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.Object r3 = r3.invoke(r4, r5)     // Catch: java.lang.ReflectiveOperationException -> L24
                java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.ReflectiveOperationException -> L24
                r0[r2] = r3     // Catch: java.lang.ReflectiveOperationException -> L24
                int r2 = r2 + 1
                goto Lf
            L23:
                return r0
            L24:
                r7 = move-exception
                java.lang.RuntimeException r7 = com.google.gson.internal.reflect.ReflectionHelper.access$300(r7)
                throw r7
        }

        @Override
        boolean isRecord(java.lang.Class<?> r3) {
                r2 = this;
                java.lang.reflect.Method r0 = r2.isRecord     // Catch: java.lang.ReflectiveOperationException -> L10
                r1 = 0
                java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.ReflectiveOperationException -> L10
                java.lang.Object r3 = r0.invoke(r3, r1)     // Catch: java.lang.ReflectiveOperationException -> L10
                java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.ReflectiveOperationException -> L10
                boolean r3 = r3.booleanValue()     // Catch: java.lang.ReflectiveOperationException -> L10
                return r3
            L10:
                r3 = move-exception
                java.lang.RuntimeException r3 = com.google.gson.internal.reflect.ReflectionHelper.access$300(r3)
                throw r3
        }
    }

    static {
            r0 = 0
            com.google.gson.internal.reflect.ReflectionHelper$RecordSupportedHelper r1 = new com.google.gson.internal.reflect.ReflectionHelper$RecordSupportedHelper     // Catch: java.lang.NoSuchMethodException -> L7
            r1.<init>(r0)     // Catch: java.lang.NoSuchMethodException -> L7
            goto Lc
        L7:
            com.google.gson.internal.reflect.ReflectionHelper$RecordNotSupportedHelper r1 = new com.google.gson.internal.reflect.ReflectionHelper$RecordNotSupportedHelper
            r1.<init>(r0)
        Lc:
            com.google.gson.internal.reflect.ReflectionHelper.RECORD_HELPER = r1
            return
    }

    private ReflectionHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.RuntimeException access$300(java.lang.ReflectiveOperationException r0) {
            java.lang.RuntimeException r0 = createExceptionForRecordReflectionException(r0)
            return r0
    }

    private static void appendExecutableParameters(java.lang.reflect.AccessibleObject r2, java.lang.StringBuilder r3) {
            r0 = 40
            r3.append(r0)
            boolean r0 = r2 instanceof java.lang.reflect.Method
            if (r0 == 0) goto L10
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2
            java.lang.Class[] r2 = r2.getParameterTypes()
            goto L16
        L10:
            java.lang.reflect.Constructor r2 = (java.lang.reflect.Constructor) r2
            java.lang.Class[] r2 = r2.getParameterTypes()
        L16:
            r0 = 0
        L17:
            int r1 = r2.length
            if (r0 >= r1) goto L2d
            if (r0 <= 0) goto L21
            java.lang.String r1 = ", "
            r3.append(r1)
        L21:
            r1 = r2[r0]
            java.lang.String r1 = r1.getSimpleName()
            r3.append(r1)
            int r0 = r0 + 1
            goto L17
        L2d:
            r2 = 41
            r3.append(r2)
            return
    }

    public static java.lang.String constructorToString(java.lang.reflect.Constructor<?> r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.Class r1 = r2.getDeclaringClass()
            java.lang.String r1 = r1.getName()
            r0.<init>(r1)
            appendExecutableParameters(r2, r0)
            java.lang.String r2 = r0.toString()
            return r2
    }

    private static java.lang.RuntimeException createExceptionForRecordReflectionException(java.lang.ReflectiveOperationException r2) {
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Unexpected ReflectiveOperationException occurred (Gson 2.10.1). To support Java records, reflection is utilized to read out information about records. All these invocations happens after it is established that records exist in the JVM. This exception is unexpected behavior."
            r0.<init>(r1, r2)
            throw r0
    }

    public static java.lang.RuntimeException createExceptionForUnexpectedIllegalAccess(java.lang.IllegalAccessException r2) {
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Unexpected IllegalAccessException occurred (Gson 2.10.1). Certain ReflectionAccessFilter features require Java >= 9 to work correctly. If you are not using ReflectionAccessFilter, report this to the Gson maintainers."
            r0.<init>(r1, r2)
            throw r0
    }

    public static java.lang.String fieldToString(java.lang.reflect.Field r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getDeclaringClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String getAccessibleObjectDescription(java.lang.reflect.AccessibleObject r4, boolean r5) {
            boolean r0 = r4 instanceof java.lang.reflect.Field
            java.lang.String r1 = "'"
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "field '"
            r0.append(r2)
            java.lang.reflect.Field r4 = (java.lang.reflect.Field) r4
            java.lang.String r4 = fieldToString(r4)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            goto L90
        L21:
            boolean r0 = r4 instanceof java.lang.reflect.Method
            if (r0 == 0) goto L5c
            java.lang.reflect.Method r4 = (java.lang.reflect.Method) r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = r4.getName()
            r0.<init>(r2)
            appendExecutableParameters(r4, r0)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "method '"
            r2.append(r3)
            java.lang.Class r4 = r4.getDeclaringClass()
            java.lang.String r4 = r4.getName()
            r2.append(r4)
            java.lang.String r4 = "#"
            r2.append(r4)
            r2.append(r0)
            r2.append(r1)
            java.lang.String r4 = r2.toString()
            goto L90
        L5c:
            boolean r0 = r4 instanceof java.lang.reflect.Constructor
            if (r0 == 0) goto L7b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "constructor '"
            r0.append(r2)
            java.lang.reflect.Constructor r4 = (java.lang.reflect.Constructor) r4
            java.lang.String r4 = constructorToString(r4)
            r0.append(r4)
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            goto L90
        L7b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "<unknown AccessibleObject> "
            r0.append(r1)
            java.lang.String r4 = r4.toString()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        L90:
            if (r5 == 0) goto Lb9
            r5 = 0
            char r0 = r4.charAt(r5)
            boolean r0 = java.lang.Character.isLowerCase(r0)
            if (r0 == 0) goto Lb9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            char r5 = r4.charAt(r5)
            char r5 = java.lang.Character.toUpperCase(r5)
            r0.append(r5)
            r5 = 1
            java.lang.String r4 = r4.substring(r5)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
        Lb9:
            return r4
    }

    public static java.lang.reflect.Method getAccessor(java.lang.Class<?> r1, java.lang.reflect.Field r2) {
            com.google.gson.internal.reflect.ReflectionHelper$RecordHelper r0 = com.google.gson.internal.reflect.ReflectionHelper.RECORD_HELPER
            java.lang.reflect.Method r1 = r0.getAccessor(r1, r2)
            return r1
    }

    public static <T> java.lang.reflect.Constructor<T> getCanonicalRecordConstructor(java.lang.Class<T> r1) {
            com.google.gson.internal.reflect.ReflectionHelper$RecordHelper r0 = com.google.gson.internal.reflect.ReflectionHelper.RECORD_HELPER
            java.lang.reflect.Constructor r1 = r0.getCanonicalRecordConstructor(r1)
            return r1
    }

    public static java.lang.String[] getRecordComponentNames(java.lang.Class<?> r1) {
            com.google.gson.internal.reflect.ReflectionHelper$RecordHelper r0 = com.google.gson.internal.reflect.ReflectionHelper.RECORD_HELPER
            java.lang.String[] r1 = r0.getRecordComponentNames(r1)
            return r1
    }

    public static boolean isRecord(java.lang.Class<?> r1) {
            com.google.gson.internal.reflect.ReflectionHelper$RecordHelper r0 = com.google.gson.internal.reflect.ReflectionHelper.RECORD_HELPER
            boolean r1 = r0.isRecord(r1)
            return r1
    }

    public static void makeAccessible(java.lang.reflect.AccessibleObject r4) throws com.google.gson.JsonIOException {
            r0 = 1
            r4.setAccessible(r0)     // Catch: java.lang.Exception -> L5
            return
        L5:
            r0 = move-exception
            r1 = 0
            java.lang.String r4 = getAccessibleObjectDescription(r4, r1)
            com.google.gson.JsonIOException r1 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Failed making "
            r2.append(r3)
            r2.append(r4)
            java.lang.String r4 = " accessible; either increase its visibility or write a custom TypeAdapter for its declaring type."
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
    }

    public static java.lang.String tryMakeAccessible(java.lang.reflect.Constructor<?> r3) {
            r0 = 1
            r3.setAccessible(r0)     // Catch: java.lang.Exception -> L6
            r3 = 0
            return r3
        L6:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Failed making constructor '"
            r1.append(r2)
            java.lang.String r3 = constructorToString(r3)
            r1.append(r3)
            java.lang.String r3 = "' accessible; either increase its visibility or write a custom InstanceCreator or TypeAdapter for its declaring type: "
            r1.append(r3)
            java.lang.String r3 = r0.getMessage()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            return r3
    }
}
