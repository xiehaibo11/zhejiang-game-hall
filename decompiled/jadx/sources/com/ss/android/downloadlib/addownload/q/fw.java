package com.ss.android.downloadlib.addownload.q;

import android.content.Context;
import com.ss.android.downloadlib.addownload.hq;
import com.ss.android.downloadlib.ux;

/* JADX INFO: loaded from: classes3.dex */
public class fw implements pt {
    @Override // com.ss.android.downloadlib.addownload.q.pt
    public boolean rg(com.ss.android.downloadad.api.rg.df dfVar, int i, q qVar) {
        if (dfVar == null) {
            return false;
        }
        return hq.rg(dfVar, ux.rg((Context) null).df(dfVar.rg()), i, qVar);
    }
}
