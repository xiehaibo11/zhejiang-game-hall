package com.czhj.wire.okio;

import java.io.IOException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import org.apache.commons.codec1.digest.MessageDigestAlgorithms;

/* JADX INFO: loaded from: classes.dex */
public final class HashingSource extends ForwardingSource {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final MessageDigest f1892a;

    private HashingSource(Source source, String str) {
        super(source);
        try {
            this.f1892a = MessageDigest.getInstance(str);
        } catch (NoSuchAlgorithmException unused) {
            throw new AssertionError();
        }
    }

    public static HashingSource md5(Source source) {
        return new HashingSource(source, "MD5");
    }

    public static HashingSource sha1(Source source) {
        return new HashingSource(source, MessageDigestAlgorithms.SHA_1);
    }

    public static HashingSource sha256(Source source) {
        return new HashingSource(source, MessageDigestAlgorithms.SHA_256);
    }

    public ByteString hash() {
        return ByteString.of(this.f1892a.digest());
    }

    @Override // com.czhj.wire.okio.ForwardingSource, com.czhj.wire.okio.Source
    public long read(Buffer buffer, long j) throws IOException {
        long j2 = super.read(buffer, j);
        if (j2 != -1) {
            long j3 = buffer.c - j2;
            long j4 = buffer.c;
            Segment segment = buffer.b;
            while (j4 > buffer.c - j2) {
                segment = segment.i;
                j4 -= (long) (segment.e - segment.d);
            }
            while (j4 < buffer.c) {
                int i = (int) ((((long) segment.d) + j3) - j4);
                this.f1892a.update(segment.c, i, segment.e - i);
                j4 += (long) (segment.e - segment.d);
                j3 = j4;
            }
        }
        return j2;
    }
}
