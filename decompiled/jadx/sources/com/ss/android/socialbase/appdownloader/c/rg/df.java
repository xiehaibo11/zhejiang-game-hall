package com.ss.android.socialbase.appdownloader.c.rg;

import java.io.IOException;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    public static final void rg(pt ptVar, int i) throws IOException {
        int iDf = ptVar.df();
        if (iDf == i) {
            return;
        }
        throw new IOException("Expected chunk of type 0x" + Integer.toHexString(i) + ", read 0x" + Integer.toHexString(iDf) + ".");
    }
}
