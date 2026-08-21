package com.xiaomi.push;

import java.nio.ByteBuffer;

public final class fr extends fl {
    public fr() {
        a("PING", (String) null);
        a("0");
        a(0);
    }

    @Override
    ByteBuffer a(ByteBuffer byteBuffer) {
        return a().length == 0 ? byteBuffer : super.a(byteBuffer);
    }

    @Override
    public int c() {
        if (a().length == 0) {
            return 0;
        }
        return super.c();
    }
}
