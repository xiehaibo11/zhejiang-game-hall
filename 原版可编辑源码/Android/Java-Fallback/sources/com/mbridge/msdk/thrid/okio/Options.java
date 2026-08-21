package com.mbridge.msdk.thrid.okio;

public final class Options extends java.util.AbstractList<com.mbridge.msdk.thrid.okio.ByteString> implements java.util.RandomAccess {
    final com.mbridge.msdk.thrid.okio.ByteString[] byteStrings;
    final int[] trie;

    private Options(com.mbridge.msdk.thrid.okio.ByteString[] r1, int[] r2) {
            r0 = this;
            r0.<init>()
            r0.byteStrings = r1
            r0.trie = r2
            return
    }

    private static void buildTrieRecursive(long r17, com.mbridge.msdk.thrid.okio.Buffer r19, int r20, java.util.List<com.mbridge.msdk.thrid.okio.ByteString> r21, int r22, int r23, java.util.List<java.lang.Integer> r24) {
            r0 = r19
            r1 = r20
            r10 = r21
            r2 = r22
            r11 = r23
            r12 = r24
            if (r2 >= r11) goto L1ba
            r3 = r2
        Lf:
            if (r3 >= r11) goto L26
            java.lang.Object r4 = r10.get(r3)
            com.mbridge.msdk.thrid.okio.ByteString r4 = (com.mbridge.msdk.thrid.okio.ByteString) r4
            int r4 = r4.size()
            if (r4 < r1) goto L20
            int r3 = r3 + 1
            goto Lf
        L20:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
        L26:
            java.lang.Object r3 = r21.get(r22)
            com.mbridge.msdk.thrid.okio.ByteString r3 = (com.mbridge.msdk.thrid.okio.ByteString) r3
            int r4 = r11 + (-1)
            java.lang.Object r4 = r10.get(r4)
            com.mbridge.msdk.thrid.okio.ByteString r4 = (com.mbridge.msdk.thrid.okio.ByteString) r4
            r5 = -1
            int r6 = r3.size()
            if (r1 != r6) goto L4d
            java.lang.Object r3 = r12.get(r2)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r5 = r3.intValue()
            int r2 = r2 + 1
            java.lang.Object r3 = r10.get(r2)
            com.mbridge.msdk.thrid.okio.ByteString r3 = (com.mbridge.msdk.thrid.okio.ByteString) r3
        L4d:
            r6 = r2
            byte r2 = r3.getByte(r1)
            byte r7 = r4.getByte(r1)
            r8 = 2
            if (r2 == r7) goto L12c
            int r2 = r6 + 1
            r3 = 1
        L5d:
            if (r2 >= r11) goto L7c
            int r4 = r2 + (-1)
            java.lang.Object r4 = r10.get(r4)
            com.mbridge.msdk.thrid.okio.ByteString r4 = (com.mbridge.msdk.thrid.okio.ByteString) r4
            byte r4 = r4.getByte(r1)
            java.lang.Object r7 = r10.get(r2)
            com.mbridge.msdk.thrid.okio.ByteString r7 = (com.mbridge.msdk.thrid.okio.ByteString) r7
            byte r7 = r7.getByte(r1)
            if (r4 == r7) goto L79
            int r3 = r3 + 1
        L79:
            int r2 = r2 + 1
            goto L5d
        L7c:
            int r2 = intCount(r19)
            long r13 = (long) r2
            long r13 = r17 + r13
            long r13 = r13 + r8
            int r2 = r3 * 2
            long r7 = (long) r2
            long r13 = r13 + r7
            r0.writeInt(r3)
            r0.writeInt(r5)
            r2 = r6
        L8f:
            if (r2 >= r11) goto Lb3
            java.lang.Object r3 = r10.get(r2)
            com.mbridge.msdk.thrid.okio.ByteString r3 = (com.mbridge.msdk.thrid.okio.ByteString) r3
            byte r3 = r3.getByte(r1)
            if (r2 == r6) goto Lab
            int r4 = r2 + (-1)
            java.lang.Object r4 = r10.get(r4)
            com.mbridge.msdk.thrid.okio.ByteString r4 = (com.mbridge.msdk.thrid.okio.ByteString) r4
            byte r4 = r4.getByte(r1)
            if (r3 == r4) goto Lb0
        Lab:
            r3 = r3 & 255(0xff, float:3.57E-43)
            r0.writeInt(r3)
        Lb0:
            int r2 = r2 + 1
            goto L8f
        Lb3:
            com.mbridge.msdk.thrid.okio.Buffer r9 = new com.mbridge.msdk.thrid.okio.Buffer
            r9.<init>()
            r7 = r6
        Lb9:
            if (r7 >= r11) goto L11f
            java.lang.Object r2 = r10.get(r7)
            com.mbridge.msdk.thrid.okio.ByteString r2 = (com.mbridge.msdk.thrid.okio.ByteString) r2
            byte r2 = r2.getByte(r1)
            int r3 = r7 + 1
            r4 = r3
        Lc8:
            if (r4 >= r11) goto Ldb
            java.lang.Object r5 = r10.get(r4)
            com.mbridge.msdk.thrid.okio.ByteString r5 = (com.mbridge.msdk.thrid.okio.ByteString) r5
            byte r5 = r5.getByte(r1)
            if (r2 == r5) goto Ld8
            r8 = r4
            goto Ldc
        Ld8:
            int r4 = r4 + 1
            goto Lc8
        Ldb:
            r8 = r11
        Ldc:
            if (r3 != r8) goto Lfe
            int r2 = r1 + 1
            java.lang.Object r3 = r10.get(r7)
            com.mbridge.msdk.thrid.okio.ByteString r3 = (com.mbridge.msdk.thrid.okio.ByteString) r3
            int r3 = r3.size()
            if (r2 != r3) goto Lfe
            java.lang.Object r2 = r12.get(r7)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            r0.writeInt(r2)
            r16 = r8
            r17 = r9
            goto L11a
        Lfe:
            int r2 = intCount(r9)
            long r2 = (long) r2
            long r2 = r2 + r13
            r4 = -1
            long r2 = r2 * r4
            int r2 = (int) r2
            r0.writeInt(r2)
            int r5 = r1 + 1
            r2 = r13
            r4 = r9
            r6 = r21
            r16 = r8
            r17 = r9
            r9 = r24
            buildTrieRecursive(r2, r4, r5, r6, r7, r8, r9)
        L11a:
            r9 = r17
            r7 = r16
            goto Lb9
        L11f:
            r17 = r9
            long r1 = r17.size()
            r3 = r17
            r0.write(r3, r1)
            goto L1b9
        L12c:
            r2 = 0
            int r7 = r3.size()
            int r13 = r4.size()
            int r7 = java.lang.Math.min(r7, r13)
            r13 = r1
        L13a:
            if (r13 >= r7) goto L14b
            byte r14 = r3.getByte(r13)
            byte r15 = r4.getByte(r13)
            if (r14 != r15) goto L14b
            int r2 = r2 + 1
            int r13 = r13 + 1
            goto L13a
        L14b:
            int r4 = intCount(r19)
            long r13 = (long) r4
            long r13 = r17 + r13
            long r13 = r13 + r8
            long r7 = (long) r2
            long r13 = r13 + r7
            r7 = 1
            long r7 = r7 + r13
            int r4 = -r2
            r0.writeInt(r4)
            r0.writeInt(r5)
            r4 = r1
        L160:
            int r5 = r1 + r2
            if (r4 >= r5) goto L170
            byte r5 = r3.getByte(r4)
            r5 = r5 & 255(0xff, float:3.57E-43)
            r0.writeInt(r5)
            int r4 = r4 + 1
            goto L160
        L170:
            int r1 = r6 + 1
            if (r1 != r11) goto L194
            java.lang.Object r1 = r10.get(r6)
            com.mbridge.msdk.thrid.okio.ByteString r1 = (com.mbridge.msdk.thrid.okio.ByteString) r1
            int r1 = r1.size()
            if (r5 != r1) goto L18e
            java.lang.Object r1 = r12.get(r6)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r0.writeInt(r1)
            goto L1b9
        L18e:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
        L194:
            com.mbridge.msdk.thrid.okio.Buffer r9 = new com.mbridge.msdk.thrid.okio.Buffer
            r9.<init>()
            int r1 = intCount(r9)
            long r1 = (long) r1
            long r1 = r1 + r7
            r3 = -1
            long r1 = r1 * r3
            int r1 = (int) r1
            r0.writeInt(r1)
            r1 = r7
            r3 = r9
            r4 = r5
            r5 = r21
            r7 = r23
            r8 = r24
            buildTrieRecursive(r1, r3, r4, r5, r6, r7, r8)
            long r1 = r9.size()
            r0.write(r9, r1)
        L1b9:
            return
        L1ba:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
    }

