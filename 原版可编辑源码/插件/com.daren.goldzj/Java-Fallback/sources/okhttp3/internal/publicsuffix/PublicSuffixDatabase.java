package okhttp3.internal.publicsuffix;

import java.io.IOException;
import java.io.InputStream;
import java.io.InterruptedIOException;
import java.net.IDN;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.atomic.AtomicBoolean;
import okhttp3.internal.Util;
import okhttp3.internal.platform.Platform;
import okio.BufferedSource;
import okio.GzipSource;
import okio.Okio;

public final class PublicSuffixDatabase {
    private static final String[] EMPTY_RULE = null;
    private static final byte EXCEPTION_MARKER = 33;
    private static final String[] PREVAILING_RULE = null;
    public static final String PUBLIC_SUFFIX_RESOURCE = "publicsuffixes.gz";
    private static final byte[] WILDCARD_LABEL = null;
    private static final PublicSuffixDatabase instance = null;
    private final AtomicBoolean listRead;
    private byte[] publicSuffixExceptionListBytes;
    private byte[] publicSuffixListBytes;
    private final CountDownLatch readCompleteLatch;

    public PublicSuffixDatabase() {
        this.listRead = new AtomicBoolean(false);
        this.readCompleteLatch = new CountDownLatch(1);
    }

    static {
        WILDCARD_LABEL = new byte[]{42};
        EMPTY_RULE = new String[0];
        PREVAILING_RULE = new String[]{"*"};
        instance = new PublicSuffixDatabase();
    }

    public static PublicSuffixDatabase get() {
        return instance;
    }

    public String getEffectiveTldPlusOne(String r8) {
        if (r8 == null) goto L20;
        String[] r0 = IDN.toUnicode(r8).split("\\.");
        String[] r2 = findMatchingRule(r0);
        if (r0.length != r2.length) goto L10;
        if (r2[0].charAt(0) == '!') goto L10;
        return null;
    L10:
        if (r2[0].charAt(0) != '!') goto L12;
        int r02 = r0.length;
        int r22 = r2.length;
    L13:
        int r03 = r02 - r22;
        StringBuilder r23 = new StringBuilder();
        String[] r82 = r8.split("\\.");
    L15:
        if (r03 >= r82.length) goto L17;
        r23.append(r82[r03]);
        r23.append('.');
        r03 = r03 + 1;
        goto L15
    L17:
        r23.deleteCharAt(r23.length() - 1);
        return r23.toString();
    L12:
        r02 = r0.length;
        r22 = r2.length + 1;
        goto L13
    L20:
        throw new NullPointerException("domain == null");
    }

    private String[] findMatchingRule(String[] r8) {
        int r1 = 0;
        if (this.listRead.get() == false) goto L5;
    L68:
        this.readCompleteLatch.await();     // Catch: InterruptedException -> L9
    L10:
        monitor-enter(this);
    L64:
        th = move-exception;
        throw th;
    L12:
        if (this.publicSuffixListBytes == null) goto L63;
        monitor-exit(this);     // Catch: Throwable -> L64
        byte[][] r0 = new byte[r8.length][];
        int r3 = 0;
    L16:
        if (r3 >= r8.length) goto L18;
        r0[r3] = r8[r3].getBytes(Util.UTF_8);
        r3 = r3 + 1;
        goto L16
    L18:
        int r82 = 0;
    L20:
        if (r82 >= r0.length) goto L25;
        String r32 = binarySearchBytes(this.publicSuffixListBytes, r0, r82);
        if (r32 != null) goto L27;
        r82 = r82 + 1;
    L27:
        if (r0.length <= 1) goto L35;
        byte[][] r83 = (byte[][]) r0.clone();
        int r5 = 0;
    L30:
        if (r5 >= (r83.length - 1)) goto L35;
        r83[r5] = WILDCARD_LABEL;
        String r6 = binarySearchBytes(this.publicSuffixListBytes, r83, r5);
        if (r6 != null) goto L36;
        r5 = r5 + 1;
    L36:
        if (r6 != null) goto L38;
    L43:
        String r84 = null;
    L44:
        if (r84 != null) goto L46;
        if (r32 != null) goto L51;
        if (r6 != null) goto L51;
        return PREVAILING_RULE;
    L51:
        if (r32 == null) goto L53;
        String[] r85 = r32.split("\\.");
    L54:
        if (r6 == null) goto L56;
        String[] r02 = r6.split("\\.");
    L58:
        if (r85.length <= r02.length) goto L61;
        return r85;
    L61:
        return r02;
    L56:
        r02 = EMPTY_RULE;
        goto L58
    L53:
        r85 = EMPTY_RULE;
        goto L54
    L46:
        return ("!" + r84).split("\\.");
    L38:
        if (r1 >= (r0.length - 1)) goto L43;
        r84 = binarySearchBytes(this.publicSuffixExceptionListBytes, r0, r1);
        if (r84 != null) goto L44;
        r1 = r1 + 1;
    L35:
        r6 = null;
        goto L36
    L25:
        r32 = null;
        goto L27
    L63:
        throw new IllegalStateException("Unable to load publicsuffixes.gz resource from the classpath.");     // Catch: Throwable -> L64
    L9:
        Thread.currentThread().interrupt();
        goto L10
    L5:
        if (this.listRead.compareAndSet(false, true) == false) goto L68;
        readTheListUninterruptibly();
        goto L10
    }

