package com.loc;

import java.nio.ByteBuffer;

public final class cx extends gb {
    cx(ByteBuffer byteBuffer) {
        super(byteBuffer);
    }

    @Override
    public final int a(CharSequence charSequence) {
        try {
            return super.a(charSequence);
        } catch (Throwable th) {
            ej.a(th);
            return super.a("");
        }
    }
}
