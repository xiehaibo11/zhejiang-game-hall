package kotlin;

@kotlin.Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u000b\n\u0002\u0010\u0003\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0005\b\u0087@\u0018\u0000 \"*\u0006\b\u0000\u0010\u0001 \u00012\u00060\u0002j\u0002`\u0003:\u0002\"#B\u0016\b\u0001\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005ø\u0001\u0000¢\u0006\u0004\b\u0006\u0010\u0007J\u001a\u0010\u0010\u001a\u00020\t2\b\u0010\u0011\u001a\u0004\u0018\u00010\u0005HÖ\u0003¢\u0006\u0004\b\u0012\u0010\u0013J\u000f\u0010\u0014\u001a\u0004\u0018\u00010\u0015¢\u0006\u0004\b\u0016\u0010\u0017J\u0012\u0010\u0018\u001a\u0004\u0018\u00018\u0000H\u0087\b¢\u0006\u0004\b\u0019\u0010\u0007J\u0010\u0010\u001a\u001a\u00020\u001bHÖ\u0001¢\u0006\u0004\b\u001c\u0010\u001dJ\u000f\u0010\u001e\u001a\u00020\u001fH\u0016¢\u0006\u0004\b \u0010!R\u0011\u0010\b\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\f\u001a\u00020\t8F¢\u0006\u0006\u001a\u0004\b\r\u0010\u000bR\u0018\u0010\u0004\u001a\u0004\u0018\u00010\u00058\u0000X\u0081\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u000e\u0010\u000f\u0088\u0001\u0004\u0092\u0001\u0004\u0018\u00010\u0005ø\u0001\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006$"}, d2 = {"Lkotlin/Result;", "T", "Ljava/io/Serializable;", "Lkotlin/io/Serializable;", "value", "", "constructor-impl", "(Ljava/lang/Object;)Ljava/lang/Object;", "isFailure", "", "isFailure-impl", "(Ljava/lang/Object;)Z", "isSuccess", "isSuccess-impl", "getValue$annotations", "()V", "equals", "other", "equals-impl", "(Ljava/lang/Object;Ljava/lang/Object;)Z", "exceptionOrNull", "", "exceptionOrNull-impl", "(Ljava/lang/Object;)Ljava/lang/Throwable;", "getOrNull", "getOrNull-impl", "hashCode", "", "hashCode-impl", "(Ljava/lang/Object;)I", "toString", "", "toString-impl", "(Ljava/lang/Object;)Ljava/lang/String;", "Companion", "Failure", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
@kotlin.jvm.JvmInline
public final class Result<T> implements java.io.Serializable {
    public static final kotlin.Result.Companion Companion = null;
    private final java.lang.Object value;

    @kotlin.Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0003\n\u0002\b\u0005\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J%\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00050\u0004\"\u0004\b\u0001\u0010\u00052\u0006\u0010\u0006\u001a\u00020\u0007H\u0087\bø\u0001\u0000¢\u0006\u0002\u0010\bJ%\u0010\t\u001a\b\u0012\u0004\u0012\u0002H\u00050\u0004\"\u0004\b\u0001\u0010\u00052\u0006\u0010\n\u001a\u0002H\u0005H\u0087\bø\u0001\u0000¢\u0006\u0002\u0010\u000b\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\f"}, d2 = {"Lkotlin/Result$Companion;", "", "()V", "failure", "Lkotlin/Result;", "T", "exception", "", "(Ljava/lang/Throwable;)Ljava/lang/Object;", "success", "value", "(Ljava/lang/Object;)Ljava/lang/Object;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        private final <T> java.lang.Object failure(java.lang.Throwable r2) {
                r1 = this;
                java.lang.String r0 = "exception"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.Object r2 = kotlin.ResultKt.createFailure(r2)
                java.lang.Object r2 = kotlin.Result.constructor-impl(r2)
                return r2
        }

        private final <T> java.lang.Object success(T r1) {
                r0 = this;
                java.lang.Object r1 = kotlin.Result.constructor-impl(r1)
                return r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0000\u0018\u00002\u00060\u0001j\u0002`\u0002B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0013\u0010\u0006\u001a\u00020\u00072\b\u0010\b\u001a\u0004\u0018\u00010\tH\u0096\u0002J\b\u0010\n\u001a\u00020\u000bH\u0016J\b\u0010\f\u001a\u00020\rH\u0016R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u000e"}, d2 = {"Lkotlin/Result$Failure;", "Ljava/io/Serializable;", "Lkotlin/io/Serializable;", "exception", "", "(Ljava/lang/Throwable;)V", "equals", "", "other", "", "hashCode", "", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Failure implements java.io.Serializable {
        public final java.lang.Throwable exception;

        public Failure(java.lang.Throwable r2) {
                r1 = this;
                java.lang.String r0 = "exception"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.exception = r2
                return
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof kotlin.Result.Failure
                if (r0 == 0) goto L12
                java.lang.Throwable r0 = r1.exception
                kotlin.Result$Failure r2 = (kotlin.Result.Failure) r2
                java.lang.Throwable r2 = r2.exception
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r2 == 0) goto L12
                r2 = 1
                goto L13
            L12:
                r2 = 0
            L13:
                return r2
        }

        public int hashCode() {
                r1 = this;
                java.lang.Throwable r0 = r1.exception
                int r0 = r0.hashCode()
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Failure("
                r0.append(r1)
                java.lang.Throwable r1 = r2.exception
                r0.append(r1)
                r1 = 41
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            kotlin.Result$Companion r0 = new kotlin.Result$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.Result.Companion = r0
            return
    }

    private Result(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public static final kotlin.Result box-impl(java.lang.Object r1) {
            kotlin.Result r0 = new kotlin.Result
            r0.<init>(r1)
            return r0
    }

    public static <T> java.lang.Object constructor-impl(java.lang.Object r0) {
            return r0
    }

    public static boolean equals-impl(java.lang.Object r2, java.lang.Object r3) {
            boolean r0 = r3 instanceof kotlin.Result
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            kotlin.Result r3 = (kotlin.Result) r3
            java.lang.Object r3 = r3.unbox-impl()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r3)
            if (r2 != 0) goto L13
            return r1
        L13:
            r2 = 1
            return r2
    }

    public static final boolean equals-impl0(java.lang.Object r0, java.lang.Object r1) {
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            return r0
    }

    public static final java.lang.Throwable exceptionOrNull-impl(java.lang.Object r1) {
            boolean r0 = r1 instanceof kotlin.Result.Failure
            if (r0 == 0) goto L9
            kotlin.Result$Failure r1 = (kotlin.Result.Failure) r1
            java.lang.Throwable r1 = r1.exception
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    private static final T getOrNull-impl(java.lang.Object r1) {
            boolean r0 = isFailure-impl(r1)
            if (r0 == 0) goto L7
            r1 = 0
        L7:
            return r1
    }

    public static void getValue$annotations() {
            return
    }

    public static int hashCode-impl(java.lang.Object r0) {
            if (r0 != 0) goto L4
            r0 = 0
            goto L8
        L4:
            int r0 = r0.hashCode()
        L8:
            return r0
    }

    public static final boolean isFailure-impl(java.lang.Object r0) {
            boolean r0 = r0 instanceof kotlin.Result.Failure
            return r0
    }

    public static final boolean isSuccess-impl(java.lang.Object r0) {
            boolean r0 = r0 instanceof kotlin.Result.Failure
            r0 = r0 ^ 1
            return r0
    }

    public static java.lang.String toString-impl(java.lang.Object r2) {
            boolean r0 = r2 instanceof kotlin.Result.Failure
            if (r0 == 0) goto Lb
            kotlin.Result$Failure r2 = (kotlin.Result.Failure) r2
            java.lang.String r2 = r2.toString()
            goto L21
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Success("
            r0.append(r1)
            r0.append(r2)
            r2 = 41
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L21:
            return r2
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            java.lang.Object r0 = r1.value
            boolean r2 = equals-impl(r0, r2)
            return r2
    }

    public int hashCode() {
            r1 = this;
            java.lang.Object r0 = r1.value
            int r0 = hashCode-impl(r0)
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.Object r0 = r1.value
            java.lang.String r0 = toString-impl(r0)
            return r0
    }

    public final java.lang.Object unbox-impl() {
            r1 = this;
            java.lang.Object r0 = r1.value
            return r0
    }
}
