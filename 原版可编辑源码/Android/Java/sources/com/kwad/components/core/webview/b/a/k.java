package com.kwad.components.core.webview.b.a;

import com.kwad.sdk.utils.bj;
import org.json.JSONObject;

public final class k extends v {
    b WB = new b() {
        @Override
        public final void E(final long j) {
            if (k.this.nA != null) {
                bj.runOnUiThread(new Runnable() {
                    @Override
                    public final void run() {
                        a aVar = new a((byte) 0);
                        aVar.creativeId = j;
                        k.this.nA.a(aVar);
                    }
                });
            }
        }
    };
    private com.kwad.sdk.core.webview.c.c nA;

    static class a implements com.kwad.sdk.core.b {
        public long creativeId;

        private a() {
        }

        a(byte b) {
            this();
        }

        @Override
        public final void parseJson(JSONObject jSONObject) {
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "creativeId", this.creativeId);
            return jSONObject;
        }
    }

    public interface b {
        void E(long j);
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.nA = cVar;
        com.kwad.components.core.e.d.a.a(this.WB);
    }

    @Override
    public final String getKey() {
        return "registerAdConvertListener";
    }

    @Override
    public final void onDestroy() {
        com.kwad.components.core.e.d.a.b(this.WB);
    }
}
