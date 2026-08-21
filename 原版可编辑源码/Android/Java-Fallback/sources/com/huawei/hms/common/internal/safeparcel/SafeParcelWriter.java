package com.huawei.hms.common.internal.safeparcel;

public class SafeParcelWriter {
    private static final int BIT16_MARK = 65535;
    private static final int FIELD_ID_CHECKER = 20293;
    private static final int NEGATIVE_MARK = -65536;
    private static final int OFFSET16 = 16;

    private SafeParcelWriter() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int beginObjectHeader(android.os.Parcel r1) {
            r0 = 20293(0x4f45, float:2.8437E-41)
            int r1 = getStartPosition(r1, r0)
            return r1
    }

    public static void finishObjectHeader(android.os.Parcel r0, int r1) {
            handleDataOver(r0, r1)
            return
    }

    private static int getStartPosition(android.os.Parcel r1, int r2) {
            r0 = -65536(0xffffffffffff0000, float:NaN)
            r2 = r2 | r0
            r1.writeInt(r2)
            r2 = 0
            r1.writeInt(r2)
            int r1 = r1.dataPosition()
            return r1
    }

    private static void handleDataOver(android.os.Parcel r2, int r3) {
            int r0 = r2.dataPosition()
            int r1 = r0 - r3
            int r3 = r3 + (-4)
            r2.setDataPosition(r3)
            r2.writeInt(r1)
            r2.setDataPosition(r0)
            return
    }

    private static void setHeader(android.os.Parcel r1, int r2, int r3) {
            r0 = 65535(0xffff, float:9.1834E-41)
            if (r3 < r0) goto Lf
            r0 = -65536(0xffffffffffff0000, float:NaN)
            r2 = r2 | r0
            r1.writeInt(r2)
            r1.writeInt(r3)
            return
        Lf:
            int r3 = r3 << 16
            r2 = r2 | r3
            r1.writeInt(r2)
            return
    }

    private static <P extends android.os.Parcelable> void setSizeOfData(android.os.Parcel r2, P r3, int r4) {
            int r0 = r2.dataPosition()
            r1 = 1
            r2.writeInt(r1)
            int r1 = r2.dataPosition()
            r3.writeToParcel(r2, r4)
            int r3 = r2.dataPosition()
            r2.setDataPosition(r0)
            int r4 = r3 - r1
            r2.writeInt(r4)
            r2.setDataPosition(r3)
            return
    }

    public static void writeBigDecimal(android.os.Parcel r0, int r1, java.math.BigDecimal r2, boolean r3) {
            if (r2 == 0) goto L1c
            int r1 = getStartPosition(r0, r1)
            java.math.BigInteger r3 = r2.unscaledValue()
            byte[] r3 = r3.toByteArray()
            r0.writeByteArray(r3)
            int r2 = r2.scale()
            r0.writeInt(r2)
            handleDataOver(r0, r1)
            goto L22
        L1c:
            if (r3 == 0) goto L22
            r2 = 0
            setHeader(r0, r1, r2)
        L22:
            return
    }

    public static void writeBigDecimalArray(android.os.Parcel r2, int r3, java.math.BigDecimal[] r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L2a
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.length
            r2.writeInt(r5)
        Lb:
            if (r0 >= r5) goto L26
            r1 = r4[r0]
            java.math.BigInteger r1 = r1.unscaledValue()
            byte[] r1 = r1.toByteArray()
            r2.writeByteArray(r1)
            r1 = r4[r0]
            int r1 = r1.scale()
            r2.writeInt(r1)
            int r0 = r0 + 1
            goto Lb
        L26:
            handleDataOver(r2, r3)
            goto L2f
        L2a:
            if (r5 == 0) goto L2f
            setHeader(r2, r3, r0)
        L2f:
            return
    }

    public static void writeBigInteger(android.os.Parcel r0, int r1, java.math.BigInteger r2, boolean r3) {
            if (r2 == 0) goto L11
            int r1 = getStartPosition(r0, r1)
            byte[] r2 = r2.toByteArray()
            r0.writeByteArray(r2)
            handleDataOver(r0, r1)
            goto L17
        L11:
            if (r3 == 0) goto L17
            r2 = 0
            setHeader(r0, r1, r2)
        L17:
            return
    }

