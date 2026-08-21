package okio;

@kotlin.Metadata(d1 = {"\u0000\u0088\u0001\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\n\u0010\b\u001a\u00020\t*\u00020\n\u001a\n\u0010\u000b\u001a\u00020\f*\u00020\r\u001a\u0012\u0010\u000e\u001a\u00020\u000f*\u00020\t2\u0006\u0010\u0010\u001a\u00020\u0011\u001a\u0012\u0010\u0012\u001a\u00020\u0013*\u00020\u00142\u0006\u0010\u0010\u001a\u00020\u0011\u001a\u0012\u0010\u0015\u001a\u00020\u0016*\u00020\t2\u0006\u0010\u0017\u001a\u00020\u0018\u001a\u0012\u0010\u0015\u001a\u00020\u0016*\u00020\t2\u0006\u0010\u0019\u001a\u00020\u001a\u001a\u0012\u0010\u001b\u001a\u00020\u001c*\u00020\u00142\u0006\u0010\u0017\u001a\u00020\u0018\u001a\u0012\u0010\u001b\u001a\u00020\u001c*\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u001a\u001a\u0012\u0010\u001d\u001a\u00020\f*\u00020\f2\u0006\u0010\u001e\u001a\u00020\u001f\u001a\u0016\u0010 \u001a\u00020\t*\u00020\n2\b\b\u0002\u0010!\u001a\u00020\u0004H\u0007\u001a\n\u0010 \u001a\u00020\t*\u00020\"\u001a\n\u0010 \u001a\u00020\t*\u00020#\u001a%\u0010 \u001a\u00020\t*\u00020$2\u0012\u0010%\u001a\n\u0012\u0006\b\u0001\u0012\u00020'0&\"\u00020'H\u0007¢\u0006\u0002\u0010(\u001a\n\u0010)\u001a\u00020\u0014*\u00020\n\u001a\n\u0010)\u001a\u00020\u0014*\u00020*\u001a\n\u0010)\u001a\u00020\u0014*\u00020#\u001a%\u0010)\u001a\u00020\u0014*\u00020$2\u0012\u0010%\u001a\n\u0012\u0006\b\u0001\u0012\u00020'0&\"\u00020'H\u0007¢\u0006\u0002\u0010+\"\u0016\u0010\u0000\u001a\n \u0002*\u0004\u0018\u00010\u00010\u0001X\u0082\u0004¢\u0006\u0002\n\u0000\"\u001c\u0010\u0003\u001a\u00020\u0004*\u00060\u0005j\u0002`\u00068@X\u0080\u0004¢\u0006\u0006\u001a\u0004\b\u0003\u0010\u0007¨\u0006,"}, d2 = {"logger", "Ljava/util/logging/Logger;", "kotlin.jvm.PlatformType", "isAndroidGetsocknameError", "", "Ljava/lang/AssertionError;", "Lkotlin/AssertionError;", "(Ljava/lang/AssertionError;)Z", "appendingSink", "Lokio/Sink;", "Ljava/io/File;", "asResourceFileSystem", "Lokio/FileSystem;", "Ljava/lang/ClassLoader;", "cipherSink", "Lokio/CipherSink;", "cipher", "Ljavax/crypto/Cipher;", "cipherSource", "Lokio/CipherSource;", "Lokio/Source;", "hashingSink", "Lokio/HashingSink;", "digest", "Ljava/security/MessageDigest;", "mac", "Ljavax/crypto/Mac;", "hashingSource", "Lokio/HashingSource;", "openZip", "zipPath", "Lokio/Path;", "sink", "append", "Ljava/io/OutputStream;", "Ljava/net/Socket;", "Ljava/nio/file/Path;", "options", "", "Ljava/nio/file/OpenOption;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Lokio/Sink;", "source", "Ljava/io/InputStream;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Lokio/Source;", "okio"}, k = 5, mv = {1, 5, 1}, xi = 48, xs = "okio/Okio")
final class Okio__JvmOkioKt {
    private static final java.util.logging.Logger logger = null;

    static {
            java.lang.String r0 = "okio.Okio"
            java.util.logging.Logger r0 = java.util.logging.Logger.getLogger(r0)
            okio.Okio__JvmOkioKt.logger = r0
            return
    }

    public static final java.util.logging.Logger access$getLogger$p() {
            java.util.logging.Logger r0 = okio.Okio__JvmOkioKt.logger
            return r0
    }

