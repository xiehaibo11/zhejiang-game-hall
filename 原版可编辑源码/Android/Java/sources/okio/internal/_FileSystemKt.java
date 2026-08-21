package okio.internal;

import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Iterator;
import java.util.List;
import kotlin.ExceptionsKt;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.collections.ArrayDeque;
import kotlin.collections.CollectionsKt;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.ContinuationImpl;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.RestrictedSuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;
import kotlin.sequences.SequenceScope;
import kotlin.sequences.SequencesKt;
import okio.BufferedSink;
import okio.FileMetadata;
import okio.FileSystem;
import okio.Okio;
import okio.Path;
import okio.Source;

@Metadata(d1 = {"\u00004\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\r\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001aI\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u00022\u0006\u0010\u0004\u001a\u00020\u00052\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\u00030\u00072\u0006\u0010\b\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\nH\u0080@ø\u0001\u0000¢\u0006\u0002\u0010\f\u001a\u001c\u0010\r\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u000e\u001a\u00020\u00032\u0006\u0010\u000f\u001a\u00020\u0003H\u0000\u001a\u001c\u0010\u0010\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u00032\u0006\u0010\u0012\u001a\u00020\nH\u0000\u001a\u001c\u0010\u0013\u001a\u00020\u0001*\u00020\u00052\u0006\u0010\u0014\u001a\u00020\u00032\u0006\u0010\u0015\u001a\u00020\nH\u0000\u001a\u0014\u0010\u0016\u001a\u00020\n*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u001a\"\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00030\u0018*\u00020\u00052\u0006\u0010\u0011\u001a\u00020\u00032\u0006\u0010\t\u001a\u00020\nH\u0000\u001a\u0014\u0010\u0019\u001a\u00020\u001a*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u001a\u0016\u0010\u001b\u001a\u0004\u0018\u00010\u0003*\u00020\u00052\u0006\u0010\b\u001a\u00020\u0003H\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001c"}, d2 = {"collectRecursively", "", "Lkotlin/sequences/SequenceScope;", "Lokio/Path;", "fileSystem", "Lokio/FileSystem;", "stack", "Lkotlin/collections/ArrayDeque;", "path", "followSymlinks", "", "postorder", "(Lkotlin/sequences/SequenceScope;Lokio/FileSystem;Lkotlin/collections/ArrayDeque;Lokio/Path;ZZLkotlin/coroutines/Continuation;)Ljava/lang/Object;", "commonCopy", "source", "target", "commonCreateDirectories", "dir", "mustCreate", "commonDeleteRecursively", "fileOrDirectory", "mustExist", "commonExists", "commonListRecursively", "Lkotlin/sequences/Sequence;", "commonMetadata", "Lokio/FileMetadata;", "symlinkTarget", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _FileSystemKt {

    @Metadata(k = 3, mv = {1, 5, 1}, xi = 48)
    @DebugMetadata(c = "okio.internal._FileSystemKt", f = "-FileSystem.kt", i = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1}, l = {113, 132, 142}, m = "collectRecursively", n = {"$this$collectRecursively", "fileSystem", "stack", "path", "followSymlinks", "postorder", "$this$collectRecursively", "fileSystem", "stack", "path", "followSymlinks", "postorder"}, s = {"L$0", "L$1", "L$2", "L$3", "Z$0", "Z$1", "L$0", "L$1", "L$2", "L$3", "Z$0", "Z$1"})
    static final class 1 extends ContinuationImpl {
        Object L$0;
        Object L$1;
        Object L$2;
        Object L$3;
        Object L$4;
        boolean Z$0;
        boolean Z$1;
        int label;
        Object result;

        1(Continuation<? super 1> continuation) {
            super(continuation);
        }

        @Override
        public final Object invokeSuspend(Object obj) {
            this.result = obj;
            this.label |= Integer.MIN_VALUE;
            return _FileSystemKt.collectRecursively(null, null, null, null, false, false, this);
        }
    }

    public static final FileMetadata commonMetadata(FileSystem fileSystem, Path path) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(path, "path");
        FileMetadata fileMetadataMetadataOrNull = fileSystem.metadataOrNull(path);
        if (fileMetadataMetadataOrNull != null) {
            return fileMetadataMetadataOrNull;
        }
        throw new FileNotFoundException(Intrinsics.stringPlus("no such file: ", path));
    }

    public static final boolean commonExists(FileSystem fileSystem, Path path) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(path, "path");
        return fileSystem.metadataOrNull(path) != null;
    }

    public static final void commonCreateDirectories(FileSystem fileSystem, Path dir, boolean z) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(dir, "dir");
        ArrayDeque arrayDeque = new ArrayDeque();
        for (Path pathParent = dir; pathParent != null && !fileSystem.exists(pathParent); pathParent = pathParent.parent()) {
            arrayDeque.addFirst(pathParent);
        }
        if (z && arrayDeque.isEmpty()) {
            throw new IOException(dir + " already exist.");
        }
        Iterator it = arrayDeque.iterator();
        while (it.hasNext()) {
            fileSystem.createDirectory((Path) it.next());
        }
    }

    public static final void commonCopy(FileSystem fileSystem, Path source, Path target) throws IOException {
        Long lValueOf;
        Long lValueOf2;
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(target, "target");
        Source source2 = fileSystem.source(source);
        Throwable th = null;
        try {
            Source source3 = source2;
            BufferedSink bufferedSinkBuffer = Okio.buffer(fileSystem.sink(target));
            try {
                lValueOf2 = Long.valueOf(bufferedSinkBuffer.writeAll(source3));
                th = null;
            } catch (Throwable th2) {
                th = th2;
                lValueOf2 = null;
            }
            if (bufferedSinkBuffer != null) {
                try {
                    bufferedSinkBuffer.close();
                } catch (Throwable th3) {
                    if (th == null) {
                        th = th3;
                    } else {
                        ExceptionsKt.addSuppressed(th, th3);
                    }
                }
            }
        } catch (Throwable th4) {
            th = th4;
            lValueOf = null;
        }
        if (th != null) {
            throw th;
        }
        Intrinsics.checkNotNull(lValueOf2);
        lValueOf = Long.valueOf(lValueOf2.longValue());
        if (source2 != null) {
            try {
                source2.close();
            } catch (Throwable th5) {
                if (th == null) {
                    th = th5;
                } else {
                    ExceptionsKt.addSuppressed(th, th5);
                }
            }
        }
        if (th != null) {
            throw th;
        }
        Intrinsics.checkNotNull(lValueOf);
    }

    public static final void commonDeleteRecursively(FileSystem fileSystem, Path fileOrDirectory, boolean z) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(fileOrDirectory, "fileOrDirectory");
        Iterator it = SequencesKt.sequence(new _FileSystemKt$commonDeleteRecursively$sequence$1(fileSystem, fileOrDirectory, null)).iterator();
        while (it.hasNext()) {
            fileSystem.delete((Path) it.next(), z && !it.hasNext());
        }
    }

    @Metadata(d1 = {"\u0000\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\u0010\u0000\u001a\u00020\u0001*\b\u0012\u0004\u0012\u00020\u00030\u0002H\u008a@"}, d2 = {"<anonymous>", "", "Lkotlin/sequences/SequenceScope;", "Lokio/Path;"}, k = 3, mv = {1, 5, 1}, xi = 48)
    @DebugMetadata(c = "okio.internal._FileSystemKt$commonListRecursively$1", f = "-FileSystem.kt", i = {0, 0}, l = {93}, m = "invokeSuspend", n = {"$this$sequence", "stack"}, s = {"L$0", "L$1"})
    static final class 1 extends RestrictedSuspendLambda implements Function2<SequenceScope<? super Path>, Continuation<? super Unit>, Object> {
        final Path $dir;
        final boolean $followSymlinks;
        final FileSystem $this_commonListRecursively;
        private Object L$0;
        Object L$1;
        Object L$2;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        1(Path path, FileSystem fileSystem, boolean z, Continuation<? super 1> continuation) {
            super(2, continuation);
            this.$dir = path;
            this.$this_commonListRecursively = fileSystem;
            this.$followSymlinks = z;
        }

        @Override
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            1 r0 = new 1(this.$dir, this.$this_commonListRecursively, this.$followSymlinks, continuation);
            r0.L$0 = obj;
            return r0;
        }

        @Override
        public final Object invoke(SequenceScope<? super Path> sequenceScope, Continuation<? super Unit> continuation) {
            return ((1) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        @Override
        public final Object invokeSuspend(Object obj) throws Throwable {
            1 r11;
            SequenceScope sequenceScope;
            ArrayDeque arrayDeque;
            Iterator<Path> it;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i = this.label;
            if (i == 0) {
                ResultKt.throwOnFailure(obj);
                SequenceScope sequenceScope2 = (SequenceScope) this.L$0;
                ArrayDeque arrayDeque2 = new ArrayDeque();
                arrayDeque2.addLast(this.$dir);
                r11 = this;
                sequenceScope = sequenceScope2;
                arrayDeque = arrayDeque2;
                it = this.$this_commonListRecursively.list(this.$dir).iterator();
            } else {
                if (i != 1) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                it = (Iterator) this.L$2;
                ArrayDeque arrayDeque3 = (ArrayDeque) this.L$1;
                SequenceScope sequenceScope3 = (SequenceScope) this.L$0;
                ResultKt.throwOnFailure(obj);
                r11 = this;
                arrayDeque = arrayDeque3;
                sequenceScope = sequenceScope3;
            }
            while (it.hasNext()) {
                Path next = it.next();
                r11.L$0 = sequenceScope;
                r11.L$1 = arrayDeque;
                r11.L$2 = it;
                r11.label = 1;
                if (_FileSystemKt.collectRecursively(sequenceScope, r11.$this_commonListRecursively, arrayDeque, next, r11.$followSymlinks, false, r11) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            }
            return Unit.INSTANCE;
        }
    }

    public static final Sequence<Path> commonListRecursively(FileSystem fileSystem, Path dir, boolean z) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(dir, "dir");
        return SequencesKt.sequence(new 1(dir, fileSystem, z, null));
    }

    /* JADX WARN: Code restructure failed: missing block: B:43:0x00da, code lost:
    
        if (r0 != false) goto L45;
     */
    /* JADX WARN: Code restructure failed: missing block: B:44:0x00dc, code lost:
    
        if (r14 != 0) goto L63;
     */
    /* JADX WARN: Code restructure failed: missing block: B:45:0x00de, code lost:
    
        r6.addLast(r13);
     */
    /* JADX WARN: Code restructure failed: missing block: B:47:0x00e5, code lost:
    
        r13 = r12;
        r12 = r11;
        r11 = r6;
        r6 = r1;
        r1 = r0;
        r0 = r2;
        r2 = r3.iterator();
     */
    /* JADX WARN: Code restructure failed: missing block: B:58:0x0129, code lost:
    
        r0 = th;
     */
    /* JADX WARN: Code restructure failed: missing block: B:59:0x012a, code lost:
    
        r11 = r6;
     */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Removed duplicated region for block: B:64:0x0135  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x014c  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x001c  */
    /* JADX WARN: Type inference failed for: r12v0 */
    /* JADX WARN: Type inference failed for: r12v11 */
    /* JADX WARN: Type inference failed for: r12v2 */
    /* JADX WARN: Type inference failed for: r12v4, types: [kotlin.sequences.SequenceScope] */
    /* JADX WARN: Type inference failed for: r12v6 */
    /* JADX WARN: Type inference failed for: r13v11 */
    /* JADX WARN: Type inference failed for: r13v6 */
    /* JADX WARN: Type inference failed for: r13v8, types: [java.lang.Object] */
    /* JADX WARN: Type inference failed for: r17v0, types: [java.lang.Object, kotlin.sequences.SequenceScope, kotlin.sequences.SequenceScope<? super okio.Path>] */
    /* JADX WARN: Type inference failed for: r17v1, types: [kotlin.sequences.SequenceScope] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final Object collectRecursively(SequenceScope<? super Path> sequenceScope, FileSystem fileSystem, ArrayDeque<Path> arrayDeque, Path path, boolean z, boolean z2, Continuation<? super Unit> continuation) throws Throwable {
        1 r4;
        FileSystem fileSystem2;
        ArrayDeque<Path> arrayDeque2;
        boolean z3;
        ?? r12;
        boolean z4;
        FileSystem fileSystem3;
        Path path2 = path;
        boolean z5 = z2;
        if (continuation instanceof 1) {
            r4 = (1) continuation;
            if ((r4.label & Integer.MIN_VALUE) != 0) {
                r4.label -= Integer.MIN_VALUE;
            } else {
                r4 = new 1(continuation);
            }
        }
        Object obj = r4.result;
        Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
        int i = r4.label;
        if (i == 0) {
            ResultKt.throwOnFailure(obj);
            if (z5) {
                fileSystem2 = fileSystem;
                arrayDeque2 = arrayDeque;
                z3 = z;
            } else {
                r4.L$0 = sequenceScope;
                fileSystem2 = fileSystem;
                r4.L$1 = fileSystem2;
                arrayDeque2 = arrayDeque;
                r4.L$2 = arrayDeque2;
                r4.L$3 = path2;
                z3 = z;
                r4.Z$0 = z3;
                r4.Z$1 = z5;
                r4.label = 1;
                if (sequenceScope.yield(path2, r4) == coroutine_suspended) {
                    return coroutine_suspended;
                }
            }
            r12 = sequenceScope;
            z4 = z3;
            fileSystem3 = fileSystem2;
        } else {
            if (i != 1) {
                if (i != 2) {
                    if (i == 3) {
                        ResultKt.throwOnFailure(obj);
                        return Unit.INSTANCE;
                    }
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
                boolean z6 = r4.Z$1;
                boolean z7 = r4.Z$0;
                Iterator<Path> it = (Iterator) r4.L$4;
                Path path3 = (Path) r4.L$3;
                ArrayDeque<Path> arrayDeque3 = (ArrayDeque) r4.L$2;
                FileSystem fileSystem4 = (FileSystem) r4.L$1;
                SequenceScope sequenceScope2 = (SequenceScope) r4.L$0;
                try {
                    ResultKt.throwOnFailure(obj);
                    ?? r13 = sequenceScope2;
                    while (it.hasNext()) {
                        Path next = it.next();
                        boolean z8 = z6;
                        r4.L$0 = r13;
                        r4.L$1 = fileSystem4;
                        r4.L$2 = arrayDeque3;
                        r4.L$3 = path3;
                        r4.L$4 = it;
                        r4.Z$0 = z7;
                        r4.Z$1 = z6;
                        r4.label = 2;
                        if (collectRecursively(r13, fileSystem4, arrayDeque3, next, z7, z8, r4) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                    }
                    arrayDeque3.removeLast();
                    z5 = z6;
                    path2 = path3;
                    r12 = r13;
                    if (z5) {
                        return Unit.INSTANCE;
                    }
                    r4.L$0 = null;
                    r4.L$1 = null;
                    r4.L$2 = null;
                    r4.L$3 = null;
                    r4.L$4 = null;
                    r4.label = 3;
                    if (r12.yield(path2, r4) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                    return Unit.INSTANCE;
                } catch (Throwable th) {
                    th = th;
                    arrayDeque3.removeLast();
                    throw th;
                }
            }
            boolean z9 = r4.Z$1;
            boolean z10 = r4.Z$0;
            Path path4 = (Path) r4.L$3;
            arrayDeque2 = (ArrayDeque) r4.L$2;
            fileSystem3 = (FileSystem) r4.L$1;
            SequenceScope sequenceScope3 = (SequenceScope) r4.L$0;
            ResultKt.throwOnFailure(obj);
            z5 = z9;
            z4 = z10;
            path2 = path4;
            r12 = sequenceScope3;
        }
        List<Path> listListOrNull = fileSystem3.listOrNull(path2);
        if (listListOrNull == null) {
            listListOrNull = CollectionsKt.emptyList();
        }
        if (!listListOrNull.isEmpty()) {
            Path path5 = path2;
            int i2 = 0;
            while (true) {
                if (z4 && arrayDeque2.contains(path5)) {
                    throw new IOException(Intrinsics.stringPlus("symlink cycle at ", path2));
                }
                Path pathSymlinkTarget = symlinkTarget(fileSystem3, path5);
                if (pathSymlinkTarget == null) {
                    break;
                }
                i2++;
                path5 = pathSymlinkTarget;
            }
        }
        if (z5) {
        }
    }

    public static final Path symlinkTarget(FileSystem fileSystem, Path path) throws IOException {
        Intrinsics.checkNotNullParameter(fileSystem, "<this>");
        Intrinsics.checkNotNullParameter(path, "path");
        Path symlinkTarget = fileSystem.metadata(path).getSymlinkTarget();
        if (symlinkTarget == null) {
            return null;
        }
        Path pathParent = path.parent();
        Intrinsics.checkNotNull(pathParent);
        return pathParent.resolve(symlinkTarget);
    }
}
