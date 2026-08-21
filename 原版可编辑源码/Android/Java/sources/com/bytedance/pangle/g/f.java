package com.bytedance.pangle.g;

import android.util.ArrayMap;
import android.util.Pair;
import android.util.SparseArray;
import com.bianfeng.afext.read.ApkUtil;
import com.qihoo360.replugin.ext.parser.struct.ChunkType;
import java.io.FileDescriptor;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.BufferUnderflowException;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.security.DigestException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.security.spec.AlgorithmParameterSpec;
import java.security.spec.MGF1ParameterSpec;
import java.security.spec.PSSParameterSpec;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

final class f {
    static final HashMap<String, SparseArray<m>> a = new HashMap<>();

    static void a(Map<Integer, byte[]> map, RandomAccessFile randomAccessFile, m mVar) {
        if (map.isEmpty()) {
            throw new SecurityException("No digests provided");
        }
        ArrayMap arrayMap = new ArrayMap();
        boolean z = true;
        if (map.containsKey(1)) {
            arrayMap.put(1, map.get(1));
        }
        if (map.containsKey(2)) {
            arrayMap.put(2, map.get(2));
        }
        boolean z2 = false;
        if (!arrayMap.isEmpty()) {
            try {
                a(arrayMap, randomAccessFile.getFD(), mVar);
                z = false;
            } catch (IOException e) {
                throw new SecurityException("Cannot get FD", e);
            }
        }
        if (map.containsKey(3)) {
            try {
                if (!Arrays.equals(a(map.get(3), randomAccessFile.length(), mVar), g.a(randomAccessFile, mVar, new i() {
                    @Override
                    public final ByteBuffer a(int i) {
                        return ByteBuffer.allocate(i);
                    }
                }).b)) {
                    throw new SecurityException("APK verity digest of contents did not verify");
                }
            } catch (IOException | DigestException | NoSuchAlgorithmException e2) {
                throw new SecurityException("Error during verification", e2);
            }
        } else {
            z2 = z;
        }
        if (z2) {
            throw new SecurityException("No known digest exists for integrity check");
        }
    }

    private static void a(Map<Integer, byte[]> map, FileDescriptor fileDescriptor, m mVar) {
        l lVar = new l(fileDescriptor, 0L, mVar.b);
        l lVar2 = new l(fileDescriptor, mVar.c, mVar.d - mVar.c);
        ByteBuffer byteBufferDuplicate = mVar.e.duplicate();
        byteBufferDuplicate.order(ByteOrder.LITTLE_ENDIAN);
        long j = mVar.b;
        s.a(byteBufferDuplicate);
        int iPosition = byteBufferDuplicate.position() + 16;
        if (j < 0 || j > 4294967295L) {
            throw new IllegalArgumentException("uint32 value of out range: ".concat(String.valueOf(j)));
        }
        byteBufferDuplicate.putInt(byteBufferDuplicate.position() + iPosition, (int) j);
        h hVar = new h(byteBufferDuplicate);
        int size = map.size();
        int[] iArr = new int[size];
        Iterator<Integer> it = map.keySet().iterator();
        int i = 0;
        while (it.hasNext()) {
            iArr[i] = it.next().intValue();
            i++;
        }
        try {
            byte[][] bArrA = a(iArr, new k[]{lVar, lVar2, hVar});
            for (int i2 = 0; i2 < size; i2++) {
                int i3 = iArr[i2];
                if (!MessageDigest.isEqual(map.get(Integer.valueOf(i3)), bArrA[i2])) {
                    throw new SecurityException(b(i3) + " digest of contents did not verify");
                }
            }
        } catch (DigestException e) {
            throw new SecurityException("Failed to compute digest(s) of contents", e);
        }
    }

