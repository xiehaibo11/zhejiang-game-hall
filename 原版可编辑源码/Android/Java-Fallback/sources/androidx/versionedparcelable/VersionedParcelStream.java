package androidx.versionedparcelable;

class VersionedParcelStream extends androidx.versionedparcelable.VersionedParcel {
    private static final int TYPE_BOOLEAN = 5;
    private static final int TYPE_BOOLEAN_ARRAY = 6;
    private static final int TYPE_DOUBLE = 7;
    private static final int TYPE_DOUBLE_ARRAY = 8;
    private static final int TYPE_FLOAT = 13;
    private static final int TYPE_FLOAT_ARRAY = 14;
    private static final int TYPE_INT = 9;
    private static final int TYPE_INT_ARRAY = 10;
    private static final int TYPE_LONG = 11;
    private static final int TYPE_LONG_ARRAY = 12;
    private static final int TYPE_NULL = 0;
    private static final int TYPE_STRING = 3;
    private static final int TYPE_STRING_ARRAY = 4;
    private static final int TYPE_SUB_BUNDLE = 1;
    private static final int TYPE_SUB_PERSISTABLE_BUNDLE = 2;
    private static final java.nio.charset.Charset UTF_16 = null;
    private final android.util.SparseArray<androidx.versionedparcelable.VersionedParcelStream.InputBuffer> mCachedFields;
    private java.io.DataInputStream mCurrentInput;
    private java.io.DataOutputStream mCurrentOutput;
    private androidx.versionedparcelable.VersionedParcelStream.FieldBuffer mFieldBuffer;
    private boolean mIgnoreParcelables;
    private final java.io.DataInputStream mMasterInput;
    private final java.io.DataOutputStream mMasterOutput;

    private static class FieldBuffer {
        final java.io.DataOutputStream mDataStream;
        private final int mFieldId;
        final java.io.ByteArrayOutputStream mOutput;
        private final java.io.DataOutputStream mTarget;

        FieldBuffer(int r3, java.io.DataOutputStream r4) {
                r2 = this;
                r2.<init>()
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                r2.mOutput = r0
                java.io.DataOutputStream r0 = new java.io.DataOutputStream
                java.io.ByteArrayOutputStream r1 = r2.mOutput
                r0.<init>(r1)
                r2.mDataStream = r0
                r2.mFieldId = r3
                r2.mTarget = r4
                return
        }

        void flushField() throws java.io.IOException {
                r4 = this;
                java.io.DataOutputStream r0 = r4.mDataStream
                r0.flush()
                java.io.ByteArrayOutputStream r0 = r4.mOutput
                int r0 = r0.size()
                int r1 = r4.mFieldId
                int r1 = r1 << 16
                r2 = 65535(0xffff, float:9.1834E-41)
                if (r0 < r2) goto L16
                r3 = r2
                goto L17
            L16:
                r3 = r0
            L17:
                r1 = r1 | r3
                java.io.DataOutputStream r3 = r4.mTarget
                r3.writeInt(r1)
                if (r0 < r2) goto L24
                java.io.DataOutputStream r1 = r4.mTarget
                r1.writeInt(r0)
            L24:
                java.io.ByteArrayOutputStream r0 = r4.mOutput
                java.io.DataOutputStream r1 = r4.mTarget
                r0.writeTo(r1)
                return
        }
    }

    private static class InputBuffer {
        final int mFieldId;
        final java.io.DataInputStream mInputStream;
        private final int mSize;

        InputBuffer(int r1, int r2, java.io.DataInputStream r3) throws java.io.IOException {
                r0 = this;
                r0.<init>()
                r0.mSize = r2
                r0.mFieldId = r1
                byte[] r1 = new byte[r2]
                r3.readFully(r1)
                java.io.DataInputStream r2 = new java.io.DataInputStream
                java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream
                r3.<init>(r1)
                r2.<init>(r3)
                r0.mInputStream = r2
                return
        }
    }

    static {
            java.lang.String r0 = "UTF-16"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            androidx.versionedparcelable.VersionedParcelStream.UTF_16 = r0
            return
    }

