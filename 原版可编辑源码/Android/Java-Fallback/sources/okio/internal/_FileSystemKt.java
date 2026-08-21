package okio.internal;

@kotlin.Metadata(d1 = {"\u00004\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001aI\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u00022\u0006\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u00072\u0006\u0010\b\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\nH\u0080@ø\u0001\u0000¢\u0006\u0002\u0010\f\u001a\u001c\u0010\r\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u00032\u0006\u0010\u000f\u001a\u00020\u0003H\u0000\u001a\u001c\u0010\u0010\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u00032\u0006\u0010\u0012\u001a\u00020\nH\u0000\u001a\u001c\u0010\u0013\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u0014\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\nH\u0000\u001a\u0014\u0010\u0016\u001a\u00020\n*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u001a\"\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00030\u0018*\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\nH\u0000\u001a\u0014\u0010\u0019\u001a\u00020\u001a*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u001a\u0016\u0010\u001b\u001a\u0004\u0018\u00010\u0003*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001c"}, d2 = {"collectRecursively", "", "Lkotlin/sequences/SequenceScope;", "Lokio/Path;", "fileSystem", "Lokio/FileSystem;", "stack", "Lkotlin/collections/ArrayDeque;", "path", "followSymlinks", "", "postorder", "(Lkotlin/sequences/SequenceScope;Lokio/FileSystem;Lkotlin/collections/ArrayDeque;Lokio/Path;ZZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "commonCopy", "source", "target", "commonCreateDirectories", "dir", "mustCreate", "commonDeleteRecursively", "fileOrDirectory", "mustExist", "commonExists", "commonListRecursively", "Lkotlin/sequences/Sequence;", "commonMetadata", "Lokio/FileMetadata;", "symlinkTarget", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _FileSystemKt {

    @kotlin.Metadata(k = 3, mv = {1, 5, 1}, xi = 48)
    @kotlin.coroutines.jvm.internal.DebugMetadata(c = "okio.internal._FileSystemKt", f = "-FileSystem.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1}, l = {113, 132, 142}, m = "collectRecursively", n = {"$this$collectRecursively", "fileSystem", "stack", "path", "followSymlinks", "postorder", "$this$collectRecursively", "fileSystem", "stack", "path", "followSymlinks", "postorder"}, s = {"L$0", "L$1", "L$2", "L$3", "Z$0", "Z$1", "L$0", "L$1", "L$2", "L$3", "Z$0", "Z$1"})
    static final class 1 extends kotlin.coroutines.jvm.internal.ContinuationImpl {
        java.lang.Object L$0;
        java.lang.Object L$1;
        java.lang.Object L$2;
        java.lang.Object L$3;
        java.lang.Object L$4;
        boolean Z$0;
        boolean Z$1;
        int label;
        java.lang.Object result;

        1(kotlin.coroutines.Continuation<? super okio.internal._FileSystemKt.collectRecursively.1> r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final java.lang.Object invokeSuspend(java.lang.Object r8) {
                r7 = this;
                r7.result = r8
                int r8 = r7.label
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                r8 = r8 | r0
                r7.label = r8
                r6 = r7
                kotlin.coroutines.Continuation r6 = (kotlin.coroutines.Continuation) r6
                r0 = 0
                r1 = 0
                r2 = 0
                r3 = 0
                r4 = 0
                r5 = 0
                java.lang.Object r8 = okio.internal._FileSystemKt.collectRecursively(r0, r1, r2, r3, r4, r5, r6)
                return r8
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Lokio/Path;"}, k = 3, mv = {1, 5, 1}, xi = 48)
    @kotlin.coroutines.jvm.internal.DebugMetadata(c = "okio.internal._FileSystemKt$commonListRecursively$1", f = "-FileSystem.kt", i = {0, 0}, l = {93}, m = "invokeSuspend", n = {"$this$sequence", "stack"}, s = {"L$0", "L$1"})
    static final class 1 extends kotlin.coroutines.jvm.internal.RestrictedSuspendLambda implements kotlin.jvm.functions.Function2<kotlin.sequences.SequenceScope<? super okio.Path>, kotlin.coroutines.Continuation<? super kotlin.Unit>, java.lang.Object> {
        final okio.Path $dir;
        final boolean $followSymlinks;
        final okio.FileSystem $this_commonListRecursively;
        private java.lang.Object L$0;
        java.lang.Object L$1;
        java.lang.Object L$2;
        int label;

        1(okio.Path r1, okio.FileSystem r2, boolean r3, kotlin.coroutines.Continuation<? super okio.internal._FileSystemKt.commonListRecursively.1> r4) {
                r0 = this;
                r0.$dir = r1
                r0.$this_commonListRecursively = r2
                r0.$followSymlinks = r3
                r1 = 2
                r0.<init>(r1, r4)
                return
        }

        @Override
        public final kotlin.coroutines.Continuation<kotlin.Unit> create(java.lang.Object r5, kotlin.coroutines.Continuation<?> r6) {
                r4 = this;
                okio.internal._FileSystemKt$commonListRecursively$1 r0 = new okio.internal._FileSystemKt$commonListRecursively$1
                okio.Path r1 = r4.$dir
                okio.FileSystem r2 = r4.$this_commonListRecursively
                boolean r3 = r4.$followSymlinks
                r0.<init>(r1, r2, r3, r6)
                r0.L$0 = r5
                kotlin.coroutines.Continuation r0 = (kotlin.coroutines.Continuation) r0
                return r0
        }

        @Override
        public java.lang.Object invoke(kotlin.sequences.SequenceScope<? super okio.Path> r1, kotlin.coroutines.Continuation<? super kotlin.Unit> r2) {
                r0 = this;
                kotlin.sequences.SequenceScope r1 = (kotlin.sequences.SequenceScope) r1
                kotlin.coroutines.Continuation r2 = (kotlin.coroutines.Continuation) r2
                java.lang.Object r1 = r0.invoke(r1, r2)
                return r1
        }

        public final java.lang.Object invoke(kotlin.sequences.SequenceScope<? super okio.Path> r1, kotlin.coroutines.Continuation<? super kotlin.Unit> r2) {
                r0 = this;
                kotlin.coroutines.Continuation r1 = r0.create(r1, r2)
                okio.internal._FileSystemKt$commonListRecursively$1 r1 = (okio.internal._FileSystemKt.commonListRecursively.1) r1
                kotlin.Unit r2 = kotlin.Unit.INSTANCE
                java.lang.Object r1 = r1.invokeSuspend(r2)
                return r1
        }

        @Override
        public final java.lang.Object invokeSuspend(java.lang.Object r13) {
                r12 = this;
                java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
                int r1 = r12.label
                r2 = 1
                if (r1 == 0) goto L26
                if (r1 != r2) goto L1e
                java.lang.Object r1 = r12.L$2
                java.util.Iterator r1 = (java.util.Iterator) r1
                java.lang.Object r3 = r12.L$1
                kotlin.collections.ArrayDeque r3 = (kotlin.collections.ArrayDeque) r3
                java.lang.Object r4 = r12.L$0
                kotlin.sequences.SequenceScope r4 = (kotlin.sequences.SequenceScope) r4
                kotlin.ResultKt.throwOnFailure(r13)
                r11 = r12
                r13 = r3
                r10 = r4
                goto L47
            L1e:
                java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
                java.lang.String r0 = "call to 'resume' before 'invoke' with coroutine"
                r13.<init>(r0)
                throw r13
            L26:
                kotlin.ResultKt.throwOnFailure(r13)
                java.lang.Object r13 = r12.L$0
                kotlin.sequences.SequenceScope r13 = (kotlin.sequences.SequenceScope) r13
                kotlin.collections.ArrayDeque r1 = new kotlin.collections.ArrayDeque
                r1.<init>()
                okio.Path r3 = r12.$dir
                r1.addLast(r3)
                okio.FileSystem r3 = r12.$this_commonListRecursively
                okio.Path r4 = r12.$dir
                java.util.List r3 = r3.list(r4)
                java.util.Iterator r3 = r3.iterator()
                r11 = r12
                r10 = r13
                r13 = r1
                r1 = r3
            L47:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto L6d
                java.lang.Object r3 = r1.next()
                r6 = r3
                okio.Path r6 = (okio.Path) r6
                okio.FileSystem r4 = r11.$this_commonListRecursively
                boolean r7 = r11.$followSymlinks
                r8 = 0
                r9 = r11
                kotlin.coroutines.Continuation r9 = (kotlin.coroutines.Continuation) r9
                r11.L$0 = r10
                r11.L$1 = r13
                r11.L$2 = r1
                r11.label = r2
                r3 = r10
                r5 = r13
                java.lang.Object r3 = okio.internal._FileSystemKt.collectRecursively(r3, r4, r5, r6, r7, r8, r9)
                if (r3 != r0) goto L47
                return r0
            L6d:
                kotlin.Unit r13 = kotlin.Unit.INSTANCE
                return r13
        }
    }

    public static final java.lang.Object collectRecursively(kotlin.sequences.SequenceScope<? super okio.Path> r17, okio.FileSystem r18, kotlin.collections.ArrayDeque<okio.Path> r19, okio.Path r20, boolean r21, boolean r22, kotlin.coroutines.Continuation<? super kotlin.Unit> r23) {
            r0 = r17
            r1 = r20
            r2 = r22
            r3 = r23
            boolean r4 = r3 instanceof okio.internal._FileSystemKt.collectRecursively.1
            if (r4 == 0) goto L1c
            r4 = r3
            okio.internal._FileSystemKt$collectRecursively$1 r4 = (okio.internal._FileSystemKt.collectRecursively.1) r4
            int r5 = r4.label
            r6 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = r5 & r6
            if (r5 == 0) goto L1c
            int r3 = r4.label
            int r3 = r3 - r6
            r4.label = r3
            goto L21
        L1c:
            okio.internal._FileSystemKt$collectRecursively$1 r4 = new okio.internal._FileSystemKt$collectRecursively$1
            r4.<init>(r3)
        L21:
            java.lang.Object r3 = r4.result
            java.lang.Object r5 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            int r6 = r4.label
            r7 = 0
            r8 = 3
            r9 = 2
            r10 = 1
            if (r6 == 0) goto L80
            if (r6 == r10) goto L62
            if (r6 == r9) goto L42
            if (r6 != r8) goto L3a
            kotlin.ResultKt.throwOnFailure(r3)
            goto L149
        L3a:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "call to 'resume' before 'invoke' with coroutine"
            r0.<init>(r1)
            throw r0
        L42:
            boolean r0 = r4.Z$1
            boolean r1 = r4.Z$0
            java.lang.Object r2 = r4.L$4
            java.util.Iterator r2 = (java.util.Iterator) r2
            java.lang.Object r6 = r4.L$3
            okio.Path r6 = (okio.Path) r6
            java.lang.Object r11 = r4.L$2
            kotlin.collections.ArrayDeque r11 = (kotlin.collections.ArrayDeque) r11
            java.lang.Object r12 = r4.L$1
            okio.FileSystem r12 = (okio.FileSystem) r12
            java.lang.Object r13 = r4.L$0
            kotlin.sequences.SequenceScope r13 = (kotlin.sequences.SequenceScope) r13
            kotlin.ResultKt.throwOnFailure(r3)     // Catch: java.lang.Throwable -> L5f
            goto Lec
        L5f:
            r0 = move-exception
            goto L12b
        L62:
            boolean r0 = r4.Z$1
            boolean r1 = r4.Z$0
            java.lang.Object r2 = r4.L$3
            okio.Path r2 = (okio.Path) r2
            java.lang.Object r6 = r4.L$2
            kotlin.collections.ArrayDeque r6 = (kotlin.collections.ArrayDeque) r6
            java.lang.Object r11 = r4.L$1
            okio.FileSystem r11 = (okio.FileSystem) r11
            java.lang.Object r12 = r4.L$0
            kotlin.sequences.SequenceScope r12 = (kotlin.sequences.SequenceScope) r12
            kotlin.ResultKt.throwOnFailure(r3)
            r16 = r2
            r2 = r0
            r0 = r1
            r1 = r16
            goto La9
        L80:
            kotlin.ResultKt.throwOnFailure(r3)
            if (r2 != 0) goto La0
            r4.L$0 = r0
            r3 = r18
            r4.L$1 = r3
            r6 = r19
            r4.L$2 = r6
            r4.L$3 = r1
            r11 = r21
            r4.Z$0 = r11
            r4.Z$1 = r2
            r4.label = r10
            java.lang.Object r12 = r0.yield(r1, r4)
            if (r12 != r5) goto La6
            return r5
        La0:
            r3 = r18
            r6 = r19
            r11 = r21
        La6:
            r12 = r0
            r0 = r11
            r11 = r3
        La9:
            java.util.List r3 = r11.listOrNull(r1)
            if (r3 != 0) goto Lb3
            java.util.List r3 = kotlin.collections.CollectionsKt.emptyList()
        Lb3:
            r13 = r3
            java.util.Collection r13 = (java.util.Collection) r13
            boolean r13 = r13.isEmpty()
            r13 = r13 ^ r10
            if (r13 == 0) goto L133
            r13 = r1
            r14 = r7
        Lbf:
            if (r0 == 0) goto Ld4
            boolean r15 = r6.contains(r13)
            if (r15 != 0) goto Lc8
            goto Ld4
        Lc8:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r2 = "symlink cycle at "
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.<init>(r1)
            throw r0
        Ld4:
            okio.Path r15 = symlinkTarget(r11, r13)
            if (r15 != 0) goto L12f
            if (r0 != 0) goto Lde
            if (r14 != 0) goto L133
        Lde:
            r6.addLast(r13)
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Throwable -> L129
            r13 = r12
            r12 = r11
            r11 = r6
            r6 = r1
            r1 = r0
            r0 = r2
            r2 = r3
        Lec:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L5f
            if (r3 == 0) goto L122
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L5f
            okio.Path r3 = (okio.Path) r3     // Catch: java.lang.Throwable -> L5f
            if (r0 == 0) goto Lfc
            r14 = r10
            goto Lfd
        Lfc:
            r14 = r7
        Lfd:
            r4.L$0 = r13     // Catch: java.lang.Throwable -> L5f
            r4.L$1 = r12     // Catch: java.lang.Throwable -> L5f
            r4.L$2 = r11     // Catch: java.lang.Throwable -> L5f
            r4.L$3 = r6     // Catch: java.lang.Throwable -> L5f
            r4.L$4 = r2     // Catch: java.lang.Throwable -> L5f
            r4.Z$0 = r1     // Catch: java.lang.Throwable -> L5f
            r4.Z$1 = r0     // Catch: java.lang.Throwable -> L5f
            r4.label = r9     // Catch: java.lang.Throwable -> L5f
            r17 = r13
            r18 = r12
            r19 = r11
            r20 = r3
            r21 = r1
            r22 = r14
            r23 = r4
            java.lang.Object r3 = collectRecursively(r17, r18, r19, r20, r21, r22, r23)     // Catch: java.lang.Throwable -> L5f
            if (r3 != r5) goto Lec
            return r5
        L122:
            r11.removeLast()
            r2 = r0
            r1 = r6
            r12 = r13
            goto L133
        L129:
            r0 = move-exception
            r11 = r6
        L12b:
            r11.removeLast()
            throw r0
        L12f:
            int r14 = r14 + 1
            r13 = r15
            goto Lbf
        L133:
            if (r2 == 0) goto L14c
            r0 = 0
            r4.L$0 = r0
            r4.L$1 = r0
            r4.L$2 = r0
            r4.L$3 = r0
            r4.L$4 = r0
            r4.label = r8
            java.lang.Object r0 = r12.yield(r1, r4)
            if (r0 != r5) goto L149
            return r5
        L149:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE
            return r0
        L14c:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE
            return r0
    }

    public static final void commonCopy(okio.FileSystem r4, okio.Path r5, okio.Path r6) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "target"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            okio.Source r5 = r4.source(r5)
            java.io.Closeable r5 = (java.io.Closeable) r5
            r0 = 0
            r1 = r5
            okio.Source r1 = (okio.Source) r1     // Catch: java.lang.Throwable -> L53
            okio.Sink r4 = r4.sink(r6)     // Catch: java.lang.Throwable -> L53
            okio.BufferedSink r4 = okio.Okio.buffer(r4)     // Catch: java.lang.Throwable -> L53
            java.io.Closeable r4 = (java.io.Closeable) r4     // Catch: java.lang.Throwable -> L53
            r6 = r4
            okio.BufferedSink r6 = (okio.BufferedSink) r6     // Catch: java.lang.Throwable -> L31
            long r1 = r6.writeAll(r1)     // Catch: java.lang.Throwable -> L31
            java.lang.Long r6 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L31
            r1 = r6
            r6 = r0
            goto L33
        L31:
            r6 = move-exception
            r1 = r0
        L33:
            if (r4 != 0) goto L36
            goto L42
        L36:
            r4.close()     // Catch: java.lang.Throwable -> L3a
            goto L42
        L3a:
            r4 = move-exception
            if (r6 != 0) goto L3f
            r6 = r4
            goto L42
        L3f:
            kotlin.ExceptionsKt.addSuppressed(r6, r4)     // Catch: java.lang.Throwable -> L53
        L42:
            if (r6 != 0) goto L52
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Throwable -> L53
            java.lang.Number r1 = (java.lang.Number) r1     // Catch: java.lang.Throwable -> L53
            long r1 = r1.longValue()     // Catch: java.lang.Throwable -> L53
            java.lang.Long r4 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L53
            goto L57
        L52:
            throw r6     // Catch: java.lang.Throwable -> L53
        L53:
            r4 = move-exception
            r3 = r0
            r0 = r4
            r4 = r3
        L57:
            if (r5 != 0) goto L5a
            goto L66
        L5a:
            r5.close()     // Catch: java.lang.Throwable -> L5e
            goto L66
        L5e:
            r5 = move-exception
            if (r0 != 0) goto L63
            r0 = r5
            goto L66
        L63:
            kotlin.ExceptionsKt.addSuppressed(r0, r5)
        L66:
            if (r0 != 0) goto L6c
            kotlin.jvm.internal.Intrinsics.checkNotNull(r4)
            return
        L6c:
            throw r0
    }

    public static final void commonCreateDirectories(okio.FileSystem r3, okio.Path r4, boolean r5) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            kotlin.collections.ArrayDeque r0 = new kotlin.collections.ArrayDeque
            r0.<init>()
            r1 = r4
        L10:
            if (r1 == 0) goto L20
            boolean r2 = r3.exists(r1)
            if (r2 != 0) goto L20
            r0.addFirst(r1)
            okio.Path r1 = r1.parent()
            goto L10
        L20:
            if (r5 == 0) goto L40
            boolean r5 = r0.isEmpty()
            if (r5 != 0) goto L29
            goto L40
        L29:
            java.io.IOException r3 = new java.io.IOException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r4)
            java.lang.String r4 = " already exist."
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            r3.<init>(r4)
            throw r3
        L40:
            java.util.Iterator r4 = r0.iterator()
        L44:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L54
            java.lang.Object r5 = r4.next()
            okio.Path r5 = (okio.Path) r5
            r3.createDirectory(r5)
            goto L44
        L54:
            return
    }

    public static final void commonDeleteRecursively(okio.FileSystem r2, okio.Path r3, boolean r4) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "fileOrDirectory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.internal._FileSystemKt$commonDeleteRecursively$sequence$1 r0 = new okio.internal._FileSystemKt$commonDeleteRecursively$sequence$1
            r1 = 0
            r0.<init>(r2, r3, r1)
            kotlin.jvm.functions.Function2 r0 = (kotlin.jvm.functions.Function2) r0
            kotlin.sequences.Sequence r3 = kotlin.sequences.SequencesKt.sequence(r0)
            java.util.Iterator r3 = r3.iterator()
        L1a:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L35
            java.lang.Object r0 = r3.next()
            okio.Path r0 = (okio.Path) r0
            if (r4 == 0) goto L30
            boolean r1 = r3.hasNext()
            if (r1 != 0) goto L30
            r1 = 1
            goto L31
        L30:
            r1 = 0
        L31:
            r2.delete(r0, r1)
            goto L1a
        L35:
            return
    }

    public static final boolean commonExists(okio.FileSystem r1, okio.Path r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.FileMetadata r1 = r1.metadataOrNull(r2)
            if (r1 == 0) goto L12
            r1 = 1
            goto L13
        L12:
            r1 = 0
        L13:
            return r1
    }

    public static final kotlin.sequences.Sequence<okio.Path> commonListRecursively(okio.FileSystem r2, okio.Path r3, boolean r4) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "dir"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.internal._FileSystemKt$commonListRecursively$1 r0 = new okio.internal._FileSystemKt$commonListRecursively$1
            r1 = 0
            r0.<init>(r3, r2, r4, r1)
            kotlin.jvm.functions.Function2 r0 = (kotlin.jvm.functions.Function2) r0
            kotlin.sequences.Sequence r2 = kotlin.sequences.SequencesKt.sequence(r0)
            return r2
    }

    public static final okio.FileMetadata commonMetadata(okio.FileSystem r1, okio.Path r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.FileMetadata r1 = r1.metadataOrNull(r2)
            if (r1 == 0) goto L11
            return r1
        L11:
            java.io.FileNotFoundException r1 = new java.io.FileNotFoundException
            java.lang.String r0 = "no such file: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r2)
            r1.<init>(r2)
            throw r1
    }

    public static final okio.Path symlinkTarget(okio.FileSystem r1, okio.Path r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "path"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.FileMetadata r1 = r1.metadata(r2)
            okio.Path r1 = r1.getSymlinkTarget()
            if (r1 != 0) goto L16
            r1 = 0
            return r1
        L16:
            okio.Path r2 = r2.parent()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            okio.Path r1 = r2.resolve(r1)
            return r1
    }
}