    private static byte[][] a(int[] iArr, k[] kVarArr) throws DigestException {
        int i;
        long j;
        long j2 = 0;
        long jA = 0;
        int i2 = 0;
        while (true) {
            j = 1048576;
            if (i2 >= 3) {
                break;
            }
            jA += ((kVarArr[i2].a() + 1048576) - 1) / 1048576;
            i2++;
        }
        if (jA >= 2097151) {
            throw new DigestException("Too many chunks: ".concat(String.valueOf(jA)));
        }
        int i3 = (int) jA;
        byte[][] bArr = new byte[iArr.length][];
        for (int i4 = 0; i4 < iArr.length; i4++) {
            byte[] bArr2 = new byte[(e(iArr[i4]) * i3) + 5];
            bArr2[0] = 90;
            a(i3, bArr2);
            bArr[i4] = bArr2;
        }
        byte[] bArr3 = new byte[5];
        bArr3[0] = -91;
        int length = iArr.length;
        MessageDigest[] messageDigestArr = new MessageDigest[length];
        for (int i5 = 0; i5 < iArr.length; i5++) {
            String strB = b(iArr[i5]);
            try {
                messageDigestArr[i5] = MessageDigest.getInstance(strB);
            } catch (NoSuchAlgorithmException e) {
                throw new RuntimeException(strB + " digest not supported", e);
            }
        }
        a aVar = new a(messageDigestArr);
        int i6 = 0;
        int i7 = 0;
        int i8 = 0;
        for (i = 3; i6 < i; i = 3) {
            k kVar = kVarArr[i6];
            long j3 = j2;
            int i9 = i8;
            a aVar2 = aVar;
            long jA2 = kVar.a();
            while (jA2 > j2) {
                int iMin = (int) Math.min(jA2, j);
                a(iMin, bArr3);
                for (int i10 = 0; i10 < length; i10++) {
                    messageDigestArr[i10].update(bArr3);
                }
                a aVar3 = aVar2;
                long j4 = j3;
                try {
                    kVar.a(aVar3, j4, iMin);
                    aVar2 = aVar3;
                    k kVar2 = kVar;
                    int i11 = 0;
                    while (i11 < iArr.length) {
                        int i12 = iArr[i11];
                        byte[] bArr4 = bArr3;
                        byte[] bArr5 = bArr[i11];
                        int iE = e(i12);
                        int i13 = length;
                        MessageDigest messageDigest = messageDigestArr[i11];
                        MessageDigest[] messageDigestArr2 = messageDigestArr;
                        int iDigest = messageDigest.digest(bArr5, (i9 * iE) + 5, iE);
                        if (iDigest != iE) {
                            throw new RuntimeException("Unexpected output size of " + messageDigest.getAlgorithm() + " digest: " + iDigest);
                        }
                        i11++;
                        bArr3 = bArr4;
                        length = i13;
                        messageDigestArr = messageDigestArr2;
                    }
                    long j5 = iMin;
                    long j6 = j4 + j5;
                    jA2 -= j5;
                    i9++;
                    j2 = 0;
                    j = 1048576;
                    kVar = kVar2;
                    bArr3 = bArr3;
                    j3 = j6;
                } catch (IOException e2) {
                    throw new DigestException("Failed to digest chunk #" + i9 + " of section #" + i7, e2);
                }
            }
            i7++;
            i6++;
            aVar = aVar2;
            j2 = 0;
            j = 1048576;
            i8 = i9;
        }
        byte[][] bArr6 = new byte[iArr.length][];
        for (int i14 = 0; i14 < iArr.length; i14++) {
            int i15 = iArr[i14];
            byte[] bArr7 = bArr[i14];
            String strB2 = b(i15);
            try {
                bArr6[i14] = MessageDigest.getInstance(strB2).digest(bArr7);
            } catch (NoSuchAlgorithmException e3) {
                throw new RuntimeException(strB2 + " digest not supported", e3);
            }
        }
        return bArr6;
    }

    static byte[] a(byte[] bArr, long j, m mVar) {
        if (bArr.length != 40) {
            throw new SecurityException("Verity digest size is wrong: " + bArr.length);
        }
        ByteBuffer byteBufferOrder = ByteBuffer.wrap(bArr).order(ByteOrder.LITTLE_ENDIAN);
        byteBufferOrder.position(32);
        if (byteBufferOrder.getLong() != j - (mVar.c - mVar.b)) {
            throw new SecurityException("APK content size did not verify");
        }
        return Arrays.copyOfRange(bArr, 0, 32);
    }