    public VersionedParcelStream(java.io.InputStream r3, java.io.OutputStream r4) {
            r2 = this;
            r2.<init>()
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.mCachedFields = r0
            r0 = 0
            if (r3 == 0) goto L13
            java.io.DataInputStream r1 = new java.io.DataInputStream
            r1.<init>(r3)
            goto L14
        L13:
            r1 = r0
        L14:
            r2.mMasterInput = r1
            if (r4 == 0) goto L1d
            java.io.DataOutputStream r0 = new java.io.DataOutputStream
            r0.<init>(r4)
        L1d:
            r2.mMasterOutput = r0
            java.io.DataInputStream r3 = r2.mMasterInput
            r2.mCurrentInput = r3
            r2.mCurrentOutput = r0
            return
    }

    private void readObject(int r3, java.lang.String r4, android.os.Bundle r5) {
            r2 = this;
            switch(r3) {
                case 0: goto L91;
                case 1: goto L89;
                case 2: goto L81;
                case 3: goto L79;
                case 4: goto L6c;
                case 5: goto L64;
                case 6: goto L5c;
                case 7: goto L54;
                case 8: goto L4c;
                case 9: goto L44;
                case 10: goto L3c;
                case 11: goto L34;
                case 12: goto L2c;
                case 13: goto L23;
                case 14: goto L1a;
                default: goto L3;
            }
        L3:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Unknown type "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r3 = r5.toString()
            r4.<init>(r3)
            throw r4
        L1a:
            float[] r3 = r2.readFloatArray()
            r5.putFloatArray(r4, r3)
            goto L95
        L23:
            float r3 = r2.readFloat()
            r5.putFloat(r4, r3)
            goto L95
        L2c:
            long[] r3 = r2.readLongArray()
            r5.putLongArray(r4, r3)
            goto L95
        L34:
            long r0 = r2.readLong()
            r5.putLong(r4, r0)
            goto L95
        L3c:
            int[] r3 = r2.readIntArray()
            r5.putIntArray(r4, r3)
            goto L95
        L44:
            int r3 = r2.readInt()
            r5.putInt(r4, r3)
            goto L95
        L4c:
            double[] r3 = r2.readDoubleArray()
            r5.putDoubleArray(r4, r3)
            goto L95
        L54:
            double r0 = r2.readDouble()
            r5.putDouble(r4, r0)
            goto L95
        L5c:
            boolean[] r3 = r2.readBooleanArray()
            r5.putBooleanArray(r4, r3)
            goto L95
        L64:
            boolean r3 = r2.readBoolean()
            r5.putBoolean(r4, r3)
            goto L95
        L6c:
            r3 = 0
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.Object[] r3 = r2.readArray(r3)
            java.lang.String[] r3 = (java.lang.String[]) r3
            r5.putStringArray(r4, r3)
            goto L95
        L79:
            java.lang.String r3 = r2.readString()
            r5.putString(r4, r3)
            goto L95
        L81:
            android.os.Bundle r3 = r2.readBundle()
            r5.putBundle(r4, r3)
            goto L95
        L89:
            android.os.Bundle r3 = r2.readBundle()
            r5.putBundle(r4, r3)
            goto L95
        L91:
            r3 = 0
            r5.putParcelable(r4, r3)
        L95:
            return
    }

