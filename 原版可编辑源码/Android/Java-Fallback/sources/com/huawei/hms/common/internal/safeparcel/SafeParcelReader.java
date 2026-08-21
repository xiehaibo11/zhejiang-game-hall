package com.huawei.hms.common.internal.safeparcel;

public class SafeParcelReader {
    private static final int BIT16_MARK = 65535;
    private static final int FIELD_ID_CHECKER = 20293;
    private static final int MAX_ARRAY_LENGTH = 1024;
    private static final int NEGATIVE_MARK = -65536;
    private static final int OFFSET16 = 16;

    public static class ParseException extends java.lang.RuntimeException {
        public ParseException(java.lang.String r3, android.os.Parcel r4) {
                r2 = this;
                java.lang.StringBuffer r0 = new java.lang.StringBuffer
                java.lang.String r1 = java.lang.String.valueOf(r3)
                int r1 = r1.length()
                int r1 = r1 + 41
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = " Parcel: pos="
                r0.append(r3)
                int r3 = r4.dataPosition()
                r0.append(r3)
                java.lang.String r3 = " size="
                r0.append(r3)
                int r3 = r4.dataSize()
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                r2.<init>(r3)
                return
        }
    }

    private SafeParcelReader() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.math.BigDecimal createBigDecimal(android.os.Parcel r3, int r4) {
            int r4 = readSize(r3, r4)
            int r0 = r3.dataPosition()
            if (r4 != 0) goto Lc
            r3 = 0
            return r3
        Lc:
            ensureDataPositionValid(r3, r4, r0)
            byte[] r1 = r3.createByteArray()
            int r2 = r3.readInt()
            int r4 = r4 + r0
            r3.setDataPosition(r4)
            java.math.BigInteger r3 = new java.math.BigInteger
            r3.<init>(r1)
            java.math.BigDecimal r4 = new java.math.BigDecimal
            r4.<init>(r3, r2)
            return r4
    }

    public static java.math.BigDecimal[] createBigDecimalArray(android.os.Parcel r7, int r8) {
            int r8 = readSize(r7, r8)
            int r0 = r7.dataPosition()
            r1 = 0
            if (r8 != 0) goto Le
            java.math.BigDecimal[] r7 = new java.math.BigDecimal[r1]
            return r7
        Le:
            ensureDataPositionValid(r7, r8, r0)
            int r2 = r7.readInt()
            ensureArrayLengthValid(r7, r2)
            java.math.BigDecimal[] r3 = new java.math.BigDecimal[r2]
        L1a:
            if (r1 >= r2) goto L33
            byte[] r4 = r7.createByteArray()
            java.math.BigInteger r5 = new java.math.BigInteger
            r5.<init>(r4)
            java.math.BigDecimal r4 = new java.math.BigDecimal
            int r6 = r7.readInt()
            r4.<init>(r5, r6)
            r3[r1] = r4
            int r1 = r1 + 1
            goto L1a
        L33:
            int r0 = r0 + r8
            r7.setDataPosition(r0)
            return r3
    }

    public static java.math.BigInteger createBigInteger(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            byte[] r1 = r2.createByteArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            java.math.BigInteger r2 = new java.math.BigInteger
            r2.<init>(r1)
            return r2
    }

