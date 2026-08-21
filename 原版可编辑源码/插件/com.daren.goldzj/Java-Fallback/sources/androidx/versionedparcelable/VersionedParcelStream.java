package androidx.versionedparcelable;

import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.Parcelable;
import android.support.annotation.RestrictTo;
import android.support.v4.internal.view.SupportMenu;
import android.util.SparseArray;
import androidx.versionedparcelable.VersionedParcel;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.Charset;
import java.util.Iterator;
import java.util.Set;

@RestrictTo({RestrictTo.Scope.LIBRARY})
class VersionedParcelStream extends VersionedParcel {
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
    private static final Charset UTF_16 = null;
    private final SparseArray<InputBuffer> mCachedFields;
    private DataInputStream mCurrentInput;
    private DataOutputStream mCurrentOutput;
    private FieldBuffer mFieldBuffer;
    private boolean mIgnoreParcelables;
    private final DataInputStream mMasterInput;
    private final DataOutputStream mMasterOutput;

    private static class FieldBuffer {
        final DataOutputStream mDataStream;
        private final int mFieldId;
        final ByteArrayOutputStream mOutput;
        private final DataOutputStream mTarget;

        FieldBuffer(int r3, DataOutputStream r4) {
            this.mOutput = new ByteArrayOutputStream();
            this.mDataStream = new DataOutputStream(this.mOutput);
            this.mFieldId = r3;
            this.mTarget = r4;
        }

        void flushField() throws IOException {
            this.mDataStream.flush();
            int r0 = this.mOutput.size();
            int r1 = this.mFieldId << 16;
            if (r0 < 65535) goto L5;
            int r3 = SupportMenu.USER_MASK;
        L6:
            int r12 = r1 | r3;
            this.mTarget.writeInt(r12);
            if (r0 < 65535) goto L9;
            this.mTarget.writeInt(r0);
        L9:
            this.mOutput.writeTo(this.mTarget);
            return;
        L5:
            r3 = r0;
            goto L6
        }
    }

    private static class InputBuffer {
        final int mFieldId;
        final DataInputStream mInputStream;
        private final int mSize;

        InputBuffer(int r1, int r2, DataInputStream r3) throws IOException {
            this.mSize = r2;
            this.mFieldId = r1;
            byte[] r12 = new byte[this.mSize];
            r3.readFully(r12);
            this.mInputStream = new DataInputStream(new ByteArrayInputStream(r12));
        }
    }

    @Override
    public boolean isStream() {
        return true;
    }

    @Override
    public <T extends Parcelable> T readParcelable() {
        return null;
    }

    @Override
    public IBinder readStrongBinder() {
        return null;
    }

    static {
        UTF_16 = Charset.forName("UTF-16");
    }

    public VersionedParcelStream(InputStream r3, OutputStream r4) {
        this.mCachedFields = new SparseArray();
        DataOutputStream r0 = null;
        if (r3 == null) goto L5;
        DataInputStream r1 = new DataInputStream(r3);
    L6:
        this.mMasterInput = r1;
        if (r4 == null) goto L9;
        r0 = new DataOutputStream(r4);
    L9:
        this.mMasterOutput = r0;
        this.mCurrentInput = this.mMasterInput;
        this.mCurrentOutput = this.mMasterOutput;
        return;
    L5:
        r1 = null;
        goto L6
    }

    @Override
    public void setSerializationFlags(boolean r1, boolean r2) {
        if (r1 == false) goto L6;
        this.mIgnoreParcelables = r2;
        return;
    L6:
        throw new RuntimeException("Serialization of this object is not allowed");
    }

    @Override
    public void closeField() {
        FieldBuffer r0 = this.mFieldBuffer;
        if (r0 != null) goto L12;
        return;
    L12:
    L8:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    L5:
        if (r0.mOutput.size() == 0) goto L7;
        this.mFieldBuffer.flushField();     // Catch: IOException -> L8
    L7:
        this.mFieldBuffer = null;
    }

    @Override
    protected VersionedParcel createSubParcel() {
        return new VersionedParcelStream(this.mCurrentInput, this.mCurrentOutput);
    }

