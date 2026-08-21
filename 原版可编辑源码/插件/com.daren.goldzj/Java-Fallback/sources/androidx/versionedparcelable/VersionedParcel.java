package androidx.versionedparcelable;

import android.os.BadParcelableException;
import android.os.Bundle;
import android.os.IBinder;
import android.os.IInterface;
import android.os.NetworkOnMainThreadException;
import android.os.Parcelable;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;
import android.support.annotation.RestrictTo;
import android.support.v4.util.ArraySet;
import android.util.Size;
import android.util.SizeF;
import android.util.SparseBooleanArray;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.lang.reflect.InvocationTargetException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.List;
import java.util.Set;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class VersionedParcel {
    private static final int EX_BAD_PARCELABLE = -2;
    private static final int EX_ILLEGAL_ARGUMENT = -3;
    private static final int EX_ILLEGAL_STATE = -5;
    private static final int EX_NETWORK_MAIN_THREAD = -6;
    private static final int EX_NULL_POINTER = -4;
    private static final int EX_PARCELABLE = -9;
    private static final int EX_SECURITY = -1;
    private static final int EX_UNSUPPORTED_OPERATION = -7;
    private static final String TAG = "VersionedParcel";
    private static final int TYPE_BINDER = 5;
    private static final int TYPE_PARCELABLE = 2;
    private static final int TYPE_SERIALIZABLE = 3;
    private static final int TYPE_STRING = 4;
    private static final int TYPE_VERSIONED_PARCELABLE = 1;

    public static class ParcelException extends RuntimeException {
        public ParcelException(Throwable r1) {
            super(r1);
        }
    }

    protected abstract void closeField();

    protected abstract VersionedParcel createSubParcel();

    public boolean isStream() {
        return false;
    }

    protected abstract boolean readBoolean();

    protected abstract Bundle readBundle();

    protected abstract byte[] readByteArray();

    protected abstract double readDouble();

    protected abstract boolean readField(int r1);

    protected abstract float readFloat();

    protected abstract int readInt();

    protected abstract long readLong();

    protected abstract <T extends Parcelable> T readParcelable();

    protected abstract String readString();

    protected abstract IBinder readStrongBinder();

    protected abstract void setOutputField(int r1);

    public void setSerializationFlags(boolean r1, boolean r2) {
    }

    protected abstract void writeBoolean(boolean r1);

    protected abstract void writeBundle(Bundle r1);

    protected abstract void writeByteArray(byte[] r1);

    protected abstract void writeByteArray(byte[] r1, int r2, int r3);

    protected abstract void writeDouble(double r1);

    protected abstract void writeFloat(float r1);

    protected abstract void writeInt(int r1);

    protected abstract void writeLong(long r1);

    protected abstract void writeParcelable(Parcelable r1);

    protected abstract void writeString(String r1);

    protected abstract void writeStrongBinder(IBinder r1);

    protected abstract void writeStrongInterface(IInterface r1);

    public VersionedParcel() {
    }

    public void writeStrongInterface(IInterface r1, int r2) {
        setOutputField(r2);
        writeStrongInterface(r1);
    }

    public void writeBundle(Bundle r1, int r2) {
        setOutputField(r2);
        writeBundle(r1);
    }

    public void writeBoolean(boolean r1, int r2) {
        setOutputField(r2);
        writeBoolean(r1);
    }

    public void writeByteArray(byte[] r1, int r2) {
        setOutputField(r2);
        writeByteArray(r1);
    }

    public void writeByteArray(byte[] r1, int r2, int r3, int r4) {
        setOutputField(r4);
        writeByteArray(r1, r2, r3);
    }

    public void writeInt(int r1, int r2) {
        setOutputField(r2);
        writeInt(r1);
    }

    public void writeLong(long r1, int r3) {
        setOutputField(r3);
        writeLong(r1);
    }

    public void writeFloat(float r1, int r2) {
        setOutputField(r2);
        writeFloat(r1);
    }

    public void writeDouble(double r1, int r3) {
        setOutputField(r3);
        writeDouble(r1);
    }

    public void writeString(String r1, int r2) {
        setOutputField(r2);
        writeString(r1);
    }

    public void writeStrongBinder(IBinder r1, int r2) {
        setOutputField(r2);
        writeStrongBinder(r1);
    }

    public void writeParcelable(Parcelable r1, int r2) {
        setOutputField(r2);
        writeParcelable(r1);
    }

    public boolean readBoolean(boolean r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readBoolean();
    }

    public int readInt(int r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readInt();
    }

    public long readLong(long r1, int r3) {
        if (readField(r3) == true) goto L6;
        return r1;
    L6:
        return readLong();
    }

    public float readFloat(float r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readFloat();
    }

    public double readDouble(double r1, int r3) {
        if (readField(r3) == true) goto L6;
        return r1;
    L6:
        return readDouble();
    }

    public String readString(String r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readString();
    }

    public IBinder readStrongBinder(IBinder r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readStrongBinder();
    }

    public byte[] readByteArray(byte[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readByteArray();
    }

    public <T extends Parcelable> T readParcelable(T r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return (T) readParcelable();
    }

    public Bundle readBundle(Bundle r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readBundle();
    }

    public void writeByte(byte r1, int r2) {
        setOutputField(r2);
        writeInt(r1);
    }

    @RequiresApi(api = 21)
    public void writeSize(Size r1, int r2) {
        setOutputField(r2);
        if (r1 == null) goto L5;
        boolean r22 = true;
    L6:
        writeBoolean(r22);
        if (r1 == null) goto L10;
        writeInt(r1.getWidth());
        writeInt(r1.getHeight());
        return;
    L10:
        return;
    L5:
        r22 = false;
        goto L6
    }

    @RequiresApi(api = 21)
    public void writeSizeF(SizeF r1, int r2) {
        setOutputField(r2);
        if (r1 == null) goto L5;
        boolean r22 = true;
    L6:
        writeBoolean(r22);
        if (r1 == null) goto L10;
        writeFloat(r1.getWidth());
        writeFloat(r1.getHeight());
        return;
    L10:
        return;
    L5:
        r22 = false;
        goto L6
    }

    public void writeSparseBooleanArray(SparseBooleanArray r3, int r4) {
        setOutputField(r4);
        if (r3 != null) goto L6;
        writeInt(-1);
        return;
    L6:
        int r42 = r3.size();
        writeInt(r42);
        int r0 = 0;
    L7:
        if (r0 >= r42) goto L9;
        writeInt(r3.keyAt(r0));
        writeBoolean(r3.valueAt(r0));
        r0 = r0 + 1;
        goto L7
    }

    public void writeBooleanArray(boolean[] r1, int r2) {
        setOutputField(r2);
        writeBooleanArray(r1);
    }

    protected void writeBooleanArray(boolean[] r4) {
        if (r4 == null) goto L6;
        int r0 = r4.length;
        writeInt(r0);
        int r1 = 0;
    L4:
        if (r1 >= r0) goto L9;
        writeInt(r4[r1] ? 1 : 0);
        r1 = r1 + 1;
        goto L4
    L9:
        return;
    L6:
        writeInt(-1);
    }

    public boolean[] readBooleanArray(boolean[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readBooleanArray();
    }

    protected boolean[] readBooleanArray() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        boolean[] r1 = new boolean[r0];
        int r3 = 0;
    L7:
        if (r3 >= r0) goto L13;
        if (readInt() == 0) goto L11;
        boolean r4 = true;
    L12:
        r1[r3] = r4;
        r3 = r3 + 1;
        goto L7
    L11:
        r4 = false;
        goto L12
    L13:
        return r1;
    }

    public void writeCharArray(char[] r3, int r4) {
        setOutputField(r4);
        if (r3 == null) goto L7;
        int r42 = r3.length;
        writeInt(r42);
        int r0 = 0;
    L5:
        if (r0 >= r42) goto L10;
        writeInt(r3[r0]);
        r0 = r0 + 1;
        goto L5
    L10:
        return;
    L7:
        writeInt(-1);
    }

    public char[] readCharArray(char[] r3, int r4) {
        if (readField(r4) == true) goto L5;
        return r3;
    L5:
        int r32 = readInt();
        if (r32 >= 0) goto L9;
        return null;
    L9:
        char[] r42 = new char[r32];
        int r0 = 0;
    L10:
        if (r0 >= r32) goto L12;
        r42[r0] = (char) readInt();
        r0 = r0 + 1;
        goto L10
    L12:
        return r42;
    }

    public void writeIntArray(int[] r1, int r2) {
        setOutputField(r2);
        writeIntArray(r1);
    }

    protected void writeIntArray(int[] r4) {
        if (r4 == null) goto L6;
        int r0 = r4.length;
        writeInt(r0);
        int r1 = 0;
    L4:
        if (r1 >= r0) goto L9;
        writeInt(r4[r1]);
        r1 = r1 + 1;
        goto L4
    L9:
        return;
    L6:
        writeInt(-1);
    }

    public int[] readIntArray(int[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readIntArray();
    }

    protected int[] readIntArray() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        int[] r1 = new int[r0];
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        r1[r2] = readInt();
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    public void writeLongArray(long[] r1, int r2) {
        setOutputField(r2);
        writeLongArray(r1);
    }

    protected void writeLongArray(long[] r5) {
        if (r5 == null) goto L6;
        int r0 = r5.length;
        writeInt(r0);
        int r1 = 0;
    L4:
        if (r1 >= r0) goto L9;
        writeLong(r5[r1]);
        r1 = r1 + 1;
        goto L4
    L9:
        return;
    L6:
        writeInt(-1);
    }

    public long[] readLongArray(long[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readLongArray();
    }

    protected long[] readLongArray() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        long[] r1 = new long[r0];
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        r1[r2] = readLong();
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    public void writeFloatArray(float[] r1, int r2) {
        setOutputField(r2);
        writeFloatArray(r1);
    }

    protected void writeFloatArray(float[] r4) {
        if (r4 == null) goto L6;
        int r0 = r4.length;
        writeInt(r0);
        int r1 = 0;
    L4:
        if (r1 >= r0) goto L9;
        writeFloat(r4[r1]);
        r1 = r1 + 1;
        goto L4
    L9:
        return;
    L6:
        writeInt(-1);
    }

    public float[] readFloatArray(float[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readFloatArray();
    }

    protected float[] readFloatArray() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        float[] r1 = new float[r0];
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        r1[r2] = readFloat();
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    public void writeDoubleArray(double[] r1, int r2) {
        setOutputField(r2);
        writeDoubleArray(r1);
    }

    protected void writeDoubleArray(double[] r5) {
        if (r5 == null) goto L6;
        int r0 = r5.length;
        writeInt(r0);
        int r1 = 0;
    L4:
        if (r1 >= r0) goto L9;
        writeDouble(r5[r1]);
        r1 = r1 + 1;
        goto L4
    L9:
        return;
    L6:
        writeInt(-1);
    }

    public double[] readDoubleArray(double[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return readDoubleArray();
    }

    protected double[] readDoubleArray() {
        int r0 = readInt();
        if (r0 >= 0) goto L6;
        return null;
    L6:
        double[] r1 = new double[r0];
        int r2 = 0;
    L7:
        if (r2 >= r0) goto L9;
        r1[r2] = readDouble();
        r2 = r2 + 1;
        goto L7
    L9:
        return r1;
    }

    public <T> void writeSet(Set<T> r1, int r2) {
        writeCollection(r1, r2);
    }

    public <T> void writeList(List<T> r1, int r2) {
        writeCollection(r1, r2);
    }

    private <T> void writeCollection(Collection<T> r2, int r3) {
        setOutputField(r3);
        if (r2 != null) goto L6;
        writeInt(-1);
        return;
    L6:
        int r32 = r2.size();
        writeInt(r32);
        if (r32 <= 0) goto L39;
        int r33 = getType(r2.iterator().next());
        writeInt(r33);
        if (r33 != 1) goto L11;
        Iterator<T> r22 = r2.iterator();
    L37:
        if (r22.hasNext() == false) goto L50;
        writeVersionedParcelable((VersionedParcelable) r22.next());
        goto L37
    L50:
        return;
    L11:
        if (r33 != 2) goto L13;
        Iterator<T> r23 = r2.iterator();
    L33:
        if (r23.hasNext() == false) goto L49;
        writeParcelable((Parcelable) r23.next());
        goto L33
    L49:
        return;
    L13:
        if (r33 != 3) goto L15;
        Iterator<T> r24 = r2.iterator();
    L29:
        if (r24.hasNext() == false) goto L48;
        writeSerializable((Serializable) r24.next());
        goto L29
    L48:
        return;
    L15:
        if (r33 != 4) goto L17;
        Iterator<T> r25 = r2.iterator();
    L25:
        if (r25.hasNext() == false) goto L47;
        writeString((String) r25.next());
        goto L25
    L47:
        return;
    L17:
        if (r33 != 5) goto L45;
        Iterator<T> r26 = r2.iterator();
    L21:
        if (r26.hasNext() == false) goto L46;
        writeStrongBinder((IBinder) r26.next());
        goto L21
    L46:
        return;
    L45:
        return;
    }

    public <T> void writeArray(T[] r1, int r2) {
        setOutputField(r2);
        writeArray(r1);
    }

    /* JADX WARN: Multi-variable type inference failed */
    protected <T> void writeArray(T[] r5) {
        if (r5 != 0) goto L5;
        writeInt(-1);
        return;
    L5:
        int r0 = r5.length;
        writeInt(r0);
        if (r0 <= 0) goto L28;
        int r1 = 0;
        int r2 = getType(r5[0]);
        writeInt(r2);
        if (r2 != 1) goto L10;
    L26:
        if (r1 >= r0) goto L39;
        writeVersionedParcelable((VersionedParcelable) r5[r1]);
        r1 = r1 + 1;
        goto L26
    L39:
        return;
    L10:
        if (r2 != 2) goto L12;
    L24:
        if (r1 >= r0) goto L38;
        writeParcelable((Parcelable) r5[r1]);
        r1 = r1 + 1;
        goto L24
    L38:
        return;
    L12:
        if (r2 != 3) goto L14;
    L22:
        if (r1 >= r0) goto L37;
        writeSerializable((Serializable) r5[r1]);
        r1 = r1 + 1;
        goto L22
    L37:
        return;
    L14:
        if (r2 != 4) goto L16;
    L20:
        if (r1 >= r0) goto L36;
        writeString((String) r5[r1]);
        r1 = r1 + 1;
        goto L20
    L36:
        return;
    L16:
        if (r2 != 5) goto L34;
    L18:
        if (r1 >= r0) goto L35;
        writeStrongBinder((IBinder) r5[r1]);
        r1 = r1 + 1;
        goto L18
    L35:
        return;
    L34:
        return;
    }

    private <T> int getType(T r3) {
        if ((r3 instanceof String) == false) goto L7;
        return 4;
    L7:
        if ((r3 instanceof Parcelable) == false) goto L11;
        return 2;
    L11:
        if ((r3 instanceof VersionedParcelable) == false) goto L15;
        return 1;
    L15:
        if ((r3 instanceof Serializable) == false) goto L19;
        return 3;
    L19:
        if ((r3 instanceof IBinder) == false) goto L23;
        return 5;
    L23:
        throw new IllegalArgumentException(r3.getClass().getName() + " cannot be VersionedParcelled");
    }

    public void writeVersionedParcelable(VersionedParcelable r1, int r2) {
        setOutputField(r2);
        writeVersionedParcelable(r1);
    }

    protected void writeVersionedParcelable(VersionedParcelable r2) {
        if (r2 != null) goto L5;
        writeString(null);
        return;
    L5:
        writeVersionedParcelableCreator(r2);
        VersionedParcel r0 = createSubParcel();
        writeToParcel(r2, r0);
        r0.closeField();
    }

    private void writeVersionedParcelableCreator(VersionedParcelable r4) {
        writeString(findParcelClass(r4.getClass()).getName());
        return;
    L5:
        e = move-exception;
        throw new RuntimeException(r4.getClass().getSimpleName() + " does not have a Parcelizer", e);
    }

    public void writeSerializable(Serializable r1, int r2) {
        setOutputField(r2);
        writeSerializable(r1);
    }

    private void writeSerializable(Serializable r5) {
        if (r5 != null) goto L5;
        writeString(null);
        return;
    L5:
        String r0 = r5.getClass().getName();
        writeString(r0);
        ByteArrayOutputStream r1 = new ByteArrayOutputStream();
        ObjectOutputStream r2 = new ObjectOutputStream(r1);     // Catch: IOException -> L8
        r2.writeObject(r5);     // Catch: IOException -> L8
        r2.close();     // Catch: IOException -> L8
        writeByteArray(r1.toByteArray());     // Catch: IOException -> L8
        return;
    L8:
        e = move-exception;
        throw new RuntimeException("VersionedParcelable encountered IOException writing serializable object (name = " + r0 + ")", e);
    }

    /* JADX WARN: Multi-variable type inference failed */
    public void writeException(Exception r4, int r5) {
        setOutputField(r5);
        if (r4 != 0) goto L6;
        writeNoException();
        return;
    L6:
        int r52 = 0;
        if ((r4 instanceof Parcelable) == false) goto L12;
        if (r4.getClass().getClassLoader() != Parcelable.class.getClassLoader()) goto L12;
        r52 = EX_PARCELABLE;
    L32:
        writeInt(r52);
        if (r52 == 0) goto L35;
        writeString(r4.getMessage());
        if (r52 != EX_PARCELABLE) goto L45;
        writeParcelable((Parcelable) r4);
        return;
    L45:
        return;
    L35:
        if ((r4 instanceof RuntimeException) == false) goto L39;
        throw ((RuntimeException) r4);
    L39:
        throw new RuntimeException(r4);
    L12:
        if ((r4 instanceof SecurityException) == false) goto L15;
        r52 = -1;
        goto L32
    L15:
        if ((r4 instanceof BadParcelableException) == false) goto L18;
        r52 = -2;
        goto L32
    L18:
        if ((r4 instanceof IllegalArgumentException) == false) goto L21;
        r52 = -3;
        goto L32
    L21:
        if ((r4 instanceof NullPointerException) == false) goto L24;
        r52 = -4;
        goto L32
    L24:
        if ((r4 instanceof IllegalStateException) == false) goto L27;
        r52 = -5;
        goto L32
    L27:
        if ((r4 instanceof NetworkOnMainThreadException) == false) goto L30;
        r52 = EX_NETWORK_MAIN_THREAD;
        goto L32
    L30:
        if ((r4 instanceof UnsupportedOperationException) == false) goto L32;
        r52 = EX_UNSUPPORTED_OPERATION;
        goto L32
    }

    protected void writeNoException() {
        writeInt(0);
    }

    public Exception readException(Exception r1, int r2) {
        if (readField(r2) == true) goto L5;
        return r1;
    L5:
        int r22 = readExceptionCode();
        if (r22 != 0) goto L8;
        return r1;
    L8:
        return readException(r22, readString());
    }

    private int readExceptionCode() {
        return readInt();
    }

    private Exception readException(int r1, String r2) {
        return createException(r1, r2);
    }

    @NonNull
    protected static Throwable getRootCause(@NonNull Throwable r1) {
    L3:
        if (r1.getCause() == null) goto L5;
        r1 = r1.getCause();
        goto L3
    L5:
        return r1;
    }

    private Exception createException(int r4, String r5) {
        switch(r4) {
            case -9: goto L20;
            case -8: goto L4;
            case -7: goto L18;
            case -6: goto L16;
            case -5: goto L14;
            case -4: goto L12;
            case -3: goto L10;
            case -2: goto L8;
            case -1: goto L6;
            default: goto L4;
        };
    L4:
        return new RuntimeException("Unknown exception code: " + r4 + " msg " + r5);
    L6:
        return new SecurityException(r5);
    L8:
        return new BadParcelableException(r5);
    L10:
        return new IllegalArgumentException(r5);
    L12:
        return new NullPointerException(r5);
    L14:
        return new IllegalStateException(r5);
    L16:
        return new NetworkOnMainThreadException();
    L18:
        return new UnsupportedOperationException(r5);
    L20:
        return (Exception) readParcelable();
    }

    public byte readByte(byte r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return (byte) (readInt() & 255);
    }

    @RequiresApi(api = 21)
    public Size readSize(Size r2, int r3) {
        if (readField(r3) == true) goto L6;
        return r2;
    L6:
        if (readBoolean() == true) goto L8;
        return null;
    L8:
        return new Size(readInt(), readInt());
    }

    @RequiresApi(api = 21)
    public SizeF readSizeF(SizeF r2, int r3) {
        if (readField(r3) == true) goto L6;
        return r2;
    L6:
        if (readBoolean() == true) goto L8;
        return null;
    L8:
        return new SizeF(readFloat(), readFloat());
    }

    public SparseBooleanArray readSparseBooleanArray(SparseBooleanArray r4, int r5) {
        if (readField(r5) == true) goto L5;
        return r4;
    L5:
        int r42 = readInt();
        if (r42 >= 0) goto L9;
        return null;
    L9:
        SparseBooleanArray r52 = new SparseBooleanArray(r42);
        int r0 = 0;
    L10:
        if (r0 >= r42) goto L12;
        r52.put(readInt(), readBoolean());
        r0 = r0 + 1;
        goto L10
    L12:
        return r52;
    }

    public <T> Set<T> readSet(Set<T> r2, int r3) {
        if (readField(r3) == true) goto L6;
        return r2;
    L6:
        return (Set) readCollection(r3, new ArraySet());
    }

    public <T> List<T> readList(List<T> r2, int r3) {
        if (readField(r3) == true) goto L6;
        return r2;
    L6:
        return (List) readCollection(r3, new ArrayList());
    }

    private <T, S extends Collection<T>> S readCollection(int r3, S r4) {
        int r32 = readInt();
        if (r32 >= 0) goto L5;
        return null;
    L5:
        if (r32 == 0) goto L30;
        int r1 = readInt();
        if (r32 >= 0) goto L10;
        return null;
    L10:
        if (r1 != 1) goto L12;
    L28:
        if (r32 <= 0) goto L30;
        r4.add(readVersionedParcelable());
        r32 = r32 - 1;
        goto L28
    L12:
        if (r1 != 2) goto L14;
    L26:
        if (r32 <= 0) goto L30;
        r4.add(readParcelable());
        r32 = r32 - 1;
        goto L26
    L14:
        if (r1 != 3) goto L16;
    L24:
        if (r32 <= 0) goto L30;
        r4.add(readSerializable());
        r32 = r32 - 1;
        goto L24
    L16:
        if (r1 != 4) goto L18;
    L22:
        if (r32 <= 0) goto L30;
        r4.add(readString());
        r32 = r32 - 1;
        goto L22
    L18:
        if (r1 != 5) goto L30;
    L20:
        if (r32 <= 0) goto L30;
        r4.add(readStrongBinder());
        r32 = r32 - 1;
    L30:
        return r4;
    }

    public <T> T[] readArray(T[] r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return (T[]) readArray(r1);
    }

    protected <T> T[] readArray(T[] r5) {
        int r0 = readInt();
        if (r0 >= 0) goto L5;
        return null;
    L5:
        ArrayList r2 = new ArrayList(r0);
        if (r0 == 0) goto L32;
        int r3 = readInt();
        if (r0 >= 0) goto L11;
        return null;
    L11:
        if (r3 != 1) goto L13;
    L29:
        if (r0 <= 0) goto L32;
        r2.add(readVersionedParcelable());
        r0 = r0 - 1;
        goto L29
    L13:
        if (r3 != 2) goto L15;
    L27:
        if (r0 <= 0) goto L32;
        r2.add(readParcelable());
        r0 = r0 - 1;
        goto L27
    L15:
        if (r3 != 3) goto L17;
    L25:
        if (r0 <= 0) goto L32;
        r2.add(readSerializable());
        r0 = r0 - 1;
        goto L25
    L17:
        if (r3 != 4) goto L19;
    L23:
        if (r0 <= 0) goto L32;
        r2.add(readString());
        r0 = r0 - 1;
        goto L23
    L19:
        if (r3 != 5) goto L32;
    L21:
        if (r0 <= 0) goto L32;
        r2.add(readStrongBinder());
        r0 = r0 - 1;
    L32:
        return (T[]) r2.toArray(r5);
    }

    public <T extends VersionedParcelable> T readVersionedParcelable(T r1, int r2) {
        if (readField(r2) == true) goto L6;
        return r1;
    L6:
        return (T) readVersionedParcelable();
    }

    protected <T extends VersionedParcelable> T readVersionedParcelable() {
        String r0 = readString();
        if (r0 != null) goto L7;
        return null;
    L7:
        return (T) readFromParcel(r0, createSubParcel());
    }

    protected Serializable readSerializable() {
        String r1 = readString();
        if (r1 != null) goto L6;
        return null;
    L6:
        final ByteArrayInputStream r3 = new ByteArrayInputStream(readByteArray());
        return (Serializable) new 1(this, r3).readObject();
    L12:
        e = move-exception;
        throw new RuntimeException("VersionedParcelable encountered IOException reading a Serializable object (name = " + r1 + ")", e);
    L9:
        e = move-exception;
        throw new RuntimeException("VersionedParcelable encountered ClassNotFoundException reading a Serializable object (name = " + r1 + ")", e);
    }

    protected static <T extends VersionedParcelable> T readFromParcel(String r5, VersionedParcel r6) {
        return (T) Class.forName(r5, true, VersionedParcel.class.getClassLoader()).getDeclaredMethod("read", new Class[]{VersionedParcel.class}).invoke(null, new Object[]{r6});
    L4:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e);
    L17:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e);
    L7:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e);
    L10:
        e = move-exception;
        if ((e.getCause() instanceof RuntimeException) == false) goto L16;
        throw ((RuntimeException) e.getCause());
    L16:
        throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e);
    }

    protected static <T extends VersionedParcelable> void writeToParcel(T r7, VersionedParcel r8) {
        findParcelClass(r7).getDeclaredMethod("write", new Class[]{r7.getClass(), VersionedParcel.class}).invoke(null, new Object[]{r7, r8});     // Catch: ClassNotFoundException -> L4 NoSuchMethodException -> L7 InvocationTargetException -> L10 IllegalAccessException -> L17
        return;
    L4:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered ClassNotFoundException", e);
    L17:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered IllegalAccessException", e);
    L7:
        e = move-exception;
        throw new RuntimeException("VersionedParcel encountered NoSuchMethodException", e);
    L10:
        e = move-exception;
        if ((e.getCause() instanceof RuntimeException) == false) goto L16;
        throw ((RuntimeException) e.getCause());
    L16:
        throw new RuntimeException("VersionedParcel encountered InvocationTargetException", e);
    }

    private static <T extends VersionedParcelable> Class findParcelClass(T r0) throws ClassNotFoundException {
        return findParcelClass(r0.getClass());
    }

    private static Class findParcelClass(Class<? extends VersionedParcelable> r4) throws ClassNotFoundException {
        return Class.forName(String.format("%s.%sParcelizer", new Object[]{r4.getPackage().getName(), r4.getSimpleName()}), false, r4.getClassLoader());
    }
}
