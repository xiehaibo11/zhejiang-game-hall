package com.sigmob.sdk.nativead;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.RelativeLayout;
import com.bianfeng.platform.UserInterface;
import com.bykv.vk.openvk.TTVfConstant;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.ImageManager;
import com.czhj.sdk.common.utils.TouchLocation;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.f;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.SigImage;
import com.sigmob.sdk.base.models.SigMacroCommon;
import com.sigmob.sdk.base.views.q;
import com.sigmob.sdk.nativead.c;
import com.sigmob.sdk.nativead.l;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.natives.NativeADEventListener;
import com.sigmob.windad.natives.WindNativeAdData;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;

public class w implements View.OnClickListener, View.OnTouchListener, c.a, l.a, x, WindNativeAdData.DislikeInteractionCallback {
    private static final int d = 1;
    private static final int e = 2;
    private static final int f = 3;
    private static Map<Integer, Integer> g = new HashMap();
    private int A;
    private boolean D;
    private boolean E;
    private boolean F;
    private List<View> G;
    private long H;
    private List<View> I;
    private View J;
    private boolean K;
    private WindNativeAdData.DislikeInteractionCallback L;
    protected WindNativeAdData a;
    protected BaseAdUnit b;
    protected g c;
    private n h;
    private l i;
    private List<View> j;
    private c l;
    private j m;
    private MotionEvent n;
    private b o;
    private NativeADEventListener p;
    private boolean q;
    private boolean r;
    private ViewGroup s;
    private ViewGroup.LayoutParams t;
    private Bitmap u;
    private com.sigmob.sdk.base.views.q v;
    private boolean w;
    private r x;
    private boolean y;
    private boolean z;
    private HashSet<View> k = new HashSet<>();
    private boolean B = true;
    private boolean C = false;

    private Context H() {
        return com.sigmob.sdk.b.b();
    }

    private void I() {
        try {
            View rootViewFromView = ViewUtil.getRootViewFromView(J());
            if (this.v == null && rootViewFromView != null) {
                com.sigmob.sdk.base.views.q qVar = new com.sigmob.sdk.base.views.q(rootViewFromView.getContext(), this.b);
                this.v = qVar;
                qVar.a(new q.b() {
                    @Override
                    public void a() {
                        if (w.this.v != null) {
                            w.this.v.dismiss();
                            w.this.v.c();
                            w.this.v = null;
                            w.this.w = false;
                        }
                        w.this.b.getClickCommon().click_scene = "preview";
                        if (w.this.h != null) {
                            w.this.r().c();
                        }
                        w.this.j().a(com.sigmob.sdk.base.common.a.g, 0);
                    }

                    @Override
                    public void a(String str, String str2) {
                        if (w.this.b != null) {
                            w.this.b.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
                            w.this.b.getClickCommon().click_scene = "appinfo";
                            w.this.b.getClickCommon().is_final_click = true;
                            w.this.x().a(com.sigmob.sdk.base.a.e, str, str2, true);
                        }
                    }

                    @Override
                    public void b() {
                        if (w.this.h != null) {
                            w.this.r().a();
                        }
                        w.this.j().a(com.sigmob.sdk.base.common.a.f, 0);
                    }
                });
            }
            if (this.v == null || !this.v.a() || this.w) {
                return;
            }
            this.b.getClickCommon().click_area = "appinfo";
            this.v.show();
            this.w = true;
        } catch (Exception e2) {
            SigmobLog.e("openFourElements fail:" + e2.getMessage());
        }
    }

    private View J() {
        View view;
        l lVar = this.i;
        if (lVar == null || (view = (View) lVar.getParent()) == null) {
            return null;
        }
        return view;
    }

    private boolean K() {
        return this.b.getAd().expired_time.intValue() != 0 && System.currentTimeMillis() - this.b.getCreate_time() > ((long) this.b.getAdExpiredTime().intValue());
    }

    private boolean L() {
        return (TextUtils.isEmpty(this.b.getHtmlData()) && TextUtils.isEmpty(this.b.getHtmlUrl())) ? false : true;
    }

    private View a(HashSet<View> hashSet, MotionEvent motionEvent) {
        if (hashSet == null) {
            return null;
        }
        for (View view : hashSet) {
            if (ViewUtil.isPointInView(view, motionEvent)) {
                return view;
            }
        }
        return null;
    }

