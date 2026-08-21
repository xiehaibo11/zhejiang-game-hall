package com.kwad.sdk.pngencrypt;

import com.kwad.sdk.pngencrypt.chunk.w;
import java.io.Closeable;
import java.io.InputStream;

public final class o implements Closeable {
    protected ErrorBehaviour aDC = ErrorBehaviour.STRICT;
    public final k aEC;
    public final boolean aEY;
    protected final c aEZ;
    protected final a aFa;
    protected final w aFb;
    protected int aFc;
    private i<? extends Object> aFd;

    public o(InputStream inputStream, boolean z) {
        this.aFc = -1;
        a aVar = new a(inputStream);
        this.aFa = aVar;
        boolean z2 = true;
        aVar.bt(true);
        c cVarGW = GW();
        this.aEZ = cVarGW;
        try {
            if (this.aFa.b(cVarGW, 36) != 36) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Could not read first 36 bytes (PNG signature+IHDR chunk)"));
            }
            this.aEC = this.aEZ.Gw();
            if (this.aEZ.Gx() == null) {
                z2 = false;
            }
            this.aEY = z2;
            aq(5024024L);
            ao(901001001L);
            ap(2024024L);
            this.aFb = new w(this.aEZ.aDI);
            a(m.GP());
            this.aFc = -1;
        } catch (RuntimeException e) {
            this.aFa.close();
            this.aEZ.close();
            throw e;
        }
    }

    private void GS() {
        while (this.aEZ.aDH < 4) {
            if (this.aFa.a(this.aEZ) <= 0) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Premature ending reading first chunks"));
            }
        }
    }

    private void GV() {
        this.aEZ.bv(false);
    }

    private static c GW() {
        return new c(false);
    }

    private void a(i<? extends Object> iVar) {
        this.aFd = iVar;
    }

    private void ao(long j) {
        this.aEZ.ao(901001001L);
    }

    private void ap(long j) {
        this.aEZ.ap(2024024L);
    }

    private void aq(long j) {
        this.aEZ.aq(5024024L);
    }

    public final w GT() {
        if (this.aEZ.Gu()) {
            GS();
        }
        return this.aFb;
    }

    public final void GU() {
        GV();
        if (this.aEZ.Gu()) {
            GS();
        }
        end();
    }

    @Override
    public final void close() {
        com.kwad.sdk.crash.utils.b.closeQuietly(this.aEZ);
        com.kwad.sdk.crash.utils.b.closeQuietly(this.aFa);
    }

    public final void end() {
        try {
            if (this.aEZ.Gu()) {
                GS();
            }
            if (this.aEZ.Gv() != null && !this.aEZ.Gv().isDone()) {
                this.aEZ.Gv().GC();
            }
            while (!this.aEZ.isDone() && this.aFa.a(this.aEZ) > 0) {
            }
        } finally {
            close();
        }
    }

    public final String toString() {
        return this.aEC.toString() + " interlaced=" + this.aEY;
    }
}
