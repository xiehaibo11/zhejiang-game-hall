package com.ss.android.socialbase.appdownloader.c.rg;

import java.io.IOException;
import java.io.InputStream;

class rg implements rz {
    private int b;
    private int bm;
    private pt df;
    private int f;
    private boolean fw;
    private int[] hq;
    private int oh;
    private int[] pp;
    private c pt;
    private int rz;
    private int ux;
    private int v;
    private boolean q = false;
    private rg c = new rg();

    @Override
    public int c() {
        return -1;
    }

    public rg() {
        fw();
    }

    public void rg(InputStream inputStream) {
        rg();
        if (inputStream != null) {
            this.df = new pt(inputStream, false);
        }
    }

    public void rg() {
        if (this.q) {
            this.q = false;
            this.df.rg();
            this.df = null;
            this.pt = null;
            this.pp = null;
            this.c.rg();
            fw();
        }
    }

    public int df() throws ux, IOException {
        if (this.df == null) {
            throw new ux("Parser is not opened.", this, (Throwable) null);
        }
        try {
            ux();
            return this.ux;
        } catch (IOException e) {
            rg();
            throw e;
        }
    }

    @Override
    public int q() {
        return this.rz;
    }

    @Override
    public String pt() {
        return "XML line #" + q();
    }

    public int pp() {
        if (this.ux != 2) {
            return -1;
        }
        return this.hq.length / 5;
    }

    public String rg(int i) {
        int i2 = this.hq[pp(i) + 1];
        return i2 == -1 ? "" : this.pt.rg(i2);
    }

    public int df(int i) {
        return this.hq[pp(i) + 3];
    }

    public int q(int i) {
        return this.hq[pp(i) + 4];
    }

    public String pt(int i) {
        int iPp = pp(i);
        int[] iArr = this.hq;
        if (iArr[iPp + 3] == 3) {
            return this.pt.rg(iArr[iPp + 2]);
        }
        int i2 = iArr[iPp + 4];
        return "";
    }

    private final int pp(int i) {
        if (this.ux != 2) {
            throw new IndexOutOfBoundsException("Current event is not START_TAG.");
        }
        int i2 = i * 5;
        if (i2 < this.hq.length) {
            return i2;
        }
        throw new IndexOutOfBoundsException("Invalid attribute index (" + i + ").");
    }

    private final void fw() {
        this.ux = -1;
        this.rz = -1;
        this.bm = -1;
        this.b = -1;
        this.hq = null;
        this.oh = -1;
        this.f = -1;
        this.v = -1;
    }

    /* JADX WARN: Code restructure failed: missing block: B:30:0x0093, code lost:
    
        throw new java.io.IOException("Invalid resource ids size (" + r2 + ").");
     */
    /* JADX WARN: Code restructure failed: missing block: B:62:0x018c, code lost:
    
        throw new java.io.IOException("Invalid chunk type (" + r5 + ").");
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private final void ux() throws IOException {
        if (this.pt == null) {
            df.rg(this.df, 524291);
            this.df.q();
            this.pt = c.rg(this.df);
            this.c.pp();
            this.q = true;
        }
        int i = this.ux;
        if (i == 1) {
            return;
        }
        fw();
        while (true) {
            if (this.fw) {
                this.fw = false;
                this.c.c();
            }
            int i2 = 3;
            if (i == 3 && this.c.pt() == 1 && this.c.df() == 0) {
                this.ux = 1;
                return;
            }
            int iDf = i == 0 ? 1048834 : this.df.df();
            if (iDf == 524672) {
                int iDf2 = this.df.df();
                if (iDf2 < 8 || iDf2 % 4 != 0) {
                    break;
                } else {
                    this.pp = this.df.df((iDf2 / 4) - 2);
                }
            } else {
                if (iDf < 1048832 || iDf > 1048836) {
                    break;
                }
                if (iDf == 1048834 && i == -1) {
                    this.ux = 0;
                    return;
                }
                this.df.q();
                int iDf3 = this.df.df();
                this.df.q();
                if (iDf != 1048832 && iDf != 1048833) {
                    this.rz = iDf3;
                    if (iDf == 1048834) {
                        this.b = this.df.df();
                        this.bm = this.df.df();
                        this.df.q();
                        int iDf4 = this.df.df();
                        this.oh = (iDf4 >>> 16) - 1;
                        int iDf5 = this.df.df();
                        this.f = iDf5;
                        this.v = (iDf5 >>> 16) - 1;
                        this.f = (65535 & iDf5) - 1;
                        this.hq = this.df.df((iDf4 & 65535) * 5);
                        while (true) {
                            int[] iArr = this.hq;
                            if (i2 < iArr.length) {
                                iArr[i2] = iArr[i2] >>> 24;
                                i2 += 5;
                            } else {
                                this.c.pp();
                                this.ux = 2;
                                return;
                            }
                        }
                    } else {
                        if (iDf == 1048835) {
                            this.b = this.df.df();
                            this.bm = this.df.df();
                            this.ux = 3;
                            this.fw = true;
                            return;
                        }
                        if (iDf == 1048836) {
                            this.bm = this.df.df();
                            this.df.q();
                            this.df.q();
                            this.ux = 4;
                            return;
                        }
                    }
                } else if (iDf == 1048832) {
                    this.c.rg(this.df.df(), this.df.df());
                } else {
                    this.df.q();
                    this.df.q();
                    this.c.q();
                }
            }
        }
    }

    private static final class rg {
        private int df;
        private int q;
        private int[] rg = new int[32];

        public final void rg() {
            this.df = 0;
            this.q = 0;
        }

        public final int df() {
            int i = this.df;
            if (i == 0) {
                return 0;
            }
            return this.rg[i - 1];
        }

        public final void rg(int i, int i2) {
            if (this.q == 0) {
                pp();
            }
            rg(2);
            int i3 = this.df;
            int i4 = i3 - 1;
            int[] iArr = this.rg;
            int i5 = iArr[i4];
            int i6 = (i4 - 1) - (i5 * 2);
            int i7 = i5 + 1;
            iArr[i6] = i7;
            iArr[i4] = i;
            iArr[i4 + 1] = i2;
            iArr[i4 + 2] = i7;
            this.df = i3 + 2;
        }

        public final boolean q() {
            int i;
            int[] iArr;
            int i2;
            int i3 = this.df;
            if (i3 == 0 || (i2 = (iArr = this.rg)[i3 - 1]) == 0) {
                return false;
            }
            int i4 = i2 - 1;
            int i5 = i - 2;
            iArr[i5] = i4;
            iArr[i5 - ((i4 * 2) + 1)] = i4;
            this.df = i3 - 2;
            return true;
        }

        public final int pt() {
            return this.q;
        }

        public final void pp() {
            rg(2);
            int i = this.df;
            int[] iArr = this.rg;
            iArr[i] = 0;
            iArr[i + 1] = 0;
            this.df = i + 2;
            this.q++;
        }

        public final void c() {
            int i = this.df;
            if (i != 0) {
                int i2 = i - 1;
                int i3 = this.rg[i2] * 2;
                if ((i2 - 1) - i3 != 0) {
                    this.df = i - (i3 + 2);
                    this.q--;
                }
            }
        }

        private void rg(int i) {
            int[] iArr = this.rg;
            int length = iArr.length;
            int i2 = this.df;
            int i3 = length - i2;
            if (i3 <= i) {
                int[] iArr2 = new int[(iArr.length + i3) * 2];
                System.arraycopy(iArr, 0, iArr2, 0, i2);
                this.rg = iArr2;
            }
        }
    }
}
