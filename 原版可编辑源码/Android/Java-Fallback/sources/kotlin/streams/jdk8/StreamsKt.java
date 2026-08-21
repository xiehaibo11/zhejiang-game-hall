package kotlin.streams.jdk8;

@kotlin.Metadata(d1 = {"\u0000.\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0006\n\u0002\u0018\u0002\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0000\u001a\u0012\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u0001*\u00020\u0003H\u0007\u001a\u0012\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00040\u0001*\u00020\u0005H\u0007\u001a\u0012\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00060\u0001*\u00020\u0007H\u0007\u001a\u001e\u0010\u0000\u001a\b\u0012\u0004\u0012\u0002H\b0\u0001\"\u0004\b\u0000\u0010\b*\b\u0012\u0004\u0012\u0002H\b0\tH\u0007\u001a\u001e\u0010\n\u001a\b\u0012\u0004\u0012\u0002H\b0\t\"\u0004\b\u0000\u0010\b*\b\u0012\u0004\u0012\u0002H\b0\u0001H\u0007\u001a\u0012\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00020\f*\u00020\u0003H\u0007\u001a\u0012\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00040\f*\u00020\u0005H\u0007\u001a\u0012\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\u00060\f*\u00020\u0007H\u0007\u001a\u001e\u0010\u000b\u001a\b\u0012\u0004\u0012\u0002H\b0\f\"\u0004\b\u0000\u0010\b*\b\u0012\u0004\u0012\u0002H\b0\tH\u0007¨\u0006\r"}, d2 = {"asSequence", "Lkotlin/sequences/Sequence;", "", "Ljava/util/stream/DoubleStream;", "", "Ljava/util/stream/IntStream;", "", "Ljava/util/stream/LongStream;", "T", "Ljava/util/stream/Stream;", "asStream", "toList", "", "kotlin-stdlib-jdk8"}, k = 2, mv = {1, 5, 1}, pn = "kotlin.streams")
public final class StreamsKt {


    public static final kotlin.sequences.Sequence<java.lang.Double> asSequence(java.util.stream.DoubleStream r1) {
            java.lang.String r0 = "$this$asSequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$4 r0 = new kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$4
            r0.<init>(r1)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            return r0
    }

    public static final kotlin.sequences.Sequence<java.lang.Integer> asSequence(java.util.stream.IntStream r1) {
            java.lang.String r0 = "$this$asSequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$2 r0 = new kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$2
            r0.<init>(r1)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            return r0
    }

    public static final kotlin.sequences.Sequence<java.lang.Long> asSequence(java.util.stream.LongStream r1) {
            java.lang.String r0 = "$this$asSequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$3 r0 = new kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$3
            r0.<init>(r1)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            return r0
    }

    public static final <T> kotlin.sequences.Sequence<T> asSequence(java.util.stream.Stream<T> r1) {
            java.lang.String r0 = "$this$asSequence"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$1 r0 = new kotlin.streams.jdk8.StreamsKt$asSequence$$inlined$Sequence$1
            r0.<init>(r1)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            return r0
    }

    public static final <T> java.util.stream.Stream<T> asStream(kotlin.sequences.Sequence<? extends T> r2) {
            java.lang.String r0 = "$this$asStream"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.streams.jdk8.StreamsKt$asStream$1 r0 = new kotlin.streams.jdk8.StreamsKt$asStream$1
            r0.<init>(r2)
            java.util.function.Supplier r0 = (java.util.function.Supplier) r0
            r2 = 16
            r1 = 0
            java.util.stream.Stream r2 = java.util.stream.StreamSupport.stream(r0, r2, r1)
            java.lang.String r0 = "StreamSupport.stream({ S…literator.ORDERED, false)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
            return r2
    }

    public static final java.util.List<java.lang.Double> toList(java.util.stream.DoubleStream r1) {
            java.lang.String r0 = "$this$toList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            double[] r1 = r1.toArray()
            java.lang.String r0 = "toArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            java.util.List r1 = kotlin.collections.ArraysKt.asList(r1)
            return r1
    }

    public static final java.util.List<java.lang.Integer> toList(java.util.stream.IntStream r1) {
            java.lang.String r0 = "$this$toList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int[] r1 = r1.toArray()
            java.lang.String r0 = "toArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            java.util.List r1 = kotlin.collections.ArraysKt.asList(r1)
            return r1
    }

    public static final java.util.List<java.lang.Long> toList(java.util.stream.LongStream r1) {
            java.lang.String r0 = "$this$toList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            long[] r1 = r1.toArray()
            java.lang.String r0 = "toArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            java.util.List r1 = kotlin.collections.ArraysKt.asList(r1)
            return r1
    }

    public static final <T> java.util.List<T> toList(java.util.stream.Stream<T> r1) {
            java.lang.String r0 = "$this$toList"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.stream.Collector r0 = java.util.stream.Collectors.toList()
            java.lang.Object r1 = r1.collect(r0)
            java.lang.String r0 = "collect(Collectors.toList<T>())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            java.util.List r1 = (java.util.List) r1
            return r1
    }
}