    public static void writeBigIntegerArray(android.os.Parcel r2, int r3, java.math.BigInteger[] r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L1d
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.length
            r2.writeInt(r5)
        Lb:
            if (r0 >= r5) goto L19
            r1 = r4[r0]
            byte[] r1 = r1.toByteArray()
            r2.writeByteArray(r1)
            int r0 = r0 + 1
            goto Lb
        L19:
            handleDataOver(r2, r3)
            goto L22
        L1d:
            if (r5 == 0) goto L22
            setHeader(r2, r3, r0)
        L22:
            return
    }

    public static void writeBoolean(android.os.Parcel r1, int r2, boolean r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            if (r3 == 0) goto Lb
            r2 = 1
            r1.writeInt(r2)
            goto Lf
        Lb:
            r2 = 0
            r1.writeInt(r2)
        Lf:
            return
    }

    public static void writeBooleanArray(android.os.Parcel r0, int r1, boolean[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeBooleanArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeBooleanList(android.os.Parcel r2, int r3, java.util.List<java.lang.Boolean> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L24
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L20
            java.lang.Object r1 = r4.get(r0)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            r2.writeInt(r1)
            int r0 = r0 + 1
            goto Le
        L20:
            handleDataOver(r2, r3)
            goto L29
        L24:
            if (r5 == 0) goto L29
            setHeader(r2, r3, r0)
        L29:
            return
    }

    public static void writeBooleanObject(android.os.Parcel r0, int r1, java.lang.Boolean r2, boolean r3) {
            if (r2 == 0) goto Le
            r3 = 4
            setHeader(r0, r1, r3)
            boolean r1 = r2.booleanValue()
            r0.writeInt(r1)
            goto L14
        Le:
            if (r3 == 0) goto L14
            r2 = 0
            setHeader(r0, r1, r2)
        L14:
            return
    }

    public static void writeBundle(android.os.Parcel r0, int r1, android.os.Bundle r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeBundle(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeByte(android.os.Parcel r1, int r2, byte r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            r1.writeInt(r3)
            return
    }

    public static void writeByteArray(android.os.Parcel r0, int r1, byte[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeByteArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeByteArrayArray(android.os.Parcel r2, int r3, byte[][] r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L19
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.length
            r2.writeInt(r5)
        Lb:
            if (r0 >= r5) goto L15
            r1 = r4[r0]
            r2.writeByteArray(r1)
            int r0 = r0 + 1
            goto Lb
        L15:
            handleDataOver(r2, r3)
            goto L1e
        L19:
            if (r5 == 0) goto L1e
            setHeader(r2, r3, r0)
        L1e:
            return
    }

    public static void writeByteArraySparseArray(android.os.Parcel r2, int r3, android.util.SparseArray<byte[]> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L27
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L23
            int r1 = r4.keyAt(r0)
            r2.writeInt(r1)
            java.lang.Object r1 = r4.valueAt(r0)
            byte[] r1 = (byte[]) r1
            r2.writeByteArray(r1)
            int r0 = r0 + 1
            goto Le
        L23:
            handleDataOver(r2, r3)
            goto L2c
        L27:
            if (r5 == 0) goto L2c
            setHeader(r2, r3, r0)
        L2c:
            return
    }

    public static void writeChar(android.os.Parcel r1, int r2, char r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            r1.writeInt(r3)
            return
    }

    public static void writeCharArray(android.os.Parcel r0, int r1, char[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeCharArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeDouble(android.os.Parcel r1, int r2, double r3) {
            r0 = 8
            setHeader(r1, r2, r0)
            r1.writeDouble(r3)
            return
    }

    public static void writeDoubleArray(android.os.Parcel r0, int r1, double[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeDoubleArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeDoubleList(android.os.Parcel r3, int r4, java.util.List<java.lang.Double> r5, boolean r6) {
            r0 = 0
            if (r5 == 0) goto L24
            int r4 = getStartPosition(r3, r4)
            int r6 = r5.size()
            r3.writeInt(r6)
        Le:
            if (r0 >= r6) goto L20
            java.lang.Object r1 = r5.get(r0)
            java.lang.Double r1 = (java.lang.Double) r1
            double r1 = r1.doubleValue()
            r3.writeDouble(r1)
            int r0 = r0 + 1
            goto Le
        L20:
            handleDataOver(r3, r4)
            goto L29
        L24:
            if (r6 == 0) goto L29
            setHeader(r3, r4, r0)
        L29:
            return
    }

    public static void writeDoubleObject(android.os.Parcel r0, int r1, java.lang.Double r2, boolean r3) {
            if (r2 == 0) goto Lf
            r3 = 8
            setHeader(r0, r1, r3)
            double r1 = r2.doubleValue()
            r0.writeDouble(r1)
            goto L15
        Lf:
            if (r3 == 0) goto L15
            r2 = 0
            setHeader(r0, r1, r2)
        L15:
            return
    }

    public static void writeDoubleSparseArray(android.os.Parcel r3, int r4, android.util.SparseArray<java.lang.Double> r5, boolean r6) {
            r0 = 0
            if (r5 == 0) goto L2b
            int r4 = getStartPosition(r3, r4)
            int r6 = r5.size()
            r3.writeInt(r6)
        Le:
            if (r0 >= r6) goto L27
            int r1 = r5.keyAt(r0)
            r3.writeInt(r1)
            java.lang.Object r1 = r5.valueAt(r0)
            java.lang.Double r1 = (java.lang.Double) r1
            double r1 = r1.doubleValue()
            r3.writeDouble(r1)
            int r0 = r0 + 1
            goto Le
        L27:
            handleDataOver(r3, r4)
            goto L30
        L2b:
            if (r6 == 0) goto L30
            setHeader(r3, r4, r0)
        L30:
            return
    }

    public static void writeFloat(android.os.Parcel r1, int r2, float r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            r1.writeFloat(r3)
            return
    }

    public static void writeFloatArray(android.os.Parcel r0, int r1, float[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeFloatArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeFloatList(android.os.Parcel r2, int r3, java.util.List<java.lang.Float> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L24
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L20
            java.lang.Object r1 = r4.get(r0)
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            r2.writeFloat(r1)
            int r0 = r0 + 1
            goto Le
        L20:
            handleDataOver(r2, r3)
            goto L29
        L24:
            if (r5 == 0) goto L29
            setHeader(r2, r3, r0)
        L29:
            return
    }

    public static void writeFloatObject(android.os.Parcel r0, int r1, java.lang.Float r2, boolean r3) {
            if (r2 == 0) goto Le
            r3 = 4
            setHeader(r0, r1, r3)
            float r1 = r2.floatValue()
            r0.writeFloat(r1)
            goto L14
        Le:
            if (r3 == 0) goto L14
            r2 = 0
            setHeader(r0, r1, r2)
        L14:
            return
    }

    public static void writeFloatSparseArray(android.os.Parcel r2, int r3, android.util.SparseArray<java.lang.Float> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L2b
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L27
            int r1 = r4.keyAt(r0)
            r2.writeInt(r1)
            java.lang.Object r1 = r4.valueAt(r0)
            java.lang.Float r1 = (java.lang.Float) r1
            float r1 = r1.floatValue()
            r2.writeFloat(r1)
            int r0 = r0 + 1
            goto Le
        L27:
            handleDataOver(r2, r3)
            goto L30
        L2b:
            if (r5 == 0) goto L30
            setHeader(r2, r3, r0)
        L30:
            return
    }

    public static void writeIBinder(android.os.Parcel r0, int r1, android.os.IBinder r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeStrongBinder(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeIBinderArray(android.os.Parcel r0, int r1, android.os.IBinder[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeBinderArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeIBinderList(android.os.Parcel r0, int r1, java.util.List<android.os.IBinder> r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeBinderList(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeIBinderSparseArray(android.os.Parcel r2, int r3, android.util.SparseArray<android.os.IBinder> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L27
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L23
            int r1 = r4.keyAt(r0)
            r2.writeInt(r1)
            java.lang.Object r1 = r4.valueAt(r0)
            android.os.IBinder r1 = (android.os.IBinder) r1
            r2.writeStrongBinder(r1)
            int r0 = r0 + 1
            goto Le
        L23:
            handleDataOver(r2, r3)
            goto L2c
        L27:
            if (r5 == 0) goto L2c
            setHeader(r2, r3, r0)
        L2c:
            return
    }

    public static void writeInt(android.os.Parcel r1, int r2, int r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            r1.writeInt(r3)
            return
    }

    public static void writeIntArray(android.os.Parcel r0, int r1, int[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeIntArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeIntegerList(android.os.Parcel r2, int r3, java.util.List<java.lang.Integer> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L24
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L20
            java.lang.Object r1 = r4.get(r0)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r2.writeInt(r1)
            int r0 = r0 + 1
            goto Le
        L20:
            handleDataOver(r2, r3)
            goto L29
        L24:
            if (r5 == 0) goto L29
            setHeader(r2, r3, r0)
        L29:
            return
    }

    public static void writeIntegerObject(android.os.Parcel r0, int r1, java.lang.Integer r2, boolean r3) {
            if (r2 == 0) goto Le
            r3 = 4
            setHeader(r0, r1, r3)
            int r1 = r2.intValue()
            r0.writeInt(r1)
            goto L14
        Le:
            if (r3 == 0) goto L14
            r2 = 0
            setHeader(r0, r1, r2)
        L14:
            return
    }

    public static void writeList(android.os.Parcel r0, int r1, java.util.List r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeList(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeLong(android.os.Parcel r1, int r2, long r3) {
            r0 = 8
            setHeader(r1, r2, r0)
            r1.writeLong(r3)
            return
    }

    public static void writeLongArray(android.os.Parcel r0, int r1, long[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeLongArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeLongList(android.os.Parcel r3, int r4, java.util.List<java.lang.Long> r5, boolean r6) {
            r0 = 0
            if (r5 == 0) goto L24
            int r4 = getStartPosition(r3, r4)
            int r6 = r5.size()
            r3.writeInt(r6)
        Le:
            if (r0 >= r6) goto L20
            java.lang.Object r1 = r5.get(r0)
            java.lang.Long r1 = (java.lang.Long) r1
            long r1 = r1.longValue()
            r3.writeLong(r1)
            int r0 = r0 + 1
            goto Le
        L20:
            handleDataOver(r3, r4)
            goto L29
        L24:
            if (r6 == 0) goto L29
            setHeader(r3, r4, r0)
        L29:
            return
    }

    public static void writeLongObject(android.os.Parcel r0, int r1, java.lang.Long r2, boolean r3) {
            if (r2 == 0) goto Lf
            r3 = 8
            setHeader(r0, r1, r3)
            long r1 = r2.longValue()
            r0.writeLong(r1)
            goto L15
        Lf:
            if (r3 == 0) goto L15
            r2 = 0
            setHeader(r0, r1, r2)
        L15:
            return
    }

    public static void writeParcel(android.os.Parcel r1, int r2, android.os.Parcel r3, boolean r4) {
            r0 = 0
            if (r3 == 0) goto L12
            int r2 = getStartPosition(r1, r2)
            int r4 = r3.dataSize()
            r1.appendFrom(r3, r0, r4)
            handleDataOver(r1, r2)
            goto L17
        L12:
            if (r4 == 0) goto L17
            setHeader(r1, r2, r0)
        L17:
            return
    }

    public static void writeParcelArray(android.os.Parcel r4, int r5, android.os.Parcel[] r6, boolean r7) {
            r0 = 0
            if (r6 == 0) goto L31
            int r5 = getStartPosition(r4, r5)
            int r7 = r6.length
            r4.writeInt(r7)
            r1 = r0
        Lc:
            if (r1 >= r7) goto L2d
            r2 = r6[r1]
            if (r2 != 0) goto L16
            r4.writeInt(r0)
            goto L2a
        L16:
            r2 = r6[r1]
            int r2 = r2.dataSize()
            r4.writeInt(r2)
            r2 = r6[r1]
            r3 = r6[r1]
            int r3 = r3.dataSize()
            r4.appendFrom(r2, r0, r3)
        L2a:
            int r1 = r1 + 1
            goto Lc
        L2d:
            handleDataOver(r4, r5)
            goto L36
        L31:
            if (r7 == 0) goto L36
            setHeader(r4, r5, r0)
        L36:
            return
    }

    public static void writeParcelList(android.os.Parcel r4, int r5, java.util.List<android.os.Parcel> r6, boolean r7) {
            r0 = 0
            if (r6 == 0) goto L32
            int r5 = getStartPosition(r4, r5)
            int r7 = r6.size()
            r4.writeInt(r7)
            r1 = r0
        Lf:
            if (r1 >= r7) goto L2e
            java.lang.Object r2 = r6.get(r1)
            android.os.Parcel r2 = (android.os.Parcel) r2
            if (r2 != 0) goto L1d
            r4.writeInt(r0)
            goto L2b
        L1d:
            int r3 = r2.dataSize()
            r4.writeInt(r3)
            int r3 = r2.dataSize()
            r4.appendFrom(r2, r0, r3)
        L2b:
            int r1 = r1 + 1
            goto Lf
        L2e:
            handleDataOver(r4, r5)
            goto L37
        L32:
            if (r7 == 0) goto L37
            setHeader(r4, r5, r0)
        L37:
            return
    }

    public static void writeParcelSparseArray(android.os.Parcel r4, int r5, android.util.SparseArray<android.os.Parcel> r6, boolean r7) {
            r0 = 0
            if (r6 == 0) goto L39
            int r5 = getStartPosition(r4, r5)
            int r7 = r6.size()
            r4.writeInt(r7)
            r1 = r0
        Lf:
            if (r1 >= r7) goto L35
            int r2 = r6.keyAt(r1)
            r4.writeInt(r2)
            java.lang.Object r2 = r6.valueAt(r1)
            android.os.Parcel r2 = (android.os.Parcel) r2
            if (r2 != 0) goto L24
            r4.writeInt(r0)
            goto L32
        L24:
            int r3 = r2.dataSize()
            r4.writeInt(r3)
            int r3 = r2.dataSize()
            r4.appendFrom(r2, r0, r3)
        L32:
            int r1 = r1 + 1
            goto Lf
        L35:
            handleDataOver(r4, r5)
            goto L3e
        L39:
            if (r7 == 0) goto L3e
            setHeader(r4, r5, r0)
        L3e:
            return
    }

    public static void writeParcelable(android.os.Parcel r0, int r1, android.os.Parcelable r2, int r3, boolean r4) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r2.writeToParcel(r0, r3)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r4 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeShort(android.os.Parcel r1, int r2, short r3) {
            r0 = 4
            setHeader(r1, r2, r0)
            r1.writeInt(r3)
            return
    }

    public static void writeSparseBooleanArray(android.os.Parcel r0, int r1, android.util.SparseBooleanArray r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeSparseBooleanArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeSparseIntArray(android.os.Parcel r2, int r3, android.util.SparseIntArray r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L25
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L21
            int r1 = r4.keyAt(r0)
            r2.writeInt(r1)
            int r1 = r4.valueAt(r0)
            r2.writeInt(r1)
            int r0 = r0 + 1
            goto Le
        L21:
            handleDataOver(r2, r3)
            goto L2a
        L25:
            if (r5 == 0) goto L2a
            setHeader(r2, r3, r0)
        L2a:
            return
    }

    public static void writeSparseLongArray(android.os.Parcel r4, int r5, android.util.SparseLongArray r6, boolean r7) {
            r0 = 0
            if (r6 == 0) goto L35
            int r5 = getStartPosition(r4, r5)
            int r7 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r7 < r1) goto L12
            int r7 = r6.size()
            goto L13
        L12:
            r7 = r0
        L13:
            r4.writeInt(r7)
        L16:
            if (r0 >= r7) goto L31
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r1) goto L23
            int r2 = r6.keyAt(r0)
            r4.writeInt(r2)
        L23:
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r1) goto L2e
            long r2 = r6.valueAt(r0)
            r4.writeLong(r2)
        L2e:
            int r0 = r0 + 1
            goto L16
        L31:
            handleDataOver(r4, r5)
            goto L3a
        L35:
            if (r7 == 0) goto L3a
            setHeader(r4, r5, r0)
        L3a:
            return
    }

    public static void writeString(android.os.Parcel r0, int r1, java.lang.String r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeString(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeStringArray(android.os.Parcel r0, int r1, java.lang.String[] r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeStringArray(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeStringList(android.os.Parcel r0, int r1, java.util.List<java.lang.String> r2, boolean r3) {
            if (r2 == 0) goto Ld
            int r1 = getStartPosition(r0, r1)
            r0.writeStringList(r2)
            handleDataOver(r0, r1)
            goto L13
        Ld:
            if (r3 == 0) goto L13
            r2 = 0
            setHeader(r0, r1, r2)
        L13:
            return
    }

    public static void writeStringSparseArray(android.os.Parcel r2, int r3, android.util.SparseArray<java.lang.String> r4, boolean r5) {
            r0 = 0
            if (r4 == 0) goto L27
            int r3 = getStartPosition(r2, r3)
            int r5 = r4.size()
            r2.writeInt(r5)
        Le:
            if (r0 >= r5) goto L23
            int r1 = r4.keyAt(r0)
            r2.writeInt(r1)
            java.lang.Object r1 = r4.valueAt(r0)
            java.lang.String r1 = (java.lang.String) r1
            r2.writeString(r1)
            int r0 = r0 + 1
            goto Le
        L23:
            handleDataOver(r2, r3)
            goto L2c
        L27:
            if (r5 == 0) goto L2c
            setHeader(r2, r3, r0)
        L2c:
            return
    }

    public static <P extends android.os.Parcelable> void writeTypedArray(android.os.Parcel r3, int r4, P[] r5, int r6, boolean r7) {
            r0 = 0
            if (r5 == 0) goto L22
            int r4 = getStartPosition(r3, r4)
            r3.writeInt(r4)
            int r7 = r5.length
            r1 = r0
        Lc:
            if (r1 >= r7) goto L1e
            r2 = r5[r1]
            if (r2 == 0) goto L18
            r2 = r5[r1]
            setSizeOfData(r3, r2, r6)
            goto L1b
        L18:
            r3.writeInt(r0)
        L1b:
            int r1 = r1 + 1
            goto Lc
        L1e:
            handleDataOver(r3, r4)
            goto L27
        L22:
            if (r7 == 0) goto L27
            setHeader(r3, r4, r0)
        L27:
            return
    }

    public static <T extends android.os.Parcelable> void writeTypedList(android.os.Parcel r3, int r4, java.util.List<T> r5, boolean r6) {
            r0 = 0
            if (r5 == 0) goto L27
            int r4 = getStartPosition(r3, r4)
            int r6 = r5.size()
            r3.writeInt(r6)
            r1 = r0
        Lf:
            if (r1 >= r6) goto L23
            java.lang.Object r2 = r5.get(r1)
            android.os.Parcelable r2 = (android.os.Parcelable) r2
            if (r2 == 0) goto L1d
            setSizeOfData(r3, r2, r0)
            goto L20
        L1d:
            r3.writeInt(r0)
        L20:
            int r1 = r1 + 1
            goto Lf
        L23:
            handleDataOver(r3, r4)
            goto L2c
        L27:
            if (r6 == 0) goto L2c
            setHeader(r3, r4, r0)
        L2c:
            return
    }

    public static <T extends android.os.Parcelable> void writeTypedSparseArray(android.os.Parcel r3, int r4, android.util.SparseArray<T> r5, boolean r6) {
            r0 = 0
            if (r5 == 0) goto L2e
            int r4 = getStartPosition(r3, r4)
            int r6 = r5.size()
            r3.writeInt(r6)
            r1 = r0
        Lf:
            if (r1 >= r6) goto L2a
            int r2 = r5.keyAt(r1)
            r3.writeInt(r2)
            java.lang.Object r2 = r5.valueAt(r1)
            android.os.Parcelable r2 = (android.os.Parcelable) r2
            if (r2 == 0) goto L24
            setSizeOfData(r3, r2, r0)
            goto L27
        L24:
            r3.writeInt(r0)
        L27:
            int r1 = r1 + 1
            goto Lf
        L2a:
            handleDataOver(r3, r4)
            goto L33
        L2e:
            if (r6 == 0) goto L33
            setHeader(r3, r4, r0)
        L33:
            return
    }
}
