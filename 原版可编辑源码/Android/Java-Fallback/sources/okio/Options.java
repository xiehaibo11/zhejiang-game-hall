package okio;

@kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0000\n\u0002\u0010\u0015\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\b\u0018\u0000 \u00152\b\u0012\u0004\u0012\u00020\u00020\u00012\u00060\u0003j\u0002`\u0004:\u0001\u0015B\u001f\b\u0002\u0012\u000e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0002\u0010\tJ\u0011\u0010\u0013\u001a\u00020\u00022\u0006\u0010\u0014\u001a\u00020\u000eH\u0096\u0002R\u001e\u0010\u0005\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00020\u0006X\u0080\u0004¢\u0006\n\n\u0002\u0010\f\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\r\u001a\u00020\u000e8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0007\u001a\u00020\bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0011\u0010\u0012¨\u0006\u0016"}, d2 = {"Lokio/Options;", "Lkotlin/collections/AbstractList;", "Lokio/ByteString;", "Ljava/util/RandomAccess;", "Lkotlin/collections/RandomAccess;", "byteStrings", "", "trie", "", "([Lokio/ByteString;[I)V", "getByteStrings$okio", "()[Lokio/ByteString;", "[Lokio/ByteString;", "size", "", "getSize", "()I", "getTrie$okio", "()[I", "get", "index", "Companion", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class Options extends kotlin.collections.AbstractList<okio.ByteString> implements java.util.RandomAccess {
    public static final okio.Options.Companion Companion = null;
    private final okio.ByteString[] byteStrings;
    private final int[] trie;

    @kotlin.Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\u0010\u0011\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002JT\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\n\u001a\u00020\u00042\u0006\u0010\u000b\u001a\u00020\u00052\b\b\u0002\u0010\f\u001a\u00020\r2\f\u0010\u000e\u001a\b\u0012\u0004\u0012\u00020\u00100\u000f2\b\b\u0002\u0010\u0011\u001a\u00020\r2\b\b\u0002\u0010\u0012\u001a\u00020\r2\f\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\r0\u000fH\u0002J!\u0010\u0014\u001a\u00020\u00152\u0012\u0010\u000e\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00100\u0016\"\u00020\u0010H\u0007¢\u0006\u0002\u0010\u0017R\u0018\u0010\u0003\u001a\u00020\u0004*\u00020\u00058BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lokio/Options$Companion;", "", "()V", "intCount", "", "Lokio/Buffer;", "getIntCount", "(Lokio/Buffer;)J", "buildTrieRecursive", "", "nodeOffset", "node", "byteStringOffset", "", "byteStrings", "", "Lokio/ByteString;", "fromIndex", "toIndex", "indexes", "of", "Lokio/Options;", "", "([Lokio/ByteString;)Lokio/Options;", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private final void buildTrieRecursive(long r21, okio.Buffer r23, int r24, java.util.List<? extends okio.ByteString> r25, int r26, int r27, java.util.List<java.lang.Integer> r28) {
                r20 = this;
                r9 = r20
                r10 = r23
                r11 = r24
                r12 = r25
                r0 = r26
                r13 = r27
                r14 = r28
                if (r0 >= r13) goto L12
                r3 = 1
                goto L13
            L12:
                r3 = 0
            L13:
                java.lang.String r4 = "Failed requirement."
                if (r3 == 0) goto L1f7
                if (r0 >= r13) goto L3e
                r3 = r0
            L1a:
                int r5 = r3 + 1
                java.lang.Object r3 = r12.get(r3)
                okio.ByteString r3 = (okio.ByteString) r3
                int r3 = r3.size()
                if (r3 < r11) goto L2a
                r3 = 1
                goto L2b
            L2a:
                r3 = 0
            L2b:
                if (r3 == 0) goto L32
                if (r5 < r13) goto L30
                goto L3e
            L30:
                r3 = r5
                goto L1a
            L32:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = r4.toString()
                r0.<init>(r1)
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                throw r0
            L3e:
                java.lang.Object r3 = r25.get(r26)
                okio.ByteString r3 = (okio.ByteString) r3
                int r4 = r13 + (-1)
                java.lang.Object r4 = r12.get(r4)
                okio.ByteString r4 = (okio.ByteString) r4
                int r5 = r3.size()
                r15 = -1
                if (r11 != r5) goto L69
                java.lang.Object r3 = r14.get(r0)
                java.lang.Number r3 = (java.lang.Number) r3
                int r3 = r3.intValue()
                int r0 = r0 + 1
                java.lang.Object r5 = r12.get(r0)
                okio.ByteString r5 = (okio.ByteString) r5
                r6 = r0
                r0 = r3
                r3 = r5
                goto L6b
            L69:
                r6 = r0
                r0 = r15
            L6b:
                byte r5 = r3.getByte(r11)
                byte r7 = r4.getByte(r11)
                r8 = 2
                if (r5 == r7) goto L153
                int r1 = r6 + 1
                r2 = 1
                if (r1 >= r13) goto L9c
            L7b:
                int r3 = r1 + 1
                int r4 = r1 + (-1)
                java.lang.Object r4 = r12.get(r4)
                okio.ByteString r4 = (okio.ByteString) r4
                byte r4 = r4.getByte(r11)
                java.lang.Object r1 = r12.get(r1)
                okio.ByteString r1 = (okio.ByteString) r1
                byte r1 = r1.getByte(r11)
                if (r4 == r1) goto L97
                int r2 = r2 + 1
            L97:
                if (r3 < r13) goto L9a
                goto L9c
            L9a:
                r1 = r3
                goto L7b
            L9c:
                long r3 = r9.getIntCount(r10)
                long r3 = r21 + r3
                long r7 = (long) r8
                long r3 = r3 + r7
                int r1 = r2 * 2
                long r7 = (long) r1
                long r16 = r3 + r7
                r10.writeInt(r2)
                r10.writeInt(r0)
                if (r6 >= r13) goto Ld8
                r0 = r6
            Lb2:
                int r1 = r0 + 1
                java.lang.Object r2 = r12.get(r0)
                okio.ByteString r2 = (okio.ByteString) r2
                byte r2 = r2.getByte(r11)
                if (r0 == r6) goto Lce
                int r0 = r0 + (-1)
                java.lang.Object r0 = r12.get(r0)
                okio.ByteString r0 = (okio.ByteString) r0
                byte r0 = r0.getByte(r11)
                if (r2 == r0) goto Ld3
            Lce:
                r0 = r2 & 255(0xff, float:3.57E-43)
                r10.writeInt(r0)
            Ld3:
                if (r1 < r13) goto Ld6
                goto Ld8
            Ld6:
                r0 = r1
                goto Lb2
            Ld8:
                okio.Buffer r8 = new okio.Buffer
                r8.<init>()
            Ldd:
                if (r6 >= r13) goto L148
                java.lang.Object r0 = r12.get(r6)
                okio.ByteString r0 = (okio.ByteString) r0
                byte r0 = r0.getByte(r11)
                int r1 = r6 + 1
                if (r1 >= r13) goto L103
                r2 = r1
            Lee:
                int r3 = r2 + 1
                java.lang.Object r4 = r12.get(r2)
                okio.ByteString r4 = (okio.ByteString) r4
                byte r4 = r4.getByte(r11)
                if (r0 == r4) goto Lfe
                r7 = r2
                goto L104
            Lfe:
                if (r3 < r13) goto L101
                goto L103
            L101:
                r2 = r3
                goto Lee
            L103:
                r7 = r13
            L104:
                if (r1 != r7) goto L126
                int r0 = r11 + 1
                java.lang.Object r1 = r12.get(r6)
                okio.ByteString r1 = (okio.ByteString) r1
                int r1 = r1.size()
                if (r0 != r1) goto L126
                java.lang.Object r0 = r14.get(r6)
                java.lang.Number r0 = (java.lang.Number) r0
                int r0 = r0.intValue()
                r10.writeInt(r0)
                r18 = r7
                r19 = r8
                goto L143
            L126:
                long r0 = r9.getIntCount(r8)
                long r0 = r16 + r0
                int r0 = (int) r0
                int r0 = r0 * r15
                r10.writeInt(r0)
                int r4 = r11 + 1
                r0 = r20
                r1 = r16
                r3 = r8
                r5 = r25
                r18 = r7
                r19 = r8
                r8 = r28
                r0.buildTrieRecursive(r1, r3, r4, r5, r6, r7, r8)
            L143:
                r6 = r18
                r8 = r19
                goto Ldd
            L148:
                r19 = r8
                r8 = r19
                okio.Source r8 = (okio.Source) r8
                r10.writeAll(r8)
                goto L1f6
            L153:
                int r5 = r3.size()
                int r7 = r4.size()
                int r5 = java.lang.Math.min(r5, r7)
                if (r11 >= r5) goto L17a
                r7 = r11
                r16 = 0
            L164:
                int r1 = r7 + 1
                byte r2 = r3.getByte(r7)
                byte r7 = r4.getByte(r7)
                if (r2 != r7) goto L177
                int r16 = r16 + 1
                if (r1 < r5) goto L175
                goto L177
            L175:
                r7 = r1
                goto L164
            L177:
                r1 = r16
                goto L17b
            L17a:
                r1 = 0
            L17b:
                long r4 = r9.getIntCount(r10)
                long r4 = r21 + r4
                long r7 = (long) r8
                long r4 = r4 + r7
                long r7 = (long) r1
                long r4 = r4 + r7
                r7 = 1
                long r4 = r4 + r7
                int r2 = -r1
                r10.writeInt(r2)
                r10.writeInt(r0)
                int r7 = r11 + r1
                if (r11 >= r7) goto L1a3
            L193:
                int r0 = r11 + 1
                byte r1 = r3.getByte(r11)
                r1 = r1 & 255(0xff, float:3.57E-43)
                r10.writeInt(r1)
                if (r0 < r7) goto L1a1
                goto L1a3
            L1a1:
                r11 = r0
                goto L193
            L1a3:
                int r0 = r6 + 1
                if (r0 != r13) goto L1d4
                java.lang.Object r0 = r12.get(r6)
                okio.ByteString r0 = (okio.ByteString) r0
                int r0 = r0.size()
                if (r7 != r0) goto L1b5
                r1 = 1
                goto L1b6
            L1b5:
                r1 = 0
            L1b6:
                if (r1 == 0) goto L1c6
                java.lang.Object r0 = r14.get(r6)
                java.lang.Number r0 = (java.lang.Number) r0
                int r0 = r0.intValue()
                r10.writeInt(r0)
                goto L1f6
            L1c6:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "Check failed."
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                throw r0
            L1d4:
                okio.Buffer r11 = new okio.Buffer
                r11.<init>()
                long r0 = r9.getIntCount(r11)
                long r0 = r0 + r4
                int r0 = (int) r0
                int r0 = r0 * r15
                r10.writeInt(r0)
                r0 = r20
                r1 = r4
                r3 = r11
                r4 = r7
                r5 = r25
                r7 = r27
                r8 = r28
                r0.buildTrieRecursive(r1, r3, r4, r5, r6, r7, r8)
                okio.Source r11 = (okio.Source) r11
                r10.writeAll(r11)
            L1f6:
                return
            L1f7:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = r4.toString()
                r0.<init>(r1)
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                throw r0
        }

        static void buildTrieRecursive$default(okio.Options.Companion r11, long r12, okio.Buffer r14, int r15, java.util.List r16, int r17, int r18, java.util.List r19, int r20, java.lang.Object r21) {
                r0 = r20 & 1
                if (r0 == 0) goto L8
                r0 = 0
                r3 = r0
                goto L9
            L8:
                r3 = r12
            L9:
                r0 = r20 & 4
                r1 = 0
                if (r0 == 0) goto L10
                r6 = r1
                goto L11
            L10:
                r6 = r15
            L11:
                r0 = r20 & 16
                if (r0 == 0) goto L17
                r8 = r1
                goto L19
            L17:
                r8 = r17
            L19:
                r0 = r20 & 32
                if (r0 == 0) goto L23
                int r0 = r16.size()
                r9 = r0
                goto L25
            L23:
                r9 = r18
            L25:
                r2 = r11
                r5 = r14
                r7 = r16
                r10 = r19
                r2.buildTrieRecursive(r3, r5, r6, r7, r8, r9, r10)
                return
        }

        private final long getIntCount(okio.Buffer r5) {
                r4 = this;
                long r0 = r5.size()
                r5 = 4
                long r2 = (long) r5
                long r0 = r0 / r2
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final okio.Options of(okio.ByteString... r17) {
                r16 = this;
                r0 = r17
                java.lang.String r1 = "byteStrings"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r1)
                int r1 = r0.length
                r2 = 1
                r3 = 0
                if (r1 != 0) goto Le
                r1 = r2
                goto Lf
            Le:
                r1 = r3
            Lf:
                r4 = 0
                if (r1 == 0) goto L20
                okio.Options r0 = new okio.Options
                okio.ByteString[] r1 = new okio.ByteString[r3]
                r2 = 2
                int[] r2 = new int[r2]
                r2 = {x0148: FILL_ARRAY_DATA , data: [0, -1} // fill-array
                r0.<init>(r1, r2, r4)
                return r0
            L20:
                java.util.List r1 = kotlin.collections.ArraysKt.toMutableList(r17)
                kotlin.collections.CollectionsKt.sort(r1)
                java.util.ArrayList r5 = new java.util.ArrayList
                int r6 = r0.length
                r5.<init>(r6)
                java.util.Collection r5 = (java.util.Collection) r5
                int r6 = r0.length
                r7 = r3
            L31:
                if (r7 >= r6) goto L40
                r8 = r0[r7]
                r8 = -1
                java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
                r5.add(r8)
                int r7 = r7 + 1
                goto L31
            L40:
                java.util.List r5 = (java.util.List) r5
                java.util.Collection r5 = (java.util.Collection) r5
                java.lang.Integer[] r6 = new java.lang.Integer[r3]
                java.lang.Object[] r5 = r5.toArray(r6)
                if (r5 == 0) goto L13d
                java.lang.Integer[] r5 = (java.lang.Integer[]) r5
                int r6 = r5.length
                java.lang.Object[] r5 = java.util.Arrays.copyOf(r5, r6)
                java.util.List r13 = kotlin.collections.CollectionsKt.mutableListOf(r5)
                int r11 = r0.length
                r12 = r3
                r14 = r12
            L5a:
                if (r12 >= r11) goto L77
                r5 = r0[r12]
                int r15 = r14 + 1
                r6 = r5
                java.lang.Comparable r6 = (java.lang.Comparable) r6
                r7 = 0
                r8 = 0
                r9 = 6
                r10 = 0
                r5 = r1
                int r5 = kotlin.collections.CollectionsKt.binarySearch$default(r5, r6, r7, r8, r9, r10)
                java.lang.Integer r6 = java.lang.Integer.valueOf(r14)
                r13.set(r5, r6)
                int r12 = r12 + 1
                r14 = r15
                goto L5a
            L77:
                java.lang.Object r5 = r1.get(r3)
                okio.ByteString r5 = (okio.ByteString) r5
                int r5 = r5.size()
                if (r5 <= 0) goto L85
                r5 = r2
                goto L86
            L85:
                r5 = r3
            L86:
                if (r5 == 0) goto L12d
                r5 = r3
            L89:
                int r6 = r1.size()
                if (r5 >= r6) goto Lee
                java.lang.Object r6 = r1.get(r5)
                okio.ByteString r6 = (okio.ByteString) r6
                int r7 = r5 + 1
                r8 = r7
            L98:
                int r9 = r1.size()
                if (r8 >= r9) goto Lec
                java.lang.Object r9 = r1.get(r8)
                okio.ByteString r9 = (okio.ByteString) r9
                boolean r10 = r9.startsWith(r6)
                if (r10 != 0) goto Lab
                goto Lec
            Lab:
                int r10 = r9.size()
                int r11 = r6.size()
                if (r10 == r11) goto Lb7
                r10 = r2
                goto Lb8
            Lb7:
                r10 = r3
            Lb8:
                if (r10 == 0) goto Lda
                java.lang.Object r9 = r13.get(r8)
                java.lang.Number r9 = (java.lang.Number) r9
                int r9 = r9.intValue()
                java.lang.Object r10 = r13.get(r5)
                java.lang.Number r10 = (java.lang.Number) r10
                int r10 = r10.intValue()
                if (r9 <= r10) goto Ld7
                r1.remove(r8)
                r13.remove(r8)
                goto L98
            Ld7:
                int r8 = r8 + 1
                goto L98
            Lda:
                java.lang.String r0 = "duplicate option: "
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r9)
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r0 = r0.toString()
                r1.<init>(r0)
                java.lang.Throwable r1 = (java.lang.Throwable) r1
                throw r1
            Lec:
                r5 = r7
                goto L89
            Lee:
                okio.Buffer r2 = new okio.Buffer
                r2.<init>()
                r6 = 0
                r9 = 0
                r11 = 0
                r12 = 0
                r14 = 53
                r15 = 0
                r5 = r16
                r8 = r2
                r10 = r1
                buildTrieRecursive$default(r5, r6, r8, r9, r10, r11, r12, r13, r14, r15)
                r1 = r16
                long r5 = r1.getIntCount(r2)
                int r5 = (int) r5
                int[] r5 = new int[r5]
            L10b:
                boolean r6 = r2.exhausted()
                if (r6 != 0) goto L11b
                int r6 = r3 + 1
                int r7 = r2.readInt()
                r5[r3] = r7
                r3 = r6
                goto L10b
            L11b:
                okio.Options r2 = new okio.Options
                int r3 = r0.length
                java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r3)
                java.lang.String r3 = "java.util.Arrays.copyOf(this, size)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r3)
                okio.ByteString[] r0 = (okio.ByteString[]) r0
                r2.<init>(r0, r5, r4)
                return r2
            L12d:
                r1 = r16
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "the empty byte string is not a supported option"
                java.lang.String r2 = r2.toString()
                r0.<init>(r2)
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                throw r0
            L13d:
                r1 = r16
                java.lang.NullPointerException r0 = new java.lang.NullPointerException
                java.lang.String r2 = "null cannot be cast to non-null type kotlin.Array<T>"
                r0.<init>(r2)
                throw r0
        }
    }

    static {
            okio.Options$Companion r0 = new okio.Options$Companion
            r1 = 0
            r0.<init>(r1)
            okio.Options.Companion = r0
            return
    }

    private Options(okio.ByteString[] r1, int[] r2) {
            r0 = this;
            r0.<init>()
            r0.byteStrings = r1
            r0.trie = r2
            return
    }

    public Options(okio.ByteString[] r1, int[] r2, kotlin.jvm.internal.DefaultConstructorMarker r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @kotlin.jvm.JvmStatic
    public static final okio.Options of(okio.ByteString... r1) {
            okio.Options$Companion r0 = okio.Options.Companion
            okio.Options r1 = r0.of(r1)
            return r1
    }

    @Override
    public final boolean contains(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof okio.ByteString
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            okio.ByteString r2 = (okio.ByteString) r2
            boolean r2 = r1.contains(r2)
            return r2
    }

    public boolean contains(okio.ByteString r1) {
            r0 = this;
            boolean r1 = super.contains(r1)
            return r1
    }

    @Override
    public java.lang.Object get(int r1) {
            r0 = this;
            okio.ByteString r1 = r0.get(r1)
            return r1
    }

    @Override
    public okio.ByteString get(int r2) {
            r1 = this;
            okio.ByteString[] r0 = r1.byteStrings
            r2 = r0[r2]
            return r2
    }

    public final okio.ByteString[] getByteStrings$okio() {
            r1 = this;
            okio.ByteString[] r0 = r1.byteStrings
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            okio.ByteString[] r0 = r1.byteStrings
            int r0 = r0.length
            return r0
    }

    public final int[] getTrie$okio() {
            r1 = this;
            int[] r0 = r1.trie
            return r0
    }

    @Override
    public final int indexOf(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof okio.ByteString
            if (r0 != 0) goto L6
            r2 = -1
            return r2
        L6:
            okio.ByteString r2 = (okio.ByteString) r2
            int r2 = r1.indexOf(r2)
            return r2
    }

    public int indexOf(okio.ByteString r1) {
            r0 = this;
            int r1 = super.indexOf(r1)
            return r1
    }

    @Override
    public final int lastIndexOf(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof okio.ByteString
            if (r0 != 0) goto L6
            r2 = -1
            return r2
        L6:
            okio.ByteString r2 = (okio.ByteString) r2
            int r2 = r1.lastIndexOf(r2)
            return r2
    }

    public int lastIndexOf(okio.ByteString r1) {
            r0 = this;
            int r1 = super.lastIndexOf(r1)
            return r1
    }
}
