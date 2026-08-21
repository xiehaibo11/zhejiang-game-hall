package com.kwad.sdk.pngencrypt.chunk;

import com.kwad.sdk.pngencrypt.PngjException;

public final class o extends p {
    private byte aFY;

    public o(com.kwad.sdk.pngencrypt.k kVar) {
        super("sTER", kVar);
    }

    @Override
    public final void a(d dVar) {
        if (dVar.len == 1) {
            this.aFY = dVar.data[0];
        } else {
            throw new PngjException("bad chunk length " + dVar);
        }
    }
}
