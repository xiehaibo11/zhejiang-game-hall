package com.sigmob.sdk.nativead;

import android.app.Activity;
import android.content.Context;
import android.content.res.Configuration;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewTreeObserver;
import android.view.animation.AlphaAnimation;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.ClientMetadata;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.ClickCommon;
import com.sigmob.sdk.base.models.IntentActions;
import com.sigmob.sdk.base.models.PlacementType;
import com.sigmob.sdk.base.views.q;
import com.sigmob.sdk.mraid.a;
import com.sigmob.sdk.mraid.d;
import com.sigmob.windad.WindAdError;
import com.sigmob.windad.natives.WindNativeAdData;
import java.net.URI;
import org.json.JSONObject;

public class u extends com.sigmob.sdk.base.common.i {
    private static n g;
    public final long f;
    private z h;
    private z i;
    private RelativeLayout j;
    private FrameLayout k;
    private BaseAdUnit l;
    private b m;
    private com.sigmob.sdk.mraid.d n;
    private View o;
    private WindNativeAdData p;
    private APKStatusBroadcastReceiver q;
    private ImageView r;
    private com.sigmob.sdk.base.views.q s;
    private boolean t;
    private boolean u;

    public u(Activity activity, BaseAdUnit baseAdUnit, Bundle bundle, Bundle bundle2, String str, com.sigmob.sdk.base.common.j jVar) {
        super(activity, str, jVar);
        this.f = 300L;
        this.t = false;
        this.l = baseAdUnit;
        b bVar = (b) baseAdUnit.getAdConfig();
        this.m = bVar;
        bVar.a(k(), this.l, (q.b) null);
        this.h = (z) bundle.getParcelable("attr");
        h().a(1);
        int iA = com.sigmob.sdk.base.d.a();
        if (iA != 0) {
            k().getTheme().applyStyle(iA, true);
        }
    }

