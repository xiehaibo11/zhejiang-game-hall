package com.tkay.expressad.exoplayer.g.a;

import com.tkay.expressad.exoplayer.g.e;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.s;
import java.nio.ByteBuffer;
import java.util.Arrays;

public final class b implements com.tkay.expressad.exoplayer.g.b {
    @Override
    public final com.tkay.expressad.exoplayer.g.a a(e eVar) {
        ByteBuffer byteBuffer = eVar.e;
        byte[] bArrArray = byteBuffer.array();
        int iLimit = byteBuffer.limit();
        s sVar = new s(bArrArray, iLimit);
        String strP = sVar.p();
        String strP2 = sVar.p();
        long jH = sVar.h();
        return new com.tkay.expressad.exoplayer.g.a(new a(strP, strP2, af.a(sVar.h(), 1000L, jH), sVar.h(), Arrays.copyOfRange(bArrArray, sVar.c(), iLimit), af.a(sVar.h(), 1000000L, jH)));
    }
}
