package com.ss.android.downloadlib.df;

/* JADX INFO: loaded from: classes3.dex */
public class df {
    public void rg(final com.ss.android.downloadad.api.rg.df dfVar, final fw fwVar, int i) {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() { // from class: com.ss.android.downloadlib.df.df.1
            @Override // java.lang.Runnable
            public void run() {
                if (rz.rg(dfVar)) {
                    fwVar.rg(false);
                } else if (!c.rg(dfVar)) {
                    fwVar.rg(false);
                } else {
                    c.rg(dfVar, new ux() { // from class: com.ss.android.downloadlib.df.df.1.1
                        @Override // com.ss.android.downloadlib.df.ux
                        public void rg(boolean z) {
                            fwVar.rg(z);
                        }
                    });
                }
            }
        }, i);
    }
}
