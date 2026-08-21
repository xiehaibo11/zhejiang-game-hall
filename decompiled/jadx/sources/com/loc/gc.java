package com.loc;

import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CharsetDecoder;

/* JADX INFO: compiled from: Table.java */
/* JADX INFO: loaded from: classes2.dex */
public class gc {
    private static final ThreadLocal<CharsetDecoder> b = new ThreadLocal<CharsetDecoder>() { // from class: com.loc.gc.1
        private static CharsetDecoder a() {
            return Charset.forName("UTF-8").newDecoder();
        }

        @Override // java.lang.ThreadLocal
        protected final /* synthetic */ CharsetDecoder initialValue() {
            return a();
        }
    };

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final ThreadLocal<Charset> f2996a = new ThreadLocal<Charset>() { // from class: com.loc.gc.2
        private static Charset a() {
            return Charset.forName("UTF-8");
        }

        @Override // java.lang.ThreadLocal
        protected final /* synthetic */ Charset initialValue() {
            return a();
        }
    };
    private static final ThreadLocal<CharBuffer> c = new ThreadLocal<>();
}