    @Override
    public boolean readField(int r6) {
        InputBuffer r0 = this.mCachedFields.get(r6);
        if (r0 == null) goto L17;
        this.mCachedFields.remove(r6);
        this.mCurrentInput = r0.mInputStream;
        return true;
    L17:
        int r02 = this.mMasterInput.readInt();     // Catch: IOException -> L15
        int r3 = r02 & SupportMenu.USER_MASK;     // Catch: IOException -> L15
        if (r3 != 65535) goto L9;
        r3 = this.mMasterInput.readInt();     // Catch: IOException -> L15
    L9:
        InputBuffer r4 = new InputBuffer((r02 >> 16) & SupportMenu.USER_MASK, r3, this.mMasterInput);     // Catch: IOException -> L15
        if (r4.mFieldId == r6) goto L11;
        this.mCachedFields.put(r4.mFieldId, r4);     // Catch: IOException -> L15
        goto L17
    L11:
        this.mCurrentInput = r4.mInputStream;     // Catch: IOException -> L15
        return true;
    L15:
        return false;
    }

    @Override
    public void setOutputField(int r3) {
        closeField();
        this.mFieldBuffer = new FieldBuffer(r3, this.mMasterOutput);
        this.mCurrentOutput = this.mFieldBuffer.mDataStream;
    }

