package androidx.versionedparcelable;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcel;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.util.SparseIntArray;

@RestrictTo({RestrictTo.Scope.LIBRARY})
class VersionedParcelParcel extends VersionedParcel {
    private static final boolean DEBUG = false;
    private static final String TAG = "VersionedParcelParcel";
    private int mCurrentField;
    private final int mEnd;
    private int mNextRead;
    private final int mOffset;
    private final Parcel mParcel;
    private final SparseIntArray mPositionLookup;
    private final String mPrefix;

    VersionedParcelParcel(Parcel r4) {
        this(r4, r4.dataPosition(), r4.dataSize(), "");
    }

    VersionedParcelParcel(Parcel r2, int r3, int r4, String r5) {
        this.mPositionLookup = new SparseIntArray();
        this.mCurrentField = -1;
        this.mNextRead = 0;
        this.mParcel = r2;
        this.mOffset = r3;
        this.mEnd = r4;
        this.mNextRead = this.mOffset;
        this.mPrefix = r5;
    }

    private int readUntilField(int r4) {
    L2:
        int r0 = this.mNextRead;
        if (r0 >= this.mEnd) goto L8;
        this.mParcel.setDataPosition(r0);
        int r02 = this.mParcel.readInt();
        int r1 = this.mParcel.readInt();
        this.mNextRead += r02;
        if (r1 != r4) goto L2;
        return this.mParcel.dataPosition();
    L8:
        return -1;
    }

    @Override
    public boolean readField(int r2) {
        int r22 = readUntilField(r2);
        if (r22 != (-1)) goto L6;
        return false;
    L6:
        this.mParcel.setDataPosition(r22);
        return true;
    }

    @Override
    public void setOutputField(int r3) {
        closeField();
        this.mCurrentField = r3;
        this.mPositionLookup.put(r3, this.mParcel.dataPosition());
        writeInt(0);
        writeInt(r3);
    }

    @Override
    public void closeField() {
        int r0 = this.mCurrentField;
        if (r0 < 0) goto L6;
        int r02 = this.mPositionLookup.get(r0);
        int r1 = this.mParcel.dataPosition();
        int r2 = r1 - r02;
        this.mParcel.setDataPosition(r02);
        this.mParcel.writeInt(r2);
        this.mParcel.setDataPosition(r1);
        return;
    }

    @Override
    protected VersionedParcel createSubParcel() {
        Parcel r1 = this.mParcel;
        int r2 = r1.dataPosition();
        int r3 = this.mNextRead;
        if (r3 != this.mOffset) goto L6;
        r3 = this.mEnd;
    L6:
        return new VersionedParcelParcel(r1, r2, r3, this.mPrefix + "  ");
    }

    @Override
    public void writeByteArray(byte[] r3) {
        if (r3 == null) goto L4;
        this.mParcel.writeInt(r3.length);
        this.mParcel.writeByteArray(r3);
        return;
    L4:
        this.mParcel.writeInt(-1);
    }

    @Override
    public void writeByteArray(byte[] r3, int r4, int r5) {
        if (r3 == null) goto L4;
        this.mParcel.writeInt(r3.length);
        this.mParcel.writeByteArray(r3, r4, r5);
        return;
    L4:
        this.mParcel.writeInt(-1);
    }

    @Override
    public void writeInt(int r2) {
        this.mParcel.writeInt(r2);
    }

    @Override
    public void writeLong(long r2) {
        this.mParcel.writeLong(r2);
    }

    @Override
    public void writeFloat(float r2) {
        this.mParcel.writeFloat(r2);
    }

    @Override
    public void writeDouble(double r2) {
        this.mParcel.writeDouble(r2);
    }

    @Override
    public void writeString(String r2) {
        this.mParcel.writeString(r2);
    }

    @Override
    public void writeStrongBinder(IBinder r2) {
        this.mParcel.writeStrongBinder(r2);
    }

    @Override
    public void writeParcelable(Parcelable r3) {
        this.mParcel.writeParcelable(r3, 0);
    }

    @Override
    public void writeBoolean(boolean r2) {
        this.mParcel.writeInt(r2 ? 1 : 0);
    }

    @Override
    public void writeStrongInterface(IInterface r2) {
        this.mParcel.writeStrongInterface(r2);
    }

    @Override
    public void writeBundle(Bundle r2) {
        this.mParcel.writeBundle(r2);
    }

    @Override
    public int readInt() {
        return this.mParcel.readInt();
    }

    @Override
    public long readLong() {
        return this.mParcel.readLong();
    }

    @Override
    public float readFloat() {
        return this.mParcel.readFloat();
    }

    @Override
    public double readDouble() {
        return this.mParcel.readDouble();
    }

    @Override
    public String readString() {
        return this.mParcel.readString();
    }

    @Override
    public IBinder readStrongBinder() {
        return this.mParcel.readStrongBinder();
    }

    @Override
    public byte[] readByteArray() {
        int r0 = this.mParcel.readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        byte[] r02 = new byte[r0];
        this.mParcel.readByteArray(r02);
        return r02;
    }

    @Override
    public <T extends Parcelable> T readParcelable() {
        return (T) this.mParcel.readParcelable(getClass().getClassLoader());
    }

    @Override
    public Bundle readBundle() {
        return this.mParcel.readBundle(getClass().getClassLoader());
    }

    @Override
    public boolean readBoolean() {
        if (this.mParcel.readInt() == 0) goto L5;
        return true;
    L5:
        return false;
    }
}