    private View a(List<View> list, MotionEvent motionEvent) {
        if (list == null) {
            return null;
        }
        for (View view : list) {
            if (ViewUtil.isPointInView(view, motionEvent)) {
                return view;
            }
        }
        return null;
    }

    private n a(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof n) {
                return (n) childAt;
            }
        }
        return null;
    }

    private void a(int i, MotionEvent motionEvent) {
        boolean z;
        com.sigmob.sdk.base.common.f.b(this.b);
        TouchLocation touchLocation = TouchLocation.getTouchLocation(J(), motionEvent);
        TouchLocation touchLocation2 = TouchLocation.getTouchLocation(J(), this.n);
        this.b.getClickCommon().down = touchLocation2;
        this.b.getClickCommon().up = touchLocation2;
        this.b.getClickCommon().click_scene = "preview";
        if (i == 1) {
            this.b.getClickCommon().click_area = "appinfo";
            this.b.getClickCommon().is_final_click = false;
            j().a(com.sigmob.sdk.base.common.a.c, 0);
            I();
            return;
        }
        if (i == 2) {
            boolean zL = L();
            this.b.getClickCommon().click_area = ClickCommon.CLICK_AREA_MATERIAL;
            if (zL) {
                this.b.getClickCommon().is_final_click = false;
                j().a(com.sigmob.sdk.base.common.a.c, 0);
                y();
                return;
            }
            z = true;
        } else if (i != 3) {
            return;
        } else {
            z = false;
        }
        if (!z) {
            this.b.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
        }
        if (this.a.getAdPatternType() == 1 || this.b.getInteractionType() != 2) {
            this.b.getClickCommon().is_final_click = true;
            x().a(H(), touchLocation2, touchLocation, com.sigmob.sdk.base.a.e, this.b);
        } else {
            this.b.getClickCommon().is_final_click = false;
            j().a(com.sigmob.sdk.base.common.a.c, 0);
            I();
        }
    }

    public static void a(View view, int i, int i2) {
        ViewGroup.LayoutParams layoutParams;
        if (view.getParent() instanceof FrameLayout) {
            FrameLayout.LayoutParams layoutParams2 = (FrameLayout.LayoutParams) view.getLayoutParams();
            layoutParams2.width = i;
            layoutParams2.height = i2;
            layoutParams = layoutParams2;
        } else if (view.getParent() instanceof RelativeLayout) {
            RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) view.getLayoutParams();
            layoutParams3.width = i;
            layoutParams3.height = i2;
            layoutParams = layoutParams3;
        } else {
            if (!(view.getParent() instanceof LinearLayout)) {
                return;
            }
            LinearLayout.LayoutParams layoutParams4 = (LinearLayout.LayoutParams) view.getLayoutParams();
            layoutParams4.width = i;
            layoutParams4.height = i2;
            layoutParams = layoutParams4;
        }
        view.setLayoutParams(layoutParams);
        view.requestLayout();
    }

    private boolean a(MotionEvent motionEvent) {
        n nVar = this.h;
        if (nVar != null) {
            return nVar.a(motionEvent);
        }
        return false;
    }

    private l b(ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            View childAt = viewGroup.getChildAt(i);
            if (childAt instanceof l) {
                return (l) childAt;
            }
        }
        return null;
    }

    public Bitmap A() {
        return this.u;
    }

    public void B() {
        p pVarR;
        if (this.r || (pVarR = r()) == null) {
            return;
        }
        pVarR.c();
    }

    public void C() {
        p pVarR;
        if (this.r || (pVarR = r()) == null) {
            return;
        }
        this.z = true;
        pVarR.a();
    }

    public void D() {
        n nVar;
        if (this.s != null && (nVar = this.h) != null) {
            ViewParent parent = nVar.getParent();
            if (parent != null) {
                ((ViewGroup) parent).removeView(this.h);
            }
            this.s.removeAllViews();
            ViewGroup.LayoutParams layoutParams = this.t;
            if (layoutParams != null) {
                this.s.addView(this.h, layoutParams);
            } else {
                this.s.addView(this.h);
            }
            if (!this.k.contains(this.h)) {
                this.k.add(this.h);
            }
        }
        this.s = null;
        this.t = null;
    }

    public void E() {
        p pVarR;
        if (this.r || (pVarR = r()) == null) {
            return;
        }
        pVarR.b();
    }

    public void F() {
        p pVarR;
        if (this.r || (pVarR = r()) == null) {
            return;
        }
        pVarR.d();
    }

    @Override
    public void a() {
        if (x() != null) {
            x().a(H(), this.b);
        }
    }

    public void a(View view, List<View> list, List<View> list2, View view2, NativeADEventListener nativeADEventListener) {
        l lVar;
        ViewGroup.LayoutParams layoutParams;
        if (view == null) {
            if (nativeADEventListener != null) {
                nativeADEventListener.onAdError(WindAdError.ERROR_SIGMOB_ADCONTAINER_IS_NULL);
                return;
            }
            return;
        }
        if (!(view instanceof ViewGroup)) {
            if (nativeADEventListener != null) {
                nativeADEventListener.onAdError(WindAdError.ERROR_SIGMOB_ADCONTAINER_NOT_VIEWGROUP);
                return;
            }
            return;
        }
        if (view2 != null) {
            if (this.x == null) {
                a aVar = new a(view2.getContext(), this.b);
                this.x = aVar;
                aVar.a(this);
            }
            view2.setOnTouchListener(new View.OnTouchListener() {
                @Override
                public boolean onTouch(View view3, MotionEvent motionEvent) {
                    if (motionEvent.getAction() == 1 && w.this.x != null) {
                        w.this.x.a();
                    }
                    return true;
                }
            });
        }
        ViewGroup viewGroup = (ViewGroup) view;
        x().a(new com.sigmob.sdk.base.common.x() {
            @Override
            public void a(boolean z, com.sigmob.sdk.base.a aVar2) {
                com.sigmob.sdk.base.common.ab abVarJ;
                if (w.this.p != null) {
                    w.this.p.onAdClicked();
                }
                if (z && (abVarJ = w.this.j()) != null) {
                    abVarJ.a(com.sigmob.sdk.base.common.a.c, 0);
                }
            }
        });
        this.j = list2;
        List<View> list3 = this.I;
        if (list3 != null) {
            this.k.removeAll(list3);
        }
        this.I = list;
        this.p = nativeADEventListener;
        o().a((Map<String, Object>) null, this.b);
        com.sigmob.sdk.base.common.f.e().a(this.b, new f.b() {
            @Override
            public void a(BaseAdUnit baseAdUnit) {
            }

            @Override
            public void a(BaseAdUnit baseAdUnit, String str) {
            }
        });
        l lVar2 = this.i;
        if (lVar2 == null) {
            l lVarB = b(viewGroup);
            this.i = lVarB;
            if (lVarB == null) {
                lVar = new l(H());
                this.i = lVar;
                layoutParams = new ViewGroup.LayoutParams(0, 0);
            }
            this.k.addAll(this.I);
            this.i.setAdVisibilityStatusChangeListener(this);
            this.i.a(x().s(), x().t());
        }
        ViewUtil.removeFromParent(lVar2);
        lVar = this.i;
        layoutParams = new ViewGroup.LayoutParams(0, 0);
        viewGroup.addView(lVar, layoutParams);
        this.k.addAll(this.I);
        this.i.setAdVisibilityStatusChangeListener(this);
        this.i.a(x().s(), x().t());
    }

    public void a(final ViewGroup viewGroup, final WindNativeAdData.NativeADMediaListener nativeADMediaListener) {
        if (viewGroup == null) {
            return;
        }
        final n nVarA = a(viewGroup);
        if (nVarA != null) {
            this.h = nVarA;
        } else {
            ViewUtil.removeFromParent(this.h);
            this.h = new n(viewGroup.getContext());
        }
        viewGroup.post(new Runnable() {
            @Override
            public void run() {
                int width = viewGroup.getWidth();
                int height = viewGroup.getHeight();
                int iP = w.this.p();
                DisplayMetrics displayMetrics = ClientMetadata.getInstance().getDisplayMetrics();
                int iMax = Math.max(displayMetrics.widthPixels, displayMetrics.heightPixels) / 2;
                int iU = w.this.u();
                Integer num = (Integer) w.g.get(Integer.valueOf(viewGroup.hashCode()));
                if (num != null) {
                    height = num.intValue();
                } else {
                    w.g.put(Integer.valueOf(viewGroup.hashCode()), Integer.valueOf(viewGroup.getHeight()));
                }
                if (height == 0) {
                    w.a(viewGroup, width, (int) (((double) width) / (((double) iP) / ((double) Math.min(iU, iMax)))));
                }
                if (nVarA == null) {
                    ViewUtil.removeFromParent(w.this.h);
                    viewGroup.addView(w.this.h);
                }
            }
        });
        if (!this.k.contains(this.h)) {
            this.k.add(this.h);
        }
        if (!this.b.equals(this.h.getAdUnit())) {
            this.h.a(this);
        }
        final p sigVideoAdController = this.h.getSigVideoAdController();
        if (sigVideoAdController != null) {
            sigVideoAdController.a(new h() {
                @Override
                public void a() {
                    w.this.j().a(com.sigmob.sdk.base.common.a.U, 0);
                }

                @Override
                public void a(long j, long j2) {
                    w.this.b.getVideoCommon().end_time = sigVideoAdController.j();
                    b bVarX = w.this.x();
                    if (bVarX != null) {
                        for (com.sigmob.sdk.base.common.g gVar : bVarX.a(j, j2)) {
                            w.this.j().a(gVar.p(), sigVideoAdController.j());
                            gVar.l();
                        }
                    }
                }

                @Override
                public void onVideoCompleted() {
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoCompleted();
                    }
                    w.this.b.getVideoCommon().end_time = sigVideoAdController.e();
                    w.this.b.getVideoCommon().is_last = 1;
                    w.this.j().a(com.sigmob.sdk.base.common.a.r, sigVideoAdController.j());
                    w.this.j().a(com.sigmob.sdk.base.common.a.T, 0);
                    w.this.C = false;
                    w.this.z = false;
                }

                @Override
                public void onVideoError(WindAdError windAdError) {
                    w.this.z = false;
                    w.this.C = false;
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoError(windAdError);
                    }
                }

                @Override
                public void onVideoLoad() {
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoLoad();
                    }
                }

                @Override
                public void onVideoPause() {
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoPause();
                    }
                    w.this.C = true;
                    w.this.j().a(com.sigmob.sdk.base.common.a.R, 0);
                    w.this.j().a(com.sigmob.sdk.base.common.a.T, 0);
                }

                @Override
                public void onVideoResume() {
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoResume();
                    }
                    w.this.C = false;
                    w.this.b.getVideoCommon().type = 2;
                    w.this.b.getVideoCommon().is_first = 0;
                    w.this.b.getVideoCommon().begin_time = sigVideoAdController.j();
                    w.this.z = false;
                    w.this.j().a(com.sigmob.sdk.base.common.a.Q, sigVideoAdController.j());
                }

                @Override
                public void onVideoStart() {
                    View viewJ = w.this.J();
                    if (viewJ != null) {
                        w.this.b.setAdSize(viewJ.getWidth(), viewJ.getHeight());
                    }
                    w.this.b.getVideoCommon().video_time = sigVideoAdController.e();
                    w.this.b.getVideoCommon().is_first = 1;
                    w.this.b.getVideoCommon().is_last = 0;
                    w.this.b.getVideoCommon().end_time = 0;
                    w.this.b.getVideoCommon().is_auto_play = w.this.x().u() ? 1 : 2;
                    if (w.this.r) {
                        w.this.b.getVideoCommon().scene = 3;
                    } else {
                        w.this.b.getVideoCommon().scene = 1;
                    }
                    if (w.this.B) {
                        w.this.b.getVideoCommon().type = 1;
                        w.this.B = false;
                    } else {
                        w.this.b.getVideoCommon().type = 3;
                    }
                    WindNativeAdData.NativeADMediaListener nativeADMediaListener2 = nativeADMediaListener;
                    if (nativeADMediaListener2 != null) {
                        nativeADMediaListener2.onVideoStart();
                    }
                    w.this.z = false;
                    w.this.C = false;
                    w.this.j().a(com.sigmob.sdk.base.common.a.Q, 0);
                }
            });
        }
    }

    public void a(BaseAdUnit baseAdUnit, WindNativeAdData windNativeAdData) {
        this.b = baseAdUnit;
        this.a = windNativeAdData;
        com.sigmob.sdk.base.common.f.a().getBitmap(k().getAd_source_logo(), new ImageManager.BitmapLoadedListener() {
            @Override
            public void onBitmapLoadFailed() {
            }

            @Override
            public void onBitmapLoaded(Bitmap bitmap) {
                w.this.u = bitmap;
            }
        });
    }

    public void a(WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback) {
        this.L = dislikeInteractionCallback;
    }

    public void a(HashSet<View> hashSet, View.OnTouchListener onTouchListener) {
        if (hashSet != null) {
            for (View view : hashSet) {
                view.setOnClickListener(null);
                view.setOnTouchListener(null);
                view.setOnTouchListener(onTouchListener);
            }
        }
    }

    public void a(List<ImageView> list, int i) {
        List<SigImage> imageUrlList = k().getImageUrlList();
        if (list == null || imageUrlList == null) {
            return;
        }
        int iMin = Math.min(list.size(), imageUrlList.size());
        for (int i2 = 0; i2 < iMin; i2++) {
            SigImage sigImage = imageUrlList.get(i2);
            ImageView imageView = list.get(i2);
            if (!this.k.contains(imageView)) {
                this.k.add(imageView);
            }
            List<View> list2 = this.G;
            if (list2 == null) {
                this.G = new ArrayList();
            } else {
                list2.clear();
            }
            this.G.add(imageView);
            com.sigmob.sdk.base.common.f.a().load(sigImage.imageUrl).placeholder(i).error(i).into(imageView);
        }
    }

    public void a(List<View> list, View.OnTouchListener onTouchListener) {
        if (list != null) {
            for (View view : list) {
                view.setOnClickListener(null);
                view.setOnTouchListener(null);
                view.setOnTouchListener(onTouchListener);
            }
        }
    }

    @Override
    public void a(boolean z) {
        if (this.y) {
            return;
        }
        if (!this.r) {
            com.sigmob.sdk.base.common.f.e().d(this.b);
            if (z) {
                NativeADEventListener nativeADEventListener = this.p;
                if (nativeADEventListener != null) {
                    nativeADEventListener.onAdExposed();
                }
                j().a(com.sigmob.sdk.base.common.a.O, 0);
            }
        }
        this.y = z;
    }

    @Override
    public void b() {
        if (x() != null) {
            x().b(H(), this.b);
        }
    }

    @Override
    public void b(BaseAdUnit baseAdUnit) {
        n nVar = this.h;
        if (nVar != null) {
            ViewGroup.LayoutParams layoutParams = ((View) nVar.getParent()).getLayoutParams();
            SigmobLog.d("visibilityStatusChange() called with: isVisible = [" + layoutParams.width + Constants.COLON_SEPARATOR + layoutParams.height + "]");
        }
    }

    @Override
    public void b(BaseAdUnit baseAdUnit, String str) {
    }

    public void b(boolean z) {
        p pVarR;
        if (this.r || (pVarR = r()) == null) {
            return;
        }
        pVarR.a(z);
    }

    @Override
    public void c() {
        SigmobLog.d("----------onAdDetailShow----------");
        if (x() != null) {
            x().c(H(), this.b);
        }
        this.r = true;
        NativeADEventListener nativeADEventListener = this.p;
        if (nativeADEventListener != null) {
            nativeADEventListener.onAdDetailShow();
        }
    }

    @Override
    public void c(BaseAdUnit baseAdUnit) {
    }

    @Override
    public void d() {
    }

    @Override
    public void d(BaseAdUnit baseAdUnit) {
    }

    @Override
    public void e() {
        this.r = false;
        NativeADEventListener nativeADEventListener = this.p;
        if (nativeADEventListener != null) {
            nativeADEventListener.onAdDetailDismiss();
        }
        if (x() != null) {
            x().d(H(), this.b);
        }
        D();
        j jVar = this.m;
        if (jVar != null) {
            jVar.setVisibility(0);
        }
        c cVar = this.l;
        if (cVar != null) {
            cVar.b(this.b);
        }
    }

    @Override
    public void e(BaseAdUnit baseAdUnit) {
    }

    @Override
    public void f() {
        if (this.D) {
            r().a();
            SigmobLog.d("-----------onAdViewPauseImpression---------");
            this.D = false;
        }
    }

    @Override
    public void g() {
        n nVar = this.h;
        if (nVar == null || nVar.getParent() == null || this.r || this.D || this.z || !x().u()) {
            return;
        }
        this.D = true;
        r().c();
        SigmobLog.d("------------onAdViewStartImpression------------");
    }

    @Override
    public void h() {
        if (this.r || H() == null || !this.E) {
            return;
        }
        HashSet<View> hashSet = this.k;
        if (hashSet != null) {
            hashSet.clear();
        }
        this.E = false;
        SigmobLog.d("------------onAdViewRemoved----------" + hashCode());
        p pVarR = r();
        if (pVarR != null) {
            pVarR.a();
        }
        this.D = false;
        l lVar = this.i;
        if (lVar != null && lVar.hasWindowFocus()) {
            this.y = false;
        }
        com.sigmob.sdk.base.common.ab abVarJ = j();
        if (abVarJ != null) {
            abVarJ.a(com.sigmob.sdk.base.common.a.S, 0);
        }
        if (this.B || this.C || abVarJ == null) {
            return;
        }
        abVarJ.a(com.sigmob.sdk.base.common.a.T, 0);
    }

    @Override
    public void i() {
        if (this.E || this.r) {
            return;
        }
        this.E = true;
        SigmobLog.d("----------onAdViewShow------------" + hashCode());
        this.z = false;
        this.D = false;
        View viewJ = J();
        if (viewJ != null) {
            x().a(ViewUtil.getActivityFromViewTop(viewJ), this.b, (q.b) null);
            viewJ.setOnTouchListener(this);
        }
        n nVar = this.h;
        if (nVar != null && !this.k.contains(nVar)) {
            this.k.add(this.h);
        } else if (this.G != null) {
            if (this.k.isEmpty()) {
                this.k.addAll(this.G);
            } else {
                for (View view : this.G) {
                    if (!this.k.contains(view)) {
                        this.k.add(view);
                    }
                }
            }
        }
        this.k.addAll(this.I);
        a(this.j, this);
        com.sigmob.sdk.base.common.ab abVarJ = j();
        if (abVarJ != null) {
            abVarJ.a(com.sigmob.sdk.base.common.a.a, 0);
        }
    }

    public com.sigmob.sdk.base.common.ab j() {
        BaseAdUnit baseAdUnit = this.b;
        if (baseAdUnit == null) {
            return null;
        }
        com.sigmob.sdk.base.common.ab sessionManager = baseAdUnit.getSessionManager();
        if (sessionManager != null) {
            return sessionManager;
        }
        e eVar = new e();
        eVar.a(this.b);
        return eVar;
    }

    @Override
    public BaseAdUnit k() {
        return this.b;
    }

    @Override
    public WindNativeAdData l() {
        return this.a;
    }

    @Override
    public j m() {
        if (this.m == null && this.b.getadPrivacy() != null) {
            j jVar = new j(H());
            this.m = jVar;
            jVar.setOnTouchListener(this);
            this.m.a(this.b.getAppVersion(), this.b.getCompanyName());
        }
        return this.m;
    }

    public boolean n() {
        c cVar = this.l;
        if (cVar != null) {
            return cVar.a(this.b);
        }
        return false;
    }

    public c o() {
        if (this.l == null) {
            this.l = new c(this);
        }
        return this.l;
    }

    @Override
    public void onCancel() {
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.L;
        if (dislikeInteractionCallback != null) {
            dislikeInteractionCallback.onCancel();
        }
    }

    @Override
    public void onClick(View view) {
    }

    @Override
    public void onSelected(int i, String str, boolean z) {
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.L;
        if (dislikeInteractionCallback != null) {
            dislikeInteractionCallback.onSelected(i, str, z);
        }
    }

    @Override
    public void onShow() {
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.L;
        if (dislikeInteractionCallback != null) {
            dislikeInteractionCallback.onShow();
        }
    }

    @Override
    public boolean onTouch(View view, MotionEvent motionEvent) {
        boolean z = false;
        if (motionEvent == null) {
            return false;
        }
        if ((motionEvent.getAction() != 0 || this.H <= 0 || System.currentTimeMillis() - this.H >= 500) && this.b != null) {
            if (motionEvent.getAction() != 1) {
                this.H = System.currentTimeMillis();
                this.n = motionEvent;
                return true;
            }
            this.b.getClickCommon().click_scene = "preview";
            if (view == this.m) {
                SigmobLog.d("click mSigAppInfoView");
                a(1, motionEvent);
                return true;
            }
            SigmobLog.d("click " + view);
            if ((this.j.contains(view) ? view : a(this.j, motionEvent)) != null) {
                SigmobLog.d("click ctaClickView");
                this.b.getClickCommon().click_scene = "preview";
                this.b.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
                a(3, motionEvent);
                return true;
            }
            if (!this.k.contains(view)) {
                view = a(this.k, motionEvent);
            }
            if (view != null) {
                SigmobLog.d("click mCreativeViews");
                n nVar = this.h;
                if (nVar != null && nVar.a(motionEvent)) {
                    z = true;
                }
                a(z ? 3 : 2, motionEvent);
                return true;
            }
        }
        return false;
    }

    public int p() {
        int width;
        View viewJ = J();
        return (this.h == null || viewJ == null || (width = viewJ.getWidth()) <= 0) ? TTVfConstant.EXT_PLUGIN_UNINSTALL : width;
    }

    public View q() {
        return this.h;
    }

    public p r() {
        if (q() != null) {
            return this.h.getSigVideoAdController();
        }
        return null;
    }

    public double s() {
        if (r() != null) {
            return r0.e();
        }
        return 0.0d;
    }

    public double t() {
        if (r() != null) {
            return r0.f();
        }
        return 0.0d;
    }

    public int u() {
        View viewJ = J();
        if (q() == null || viewJ == null || viewJ.getWidth() <= 0) {
            return 720;
        }
        return (int) (((double) viewJ.getWidth()) / this.b.getAdPercent());
    }

    public void v() {
        a(this.k, (View.OnTouchListener) null);
        a(this.j, (View.OnTouchListener) null);
        this.k = null;
        this.j = null;
        this.I = null;
        this.p = null;
        this.c = null;
    }

    public void w() {
        SigmobLog.i(UserInterface.FUNCTION_DESTROY + this.b.getRequestId());
        v();
        n nVar = this.h;
        if (nVar != null) {
            ViewUtil.removeFromParent(nVar);
            this.h.c();
            this.h = null;
        }
        BaseAdUnit baseAdUnit = this.b;
        if (baseAdUnit != null && baseAdUnit.getSessionManager() != null) {
            j().a(com.sigmob.sdk.base.common.a.S, 0);
            j().a();
        }
        com.sigmob.sdk.base.common.f.e().d(this.b);
        com.sigmob.sdk.base.views.q qVar = this.v;
        if (qVar != null) {
            qVar.dismiss();
            this.v.c();
            this.v = null;
        }
        r rVar = this.x;
        if (rVar != null && (rVar instanceof a)) {
            ((a) rVar).b();
            this.x = null;
            this.L = null;
        }
        l lVar = this.i;
        if (lVar != null) {
            lVar.setAdVisibilityStatusChangeListener(null);
            ViewUtil.removeFromParent(this.i);
            this.i = null;
        }
        c cVar = this.l;
        if (cVar != null) {
            cVar.b(this.b);
            this.l = null;
        }
        x().k();
    }

    @Override
    public b x() {
        if (this.o == null) {
            this.o = (b) this.b.getAdConfig();
        }
        return this.o;
    }

    public void y() {
        Bundle bundle = new Bundle();
        if (this.h != null && x().l()) {
            z zVar = new z();
            int[] iArr = new int[2];
            this.h.getLocationOnScreen(iArr);
            zVar.a(iArr[0]);
            zVar.b(iArr[1]);
            zVar.c(this.h.getMeasuredWidth());
            zVar.d(this.h.getMeasuredHeight());
            bundle.putParcelable("attr", zVar);
            this.s = (ViewGroup) this.h.getParent();
            this.t = this.h.getLayoutParams();
            u.a(this.h);
            SigMacroCommon macroCommon = this.b.getMacroCommon();
            if (macroCommon != null) {
                macroCommon.addMarcoKey(SigMacroCommon._SCENE_, "3");
            }
            this.r = true;
        }
        j jVar = this.m;
        if (jVar != null) {
            jVar.setVisibility(4);
        }
        o().a(this.b, bundle);
    }

    public String z() {
        return k().getCTAText();
    }
}
