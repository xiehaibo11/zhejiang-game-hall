package androidx.versionedparcelable;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public abstract class VersionedParcel {
    private static final int EX_BAD_PARCELABLE = -2;
    private static final int EX_ILLEGAL_ARGUMENT = -3;
    private static final int EX_ILLEGAL_STATE = -5;
    private static final int EX_NETWORK_MAIN_THREAD = -6;
    private static final int EX_NULL_POINTER = -4;
    private static final int EX_PARCELABLE = -9;
    private static final int EX_SECURITY = -1;
    private static final int EX_UNSUPPORTED_OPERATION = -7;
    private static final java.lang.String TAG = "VersionedParcel";
    private static final int TYPE_BINDER = 5;
    private static final int TYPE_PARCELABLE = 2;
    private static final int TYPE_SERIALIZABLE = 3;
    private static final int TYPE_STRING = 4;
    private static final int TYPE_VERSIONED_PARCELABLE = 1;


    public static class ParcelException extends java.lang.RuntimeException {
        public ParcelException(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public VersionedParcel() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.lang.Exception createException(int r4, java.lang.String r5) {
            r3 = this;
            switch(r4) {
                case -9: goto L4c;
                case -8: goto L3;
                case -7: goto L46;
                case -6: goto L40;
                case -5: goto L3a;
                case -4: goto L34;
                case -3: goto L2e;
                case -2: goto L28;
                case -1: goto L22;
                default: goto L3;
            }
        L3:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown exception code: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " msg "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            return r0
        L22:
            java.lang.SecurityException r4 = new java.lang.SecurityException
            r4.<init>(r5)
            return r4
        L28:
            android.os.BadParcelableException r4 = new android.os.BadParcelableException
            r4.<init>(r5)
            return r4
        L2e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            r4.<init>(r5)
            return r4
        L34:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            r4.<init>(r5)
            return r4
        L3a:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r4.<init>(r5)
            return r4
        L40:
            android.os.NetworkOnMainThreadException r4 = new android.os.NetworkOnMainThreadException
            r4.<init>()
            return r4
        L46:
            java.lang.UnsupportedOperationException r4 = new java.lang.UnsupportedOperationException
            r4.<init>(r5)
            return r4
        L4c:
            android.os.Parcelable r4 = r3.readParcelable()
            java.lang.Exception r4 = (java.lang.Exception) r4
            return r4
    }

    private static <T extends androidx.versionedparcelable.VersionedParcelable> java.lang.Class findParcelClass(T r0) throws java.lang.ClassNotFoundException {
            java.lang.Class r0 = r0.getClass()
            java.lang.Class r0 = findParcelClass(r0)
            return r0
    }

    private static java.lang.Class findParcelClass(java.lang.Class<? extends androidx.versionedparcelable.VersionedParcelable> r4) throws java.lang.ClassNotFoundException {
            java.lang.Package r0 = r4.getPackage()
            java.lang.String r0 = r0.getName()
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r0 = r4.getSimpleName()
            r3 = 1
            r1[r3] = r0
            java.lang.String r0 = "%s.%sParcelizer"
            java.lang.String r0 = java.lang.String.format(r0, r1)
            java.lang.ClassLoader r4 = r4.getClassLoader()
            java.lang.Class r4 = java.lang.Class.forName(r0, r2, r4)
            return r4
    }

    @android.support.annotation.NonNull
    protected static java.lang.Throwable getRootCause(@android.support.annotation.NonNull java.lang.Throwable r1) {
        L0:
            java.lang.Throwable r0 = r1.getCause()
            if (r0 == 0) goto Lb
            java.lang.Throwable r1 = r1.getCause()
            goto L0
        Lb:
            return r1
    }

    private <T> int getType(T r3) {
            r2 = this;
            boolean r0 = r3 instanceof java.lang.String
            if (r0 == 0) goto L6
            r3 = 4
            return r3
        L6:
            boolean r0 = r3 instanceof android.os.Parcelable
            if (r0 == 0) goto Lc
            r3 = 2
            return r3
        Lc:
            boolean r0 = r3 instanceof androidx.versionedparcelable.VersionedParcelable
            if (r0 == 0) goto L12
            r3 = 1
            return r3
        L12:
            boolean r0 = r3 instanceof java.io.Serializable
            if (r0 == 0) goto L18
            r3 = 3
            return r3
        L18:
            boolean r0 = r3 instanceof android.os.IBinder
            if (r0 == 0) goto L1e
            r3 = 5
            return r3
        L1e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = " cannot be VersionedParcelled"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private <T, S extends java.util.Collection<T>> S readCollection(int r3, S r4) {
            r2 = this;
            int r3 = r2.readInt()
            r0 = 0
            if (r3 >= 0) goto L8
            return r0
        L8:
            if (r3 == 0) goto L5d
            int r1 = r2.readInt()
            if (r3 >= 0) goto L11
            return r0
        L11:
            r0 = 1
            if (r1 == r0) goto L51
            r0 = 2
            if (r1 == r0) goto L45
            r0 = 3
            if (r1 == r0) goto L39
            r0 = 4
            if (r1 == r0) goto L2d
            r0 = 5
            if (r1 == r0) goto L21
            goto L5d
        L21:
            if (r3 <= 0) goto L5d
            android.os.IBinder r0 = r2.readStrongBinder()
            r4.add(r0)
            int r3 = r3 + (-1)
            goto L21
        L2d:
            if (r3 <= 0) goto L5d
            java.lang.String r0 = r2.readString()
            r4.add(r0)
            int r3 = r3 + (-1)
            goto L2d
        L39:
            if (r3 <= 0) goto L5d
            java.io.Serializable r0 = r2.readSerializable()
            r4.add(r0)
            int r3 = r3 + (-1)
            goto L39
        L45:
            if (r3 <= 0) goto L5d
            android.os.Parcelable r0 = r2.readParcelable()
            r4.add(r0)
            int r3 = r3 + (-1)
            goto L45
        L51:
            if (r3 <= 0) goto L5d
            androidx.versionedparcelable.VersionedParcelable r0 = r2.readVersionedParcelable()
            r4.add(r0)
            int r3 = r3 + (-1)
            goto L51
        L5d:
            return r4
    }

    private java.lang.Exception readException(int r1, java.lang.String r2) {
            r0 = this;
            java.lang.Exception r1 = r0.createException(r1, r2)
            return r1
    }

    private int readExceptionCode() {
            r1 = this;
            int r0 = r1.readInt()
            return r0
    }

    protected static <T extends androidx.versionedparcelable.VersionedParcelable> T readFromParcel(java.lang.String r5, androidx.versionedparcelable.VersionedParcel r6) {
            java.lang.Class<androidx.versionedparcelable.VersionedParcel> r0 = androidx.versionedparcelable.VersionedParcel.class
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r1 = 1
            java.lang.Class r5 = java.lang.Class.forName(r5, r1, r0)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.String r0 = "read"
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.Class<androidx.versionedparcelable.VersionedParcel> r3 = androidx.versionedparcelable.VersionedParcel.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.reflect.Method r5 = r5.getDeclaredMethod(r0, r2)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r1[r4] = r6     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.Object r5 = r5.invoke(r0, r1)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            androidx.versionedparcelable.VersionedParcelable r5 = (androidx.versionedparcelable.VersionedParcelable) r5     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            return r5
        L24:
            r5 = move-exception
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered ClassNotFoundException"
            r6.<init>(r0, r5)
            throw r6
        L2d:
            r5 = move-exception
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered NoSuchMethodException"
            r6.<init>(r0, r5)
            throw r6
        L36:
            r5 = move-exception
            java.lang.Throwable r6 = r5.getCause()
            boolean r6 = r6 instanceof java.lang.RuntimeException
            if (r6 == 0) goto L46
            java.lang.Throwable r5 = r5.getCause()
            java.lang.RuntimeException r5 = (java.lang.RuntimeException) r5
            throw r5
        L46:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered InvocationTargetException"
            r6.<init>(r0, r5)
            throw r6
        L4e:
            r5 = move-exception
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered IllegalAccessException"
            r6.<init>(r0, r5)
            throw r6
    }

    private <T> void writeCollection(java.util.Collection<T> r2, int r3) {
            r1 = this;
            r1.setOutputField(r3)
            if (r2 != 0) goto La
            r2 = -1
            r1.writeInt(r2)
            return
        La:
            int r3 = r2.size()
            r1.writeInt(r3)
            if (r3 <= 0) goto L96
            java.util.Iterator r3 = r2.iterator()
            java.lang.Object r3 = r3.next()
            int r3 = r1.getType(r3)
            r1.writeInt(r3)
            r0 = 1
            if (r3 == r0) goto L82
            r0 = 2
            if (r3 == r0) goto L6e
            r0 = 3
            if (r3 == r0) goto L5a
            r0 = 4
            if (r3 == r0) goto L46
            r0 = 5
            if (r3 == r0) goto L32
            goto L96
        L32:
            java.util.Iterator r2 = r2.iterator()
        L36:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            android.os.IBinder r3 = (android.os.IBinder) r3
            r1.writeStrongBinder(r3)
            goto L36
        L46:
            java.util.Iterator r2 = r2.iterator()
        L4a:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            r1.writeString(r3)
            goto L4a
        L5a:
            java.util.Iterator r2 = r2.iterator()
        L5e:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            java.io.Serializable r3 = (java.io.Serializable) r3
            r1.writeSerializable(r3)
            goto L5e
        L6e:
            java.util.Iterator r2 = r2.iterator()
        L72:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            android.os.Parcelable r3 = (android.os.Parcelable) r3
            r1.writeParcelable(r3)
            goto L72
        L82:
            java.util.Iterator r2 = r2.iterator()
        L86:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.next()
            androidx.versionedparcelable.VersionedParcelable r3 = (androidx.versionedparcelable.VersionedParcelable) r3
            r1.writeVersionedParcelable(r3)
            goto L86
        L96:
            return
    }

    private void writeSerializable(java.io.Serializable r5) {
            r4 = this;
            if (r5 != 0) goto L7
            r5 = 0
            r4.writeString(r5)
            return
        L7:
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getName()
            r4.writeString(r0)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.io.IOException -> L2a
            r2.<init>(r1)     // Catch: java.io.IOException -> L2a
            r2.writeObject(r5)     // Catch: java.io.IOException -> L2a
            r2.close()     // Catch: java.io.IOException -> L2a
            byte[] r5 = r1.toByteArray()     // Catch: java.io.IOException -> L2a
            r4.writeByteArray(r5)     // Catch: java.io.IOException -> L2a
            return
        L2a:
            r5 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "VersionedParcelable encountered IOException writing serializable object (name = "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = ")"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0, r5)
            throw r1
    }

    protected static <T extends androidx.versionedparcelable.VersionedParcelable> void writeToParcel(T r7, androidx.versionedparcelable.VersionedParcel r8) {
            java.lang.Class r0 = findParcelClass(r7)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.String r1 = "write"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.Class r4 = r7.getClass()     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.Class<androidx.versionedparcelable.VersionedParcel> r4 = androidx.versionedparcelable.VersionedParcel.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r2[r5] = r7     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r2[r6] = r8     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            r0.invoke(r1, r2)     // Catch: java.lang.ClassNotFoundException -> L24 java.lang.NoSuchMethodException -> L2d java.lang.reflect.InvocationTargetException -> L36 java.lang.IllegalAccessException -> L4e
            return
        L24:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered ClassNotFoundException"
            r8.<init>(r0, r7)
            throw r8
        L2d:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered NoSuchMethodException"
            r8.<init>(r0, r7)
            throw r8
        L36:
            r7 = move-exception
            java.lang.Throwable r8 = r7.getCause()
            boolean r8 = r8 instanceof java.lang.RuntimeException
            if (r8 == 0) goto L46
            java.lang.Throwable r7 = r7.getCause()
            java.lang.RuntimeException r7 = (java.lang.RuntimeException) r7
            throw r7
        L46:
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered InvocationTargetException"
            r8.<init>(r0, r7)
            throw r8
        L4e:
            r7 = move-exception
            java.lang.RuntimeException r8 = new java.lang.RuntimeException
            java.lang.String r0 = "VersionedParcel encountered IllegalAccessException"
            r8.<init>(r0, r7)
            throw r8
    }

    private void writeVersionedParcelableCreator(androidx.versionedparcelable.VersionedParcelable r4) {
            r3 = this;
            java.lang.Class r0 = r4.getClass()     // Catch: java.lang.ClassNotFoundException -> L10
            java.lang.Class r4 = findParcelClass(r0)     // Catch: java.lang.ClassNotFoundException -> L10
            java.lang.String r4 = r4.getName()
            r3.writeString(r4)
            return
        L10:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.Class r4 = r4.getClass()
            java.lang.String r4 = r4.getSimpleName()
            r2.append(r4)
            java.lang.String r4 = " does not have a Parcelizer"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.<init>(r4, r0)
            throw r1
    }

    protected abstract void closeField();

    protected abstract androidx.versionedparcelable.VersionedParcel createSubParcel();

    public boolean isStream() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected <T> T[] readArray(T[] r5) {
            r4 = this;
            int r0 = r4.readInt()
            r1 = 0
            if (r0 >= 0) goto L8
            return r1
        L8:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>(r0)
            if (r0 == 0) goto L62
            int r3 = r4.readInt()
            if (r0 >= 0) goto L16
            return r1
        L16:
            r1 = 1
            if (r3 == r1) goto L56
            r1 = 2
            if (r3 == r1) goto L4a
            r1 = 3
            if (r3 == r1) goto L3e
            r1 = 4
            if (r3 == r1) goto L32
            r1 = 5
            if (r3 == r1) goto L26
            goto L62
        L26:
            if (r0 <= 0) goto L62
            android.os.IBinder r1 = r4.readStrongBinder()
            r2.add(r1)
            int r0 = r0 + (-1)
            goto L26
        L32:
            if (r0 <= 0) goto L62
            java.lang.String r1 = r4.readString()
            r2.add(r1)
            int r0 = r0 + (-1)
            goto L32
        L3e:
            if (r0 <= 0) goto L62
            java.io.Serializable r1 = r4.readSerializable()
            r2.add(r1)
            int r0 = r0 + (-1)
            goto L3e
        L4a:
            if (r0 <= 0) goto L62
            android.os.Parcelable r1 = r4.readParcelable()
            r2.add(r1)
            int r0 = r0 + (-1)
            goto L4a
        L56:
            if (r0 <= 0) goto L62
            androidx.versionedparcelable.VersionedParcelable r1 = r4.readVersionedParcelable()
            r2.add(r1)
            int r0 = r0 + (-1)
            goto L56
        L62:
            java.lang.Object[] r5 = r2.toArray(r5)
            return r5
    }

    public <T> T[] readArray(T[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            java.lang.Object[] r1 = r0.readArray(r1)
            return r1
    }

    protected abstract boolean readBoolean();

    public boolean readBoolean(boolean r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            boolean r1 = r0.readBoolean()
            return r1
    }

    protected boolean[] readBooleanArray() {
            r5 = this;
            int r0 = r5.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            boolean[] r1 = new boolean[r0]
            r2 = 0
            r3 = 0
        Lc:
            if (r3 >= r0) goto L1c
            int r4 = r5.readInt()
            if (r4 == 0) goto L16
            r4 = 1
            goto L17
        L16:
            r4 = 0
        L17:
            r1[r3] = r4
            int r3 = r3 + 1
            goto Lc
        L1c:
            return r1
    }

    public boolean[] readBooleanArray(boolean[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            boolean[] r1 = r0.readBooleanArray()
            return r1
    }

    protected abstract android.os.Bundle readBundle();

    public android.os.Bundle readBundle(android.os.Bundle r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            android.os.Bundle r1 = r0.readBundle()
            return r1
    }

    public byte readByte(byte r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            int r1 = r0.readInt()
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte r1 = (byte) r1
            return r1
    }

    protected abstract byte[] readByteArray();

    public byte[] readByteArray(byte[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            byte[] r1 = r0.readByteArray()
            return r1
    }

    public char[] readCharArray(char[] r3, int r4) {
            r2 = this;
            boolean r4 = r2.readField(r4)
            if (r4 != 0) goto L7
            return r3
        L7:
            int r3 = r2.readInt()
            if (r3 >= 0) goto Lf
            r3 = 0
            return r3
        Lf:
            char[] r4 = new char[r3]
            r0 = 0
        L12:
            if (r0 >= r3) goto L1e
            int r1 = r2.readInt()
            char r1 = (char) r1
            r4[r0] = r1
            int r0 = r0 + 1
            goto L12
        L1e:
            return r4
    }

    protected abstract double readDouble();

    public double readDouble(double r1, int r3) {
            r0 = this;
            boolean r3 = r0.readField(r3)
            if (r3 != 0) goto L7
            return r1
        L7:
            double r1 = r0.readDouble()
            return r1
    }

    protected double[] readDoubleArray() {
            r5 = this;
            int r0 = r5.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            double[] r1 = new double[r0]
            r2 = 0
        Lb:
            if (r2 >= r0) goto L16
            double r3 = r5.readDouble()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb
        L16:
            return r1
    }

    public double[] readDoubleArray(double[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            double[] r1 = r0.readDoubleArray()
            return r1
    }

    public java.lang.Exception readException(java.lang.Exception r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            int r2 = r0.readExceptionCode()
            if (r2 == 0) goto L15
            java.lang.String r1 = r0.readString()
            java.lang.Exception r1 = r0.readException(r2, r1)
        L15:
            return r1
    }

    protected abstract boolean readField(int r1);

    protected abstract float readFloat();

    public float readFloat(float r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            float r1 = r0.readFloat()
            return r1
    }

    protected float[] readFloatArray() {
            r4 = this;
            int r0 = r4.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            float[] r1 = new float[r0]
            r2 = 0
        Lb:
            if (r2 >= r0) goto L16
            float r3 = r4.readFloat()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb
        L16:
            return r1
    }

    public float[] readFloatArray(float[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            float[] r1 = r0.readFloatArray()
            return r1
    }

    protected abstract int readInt();

    public int readInt(int r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            int r1 = r0.readInt()
            return r1
    }

    protected int[] readIntArray() {
            r4 = this;
            int r0 = r4.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            int[] r1 = new int[r0]
            r2 = 0
        Lb:
            if (r2 >= r0) goto L16
            int r3 = r4.readInt()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb
        L16:
            return r1
    }

    public int[] readIntArray(int[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            int[] r1 = r0.readIntArray()
            return r1
    }

    public <T> java.util.List<T> readList(java.util.List<T> r2, int r3) {
            r1 = this;
            boolean r0 = r1.readField(r3)
            if (r0 != 0) goto L7
            return r2
        L7:
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.Collection r2 = r1.readCollection(r3, r2)
            java.util.List r2 = (java.util.List) r2
            return r2
    }

    protected abstract long readLong();

    public long readLong(long r1, int r3) {
            r0 = this;
            boolean r3 = r0.readField(r3)
            if (r3 != 0) goto L7
            return r1
        L7:
            long r1 = r0.readLong()
            return r1
    }

    protected long[] readLongArray() {
            r5 = this;
            int r0 = r5.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            long[] r1 = new long[r0]
            r2 = 0
        Lb:
            if (r2 >= r0) goto L16
            long r3 = r5.readLong()
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb
        L16:
            return r1
    }

    public long[] readLongArray(long[] r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            long[] r1 = r0.readLongArray()
            return r1
    }

    protected abstract <T extends android.os.Parcelable> T readParcelable();

    public <T extends android.os.Parcelable> T readParcelable(T r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            android.os.Parcelable r1 = r0.readParcelable()
            return r1
    }

    protected java.io.Serializable readSerializable() {
            r6 = this;
            java.lang.String r0 = ")"
            java.lang.String r1 = r6.readString()
            if (r1 != 0) goto La
            r0 = 0
            return r0
        La:
            byte[] r2 = r6.readByteArray()
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream
            r3.<init>(r2)
            androidx.versionedparcelable.VersionedParcel$1 r2 = new androidx.versionedparcelable.VersionedParcel$1     // Catch: java.lang.ClassNotFoundException -> L1f java.io.IOException -> L3a
            r2.<init>(r6, r3)     // Catch: java.lang.ClassNotFoundException -> L1f java.io.IOException -> L3a
            java.lang.Object r2 = r2.readObject()     // Catch: java.lang.ClassNotFoundException -> L1f java.io.IOException -> L3a
            java.io.Serializable r2 = (java.io.Serializable) r2     // Catch: java.lang.ClassNotFoundException -> L1f java.io.IOException -> L3a
            return r2
        L1f:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "VersionedParcelable encountered ClassNotFoundException reading a Serializable object (name = "
            r4.append(r5)
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r3.<init>(r0, r2)
            throw r3
        L3a:
            r2 = move-exception
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "VersionedParcelable encountered IOException reading a Serializable object (name = "
            r4.append(r5)
            r4.append(r1)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r3.<init>(r0, r2)
            throw r3
    }

    public <T> java.util.Set<T> readSet(java.util.Set<T> r2, int r3) {
            r1 = this;
            boolean r0 = r1.readField(r3)
            if (r0 != 0) goto L7
            return r2
        L7:
            android.support.v4.util.ArraySet r2 = new android.support.v4.util.ArraySet
            r2.<init>()
            java.util.Collection r2 = r1.readCollection(r3, r2)
            java.util.Set r2 = (java.util.Set) r2
            return r2
    }

    @android.support.annotation.RequiresApi(api = 21)
    public android.util.Size readSize(android.util.Size r2, int r3) {
            r1 = this;
            boolean r3 = r1.readField(r3)
            if (r3 != 0) goto L7
            return r2
        L7:
            boolean r2 = r1.readBoolean()
            if (r2 == 0) goto L1b
            int r2 = r1.readInt()
            int r3 = r1.readInt()
            android.util.Size r0 = new android.util.Size
            r0.<init>(r2, r3)
            return r0
        L1b:
            r2 = 0
            return r2
    }

    @android.support.annotation.RequiresApi(api = 21)
    public android.util.SizeF readSizeF(android.util.SizeF r2, int r3) {
            r1 = this;
            boolean r3 = r1.readField(r3)
            if (r3 != 0) goto L7
            return r2
        L7:
            boolean r2 = r1.readBoolean()
            if (r2 == 0) goto L1b
            float r2 = r1.readFloat()
            float r3 = r1.readFloat()
            android.util.SizeF r0 = new android.util.SizeF
            r0.<init>(r2, r3)
            return r0
        L1b:
            r2 = 0
            return r2
    }

    public android.util.SparseBooleanArray readSparseBooleanArray(android.util.SparseBooleanArray r4, int r5) {
            r3 = this;
            boolean r5 = r3.readField(r5)
            if (r5 != 0) goto L7
            return r4
        L7:
            int r4 = r3.readInt()
            if (r4 >= 0) goto Lf
            r4 = 0
            return r4
        Lf:
            android.util.SparseBooleanArray r5 = new android.util.SparseBooleanArray
            r5.<init>(r4)
            r0 = 0
        L15:
            if (r0 >= r4) goto L25
            int r1 = r3.readInt()
            boolean r2 = r3.readBoolean()
            r5.put(r1, r2)
            int r0 = r0 + 1
            goto L15
        L25:
            return r5
    }

    protected abstract java.lang.String readString();

    public java.lang.String readString(java.lang.String r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            java.lang.String r1 = r0.readString()
            return r1
    }

    protected abstract android.os.IBinder readStrongBinder();

    public android.os.IBinder readStrongBinder(android.os.IBinder r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            android.os.IBinder r1 = r0.readStrongBinder()
            return r1
    }

    protected <T extends androidx.versionedparcelable.VersionedParcelable> T readVersionedParcelable() {
            r2 = this;
            java.lang.String r0 = r2.readString()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            androidx.versionedparcelable.VersionedParcel r1 = r2.createSubParcel()
            androidx.versionedparcelable.VersionedParcelable r0 = readFromParcel(r0, r1)
            return r0
    }

    public <T extends androidx.versionedparcelable.VersionedParcelable> T readVersionedParcelable(T r1, int r2) {
            r0 = this;
            boolean r2 = r0.readField(r2)
            if (r2 != 0) goto L7
            return r1
        L7:
            androidx.versionedparcelable.VersionedParcelable r1 = r0.readVersionedParcelable()
            return r1
    }

    protected abstract void setOutputField(int r1);

    public void setSerializationFlags(boolean r1, boolean r2) {
            r0 = this;
            return
    }

    protected <T> void writeArray(T[] r5) {
            r4 = this;
            if (r5 != 0) goto L7
            r5 = -1
            r4.writeInt(r5)
            return
        L7:
            int r0 = r5.length
            r4.writeInt(r0)
            if (r0 <= 0) goto L63
            r1 = 0
            r2 = r5[r1]
            int r2 = r4.getType(r2)
            r4.writeInt(r2)
            r3 = 1
            if (r2 == r3) goto L57
            r3 = 2
            if (r2 == r3) goto L4b
            r3 = 3
            if (r2 == r3) goto L3f
            r3 = 4
            if (r2 == r3) goto L33
            r3 = 5
            if (r2 == r3) goto L27
            goto L63
        L27:
            if (r1 >= r0) goto L63
            r2 = r5[r1]
            android.os.IBinder r2 = (android.os.IBinder) r2
            r4.writeStrongBinder(r2)
            int r1 = r1 + 1
            goto L27
        L33:
            if (r1 >= r0) goto L63
            r2 = r5[r1]
            java.lang.String r2 = (java.lang.String) r2
            r4.writeString(r2)
            int r1 = r1 + 1
            goto L33
        L3f:
            if (r1 >= r0) goto L63
            r2 = r5[r1]
            java.io.Serializable r2 = (java.io.Serializable) r2
            r4.writeSerializable(r2)
            int r1 = r1 + 1
            goto L3f
        L4b:
            if (r1 >= r0) goto L63
            r2 = r5[r1]
            android.os.Parcelable r2 = (android.os.Parcelable) r2
            r4.writeParcelable(r2)
            int r1 = r1 + 1
            goto L4b
        L57:
            if (r1 >= r0) goto L63
            r2 = r5[r1]
            androidx.versionedparcelable.VersionedParcelable r2 = (androidx.versionedparcelable.VersionedParcelable) r2
            r4.writeVersionedParcelable(r2)
            int r1 = r1 + 1
            goto L57
        L63:
            return
    }

    public <T> void writeArray(T[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeArray(r1)
            return
    }

    protected abstract void writeBoolean(boolean r1);

    public void writeBoolean(boolean r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeBoolean(r1)
            return
    }

    protected void writeBooleanArray(boolean[] r4) {
            r3 = this;
            if (r4 == 0) goto L11
            int r0 = r4.length
            r3.writeInt(r0)
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            boolean r2 = r4[r1]
            r3.writeInt(r2)
            int r1 = r1 + 1
            goto L7
        L11:
            r4 = -1
            r3.writeInt(r4)
        L15:
            return
    }

    public void writeBooleanArray(boolean[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeBooleanArray(r1)
            return
    }

    protected abstract void writeBundle(android.os.Bundle r1);

    public void writeBundle(android.os.Bundle r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeBundle(r1)
            return
    }

    public void writeByte(byte r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeInt(r1)
            return
    }

    protected abstract void writeByteArray(byte[] r1);

    public void writeByteArray(byte[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeByteArray(r1)
            return
    }

    protected abstract void writeByteArray(byte[] r1, int r2, int r3);

    public void writeByteArray(byte[] r1, int r2, int r3, int r4) {
            r0 = this;
            r0.setOutputField(r4)
            r0.writeByteArray(r1, r2, r3)
            return
    }

    public void writeCharArray(char[] r3, int r4) {
            r2 = this;
            r2.setOutputField(r4)
            if (r3 == 0) goto L14
            int r4 = r3.length
            r2.writeInt(r4)
            r0 = 0
        La:
            if (r0 >= r4) goto L18
            char r1 = r3[r0]
            r2.writeInt(r1)
            int r0 = r0 + 1
            goto La
        L14:
            r3 = -1
            r2.writeInt(r3)
        L18:
            return
    }

    protected abstract void writeDouble(double r1);

    public void writeDouble(double r1, int r3) {
            r0 = this;
            r0.setOutputField(r3)
            r0.writeDouble(r1)
            return
    }

    protected void writeDoubleArray(double[] r5) {
            r4 = this;
            if (r5 == 0) goto L11
            int r0 = r5.length
            r4.writeInt(r0)
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            r2 = r5[r1]
            r4.writeDouble(r2)
            int r1 = r1 + 1
            goto L7
        L11:
            r5 = -1
            r4.writeInt(r5)
        L15:
            return
    }

    public void writeDoubleArray(double[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeDoubleArray(r1)
            return
    }

    public void writeException(java.lang.Exception r4, int r5) {
            r3 = this;
            r3.setOutputField(r5)
            if (r4 != 0) goto L9
            r3.writeNoException()
            return
        L9:
            r5 = 0
            boolean r0 = r4 instanceof android.os.Parcelable
            r1 = -9
            if (r0 == 0) goto L23
            java.lang.Class r0 = r4.getClass()
            java.lang.ClassLoader r0 = r0.getClassLoader()
            java.lang.Class<android.os.Parcelable> r2 = android.os.Parcelable.class
            java.lang.ClassLoader r2 = r2.getClassLoader()
            if (r0 != r2) goto L23
            r5 = -9
            goto L4c
        L23:
            boolean r0 = r4 instanceof java.lang.SecurityException
            if (r0 == 0) goto L29
            r5 = -1
            goto L4c
        L29:
            boolean r0 = r4 instanceof android.os.BadParcelableException
            if (r0 == 0) goto L2f
            r5 = -2
            goto L4c
        L2f:
            boolean r0 = r4 instanceof java.lang.IllegalArgumentException
            if (r0 == 0) goto L35
            r5 = -3
            goto L4c
        L35:
            boolean r0 = r4 instanceof java.lang.NullPointerException
            if (r0 == 0) goto L3b
            r5 = -4
            goto L4c
        L3b:
            boolean r0 = r4 instanceof java.lang.IllegalStateException
            if (r0 == 0) goto L41
            r5 = -5
            goto L4c
        L41:
            boolean r0 = r4 instanceof android.os.NetworkOnMainThreadException
            if (r0 == 0) goto L47
            r5 = -6
            goto L4c
        L47:
            boolean r0 = r4 instanceof java.lang.UnsupportedOperationException
            if (r0 == 0) goto L4c
            r5 = -7
        L4c:
            r3.writeInt(r5)
            if (r5 != 0) goto L5e
            boolean r5 = r4 instanceof java.lang.RuntimeException
            if (r5 == 0) goto L58
            java.lang.RuntimeException r4 = (java.lang.RuntimeException) r4
            throw r4
        L58:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            r5.<init>(r4)
            throw r5
        L5e:
            java.lang.String r0 = r4.getMessage()
            r3.writeString(r0)
            if (r5 == r1) goto L68
            goto L6d
        L68:
            android.os.Parcelable r4 = (android.os.Parcelable) r4
            r3.writeParcelable(r4)
        L6d:
            return
    }

    protected abstract void writeFloat(float r1);

    public void writeFloat(float r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeFloat(r1)
            return
    }

    protected void writeFloatArray(float[] r4) {
            r3 = this;
            if (r4 == 0) goto L11
            int r0 = r4.length
            r3.writeInt(r0)
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            r2 = r4[r1]
            r3.writeFloat(r2)
            int r1 = r1 + 1
            goto L7
        L11:
            r4 = -1
            r3.writeInt(r4)
        L15:
            return
    }

    public void writeFloatArray(float[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeFloatArray(r1)
            return
    }

    protected abstract void writeInt(int r1);

    public void writeInt(int r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeInt(r1)
            return
    }

    protected void writeIntArray(int[] r4) {
            r3 = this;
            if (r4 == 0) goto L11
            int r0 = r4.length
            r3.writeInt(r0)
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            r2 = r4[r1]
            r3.writeInt(r2)
            int r1 = r1 + 1
            goto L7
        L11:
            r4 = -1
            r3.writeInt(r4)
        L15:
            return
    }

    public void writeIntArray(int[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeIntArray(r1)
            return
    }

    public <T> void writeList(java.util.List<T> r1, int r2) {
            r0 = this;
            r0.writeCollection(r1, r2)
            return
    }

    protected abstract void writeLong(long r1);

    public void writeLong(long r1, int r3) {
            r0 = this;
            r0.setOutputField(r3)
            r0.writeLong(r1)
            return
    }

    protected void writeLongArray(long[] r5) {
            r4 = this;
            if (r5 == 0) goto L11
            int r0 = r5.length
            r4.writeInt(r0)
            r1 = 0
        L7:
            if (r1 >= r0) goto L15
            r2 = r5[r1]
            r4.writeLong(r2)
            int r1 = r1 + 1
            goto L7
        L11:
            r5 = -1
            r4.writeInt(r5)
        L15:
            return
    }

    public void writeLongArray(long[] r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeLongArray(r1)
            return
    }

    protected void writeNoException() {
            r1 = this;
            r0 = 0
            r1.writeInt(r0)
            return
    }

    protected abstract void writeParcelable(android.os.Parcelable r1);

    public void writeParcelable(android.os.Parcelable r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeParcelable(r1)
            return
    }

    public void writeSerializable(java.io.Serializable r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeSerializable(r1)
            return
    }

    public <T> void writeSet(java.util.Set<T> r1, int r2) {
            r0 = this;
            r0.writeCollection(r1, r2)
            return
    }

    @android.support.annotation.RequiresApi(api = 21)
    public void writeSize(android.util.Size r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            if (r1 == 0) goto L7
            r2 = 1
            goto L8
        L7:
            r2 = 0
        L8:
            r0.writeBoolean(r2)
            if (r1 == 0) goto L1b
            int r2 = r1.getWidth()
            r0.writeInt(r2)
            int r1 = r1.getHeight()
            r0.writeInt(r1)
        L1b:
            return
    }

    @android.support.annotation.RequiresApi(api = 21)
    public void writeSizeF(android.util.SizeF r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            if (r1 == 0) goto L7
            r2 = 1
            goto L8
        L7:
            r2 = 0
        L8:
            r0.writeBoolean(r2)
            if (r1 == 0) goto L1b
            float r2 = r1.getWidth()
            r0.writeFloat(r2)
            float r1 = r1.getHeight()
            r0.writeFloat(r1)
        L1b:
            return
    }

    public void writeSparseBooleanArray(android.util.SparseBooleanArray r3, int r4) {
            r2 = this;
            r2.setOutputField(r4)
            if (r3 != 0) goto La
            r3 = -1
            r2.writeInt(r3)
            return
        La:
            int r4 = r3.size()
            r2.writeInt(r4)
            r0 = 0
        L12:
            if (r0 >= r4) goto L25
            int r1 = r3.keyAt(r0)
            r2.writeInt(r1)
            boolean r1 = r3.valueAt(r0)
            r2.writeBoolean(r1)
            int r0 = r0 + 1
            goto L12
        L25:
            return
    }

    protected abstract void writeString(java.lang.String r1);

    public void writeString(java.lang.String r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeString(r1)
            return
    }

    protected abstract void writeStrongBinder(android.os.IBinder r1);

    public void writeStrongBinder(android.os.IBinder r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeStrongBinder(r1)
            return
    }

    protected abstract void writeStrongInterface(android.os.IInterface r1);

    public void writeStrongInterface(android.os.IInterface r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeStrongInterface(r1)
            return
    }

    protected void writeVersionedParcelable(androidx.versionedparcelable.VersionedParcelable r2) {
            r1 = this;
            if (r2 != 0) goto L7
            r2 = 0
            r1.writeString(r2)
            return
        L7:
            r1.writeVersionedParcelableCreator(r2)
            androidx.versionedparcelable.VersionedParcel r0 = r1.createSubParcel()
            writeToParcel(r2, r0)
            r0.closeField()
            return
    }

    public void writeVersionedParcelable(androidx.versionedparcelable.VersionedParcelable r1, int r2) {
            r0 = this;
            r0.setOutputField(r2)
            r0.writeVersionedParcelable(r1)
            return
    }
}