    @Override
    public void writeByteArray(byte[] r3) {
        if (r3 == null) goto L4;
        this.mCurrentOutput.writeInt(r3.length);     // Catch: IOException -> L6
        this.mCurrentOutput.write(r3);     // Catch: IOException -> L6
    L9:
        return;
    L4:
        this.mCurrentOutput.writeInt(-1);     // Catch: IOException -> L6
    L6:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeByteArray(byte[] r2, int r3, int r4) {
        if (r2 == null) goto L4;
        this.mCurrentOutput.writeInt(r4);     // Catch: IOException -> L6
        this.mCurrentOutput.write(r2, r3, r4);     // Catch: IOException -> L6
    L9:
        return;
    L4:
        this.mCurrentOutput.writeInt(-1);     // Catch: IOException -> L6
    L6:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeInt(int r2) {
        this.mCurrentOutput.writeInt(r2);     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeLong(long r2) {
        this.mCurrentOutput.writeLong(r2);     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeFloat(float r2) {
        this.mCurrentOutput.writeFloat(r2);     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeDouble(double r2) {
        this.mCurrentOutput.writeDouble(r2);     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeString(String r3) {
        if (r3 == null) goto L4;
        byte[] r32 = r3.getBytes(UTF_16);     // Catch: IOException -> L6
        this.mCurrentOutput.writeInt(r32.length);     // Catch: IOException -> L6
        this.mCurrentOutput.write(r32);     // Catch: IOException -> L6
    L9:
        return;
    L4:
        this.mCurrentOutput.writeInt(-1);     // Catch: IOException -> L6
    L6:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeBoolean(boolean r2) {
        this.mCurrentOutput.writeBoolean(r2);     // Catch: IOException -> L4
        return;
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeStrongBinder(IBinder r2) {
        if (this.mIgnoreParcelables == false) goto L6;
        return;
    L6:
        throw new RuntimeException("Binders cannot be written to an OutputStream");
    }

    @Override
    public void writeParcelable(Parcelable r2) {
        if (this.mIgnoreParcelables == false) goto L6;
        return;
    L6:
        throw new RuntimeException("Parcelables cannot be written to an OutputStream");
    }

    @Override
    public void writeStrongInterface(IInterface r2) {
        if (this.mIgnoreParcelables == false) goto L6;
        return;
    L6:
        throw new RuntimeException("Binders cannot be written to an OutputStream");
    }

    @Override
    public int readInt() {
        return this.mCurrentInput.readInt();
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public long readLong() {
        return this.mCurrentInput.readLong();
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public float readFloat() {
        return this.mCurrentInput.readFloat();
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public double readDouble() {
        return this.mCurrentInput.readDouble();
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public String readString() {
        int r0 = this.mCurrentInput.readInt();     // Catch: IOException -> L8
        if (r0 <= 0) goto L6;
        byte[] r02 = new byte[r0];     // Catch: IOException -> L8
        this.mCurrentInput.readFully(r02);     // Catch: IOException -> L8
        return new String(r02, UTF_16);
    L6:
        return null;
    L8:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public byte[] readByteArray() {
        int r0 = this.mCurrentInput.readInt();     // Catch: IOException -> L8
        if (r0 <= 0) goto L6;
        byte[] r02 = new byte[r0];     // Catch: IOException -> L8
        this.mCurrentInput.readFully(r02);     // Catch: IOException -> L8
        return r02;
    L6:
        return null;
    L8:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public boolean readBoolean() {
        return this.mCurrentInput.readBoolean();
    L4:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public void writeBundle(Bundle r4) {
        if (r4 == null) goto L7;
        Set<String> r0 = r4.keySet();     // Catch: IOException -> L9
        this.mCurrentOutput.writeInt(r0.size());     // Catch: IOException -> L9
        Iterator<String> r02 = r0.iterator();     // Catch: IOException -> L9
    L5:
        if (r02.hasNext() == false) goto L14;
        String r1 = r02.next();     // Catch: IOException -> L9
        writeString(r1);     // Catch: IOException -> L9
        writeObject(r4.get(r1));     // Catch: IOException -> L9
        goto L5
    L14:
        return;
    L7:
        this.mCurrentOutput.writeInt(-1);     // Catch: IOException -> L9
        return;
    L9:
        e = move-exception;
        throw new VersionedParcel.ParcelException(e);
    }

    @Override
    public Bundle readBundle() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        Bundle r1 = new Bundle();
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        String r3 = readString();
        readObject(readInt(), r3, r1);
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    private void writeObject(Object r4) {
        if (r4 != null) goto L5;
        writeInt(0);
        return;
    L5:
        if ((r4 instanceof Bundle) == false) goto L8;
        writeInt(1);
        writeBundle((Bundle) r4);
        return;
    L8:
        if ((r4 instanceof String) == false) goto L11;
        writeInt(3);
        writeString((String) r4);
        return;
    L11:
        if ((r4 instanceof String[]) == false) goto L14;
        writeInt(4);
        writeArray((String[]) r4);
        return;
    L14:
        if ((r4 instanceof Boolean) == false) goto L17;
        writeInt(5);
        writeBoolean(((Boolean) r4).booleanValue());
        return;
    L17:
        if ((r4 instanceof boolean[]) == false) goto L20;
        writeInt(6);
        writeBooleanArray((boolean[]) r4);
        return;
    L20:
        if ((r4 instanceof Double) == false) goto L23;
        writeInt(7);
        writeDouble(((Double) r4).doubleValue());
        return;
    L23:
        if ((r4 instanceof double[]) == false) goto L26;
        writeInt(8);
        writeDoubleArray((double[]) r4);
        return;
    L26:
        if ((r4 instanceof Integer) == false) goto L29;
        writeInt(9);
        writeInt(((Integer) r4).intValue());
        return;
    L29:
        if ((r4 instanceof int[]) == false) goto L32;
        writeInt(10);
        writeIntArray((int[]) r4);
        return;
    L32:
        if ((r4 instanceof Long) == false) goto L35;
        writeInt(11);
        writeLong(((Long) r4).longValue());
        return;
    L35:
        if ((r4 instanceof long[]) == false) goto L38;
        writeInt(12);
        writeLongArray((long[]) r4);
        return;
    L38:
        if ((r4 instanceof Float) == false) goto L41;
        writeInt(13);
        writeFloat(((Float) r4).floatValue());
        return;
    L41:
        if ((r4 instanceof float[]) == false) goto L45;
        writeInt(14);
        writeFloatArray((float[]) r4);
        return;
    L45:
        throw new IllegalArgumentException("Unsupported type " + r4.getClass());
    }

    private void readObject(int r3, String r4, Bundle r5) {
        switch(r3) {
            case 0: goto L19;
            case 1: goto L18;
            case 2: goto L17;
            case 3: goto L16;
            case 4: goto L15;
            case 5: goto L14;
            case 6: goto L13;
            case 7: goto L12;
            case 8: goto L11;
            case 9: goto L10;
            case 10: goto L9;
            case 11: goto L8;
            case 12: goto L7;
            case 13: goto L6;
            case 14: goto L5;
            default: goto L4;
        };
    L5:
        r5.putFloatArray(r4, readFloatArray());
        return;
    L6:
        r5.putFloat(r4, readFloat());
        return;
    L7:
        r5.putLongArray(r4, readLongArray());
        return;
    L8:
        r5.putLong(r4, readLong());
        return;
    L9:
        r5.putIntArray(r4, readIntArray());
        return;
    L10:
        r5.putInt(r4, readInt());
        return;
    L11:
        r5.putDoubleArray(r4, readDoubleArray());
        return;
    L12:
        r5.putDouble(r4, readDouble());
        return;
    L13:
        r5.putBooleanArray(r4, readBooleanArray());
        return;
    L14:
        r5.putBoolean(r4, readBoolean());
        return;
    L15:
        r5.putStringArray(r4, (String[]) readArray(new String[0]));
        return;
    L16:
        r5.putString(r4, readString());
        return;
    L17:
        r5.putBundle(r4, readBundle());
        return;
    L18:
        r5.putBundle(r4, readBundle());
        return;
    L19:
        r5.putParcelable(r4, null);
        return;
    L4:
        throw new RuntimeException("Unknown type " + r3);
    }
}
