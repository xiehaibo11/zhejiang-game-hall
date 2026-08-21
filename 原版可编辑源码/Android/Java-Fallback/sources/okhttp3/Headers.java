package okhttp3;

@kotlin.Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0010\u001c\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0011\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010(\n\u0002\b\u0002\n\u0002\u0010\"\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010$\n\u0002\u0010 \n\u0002\b\u0006\u0018\u0000 '2\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u00020\u0001:\u0002&'B\u0015\b\u0002\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005¢\u0006\u0002\u0010\u0006J\u0006\u0010\u000b\u001a\u00020\fJ\u0013\u0010\r\u001a\u00020\u000e2\b\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u0096\u0002J\u0013\u0010\u0011\u001a\u0004\u0018\u00010\u00032\u0006\u0010\u0012\u001a\u00020\u0003H\u0086\u0002J\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u00142\u0006\u0010\u0012\u001a\u00020\u0003J\u0012\u0010\u0015\u001a\u0004\u0018\u00010\u00162\u0006\u0010\u0012\u001a\u00020\u0003H\u0007J\b\u0010\u0017\u001a\u00020\tH\u0016J\u001b\u0010\u0018\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00020\u0003\u0012\u0004\u0012\u00020\u00030\u00020\u0019H\u0096\u0002J\u000e\u0010\u0012\u001a\u00020\u00032\u0006\u0010\u001a\u001a\u00020\tJ\f\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u00030\u001cJ\u0006\u0010\u001d\u001a\u00020\u001eJ\r\u0010\b\u001a\u00020\tH\u0007¢\u0006\u0002\b\u001fJ\u0018\u0010 \u001a\u0014\u0012\u0004\u0012\u00020\u0003\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00030\"0!J\b\u0010#\u001a\u00020\u0003H\u0016J\u000e\u0010$\u001a\u00020\u00032\u0006\u0010\u001a\u001a\u00020\tJ\u0014\u0010%\u001a\b\u0012\u0004\u0012\u00020\u00030\"2\u0006\u0010\u0012\u001a\u00020\u0003R\u0016\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00030\u0005X\u0082\u0004¢\u0006\u0004\n\u0002\u0010\u0007R\u0011\u0010\b\u001a\u00020\t8G¢\u0006\u0006\u001a\u0004\b\b\u0010\n¨\u0006("}, d2 = {"Lokhttp3/Headers;", "", "Lkotlin/Pair;", "", "namesAndValues", "", "([Ljava/lang/String;)V", "[Ljava/lang/String;", "size", "", "()I", "byteCount", "", "equals", "", "other", "", "get", "name", "getDate", "Ljava/util/Date;", "getInstant", "Ljava/time/Instant;", "hashCode", "iterator", "", "index", "names", "", "newBuilder", "Lokhttp3/Headers$Builder;", "-deprecated_size", "toMultimap", "", "", "toString", "value", "values", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Headers implements java.lang.Iterable<kotlin.Pair<? extends java.lang.String, ? extends java.lang.String>>, kotlin.jvm.internal.markers.KMappedMarker {
    public static final okhttp3.Headers.Companion Companion = null;
    private final java.lang.String[] namesAndValues;

    @kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0010\u000e\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\u000e\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0005J\u0018\u0010\b\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\fH\u0007J\u0016\u0010\b\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\rJ\u0016\u0010\b\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u0005J\u000e\u0010\u000e\u001a\u00020\u00002\u0006\u0010\u000f\u001a\u00020\u0010J\u0015\u0010\u0011\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\u0012J\u001d\u0010\u0011\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u0005H\u0000¢\u0006\u0002\b\u0012J\u0016\u0010\u0013\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u0005J\u0006\u0010\u0014\u001a\u00020\u0010J\u0013\u0010\u0015\u001a\u0004\u0018\u00010\u00052\u0006\u0010\n\u001a\u00020\u0005H\u0086\u0002J\u000e\u0010\u0016\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u0005J\u0019\u0010\u0017\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\fH\u0087\u0002J\u0019\u0010\u0017\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\rH\u0086\u0002J\u0019\u0010\u0017\u001a\u00020\u00002\u0006\u0010\n\u001a\u00020\u00052\u0006\u0010\u000b\u001a\u00020\u0005H\u0086\u0002R\u001a\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u0018"}, d2 = {"Lokhttp3/Headers$Builder;", "", "()V", "namesAndValues", "", "", "getNamesAndValues$okhttp", "()Ljava/util/List;", "add", "line", "name", "value", "Ljava/time/Instant;", "Ljava/util/Date;", "addAll", "headers", "Lokhttp3/Headers;", "addLenient", "addLenient$okhttp", "addUnsafeNonAscii", "build", "get", "removeAll", "set", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private final java.util.List<java.lang.String> namesAndValues;

        public Builder() {
                r2 = this;
                r2.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r1 = 20
                r0.<init>(r1)
                java.util.List r0 = (java.util.List) r0
                r2.namesAndValues = r0
                return
        }

        public final okhttp3.Headers.Builder add(java.lang.String r8) {
                r7 = this;
                java.lang.String r0 = "line"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = r7
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                r1 = r8
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                r2 = 58
                r3 = 0
                r4 = 0
                r5 = 6
                r6 = 0
                int r1 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
                r2 = 1
                r4 = -1
                if (r1 == r4) goto L1b
                r4 = r2
                goto L1c
            L1b:
                r4 = r3
            L1c:
                if (r4 == 0) goto L3f
                java.lang.String r3 = r8.substring(r3, r1)
                java.lang.String r4 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                java.lang.CharSequence r3 = kotlin.text.StringsKt.trim(r3)
                java.lang.String r3 = r3.toString()
                int r1 = r1 + r2
                java.lang.String r8 = r8.substring(r1)
                java.lang.String r1 = "this as java.lang.String).substring(startIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r1)
                r0.add(r3, r8)
                return r0
            L3f:
                java.lang.String r0 = "Unexpected header: "
                java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r8)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r8 = r8.toString()
                r0.<init>(r8)
                throw r0
        }

        public final okhttp3.Headers.Builder add(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r2
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
                okhttp3.Headers.Companion.access$checkName(r1, r3)
                okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
                okhttp3.Headers.Companion.access$checkValue(r1, r4, r3)
                r0.addLenient$okhttp(r3, r4)
                return r0
        }

        public final okhttp3.Headers.Builder add(java.lang.String r5, java.time.Instant r6) {
                r4 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r4
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                java.util.Date r1 = new java.util.Date
                long r2 = r6.toEpochMilli()
                r1.<init>(r2)
                r0.add(r5, r1)
                return r0
        }

        public final okhttp3.Headers.Builder add(java.lang.String r2, java.util.Date r3) {
                r1 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r1
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                java.lang.String r3 = okhttp3.internal.http.DatesKt.toHttpDateString(r3)
                r0.add(r2, r3)
                return r0
        }

        public final okhttp3.Headers.Builder addAll(okhttp3.Headers r6) {
                r5 = this;
                java.lang.String r0 = "headers"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r5
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                int r1 = r6.size()
                r2 = 0
            Ld:
                if (r2 >= r1) goto L1e
                int r3 = r2 + 1
                java.lang.String r4 = r6.name(r2)
                java.lang.String r2 = r6.value(r2)
                r0.addLenient$okhttp(r4, r2)
                r2 = r3
                goto Ld
            L1e:
                return r0
        }

        public final okhttp3.Headers.Builder addLenient$okhttp(java.lang.String r8) {
                r7 = this;
                java.lang.String r0 = "line"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = r7
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                r1 = r8
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                r2 = 58
                r3 = 1
                r4 = 0
                r5 = 4
                r6 = 0
                int r1 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
                java.lang.String r2 = "this as java.lang.String).substring(startIndex)"
                r5 = -1
                if (r1 == r5) goto L2f
                java.lang.String r4 = r8.substring(r4, r1)
                java.lang.String r5 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
                int r1 = r1 + r3
                java.lang.String r8 = r8.substring(r1)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r2)
                r0.addLenient$okhttp(r4, r8)
                goto L47
            L2f:
                char r1 = r8.charAt(r4)
                r4 = 58
                java.lang.String r5 = ""
                if (r1 != r4) goto L44
                java.lang.String r8 = r8.substring(r3)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r2)
                r0.addLenient$okhttp(r5, r8)
                goto L47
            L44:
                r0.addLenient$okhttp(r5, r8)
            L47:
                return r0
        }

        public final okhttp3.Headers.Builder addLenient$okhttp(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r2
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                java.util.List r1 = r0.getNamesAndValues$okhttp()
                r1.add(r3)
                java.util.List r3 = r0.getNamesAndValues$okhttp()
                java.lang.CharSequence r4 = (java.lang.CharSequence) r4
                java.lang.CharSequence r4 = kotlin.text.StringsKt.trim(r4)
                java.lang.String r4 = r4.toString()
                r3.add(r4)
                return r0
        }

        public final okhttp3.Headers.Builder addUnsafeNonAscii(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r2
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
                okhttp3.Headers.Companion.access$checkName(r1, r3)
                r0.addLenient$okhttp(r3, r4)
                return r0
        }

        public final okhttp3.Headers build() {
                r3 = this;
                okhttp3.Headers r0 = new okhttp3.Headers
                java.util.List<java.lang.String> r1 = r3.namesAndValues
                java.util.Collection r1 = (java.util.Collection) r1
                r2 = 0
                java.lang.String[] r2 = new java.lang.String[r2]
                java.lang.Object[] r1 = r1.toArray(r2)
                if (r1 == 0) goto L16
                java.lang.String[] r1 = (java.lang.String[]) r1
                r2 = 0
                r0.<init>(r1, r2)
                return r0
            L16:
                java.lang.NullPointerException r0 = new java.lang.NullPointerException
                java.lang.String r1 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
                r0.<init>(r1)
                throw r0
        }

        public final java.lang.String get(java.lang.String r6) {
                r5 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                java.util.List<java.lang.String> r0 = r5.namesAndValues
                int r0 = r0.size()
                int r0 = r0 + (-2)
                r1 = -2
                r2 = 0
                int r1 = kotlin.internal.ProgressionUtilKt.getProgressionLastElement(r0, r2, r1)
                if (r1 > r0) goto L35
            L15:
                int r2 = r0 + (-2)
                java.util.List<java.lang.String> r3 = r5.namesAndValues
                java.lang.Object r3 = r3.get(r0)
                java.lang.String r3 = (java.lang.String) r3
                r4 = 1
                boolean r3 = kotlin.text.StringsKt.equals(r6, r3, r4)
                if (r3 == 0) goto L30
                java.util.List<java.lang.String> r6 = r5.namesAndValues
                int r0 = r0 + r4
                java.lang.Object r6 = r6.get(r0)
                java.lang.String r6 = (java.lang.String) r6
                return r6
            L30:
                if (r0 != r1) goto L33
                goto L35
            L33:
                r0 = r2
                goto L15
            L35:
                r6 = 0
                return r6
        }

        public final java.util.List<java.lang.String> getNamesAndValues$okhttp() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.namesAndValues
                return r0
        }

        public final okhttp3.Headers.Builder removeAll(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r4
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                r1 = 0
            L9:
                java.util.List r2 = r0.getNamesAndValues$okhttp()
                int r2 = r2.size()
                if (r1 >= r2) goto L37
                java.util.List r2 = r0.getNamesAndValues$okhttp()
                java.lang.Object r2 = r2.get(r1)
                java.lang.String r2 = (java.lang.String) r2
                r3 = 1
                boolean r2 = kotlin.text.StringsKt.equals(r5, r2, r3)
                if (r2 == 0) goto L34
                java.util.List r2 = r0.getNamesAndValues$okhttp()
                r2.remove(r1)
                java.util.List r2 = r0.getNamesAndValues$okhttp()
                r2.remove(r1)
                int r1 = r1 + (-2)
            L34:
                int r1 = r1 + 2
                goto L9
            L37:
                return r0
        }

        public final okhttp3.Headers.Builder set(java.lang.String r3, java.lang.String r4) {
                r2 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r0 = r2
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
                okhttp3.Headers.Companion.access$checkName(r1, r3)
                okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
                okhttp3.Headers.Companion.access$checkValue(r1, r4, r3)
                r0.removeAll(r3)
                r0.addLenient$okhttp(r3, r4)
                return r0
        }

        public final okhttp3.Headers.Builder set(java.lang.String r5, java.time.Instant r6) {
                r4 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r4
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                java.util.Date r1 = new java.util.Date
                long r2 = r6.toEpochMilli()
                r1.<init>(r2)
                okhttp3.Headers$Builder r5 = r0.set(r5, r1)
                return r5
        }

        public final okhttp3.Headers.Builder set(java.lang.String r2, java.util.Date r3) {
                r1 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "value"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r0 = r1
                okhttp3.Headers$Builder r0 = (okhttp3.Headers.Builder) r0
                java.lang.String r3 = okhttp3.internal.http.DatesKt.toHttpDateString(r3)
                r0.set(r2, r3)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010$\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u0006H\u0002J\u0018\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\u0005\u001a\u00020\u0006H\u0002J%\u0010\t\u001a\u0004\u0018\u00010\u00062\f\u0010\n\u001a\b\u0012\u0004\u0012\u00020\u00060\u000b2\u0006\u0010\u0005\u001a\u00020\u0006H\u0002¢\u0006\u0002\u0010\fJ#\u0010\r\u001a\u00020\u000e2\u0012\u0010\n\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00060\u000b\"\u00020\u0006H\u0007¢\u0006\u0004\b\u000f\u0010\u0010J#\u0010\u000f\u001a\u00020\u000e2\u0012\u0010\n\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00060\u000b\"\u00020\u0006H\u0007¢\u0006\u0004\b\u0011\u0010\u0010J!\u0010\u000f\u001a\u00020\u000e2\u0012\u0010\u0012\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00060\u0013H\u0007¢\u0006\u0002\b\u0011J\u001d\u0010\u0014\u001a\u00020\u000e*\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00060\u0013H\u0007¢\u0006\u0002\b\u000f¨\u0006\u0015"}, d2 = {"Lokhttp3/Headers$Companion;", "", "()V", "checkName", "", "name", "", "checkValue", "value", "get", "namesAndValues", "", "([Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "headersOf", "Lokhttp3/Headers;", "of", "([Ljava/lang/String;)Lokhttp3/Headers;", "-deprecated_of", "headers", "", "toHeaders", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public static final void access$checkName(okhttp3.Headers.Companion r0, java.lang.String r1) {
                r0.checkName(r1)
                return
        }

        public static final void access$checkValue(okhttp3.Headers.Companion r0, java.lang.String r1, java.lang.String r2) {
                r0.checkValue(r1, r2)
                return
        }

        public static final java.lang.String access$get(okhttp3.Headers.Companion r0, java.lang.String[] r1, java.lang.String r2) {
                java.lang.String r0 = r0.get(r1, r2)
                return r0
        }

        private final void checkName(java.lang.String r8) {
                r7 = this;
                r0 = r8
                java.lang.CharSequence r0 = (java.lang.CharSequence) r0
                int r0 = r0.length()
                r1 = 1
                r2 = 0
                if (r0 <= 0) goto Ld
                r0 = r1
                goto Le
            Ld:
                r0 = r2
            Le:
                if (r0 == 0) goto L4f
                int r0 = r8.length()
                r3 = r2
            L15:
                if (r3 >= r0) goto L4e
                int r4 = r3 + 1
                char r5 = r8.charAt(r3)
                r6 = 33
                if (r6 > r5) goto L27
                r6 = 127(0x7f, float:1.78E-43)
                if (r5 >= r6) goto L27
                r6 = r1
                goto L28
            L27:
                r6 = r2
            L28:
                if (r6 == 0) goto L2c
                r3 = r4
                goto L15
            L2c:
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.Integer r4 = java.lang.Integer.valueOf(r5)
                r0[r2] = r4
                java.lang.Integer r2 = java.lang.Integer.valueOf(r3)
                r0[r1] = r2
                r1 = 2
                r0[r1] = r8
                java.lang.String r8 = "Unexpected char %#04x at %d in header name: %s"
                java.lang.String r8 = okhttp3.internal.Util.format(r8, r0)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r8 = r8.toString()
                r0.<init>(r8)
                throw r0
            L4e:
                return
            L4f:
                java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "name is empty"
                java.lang.String r0 = r0.toString()
                r8.<init>(r0)
                throw r8
        }

        private final void checkValue(java.lang.String r8, java.lang.String r9) {
                r7 = this;
                int r0 = r8.length()
                r1 = 0
                r2 = r1
            L6:
                if (r2 >= r0) goto L5d
                int r3 = r2 + 1
                char r4 = r8.charAt(r2)
                r5 = 9
                r6 = 1
                if (r4 == r5) goto L23
                r5 = 32
                if (r5 > r4) goto L1d
                r5 = 127(0x7f, float:1.78E-43)
                if (r4 >= r5) goto L1d
                r5 = r6
                goto L1e
            L1d:
                r5 = r1
            L1e:
                if (r5 == 0) goto L21
                goto L23
            L21:
                r5 = r1
                goto L24
            L23:
                r5 = r6
            L24:
                if (r5 != 0) goto L5b
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.Integer r3 = java.lang.Integer.valueOf(r4)
                r0[r1] = r3
                java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
                r0[r6] = r1
                r1 = 2
                r0[r1] = r9
                java.lang.String r1 = "Unexpected char %#04x at %d in %s value"
                java.lang.String r0 = okhttp3.internal.Util.format(r1, r0)
                boolean r9 = okhttp3.internal.Util.isSensitiveHeader(r9)
                if (r9 == 0) goto L47
                java.lang.String r8 = ""
                goto L4d
            L47:
                java.lang.String r9 = ": "
                java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r9, r8)
            L4d:
                java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r8)
                java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
                java.lang.String r8 = r8.toString()
                r9.<init>(r8)
                throw r9
            L5b:
                r2 = r3
                goto L6
            L5d:
                return
        }

        private final java.lang.String get(java.lang.String[] r6, java.lang.String r7) {
                r5 = this;
                int r0 = r6.length
                int r0 = r0 + (-2)
                r1 = -2
                r2 = 0
                int r1 = kotlin.internal.ProgressionUtilKt.getProgressionLastElement(r0, r2, r1)
                if (r1 > r0) goto L1f
            Lb:
                int r2 = r0 + (-2)
                r3 = r6[r0]
                r4 = 1
                boolean r3 = kotlin.text.StringsKt.equals(r7, r3, r4)
                if (r3 == 0) goto L1a
                int r0 = r0 + r4
                r6 = r6[r0]
                return r6
            L1a:
                if (r0 != r1) goto L1d
                goto L1f
            L1d:
                r0 = r2
                goto Lb
            L1f:
                r6 = 0
                return r6
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "function moved to extension", replaceWith = @kotlin.ReplaceWith(expression = "headers.toHeaders()", imports = {}))
        public final okhttp3.Headers -deprecated_of(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                java.lang.String r0 = "headers"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.Headers r2 = r1.of(r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "function name changed", replaceWith = @kotlin.ReplaceWith(expression = "headersOf(*namesAndValues)", imports = {}))
        public final okhttp3.Headers -deprecated_of(java.lang.String... r2) {
                r1 = this;
                java.lang.String r0 = "namesAndValues"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                int r0 = r2.length
                java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
                java.lang.String[] r2 = (java.lang.String[]) r2
                okhttp3.Headers r2 = r1.of(r2)
                return r2
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.Headers of(java.util.Map<java.lang.String, java.lang.String> r5) {
                r4 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                int r0 = r5.size()
                int r0 = r0 * 2
                java.lang.String[] r0 = new java.lang.String[r0]
                java.util.Set r5 = r5.entrySet()
                java.util.Iterator r5 = r5.iterator()
                r1 = 0
            L16:
                boolean r2 = r5.hasNext()
                if (r2 == 0) goto L51
                java.lang.Object r2 = r5.next()
                java.util.Map$Entry r2 = (java.util.Map.Entry) r2
                java.lang.Object r3 = r2.getKey()
                java.lang.String r3 = (java.lang.String) r3
                java.lang.Object r2 = r2.getValue()
                java.lang.String r2 = (java.lang.String) r2
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                java.lang.CharSequence r3 = kotlin.text.StringsKt.trim(r3)
                java.lang.String r3 = r3.toString()
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                java.lang.CharSequence r2 = kotlin.text.StringsKt.trim(r2)
                java.lang.String r2 = r2.toString()
                r4.checkName(r3)
                r4.checkValue(r2, r3)
                r0[r1] = r3
                int r3 = r1 + 1
                r0[r3] = r2
                int r1 = r1 + 2
                goto L16
            L51:
                okhttp3.Headers r5 = new okhttp3.Headers
                r1 = 0
                r5.<init>(r0, r1)
                return r5
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.Headers of(java.lang.String... r8) {
                r7 = this;
                java.lang.String r0 = "namesAndValues"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                int r0 = r8.length
                r1 = 2
                int r0 = r0 % r1
                r2 = 1
                r3 = 0
                if (r0 != 0) goto Le
                r0 = r2
                goto Lf
            Le:
                r0 = r3
            Lf:
                if (r0 == 0) goto L65
                java.lang.Object r8 = r8.clone()
                java.lang.String[] r8 = (java.lang.String[]) r8
                int r0 = r8.length
                r4 = r3
            L19:
                if (r4 >= r0) goto L42
                int r5 = r4 + 1
                r6 = r8[r4]
                if (r6 == 0) goto L23
                r6 = r2
                goto L24
            L23:
                r6 = r3
            L24:
                if (r6 == 0) goto L36
                r6 = r8[r4]
                java.lang.CharSequence r6 = (java.lang.CharSequence) r6
                java.lang.CharSequence r6 = kotlin.text.StringsKt.trim(r6)
                java.lang.String r6 = r6.toString()
                r8[r4] = r6
                r4 = r5
                goto L19
            L36:
                java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Headers cannot be null"
                java.lang.String r0 = r0.toString()
                r8.<init>(r0)
                throw r8
            L42:
                int r0 = r8.length
                int r0 = r0 + (-1)
                int r0 = kotlin.internal.ProgressionUtilKt.getProgressionLastElement(r3, r0, r1)
                if (r0 < 0) goto L5e
            L4b:
                int r1 = r3 + 2
                r2 = r8[r3]
                int r4 = r3 + 1
                r4 = r8[r4]
                r7.checkName(r2)
                r7.checkValue(r4, r2)
                if (r3 != r0) goto L5c
                goto L5e
            L5c:
                r3 = r1
                goto L4b
            L5e:
                okhttp3.Headers r0 = new okhttp3.Headers
                r1 = 0
                r0.<init>(r8, r1)
                return r0
            L65:
                java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Expected alternating header names and values"
                java.lang.String r0 = r0.toString()
                r8.<init>(r0)
                throw r8
        }
    }

    static {
            okhttp3.Headers$Companion r0 = new okhttp3.Headers$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.Headers.Companion = r0
            return
    }

    private Headers(java.lang.String[] r1) {
            r0 = this;
            r0.<init>()
            r0.namesAndValues = r1
            return
    }

    public Headers(java.lang.String[] r1, kotlin.jvm.internal.DefaultConstructorMarker r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.Headers of(java.util.Map<java.lang.String, java.lang.String> r1) {
            okhttp3.Headers$Companion r0 = okhttp3.Headers.Companion
            okhttp3.Headers r1 = r0.of(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.Headers of(java.lang.String... r1) {
            okhttp3.Headers$Companion r0 = okhttp3.Headers.Companion
            okhttp3.Headers r1 = r0.of(r1)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "size", imports = {}))
    public final int -deprecated_size() {
            r1 = this;
            int r0 = r1.size()
            return r0
    }

    public final long byteCount() {
            r7 = this;
            java.lang.String[] r0 = r7.namesAndValues
            int r1 = r0.length
            int r1 = r1 * 2
            long r1 = (long) r1
            int r0 = r0.length
            r3 = 0
        L8:
            if (r3 >= r0) goto L18
            int r4 = r3 + 1
            java.lang.String[] r5 = r7.namesAndValues
            r3 = r5[r3]
            int r3 = r3.length()
            long r5 = (long) r3
            long r1 = r1 + r5
            r3 = r4
            goto L8
        L18:
            return r1
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof okhttp3.Headers
            if (r0 == 0) goto L12
            java.lang.String[] r0 = r1.namesAndValues
            okhttp3.Headers r2 = (okhttp3.Headers) r2
            java.lang.String[] r2 = r2.namesAndValues
            boolean r2 = java.util.Arrays.equals(r0, r2)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public final java.lang.String get(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.Headers$Companion r0 = okhttp3.Headers.Companion
            java.lang.String[] r1 = r2.namesAndValues
            java.lang.String r3 = okhttp3.Headers.Companion.access$get(r0, r1, r3)
            return r3
    }

    public final java.util.Date getDate(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r2 = r1.get(r2)
            if (r2 != 0) goto Ld
            r2 = 0
            goto L11
        Ld:
            java.util.Date r2 = okhttp3.internal.http.DatesKt.toHttpDateOrNull(r2)
        L11:
            return r2
    }

    public final java.time.Instant getInstant(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.Date r2 = r1.getDate(r2)
            if (r2 != 0) goto Ld
            r2 = 0
            goto L11
        Ld:
            java.time.Instant r2 = r2.toInstant()
        L11:
            return r2
    }

    public int hashCode() {
            r1 = this;
            java.lang.String[] r0 = r1.namesAndValues
            int r0 = java.util.Arrays.hashCode(r0)
            return r0
    }

    @Override
    public java.util.Iterator<kotlin.Pair<? extends java.lang.String, ? extends java.lang.String>> iterator() {
            r5 = this;
            int r0 = r5.size()
            kotlin.Pair[] r1 = new kotlin.Pair[r0]
            r2 = 0
        L7:
            if (r2 >= r0) goto L1a
            java.lang.String r3 = r5.name(r2)
            java.lang.String r4 = r5.value(r2)
            kotlin.Pair r3 = kotlin.TuplesKt.to(r3, r4)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L7
        L1a:
            java.util.Iterator r0 = kotlin.jvm.internal.ArrayIteratorKt.iterator(r1)
            return r0
    }

    public final java.lang.String name(int r2) {
            r1 = this;
            java.lang.String[] r0 = r1.namesAndValues
            int r2 = r2 * 2
            r2 = r0[r2]
            return r2
    }

    public final java.util.Set<java.lang.String> names() {
            r4 = this;
            java.util.TreeSet r0 = new java.util.TreeSet
            kotlin.jvm.internal.StringCompanionObject r1 = kotlin.jvm.internal.StringCompanionObject.INSTANCE
            java.util.Comparator r1 = kotlin.text.StringsKt.getCASE_INSENSITIVE_ORDER(r1)
            r0.<init>(r1)
            int r1 = r4.size()
            r2 = 0
        L10:
            if (r2 >= r1) goto L1d
            int r3 = r2 + 1
            java.lang.String r2 = r4.name(r2)
            r0.add(r2)
            r2 = r3
            goto L10
        L1d:
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            java.lang.String r1 = "unmodifiableSet(result)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final okhttp3.Headers.Builder newBuilder() {
            r3 = this;
            okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
            r0.<init>()
            java.util.List r1 = r0.getNamesAndValues$okhttp()
            java.util.Collection r1 = (java.util.Collection) r1
            java.lang.String[] r2 = r3.namesAndValues
            kotlin.collections.CollectionsKt.addAll(r1, r2)
            return r0
    }

    public final int size() {
            r1 = this;
            java.lang.String[] r0 = r1.namesAndValues
            int r0 = r0.length
            int r0 = r0 / 2
            return r0
    }

    public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> toMultimap() {
            r7 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            kotlin.jvm.internal.StringCompanionObject r1 = kotlin.jvm.internal.StringCompanionObject.INSTANCE
            java.util.Comparator r1 = kotlin.text.StringsKt.getCASE_INSENSITIVE_ORDER(r1)
            r0.<init>(r1)
            int r1 = r7.size()
            r2 = 0
        L10:
            if (r2 >= r1) goto L47
            int r3 = r2 + 1
            java.lang.String r4 = r7.name(r2)
            java.util.Locale r5 = java.util.Locale.US
            java.lang.String r6 = "US"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
            java.lang.String r4 = r4.toLowerCase(r5)
            java.lang.String r5 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            java.lang.Object r5 = r0.get(r4)
            java.util.List r5 = (java.util.List) r5
            if (r5 != 0) goto L3e
            java.util.ArrayList r5 = new java.util.ArrayList
            r6 = 2
            r5.<init>(r6)
            java.util.List r5 = (java.util.List) r5
            r6 = r0
            java.util.Map r6 = (java.util.Map) r6
            r6.put(r4, r5)
        L3e:
            java.lang.String r2 = r7.value(r2)
            r5.add(r2)
            r2 = r3
            goto L10
        L47:
            java.util.Map r0 = (java.util.Map) r0
            return r0
    }

    public java.lang.String toString() {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r6.size()
            r2 = 0
        La:
            if (r2 >= r1) goto L30
            int r3 = r2 + 1
            java.lang.String r4 = r6.name(r2)
            java.lang.String r2 = r6.value(r2)
            r0.append(r4)
            java.lang.String r5 = ": "
            r0.append(r5)
            boolean r4 = okhttp3.internal.Util.isSensitiveHeader(r4)
            if (r4 == 0) goto L26
            java.lang.String r2 = "██"
        L26:
            r0.append(r2)
            java.lang.String r2 = "\n"
            r0.append(r2)
            r2 = r3
            goto La
        L30:
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.lang.String value(int r2) {
            r1 = this;
            java.lang.String[] r0 = r1.namesAndValues
            int r2 = r2 * 2
            int r2 = r2 + 1
            r2 = r0[r2]
            return r2
    }

    public final java.util.List<java.lang.String> values(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r6.size()
            r1 = 0
            r2 = 0
        Lb:
            if (r2 >= r0) goto L2d
            int r3 = r2 + 1
            java.lang.String r4 = r6.name(r2)
            r5 = 1
            boolean r4 = kotlin.text.StringsKt.equals(r7, r4, r5)
            if (r4 == 0) goto L2b
            if (r1 != 0) goto L24
            java.util.ArrayList r1 = new java.util.ArrayList
            r4 = 2
            r1.<init>(r4)
            java.util.List r1 = (java.util.List) r1
        L24:
            java.lang.String r2 = r6.value(r2)
            r1.add(r2)
        L2b:
            r2 = r3
            goto Lb
        L2d:
            if (r1 == 0) goto L39
            java.util.List r7 = java.util.Collections.unmodifiableList(r1)
            java.lang.String r0 = "{\n      Collections.unmodifiableList(result)\n    }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r0)
            goto L3d
        L39:
            java.util.List r7 = kotlin.collections.CollectionsKt.emptyList()
        L3d:
            return r7
    }
}