    private void writeObject(java.lang.Object r4) {
            r3 = this;
            if (r4 != 0) goto L8
            r4 = 0
            r3.writeInt(r4)
            goto Lea
        L8:
            boolean r0 = r4 instanceof android.os.Bundle
            if (r0 == 0) goto L17
            r0 = 1
            r3.writeInt(r0)
            android.os.Bundle r4 = (android.os.Bundle) r4
            r3.writeBundle(r4)
            goto Lea
        L17:
            boolean r0 = r4 instanceof java.lang.String
            if (r0 == 0) goto L26
            r0 = 3
            r3.writeInt(r0)
            java.lang.String r4 = (java.lang.String) r4
            r3.writeString(r4)
            goto Lea
        L26:
            boolean r0 = r4 instanceof java.lang.String[]
            if (r0 == 0) goto L37
            r0 = 4
            r3.writeInt(r0)
            java.lang.String[] r4 = (java.lang.String[]) r4
            java.lang.String[] r4 = (java.lang.String[]) r4
            r3.writeArray(r4)
            goto Lea
        L37:
            boolean r0 = r4 instanceof java.lang.Boolean
            if (r0 == 0) goto L4a
            r0 = 5
            r3.writeInt(r0)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            boolean r4 = r4.booleanValue()
            r3.writeBoolean(r4)
            goto Lea
        L4a:
            boolean r0 = r4 instanceof boolean[]
            if (r0 == 0) goto L5b
            r0 = 6
            r3.writeInt(r0)
            boolean[] r4 = (boolean[]) r4
            boolean[] r4 = (boolean[]) r4
            r3.writeBooleanArray(r4)
            goto Lea
        L5b:
            boolean r0 = r4 instanceof java.lang.Double
            if (r0 == 0) goto L6e
            r0 = 7
            r3.writeInt(r0)
            java.lang.Double r4 = (java.lang.Double) r4
            double r0 = r4.doubleValue()
            r3.writeDouble(r0)
            goto Lea
        L6e:
            boolean r0 = r4 instanceof double[]
            if (r0 == 0) goto L7f
            r0 = 8
            r3.writeInt(r0)
            double[] r4 = (double[]) r4
            double[] r4 = (double[]) r4
            r3.writeDoubleArray(r4)
            goto Lea
        L7f:
            boolean r0 = r4 instanceof java.lang.Integer
            if (r0 == 0) goto L92
            r0 = 9
            r3.writeInt(r0)
            java.lang.Integer r4 = (java.lang.Integer) r4
            int r4 = r4.intValue()
            r3.writeInt(r4)
            goto Lea
        L92:
            boolean r0 = r4 instanceof int[]
            if (r0 == 0) goto La3
            r0 = 10
            r3.writeInt(r0)
            int[] r4 = (int[]) r4
            int[] r4 = (int[]) r4
            r3.writeIntArray(r4)
            goto Lea
        La3:
            boolean r0 = r4 instanceof java.lang.Long
            if (r0 == 0) goto Lb6
            r0 = 11
            r3.writeInt(r0)
            java.lang.Long r4 = (java.lang.Long) r4
            long r0 = r4.longValue()
            r3.writeLong(r0)
            goto Lea
        Lb6:
            boolean r0 = r4 instanceof long[]
            if (r0 == 0) goto Lc7
            r0 = 12
            r3.writeInt(r0)
            long[] r4 = (long[]) r4
            long[] r4 = (long[]) r4
            r3.writeLongArray(r4)
            goto Lea
        Lc7:
            boolean r0 = r4 instanceof java.lang.Float
            if (r0 == 0) goto Lda
            r0 = 13
            r3.writeInt(r0)
            java.lang.Float r4 = (java.lang.Float) r4
            float r4 = r4.floatValue()
            r3.writeFloat(r4)
            goto Lea
        Lda:
            boolean r0 = r4 instanceof float[]
            if (r0 == 0) goto Leb
            r0 = 14
            r3.writeInt(r0)
            float[] r4 = (float[]) r4
            float[] r4 = (float[]) r4
            r3.writeFloatArray(r4)
        Lea:
            return
        Leb:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unsupported type "
            r1.append(r2)
            java.lang.Class r4 = r4.getClass()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    public void closeField() {
            r2 = this;
            androidx.versionedparcelable.VersionedParcelStream$FieldBuffer r0 = r2.mFieldBuffer
            if (r0 == 0) goto L1c
            java.io.ByteArrayOutputStream r0 = r0.mOutput     // Catch: java.io.IOException -> L15
            int r0 = r0.size()     // Catch: java.io.IOException -> L15
            if (r0 == 0) goto L11
            androidx.versionedparcelable.VersionedParcelStream$FieldBuffer r0 = r2.mFieldBuffer     // Catch: java.io.IOException -> L15
            r0.flushField()     // Catch: java.io.IOException -> L15
        L11:
            r0 = 0
            r2.mFieldBuffer = r0
            goto L1c
        L15:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
        L1c:
            return
    }

    @Override
    protected androidx.versionedparcelable.VersionedParcel createSubParcel() {
            r3 = this;
            androidx.versionedparcelable.VersionedParcelStream r0 = new androidx.versionedparcelable.VersionedParcelStream
            java.io.DataInputStream r1 = r3.mCurrentInput
            java.io.DataOutputStream r2 = r3.mCurrentOutput
            r0.<init>(r1, r2)
            return r0
    }

    @Override
    public boolean isStream() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public boolean readBoolean() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L7
            boolean r0 = r0.readBoolean()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public android.os.Bundle readBundle() {
            r5 = this;
            int r0 = r5.readInt()
            if (r0 >= 0) goto L8
            r0 = 0
            return r0
        L8:
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            r2 = 0
        Le:
            if (r2 >= r0) goto L1e
            java.lang.String r3 = r5.readString()
            int r4 = r5.readInt()
            r5.readObject(r4, r3, r1)
            int r2 = r2 + 1
            goto Le
        L1e:
            return r1
    }

    @Override
    public byte[] readByteArray() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L12
            int r0 = r0.readInt()     // Catch: java.io.IOException -> L12
            if (r0 <= 0) goto L10
            byte[] r0 = new byte[r0]     // Catch: java.io.IOException -> L12
            java.io.DataInputStream r1 = r2.mCurrentInput     // Catch: java.io.IOException -> L12
            r1.readFully(r0)     // Catch: java.io.IOException -> L12
            return r0
        L10:
            r0 = 0
            return r0
        L12:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public double readDouble() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L7
            double r0 = r0.readDouble()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public boolean readField(int r6) {
            r5 = this;
            android.util.SparseArray<androidx.versionedparcelable.VersionedParcelStream$InputBuffer> r0 = r5.mCachedFields
            java.lang.Object r0 = r0.get(r6)
            androidx.versionedparcelable.VersionedParcelStream$InputBuffer r0 = (androidx.versionedparcelable.VersionedParcelStream.InputBuffer) r0
            r1 = 1
            if (r0 == 0) goto L15
            android.util.SparseArray<androidx.versionedparcelable.VersionedParcelStream$InputBuffer> r2 = r5.mCachedFields
            r2.remove(r6)
            java.io.DataInputStream r6 = r0.mInputStream
            r5.mCurrentInput = r6
            return r1
        L15:
            java.io.DataInputStream r0 = r5.mMasterInput     // Catch: java.io.IOException -> L43
            int r0 = r0.readInt()     // Catch: java.io.IOException -> L43
            r2 = 65535(0xffff, float:9.1834E-41)
            r3 = r0 & r2
            if (r3 != r2) goto L28
            java.io.DataInputStream r3 = r5.mMasterInput     // Catch: java.io.IOException -> L43
            int r3 = r3.readInt()     // Catch: java.io.IOException -> L43
        L28:
            androidx.versionedparcelable.VersionedParcelStream$InputBuffer r4 = new androidx.versionedparcelable.VersionedParcelStream$InputBuffer     // Catch: java.io.IOException -> L43
            int r0 = r0 >> 16
            r0 = r0 & r2
            java.io.DataInputStream r2 = r5.mMasterInput     // Catch: java.io.IOException -> L43
            r4.<init>(r0, r3, r2)     // Catch: java.io.IOException -> L43
            int r0 = r4.mFieldId     // Catch: java.io.IOException -> L43
            if (r0 != r6) goto L3b
            java.io.DataInputStream r6 = r4.mInputStream     // Catch: java.io.IOException -> L43
            r5.mCurrentInput = r6     // Catch: java.io.IOException -> L43
            return r1
        L3b:
            android.util.SparseArray<androidx.versionedparcelable.VersionedParcelStream$InputBuffer> r0 = r5.mCachedFields     // Catch: java.io.IOException -> L43
            int r2 = r4.mFieldId     // Catch: java.io.IOException -> L43
            r0.put(r2, r4)     // Catch: java.io.IOException -> L43
            goto L15
        L43:
            r6 = 0
            return r6
    }

    @Override
    public float readFloat() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L7
            float r0 = r0.readFloat()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public int readInt() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L7
            int r0 = r0.readInt()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public long readLong() {
            r2 = this;
            java.io.DataInputStream r0 = r2.mCurrentInput     // Catch: java.io.IOException -> L7
            long r0 = r0.readLong()     // Catch: java.io.IOException -> L7
            return r0
        L7:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public <T extends android.os.Parcelable> T readParcelable() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public java.lang.String readString() {
            r3 = this;
            java.io.DataInputStream r0 = r3.mCurrentInput     // Catch: java.io.IOException -> L19
            int r0 = r0.readInt()     // Catch: java.io.IOException -> L19
            if (r0 <= 0) goto L17
            byte[] r0 = new byte[r0]     // Catch: java.io.IOException -> L19
            java.io.DataInputStream r1 = r3.mCurrentInput     // Catch: java.io.IOException -> L19
            r1.readFully(r0)     // Catch: java.io.IOException -> L19
            java.lang.String r1 = new java.lang.String     // Catch: java.io.IOException -> L19
            java.nio.charset.Charset r2 = androidx.versionedparcelable.VersionedParcelStream.UTF_16     // Catch: java.io.IOException -> L19
            r1.<init>(r0, r2)     // Catch: java.io.IOException -> L19
            return r1
        L17:
            r0 = 0
            return r0
        L19:
            r0 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r1 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r1.<init>(r0)
            throw r1
    }

    @Override
    public android.os.IBinder readStrongBinder() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void setOutputField(int r3) {
            r2 = this;
            r2.closeField()
            androidx.versionedparcelable.VersionedParcelStream$FieldBuffer r0 = new androidx.versionedparcelable.VersionedParcelStream$FieldBuffer
            java.io.DataOutputStream r1 = r2.mMasterOutput
            r0.<init>(r3, r1)
            r2.mFieldBuffer = r0
            java.io.DataOutputStream r3 = r0.mDataStream
            r2.mCurrentOutput = r3
            return
    }

    @Override
    public void setSerializationFlags(boolean r1, boolean r2) {
            r0 = this;
            if (r1 == 0) goto L5
            r0.mIgnoreParcelables = r2
            return
        L5:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Serialization of this object is not allowed"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public void writeBoolean(boolean r2) {
            r1 = this;
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L6
            r0.writeBoolean(r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r2)
            throw r0
    }

    @Override
    public void writeBundle(android.os.Bundle r4) {
            r3 = this;
            if (r4 == 0) goto L2a
            java.util.Set r0 = r4.keySet()     // Catch: java.io.IOException -> L31
            java.io.DataOutputStream r1 = r3.mCurrentOutput     // Catch: java.io.IOException -> L31
            int r2 = r0.size()     // Catch: java.io.IOException -> L31
            r1.writeInt(r2)     // Catch: java.io.IOException -> L31
            java.util.Iterator r0 = r0.iterator()     // Catch: java.io.IOException -> L31
        L13:
            boolean r1 = r0.hasNext()     // Catch: java.io.IOException -> L31
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.io.IOException -> L31
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.io.IOException -> L31
            r3.writeString(r1)     // Catch: java.io.IOException -> L31
            java.lang.Object r1 = r4.get(r1)     // Catch: java.io.IOException -> L31
            r3.writeObject(r1)     // Catch: java.io.IOException -> L31
            goto L13
        L2a:
            java.io.DataOutputStream r4 = r3.mCurrentOutput     // Catch: java.io.IOException -> L31
            r0 = -1
            r4.writeInt(r0)     // Catch: java.io.IOException -> L31
        L30:
            return
        L31:
            r4 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r4)
            throw r0
    }

    @Override
    public void writeByteArray(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto Le
            java.io.DataOutputStream r0 = r2.mCurrentOutput     // Catch: java.io.IOException -> L15
            int r1 = r3.length     // Catch: java.io.IOException -> L15
            r0.writeInt(r1)     // Catch: java.io.IOException -> L15
            java.io.DataOutputStream r0 = r2.mCurrentOutput     // Catch: java.io.IOException -> L15
            r0.write(r3)     // Catch: java.io.IOException -> L15
            goto L14
        Le:
            java.io.DataOutputStream r3 = r2.mCurrentOutput     // Catch: java.io.IOException -> L15
            r0 = -1
            r3.writeInt(r0)     // Catch: java.io.IOException -> L15
        L14:
            return
        L15:
            r3 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r3)
            throw r0
    }