    private static String binarySearchBytes(byte[] r16, byte[][] r17, int r18) {
        int r4 = r16.length;
        int r2 = 0;
    L3:
        if (r2 >= r4) goto L42;
        int r5 = (r2 + r4) / 2;
    L6:
        if (r5 <= (-1)) goto L10;
        if (r16[r5] == 10) goto L10;
        r5 = r5 - 1;
    L10:
        int r52 = r5 + 1;
        int r9 = 1;
    L11:
        int r10 = r52 + r9;
        if (r16[r10] == 10) goto L14;
        r9 = r9 + 1;
        goto L11
    L14:
        int r6 = r10 - r52;
        int r11 = r18;
        boolean r92 = false;
        int r12 = 0;
        int r13 = 0;
    L15:
        if (r92 == false) goto L17;
        r92 = false;
        int r14 = 46;
    L18:
        int r142 = r14 - (r16[r52 + r13] & 255);
        if (r142 != 0) goto L28;
        r13 = r13 + 1;
        r12 = r12 + 1;
        if (r13 == r6) goto L28;
        if (r17[r11].length != r12) goto L15;
        if (r11 == (r17.length - 1)) goto L28;
        r11 = r11 + 1;
        r92 = true;
        r12 = -1;
    L28:
        if (r142 < 0) goto L29;
        if (r142 > 0) goto L31;
        int r7 = r6 - r13;
        int r8 = r17[r11].length - r12;
    L33:
        r11 = r11 + 1;
        if (r11 >= r17.length) goto L36;
        r8 = r8 + r17[r11].length;
        goto L33
    L36:
        if (r8 < r7) goto L29;
        if (r8 > r7) goto L31;
        return new String(r16, r52, r6, Util.UTF_8);
    L31:
        r2 = r10 + 1;
    L29:
        r4 = r52 - 1;
        goto L3
    L17:
        r14 = r17[r11][r12] & 255;
        goto L18
    L42:
        return null;
    }

    private void readTheListUninterruptibly() {
        boolean r0 = false;
    L19:
        readTheList();     // Catch: Throwable -> L7 IOException -> L9 InterruptedIOException -> L14
    L4:
        if (r0 == false) goto L23;
        Thread.currentThread().interrupt();
        return;
    L23:
        return;
    L7:
        th = move-exception;
        if (r0 == false) goto L18;
        Thread.currentThread().interrupt();
    L18:
        throw th;
    L14:
        Thread.interrupted();     // Catch: Throwable -> L7
        r0 = true;
    L9:
        e = move-exception;
        Platform.get().log(5, "Failed to read public suffix list", e);     // Catch: Throwable -> L7
        if (r0 == false) goto L24;
        Thread.currentThread().interrupt();
        return;
    }

    private void readTheList() throws IOException {
        InputStream r0 = PublicSuffixDatabase.class.getResourceAsStream("publicsuffixes.gz");
        if (r0 != null) goto L5;
        return;
    L5:
        BufferedSource r02 = Okio.buffer(new GzipSource(Okio.source(r0)));
        byte[] r1 = new byte[r02.readInt()];     // Catch: Throwable -> L16
        r02.readFully(r1);     // Catch: Throwable -> L16
        byte[] r2 = new byte[r02.readInt()];     // Catch: Throwable -> L16
        r02.readFully(r2);     // Catch: Throwable -> L16
        Util.closeQuietly(r02);
        monitor-enter(this);
        this.publicSuffixListBytes = r1;     // Catch: Throwable -> L13
        this.publicSuffixExceptionListBytes = r2;     // Catch: Throwable -> L13
        monitor-exit(this);     // Catch: Throwable -> L13
        this.readCompleteLatch.countDown();
        return;
    L13:
        th = move-exception;
        throw th;
    L16:
        th = move-exception;
        Util.closeQuietly(r02);
        throw th;
    }

    void setListBytes(byte[] r1, byte[] r2) {
        this.publicSuffixListBytes = r1;
        this.publicSuffixExceptionListBytes = r2;
        this.listRead.set(true);
        this.readCompleteLatch.countDown();
    }
}
