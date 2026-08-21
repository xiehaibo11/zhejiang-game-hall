package com.tkay.expressad.splash.view;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.util.AttributeSet;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;
import android.widget.RelativeLayout;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.core.common.l.u;
import com.tkay.expressad.atsignalcommon.mraid.CallMraidJS;
import com.tkay.expressad.atsignalcommon.windvane.j;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import com.tkay.expressad.splash.js.SplashJSBridgeImpl;
import com.tkay.expressad.splash.js.SplashJsUtils;
import java.util.HashMap;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class TYSplashView extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f7158a = "webviewshow";
    protected static final String b = "updateCountdown";
    private static String c = "TYSplashView";
    private int d;
    private TYSplashWebview e;
    private ViewGroup f;
    private View g;
    private View h;
    private int i;
    private boolean j;
    private boolean k;
    private ViewGroup l;
    private boolean m;
    private View n;
    private boolean o;
    private boolean p;
    private RelativeLayout.LayoutParams q;
    private SplashJSBridgeImpl r;
    private boolean s;

    public void setH5Ready(boolean z) {
        this.j = z;
    }

    public void setVideoReady(boolean z) {
        this.k = z;
    }

    public void setImageReady(boolean z) {
        this.m = z;
    }

    public boolean isH5Ready() {
        return this.j;
    }

    public boolean isVideoReady() {
        return this.k;
    }

    public boolean isImageReady() {
        return this.m;
    }

    public ViewGroup getDevContainer() {
        return this.l;
    }

    public void setDevContainer(ViewGroup viewGroup) {
        this.l = viewGroup;
    }

    public boolean isDynamicView() {
        return this.o;
    }

    public void setDynamicView(boolean z) {
        this.o = z;
    }

    public boolean isAttach() {
        return this.p;
    }

    public void resetLoadState() {
        this.k = false;
        this.j = false;
    }

    public SplashJSBridgeImpl getSplashJSBridgeImpl() {
        return this.r;
    }

    public void setSplashJSBridgeImpl(SplashJSBridgeImpl splashJSBridgeImpl) {
        this.r = splashJSBridgeImpl;
        TYSplashWebview tYSplashWebview = this.e;
        if (tYSplashWebview != null) {
            tYSplashWebview.setObject(splashJSBridgeImpl);
        }
    }

    public TYSplashView(Context context) {
        this(context, null);
    }

    public TYSplashView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public TYSplashView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.s = false;
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
        this.p = true;
    }

    private void b() {
        setBackgroundColor(0);
        this.d = getResources().getConfiguration().orientation;
        this.s = false;
    }

    public void setSplashNativeView(View view) {
        if (view != null) {
            this.n = view;
        }
    }

    private void c() {
        View view;
        View view2;
        View view3;
        if (this.h == null) {
            if (this.o && (view3 = this.n) != null) {
                if (view3.getParent() != null) {
                    u.a(this.n);
                }
                addView(this.n, new ViewGroup.LayoutParams(-1, -1));
            } else {
                TYSplashWebview tYSplashWebview = this.e;
                if (tYSplashWebview != null && tYSplashWebview.getParent() == null) {
                    addView(this.e, new ViewGroup.LayoutParams(-1, -1));
                }
                d();
            }
        } else {
            if (this.f == null) {
                RelativeLayout relativeLayout = new RelativeLayout(getContext());
                this.f = relativeLayout;
                relativeLayout.setId(2147482647);
            }
            if (this.d == 2) {
                this.i = t.f(getContext());
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(0, this.f.getId());
                if (this.o && (view2 = this.n) != null) {
                    if (view2.getParent() != null) {
                        u.a(this.n);
                    }
                    addView(this.n, layoutParams);
                } else {
                    TYSplashWebview tYSplashWebview2 = this.e;
                    if (tYSplashWebview2 != null && tYSplashWebview2.getParent() == null) {
                        addView(this.e, layoutParams);
                    }
                    d();
                }
                ViewGroup viewGroup = this.f;
                if (viewGroup != null && viewGroup.getParent() == null) {
                    int i = this.q.width;
                    int i2 = this.i;
                    if (i > i2 / 4) {
                        i = i2 / 4;
                    }
                    this.f.addView(this.h, i, -1);
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(i, -1);
                    layoutParams2.addRule(11);
                    layoutParams2.addRule(13);
                    addView(this.f, layoutParams2);
                }
            } else {
                this.i = t.e(getContext());
                RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams3.addRule(2, this.f.getId());
                if (this.o && (view = this.n) != null) {
                    if (view.getParent() != null) {
                        u.a(this.n);
                    }
                    addView(this.n, layoutParams3);
                } else {
                    TYSplashWebview tYSplashWebview3 = this.e;
                    if (tYSplashWebview3 != null && tYSplashWebview3.getParent() == null) {
                        addView(this.e, layoutParams3);
                    }
                    d();
                }
                ViewGroup viewGroup2 = this.f;
                if (viewGroup2 != null && viewGroup2.getParent() == null) {
                    int i3 = this.q.height;
                    int i4 = this.i;
                    if (i3 > i4 / 4) {
                        i3 = i4 / 4;
                    }
                    this.f.addView(this.h, -1, i3);
                    RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-1, i3);
                    layoutParams4.addRule(12);
                    addView(this.f, layoutParams4);
                }
            }
        }
        View view4 = this.g;
        if (view4 != null) {
            if (view4.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(t.b(getContext(), 100.0f), t.b(getContext(), 30.0f));
                layoutParams5.addRule(10);
                layoutParams5.addRule(11);
                layoutParams5.rightMargin = t.b(getContext(), 10.0f);
                layoutParams5.topMargin = t.b(getContext(), 10.0f);
                addView(this.g, layoutParams5);
                return;
            }
            bringChildToFront(this.g);
        }
    }

    @Override // android.widget.RelativeLayout, android.view.ViewGroup, android.view.View
    protected void onLayout(boolean z, int i, int i2, int i3, int i4) {
        super.onLayout(z, i, i2, i3, i4);
        checkSkipViewLocation();
    }

    public void checkSkipViewLocation() {
        if (this.s) {
            return;
        }
        try {
            if (this.g != null) {
                ViewGroup.LayoutParams layoutParams = this.g.getLayoutParams();
                if (layoutParams instanceof RelativeLayout.LayoutParams) {
                    int i = ((RelativeLayout.LayoutParams) layoutParams).topMargin;
                    int iB = h.b(getContext()) + i;
                    if (i > 0) {
                        this.s = true;
                    }
                    int[] iArr = new int[2];
                    this.g.getLocationOnScreen(iArr);
                    if (iArr[1] < iB) {
                        ((RelativeLayout.LayoutParams) layoutParams).topMargin = i + (iB - iArr[1]);
                        this.g.setLayoutParams(layoutParams);
                    }
                }
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public TYSplashWebview getSplashWebview() {
        return this.e;
    }

    public void setSplashWebview(TYSplashWebview tYSplashWebview) {
        this.e = tYSplashWebview;
        SplashJSBridgeImpl splashJSBridgeImpl = this.r;
        if (splashJSBridgeImpl != null) {
            tYSplashWebview.setObject(splashJSBridgeImpl);
        }
    }

    public void changeCloseBtnState(int i) {
        View view = this.g;
        if (view != null) {
            if (i == 2) {
                view.setVisibility(8);
            } else {
                view.setVisibility(0);
            }
        }
    }

    public View getCloseView() {
        return this.g;
    }

    public void setCloseView(View view) {
        this.g = view;
        if (view != null) {
            view.setContentDescription("closeButton");
        }
    }

    public View getIconVg() {
        return this.h;
    }

    public void setIconVg(View view, RelativeLayout.LayoutParams layoutParams) {
        this.h = view;
        this.q = layoutParams;
    }

    public void show() {
        View view;
        View view2;
        View view3;
        ViewGroup viewGroup;
        if (this.r != null && (viewGroup = this.l) != null && (viewGroup.getContext() instanceof Activity)) {
            this.r.updateContext(this.l.getContext());
        }
        if (this.h == null) {
            if (this.o && (view3 = this.n) != null) {
                if (view3.getParent() != null) {
                    u.a(this.n);
                }
                addView(this.n, new ViewGroup.LayoutParams(-1, -1));
            } else {
                TYSplashWebview tYSplashWebview = this.e;
                if (tYSplashWebview != null && tYSplashWebview.getParent() == null) {
                    addView(this.e, new ViewGroup.LayoutParams(-1, -1));
                }
                d();
            }
        } else {
            if (this.f == null) {
                RelativeLayout relativeLayout = new RelativeLayout(getContext());
                this.f = relativeLayout;
                relativeLayout.setId(2147482647);
            }
            if (this.d == 2) {
                this.i = t.f(getContext());
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams.addRule(0, this.f.getId());
                if (this.o && (view2 = this.n) != null) {
                    if (view2.getParent() != null) {
                        u.a(this.n);
                    }
                    addView(this.n, layoutParams);
                } else {
                    TYSplashWebview tYSplashWebview2 = this.e;
                    if (tYSplashWebview2 != null && tYSplashWebview2.getParent() == null) {
                        addView(this.e, layoutParams);
                    }
                    d();
                }
                ViewGroup viewGroup2 = this.f;
                if (viewGroup2 != null && viewGroup2.getParent() == null) {
                    int i = this.q.width;
                    int i2 = this.i;
                    if (i > i2 / 4) {
                        i = i2 / 4;
                    }
                    this.f.addView(this.h, i, -1);
                    RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(i, -1);
                    layoutParams2.addRule(11);
                    layoutParams2.addRule(13);
                    addView(this.f, layoutParams2);
                }
            } else {
                this.i = t.e(getContext());
                RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-1, -1);
                layoutParams3.addRule(2, this.f.getId());
                if (this.o && (view = this.n) != null) {
                    if (view.getParent() != null) {
                        u.a(this.n);
                    }
                    addView(this.n, layoutParams3);
                } else {
                    TYSplashWebview tYSplashWebview3 = this.e;
                    if (tYSplashWebview3 != null && tYSplashWebview3.getParent() == null) {
                        addView(this.e, layoutParams3);
                    }
                    d();
                }
                ViewGroup viewGroup3 = this.f;
                if (viewGroup3 != null && viewGroup3.getParent() == null) {
                    int i3 = this.q.height;
                    int i4 = this.i;
                    if (i3 > i4 / 4) {
                        i3 = i4 / 4;
                    }
                    this.f.addView(this.h, -1, i3);
                    RelativeLayout.LayoutParams layoutParams4 = new RelativeLayout.LayoutParams(-1, i3);
                    layoutParams4.addRule(12);
                    addView(this.f, layoutParams4);
                }
            }
        }
        View view4 = this.g;
        if (view4 != null) {
            if (view4.getParent() == null) {
                RelativeLayout.LayoutParams layoutParams5 = new RelativeLayout.LayoutParams(t.b(getContext(), 100.0f), t.b(getContext(), 30.0f));
                layoutParams5.addRule(10);
                layoutParams5.addRule(11);
                layoutParams5.rightMargin = t.b(getContext(), 10.0f);
                layoutParams5.topMargin = t.b(getContext(), 10.0f);
                addView(this.g, layoutParams5);
            } else {
                bringChildToFront(this.g);
            }
        }
        clearResState();
    }

    public void clearResState() {
        this.m = false;
        this.k = false;
        this.j = false;
    }

    public void updateCountdown(int i) {
        View view;
        if (this.e != null) {
            try {
                JSONObject jSONObject = new JSONObject();
                jSONObject.put(com.tkay.expressad.d.a.b.dk, i);
                String strEncodeToString = Base64.encodeToString(jSONObject.toString().getBytes(), 2);
                j.a();
                j.a((WebView) this.e, b, strEncodeToString);
            } catch (JSONException e) {
                e.printStackTrace();
            }
            if (this.o && (view = this.n) != null && (view instanceof TYSplashNativeView)) {
                ((TYSplashNativeView) view).updateCountDown(i);
            }
        }
    }

    private void d() {
        TYSplashWebview tYSplashWebview = this.e;
        if (tYSplashWebview != null) {
            tYSplashWebview.setObject(this.r);
            this.e.post(new Runnable() { // from class: com.tkay.expressad.splash.view.TYSplashView.1
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        String unused = TYSplashView.c;
                        String string = "";
                        try {
                            int[] iArr = new int[2];
                            TYSplashView.this.e.getLocationOnScreen(iArr);
                            String unused2 = TYSplashView.c;
                            StringBuilder sb = new StringBuilder("coordinate:");
                            sb.append(iArr[0]);
                            sb.append("--");
                            sb.append(iArr[1]);
                            JSONObject jSONObject = new JSONObject();
                            jSONObject.put("startX", t.a(m.a().f(), iArr[0]));
                            jSONObject.put("startY", t.a(m.a().f(), iArr[1]));
                            string = jSONObject.toString();
                        } catch (Throwable th) {
                            String unused3 = TYSplashView.c;
                            th.getMessage();
                        }
                        int[] iArr2 = new int[2];
                        TYSplashView.this.e.getLocationInWindow(iArr2);
                        TYSplashView.transInfoForMraid(TYSplashView.this.e, iArr2[0], iArr2[1], TYSplashView.this.e.getWidth(), TYSplashView.this.e.getHeight());
                        String strEncodeToString = Base64.encodeToString(string.toString().getBytes(), 2);
                        j.a();
                        j.a((WebView) TYSplashView.this.e, TYSplashView.f7158a, strEncodeToString);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
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
            map.put(CallMraidJS.f6428a, "Interstitial");
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

    public void onResume() {
        View view = this.n;
        if (view == null || !(view instanceof TYSplashNativeView)) {
            return;
        }
        ((TYSplashNativeView) view).setIsPause(false);
    }

    public void onPause() {
        View view = this.n;
        if (view == null || !(view instanceof TYSplashNativeView)) {
            return;
        }
        ((TYSplashNativeView) view).setIsPause(true);
    }

    public void setNotchPadding(int i, int i2, int i3, int i4) {
        View view = this.n;
        if (view == null || !(view instanceof TYSplashNativeView)) {
            return;
        }
        ((TYSplashNativeView) view).setNotchPadding(i, i2, i3, i4);
    }

    public void destroy() {
        TYSplashWebview tYSplashWebview = this.e;
        if (tYSplashWebview == null || tYSplashWebview.isDestroyed()) {
            return;
        }
        this.e.release();
        SplashJsUtils.sendEventToH5(this.e, "onSystemDestory", "");
    }
}
