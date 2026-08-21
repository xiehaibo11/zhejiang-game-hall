package com.mbridge.msdk.advanced.view;

import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.advanced.js.b;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class MBNativeAdvancedView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f3103a = "MBAdvancedNativeView";
    private MBNativeAdvancedWebview b;
    private View c;
    private boolean d;
    private boolean e;
    private boolean f;
    private com.mbridge.msdk.advanced.js.a g;
    private Context h;

    public void setH5Ready(boolean z) {
        this.d = z;
    }

    public void setVideoReady(boolean z) {
        this.e = z;
    }

    public boolean isEndCardReady() {
        return this.f;
    }

    public void setEndCardReady(boolean z) {
        this.f = z;
    }

    public boolean isH5Ready() {
        return this.d;
    }

    public boolean isVideoReady() {
        return this.e;
    }

    public void resetLoadState() {
        this.f = false;
        this.e = false;
        this.d = false;
    }

    public com.mbridge.msdk.advanced.js.a getAdvancedNativeJSBridgeImpl() {
        return this.g;
    }

    public void setAdvancedNativeJSBridgeImpl(com.mbridge.msdk.advanced.js.a aVar) {
        this.g = aVar;
        MBNativeAdvancedWebview mBNativeAdvancedWebview = this.b;
        if (mBNativeAdvancedWebview != null) {
            mBNativeAdvancedWebview.setObject(aVar);
        }
    }

    public MBNativeAdvancedView(Context context) {
        this(context, null);
    }

    public MBNativeAdvancedView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBNativeAdvancedView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.h = context;
    }

    @Override // android.view.View
    protected void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    public MBNativeAdvancedWebview getAdvancedNativeWebview() {
        return this.b;
    }

    public void setAdvancedNativeWebview(MBNativeAdvancedWebview mBNativeAdvancedWebview) {
        this.b = mBNativeAdvancedWebview;
        com.mbridge.msdk.advanced.js.a aVar = this.g;
        if (aVar != null) {
            mBNativeAdvancedWebview.setObject(aVar);
        }
    }

    public void changeCloseBtnState(int i) {
        View view = this.c;
        if (view != null) {
            if (i == 2) {
                view.setVisibility(8);
            } else {
                view.setVisibility(0);
            }
        }
    }

    public View getCloseView() {
        return this.c;
    }

    public void setCloseView(View view) {
        this.c = view;
        if (view != null) {
            view.setContentDescription("closeButton");
        }
    }

    public void clearResState() {
        this.f = false;
        this.e = false;
        this.d = false;
    }

    public void clearResStateAndRemoveClose() {
        clearResState();
        View view = this.c;
        if (view == null || view.getParent() == null) {
            return;
        }
        removeView(this.c);
    }

    public static void transInfoForMraid(WebView webView, int i, int i2, int i3, int i4) {
        z.d(f3103a, "transInfoForMraid");
        try {
            int i5 = com.mbridge.msdk.foundation.controller.a.f().j().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i5 == 2 ? "landscape" : i5 == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fX = v.x(com.mbridge.msdk.foundation.controller.a.f().j());
            float fY = v.y(com.mbridge.msdk.foundation.controller.a.f().j());
            HashMap mapZ = v.z(com.mbridge.msdk.foundation.controller.a.f().j());
            int iIntValue = ((Integer) mapZ.get("width")).intValue();
            int iIntValue2 = ((Integer) mapZ.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.f6428a, CallMraidJS.k);
            map.put(CallMraidJS.b, "default");
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            float f = i;
            float f2 = i2;
            float f3 = i3;
            float f4 = i4;
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(webView, f, f2, f3, f4);
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(webView, f, f2, f3, f4);
            com.mbridge.msdk.mbjscommon.mraid.a.a().b(webView, fX, fY);
            com.mbridge.msdk.mbjscommon.mraid.a.a().c(webView, iIntValue, iIntValue2);
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(webView, map);
            com.mbridge.msdk.mbjscommon.mraid.a.a().a(webView);
        } catch (Throwable th) {
            z.c(f3103a, "transInfoForMraid", th);
        }
    }

    public void destroy() {
        removeAllViews();
        MBNativeAdvancedWebview mBNativeAdvancedWebview = this.b;
        if (mBNativeAdvancedWebview != null && !mBNativeAdvancedWebview.isDestoryed()) {
            this.b.release();
            b.a(this.b, "onSystemDestory", "");
        }
        if (this.h != null) {
            this.h = null;
        }
    }

    public void show() {
        MBNativeAdvancedWebview mBNativeAdvancedWebview = this.b;
        if (mBNativeAdvancedWebview != null && mBNativeAdvancedWebview.getParent() == null) {
            addView(this.b, new ViewGroup.LayoutParams(-1, -1));
        }
        int[] iArr = new int[2];
        this.b.getLocationInWindow(iArr);
        MBNativeAdvancedWebview mBNativeAdvancedWebview2 = this.b;
        transInfoForMraid(mBNativeAdvancedWebview2, iArr[0], iArr[1], mBNativeAdvancedWebview2.getWidth(), this.b.getHeight());
        MBNativeAdvancedWebview mBNativeAdvancedWebview3 = this.b;
        if (mBNativeAdvancedWebview3 != null) {
            mBNativeAdvancedWebview3.setObject(this.g);
            this.b.post(new Runnable() { // from class: com.mbridge.msdk.advanced.view.MBNativeAdvancedView.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        z.a(MBNativeAdvancedView.f3103a, "webviewshow");
                        String string = "";
                        try {
                            int[] iArr2 = new int[2];
                            MBNativeAdvancedView.this.b.getLocationOnScreen(iArr2);
                            z.d(MBNativeAdvancedView.f3103a, "coordinate:" + iArr2[0] + "--" + iArr2[1]);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("startX", ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), (float) iArr2[0]));
                            jSONObject.put("startY", ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), (float) iArr2[1]));
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBNativeAdvancedView.f3103a, th.getMessage(), th);
                        }
                        h.a().a((WebView) MBNativeAdvancedView.this.b, "webviewshow", Base64.encodeToString(string.toString().getBytes(), 2));
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
        }
        View view = this.c;
        if (view != null) {
            if (view.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(ae.b(getContext(), 28.0f), ae.b(getContext(), 16.0f));
                layoutParams.addRule(10);
                layoutParams.addRule(11);
                layoutParams.rightMargin = ae.b(getContext(), 2.0f);
                layoutParams.topMargin = ae.b(getContext(), 2.0f);
                addView(this.c, layoutParams);
            } else {
                bringChildToFront(this.c);
            }
        }
        clearResState();
    }
}