    private void a(Context context) {
        if (this.r != null) {
            return;
        }
        ImageView imageView = new ImageView(context);
        this.r = imageView;
        imageView.setImageBitmap(com.sigmob.sdk.base.views.o.e.a());
        this.r.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.r.setImageAlpha(127);
        this.r.setClickable(true);
        this.r.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                u.this.h().onBackPressed();
            }
        });
        int iDipsToIntPixels = Dips.dipsToIntPixels(20.0f, this.b);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(iDipsToIntPixels, iDipsToIntPixels);
        layoutParams.addRule(10);
        layoutParams.addRule(9);
        int i = iDipsToIntPixels / 2;
        layoutParams.setMargins(i, i, 0, 0);
        RelativeLayout relativeLayout = this.j;
        if (relativeLayout != null) {
            relativeLayout.addView(this.r, layoutParams);
        }
    }

    public static void a(i iVar) {
        if (iVar instanceof n) {
            g = (n) iVar;
        }
    }

    private int n() {
        DisplayMetrics displayMetrics = ClientMetadata.getInstance().getDisplayMetrics();
        return Math.min((int) (((double) Math.min(displayMetrics.widthPixels, displayMetrics.heightPixels)) / this.l.getAdPercent()), Math.max(displayMetrics.heightPixels, displayMetrics.widthPixels) / 2);
    }

    private void o() {
        ImageView imageView = this.r;
        if (imageView != null) {
            imageView.setVisibility(4);
        }
    }

    private void p() {
        if (this.r == null) {
            a(k());
        }
        this.r.setVisibility(0);
    }

    private void q() {
        this.u = true;
        if (g == null) {
            h().a();
            return;
        }
        new aa(this.k, this.i, this.h, 300L).a();
        this.j.setVisibility(8);
        this.k.postDelayed(new Runnable() {
            @Override
            public void run() {
                if (u.g != null) {
                    u.g.setUIStyle(f.a);
                }
                u.this.h().a();
            }
        }, 300L);
    }

    public com.sigmob.sdk.base.common.ab a() {
        com.sigmob.sdk.base.common.ab sessionManager = this.l.getSessionManager();
        if (sessionManager != null) {
            return sessionManager;
        }
        e eVar = new e();
        eVar.a(this.l);
        return eVar;
    }

    @Override
    public void a(Configuration configuration) {
    }

    @Override
    public void a(Bundle bundle) {
    }

    @Override
    public void b() {
        j().removeAllViews();
        h().onSetContentView(j());
        this.l.getClickCommon().click_scene = "template";
        RelativeLayout relativeLayout = new RelativeLayout(k());
        this.j = relativeLayout;
        relativeLayout.setBackgroundColor(-1);
        this.o = l();
        com.sigmob.sdk.mraid.d dVar = this.n;
        if (dVar != null) {
            dVar.a(k());
        }
        this.j.addView(this.o, new RelativeLayout.LayoutParams(-1, -1));
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-1, -1);
        n nVar = g;
        if (nVar != null) {
            WindNativeAdData nativeAdUnit = nVar.getNativeAdUnit();
            this.p = nativeAdUnit;
            if (nativeAdUnit != null) {
                layoutParams.setMargins(0, n(), 0, 0);
            }
        }
        j().addView(this.j, layoutParams);
        if (g != null) {
            this.k = new FrameLayout(k());
            g.setBackClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    u.this.h().onBackPressed();
                }
            });
            j().addView(this.k, new RelativeLayout.LayoutParams(-1, n()));
            g.getSigVideoAdController().c();
            this.k.getViewTreeObserver().addOnPreDrawListener(new ViewTreeObserver.OnPreDrawListener() {
                @Override
                public boolean onPreDraw() {
                    if (u.g == null || u.this.k == null) {
                        return false;
                    }
                    u.this.k.getViewTreeObserver().removeOnPreDrawListener(this);
                    u.g.setUIStyle(f.b);
                    ViewGroup videoContainer = u.g.getVideoContainer();
                    if (videoContainer != null) {
                        ViewUtil.removeFromParent(videoContainer);
                        u.this.k.addView(videoContainer, new FrameLayout.LayoutParams(-1, -1));
                    }
                    u.this.i = new z();
                    int[] iArr = new int[2];
                    u.this.k.getLocationOnScreen(iArr);
                    u.this.i.a(iArr[0]);
                    u.this.i.b(0);
                    u.this.i.c(u.this.k.getMeasuredWidth());
                    u.this.i.d(u.this.k.getMeasuredHeight());
                    new aa(u.this.k, u.this.h, u.this.i, 300L).a();
                    u.this.h.b(u.this.h.b() - iArr[1]);
                    if (u.this.j != null) {
                        AlphaAnimation alphaAnimation = new AlphaAnimation(0.0f, 1.0f);
                        alphaAnimation.setDuration(300L);
                        u.this.j.setAnimation(alphaAnimation);
                        alphaAnimation.start();
                    }
                    return true;
                }
            });
        }
        a(IntentActions.ACTION_NATIVE_TEMPLIE_SHOW, 100);
    }

    @Override
    public void c() {
        p sigVideoAdController;
        n nVar = g;
        if (nVar == null || this.u || (sigVideoAdController = nVar.getSigVideoAdController()) == null) {
            return;
        }
        sigVideoAdController.a();
    }

    @Override
    public void d() {
        p sigVideoAdController;
        n nVar = g;
        if (nVar != null && (sigVideoAdController = nVar.getSigVideoAdController()) != null) {
            sigVideoAdController.c();
        }
        com.sigmob.sdk.mraid.d dVar = this.n;
        if (dVar != null) {
            dVar.c();
        }
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override
    public void e() {
        APKStatusBroadcastReceiver aPKStatusBroadcastReceiver = this.q;
        if (aPKStatusBroadcastReceiver != null) {
            aPKStatusBroadcastReceiver.b(aPKStatusBroadcastReceiver);
            this.q = null;
        }
        com.sigmob.sdk.mraid.d dVar = this.n;
        if (dVar != null) {
            dVar.l();
            this.n = null;
        }
        n nVar = g;
        if (nVar != null) {
            nVar.setBackClickListener(null);
            g = null;
        }
        a(IntentActions.ACTION_NATIVE_TEMPLE_DISMISS);
        super.e();
    }

    @Override
    public void f() {
    }

    @Override
    public boolean g() {
        n nVar = g;
        if (nVar != null && nVar.b()) {
            return false;
        }
        q();
        return false;
    }

    public View l() {
        if (this.n == null) {
            this.n = new com.sigmob.sdk.mraid.d(this.b, this.l, PlacementType.INTERSTITIAL);
        }
        this.n.a(new d.a() {
            @Override
            public void a() {
                SigmobLog.d("SigNativeAdLandViewController onEndCardShow()");
            }

            @Override
            public void a(float f) {
                SigmobLog.d("SigNativeAdLandViewController onReward()");
            }

            @Override
            public void a(int i, int i2, int i3, int i4, a.a aVar, boolean z) {
                SigmobLog.i("SigNativeAdLandViewController onResize()");
            }

            @Override
            public void a(View view) {
                SigmobLog.d("SigNativeAdLandViewController onLoaded()");
            }

            @Override
            public void a(WindAdError windAdError) {
                SigmobLog.i("SigNativeAdLandViewController onRenderProcessGone:" + windAdError.toString());
            }

            @Override
            public void a(String str) {
                SigmobLog.i("SigNativeAdLandViewController onCompanionClick:" + str);
                boolean z = true;
                if (!TextUtils.isEmpty(str)) {
                    try {
                        u.this.l.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
                        u.this.l.getClickCommon().is_final_click = true;
                        JSONObject jSONObject = new JSONObject(str);
                        int iOptInt = jSONObject.optInt("type");
                        u.this.n.a(String.valueOf(jSONObject.optInt("x")), String.valueOf(jSONObject.optInt("y")));
                        if (iOptInt != 1) {
                            u.this.a().a(com.sigmob.sdk.base.common.a.c, 0);
                        } else {
                            z = false;
                        }
                    } catch (Exception unused) {
                        u.this.n.a("0", "0");
                        u.this.a().a(com.sigmob.sdk.base.common.a.c, 0);
                    }
                }
                u.this.m.a(com.sigmob.sdk.base.a.a, u.this.n.a(), z);
                u.this.a(IntentActions.ACTION_NATIVE_TEMPLE_CLICK);
            }

            @Override
            public void a(URI uri, int i, String str) {
                boolean z;
                boolean z2;
                boolean z3;
                b bVar;
                com.sigmob.sdk.base.a aVar;
                String string;
                SigmobLog.i("SigNativeAdLandViewController  onOpen:" + uri + "======" + i + "=====" + str);
                if (TextUtils.isEmpty(str)) {
                    z3 = true;
                    z2 = true;
                } else {
                    try {
                        u.this.l.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
                        u.this.l.getClickCommon().is_final_click = true;
                        JSONObject jSONObject = new JSONObject(str);
                        int iOptInt = jSONObject.optInt("type");
                        int iOptInt2 = jSONObject.optInt("x");
                        int iOptInt3 = jSONObject.optInt("y");
                        boolean zOptBoolean = jSONObject.optBoolean("disable_landing");
                        try {
                            z = !jSONObject.optBoolean("feDisable");
                            try {
                                u.this.n.a(String.valueOf(iOptInt2), String.valueOf(iOptInt3));
                                z2 = z;
                                z3 = iOptInt != 1;
                                z = zOptBoolean;
                            } catch (Exception unused) {
                                z = zOptBoolean;
                                z2 = z;
                                z3 = true;
                            }
                        } catch (Exception unused2) {
                            z = true;
                        }
                    } catch (Exception unused3) {
                        z = true;
                    }
                }
                if (z || TextUtils.isEmpty(u.this.l.getLanding_page())) {
                    bVar = u.this.m;
                    aVar = com.sigmob.sdk.base.a.b;
                    string = uri.toString();
                } else {
                    bVar = u.this.m;
                    aVar = com.sigmob.sdk.base.a.b;
                    string = null;
                }
                bVar.a(aVar, string, u.this.n.a(), z3, z2);
                u.this.a(IntentActions.ACTION_NATIVE_TEMPLE_CLICK);
            }

            @Override
            public void a(boolean z) {
                SigmobLog.d("SigNativeAdLandViewController onMute()");
            }

            @Override
            public void b() {
                SigmobLog.d("SigNativeAdLandViewController onShowSkipTime()");
            }

            @Override
            public void b(float f) {
                SigmobLog.d("SigNativeAdLandViewController onSkip()");
            }

            @Override
            public void c() {
                SigmobLog.d("SigNativeAdLandViewController onExpand()");
            }

            @Override
            public void d() {
                SigmobLog.i("SigNativeAdLandViewController onFailedToLoad()");
            }

            @Override
            public void e() {
                SigmobLog.i("SigNativeAdLandViewController onUnload()");
            }

            @Override
            public void f() {
                SigmobLog.i("SigNativeAdLandViewController onOpenFourElements()");
                if (u.this.s == null) {
                    u.this.s = new com.sigmob.sdk.base.views.q(u.this.k(), u.this.l);
                    u.this.s.a(new q.b() {
                        @Override
                        public void a() {
                            if (u.this.s != null) {
                                u.this.s.dismiss();
                                u.this.s.c();
                                u.this.s = null;
                                u.this.t = false;
                            }
                            u.this.l.getClickCommon().click_scene = "template";
                            u.this.a().a(com.sigmob.sdk.base.common.a.g, 0);
                        }

                        @Override
                        public void a(String str, String str2) {
                            u.this.l.getClickCommon().click_area = ClickCommon.CLICK_AREA_BTN;
                            u.this.l.getClickCommon().click_scene = "appinfo";
                            u.this.l.getClickCommon().is_final_click = true;
                            if (u.this.m != null) {
                                u.this.m.a(com.sigmob.sdk.base.a.a, str, str2, true);
                                u.this.a(IntentActions.ACTION_NATIVE_TEMPLE_CLICK);
                            }
                        }

                        @Override
                        public void b() {
                            u.this.a().a(com.sigmob.sdk.base.common.a.f, 0);
                        }
                    });
                }
                if (u.this.s == null || !u.this.s.a() || u.this.t) {
                    return;
                }
                u.this.l.getClickCommon().click_area = "appinfo";
                u.this.l.getClickCommon().is_final_click = false;
                u.this.a().a(com.sigmob.sdk.base.common.a.c, 0);
                u.this.s.show();
                u.this.t = true;
            }

            @Override
            public void g() {
                SigmobLog.i("SigNativeAdLandViewController onClose()");
                u.this.h().onBackPressed();
            }
        });
        if (!TextUtils.isEmpty(this.l.getHtmlUrl())) {
            this.n.b(this.l.getHtmlUrl(), new d.b() {
                @Override
                public void a(com.sigmob.sdk.mraid.o oVar, com.sigmob.sdk.base.common.r rVar) {
                }
            });
        } else if (!TextUtils.isEmpty(this.l.getHtmlData())) {
            this.n.a(this.l.getHtmlData(), new d.b() {
                @Override
                public void a(com.sigmob.sdk.mraid.o oVar, com.sigmob.sdk.base.common.r rVar) {
                }
            });
        }
        this.n.a(new d.e() {
            @Override
            public void a(boolean z) {
                if (z) {
                    u.this.o();
                } else if (u.g == null) {
                    u.this.p();
                }
            }
        });
        return this.n.p();
    }
}
