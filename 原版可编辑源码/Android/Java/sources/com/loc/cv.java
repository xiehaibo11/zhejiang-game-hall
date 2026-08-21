package com.loc;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public abstract class cv {
    cx a;
    private ByteBuffer b;

    cv(int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(i);
        this.b = byteBufferAllocate;
        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
        this.a = new cx(this.b);
    }

    public final cv a() {
        this.a.a(this.b);
        return this;
    }
}