    public static java.math.BigInteger[] createBigIntegerArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            r1 = 0
            if (r7 != 0) goto Le
            java.math.BigInteger[] r6 = new java.math.BigInteger[r1]
            return r6
        Le:
            ensureDataPositionValid(r6, r7, r0)
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            java.math.BigInteger[] r3 = new java.math.BigInteger[r2]
        L1a:
            if (r1 >= r2) goto L2a
            java.math.BigInteger r4 = new java.math.BigInteger
            byte[] r5 = r6.createByteArray()
            r4.<init>(r5)
            r3[r1] = r4
            int r1 = r1 + 1
            goto L1a
        L2a:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r3
    }

    public static boolean[] createBooleanArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            boolean[] r2 = new boolean[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            boolean[] r1 = r2.createBooleanArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.Boolean> createBooleanList(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
            r4 = r3
        L1d:
            if (r4 >= r2) goto L32
            int r5 = r6.readInt()
            if (r5 == 0) goto L27
            r5 = 1
            goto L28
        L27:
            r5 = r3
        L28:
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r5)
            r1.add(r5)
            int r4 = r4 + 1
            goto L1d
        L32:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static android.os.Bundle createBundle(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            android.os.Bundle r1 = r2.readBundle()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static byte[] createByteArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            byte[] r1 = r2.createByteArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static byte[][] createByteArrayArray(android.os.Parcel r5, int r6) {
            int r6 = readSize(r5, r6)
            int r0 = r5.dataPosition()
            if (r6 != 0) goto Lc
            r5 = 0
            return r5
        Lc:
            ensureDataPositionValid(r5, r6, r0)
            int r1 = r5.readInt()
            ensureArrayLengthValid(r5, r1)
            byte[][] r2 = new byte[r1][]
            r3 = 0
        L19:
            if (r3 >= r1) goto L24
            byte[] r4 = r5.createByteArray()
            r2[r3] = r4
            int r3 = r3 + 1
            goto L19
        L24:
            int r0 = r0 + r6
            r5.setDataPosition(r0)
            return r2
    }

    public static android.util.SparseArray<byte[]> createByteArraySparseArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            int r1 = r6.readInt()
            ensureArrayLengthValid(r6, r1)
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>(r1)
            r3 = 0
        L1c:
            if (r3 >= r1) goto L2c
            int r4 = r6.readInt()
            byte[] r5 = r6.createByteArray()
            r2.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r2
    }

    public static char[] createCharArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            char[] r2 = new char[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            char[] r1 = r2.createCharArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static double[] createDoubleArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            double[] r2 = new double[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            double[] r1 = r2.createDoubleArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.Double> createDoubleList(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            double r4 = r6.readDouble()
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            r1.add(r4)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static android.util.SparseArray<java.lang.Double> createDoubleSparseArray(android.os.Parcel r7, int r8) {
            int r8 = readSize(r7, r8)
            int r0 = r7.dataPosition()
            if (r8 != 0) goto Lc
            r7 = 0
            return r7
        Lc:
            ensureDataPositionValid(r7, r8, r0)
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            int r2 = r7.readInt()
            ensureArrayLengthValid(r7, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L30
            int r4 = r7.readInt()
            double r5 = r7.readDouble()
            java.lang.Double r5 = java.lang.Double.valueOf(r5)
            r1.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L30:
            int r0 = r0 + r8
            r7.setDataPosition(r0)
            return r1
    }

    public static float[] createFloatArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            float[] r2 = new float[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            float[] r1 = r2.createFloatArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.Float> createFloatList(android.os.Parcel r5, int r6) {
            int r6 = readSize(r5, r6)
            int r0 = r5.dataPosition()
            if (r6 != 0) goto Lc
            r5 = 0
            return r5
        Lc:
            ensureDataPositionValid(r5, r6, r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r5.readInt()
            ensureArrayLengthValid(r5, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            float r4 = r5.readFloat()
            java.lang.Float r4 = java.lang.Float.valueOf(r4)
            r1.add(r4)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r6
            r5.setDataPosition(r0)
            return r1
    }

    public static android.util.SparseArray<java.lang.Float> createFloatSparseArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L30
            int r4 = r6.readInt()
            float r5 = r6.readFloat()
            java.lang.Float r5 = java.lang.Float.valueOf(r5)
            r1.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L30:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static android.os.IBinder[] createIBinderArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            android.os.IBinder[] r2 = new android.os.IBinder[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            android.os.IBinder[] r1 = r2.createBinderArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<android.os.IBinder> createIBinderList(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            java.util.ArrayList r1 = r2.createBinderArrayList()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static android.util.SparseArray<android.os.IBinder> createIBinderSparseArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            int r1 = r6.readInt()
            ensureArrayLengthValid(r6, r1)
            android.util.SparseArray r2 = new android.util.SparseArray
            r2.<init>(r1)
            r3 = 0
        L1c:
            if (r3 >= r1) goto L2c
            int r4 = r6.readInt()
            android.os.IBinder r5 = r6.readStrongBinder()
            r2.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r2
    }

    public static int[] createIntArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            int[] r2 = new int[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            int[] r1 = r2.createIntArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.Integer> createIntegerList(android.os.Parcel r5, int r6) {
            int r6 = readSize(r5, r6)
            int r0 = r5.dataPosition()
            if (r6 != 0) goto Lc
            r5 = 0
            return r5
        Lc:
            ensureDataPositionValid(r5, r6, r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r5.readInt()
            ensureArrayLengthValid(r5, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            int r4 = r5.readInt()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.add(r4)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r6
            r5.setDataPosition(r0)
            return r1
    }

    public static long[] createLongArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            long[] r2 = new long[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            long[] r1 = r2.createLongArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.Long> createLongList(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            long r4 = r6.readLong()
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r1.add(r4)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static android.os.Parcel createParcel(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            android.os.Parcel r1 = android.os.Parcel.obtain()
            r1.appendFrom(r2, r0, r3)
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static android.os.Parcel[] createParcelArray(android.os.Parcel r7, int r8) {
            int r8 = readSize(r7, r8)
            int r0 = r7.dataPosition()
            r1 = 0
            if (r8 != 0) goto Le
            android.os.Parcel[] r7 = new android.os.Parcel[r1]
            return r7
        Le:
            ensureDataPositionValid(r7, r8, r0)
            int r2 = r7.readInt()
            ensureArrayLengthValid(r7, r2)
            android.os.Parcel[] r3 = new android.os.Parcel[r2]
        L1a:
            if (r1 >= r2) goto L3d
            int r4 = r7.readInt()
            if (r4 != 0) goto L26
            r4 = 0
            r3[r1] = r4
            goto L3a
        L26:
            int r5 = r7.dataPosition()
            ensureDataPositionValid(r7, r4, r5)
            android.os.Parcel r6 = android.os.Parcel.obtain()
            r6.appendFrom(r7, r5, r4)
            r3[r1] = r6
            int r4 = r4 + r5
            r7.setDataPosition(r4)
        L3a:
            int r1 = r1 + 1
            goto L1a
        L3d:
            int r0 = r0 + r8
            r7.setDataPosition(r0)
            return r3
    }

    public static java.util.ArrayList<android.os.Parcel> createParcelList(android.os.Parcel r8, int r9) {
            int r9 = readSize(r8, r9)
            int r0 = r8.dataPosition()
            r1 = 0
            if (r9 != 0) goto Lc
            return r1
        Lc:
            ensureDataPositionValid(r8, r9, r0)
            int r2 = r8.readInt()
            ensureArrayLengthValid(r8, r2)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r4 = 0
        L1c:
            if (r4 >= r2) goto L40
            int r5 = r8.readInt()
            if (r5 != 0) goto L28
            r3.add(r1)
            goto L3d
        L28:
            int r6 = r8.dataPosition()
            ensureDataPositionValid(r8, r5, r6)
            android.os.Parcel r7 = android.os.Parcel.obtain()
            r7.appendFrom(r8, r6, r5)
            r3.add(r7)
            int r5 = r5 + r6
            r8.setDataPosition(r5)
        L3d:
            int r4 = r4 + 1
            goto L1c
        L40:
            int r0 = r0 + r9
            r8.setDataPosition(r0)
            return r3
    }

    public static android.util.SparseArray<android.os.Parcel> createParcelSparseArray(android.os.Parcel r9, int r10) {
            int r10 = readSize(r9, r10)
            int r0 = r9.dataPosition()
            r1 = 0
            if (r10 != 0) goto Lc
            return r1
        Lc:
            ensureDataPositionValid(r9, r10, r0)
            int r2 = r9.readInt()
            ensureArrayLengthValid(r9, r2)
            android.util.SparseArray r3 = new android.util.SparseArray
            r3.<init>()
            r4 = 0
        L1c:
            if (r4 >= r2) goto L44
            int r5 = r9.readInt()
            int r6 = r9.readInt()
            if (r6 != 0) goto L2c
            r3.append(r5, r1)
            goto L41
        L2c:
            int r7 = r9.dataPosition()
            ensureDataPositionValid(r9, r6, r7)
            android.os.Parcel r8 = android.os.Parcel.obtain()
            r8.appendFrom(r9, r7, r6)
            r3.append(r5, r8)
            int r7 = r7 + r6
            r9.setDataPosition(r7)
        L41:
            int r4 = r4 + 1
            goto L1c
        L44:
            int r0 = r0 + r10
            r9.setDataPosition(r0)
            return r3
    }

    public static <P extends android.os.Parcelable> P createParcelable(android.os.Parcel r1, int r2, android.os.Parcelable.Creator<P> r3) {
            int r2 = readSize(r1, r2)
            int r0 = r1.dataPosition()
            if (r2 != 0) goto Lc
            r1 = 0
            return r1
        Lc:
            ensureDataPositionValid(r1, r2, r0)
            java.lang.Object r3 = r3.createFromParcel(r1)
            android.os.Parcelable r3 = (android.os.Parcelable) r3
            int r2 = r2 + r0
            r1.setDataPosition(r2)
            return r3
    }

    public static android.util.SparseBooleanArray createSparseBooleanArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            android.util.SparseBooleanArray r1 = r2.readSparseBooleanArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static android.util.SparseIntArray createSparseIntArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            android.util.SparseIntArray r1 = new android.util.SparseIntArray
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            int r4 = r6.readInt()
            int r5 = r6.readInt()
            r1.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static android.util.SparseLongArray createSparseLongArray(android.os.Parcel r8, int r9) {
            int r9 = readSize(r8, r9)
            int r0 = r8.dataPosition()
            r1 = 0
            if (r9 != 0) goto Lc
            return r1
        Lc:
            ensureDataPositionValid(r8, r9, r0)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 18
            if (r2 < r3) goto L1a
            android.util.SparseLongArray r1 = new android.util.SparseLongArray
            r1.<init>()
        L1a:
            int r2 = r8.readInt()
            ensureArrayLengthValid(r8, r2)
            r4 = 0
        L22:
            if (r4 >= r2) goto L36
            int r5 = android.os.Build.VERSION.SDK_INT
            if (r5 < r3) goto L33
            int r5 = r8.readInt()
            long r6 = r8.readLong()
            r1.append(r5, r6)
        L33:
            int r4 = r4 + 1
            goto L22
        L36:
            int r0 = r0 + r9
            r8.setDataPosition(r0)
            return r1
    }

    public static java.lang.String createString(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            java.lang.String r1 = r2.readString()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.lang.String[] createStringArray(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Le
            r2 = 0
            java.lang.String[] r2 = new java.lang.String[r2]
            return r2
        Le:
            ensureDataPositionValid(r2, r3, r0)
            java.lang.String[] r1 = r2.createStringArray()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static java.util.ArrayList<java.lang.String> createStringList(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            java.util.ArrayList r1 = r2.createStringArrayList()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static android.util.SparseArray<java.lang.String> createStringSparseArray(android.os.Parcel r6, int r7) {
            int r7 = readSize(r6, r7)
            int r0 = r6.dataPosition()
            if (r7 != 0) goto Lc
            r6 = 0
            return r6
        Lc:
            ensureDataPositionValid(r6, r7, r0)
            android.util.SparseArray r1 = new android.util.SparseArray
            r1.<init>()
            int r2 = r6.readInt()
            ensureArrayLengthValid(r6, r2)
            r3 = 0
        L1c:
            if (r3 >= r2) goto L2c
            int r4 = r6.readInt()
            java.lang.String r5 = r6.readString()
            r1.append(r4, r5)
            int r3 = r3 + 1
            goto L1c
        L2c:
            int r0 = r0 + r7
            r6.setDataPosition(r0)
            return r1
    }

    public static <C> C[] createTypedArray(android.os.Parcel r1, int r2, android.os.Parcelable.Creator<C> r3) {
            int r2 = readSize(r1, r2)
            int r0 = r1.dataPosition()
            if (r2 != 0) goto L10
            r1 = 0
            java.lang.Object[] r1 = r3.newArray(r1)
            return r1
        L10:
            ensureDataPositionValid(r1, r2, r0)
            java.lang.Object[] r3 = r1.createTypedArray(r3)
            int r2 = r2 + r0
            r1.setDataPosition(r2)
            return r3
    }

    public static <C> java.util.ArrayList<C> createTypedList(android.os.Parcel r1, int r2, android.os.Parcelable.Creator<C> r3) {
            int r2 = readSize(r1, r2)
            int r0 = r1.dataPosition()
            if (r2 != 0) goto Lc
            r1 = 0
            return r1
        Lc:
            ensureDataPositionValid(r1, r2, r0)
            java.util.ArrayList r3 = r1.createTypedArrayList(r3)
            int r2 = r2 + r0
            r1.setDataPosition(r2)
            return r3
    }

    public static <C> android.util.SparseArray<C> createTypedSparseArray(android.os.Parcel r7, int r8, android.os.Parcelable.Creator<C> r9) {
            int r8 = readSize(r7, r8)
            int r0 = r7.dataPosition()
            r1 = 0
            if (r8 != 0) goto Lc
            return r1
        Lc:
            ensureDataPositionValid(r7, r8, r0)
            int r2 = r7.readInt()
            ensureArrayLengthValid(r7, r2)
            android.util.SparseArray r3 = new android.util.SparseArray
            r3.<init>()
            r4 = 0
        L1c:
            if (r4 >= r2) goto L34
            int r5 = r7.readInt()
            int r6 = r7.readInt()
            if (r6 == 0) goto L2d
            java.lang.Object r6 = r9.createFromParcel(r7)
            goto L2e
        L2d:
            r6 = r1
        L2e:
            r3.append(r5, r6)
            int r4 = r4 + 1
            goto L1c
        L34:
            int r0 = r0 + r8
            r7.setDataPosition(r0)
            return r3
    }

    private static void ensureArrayLengthValid(android.os.Parcel r1, int r2) {
            r0 = 1024(0x400, float:1.435E-42)
            if (r2 > r0) goto L5
            return
        L5:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r2 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.String r0 = "arraySize cannot be beyond 65535"
            r2.<init>(r0, r1)
            throw r2
    }

    public static void ensureAtEnd(android.os.Parcel r3, int r4) {
            int r0 = r3.dataPosition()
            if (r0 != r4) goto L7
            return
        L7:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r0 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Overread allowed size end="
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4, r3)
            throw r0
    }

    private static void ensureDataPositionValid(android.os.Parcel r0, int r1, int r2) {
            if (r1 < 0) goto L9
            boolean r1 = isOutOfIntBoundary(r1, r2)
            if (r1 != 0) goto L9
            return
        L9:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r1 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.String r2 = "dataPosition cannot be beyond integer scope"
            r1.<init>(r2, r0)
            throw r1
    }

    public static int getFieldId(int r1) {
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r0
            return r1
    }

    private static boolean isOutOfIntBoundary(int r2, int r3) {
            long r0 = (long) r2
            long r2 = (long) r3
            long r0 = r0 + r2
            r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto L14
            r2 = -2147483648(0xffffffff80000000, double:NaN)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L12
            goto L14
        L12:
            r2 = 0
            goto L15
        L14:
            r2 = 1
        L15:
            return r2
    }

    public static boolean readBoolean(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            int r1 = r1.readInt()
            if (r1 == 0) goto Lc
            r1 = 1
            goto Ld
        Lc:
            r1 = 0
        Ld:
            return r1
    }

    public static java.lang.Boolean readBooleanObject(android.os.Parcel r3, int r4) {
            int r0 = readSize(r3, r4)
            r1 = 0
            if (r0 != 0) goto Lc
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r1)
            return r3
        Lc:
            r2 = 4
            sizeChecker(r3, r4, r0, r2)
            int r3 = r3.readInt()
            if (r3 == 0) goto L17
            r1 = 1
        L17:
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r1)
            return r3
    }

    public static byte readByte(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            int r1 = r1.readInt()
            byte r1 = (byte) r1
            return r1
    }

    public static char readChar(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            int r1 = r1.readInt()
            char r1 = (char) r1
            return r1
    }

    public static double readDouble(android.os.Parcel r1, int r2) {
            r0 = 8
            sizeChecker(r1, r2, r0)
            double r1 = r1.readDouble()
            return r1
    }

    public static java.lang.Double readDoubleObject(android.os.Parcel r2, int r3) {
            int r0 = readSize(r2, r3)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            r1 = 8
            sizeChecker(r2, r3, r0, r1)
            double r2 = r2.readDouble()
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            return r2
    }

    public static float readFloat(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            float r1 = r1.readFloat()
            return r1
    }

    public static java.lang.Float readFloatObject(android.os.Parcel r2, int r3) {
            int r0 = readSize(r2, r3)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            r1 = 4
            sizeChecker(r2, r3, r0, r1)
            float r2 = r2.readFloat()
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            return r2
    }

    public static int readHeader(android.os.Parcel r0) {
            int r0 = r0.readInt()
            return r0
    }

    public static android.os.IBinder readIBinder(android.os.Parcel r2, int r3) {
            int r3 = readSize(r2, r3)
            int r0 = r2.dataPosition()
            if (r3 != 0) goto Lc
            r2 = 0
            return r2
        Lc:
            ensureDataPositionValid(r2, r3, r0)
            android.os.IBinder r1 = r2.readStrongBinder()
            int r3 = r3 + r0
            r2.setDataPosition(r3)
            return r1
    }

    public static int readInt(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            int r1 = r1.readInt()
            return r1
    }

    public static java.lang.Integer readIntegerObject(android.os.Parcel r2, int r3) {
            int r0 = readSize(r2, r3)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            r1 = 4
            sizeChecker(r2, r3, r0, r1)
            int r2 = r2.readInt()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            return r2
    }

    public static void readList(android.os.Parcel r1, int r2, java.util.List r3, java.lang.ClassLoader r4) {
            int r2 = readSize(r1, r2)
            int r0 = r1.dataPosition()
            if (r2 == 0) goto L14
            ensureDataPositionValid(r1, r2, r0)
            r1.readList(r3, r4)
            int r2 = r2 + r0
            r1.setDataPosition(r2)
        L14:
            return
    }

    public static long readLong(android.os.Parcel r1, int r2) {
            r0 = 8
            sizeChecker(r1, r2, r0)
            long r1 = r1.readLong()
            return r1
    }

    public static java.lang.Long readLongObject(android.os.Parcel r2, int r3) {
            int r0 = readSize(r2, r3)
            if (r0 != 0) goto L8
            r2 = 0
            return r2
        L8:
            r1 = 8
            sizeChecker(r2, r3, r0, r1)
            long r2 = r2.readLong()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            return r2
    }

    public static short readShort(android.os.Parcel r1, int r2) {
            r0 = 4
            sizeChecker(r1, r2, r0)
            int r1 = r1.readInt()
            short r1 = (short) r1
            return r1
    }

    public static int readSize(android.os.Parcel r2, int r3) {
            r0 = -65536(0xffffffffffff0000, float:NaN)
            r1 = r3 & r0
            if (r1 == r0) goto Ld
            int r2 = r3 >> 16
            r3 = 65535(0xffff, float:9.1834E-41)
            r2 = r2 & r3
            goto L11
        Ld:
            int r2 = r2.readInt()
        L11:
            return r2
    }

    private static void sizeChecker(android.os.Parcel r4, int r5, int r6) {
            int r5 = readSize(r4, r5)
            if (r5 != r6) goto L7
            return
        L7:
            java.lang.String r0 = java.lang.Integer.toHexString(r5)
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r1 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            int r3 = r0.length()
            int r3 = r3 + 46
            r2.<init>(r3)
            java.lang.String r3 = "Expected size "
            r2.append(r3)
            r2.append(r6)
            java.lang.String r6 = " got "
            r2.append(r6)
            r2.append(r5)
            java.lang.String r5 = " (0x"
            r2.append(r5)
            r2.append(r0)
            java.lang.String r5 = ")"
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5, r4)
            throw r1
    }

    private static void sizeChecker(android.os.Parcel r3, int r4, int r5, int r6) {
            if (r5 != r6) goto L3
            return
        L3:
            java.lang.String r4 = java.lang.Integer.toHexString(r5)
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r0 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            int r2 = r4.length()
            int r2 = r2 + 46
            r1.<init>(r2)
            java.lang.String r2 = "Expected size "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = " got "
            r1.append(r6)
            r1.append(r5)
            java.lang.String r5 = " (0x"
            r1.append(r5)
            r1.append(r4)
            java.lang.String r4 = ")"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4, r3)
            throw r0
    }

    public static void skipUnknownField(android.os.Parcel r1, int r2) {
            int r2 = readSize(r1, r2)
            int r0 = r1.dataPosition()
            ensureDataPositionValid(r1, r2, r0)
            int r2 = r2 + r0
            r1.setDataPosition(r2)
            return
    }

    public static int validateObjectHeader(android.os.Parcel r5) {
            int r0 = readHeader(r5)
            int r1 = readSize(r5, r0)
            int r2 = r5.dataPosition()
            int r3 = getFieldId(r0)
            r4 = 20293(0x4f45, float:2.8437E-41)
            if (r3 == r4) goto L2a
            java.lang.String r1 = "Expected object header. Got 0x"
            java.lang.String r0 = java.lang.Integer.toHexString(r0)
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r2 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            int r3 = r0.length()
            if (r3 == 0) goto L26
            java.lang.String r1 = r1.concat(r0)
        L26:
            r2.<init>(r1, r5)
            throw r2
        L2a:
            int r1 = r1 + r2
            if (r1 < r2) goto L34
            int r0 = r5.dataSize()
            if (r1 > r0) goto L34
            return r1
        L34:
            com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException r0 = new com.huawei.hms.common.internal.safeparcel.SafeParcelReader$ParseException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "invalid start="
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = " end="
            r3.append(r2)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r0.<init>(r1, r5)
            throw r0
    }
}