    static int a(int i, int i2) {
        int iA = a(i);
        int iA2 = a(i2);
        if (iA == 1) {
            if (iA2 == 1) {
                return 0;
            }
            if (iA2 == 2 || iA2 == 3) {
                return -1;
            }
            throw new IllegalArgumentException("Unknown digestAlgorithm2: ".concat(String.valueOf(iA2)));
        }
        if (iA == 2) {
            if (iA2 != 1) {
                if (iA2 == 2) {
                    return 0;
                }
                if (iA2 != 3) {
                    throw new IllegalArgumentException("Unknown digestAlgorithm2: ".concat(String.valueOf(iA2)));
                }
            }
            return 1;
        }
        if (iA != 3) {
            throw new IllegalArgumentException("Unknown digestAlgorithm1: ".concat(String.valueOf(iA)));
        }
        if (iA2 == 1) {
            return 1;
        }
        if (iA2 == 2) {
            return -1;
        }
        if (iA2 == 3) {
            return 0;
        }
        throw new IllegalArgumentException("Unknown digestAlgorithm2: ".concat(String.valueOf(iA2)));
    }

    static int a(int i) {
        if (i == 513) {
            return 1;
        }
        if (i == 514) {
            return 2;
        }
        if (i == 769) {
            return 1;
        }
        if (i == 1057 || i == 1059 || i == 1061) {
            return 3;
        }
        switch (i) {
            case 257:
            case ChunkType.XML_END_ELEMENT:
                return 1;
            case ChunkType.XML_START_ELEMENT:
            case ChunkType.XML_CDATA:
                return 2;
            default:
                throw new IllegalArgumentException("Unknown signature algorithm: 0x" + Long.toHexString(i & (-1)));
        }
    }

    static String b(int i) {
        if (i == 1) {
            return MessageDigestAlgorithms.SHA_256;
        }
        if (i == 2) {
            return MessageDigestAlgorithms.SHA_512;
        }
        if (i == 3) {
            return MessageDigestAlgorithms.SHA_256;
        }
        throw new IllegalArgumentException("Unknown content digest algorthm: ".concat(String.valueOf(i)));
    }

    private static int e(int i) {
        if (i == 1) {
            return 32;
        }
        if (i == 2) {
            return 64;
        }
        if (i == 3) {
            return 32;
        }
        throw new IllegalArgumentException("Unknown content digest algorthm: ".concat(String.valueOf(i)));
    }

    static String c(int i) {
        if (i == 513 || i == 514) {
            return "EC";
        }
        if (i == 769) {
            return "DSA";
        }
        if (i == 1057) {
            return com.alipay.sdk.m.n.d.a;
        }
        if (i == 1059) {
            return "EC";
        }
        if (i == 1061) {
            return "DSA";
        }
        switch (i) {
            case 257:
            case ChunkType.XML_START_ELEMENT:
            case ChunkType.XML_END_ELEMENT:
            case ChunkType.XML_CDATA:
                return com.alipay.sdk.m.n.d.a;
            default:
                throw new IllegalArgumentException("Unknown signature algorithm: 0x" + Long.toHexString(i & (-1)));
        }
    }

    static Pair<String, ? extends AlgorithmParameterSpec> d(int i) {
        if (i != 513) {
            if (i == 514) {
                return Pair.create("SHA512withECDSA", null);
            }
            if (i != 769) {
                if (i != 1057) {
                    if (i != 1059) {
                        if (i != 1061) {
                            switch (i) {
                                case 257:
                                    return Pair.create("SHA256withRSA/PSS", new PSSParameterSpec(MessageDigestAlgorithms.SHA_256, "MGF1", MGF1ParameterSpec.SHA256, 32, 1));
                                case ChunkType.XML_START_ELEMENT:
                                    return Pair.create("SHA512withRSA/PSS", new PSSParameterSpec(MessageDigestAlgorithms.SHA_512, "MGF1", MGF1ParameterSpec.SHA512, 64, 1));
                                case ChunkType.XML_END_ELEMENT:
                                    break;
                                case ChunkType.XML_CDATA:
                                    return Pair.create("SHA512withRSA", null);
                                default:
                                    throw new IllegalArgumentException("Unknown signature algorithm: 0x" + Long.toHexString(i & (-1)));
                            }
                        }
                    }
                }
                return Pair.create("SHA256withRSA", null);
            }
            return Pair.create("SHA256withDSA", null);
        }
        return Pair.create("SHA256withECDSA", null);
    }

