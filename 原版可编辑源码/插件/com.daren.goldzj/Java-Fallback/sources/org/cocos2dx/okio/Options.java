package org.cocos2dx.okio;

import java.util.AbstractList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.RandomAccess;

public final class Options extends AbstractList<ByteString> implements RandomAccess {
    final ByteString[] byteStrings;
    final int[] trie;

    @Override
    public Object get(int r1) {
        return get(r1);
    }

    private Options(ByteString[] r1, int[] r2) {
        this.byteStrings = r1;
        this.trie = r2;
    }

    public static Options of(ByteString... r10) {
        int r1 = 0;
        if (r10.length == 0) goto L5;
        ArrayList r6 = new ArrayList(Arrays.asList(r10));
        Collections.sort(r6);
        ArrayList r9 = new ArrayList();
        int r0 = 0;
    L8:
        if (r0 >= r6.size()) goto L10;
        r9.add(-1);
        r0 = r0 + 1;
        goto L8
    L10:
        int r02 = 0;
    L12:
        if (r02 >= r6.size()) goto L15;
        r9.set(Collections.binarySearch(r6, r10[r02]), Integer.valueOf(r02));
        r02 = r02 + 1;
        goto L12
    L15:
        if (((ByteString) r6.get(0)).size() == 0) goto L45;
        int r03 = 0;
    L18:
        if (r03 >= r6.size()) goto L34;
        ByteString r2 = (ByteString) r6.get(r03);
        int r3 = r03 + 1;
        int r4 = r3;
    L21:
        if (r4 >= r6.size()) goto L33;
        ByteString r5 = (ByteString) r6.get(r4);
        if (r5.startsWith(r2) == false) goto L33;
        if (r5.size() == r2.size()) goto L32;
        if (((Integer) r9.get(r4)).intValue() > ((Integer) r9.get(r03)).intValue()) goto L29;
        r4 = r4 + 1;
        goto L21
    L29:
        r6.remove(r4);
        r9.remove(r4);
        goto L21
    L32:
        throw new IllegalArgumentException("duplicate option: " + r5);
    L33:
        r03 = r3;
        goto L18
    L34:
        Buffer r04 = new Buffer();
        buildTrieRecursive(0, r04, 0, r6, 0, r6.size(), r9);
        int[] r22 = new int[intCount(r04)];
    L36:
        if (r1 >= r22.length) goto L39;
        r22[r1] = r04.readInt();
        r1 = r1 + 1;
        goto L36
    L39:
        if (r04.exhausted() == false) goto L43;
        return new Options((ByteString[]) r10.clone(), r22);
    L43:
        throw new AssertionError();
    L45:
        throw new IllegalArgumentException("the empty byte string is not a supported option");
    L5:
        return new Options(new ByteString[0], new int[]{0, -1});
    }

    private static void buildTrieRecursive(long r17, Buffer r19, int r20, List<ByteString> r21, int r22, int r23, List<Integer> r24) {
        int r2 = r22;
        if (r2 >= r23) goto L65;
        int r3 = r2;
    L5:
        if (r3 >= r23) goto L11;
        if (r21.get(r3).size() < r20) goto L10;
        r3 = r3 + 1;
        goto L5
    L10:
        throw new AssertionError();
    L11:
        ByteString r32 = r21.get(r22);
        ByteString r4 = r21.get(r23 - 1);
        int r5 = -1;
        if (r20 != r32.size()) goto L14;
        r5 = r24.get(r2).intValue();
        r2 = r2 + 1;
        r32 = r21.get(r2);
    L14:
        int r6 = r2;
        if (r32.getByte(r20) == r4.getByte(r20)) goto L46;
        int r25 = r6 + 1;
        int r33 = 1;
    L17:
        if (r25 >= r23) goto L22;
        if (r21.get(r25 - 1).getByte(r20) == r21.get(r25).getByte(r20)) goto L21;
        r33 = r33 + 1;
    L21:
        r25 = r25 + 1;
        goto L17
    L22:
        long r13 = ((r17 + ((long) intCount(r19))) + 2) + ((long) (r33 * 2));
        r19.writeInt(r33);
        r19.writeInt(r5);
        int r26 = r6;
    L23:
        if (r26 >= r23) goto L30;
        byte r34 = r21.get(r26).getByte(r20);
        if (r26 != r6) goto L27;
    L28:
        r19.writeInt(r34 & 255);
    L29:
        r26 = r26 + 1;
        goto L23
    L27:
        if (r34 == r21.get(r26 - 1).getByte(r20)) goto L29;
    L30:
        Buffer r9 = new Buffer();
        int r7 = r6;
    L31:
        if (r7 >= r23) goto L45;
        byte r27 = r21.get(r7).getByte(r20);
        int r35 = r7 + 1;
        int r42 = r35;
    L33:
        if (r42 >= r23) goto L38;
        if (r27 != r21.get(r42).getByte(r20)) goto L36;
        r42 = r42 + 1;
        goto L33
    L36:
        int r8 = r42;
    L39:
        if (r35 == r8) goto L41;
    L43:
        r19.writeInt((int) ((((long) intCount(r9)) + r13) * (-1)));
        int r16 = r8;
        Buffer r172 = r9;
        buildTrieRecursive(r13, r9, r20 + 1, r21, r7, r8, r24);
    L44:
        r9 = r172;
        r7 = r16;
        goto L31
    L41:
        if ((r20 + 1) != r21.get(r7).size()) goto L43;
        r19.writeInt(r24.get(r7).intValue());
        r16 = r8;
        r172 = r9;
        goto L44
    L38:
        r8 = r23;
        goto L39
    L45:
        Buffer r173 = r9;
        r19.write(r173, r173.size());
        return;
    L46:
        int r72 = Math.min(r32.size(), r4.size());
        int r28 = r20;
        int r132 = 0;
    L47:
        if (r28 >= r72) goto L51;
        if (r32.getByte(r28) != r4.getByte(r28)) goto L51;
        r132 = r132 + 1;
        r28 = r28 + 1;
    L51:
        long r73 = 1 + (((r17 + ((long) intCount(r19))) + 2) + ((long) r132));
        r19.writeInt(-r132);
        r19.writeInt(r5);
        int r29 = r20;
    L52:
        int r43 = r20 + r132;
        if (r29 >= r43) goto L56;
        r19.writeInt(r32.getByte(r29) & 255);
        r29 = r29 + 1;
        goto L52
    L56:
        if ((r6 + 1) == r23) goto L58;
        Buffer r92 = new Buffer();
        r19.writeInt((int) ((((long) intCount(r92)) + r73) * (-1)));
        buildTrieRecursive(r73, r92, r43, r21, r6, r23, r24);
        r19.write(r92, r92.size());
        return;
    L58:
        if (r43 != r21.get(r6).size()) goto L61;
        r19.writeInt(r24.get(r6).intValue());
        return;
    L61:
        throw new AssertionError();
    L65:
        throw new AssertionError();
    }

    @Override
    public ByteString get(int r2) {
        return this.byteStrings[r2];
    }

    @Override
    public final int size() {
        return this.byteStrings.length;
    }

    private static int intCount(Buffer r4) {
        return (int) (r4.size() / 4);
    }
}
