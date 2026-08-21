package com.kwad.components.core.webview.jshandler;

import android.os.Handler;
import android.os.Looper;
import java.io.Serializable;
import org.json.JSONException;
import org.json.JSONObject;

public final class WebCardVideoPositionHandler implements com.kwad.sdk.core.webview.c.a {
    private a VE;
    private VideoPosition VD = new VideoPosition();
    private Handler mHandler = new Handler(Looper.getMainLooper());

    public static final class VideoPosition extends com.kwad.sdk.core.response.a.a implements Serializable {
        private static final long serialVersionUID = -3445790097441569428L;
        public int borderRadius;
        public KSAdJSCornerModel cornerRadius;
        public int height;
        public double heightWidthRation;
        public int leftMargin;
        public double leftMarginRation;
        public int topMargin;
        public double topMarginRation;
        public int width;
        public double widthRation;

        public static class KSAdJSCornerModel extends com.kwad.sdk.core.response.a.a implements Serializable {
            private static final long serialVersionUID = -1503191931449786332L;
            public double bottomLeft;
            public double bottomRight;
            public double topLeft;
            public double topRight;
        }

        @Override
        public final void afterParseJson(JSONObject jSONObject) {
            super.afterParseJson(jSONObject);
            if (jSONObject.has("cornerRadius")) {
                KSAdJSCornerModel kSAdJSCornerModel = new KSAdJSCornerModel();
                this.cornerRadius = kSAdJSCornerModel;
                kSAdJSCornerModel.parseJson(jSONObject.optJSONObject("cornerRadius"));
            }
        }
    }

    public interface a {
        void a(VideoPosition videoPosition);
    }

    public WebCardVideoPositionHandler(a aVar) {
        this.VE = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        try {
            this.VD.parseJson(new JSONObject(str));
            if (this.VE != null) {
                this.mHandler.post(new Runnable() {
                    @Override
                    public final void run() {
                        WebCardVideoPositionHandler.this.VE.a(WebCardVideoPositionHandler.this.VD);
                    }
                });
            }
        } catch (JSONException e) {
            e.printStackTrace();
        }
        cVar.a(null);
    }

    @Override
    public final String getKey() {
        return "videoPosition";
    }

    @Override
    public final void onDestroy() {
        this.mHandler.removeCallbacksAndMessages(null);
    }
}
