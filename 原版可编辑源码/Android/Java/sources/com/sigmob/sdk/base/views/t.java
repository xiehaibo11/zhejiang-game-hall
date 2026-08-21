package com.sigmob.sdk.base.views;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.RelativeLayout;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.models.PlacementType;
import com.sigmob.sdk.mraid.a;
import com.sigmob.sdk.mraid.d;
import com.sigmob.windad.WindAdError;
import com.xiaomi.mipush.sdk.Constants;
import java.net.URI;
import java.util.Map;
import org.json.JSONObject;

public class t extends Dialog implements DialogInterface.OnShowListener {
    protected com.sigmob.sdk.base.common.r a;
    private View b;
    private Window c;
    private a d;
    private RelativeLayout e;
    private com.sigmob.sdk.videoAd.a f;
    private BaseAdUnit g;
    private com.sigmob.sdk.mraid.d h;
    private Context i;
    private int j;
    private int k;
    private boolean l;

    public interface a {
        void a();
    }

    public t(Context context, BaseAdUnit baseAdUnit, com.sigmob.sdk.videoAd.a aVar) {
        super(context, com.sigmob.sdk.base.d.e());
        this.c = null;
        this.j = 0;
        this.k = 0;
        this.l = false;
        this.i = context.getApplicationContext();
        this.g = baseAdUnit;
        this.f = aVar;
        this.b = b();
    }

    private void d() {
        Window window = getWindow();
        this.c = window;
        if (window != null) {
            window.setGravity(80);
            int iF = com.sigmob.sdk.base.d.f();
            if (iF != 0) {
                this.c.setWindowAnimations(iF);
            }
            this.c.getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = this.c.getAttributes();
            int i = this.i.getResources().getDisplayMetrics().widthPixels;
            int i2 = this.i.getResources().getDisplayMetrics().heightPixels;
            int i3 = this.k;
            if (i3 - 1 <= i) {
                attributes.width = -1;
            } else {
                attributes.width = i3;
            }
            int i4 = this.j;
            if (i4 - 1 <= i2) {
                attributes.height = -1;
            } else {
                attributes.height = i4;
            }
            SigmobLog.i("RecommendDialog windowDeploy: " + i + "====" + i2 + "====" + attributes.width + "====" + attributes.height);
            this.c.setAttributes(attributes);
        }
    }

    public void a(com.sigmob.sdk.base.common.a aVar) {
        com.sigmob.sdk.base.common.r rVar = this.a;
        if (rVar != null) {
            rVar.a(aVar, 0);
        }
    }

    public void a(a aVar) {
        this.d = aVar;
    }

    public boolean a() {
        if (this.k <= 0 || this.j <= 0) {
            this.l = true;
        }
        return this.l;
    }

