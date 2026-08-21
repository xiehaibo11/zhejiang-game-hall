package com.tkay.expressad.advanced.view;

import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.expressad.advanced.d.c;
import com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl;
import com.tkay.expressad.advanced.js.NativeAdvancedJsUtils;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import java.util.HashMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TYNativeAdvancedView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f6400a = "webviewshow";
    private static String b = "TYNativeAdvancedView";
    private TYNativeAdvancedWebview c;
    private View d;
    private boolean e;
    private boolean f;
    private boolean g;
    private c h;
    private NativeAdvancedJSBridgeImpl i;
    private Context j;

    public void setH5Ready(boolean z) {
        this.e = z;
    }

    public void setVideoReady(boolean z) {
        this.f = z;
    }

    public boolean isEndCardReady() {
        return this.g;
    }

    public void setEndCardReady(boolean z) {
        this.g = z;
    }

    public boolean isH5Ready() {
        return this.e;
    }

    public boolean isVideoReady() {
        return this.f;
    }

    public void resetLoadState() {
        this.g = false;
        this.f = false;
        this.e = false;
    }

    public NativeAdvancedJSBridgeImpl getAdvancedNativeJSBridgeImpl() {
        return this.i;
    }

    public void setAdvancedNativeJSBridgeImpl(NativeAdvancedJSBridgeImpl nativeAdvancedJSBridgeImpl) {
        this.i = nativeAdvancedJSBridgeImpl;
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.c;
        if (tYNativeAdvancedWebview != null) {
            tYNativeAdvancedWebview.setObject(nativeAdvancedJSBridgeImpl);
        }
    }

    public TYNativeAdvancedView(Context context) {
        this(context, null);
    }

    public TYNativeAdvancedView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TYNativeAdvancedView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.j = context;
    }

    @Override // android.view.View
    protected void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    private void b() {
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.c;
        if (tYNativeAdvancedWebview != null && tYNativeAdvancedWebview.getParent() == null) {
            addView(this.c, new ViewGroup.LayoutParams(-1, -1));
        }
        int[] iArr = new int[2];
        this.c.getLocationInWindow(iArr);
        TYNativeAdvancedWebview tYNativeAdvancedWebview2 = this.c;
        transInfoForMraid(tYNativeAdvancedWebview2, iArr[0], iArr[1], tYNativeAdvancedWebview2.getWidth(), this.c.getHeight());
        TYNativeAdvancedWebview tYNativeAdvancedWebview3 = this.c;
        if (tYNativeAdvancedWebview3 != null) {
            tYNativeAdvancedWebview3.setObject(this.i);
            this.c.post(new AnonymousClass1());
        }
        View view = this.d;
        if (view != null) {
            if (view.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(t.b(getContext(), 28.0f), t.b(getContext(), 16.0f));
                layoutParams.addRule(10);
                layoutParams.addRule(11);
                layoutParams.rightMargin = t.b(getContext(), 2.0f);
                layoutParams.topMargin = t.b(getContext(), 2.0f);
                addView(this.d, layoutParams);
                return;
            }
            bringChildToFront(this.d);
        }
    }

    public TYNativeAdvancedWebview getAdvancedNativeWebview() {
        return this.c;
    }

    public void setAdvancedNativeWebview(TYNativeAdvancedWebview tYNativeAdvancedWebview) {
        this.c = tYNativeAdvancedWebview;
        NativeAdvancedJSBridgeImpl nativeAdvancedJSBridgeImpl = this.i;
        if (nativeAdvancedJSBridgeImpl != null) {
            tYNativeAdvancedWebview.setObject(nativeAdvancedJSBridgeImpl);
        }
    }

    public void changeCloseBtnState(int i) {
        View view = this.d;
        if (view != null) {
            if (i == 2) {
                view.setVisibility(8);
            } else {
                view.setVisibility(0);
            }
        }
    }

    public View getCloseView() {
        return this.d;
    }

    public void setCloseView(View view) {
        this.d = view;
        if (view != null) {
            view.setContentDescription("closeButton");
        }
    }

    public void clearResState() {
        this.g = false;
        this.f = false;
        this.e = false;
    }

    public void clearResStateAndRemoveClose() {
        clearResState();
        View view = this.d;
        if (view == null || view.getParent() == null) {
            return;
        }
        removeView(this.d);
    }

    private void c() {
        int[] iArr = new int[2];
        this.c.getLocationInWindow(iArr);
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.c;
        transInfoForMraid(tYNativeAdvancedWebview, iArr[0], iArr[1], tYNativeAdvancedWebview.getWidth(), this.c.getHeight());
        TYNativeAdvancedWebview tYNativeAdvancedWebview2 = this.c;
        if (tYNativeAdvancedWebview2 != null) {
            tYNativeAdvancedWebview2.setObject(this.i);
            this.c.post(new AnonymousClass1());
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.advanced.view.TYNativeAdvancedView$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {
        AnonymousClass1() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                String unused = TYNativeAdvancedView.b;
                String string = "";
                try {
                    int[] iArr = new int[2];
                    TYNativeAdvancedView.this.c.getLocationOnScreen(iArr);
                    String unused2 = TYNativeAdvancedView.b;
                    StringBuilder sb = new StringBuilder("coordinate:");
                    sb.append(iArr[0]);
                    sb.append("--");
                    sb.append(iArr[1]);
                    JSONObject jSONObject = new JSONObject();
                    jSONObject.put("startX", t.a(m.a().f(), iArr[0]));
                    jSONObject.put("startY", t.a(m.a().f(), iArr[1]));
                    string = jSONObject.toString();
                } catch (Throwable th) {
                    String unused3 = TYNativeAdvancedView.b;
                    th.getMessage();
                }
                String strEncodeToString = Base64.encodeToString(string.toString().getBytes(), 2);
                j.a();
                j.a((WebView) TYNativeAdvancedView.this.c, TYNativeAdvancedView.f6400a, strEncodeToString);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public static void transInfoForMraid(WebView webView, int i, int i2, int i3, int i4) {
        try {
            int i5 = m.a().f().getResources().getConfiguration().orientation;
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("orientation", i5 == 2 ? "landscape" : i5 == 1 ? "portrait" : "undefined");
            jSONObject.put("locked", "true");
            float fE = k.e(m.a().f());
            float f = k.f(m.a().f());
            HashMap mapG = k.g(m.a().f());
            int iIntValue = ((Integer) mapG.get("width")).intValue();
            int iIntValue2 = ((Integer) mapG.get("height")).intValue();
            HashMap map = new HashMap();
            map.put(CallMraidJS.f6428a, CallMraidJS.k);
            map.put(CallMraidJS.b, "default");
            map.put(CallMraidJS.c, "true");
            map.put(CallMraidJS.d, jSONObject);
            float f2 = i;
            float f3 = i2;
            float f4 = i3;
            float f5 = i4;
            CallMraidJS.getInstance().fireSetDefaultPosition(webView, f2, f3, f4, f5);
            CallMraidJS.getInstance().fireSetCurrentPosition(webView, f2, f3, f4, f5);
            CallMraidJS.getInstance().fireSetScreenSize(webView, fE, f);
            CallMraidJS.getInstance().fireSetMaxSize(webView, iIntValue, iIntValue2);
            CallMraidJS.getInstance().fireChangeEventForPropertys(webView, map);
            CallMraidJS.getInstance().fireReadyEvent(webView);
        } catch (Throwable unused) {
        }
    }

    public void destroy() {
        removeAllViews();
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.c;
        if (tYNativeAdvancedWebview != null && !tYNativeAdvancedWebview.isDestroyed()) {
            this.c.release();
            NativeAdvancedJsUtils.sendEventToH5(this.c, "onSystemDestory", "");
        }
        if (this.j != null) {
            this.j = null;
        }
    }

    public void show() {
        TYNativeAdvancedWebview tYNativeAdvancedWebview = this.c;
        if (tYNativeAdvancedWebview != null && tYNativeAdvancedWebview.getParent() == null) {
            addView(this.c, new ViewGroup.LayoutParams(-1, -1));
        }
        int[] iArr = new int[2];
        this.c.getLocationInWindow(iArr);
        TYNativeAdvancedWebview tYNativeAdvancedWebview2 = this.c;
        transInfoForMraid(tYNativeAdvancedWebview2, iArr[0], iArr[1], tYNativeAdvancedWebview2.getWidth(), this.c.getHeight());
        TYNativeAdvancedWebview tYNativeAdvancedWebview3 = this.c;
        if (tYNativeAdvancedWebview3 != null) {
            tYNativeAdvancedWebview3.setObject(this.i);
            this.c.post(new AnonymousClass1());
        }
        View view = this.d;
        if (view != null) {
            if (view.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(t.b(getContext(), 28.0f), t.b(getContext(), 16.0f));
                layoutParams.addRule(10);
                layoutParams.addRule(11);
                layoutParams.rightMargin = t.b(getContext(), 2.0f);
                layoutParams.topMargin = t.b(getContext(), 2.0f);
                addView(this.d, layoutParams);
            } else {
                bringChildToFront(this.d);
            }
        }
        clearResState();
    }
}