    @Override
    public void writeByteArray(byte[] r2, int r3, int r4) {
            r1 = this;
            if (r2 == 0) goto Ld
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L14
            r0.writeInt(r4)     // Catch: java.io.IOException -> L14
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L14
            r0.write(r2, r3, r4)     // Catch: java.io.IOException -> L14
            goto L13
        Ld:
            java.io.DataOutputStream r2 = r1.mCurrentOutput     // Catch: java.io.IOException -> L14
            r3 = -1
            r2.writeInt(r3)     // Catch: java.io.IOException -> L14
        L13:
            return
        L14:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r3 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r3.<init>(r2)
            throw r3
    }

    @Override
    public void writeDouble(double r2) {
            r1 = this;
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L6
            r0.writeDouble(r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r3 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r3.<init>(r2)
            throw r3
    }

    @Override
    public void writeFloat(float r2) {
            r1 = this;
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L6
            r0.writeFloat(r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r2)
            throw r0
    }

    @Override
    public void writeInt(int r2) {
            r1 = this;
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L6
            r0.writeInt(r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r2)
            throw r0
    }

    @Override
    public void writeLong(long r2) {
            r1 = this;
            java.io.DataOutputStream r0 = r1.mCurrentOutput     // Catch: java.io.IOException -> L6
            r0.writeLong(r2)     // Catch: java.io.IOException -> L6
            return
        L6:
            r2 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r3 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r3.<init>(r2)
            throw r3
    }

    @Override
    public void writeParcelable(android.os.Parcelable r2) {
            r1 = this;
            boolean r2 = r1.mIgnoreParcelables
            if (r2 == 0) goto L5
            return
        L5:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "Parcelables cannot be written to an OutputStream"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void writeString(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L14
            java.nio.charset.Charset r0 = androidx.versionedparcelable.VersionedParcelStream.UTF_16     // Catch: java.io.IOException -> L1b
            byte[] r3 = r3.getBytes(r0)     // Catch: java.io.IOException -> L1b
            java.io.DataOutputStream r0 = r2.mCurrentOutput     // Catch: java.io.IOException -> L1b
            int r1 = r3.length     // Catch: java.io.IOException -> L1b
            r0.writeInt(r1)     // Catch: java.io.IOException -> L1b
            java.io.DataOutputStream r0 = r2.mCurrentOutput     // Catch: java.io.IOException -> L1b
            r0.write(r3)     // Catch: java.io.IOException -> L1b
            goto L1a
        L14:
            java.io.DataOutputStream r3 = r2.mCurrentOutput     // Catch: java.io.IOException -> L1b
            r0 = -1
            r3.writeInt(r0)     // Catch: java.io.IOException -> L1b
        L1a:
            return
        L1b:
            r3 = move-exception
            androidx.versionedparcelable.VersionedParcel$ParcelException r0 = new androidx.versionedparcelable.VersionedParcel$ParcelException
            r0.<init>(r3)
            throw r0
    }

    @Override
    public void writeStrongBinder(android.os.IBinder r2) {
            r1 = this;
            boolean r2 = r1.mIgnoreParcelables
            if (r2 == 0) goto L5
            return
        L5:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "Binders cannot be written to an OutputStream"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void writeStrongInterface(android.os.IInterface r2) {
            r1 = this;
            boolean r2 = r1.mIgnoreParcelables
            if (r2 == 0) goto L5
            return
        L5:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "Binders cannot be written to an OutputStream"
            r2.<init>(r0)
            throw r2
    }
}
