package com.ss.android.downloadlib.df;

public class df {
    public void rg(final com.ss.android.downloadad.api.rg.df dfVar, final fw fwVar, int i) {
        com.ss.android.downloadlib.pt.rg().rg(new Runnable() {
            @Override
            public void run() {
                if (rz.rg(dfVar)) {
                    fwVar.rg(false);
                } else if (!c.rg(dfVar)) {
                    fwVar.rg(false);
                } else {
                    c.rg(dfVar, new ux() {
                        @Override
                        public void rg(boolean z) {
                            fwVar.rg(z);
                        }
                    });
                }
            }
        }, i);
    }
}