    public static final okio.Sink appendingSink(java.io.File r2) throws java.io.FileNotFoundException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r1 = 1
            r0.<init>(r2, r1)
            java.io.OutputStream r0 = (java.io.OutputStream) r0
            okio.Sink r2 = okio.Okio.sink(r0)
            return r2
    }

    public static final okio.FileSystem asResourceFileSystem(java.lang.ClassLoader r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.internal.ResourceFileSystem r0 = new okio.internal.ResourceFileSystem
            r1 = 1
            r0.<init>(r2, r1)
            okio.FileSystem r0 = (okio.FileSystem) r0
            return r0
    }

    public static final okio.CipherSink cipherSink(okio.Sink r1, javax.crypto.Cipher r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "cipher"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.CipherSink r0 = new okio.CipherSink
            okio.BufferedSink r1 = okio.Okio.buffer(r1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final okio.CipherSource cipherSource(okio.Source r1, javax.crypto.Cipher r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "cipher"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.CipherSource r0 = new okio.CipherSource
            okio.BufferedSource r1 = okio.Okio.buffer(r1)
            r0.<init>(r1, r2)
            return r0
    }

    public static final okio.HashingSink hashingSink(okio.Sink r1, java.security.MessageDigest r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "digest"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.HashingSink r0 = new okio.HashingSink
            r0.<init>(r1, r2)
            return r0
    }

    public static final okio.HashingSink hashingSink(okio.Sink r1, javax.crypto.Mac r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "mac"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.HashingSink r0 = new okio.HashingSink
            r0.<init>(r1, r2)
            return r0
    }

    public static final okio.HashingSource hashingSource(okio.Source r1, java.security.MessageDigest r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "digest"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.HashingSource r0 = new okio.HashingSource
            r0.<init>(r1, r2)
            return r0
    }

    public static final okio.HashingSource hashingSource(okio.Source r1, javax.crypto.Mac r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "mac"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.HashingSource r0 = new okio.HashingSource
            r0.<init>(r1, r2)
            return r0
    }

    public static final boolean isAndroidGetsocknameError(java.lang.AssertionError r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.Throwable r0 = r4.getCause()
            r1 = 0
            if (r0 == 0) goto L23
            java.lang.String r4 = r4.getMessage()
            if (r4 != 0) goto L14
            r4 = r1
            goto L20
        L14:
            java.lang.CharSequence r4 = (java.lang.CharSequence) r4
            java.lang.String r0 = "getsockname failed"
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r2 = 2
            r3 = 0
            boolean r4 = kotlin.text.StringsKt.contains$default(r4, r0, r1, r2, r3)
        L20:
            if (r4 == 0) goto L23
            r1 = 1
        L23:
            return r1
    }

    public static final okio.FileSystem openZip(okio.FileSystem r2, okio.Path r3) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "zipPath"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            r1 = 4
            okio.ZipFileSystem r2 = okio.internal.ZipKt.openZip$default(r3, r2, r0, r1, r0)
            okio.FileSystem r2 = (okio.FileSystem) r2
            return r2
    }

    public static final okio.Sink sink(java.io.File r3) throws java.io.FileNotFoundException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            r1 = 1
            r2 = 0
            okio.Sink r3 = okio.Okio.sink$default(r3, r0, r1, r2)
            return r3
    }

    public static final okio.Sink sink(java.io.File r1, boolean r2) throws java.io.FileNotFoundException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1, r2)
            java.io.OutputStream r0 = (java.io.OutputStream) r0
            okio.Sink r1 = okio.Okio.sink(r0)
            return r1
    }

    public static final okio.Sink sink(java.io.OutputStream r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.OutputStreamSink r0 = new okio.OutputStreamSink
            okio.Timeout r1 = new okio.Timeout
            r1.<init>()
            r0.<init>(r2, r1)
            okio.Sink r0 = (okio.Sink) r0
            return r0
    }

    public static final okio.Sink sink(java.net.Socket r3) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.SocketAsyncTimeout r0 = new okio.SocketAsyncTimeout
            r0.<init>(r3)
            okio.OutputStreamSink r1 = new okio.OutputStreamSink
            java.io.OutputStream r3 = r3.getOutputStream()
            java.lang.String r2 = "getOutputStream()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r2)
            r2 = r0
            okio.Timeout r2 = (okio.Timeout) r2
            r1.<init>(r3, r2)
            okio.Sink r1 = (okio.Sink) r1
            okio.Sink r3 = r0.sink(r1)
            return r3
    }

    public static final okio.Sink sink(java.nio.file.Path r1, java.nio.file.OpenOption... r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.OutputStream r1 = java.nio.file.Files.newOutputStream(r1, r2)
            java.lang.String r2 = "newOutputStream(this, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            okio.Sink r1 = okio.Okio.sink(r1)
            return r1
    }

    public static okio.Sink sink$default(java.io.File r0, boolean r1, int r2, java.lang.Object r3) throws java.io.FileNotFoundException {
            r2 = r2 & 1
            if (r2 == 0) goto L5
            r1 = 0
        L5:
            okio.Sink r0 = okio.Okio.sink(r0, r1)
            return r0
    }

    public static final okio.Source source(java.io.File r2) throws java.io.FileNotFoundException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.InputStreamSource r0 = new okio.InputStreamSource
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            okio.Timeout r2 = okio.Timeout.NONE
            r0.<init>(r1, r2)
            okio.Source r0 = (okio.Source) r0
            return r0
    }

    public static final okio.Source source(java.io.InputStream r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.InputStreamSource r0 = new okio.InputStreamSource
            okio.Timeout r1 = new okio.Timeout
            r1.<init>()
            r0.<init>(r2, r1)
            okio.Source r0 = (okio.Source) r0
            return r0
    }

    public static final okio.Source source(java.net.Socket r3) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.SocketAsyncTimeout r0 = new okio.SocketAsyncTimeout
            r0.<init>(r3)
            okio.InputStreamSource r1 = new okio.InputStreamSource
            java.io.InputStream r3 = r3.getInputStream()
            java.lang.String r2 = "getInputStream()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r2)
            r2 = r0
            okio.Timeout r2 = (okio.Timeout) r2
            r1.<init>(r3, r2)
            okio.Source r1 = (okio.Source) r1
            okio.Source r3 = r0.source(r1)
            return r3
    }

    public static final okio.Source source(java.nio.file.Path r1, java.nio.file.OpenOption... r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.InputStream r1 = java.nio.file.Files.newInputStream(r1, r2)
            java.lang.String r2 = "newInputStream(this, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            okio.Source r1 = okio.Okio.source(r1)
            return r1
    }
}