    private static ByteBuffer a(ByteBuffer byteBuffer, int i) {
        if (i < 8) {
            throw new IllegalArgumentException("end < start: " + i + " < 8");
        }
        int iCapacity = byteBuffer.capacity();
        if (i > byteBuffer.capacity()) {
            throw new IllegalArgumentException("end > capacity: " + i + " > " + iCapacity);
        }
        int iLimit = byteBuffer.limit();
        int iPosition = byteBuffer.position();
        try {
            byteBuffer.position(0);
            byteBuffer.limit(i);
            byteBuffer.position(8);
            ByteBuffer byteBufferSlice = byteBuffer.slice();
            byteBufferSlice.order(byteBuffer.order());
            return byteBufferSlice;
        } finally {
            byteBuffer.position(0);
            byteBuffer.limit(iLimit);
            byteBuffer.position(iPosition);
        }
    }

    private static ByteBuffer b(ByteBuffer byteBuffer, int i) {
        if (i < 0) {
            throw new IllegalArgumentException("size: ".concat(String.valueOf(i)));
        }
        int iLimit = byteBuffer.limit();
        int iPosition = byteBuffer.position();
        int i2 = i + iPosition;
        if (i2 < iPosition || i2 > iLimit) {
            throw new BufferUnderflowException();
        }
        byteBuffer.limit(i2);
        try {
            ByteBuffer byteBufferSlice = byteBuffer.slice();
            byteBufferSlice.order(byteBuffer.order());
            byteBuffer.position(i2);
            return byteBufferSlice;
        } finally {
            byteBuffer.limit(iLimit);
        }
    }

    static ByteBuffer a(ByteBuffer byteBuffer) throws IOException {
        if (byteBuffer.remaining() < 4) {
            throw new IOException("Remaining buffer too short to contain length of length-prefixed field. Remaining: " + byteBuffer.remaining());
        }
        int i = byteBuffer.getInt();
        if (i < 0) {
            throw new IllegalArgumentException("Negative length");
        }
        if (i > byteBuffer.remaining()) {
            throw new IOException("Length-prefixed field longer than remaining buffer. Field length: " + i + ", remaining: " + byteBuffer.remaining());
        }
        return b(byteBuffer, i);
    }

    static byte[] b(ByteBuffer byteBuffer) throws IOException {
        int i = byteBuffer.getInt();
        if (i < 0) {
            throw new IOException("Negative length");
        }
        if (i > byteBuffer.remaining()) {
            throw new IOException("Underflow while reading length-prefixed value. Length: " + i + ", available: " + byteBuffer.remaining());
        }
        byte[] bArr = new byte[i];
        byteBuffer.get(bArr);
        return bArr;
    }

    private static void a(int i, byte[] bArr) {
        bArr[1] = (byte) (i & 255);
        bArr[2] = (byte) ((i >>> 8) & 255);
        bArr[3] = (byte) ((i >>> 16) & 255);
        bArr[4] = (byte) ((i >>> 24) & 255);
    }

