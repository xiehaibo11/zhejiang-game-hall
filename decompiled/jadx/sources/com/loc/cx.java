package com.loc;

import java.nio.ByteBuffer;

/* JADX INFO: compiled from: RobustFlatBufferBuilder.java */
/* JADX INFO: loaded from: classes2.dex */
public final class cx extends gb {
    cx(ByteBuffer byteBuffer) {
        super(byteBuffer);
    }

    @Override // com.loc.gb
    public final int a(CharSequence charSequence) {
        try {
            return super.a(charSequence);
        } catch (Throwable th) {
            ej.a(th);
            return super.a("");
        }
    }
}
