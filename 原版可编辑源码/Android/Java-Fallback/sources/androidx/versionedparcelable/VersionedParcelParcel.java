package androidx.versionedparcelable;

class VersionedParcelParcel extends androidx.versionedparcelable.VersionedParcel {
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "VersionedParcelParcel";
    private int mCurrentField;
    private final int mEnd;
    private int mNextRead;
    private final int mOffset;
    private final android.os.Parcel mParcel;
    private final android.util.SparseIntArray mPositionLookup;
    private final java.lang.String mPrefix;

    VersionedParcelParcel(android.os.Parcel r4) {
            r3 = this;
            int r0 = r4.dataPosition()
            int r1 = r4.dataSize()
            java.lang.String r2 = ""
            r3.<init>(r4, r0, r1, r2)
            return
    }

    VersionedParcelParcel(android.os.Parcel r2, int r3, int r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            r1.mPositionLookup = r0
            r0 = -1
            r1.mCurrentField = r0
            r0 = 0
            r1.mNextRead = r0
            r1.mParcel = r2
            r1.mOffset = r3
            r1.mEnd = r4
            r1.mNextRead = r3
            r1.mPrefix = r5
            return
    }

    private int readUntilField(int r4) {
            r3 = this;
        L0:
            int r0 = r3.mNextRead
            int r1 = r3.mEnd
            if (r0 >= r1) goto L25
            android.os.Parcel r1 = r3.mParcel
            r1.setDataPosition(r0)
            android.os.Parcel r0 = r3.mParcel
            int r0 = r0.readInt()
            android.os.Parcel r1 = r3.mParcel
            int r1 = r1.readInt()
            int r2 = r3.mNextRead
            int r2 = r2 + r0
            r3.mNextRead = r2
            if (r1 != r4) goto L0
            android.os.Parcel r4 = r3.mParcel
            int r4 = r4.dataPosition()
            return r4
        L25:
            r4 = -1
            return r4
    }

    @Override
    public void closeField() {
            r4 = this;
            int r0 = r4.mCurrentField
            if (r0 < 0) goto L21
            android.util.SparseIntArray r1 = r4.mPositionLookup
            int r0 = r1.get(r0)
            android.os.Parcel r1 = r4.mParcel
            int r1 = r1.dataPosition()
            int r2 = r1 - r0
            android.os.Parcel r3 = r4.mParcel
            r3.setDataPosition(r0)
            android.os.Parcel r0 = r4.mParcel
            r0.writeInt(r2)
            android.os.Parcel r0 = r4.mParcel
            r0.setDataPosition(r1)
        L21:
            return
    }

    @Override
    protected androidx.versionedparcelable.VersionedParcel createSubParcel() {
            r6 = this;
            androidx.versionedparcelable.VersionedParcelParcel r0 = new androidx.versionedparcelable.VersionedParcelParcel
            android.os.Parcel r1 = r6.mParcel
            int r2 = r1.dataPosition()
            int r3 = r6.mNextRead
            int r4 = r6.mOffset
            if (r3 != r4) goto L10
            int r3 = r6.mEnd
        L10:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r6.mPrefix
            r4.append(r5)
            java.lang.String r5 = "  "
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    @Override
    public boolean readBoolean() {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            int r0 = r0.readInt()
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    @Override
    public android.os.Bundle readBundle() {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            java.lang.Class r1 = r2.getClass()
            java.lang.ClassLoader r1 = r1.getClassLoader()
            android.os.Bundle r0 = r0.readBundle(r1)
            return r0
    }

    @Override
    public byte[] readByteArray() {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            int r0 = r0.readInt()
            if (r0 >= 0) goto La
            r0 = 0
            return r0
        La:
            byte[] r0 = new byte[r0]
            android.os.Parcel r1 = r2.mParcel
            r1.readByteArray(r0)
            return r0
    }

    @Override
    public double readDouble() {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            double r0 = r0.readDouble()
            return r0
    }

    @Override
    public boolean readField(int r2) {
            r1 = this;
            int r2 = r1.readUntilField(r2)
            r0 = -1
            if (r2 != r0) goto L9
            r2 = 0
            return r2
        L9:
            android.os.Parcel r0 = r1.mParcel
            r0.setDataPosition(r2)
            r2 = 1
            return r2
    }

    @Override
    public float readFloat() {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            float r0 = r0.readFloat()
            return r0
    }

    @Override
    public int readInt() {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            int r0 = r0.readInt()
            return r0
    }

    @Override
    public long readLong() {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            long r0 = r0.readLong()
            return r0
    }

    @Override
    public <T extends android.os.Parcelable> T readParcelable() {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            java.lang.Class r1 = r2.getClass()
            java.lang.ClassLoader r1 = r1.getClassLoader()
            android.os.Parcelable r0 = r0.readParcelable(r1)
            return r0
    }

    @Override
    public java.lang.String readString() {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            java.lang.String r0 = r0.readString()
            return r0
    }

    @Override
    public android.os.IBinder readStrongBinder() {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            android.os.IBinder r0 = r0.readStrongBinder()
            return r0
    }

    @Override
    public void setOutputField(int r3) {
            r2 = this;
            r2.closeField()
            r2.mCurrentField = r3
            android.util.SparseIntArray r0 = r2.mPositionLookup
            android.os.Parcel r1 = r2.mParcel
            int r1 = r1.dataPosition()
            r0.put(r3, r1)
            r0 = 0
            r2.writeInt(r0)
            r2.writeInt(r3)
            return
    }

    @Override
    public void writeBoolean(boolean r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeInt(r2)
            return
    }

    @Override
    public void writeBundle(android.os.Bundle r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeBundle(r2)
            return
    }

    @Override
    public void writeByteArray(byte[] r3) {
            r2 = this;
            if (r3 == 0) goto Le
            android.os.Parcel r0 = r2.mParcel
            int r1 = r3.length
            r0.writeInt(r1)
            android.os.Parcel r0 = r2.mParcel
            r0.writeByteArray(r3)
            goto L14
        Le:
            android.os.Parcel r3 = r2.mParcel
            r0 = -1
            r3.writeInt(r0)
        L14:
            return
    }

    @Override
    public void writeByteArray(byte[] r3, int r4, int r5) {
            r2 = this;
            if (r3 == 0) goto Le
            android.os.Parcel r0 = r2.mParcel
            int r1 = r3.length
            r0.writeInt(r1)
            android.os.Parcel r0 = r2.mParcel
            r0.writeByteArray(r3, r4, r5)
            goto L14
        Le:
            android.os.Parcel r3 = r2.mParcel
            r4 = -1
            r3.writeInt(r4)
        L14:
            return
    }

    @Override
    public void writeDouble(double r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeDouble(r2)
            return
    }

    @Override
    public void writeFloat(float r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeFloat(r2)
            return
    }

    @Override
    public void writeInt(int r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeInt(r2)
            return
    }

    @Override
    public void writeLong(long r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeLong(r2)
            return
    }

    @Override
    public void writeParcelable(android.os.Parcelable r3) {
            r2 = this;
            android.os.Parcel r0 = r2.mParcel
            r1 = 0
            r0.writeParcelable(r3, r1)
            return
    }

    @Override
    public void writeString(java.lang.String r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeString(r2)
            return
    }

    @Override
    public void writeStrongBinder(android.os.IBinder r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeStrongBinder(r2)
            return
    }

    @Override
    public void writeStrongInterface(android.os.IInterface r2) {
            r1 = this;
            android.os.Parcel r0 = r1.mParcel
            r0.writeStrongInterface(r2)
            return
    }
}
