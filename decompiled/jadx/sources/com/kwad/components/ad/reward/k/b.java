package com.kwad.components.ad.reward.k;

import com.kwad.sdk.utils.t;
import java.util.Observable;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b extends Observable implements c, com.kwad.sdk.core.b {
    private boolean xS = false;
    protected String xT;
    protected String xU;

    private boolean jC() {
        return this.xS;
    }

    private void jD() {
        setChanged();
        notifyObservers(Boolean.valueOf(this.xS));
    }

    public boolean isCompleted() {
        return jC();
    }

    @Override // com.kwad.components.ad.reward.k.c
    public final String jA() {
        return this.xT;
    }

    @Override // com.kwad.components.ad.reward.k.c
    public final String jB() {
        return this.xU;
    }

    public final void jy() {
        if (this.xS) {
            return;
        }
        this.xS = true;
        jD();
    }

    public final void jz() {
        if (this.xS) {
            this.xS = false;
            jD();
        }
    }

    public void parseJson(JSONObject jSONObject) {
        try {
            this.xS = jSONObject.optBoolean("selfCompleted");
        } catch (Throwable unused) {
        }
    }

    public JSONObject toJson() {
        JSONObject jSONObject = new JSONObject();
        t.putValue(jSONObject, "selfCompleted", this.xS);
        return jSONObject;
    }
}
