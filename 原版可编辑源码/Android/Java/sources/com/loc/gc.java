package com.loc;

import java.nio.CharBuffer;
import java.nio.charset.Charset;
import java.nio.charset.CharsetDecoder;

public class gc {
    private static final ThreadLocal<CharsetDecoder> b = new ThreadLocal<CharsetDecoder>() {
        private static CharsetDecoder a() {
            return Charset.forName("UTF-8").newDecoder();
        }

        @Override
        protected final CharsetDecoder initialValue() {
            return a();
        }
    };
    public static final ThreadLocal<Charset> a = new ThreadLocal<Charset>() {
        private static Charset a() {
            return Charset.forName("UTF-8");
        }

        @Override
        protected final Charset initialValue() {
            return a();
        }
    };
    private static final ThreadLocal<CharBuffer> c = new ThreadLocal<>();
}
