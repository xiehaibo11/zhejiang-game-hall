package okhttp3.internal.platform.android;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010$\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0004\n\u0002\u0010\u0003\n\u0002\b\u0007\bÇ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J/\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\n2\u0006\u0010\u000e\u001a\u00020\u00042\u0006\u0010\u000f\u001a\u00020\n2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0011H\u0000¢\u0006\u0002\b\u0012J\u0006\u0010\u0013\u001a\u00020\fJ\u0018\u0010\u0014\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\n2\u0006\u0010\u0016\u001a\u00020\nH\u0002J\u0010\u0010\u0017\u001a\u00020\n2\u0006\u0010\r\u001a\u00020\nH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\b\u001a\u000e\u0012\u0004\u0012\u00020\n\u0012\u0004\u0012\u00020\n0\tX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0018"}, d2 = {"Lokhttp3/internal/platform/android/AndroidLog;", "", "()V", "MAX_LOG_LENGTH", "", "configuredLoggers", "Ljava/util/concurrent/CopyOnWriteArraySet;", "Ljava/util/logging/Logger;", "knownLoggers", "", "", "androidLog", "", "loggerName", "logLevel", "message", "t", "", "androidLog$okhttp", "enable", "enableLogging", "logger", "tag", "loggerTag", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class AndroidLog {
    public static final okhttp3.internal.platform.android.AndroidLog INSTANCE = null;
    private static final int MAX_LOG_LENGTH = 4000;
    private static final java.util.concurrent.CopyOnWriteArraySet<java.util.logging.Logger> configuredLoggers = null;
    private static final java.util.Map<java.lang.String, java.lang.String> knownLoggers = null;

    static {
            okhttp3.internal.platform.android.AndroidLog r0 = new okhttp3.internal.platform.android.AndroidLog
            r0.<init>()
            okhttp3.internal.platform.android.AndroidLog.INSTANCE = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            okhttp3.internal.platform.android.AndroidLog.configuredLoggers = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.lang.Class<okhttp3.OkHttpClient> r1 = okhttp3.OkHttpClient.class
            java.lang.Package r1 = r1.getPackage()
            if (r1 != 0) goto L1d
            r1 = 0
            goto L21
        L1d:
            java.lang.String r1 = r1.getName()
        L21:
            if (r1 == 0) goto L2b
            r2 = r0
            java.util.Map r2 = (java.util.Map) r2
            java.lang.String r3 = "OkHttp"
            r2.put(r1, r3)
        L2b:
            java.util.Map r0 = (java.util.Map) r0
            java.lang.Class<okhttp3.OkHttpClient> r1 = okhttp3.OkHttpClient.class
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = "OkHttpClient::class.java.name"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.String r2 = "okhttp.OkHttpClient"
            r0.put(r1, r2)
            java.lang.Class<okhttp3.internal.http2.Http2> r1 = okhttp3.internal.http2.Http2.class
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = "Http2::class.java.name"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.String r2 = "okhttp.Http2"
            r0.put(r1, r2)
            java.lang.Class<okhttp3.internal.concurrent.TaskRunner> r1 = okhttp3.internal.concurrent.TaskRunner.class
            java.lang.String r1 = r1.getName()
            java.lang.String r2 = "TaskRunner::class.java.name"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.String r2 = "okhttp.TaskRunner"
            r0.put(r1, r2)
            java.lang.String r1 = "okhttp3.mockwebserver.MockWebServer"
            java.lang.String r2 = "okhttp.MockWebServer"
            r0.put(r1, r2)
            java.util.Map r0 = kotlin.collections.MapsKt.toMap(r0)
            okhttp3.internal.platform.android.AndroidLog.knownLoggers = r0
            return
    }

    private AndroidLog() {
            r0 = this;
            r0.<init>()
            return
    }

    private final void enableLogging(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.logging.Logger r2 = java.util.logging.Logger.getLogger(r2)
            java.util.concurrent.CopyOnWriteArraySet<java.util.logging.Logger> r0 = okhttp3.internal.platform.android.AndroidLog.configuredLoggers
            boolean r0 = r0.add(r2)
            if (r0 == 0) goto L30
            r0 = 0
            r2.setUseParentHandlers(r0)
            r0 = 3
            boolean r0 = android.util.Log.isLoggable(r3, r0)
            if (r0 == 0) goto L1a
            java.util.logging.Level r3 = java.util.logging.Level.FINE
            goto L26
        L1a:
            r0 = 4
            boolean r3 = android.util.Log.isLoggable(r3, r0)
            if (r3 == 0) goto L24
            java.util.logging.Level r3 = java.util.logging.Level.INFO
            goto L26
        L24:
            java.util.logging.Level r3 = java.util.logging.Level.WARNING
        L26:
            r2.setLevel(r3)
            okhttp3.internal.platform.android.AndroidLogHandler r3 = okhttp3.internal.platform.android.AndroidLogHandler.INSTANCE
            java.util.logging.Handler r3 = (java.util.logging.Handler) r3
            r2.addHandler(r3)
        L30:
            return
    }

    private final java.lang.String loggerTag(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = okhttp3.internal.platform.android.AndroidLog.knownLoggers
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 != 0) goto L10
            r0 = 23
            java.lang.String r0 = kotlin.text.StringsKt.take(r2, r0)
        L10:
            return r0
    }

    public final void androidLog$okhttp(java.lang.String r8, int r9, java.lang.String r10, java.lang.Throwable r11) {
            r7 = this;
            java.lang.String r0 = "loggerName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "message"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r8 = r7.loggerTag(r8)
            boolean r0 = android.util.Log.isLoggable(r8, r9)
            if (r0 == 0) goto L60
            if (r11 == 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            r10 = 10
            r0.append(r10)
            java.lang.String r10 = android.util.Log.getStackTraceString(r11)
            r0.append(r10)
            java.lang.String r10 = r0.toString()
        L2e:
            r11 = 0
            int r0 = r10.length()
        L33:
            if (r11 >= r0) goto L60
            r1 = r10
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r2 = 10
            r4 = 0
            r5 = 4
            r6 = 0
            r3 = r11
            int r1 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            r2 = -1
            if (r1 == r2) goto L46
            goto L47
        L46:
            r1 = r0
        L47:
            int r2 = r11 + 4000
            int r2 = java.lang.Math.min(r1, r2)
            java.lang.String r11 = r10.substring(r11, r2)
            java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r11, r3)
            android.util.Log.println(r9, r8, r11)
            if (r2 < r1) goto L5e
            int r11 = r2 + 1
            goto L33
        L5e:
            r11 = r2
            goto L47
        L60:
            return
    }

    public final void enable() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = okhttp3.internal.platform.android.AndroidLog.knownLoggers
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r3.enableLogging(r2, r1)
            goto La
        L26:
            return
    }
}