    /* JADX WARN: Removed duplicated region for block: B:15:0x004f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    static void a(String str, RandomAccessFile randomAccessFile, int... iArr) throws n, IOException {
        Pair<ByteBuffer, Long> pairA;
        boolean z;
        Pair pairCreate;
        long j;
        int i;
        HashSet hashSet;
        long j2;
        long j3;
        ByteBuffer byteBuffer;
        String str2 = str;
        a.put(str2, new SparseArray<>());
        if (randomAccessFile.length() < 22) {
            pairA = null;
        } else {
            pairA = s.a(randomAccessFile, 0);
            if (pairA == null) {
                pairA = s.a(randomAccessFile, 65535);
            }
        }
        if (pairA != null) {
            ByteBuffer byteBuffer2 = (ByteBuffer) pairA.first;
            long jLongValue = ((Long) pairA.second).longValue();
            long j4 = jLongValue - 20;
            if (j4 >= 0) {
                randomAccessFile.seek(j4);
                z = randomAccessFile.readInt() == 1347094023;
            }
            if (z) {
                throw new n("ZIP64 APK not supported");
            }
            s.a(byteBuffer2);
            long jA = s.a(byteBuffer2, byteBuffer2.position() + 16);
            if (jA > jLongValue) {
                throw new n("ZIP Central Directory offset out of range: " + jA + ". ZIP End of Central Directory offset: " + jLongValue);
            }
            s.a(byteBuffer2);
            if (s.a(byteBuffer2, byteBuffer2.position() + 12) + jA != jLongValue) {
                throw new n("ZIP Central Directory is not immediately followed by End of Central Directory");
            }
            if (jA < 32) {
                throw new n("APK too small for APK Signing Block. ZIP Central Directory offset: ".concat(String.valueOf(jA)));
            }
            ByteBuffer byteBufferAllocate = ByteBuffer.allocate(24);
            byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
            randomAccessFile.seek(jA - ((long) byteBufferAllocate.capacity()));
            randomAccessFile.readFully(byteBufferAllocate.array(), byteBufferAllocate.arrayOffset(), byteBufferAllocate.capacity());
            if (byteBufferAllocate.getLong(8) == ApkUtil.APK_SIG_BLOCK_MAGIC_LO && byteBufferAllocate.getLong(16) == ApkUtil.APK_SIG_BLOCK_MAGIC_HI) {
                long j5 = byteBufferAllocate.getLong(0);
                if (j5 < byteBufferAllocate.capacity() || j5 > 2147483639) {
                    throw new n("APK Signing Block size out of range: ".concat(String.valueOf(j5)));
                }
                int i2 = (int) (8 + j5);
                long j6 = jA - ((long) i2);
                if (j6 < 0) {
                    throw new n("APK Signing Block offset out of range: ".concat(String.valueOf(j6)));
                }
                ByteBuffer byteBufferAllocate2 = ByteBuffer.allocate(i2);
                byteBufferAllocate2.order(ByteOrder.LITTLE_ENDIAN);
                randomAccessFile.seek(j6);
                randomAccessFile.readFully(byteBufferAllocate2.array(), byteBufferAllocate2.arrayOffset(), byteBufferAllocate2.capacity());
                long j7 = byteBufferAllocate2.getLong(0);
                if (j7 != j5) {
                    throw new n("APK Signing Block sizes in header and footer do not match: " + j7 + " vs " + j5);
                }
                pairCreate = Pair.create(byteBufferAllocate2, Long.valueOf(j6));
            } else {
                pairCreate = null;
            }
            if (pairCreate == null) {
                return;
            }
            ByteBuffer byteBuffer3 = (ByteBuffer) pairCreate.first;
            long jLongValue2 = ((Long) pairCreate.second).longValue();
            if (byteBuffer3.order() == ByteOrder.LITTLE_ENDIAN) {
                ByteBuffer byteBufferA = a(byteBuffer3, byteBuffer3.capacity() - 24);
                HashSet hashSet2 = new HashSet();
                for (int i3 = 0; i3 < 2; i3++) {
                    hashSet2.add(Integer.valueOf(iArr[i3]));
                }
                while (byteBufferA.hasRemaining() && byteBufferA.remaining() >= 8) {
                    long j8 = byteBufferA.getLong();
                    if (j8 < 4 || j8 > 2147483647L) {
                        return;
                    }
                    int i4 = (int) j8;
                    int iPosition = byteBufferA.position() + i4;
                    if (i4 > byteBufferA.remaining()) {
                        return;
                    }
                    int i5 = byteBufferA.getInt();
                    if (hashSet2.contains(Integer.valueOf(i5))) {
                        SparseArray<m> sparseArray = a.get(str2);
                        ByteBuffer byteBufferB = b(byteBufferA, i4 - 4);
                        i = iPosition;
                        hashSet = hashSet2;
                        j2 = jA;
                        j = jLongValue2;
                        j3 = jLongValue;
                        sparseArray.put(i5, new m(byteBufferB, jLongValue2, jA, jLongValue, byteBuffer2));
                        byteBuffer = byteBufferA;
                    } else {
                        j = jLongValue2;
                        i = iPosition;
                        hashSet = hashSet2;
                        j2 = jA;
                        j3 = jLongValue;
                        byteBuffer = byteBufferA;
                    }
                    byteBuffer.position(i);
                    byteBufferA = byteBuffer;
                    jLongValue = j3;
                    hashSet2 = hashSet;
                    jA = j2;
                    jLongValue2 = j;
                    str2 = str;
                }
                return;
            }
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
        throw new n("Not an APK file: ZIP End of Central Directory record not found");
    }

    static class a implements j {
        private final MessageDigest[] a;

        a(MessageDigest[] messageDigestArr) {
            this.a = messageDigestArr;
        }

        @Override
        public final void a(ByteBuffer byteBuffer) {
            ByteBuffer byteBufferSlice = byteBuffer.slice();
            for (MessageDigest messageDigest : this.a) {
                byteBufferSlice.position(0);
                messageDigest.update(byteBufferSlice);
            }
        }
    }
}