    private static int intCount(com.mbridge.msdk.thrid.okio.Buffer r4) {
            long r0 = r4.size()
            r2 = 4
            long r0 = r0 / r2
            int r4 = (int) r0
            return r4
    }

    public static com.mbridge.msdk.thrid.okio.Options of(com.mbridge.msdk.thrid.okio.ByteString... r10) {
            int r0 = r10.length
            r1 = 0
            if (r0 != 0) goto L12
            com.mbridge.msdk.thrid.okio.Options r10 = new com.mbridge.msdk.thrid.okio.Options
            com.mbridge.msdk.thrid.okio.ByteString[] r0 = new com.mbridge.msdk.thrid.okio.ByteString[r1]
            r1 = 2
            int[] r1 = new int[r1]
            r1 = {x0100: FILL_ARRAY_DATA , data: [0, -1} // fill-array
            r10.<init>(r0, r1)
            return r10
        L12:
            java.util.ArrayList r6 = new java.util.ArrayList
            java.util.List r0 = java.util.Arrays.asList(r10)
            r6.<init>(r0)
            java.util.Collections.sort(r6)
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            r0 = r1
        L24:
            int r2 = r6.size()
            if (r0 >= r2) goto L35
            r2 = -1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r9.add(r2)
            int r0 = r0 + 1
            goto L24
        L35:
            r0 = r1
        L36:
            int r2 = r6.size()
            if (r0 >= r2) goto L4c
            r2 = r10[r0]
            int r2 = java.util.Collections.binarySearch(r6, r2)
            java.lang.Integer r3 = java.lang.Integer.valueOf(r0)
            r9.set(r2, r3)
            int r0 = r0 + 1
            goto L36
        L4c:
            java.lang.Object r0 = r6.get(r1)
            com.mbridge.msdk.thrid.okio.ByteString r0 = (com.mbridge.msdk.thrid.okio.ByteString) r0
            int r0 = r0.size()
            if (r0 == 0) goto Lf8
            r0 = r1
        L59:
            int r2 = r6.size()
            if (r0 >= r2) goto Lbe
            java.lang.Object r2 = r6.get(r0)
            com.mbridge.msdk.thrid.okio.ByteString r2 = (com.mbridge.msdk.thrid.okio.ByteString) r2
            int r3 = r0 + 1
            r4 = r3
        L68:
            int r5 = r6.size()
            if (r4 >= r5) goto Lbc
            java.lang.Object r5 = r6.get(r4)
            com.mbridge.msdk.thrid.okio.ByteString r5 = (com.mbridge.msdk.thrid.okio.ByteString) r5
            boolean r7 = r5.startsWith(r2)
            if (r7 != 0) goto L7b
            goto Lbc
        L7b:
            int r7 = r5.size()
            int r8 = r2.size()
            if (r7 == r8) goto La5
            java.lang.Object r5 = r9.get(r4)
            java.lang.Integer r5 = (java.lang.Integer) r5
            int r5 = r5.intValue()
            java.lang.Object r7 = r9.get(r0)
            java.lang.Integer r7 = (java.lang.Integer) r7
            int r7 = r7.intValue()
            if (r5 <= r7) goto La2
            r6.remove(r4)
            r9.remove(r4)
            goto L68
        La2:
            int r4 = r4 + 1
            goto L68
        La5:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "duplicate option: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        Lbc:
            r0 = r3
            goto L59
        Lbe:
            com.mbridge.msdk.thrid.okio.Buffer r0 = new com.mbridge.msdk.thrid.okio.Buffer
            r0.<init>()
            r2 = 0
            r5 = 0
            r7 = 0
            int r8 = r6.size()
            r4 = r0
            buildTrieRecursive(r2, r4, r5, r6, r7, r8, r9)
            int r2 = intCount(r0)
            int[] r3 = new int[r2]
        Ld5:
            if (r1 >= r2) goto Le0
            int r4 = r0.readInt()
            r3[r1] = r4
            int r1 = r1 + 1
            goto Ld5
        Le0:
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto Lf2
            com.mbridge.msdk.thrid.okio.Options r0 = new com.mbridge.msdk.thrid.okio.Options
            java.lang.Object r10 = r10.clone()
            com.mbridge.msdk.thrid.okio.ByteString[] r10 = (com.mbridge.msdk.thrid.okio.ByteString[]) r10
            r0.<init>(r10, r3)
            return r0
        Lf2:
            java.lang.AssertionError r10 = new java.lang.AssertionError
            r10.<init>()
            throw r10
        Lf8:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "the empty byte string is not a supported option"
            r10.<init>(r0)
            throw r10
    }

    @Override
    public com.mbridge.msdk.thrid.okio.ByteString get(int r2) {
            r1 = this;
            com.mbridge.msdk.thrid.okio.ByteString[] r0 = r1.byteStrings
            r2 = r0[r2]
            return r2
    }

    @Override
    public java.lang.Object get(int r1) {
            r0 = this;
            com.mbridge.msdk.thrid.okio.ByteString r1 = r0.get(r1)
            return r1
    }

    @Override
    public final int size() {
            r1 = this;
            com.mbridge.msdk.thrid.okio.ByteString[] r0 = r1.byteStrings
            int r0 = r0.length
            return r0
    }
}
