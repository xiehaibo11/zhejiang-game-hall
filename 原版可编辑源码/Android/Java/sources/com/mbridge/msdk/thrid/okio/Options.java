package com.mbridge.msdk.thrid.okio;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;
import kotlin.UByte;

public final class Options extends AbstractList<ByteString> implements RandomAccess {
    final ByteString[] byteStrings;
    final int[] trie;

    private Options(ByteString[] byteStringArr, int[] iArr) {
        this.byteStrings = byteStringArr;
        this.trie = iArr;
    }

    /* JADX WARN: Code restructure failed: missing block: B:50:0x00bc, code lost:
    
        continue;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static Options of(ByteString... byteStringArr) {
        if (byteStringArr.length == 0) {
            return new Options(new ByteString[0], new int[]{0, -1});
        }
        ArrayList arrayList = new ArrayList(Arrays.asList(byteStringArr));
        Collections.sort(arrayList);
        ArrayList arrayList2 = new ArrayList();
        for (int i = 0; i < arrayList.size(); i++) {
            arrayList2.add(-1);
        }
        for (int i2 = 0; i2 < arrayList.size(); i2++) {
            arrayList2.set(Collections.binarySearch(arrayList, byteStringArr[i2]), Integer.valueOf(i2));
        }
        if (((ByteString) arrayList.get(0)).size() == 0) {
            throw new IllegalArgumentException("the empty byte string is not a supported option");
        }
        int i3 = 0;
        while (i3 < arrayList.size()) {
            ByteString byteString = (ByteString) arrayList.get(i3);
            int i4 = i3 + 1;
            int i5 = i4;
            while (i5 < arrayList.size()) {
                ByteString byteString2 = (ByteString) arrayList.get(i5);
                if (!byteString2.startsWith(byteString)) {
                    break;
                }
                if (byteString2.size() == byteString.size()) {
                    throw new IllegalArgumentException("duplicate option: " + byteString2);
                }
                if (((Integer) arrayList2.get(i5)).intValue() > ((Integer) arrayList2.get(i3)).intValue()) {
                    arrayList.remove(i5);
                    arrayList2.remove(i5);
                } else {
                    i5++;
                }
            }
            i3 = i4;
        }
        Buffer buffer = new Buffer();
        buildTrieRecursive(0L, buffer, 0, arrayList, 0, arrayList.size(), arrayList2);
        int iIntCount = intCount(buffer);
        int[] iArr = new int[iIntCount];
        for (int i6 = 0; i6 < iIntCount; i6++) {
            iArr[i6] = buffer.readInt();
        }
        if (!buffer.exhausted()) {
            throw new AssertionError();
        }
        return new Options((ByteString[]) byteStringArr.clone(), iArr);
    }

    private static void buildTrieRecursive(long j, Buffer buffer, int i, List<ByteString> list, int i2, int i3, List<Integer> list2) {
        int i4;
        int i5;
        int i6;
        Buffer buffer2;
        int i7 = i2;
        if (i7 >= i3) {
            throw new AssertionError();
        }
        for (int i8 = i7; i8 < i3; i8++) {
            if (list.get(i8).size() < i) {
                throw new AssertionError();
            }
        }
        ByteString byteString = list.get(i2);
        ByteString byteString2 = list.get(i3 - 1);
        int iIntValue = -1;
        if (i == byteString.size()) {
            iIntValue = list2.get(i7).intValue();
            i7++;
            byteString = list.get(i7);
        }
        int i9 = i7;
        if (byteString.getByte(i) != byteString2.getByte(i)) {
            int i10 = 1;
            for (int i11 = i9 + 1; i11 < i3; i11++) {
                if (list.get(i11 - 1).getByte(i) != list.get(i11).getByte(i)) {
                    i10++;
                }
            }
            long jIntCount = j + ((long) intCount(buffer)) + 2 + ((long) (i10 * 2));
            buffer.writeInt(i10);
            buffer.writeInt(iIntValue);
            for (int i12 = i9; i12 < i3; i12++) {
                byte b = list.get(i12).getByte(i);
                if (i12 == i9 || b != list.get(i12 - 1).getByte(i)) {
                    buffer.writeInt(b & UByte.MAX_VALUE);
                }
            }
            Buffer buffer3 = new Buffer();
            int i13 = i9;
            while (i13 < i3) {
                byte b2 = list.get(i13).getByte(i);
                int i14 = i13 + 1;
                int i15 = i14;
                while (true) {
                    if (i15 >= i3) {
                        i5 = i3;
                        break;
                    } else {
                        if (b2 != list.get(i15).getByte(i)) {
                            i5 = i15;
                            break;
                        }
                        i15++;
                    }
                }
                if (i14 == i5 && i + 1 == list.get(i13).size()) {
                    buffer.writeInt(list2.get(i13).intValue());
                    i6 = i5;
                    buffer2 = buffer3;
                } else {
                    buffer.writeInt((int) ((((long) intCount(buffer3)) + jIntCount) * (-1)));
                    i6 = i5;
                    buffer2 = buffer3;
                    buildTrieRecursive(jIntCount, buffer3, i + 1, list, i13, i5, list2);
                }
                buffer3 = buffer2;
                i13 = i6;
            }
            Buffer buffer4 = buffer3;
            buffer.write(buffer4, buffer4.size());
            return;
        }
        int i16 = 0;
        int iMin = Math.min(byteString.size(), byteString2.size());
        for (int i17 = i; i17 < iMin && byteString.getByte(i17) == byteString2.getByte(i17); i17++) {
            i16++;
        }
        long jIntCount2 = 1 + j + ((long) intCount(buffer)) + 2 + ((long) i16);
        buffer.writeInt(-i16);
        buffer.writeInt(iIntValue);
        int i18 = i;
        while (true) {
            i4 = i + i16;
            if (i18 >= i4) {
                break;
            }
            buffer.writeInt(byteString.getByte(i18) & UByte.MAX_VALUE);
            i18++;
        }
        if (i9 + 1 == i3) {
            if (i4 != list.get(i9).size()) {
                throw new AssertionError();
            }
            buffer.writeInt(list2.get(i9).intValue());
        } else {
            Buffer buffer5 = new Buffer();
            buffer.writeInt((int) ((((long) intCount(buffer5)) + jIntCount2) * (-1)));
            buildTrieRecursive(jIntCount2, buffer5, i4, list, i9, i3, list2);
            buffer.write(buffer5, buffer5.size());
        }
    }

    @Override
    public ByteString get(int i) {
        return this.byteStrings[i];
    }

    @Override
    public final int size() {
        return this.byteStrings.length;
    }

    private static int intCount(Buffer buffer) {
        return (int) (buffer.size() / 4);
    }
}
