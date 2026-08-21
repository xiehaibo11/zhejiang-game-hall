package com.kwad.components.ad.reward;

/* JADX INFO: loaded from: classes2.dex */
public final class p {
    public static void a(int i, int i2, j jVar, com.kwad.components.ad.reward.model.c cVar) {
        if (i == 0) {
            com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 1);
            return;
        }
        if (i == 1) {
            boolean zJH = jVar.pB.jH();
            if (i2 == 0) {
                if (zJH) {
                    com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 1);
                    return;
                }
                return;
            } else if (zJH) {
                com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 5);
                return;
            } else {
                com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 4);
                return;
            }
        }
        if (i != 2) {
            return;
        }
        boolean zJH2 = jVar.pA.jH();
        if (i2 == 0) {
            if (zJH2) {
                com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 1);
            }
        } else if (zJH2) {
            com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 3);
        } else {
            com.kwad.sdk.core.report.a.m(cVar.getAdTemplate(), 2);
        }
    }
}
