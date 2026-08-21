package org.cocos2dx.okio;

import java.io.IOException;
import java.security.InvalidKeyException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import javax.crypto.Mac;
import javax.crypto.spec.SecretKeySpec;

public final class HashingSource extends ForwardingSource {
    private final Mac mac;
    private final MessageDigest messageDigest;

    public static HashingSource md5(Source r2) {
        return new HashingSource(r2, "MD5");
    }

    public static HashingSource sha1(Source r2) {
        return new HashingSource(r2, "SHA-1");
    }

    public static HashingSource sha256(Source r2) {
        return new HashingSource(r2, "SHA-256");
    }

    public static HashingSource hmacSha1(Source r2, ByteString r3) {
        return new HashingSource(r2, r3, "HmacSHA1");
    }

    public static HashingSource hmacSha256(Source r2, ByteString r3) {
        return new HashingSource(r2, r3, "HmacSHA256");
    }

    private HashingSource(Source r1, String r2) {
        super(r1);
        this.messageDigest = MessageDigest.getInstance(r2);     // Catch: NoSuchAlgorithmException -> L5
        this.mac = null;     // Catch: NoSuchAlgorithmException -> L5
        return;
    L6:
        throw new AssertionError();
    }

    private HashingSource(Source r2, ByteString r3, String r4) {
        super(r2);
        this.mac = Mac.getInstance(r4);     // Catch: InvalidKeyException -> L5 NoSuchAlgorithmException -> L8
        this.mac.init(new SecretKeySpec(r3.toByteArray(), r4));     // Catch: InvalidKeyException -> L5 NoSuchAlgorithmException -> L8
        this.messageDigest = null;     // Catch: InvalidKeyException -> L5 NoSuchAlgorithmException -> L8
        return;
    L5:
        e = move-exception;
        throw new IllegalArgumentException(e);
    L9:
        throw new AssertionError();
    }

    @Override
    public long read(Buffer r9, long r10) throws IOException {
        long r102 = super.read(r9, r10);
        if (r102 == (-1)) goto L15;
        long r0 = r9.size - r102;
        long r2 = r9.size;
        Segment r4 = r9.head;
    L6:
        if (r2 <= r0) goto L9;
        r4 = r4.prev;
        r2 = r2 - ((long) (r4.limit - r4.pos));
    L9:
        if (r2 >= r9.size) goto L15;
        int r02 = (int) ((((long) r4.pos) + r0) - r2);
        MessageDigest r1 = this.messageDigest;
        if (r1 == null) goto L13;
        r1.update(r4.data, r02, r4.limit - r02);
    L14:
        r0 = ((long) (r4.limit - r4.pos)) + r2;
        r4 = r4.next;
        r2 = r0;
        goto L9
    L13:
        this.mac.update(r4.data, r02, r4.limit - r02);
    L15:
        return r102;
    }

    public final ByteString hash() {
        MessageDigest r0 = this.messageDigest;
        if (r0 == null) goto L5;
        byte[] r02 = r0.digest();
    L7:
        return ByteString.of(r02);
    L5:
        r02 = this.mac.doFinal();
        goto L7
    }
}
