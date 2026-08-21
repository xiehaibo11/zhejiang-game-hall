package com.kwad.sdk.pngencrypt;

import java.util.zip.DataFormatException;
import java.util.zip.Inflater;

public class DeflatedChunksSet {
    protected final boolean aDJ;
    protected byte[] aDZ;
    private int aEa;
    private int aEb;
    private int aEc;
    State aEd;
    private final boolean aEe;
    private d aEf;
    private long aEg = 0;
    private long aEh = 0;
    int aEi = -1;
    int aEj = -1;
    public final String aEk;
    private Inflater inf;

    enum State {
        WAITING_FOR_INPUT,
        ROW_READY,
        DONE,
        CLOSED;

        public final boolean isClosed() {
            return this == CLOSED;
        }

        public final boolean isDone() {
            return this == DONE || this == CLOSED;
        }
    }

    public DeflatedChunksSet(String str, boolean z, int i, int i2, Inflater inflater, byte[] bArr) {
        boolean z2;
        this.aEd = State.WAITING_FOR_INPUT;
        this.aEk = str;
        this.aDJ = z;
        this.aEb = i;
        if (i <= 0 || i2 < i) {
            throw new PngjException("bad inital row len " + i);
        }
        if (inflater != null) {
            this.inf = inflater;
            z2 = false;
        } else {
            this.inf = new Inflater();
            z2 = true;
        }
        this.aEe = z2;
        this.aDZ = (bArr == null || bArr.length < i) ? new byte[i2] : bArr;
        this.aEc = -1;
        this.aEd = State.WAITING_FOR_INPUT;
        try {
            cH(i);
        } catch (RuntimeException e) {
            close();
            throw e;
        }
    }

    private boolean Gz() {
        State state;
        int iInflate;
        try {
            if (this.aEd == State.ROW_READY) {
                com.kwad.sdk.core.e.c.printStackTrace(new PngjException("invalid state"));
            }
            if (this.aEd.isDone()) {
                return false;
            }
            if (this.aDZ == null || this.aDZ.length < this.aEb) {
                this.aDZ = new byte[this.aEb];
            }
            if (this.aEa < this.aEb && !this.inf.finished()) {
                try {
                    iInflate = this.inf.inflate(this.aDZ, this.aEa, this.aEb - this.aEa);
                } catch (DataFormatException e) {
                    com.kwad.sdk.core.e.c.printStackTrace(new PngjException("error decompressing zlib stream ", e));
                    iInflate = 0;
                }
                this.aEa += iInflate;
                this.aEh += (long) iInflate;
            }
            if (this.aEa != this.aEb) {
                state = !this.inf.finished() ? State.WAITING_FOR_INPUT : this.aEa > 0 ? State.ROW_READY : State.DONE;
            }
            this.aEd = state;
            if (state != State.ROW_READY) {
                return false;
            }
            GA();
            return true;
        } catch (RuntimeException e2) {
            close();
            throw e2;
        }
    }

    protected void GA() {
    }

    protected int GB() {
        throw new PngjException("not implemented");
    }

    public final void GC() {
        if (isDone()) {
            return;
        }
        this.aEd = State.DONE;
    }

    public final int GD() {
        return this.aEc;
    }

    protected final void a(d dVar) {
        if (!this.aEk.equals(dVar.Gm().adE)) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("Bad chunk inside IdatSet, id:" + dVar.Gm().adE + ", expected:" + this.aEk));
        }
        this.aEf = dVar;
        int i = this.aEi + 1;
        this.aEi = i;
        int i2 = this.aEj;
        if (i2 >= 0) {
            dVar.cG(i + i2);
        }
    }

    protected final void c(byte[] bArr, int i, int i2) {
        this.aEg += (long) i2;
        if (i2 <= 0 || this.aEd.isDone()) {
            return;
        }
        if (this.aEd == State.ROW_READY) {
            com.kwad.sdk.core.e.c.printStackTrace(new PngjException("this should only be called if waitingForMoreInput"));
        }
        if (this.inf.needsDictionary() || !this.inf.needsInput()) {
            throw new RuntimeException("should not happen");
        }
        this.inf.setInput(bArr, i, i2);
        if (!this.aDJ) {
            Gz();
            return;
        }
        while (Gz()) {
            cH(GB());
            isDone();
        }
    }

    public final void cH(int i) {
        this.aEa = 0;
        this.aEc++;
        if (i <= 0 || this.inf.finished()) {
            this.aEb = 0;
            GC();
            return;
        }
        this.aEd = State.WAITING_FOR_INPUT;
        this.aEb = i;
        if (this.aDJ) {
            return;
        }
        Gz();
    }

    public void close() {
        try {
            if (!this.aEd.isClosed()) {
                this.aEd = State.CLOSED;
            }
            if (!this.aEe || this.inf == null) {
                return;
            }
            this.inf.end();
            this.inf = null;
        } catch (Exception unused) {
        }
    }

    public final boolean ff(String str) {
        if (this.aEd.isClosed()) {
            return false;
        }
        if (str.equals(this.aEk)) {
            return true;
        }
        if (this.aEd.isDone()) {
            if (!this.aEd.isClosed()) {
                close();
            }
            return false;
        }
        throw new PngjException("Unexpected chunk " + str + " while " + this.aEk + " set is not done");
    }

    public final boolean isClosed() {
        return this.aEd.isClosed();
    }

    public final boolean isDone() {
        return this.aEd.isDone();
    }

    public String toString() {
        return new StringBuilder("idatSet : " + this.aEf.Gm().adE + " state=" + this.aEd + " rows=" + this.aEc + " bytes=" + this.aEg + "/" + this.aEh).toString();
    }
}
