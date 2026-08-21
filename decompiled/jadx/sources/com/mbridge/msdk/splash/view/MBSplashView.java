package com.mbridge.msdk.splash.view;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.mbridge.msdk.dycreator.listener.DyCountDownListener;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.an;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.h;
import com.mbridge.msdk.splash.js.b;
import com.mbridge.msdk.splash.js.c;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import java.util.HashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class MBSplashView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static String f4052a = "MBSplashView";
    private int b;
    private MBSplashWebview c;
    private ViewGroup d;
    private View e;
    private View f;
    private int g;
    private boolean h;
    private boolean i;
    private ViewGroup j;
    private boolean k;
    private View l;
    private boolean m;
    private boolean n;
    private RelativeLayout.LayoutParams o;
    private b p;
    private DyCountDownListener q;

    public void setH5Ready(boolean z) {
        this.h = z;
    }

    public void setVideoReady(boolean z) {
        this.i = z;
    }

    public void setImageReady(boolean z) {
        this.k = z;
    }

    public boolean isH5Ready() {
        return this.h;
    }

    public boolean isVideoReady() {
        return this.i;
    }

    public boolean isImageReady() {
        return this.k;
    }

    public ViewGroup getDevContainer() {
        return this.j;
    }

    public void setDevContainer(ViewGroup viewGroup) {
        this.j = viewGroup;
    }

    public boolean isDynamicView() {
        return this.m;
    }

    public void setDynamicView(boolean z) {
        this.m = z;
    }

    public boolean isAttach() {
        return this.n;
    }

    public void resetLoadState() {
        this.i = false;
        this.h = false;
    }

    public void setDyCountDownListener(DyCountDownListener dyCountDownListener) {
        this.q = dyCountDownListener;
    }

    public b getSplashJSBridgeImpl() {
        return this.p;
    }

    public void setSplashJSBridgeImpl(b bVar) {
        this.p = bVar;
        MBSplashWebview mBSplashWebview = this.c;
        if (mBSplashWebview != null) {
            mBSplashWebview.setObject(bVar);
        }
    }

    public MBSplashView(Context context) {
        this(context, null);
    }

    public MBSplashView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public MBSplashView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        b();
    }

    @Override // android.view.View
    protected void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
        b();
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        this.n = true;
    }

    private void b() {
        setBackgroundColor(0);
        this.b = getResources().getConfiguration().orientation;
    }

    public void setSplashNativeView(View view) {
        if (view != null) {
            this.l = view;
        }
    }

    public MBSplashWebview getSplashWebview() {
        return this.c;
    }

    public void setSplashWebview(MBSplashWebview mBSplashWebview) {
        this.c = mBSplashWebview;
        b bVar = this.p;
        if (bVar != null) {
            mBSplashWebview.setObject(bVar);
        }
    }

    public void changeCloseBtnState(int i) {
        View view = this.e;
        if (view != null) {
            if (i == 2) {
                view.setVisibility(8);
            } else {
                view.setVisibility(0);
            }
        }
    }

    public View getCloseView() {
        return this.e;
    }

    public void setCloseView(View view) {
        this.e = view;
        if (view != null) {
            view.setContentDescription("closeButton");
        }
    }

    public View getIconVg() {
        return this.f;
    }

    public void setIconVg(View view, RelativeLayout.LayoutParams layoutParams) {
        this.f = view;
        this.o = layoutParams;
    }

    public void show() {
        View view;
        View view2;
        View view3;
        ViewGroup viewGroup;
        if (this.p != null && (viewGroup = this.j) != null && (viewGroup.getContext() instanceof Activity)) {
            this.p.a(this.j.getContext());
        }
        if (this.f == null) {
            if (this.m && (view3 = this.l) != null) {
                if (view3.getParent() != null) {
                    an.a(this.l);
                }
                addView(this.l, new ViewGroup.LayoutParams(-1, -1));
            } else {
                MBSplashWebview mBSplashWebview = this.c;
                if (mBSplashWebview != null && mBSplashWebview.getParent() == null) {
                    addView(this.c, new ViewGroup.LayoutParams(-1, -1));
                }
                c();
            }
        } else {
            if (this.d == null) {
                RelativeLayout relativeLayout = new RelativeLayout(getContext());
                this.d = relativeLayout;
                relativeLayout.setId(2147482647);
            }
            if (this.b == 2) {
                this.g = ae.h(getContext());
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(0, this.d.getId());
                if (this.m && (view2 = this.l) != null) {
                    if (view2.getParent() != null) {
                        an.a(this.l);
                    }
                    addView(this.l, layoutParams);
                } else {
                    MBSplashWebview mBSplashWebview2 = this.c;
                    if (mBSplashWebview2 != null && mBSplashWebview2.getParent() == null) {
                        addView(this.c, layoutParams);
                    }
                    c();
                }
                ViewGroup viewGroup2 = this.d;
                if (viewGroup2 != null && viewGroup2.getParent() == null) {
                    int i = this.o.width;
                    an.a(this.f);
                    int i2 = this.g;
                    if (i > i2 / 4) {
                        i = i2 / 4;
                    }
                    this.d.addView(this.f, i, -1);
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(i, -1);
                    layoutParams2.addRule(11);
                    layoutParams2.addRule(13);
                    addView(this.d, layoutParams2);
                }
            } else {
                this.g = ae.g(getContext());
                RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams3.addRule(2, this.d.getId());
                if (this.m && (view = this.l) != null) {
                    if (view.getParent() != null) {
                        an.a(this.l);
                    }
                    addView(this.l, layoutParams3);
                } else {
                    MBSplashWebview mBSplashWebview3 = this.c;
                    if (mBSplashWebview3 != null && mBSplashWebview3.getParent() == null) {
                        addView(this.c, layoutParams3);
                    }
                    c();
                }
                ViewGroup viewGroup3 = this.d;
                if (viewGroup3 != null && viewGroup3.getParent() == null) {
                    int i3 = this.o.height;
                    int i4 = this.g;
                    if (i3 > i4 / 4) {
                        i3 = i4 / 4;
                    }
                    an.a(this.f);
                    this.d.addView(this.f, -1, i3);
                    RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-1, i3);
                    layoutParams4.addRule(12);
                    addView(this.d, layoutParams4);
                }
            }
        }
        View view4 = this.e;
        if (view4 != null) {
            if (view4.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(ae.b(getContext(), 100.0f), ae.b(getContext(), 30.0f));
                layoutParams5.addRule(10);
                layoutParams5.addRule(11);
                layoutParams5.rightMargin = ae.b(getContext(), 10.0f);
                layoutParams5.topMargin = ae.b(getContext(), 10.0f);
                addView(this.e, layoutParams5);
            } else {
                bringChildToFront(this.e);
            }
        }
        clearResState();
    }

    public void clearResState() {
        this.k = false;
        this.i = false;
        this.h = false;
    }

    public void updateCountdown(int i) {
        DyCountDownListener dyCountDownListener;
        View view;
        if (this.c != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.d.a.b.dk, i);
                h.a().a((WebView) this.c, "updateCountdown", Base64.encodeToString(jSONObject.toString().getBytes(), 2));
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.m && (view = this.l) != null && (view instanceof MBSplashNativeView)) {
                ((MBSplashNativeView) view).updateCountDown(i);
            }
            if (!this.m || (dyCountDownListener = this.q) == null) {
                return;
            }
            dyCountDownListener.getCountDownValue(i);
        }
    }

    private void c() {
        MBSplashWebview mBSplashWebview = this.c;
        if (mBSplashWebview != null) {
            mBSplashWebview.setObject(this.p);
            this.c.post(new Runnable() { // from class: com.mbridge.msdk.splash.view.MBSplashView.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        z.a(MBSplashView.f4052a, "webviewshow");
                        String string = "";
                        try {
                            int[] iArr = new int[2];
                            MBSplashView.this.c.getLocationOnScreen(iArr);
                            z.d(MBSplashView.f4052a, "coordinate:" + iArr[0] + "--" + iArr[1]);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("startX", ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), (float) iArr[0]));
                            jSONObject.put("startY", ae.a(com.mbridge.msdk.foundation.controller.a.f().j(), (float) iArr[1]));
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            z.c(MBSplashView.f4052a, th.getMessage(), th);
                        }
                        int[] iArr2 = new int[2];
                        MBSplashView.this.c.getLocationInWindow(iArr2);
                        MBSplashView.transInfoForMraid(MBSplashView.this.c, iArr2[0], iArr2[1], MBSplashView.this.c.getWidth(), MBSplashView.this.c.getHeight());
                        h.a().a((WebView) MBSplashView.this.c, "webviewshow", Base64.encodeToString(string.toString().getBytes(), 2));
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
        }
    }

    public static void transInfoForMraid(WebView webView, int i, int i2, int i3, int i4) {
        z.d(f4052a, "transInfoForMraid");
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
            map.put(CallMraidJS.f6428a, "Interstitial");
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
            z.c(f4052a, "transInfoForMraid", th);
        }
    }

    public void onResume() {
        View view = this.l;
        if (view == null || !(view instanceof MBSplashNativeView)) {
            return;
        }
        ((MBSplashNativeView) view).setIsPause(false);
    }

    public void onPause() {
        View view = this.l;
        if (view == null || !(view instanceof MBSplashNativeView)) {
            return;
        }
        ((MBSplashNativeView) view).setIsPause(true);
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        View view = this.l;
        if (view == null || !(view instanceof MBSplashNativeView)) {
            return;
        }
        ((MBSplashNativeView) view).setNotchPadding(i, i2, i3, i4);
    }

    public void destroy() {
        removeAllViews();
        ViewGroup viewGroup = this.j;
        if (viewGroup != null) {
            viewGroup.removeAllViews();
        }
        MBSplashWebview mBSplashWebview = this.c;
        if (mBSplashWebview == null || mBSplashWebview.isDestoryed()) {
            return;
        }
        this.c.release();
        c.a(this.c, "onSystemDestory", "");
    }
}
