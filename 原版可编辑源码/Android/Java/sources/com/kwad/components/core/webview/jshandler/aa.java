package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import android.view.ViewGroup;
import android.webkit.WebView;
import org.json.JSONException;
import org.json.JSONObject;

public final class aa implements com.kwad.sdk.core.webview.c.a {
    private final WebView Ms;
    private Handler TT;
    private com.kwad.sdk.core.webview.c.c TU;
    private boolean UK;
    private b cI;

    public static final class a implements com.kwad.sdk.core.b {
        public int bottomMargin;
        public int height;
        public int leftMargin;
        public int rightMargin;

        @Override
        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null) {
                return;
            }
            this.height = jSONObject.optInt("height");
            this.leftMargin = jSONObject.optInt("leftMargin");
            this.rightMargin = jSONObject.optInt("rightMargin");
            this.bottomMargin = jSONObject.optInt("bottomMargin");
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            com.kwad.sdk.utils.t.putValue(jSONObject, "height", this.height);
            com.kwad.sdk.utils.t.putValue(jSONObject, "leftMargin", this.leftMargin);
            com.kwad.sdk.utils.t.putValue(jSONObject, "rightMargin", this.rightMargin);
            com.kwad.sdk.utils.t.putValue(jSONObject, "bottomMargin", this.bottomMargin);
            return jSONObject;
        }
    }

    public interface b {
        void a(a aVar);
    }

    public aa(com.kwad.sdk.core.webview.b bVar, b bVar2) {
        this(bVar, bVar2, true);
    }

    private aa(com.kwad.sdk.core.webview.b bVar, b bVar2, boolean z) {
        this.UK = true;
        this.TT = new Handler(Looper.getMainLooper());
        this.Ms = bVar.Ms;
        this.cI = bVar2;
        this.UK = true;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.TU = cVar;
        try {
            JSONObject jSONObject = new JSONObject(str);
            final a aVar = new a();
            aVar.parseJson(jSONObject);
            this.TT.post(new Runnable() {
                @Override
                public final void run() {
                    if (aa.this.Ms != null && aa.this.UK) {
                        ViewGroup.MarginLayoutParams marginLayoutParams = (ViewGroup.MarginLayoutParams) aa.this.Ms.getLayoutParams();
                        marginLayoutParams.width = -1;
                        marginLayoutParams.height = aVar.height;
                        marginLayoutParams.leftMargin = aVar.leftMargin;
                        marginLayoutParams.rightMargin = aVar.rightMargin;
                        marginLayoutParams.bottomMargin = aVar.bottomMargin;
                        aa.this.Ms.setLayoutParams(marginLayoutParams);
                    }
                    if (aa.this.cI != null) {
                        aa.this.cI.a(aVar);
                    }
                }
            });
            this.TT.post(new Runnable() {
                @Override
                public final void run() {
                    if (aa.this.TU != null) {
                        aa.this.TU.a(null);
                    }
                }
            });
        } catch (JSONException e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
            cVar.onError(-1, e.getMessage());
        }
    }

    @Override
    public final String getKey() {
        return "initKsAdFrame";
    }

    @Override
    public final void onDestroy() {
        this.TU = null;
        this.cI = null;
        this.TT.removeCallbacksAndMessages(null);
    }
}
