package com.xiaomi.push;

import java.nio.ByteBuffer;

/* JADX INFO: loaded from: classes4.dex */
public final class fr extends fl {
    public fr() {
        a("PING", (String) null);
        a("0");
        a(0);
    }

    @Override // com.xiaomi.push.fl
    /* JADX INFO: renamed from: a */
    ByteBuffer mo345a(ByteBuffer byteBuffer) {
        return a().length == 0 ? byteBuffer : super.mo345a(byteBuffer);
    }

    @Override // com.xiaomi.push.fl
    public int c() {
        if (a().length == 0) {
            return 0;
        }
        return super.c();
    }
}
