package okhttp3.internal.concurrent;

@kotlin.Metadata(d1 = {"\u0000*\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\u001a\u000e\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003\u001a \u0010\u0004\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u0001H\u0002\u001a5\u0010\u000b\u001a\u0002H\f\"\u0004\b\u0000\u0010\f2\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\f\u0010\r\u001a\b\u0012\u0004\u0012\u0002H\f0\u000eH\u0080\bø\u0001\u0000¢\u0006\u0002\u0010\u000f\u001a*\u0010\u0010\u001a\u00020\u00052\u0006\u0010\u0006\u001a\u00020\u00072\u0006\u0010\b\u001a\u00020\t2\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u00020\u00010\u000eH\u0080\bø\u0001\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0012"}, d2 = {"formatDuration", "", "ns", "", "log", "", "task", "Lokhttp3/internal/concurrent/Task;", "queue", "Lokhttp3/internal/concurrent/TaskQueue;", "message", "logElapsed", "T", "block", "Lkotlin/Function0;", "(Lokhttp3/internal/concurrent/Task;Lokhttp3/internal/concurrent/TaskQueue;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "taskLog", "messageBlock", "okhttp"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class TaskLoggerKt {
    public static final void access$log(okhttp3.internal.concurrent.Task r0, okhttp3.internal.concurrent.TaskQueue r1, java.lang.String r2) {
            log(r0, r1, r2)
            return
    }

    public static final java.lang.String formatDuration(long r12) {
            r0 = -999500000(0xffffffffc46cd720, double:NaN)
            int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            java.lang.String r1 = " s "
            r2 = 1000000000(0x3b9aca00, float:0.0047237873)
            r3 = 500000000(0x1dcd6500, float:5.436748E-21)
            if (r0 > 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r3 = (long) r3
            long r12 = r12 - r3
            long r2 = (long) r2
            long r12 = r12 / r2
            r0.append(r12)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
            goto Lb0
        L24:
            r4 = -999500(0xfffffffffff0bfb4, double:NaN)
            int r0 = (r12 > r4 ? 1 : (r12 == r4 ? 0 : -1))
            java.lang.String r4 = " ms"
            r5 = 1000000(0xf4240, float:1.401298E-39)
            r6 = 500000(0x7a120, float:7.00649E-40)
            if (r0 > 0) goto L47
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = (long) r6
            long r12 = r12 - r1
            long r1 = (long) r5
            long r12 = r12 / r1
            r0.append(r12)
            r0.append(r4)
            java.lang.String r12 = r0.toString()
            goto Lb0
        L47:
            r7 = 0
            int r0 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            java.lang.String r7 = " µs"
            r8 = 1000(0x3e8, float:1.401E-42)
            r9 = 500(0x1f4, float:7.0E-43)
            if (r0 > 0) goto L67
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = (long) r9
            long r12 = r12 - r1
            long r1 = (long) r8
            long r12 = r12 / r1
            r0.append(r12)
            r0.append(r7)
            java.lang.String r12 = r0.toString()
            goto Lb0
        L67:
            r10 = 999500(0xf404c, double:4.938186E-318)
            int r0 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r0 >= 0) goto L82
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = (long) r9
            long r12 = r12 + r1
            long r1 = (long) r8
            long r12 = r12 / r1
            r0.append(r12)
            r0.append(r7)
            java.lang.String r12 = r0.toString()
            goto Lb0
        L82:
            r7 = 999500000(0x3b9328e0, double:4.93818613E-315)
            int r0 = (r12 > r7 ? 1 : (r12 == r7 ? 0 : -1))
            if (r0 >= 0) goto L9d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r1 = (long) r6
            long r12 = r12 + r1
            long r1 = (long) r5
            long r12 = r12 / r1
            r0.append(r12)
            r0.append(r4)
            java.lang.String r12 = r0.toString()
            goto Lb0
        L9d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            long r3 = (long) r3
            long r12 = r12 + r3
            long r2 = (long) r2
            long r12 = r12 / r2
            r0.append(r12)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
        Lb0:
            kotlin.jvm.internal.StringCompanionObject r13 = kotlin.jvm.internal.StringCompanionObject.INSTANCE
            r13 = 1
            java.lang.Object[] r0 = new java.lang.Object[r13]
            r1 = 0
            r0[r1] = r12
            java.lang.Object[] r12 = java.util.Arrays.copyOf(r0, r13)
            java.lang.String r13 = "%6s"
            java.lang.String r12 = java.lang.String.format(r13, r12)
            java.lang.String r13 = "format(format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r12, r13)
            return r12
    }

    private static final void log(okhttp3.internal.concurrent.Task r4, okhttp3.internal.concurrent.TaskQueue r5, java.lang.String r6) {
            okhttp3.internal.concurrent.TaskRunner$Companion r0 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r0 = r0.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = r5.getName$okhttp()
            r1.append(r5)
            r5 = 32
            r1.append(r5)
            kotlin.jvm.internal.StringCompanionObject r5 = kotlin.jvm.internal.StringCompanionObject.INSTANCE
            r5 = 1
            java.lang.Object[] r2 = new java.lang.Object[r5]
            r3 = 0
            r2[r3] = r6
            java.lang.Object[] r5 = java.util.Arrays.copyOf(r2, r5)
            java.lang.String r6 = "%-22s"
            java.lang.String r5 = java.lang.String.format(r6, r5)
            java.lang.String r6 = "format(format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r6)
            r1.append(r5)
            java.lang.String r5 = ": "
            r1.append(r5)
            java.lang.String r4 = r4.getName()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.fine(r4)
            return
    }

    public static final <T> T logElapsed(okhttp3.internal.concurrent.Task r6, okhttp3.internal.concurrent.TaskQueue r7, kotlin.jvm.functions.Function0<? extends T> r8) {
            java.lang.String r0 = "task"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "queue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            okhttp3.internal.concurrent.TaskRunner$Companion r0 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r0 = r0.getLogger()
            java.util.logging.Level r1 = java.util.logging.Level.FINE
            boolean r0 = r0.isLoggable(r1)
            if (r0 == 0) goto L2f
            okhttp3.internal.concurrent.TaskRunner r1 = r7.getTaskRunner$okhttp()
            okhttp3.internal.concurrent.TaskRunner$Backend r1 = r1.getBackend()
            long r1 = r1.nanoTime()
            java.lang.String r3 = "starting"
            access$log(r6, r7, r3)
            goto L31
        L2f:
            r1 = -1
        L31:
            r3 = 1
            java.lang.Object r8 = r8.invoke()     // Catch: java.lang.Throwable -> L59
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            if (r0 == 0) goto L55
            okhttp3.internal.concurrent.TaskRunner r0 = r7.getTaskRunner$okhttp()
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r0.getBackend()
            long r4 = r0.nanoTime()
            long r4 = r4 - r1
            java.lang.String r0 = formatDuration(r4)
            java.lang.String r1 = "finished run in "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            access$log(r6, r7, r0)
        L55:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            return r8
        L59:
            r8 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            if (r0 == 0) goto L79
            okhttp3.internal.concurrent.TaskRunner r0 = r7.getTaskRunner$okhttp()
            okhttp3.internal.concurrent.TaskRunner$Backend r0 = r0.getBackend()
            long r4 = r0.nanoTime()
            long r4 = r4 - r1
            java.lang.String r0 = formatDuration(r4)
            java.lang.String r1 = "failed a run in "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            access$log(r6, r7, r0)
        L79:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            throw r8
    }

    public static final void taskLog(okhttp3.internal.concurrent.Task r2, okhttp3.internal.concurrent.TaskQueue r3, kotlin.jvm.functions.Function0<java.lang.String> r4) {
            java.lang.String r0 = "task"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "queue"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "messageBlock"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okhttp3.internal.concurrent.TaskRunner$Companion r0 = okhttp3.internal.concurrent.TaskRunner.Companion
            java.util.logging.Logger r0 = r0.getLogger()
            java.util.logging.Level r1 = java.util.logging.Level.FINE
            boolean r0 = r0.isLoggable(r1)
            if (r0 == 0) goto L26
            java.lang.Object r4 = r4.invoke()
            java.lang.String r4 = (java.lang.String) r4
            access$log(r2, r3, r4)
        L26:
            return
    }
}
