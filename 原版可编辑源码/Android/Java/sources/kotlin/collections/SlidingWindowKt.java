package kotlin.collections;

import com.tkay.core.api.TYAdConst;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Metadata;
import kotlin.ResultKt;
import kotlin.Unit;
import kotlin.coroutines.Continuation;
import kotlin.coroutines.intrinsics.IntrinsicsKt;
import kotlin.coroutines.jvm.internal.DebugMetadata;
import kotlin.coroutines.jvm.internal.RestrictedSuspendLambda;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.ranges.RangesKt;
import kotlin.sequences.Sequence;
import kotlin.sequences.SequenceScope;
import kotlin.sequences.SequencesKt;

@Metadata(d1 = {"\u0000*\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010(\n\u0002\u0010 \n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a\u0018\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u0003H\u0000\u001aH\u0010\u0005\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\b0\u00070\u0006\"\u0004\b\u0000\u0010\b2\f\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\b0\u00062\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00032\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000bH\u0000\u001aD\u0010\r\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\b0\u00070\u000e\"\u0004\b\u0000\u0010\b*\b\u0012\u0004\u0012\u0002H\b0\u000e2\u0006\u0010\u0002\u001a\u00020\u00032\u0006\u0010\u0004\u001a\u00020\u00032\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\u000bH\u0000¨\u0006\u000f"}, d2 = {"checkWindowSizeStep", "", TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, "", "step", "windowedIterator", "", "", "T", "iterator", "partialWindows", "", "reuseBuffer", "windowedSequence", "Lkotlin/sequences/Sequence;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class SlidingWindowKt {
    public static final void checkWindowSizeStep(int i, int i2) {
        String str;
        if (i > 0 && i2 > 0) {
            return;
        }
        if (i != i2) {
            str = "Both size " + i + " and step " + i2 + " must be greater than zero.";
        } else {
            str = "size " + i + " must be greater than zero.";
        }
        throw new IllegalArgumentException(str.toString());
    }

    public static final <T> Sequence<List<T>> windowedSequence(final Sequence<? extends T> sequence, final int i, final int i2, final boolean z, final boolean z2) {
        Intrinsics.checkNotNullParameter(sequence, "<this>");
        checkWindowSizeStep(i, i2);
        return new Sequence<List<? extends T>>() {
            @Override
            public Iterator<List<? extends T>> iterator() {
                return SlidingWindowKt.windowedIterator(sequence.iterator(), i, i2, z, z2);
            }
        };
    }

    @Metadata(d1 = {"\u0000\u0010\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \u0010\u0000\u001a\u00020\u0001\"\u0004\b\u0000\u0010\u0002*\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u0002H\u00020\u00040\u0003H\u008a@"}, d2 = {"<anonymous>", "", "T", "Lkotlin/sequences/SequenceScope;", ""}, k = 3, mv = {1, 6, 0}, xi = 48)
    @DebugMetadata(c = "kotlin.collections.SlidingWindowKt$windowedIterator$1", f = "SlidingWindow.kt", i = {0, 0, 0, 2, 2, 3, 3}, l = {34, 40, 49, 55, 58}, m = "invokeSuspend", n = {"$this$iterator", "buffer", "gap", "$this$iterator", "buffer", "$this$iterator", "buffer"}, s = {"L$0", "L$1", "I$0", "L$0", "L$1", "L$0", "L$1"})
    static final class 1<T> extends RestrictedSuspendLambda implements Function2<SequenceScope<? super List<? extends T>>, Continuation<? super Unit>, Object> {
        final Iterator<T> $iterator;
        final boolean $partialWindows;
        final boolean $reuseBuffer;
        final int $size;
        final int $step;
        int I$0;
        private Object L$0;
        Object L$1;
        Object L$2;
        int label;

        /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
        /* JADX WARN: Multi-variable type inference failed */
        1(int i, int i2, Iterator<? extends T> it, boolean z, boolean z2, Continuation<? super 1> continuation) {
            super(2, continuation);
            this.$size = i;
            this.$step = i2;
            this.$iterator = it;
            this.$reuseBuffer = z;
            this.$partialWindows = z2;
        }

        @Override
        public final Continuation<Unit> create(Object obj, Continuation<?> continuation) {
            1 r7 = new 1(this.$size, this.$step, this.$iterator, this.$reuseBuffer, this.$partialWindows, continuation);
            r7.L$0 = obj;
            return r7;
        }

        @Override
        public final Object invoke(SequenceScope<? super List<? extends T>> sequenceScope, Continuation<? super Unit> continuation) {
            return ((1) create(sequenceScope, continuation)).invokeSuspend(Unit.INSTANCE);
        }

        /* JADX WARN: Removed duplicated region for block: B:21:0x0083  */
        /* JADX WARN: Removed duplicated region for block: B:31:0x00af  */
        /* JADX WARN: Removed duplicated region for block: B:32:0x00b3  */
        /* JADX WARN: Removed duplicated region for block: B:42:0x00e4 A[RETURN] */
        /* JADX WARN: Removed duplicated region for block: B:46:0x00f4  */
        /* JADX WARN: Removed duplicated region for block: B:61:0x013c  */
        /* JADX WARN: Removed duplicated region for block: B:64:0x0146  */
        /* JADX WARN: Removed duplicated region for block: B:72:0x0170  */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:27:0x00a8 -> B:29:0x00ab). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:56:0x012f -> B:58:0x0132). Please report as a decompilation issue!!! */
        /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:69:0x0167 -> B:71:0x016a). Please report as a decompilation issue!!! */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public final Object invokeSuspend(Object obj) throws Throwable {
            int i;
            RingBuffer ringBuffer;
            Iterator<T> it;
            SequenceScope sequenceScope;
            1<T> r13;
            int i2;
            SequenceScope sequenceScope2;
            1<T> r132;
            ArrayList arrayList;
            Iterator<T> it2;
            RingBuffer ringBuffer2;
            SequenceScope sequenceScope3;
            Object coroutine_suspended = IntrinsicsKt.getCOROUTINE_SUSPENDED();
            int i3 = this.label;
            if (i3 == 0) {
                ResultKt.throwOnFailure(obj);
                SequenceScope sequenceScope4 = (SequenceScope) this.L$0;
                int iCoerceAtMost = RangesKt.coerceAtMost(this.$size, 1024);
                i = this.$step - this.$size;
                if (i >= 0) {
                    ArrayList arrayList2 = new ArrayList(iCoerceAtMost);
                    i2 = 0;
                    sequenceScope2 = sequenceScope4;
                    r132 = this;
                    arrayList = arrayList2;
                    it2 = this.$iterator;
                    while (it2.hasNext()) {
                    }
                    if (!arrayList.isEmpty()) {
                        r132.L$0 = null;
                        r132.L$1 = null;
                        r132.L$2 = null;
                        r132.label = 2;
                        if (sequenceScope2.yield(arrayList, r132) == coroutine_suspended) {
                        }
                    }
                    return Unit.INSTANCE;
                }
                ringBuffer = new RingBuffer(iCoerceAtMost);
                it = this.$iterator;
                sequenceScope = sequenceScope4;
                r13 = this;
                while (it.hasNext()) {
                }
                if (r13.$partialWindows) {
                }
                return Unit.INSTANCE;
            }
            if (i3 == 1) {
                int i4 = this.I$0;
                it2 = (Iterator) this.L$2;
                arrayList = (ArrayList) this.L$1;
                sequenceScope2 = (SequenceScope) this.L$0;
                ResultKt.throwOnFailure(obj);
                r132 = this;
                i = i4;
                if (r132.$reuseBuffer) {
                    arrayList = new ArrayList(r132.$size);
                } else {
                    arrayList.clear();
                }
                i2 = i;
                while (it2.hasNext()) {
                    T next = it2.next();
                    if (i2 > 0) {
                        i2--;
                    } else {
                        arrayList.add(next);
                        if (arrayList.size() == r132.$size) {
                            r132.L$0 = sequenceScope2;
                            r132.L$1 = arrayList;
                            r132.L$2 = it2;
                            r132.I$0 = i;
                            r132.label = 1;
                            if (sequenceScope2.yield(arrayList, r132) == coroutine_suspended) {
                                return coroutine_suspended;
                            }
                            if (r132.$reuseBuffer) {
                            }
                            i2 = i;
                            while (it2.hasNext()) {
                            }
                        }
                    }
                }
                if ((!arrayList.isEmpty()) && (r132.$partialWindows || arrayList.size() == r132.$size)) {
                    r132.L$0 = null;
                    r132.L$1 = null;
                    r132.L$2 = null;
                    r132.label = 2;
                    if (sequenceScope2.yield(arrayList, r132) == coroutine_suspended) {
                        return coroutine_suspended;
                    }
                }
                return Unit.INSTANCE;
            }
            if (i3 != 2) {
                if (i3 == 3) {
                    it = (Iterator) this.L$2;
                    ringBuffer = (RingBuffer) this.L$1;
                    sequenceScope = (SequenceScope) this.L$0;
                    ResultKt.throwOnFailure(obj);
                    r13 = this;
                    ringBuffer.removeFirst(r13.$step);
                    while (it.hasNext()) {
                        ringBuffer.add((Object) it.next());
                        if (ringBuffer.isFull()) {
                            int size = ringBuffer.size();
                            int i5 = r13.$size;
                            if (size >= i5) {
                                List arrayList3 = r13.$reuseBuffer ? ringBuffer : new ArrayList(ringBuffer);
                                r13.L$0 = sequenceScope;
                                r13.L$1 = ringBuffer;
                                r13.L$2 = it;
                                r13.label = 3;
                                if (sequenceScope.yield(arrayList3, r13) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                                ringBuffer.removeFirst(r13.$step);
                                while (it.hasNext()) {
                                }
                            } else {
                                ringBuffer = ringBuffer.expanded(i5);
                            }
                        }
                    }
                    if (r13.$partialWindows) {
                        ringBuffer2 = ringBuffer;
                        sequenceScope3 = sequenceScope;
                        if (ringBuffer2.size() <= r13.$step) {
                        }
                    }
                    return Unit.INSTANCE;
                }
                if (i3 == 4) {
                    ringBuffer2 = (RingBuffer) this.L$1;
                    sequenceScope3 = (SequenceScope) this.L$0;
                    ResultKt.throwOnFailure(obj);
                    r13 = this;
                    ringBuffer2.removeFirst(r13.$step);
                    if (ringBuffer2.size() <= r13.$step) {
                        List arrayList4 = r13.$reuseBuffer ? ringBuffer2 : new ArrayList(ringBuffer2);
                        r13.L$0 = sequenceScope3;
                        r13.L$1 = ringBuffer2;
                        r13.L$2 = null;
                        r13.label = 4;
                        if (sequenceScope3.yield(arrayList4, r13) == coroutine_suspended) {
                            return coroutine_suspended;
                        }
                        ringBuffer2.removeFirst(r13.$step);
                        if (ringBuffer2.size() <= r13.$step) {
                            if (!ringBuffer2.isEmpty()) {
                                r13.L$0 = null;
                                r13.L$1 = null;
                                r13.L$2 = null;
                                r13.label = 5;
                                if (sequenceScope3.yield(ringBuffer2, r13) == coroutine_suspended) {
                                    return coroutine_suspended;
                                }
                            }
                            return Unit.INSTANCE;
                        }
                    }
                } else if (i3 != 5) {
                    throw new IllegalStateException("call to 'resume' before 'invoke' with coroutine");
                }
            }
            ResultKt.throwOnFailure(obj);
            return Unit.INSTANCE;
        }
    }

    public static final <T> Iterator<List<T>> windowedIterator(Iterator<? extends T> iterator, int i, int i2, boolean z, boolean z2) {
        Intrinsics.checkNotNullParameter(iterator, "iterator");
        return !iterator.hasNext() ? EmptyIterator.INSTANCE : SequencesKt.iterator(new 1(i, i2, iterator, z2, z, null));
    }
}