    public View b() {
        if (this.h == null) {
            this.h = new com.sigmob.sdk.mraid.d(this.i, this.g, PlacementType.INTERSTITIAL);
        }
        this.h.a(new d.f() {
            @Override
            public void a() {
            }

            @Override
            public void a(Integer num) {
            }

            @Override
            public void a(Map<String, String> map) {
            }

            @Override
            public void b() {
            }

            @Override
            public void b(Map<String, String> map) {
            }

            @Override
            public void c() {
            }

            @Override
            public void d() {
            }

            @Override
            public void e() {
            }

            @Override
            public void f() {
            }

            @Override
            public void g() {
            }

            @Override
            public void h() {
            }
        });
        this.h.a(new d.a() {
            @Override
            public void a() {
                SigmobLog.d("RecommendDialog onEndCardShow()");
            }

            @Override
            public void a(float f) {
                SigmobLog.d("RecommendDialog onReward()");
            }

            @Override
            public void a(int i, int i2, int i3, int i4, a.a aVar, boolean z) {
                int i5 = t.this.i.getResources().getDisplayMetrics().widthPixels;
                int i6 = t.this.i.getResources().getDisplayMetrics().heightPixels;
                SigmobLog.i("RecommendDialog Origin onResize :" + i + "==" + i2 + "==" + i3 + "==" + i4 + "==" + z);
                t tVar = t.this;
                tVar.k = Dips.dipsToIntPixels((float) i, tVar.i);
                t tVar2 = t.this;
                tVar2.j = Dips.dipsToIntPixels((float) i2, tVar2.i);
                int iDipsToIntPixels = Dips.dipsToIntPixels((float) i3, t.this.i);
                int iDipsToIntPixels2 = Dips.dipsToIntPixels((float) i4, t.this.i);
                if (t.this.b != null) {
                    if (!z) {
                        if (iDipsToIntPixels < 0) {
                            iDipsToIntPixels = 0;
                        }
                        if (iDipsToIntPixels > i5) {
                            iDipsToIntPixels = i5;
                        }
                        if (iDipsToIntPixels2 < 0) {
                            iDipsToIntPixels2 = 0;
                        }
                        if (iDipsToIntPixels2 > i6) {
                            iDipsToIntPixels2 = i6;
                        }
                        if (t.this.k + iDipsToIntPixels > i5) {
                            t.this.k = i5 - iDipsToIntPixels;
                        }
                        if (t.this.j + iDipsToIntPixels2 > i6) {
                            t.this.j = i6 - iDipsToIntPixels2;
                        }
                    }
                    SigmobLog.i("RecommendDialog onResize: " + t.this.k + "==" + t.this.j + "==" + iDipsToIntPixels + "==" + iDipsToIntPixels2);
                    if (t.this.k <= 0 || t.this.j <= 0) {
                        t.this.l = true;
                    }
                    t.this.b.setX(iDipsToIntPixels);
                    t.this.b.setY(iDipsToIntPixels2);
                    t.this.b.setLayoutParams(new RelativeLayout.LayoutParams(t.this.k, t.this.j));
                    t.this.b.requestLayout();
                }
            }

            @Override
            public void a(View view) {
                SigmobLog.d("RecommendDialog onLoaded()");
            }

            @Override
            public void a(WindAdError windAdError) {
                SigmobLog.i("RecommendDialog onRenderProcessGone:" + windAdError.toString());
                t.this.l = true;
            }

            @Override
            public void a(String str) {
                SigmobLog.i("RecommendDialog onCompanionClick:" + str);
                boolean z = true;
                if (!TextUtils.isEmpty(str)) {
                    try {
                        JSONObject jSONObject = new JSONObject(str);
                        int iOptInt = jSONObject.optInt("type");
                        t.this.h.a(String.valueOf(jSONObject.optInt("x")), String.valueOf(jSONObject.optInt("y")));
                        if (iOptInt != 1) {
                            t.this.a(com.sigmob.sdk.base.common.a.u);
                        } else {
                            z = false;
                        }
                    } catch (Exception unused) {
                        t.this.h.a("0", "0");
                        t.this.a(com.sigmob.sdk.base.common.a.u);
                    }
                }
                t.this.f.a(com.sigmob.sdk.base.a.b, t.this.h.a(), z);
            }

            @Override
            public void a(URI uri, int i, String str) {
                boolean z;
                boolean z2;
                boolean z3;
                com.sigmob.sdk.videoAd.a aVar;
                com.sigmob.sdk.base.a aVar2;
                String string;
                SigmobLog.i("RecommendDialog  onOpen:" + uri + "======" + i + "=====" + str);
                boolean z4 = false;
                if (TextUtils.isEmpty(str)) {
                    t.this.h.a("0", "0");
                    t.this.a(com.sigmob.sdk.base.common.a.c);
                    z3 = true;
                    z2 = true;
                } else {
                    try {
                        JSONObject jSONObject = new JSONObject(str);
                        int iOptInt = jSONObject.optInt("type");
                        int iOptInt2 = jSONObject.optInt("x");
                        int iOptInt3 = jSONObject.optInt("y");
                        boolean zOptBoolean = jSONObject.optBoolean("disable_landing");
                        try {
                            z = !jSONObject.optBoolean("feDisable");
                            try {
                                t.this.h.a(String.valueOf(iOptInt2), String.valueOf(iOptInt3));
                                if (iOptInt != 1) {
                                    t.this.a(com.sigmob.sdk.base.common.a.c);
                                    z4 = true;
                                }
                                z2 = z;
                                z3 = z4;
                                z4 = zOptBoolean;
                            } catch (Exception unused) {
                                z4 = zOptBoolean;
                                t.this.h.a("0", "0");
                                t.this.a(com.sigmob.sdk.base.common.a.c);
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
                if (z4 || TextUtils.isEmpty(t.this.g.getLanding_page())) {
                    aVar = t.this.f;
                    aVar2 = com.sigmob.sdk.base.a.b;
                    string = uri.toString();
                } else {
                    aVar = t.this.f;
                    aVar2 = com.sigmob.sdk.base.a.b;
                    string = null;
                }
                aVar.a(aVar2, string, t.this.h.a(), z3, z2);
            }

            @Override
            public void a(boolean z) {
                SigmobLog.d("RecommendDialog onMute()");
            }

            @Override
            public void b() {
                SigmobLog.d("RecommendDialog onShowSkipTime()");
            }

            @Override
            public void b(float f) {
                SigmobLog.d("RecommendDialog onSkip()");
            }

            @Override
            public void c() {
                SigmobLog.d("RecommendDialog onExpand()");
            }

            @Override
            public void d() {
                SigmobLog.i("RecommendDialog onFailedToLoad()");
                t.this.l = true;
            }

            @Override
            public void e() {
                SigmobLog.i("RecommendDialog onUnload()");
                t.this.dismiss();
                t.this.a(com.sigmob.sdk.base.common.a.e);
                t.this.c();
            }

            @Override
            public void f() {
            }

            @Override
            public void g() {
                SigmobLog.i("RecommendDialog onClose()");
                t.this.a(com.sigmob.sdk.base.common.a.b);
                if (t.this.d != null) {
                    t.this.d.a();
                }
            }
        });
        if (!TextUtils.isEmpty(this.g.getCloseCardHtmlData())) {
            this.h.a(this.g.getCloseCardHtmlData(), new d.b() {
                @Override
                public void a(com.sigmob.sdk.mraid.o oVar, com.sigmob.sdk.base.common.r rVar) {
                    t tVar = t.this;
                    if (rVar != null) {
                        tVar.a = rVar;
                    } else {
                        tVar.a = new com.sigmob.sdk.base.common.r();
                        t.this.a.a(t.this.g);
                    }
                }
            });
        }
        return this.h.p();
    }

    public void c() {
        com.sigmob.sdk.mraid.d dVar = this.h;
        if (dVar != null) {
            this.d = null;
            dVar.l();
            this.h = null;
        }
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        RelativeLayout relativeLayout = new RelativeLayout(getContext());
        this.e = relativeLayout;
        relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        this.e.setBackgroundColor(0);
        setContentView(this.e);
        setOnShowListener(this);
        SigmobLog.i("RecommendDialog onCreate:" + this.k + Constants.COLON_SEPARATOR + this.j);
        View view = this.b;
        if (view != null) {
            this.e.addView(view);
        }
        setCanceledOnTouchOutside(false);
        setCancelable(true);
        d();
    }

    @Override
    public void onShow(DialogInterface dialogInterface) {
        SigmobLog.i("RecommendDialog  onShow");
        a(com.sigmob.sdk.base.common.a.d);
    }

    @Override
    protected void onStart() {
        super.onStart();
        getWindow().getDecorView().setSystemUiVisibility(6918);
    }
}
