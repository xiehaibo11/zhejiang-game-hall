package com.kwai.adclient.kscommerciallogger;

import com.kwai.adclient.kscommerciallogger.model.c;
import org.json.JSONObject;

public final class a {
    private com.kwai.adclient.kscommerciallogger.a.a aMQ;
    private com.kwai.adclient.kscommerciallogger.a.b aMR;
    private JSONObject aMS;
    private boolean aMT;
    private boolean isDebug;

    static final class a {
        private static a aMU;

        public static a KW() {
            if (aMU == null) {
                aMU = new a((byte) 0);
            }
            return aMU;
        }
    }

    private a() {
        this.isDebug = false;
        this.aMT = false;
    }

    a(byte b) {
        this();
    }

    public static a KW() {
        return a.KW();
    }

    private void d(c cVar) {
        com.kwai.adclient.kscommerciallogger.a.a aVar = this.aMQ;
        if (aVar != null) {
            String tag = cVar.getTag();
            String str = cVar.La() == null ? "" : cVar.La().value;
            if (cVar.Lb() != null) {
                String str2 = cVar.Lb().value;
            }
            if (cVar.Lc() != null) {
                cVar.Lc().getValue();
            }
            cVar.Lf();
            b.O(cVar.Ld());
            b.O(cVar.Le());
            aVar.S(tag, str);
        }
    }

    public final JSONObject KX() {
        return this.aMS;
    }

    public final boolean KY() {
        return this.aMT;
    }

    public final void a(com.kwai.adclient.kscommerciallogger.a.a aVar, com.kwai.adclient.kscommerciallogger.a.b bVar, JSONObject jSONObject, boolean z, boolean z2) {
        this.aMQ = aVar;
        this.aMR = bVar;
        this.aMS = null;
        this.isDebug = z;
        this.aMT = z2;
    }

    public final void c(c cVar) {
        if (cVar == null) {
            this.aMQ.T("KSCommercialLogger", "rl rtLog is null please check it");
            return;
        }
        d(cVar);
        com.kwai.adclient.kscommerciallogger.a.b bVar = this.aMR;
        if (bVar != null) {
            bVar.U(cVar.KZ(), cVar.toString());
        }
    }

    public final boolean isDebug() {
        return this.isDebug;
    }
}
