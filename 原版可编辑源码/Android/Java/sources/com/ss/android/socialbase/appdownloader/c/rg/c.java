package com.ss.android.socialbase.appdownloader.c.rg;

import java.io.IOException;

public class c {
    private int[] df;
    private int[] rg;

    public static c rg(pt ptVar) throws IOException {
        df.rg(ptVar, 1835009);
        int iDf = ptVar.df();
        int iDf2 = ptVar.df();
        int iDf3 = ptVar.df();
        ptVar.df();
        int iDf4 = ptVar.df();
        int iDf5 = ptVar.df();
        c cVar = new c();
        cVar.rg = ptVar.df(iDf2);
        if (iDf3 != 0) {
            ptVar.df(iDf3);
        }
        int i = (iDf5 == 0 ? iDf : iDf5) - iDf4;
        if (i % 4 != 0) {
            throw new IOException("String data size is not multiple of 4 (" + i + ").");
        }
        cVar.df = ptVar.df(i / 4);
        if (iDf5 != 0) {
            int i2 = iDf - iDf5;
            if (i2 % 4 != 0) {
                throw new IOException("Style data size is not multiple of 4 (" + i2 + ").");
            }
            ptVar.df(i2 / 4);
        }
        return cVar;
    }

    public String rg(int i) {
        int[] iArr;
        if (i < 0 || (iArr = this.rg) == null || i >= iArr.length) {
            return null;
        }
        int i2 = iArr[i];
        int iRg = rg(this.df, i2);
        StringBuilder sb = new StringBuilder(iRg);
        while (iRg != 0) {
            i2 += 2;
            sb.append((char) rg(this.df, i2));
            iRg--;
        }
        return sb.toString();
    }

    private c() {
    }

    private static final int rg(int[] iArr, int i) {
        int i2 = iArr[i / 4];
        return (i % 4) / 2 == 0 ? i2 & 65535 : i2 >>> 16;
    }
}
