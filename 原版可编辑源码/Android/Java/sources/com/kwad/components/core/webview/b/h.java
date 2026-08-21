package com.kwad.components.core.webview.b;

import android.app.Activity;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.SystemClock;
import android.support.v4.os.EnvironmentCompat;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.kwad.components.core.page.AdWebViewActivityProxy;
import com.kwad.components.core.webview.b.a.p;
import com.kwad.components.core.webview.b.a.s;
import com.kwad.components.core.webview.b.a.t;
import com.kwad.components.core.webview.b.a.u;
import com.kwad.components.core.webview.b.b.m;
import com.kwad.components.core.webview.b.b.n;
import com.kwad.components.core.webview.b.b.y;
import com.kwad.components.core.webview.b.c.d;
import com.kwad.components.core.webview.jshandler.aa;
import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.am;
import com.kwad.components.core.webview.jshandler.ap;
import com.kwad.components.core.webview.jshandler.o;
import com.kwad.components.core.webview.jshandler.q;
import com.kwad.components.core.webview.jshandler.r;
import com.kwad.components.core.webview.jshandler.t;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.components.offline.api.BuildConfig;
import com.kwad.components.offline.api.core.api.ILoggerReporter;
import com.kwad.components.offline.api.tk.ITkOfflineCompo;
import com.kwad.components.offline.api.tk.TKDownloadListener;
import com.kwad.components.offline.api.tk.TkLoggerReporter;
import com.kwad.components.offline.api.tk.model.StyleTemplate;
import com.kwad.components.offline.api.tk.model.report.TKPerformMsg;
import com.kwad.sdk.api.proxy.app.FeedDownloadActivity;
import com.kwad.sdk.commercial.model.WebCloseStatus;
import com.kwad.sdk.components.k;
import com.kwad.sdk.components.l;
import com.kwad.sdk.core.response.model.AdMatrixInfo;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.threads.GlobalThreadPools;
import com.kwad.sdk.export.proxy.AdHttpBodyBuilder;
import com.kwad.sdk.export.proxy.AdHttpFormDataBuilder;
import com.kwad.sdk.utils.ai;
import com.kwad.sdk.utils.au;
import com.kwad.sdk.utils.bj;
import com.kwad.sdk.utils.v;
import java.io.File;
import java.io.UnsupportedEncodingException;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.Future;
import org.json.JSONException;
import org.json.JSONObject;

public class h implements com.kwad.sdk.components.i, com.kwad.sdk.core.webview.d.a.a {
    private static Map<Integer, WeakReference<com.kwad.components.core.webview.b.c.d>> We = new HashMap();
    private long Db;
    private StyleTemplate QO;
    private com.kwad.sdk.core.download.e Tj;
    private com.kwad.components.core.webview.b.c.d VP;
    protected i VQ;
    private com.kwad.sdk.core.webview.c.g VR;
    private com.kwad.components.core.offline.api.b.c VS;
    private Future<?> VT;
    private l VU;
    private p VV;
    private boolean VW;
    private boolean VX;
    private boolean VY;
    private boolean VZ;
    private int Wa;
    private long Wb;
    private long Wc;
    private Map<String, Object> Wd;
    private int Wf;
    protected com.kwad.sdk.core.webview.e Wg;
    private a Wh;
    private com.kwad.sdk.components.j Wi;
    private final Runnable Wj;
    private Activity mActivity;
    private AdTemplate mAdTemplate;
    protected final Context mContext;
    private long mInitTime;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private final y wp;
    protected long xI;

    interface a {
        void onFailed();

        void onSuccess();
    }

    public h(long j, Context context) {
        this.VW = false;
        this.VX = false;
        this.VY = false;
        this.VZ = false;
        this.Wa = 0;
        this.xI = -1L;
        this.Wf = 1000;
        this.Wg = new com.kwad.sdk.core.webview.e();
        this.Wh = new a() {
            @Override
            public final void onFailed() {
                h.this.rM();
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染失败");
            }

            @Override
            public final void onSuccess() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染成功");
            }
        };
        this.Wi = new com.kwad.sdk.components.j() {
            @Override
            public final void a(com.kwad.sdk.components.g gVar) {
                Activity currentActivity = h.this.mActivity;
                if (currentActivity == null) {
                    com.kwad.sdk.core.c.b.AU();
                    currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                }
                if (currentActivity == null || currentActivity.isFinishing()) {
                    gVar.callbackPageStatus(false, "no host activity");
                    return;
                }
                StyleTemplate styleTemplate = new StyleTemplate();
                try {
                    styleTemplate.parseJson(styleTemplate, new JSONObject(gVar.getStyleTemplate()));
                    d.b bVar = new d.b();
                    bVar.setAdTemplate(h.this.rL());
                    bVar.a(styleTemplate);
                    bVar.aO(styleTemplate.templateId);
                    bVar.c(gVar);
                    com.kwad.components.core.webview.b.c.d dVarB = com.kwad.components.core.webview.b.c.d.b(bVar);
                    dVarB.show(currentActivity.getFragmentManager(), "");
                    h.We.put(Integer.valueOf(gVar.getDialogId()), new WeakReference(dVarB));
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                    gVar.callbackPageStatus(false, "template parse failed");
                }
            }

            @Override
            public final void a(com.kwad.sdk.components.h hVar) {
                String message;
                if (hVar.getTemplateString() == null && hVar.getUrl() == null && hVar.getClassName() == null) {
                    message = "intent invalid";
                } else {
                    Activity currentActivity = h.this.mActivity;
                    if (currentActivity == null) {
                        com.kwad.sdk.core.c.b.AU();
                        currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                    }
                    if (currentActivity == null) {
                        hVar.callbackPageStatus(false, "no host activity");
                    }
                    Intent intent = hVar.getIntent();
                    try {
                        if (hVar.getTemplateString() != null) {
                            com.kwad.sdk.service.b.a(FeedDownloadActivity.class, com.kwad.components.core.s.a.a.class);
                            int iQc = com.kwad.components.core.s.a.a.qc();
                            com.kwad.components.core.s.a.a.a(iQc, "native_intent", hVar);
                            AdTemplate adTemplateRL = h.this.rL();
                            if (adTemplateRL != null) {
                                intent.putExtra("tk_ad_template", adTemplateRL.toJson().toString());
                            }
                            intent.putExtra("tk_style_template", hVar.getTemplateString());
                            intent.putExtra("tk_id", iQc);
                        } else if (hVar.getClassName() == null) {
                            intent.setData(Uri.parse(hVar.getUrl()));
                            currentActivity.startActivity(intent);
                            hVar.callbackPageStatus(true, null);
                            return;
                        } else {
                            try {
                                com.kwad.sdk.service.b.a(FeedDownloadActivity.class, Class.forName(hVar.getClassName()));
                            } catch (ClassNotFoundException e) {
                                message = e.getMessage();
                            }
                        }
                        currentActivity.startActivity(intent);
                        hVar.callbackPageStatus(true, null);
                        return;
                    } catch (Throwable th) {
                        message = th.getMessage();
                    }
                    intent.setClass(h.this.mContext, FeedDownloadActivity.class);
                }
                hVar.callbackPageStatus(false, message);
            }

            @Override
            public final void b(com.kwad.sdk.components.g gVar) {
                WeakReference weakReference = (WeakReference) h.We.get(Integer.valueOf(gVar.getDialogId()));
                if (weakReference == null || weakReference.get() == null) {
                    return;
                }
                ((com.kwad.components.core.webview.b.c.d) weakReference.get()).dismiss();
            }
        };
        this.Wj = new Runnable() {
            @Override
            public final void run() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "已经超时" + h.this.VQ.getTkTemplateId());
                h.this.rQ();
                h.a(h.this, true);
                h.this.rM();
            }
        };
        this.mVideoPlayStateListener = new com.kwad.components.core.video.l() {
            private void g(double d) {
                h.this.wp.Xk = false;
                h.this.wp.Xg = false;
                h.this.wp.nM = (int) ((d / 1000.0d) + 0.5d);
                ja();
            }

            private void ja() {
                if (h.this.VV == null || h.this.wp == null) {
                    return;
                }
                h.this.VV.a(h.this.wp);
            }

            @Override
            public final void onMediaPlayCompleted() {
                h.this.wp.Xg = true;
                h.this.wp.Xk = false;
                h.this.wp.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(h.this.rL()));
                ja();
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                h.this.wp.Xk = true;
                h.this.wp.Xg = false;
                ja();
            }

            @Override
            public final void onMediaPlayProgress(long j2, long j3) {
                g(j3);
            }

            @Override
            public final void onMediaPlayStart() {
                g(0.0d);
            }

            @Override
            public final void onMediaPreparing() {
                g(0.0d);
            }
        };
        this.mContext = context;
        this.xI = j;
        this.wp = new y();
    }

    public h(Context context) {
        this.VW = false;
        this.VX = false;
        this.VY = false;
        this.VZ = false;
        this.Wa = 0;
        this.xI = -1L;
        this.Wf = 1000;
        this.Wg = new com.kwad.sdk.core.webview.e();
        this.Wh = new a() {
            @Override
            public final void onFailed() {
                h.this.rM();
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染失败");
            }

            @Override
            public final void onSuccess() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染成功");
            }
        };
        this.Wi = new com.kwad.sdk.components.j() {
            @Override
            public final void a(com.kwad.sdk.components.g gVar) {
                Activity currentActivity = h.this.mActivity;
                if (currentActivity == null) {
                    com.kwad.sdk.core.c.b.AU();
                    currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                }
                if (currentActivity == null || currentActivity.isFinishing()) {
                    gVar.callbackPageStatus(false, "no host activity");
                    return;
                }
                StyleTemplate styleTemplate = new StyleTemplate();
                try {
                    styleTemplate.parseJson(styleTemplate, new JSONObject(gVar.getStyleTemplate()));
                    d.b bVar = new d.b();
                    bVar.setAdTemplate(h.this.rL());
                    bVar.a(styleTemplate);
                    bVar.aO(styleTemplate.templateId);
                    bVar.c(gVar);
                    com.kwad.components.core.webview.b.c.d dVarB = com.kwad.components.core.webview.b.c.d.b(bVar);
                    dVarB.show(currentActivity.getFragmentManager(), "");
                    h.We.put(Integer.valueOf(gVar.getDialogId()), new WeakReference(dVarB));
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                    gVar.callbackPageStatus(false, "template parse failed");
                }
            }

            @Override
            public final void a(com.kwad.sdk.components.h hVar) {
                String message;
                if (hVar.getTemplateString() == null && hVar.getUrl() == null && hVar.getClassName() == null) {
                    message = "intent invalid";
                } else {
                    Activity currentActivity = h.this.mActivity;
                    if (currentActivity == null) {
                        com.kwad.sdk.core.c.b.AU();
                        currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                    }
                    if (currentActivity == null) {
                        hVar.callbackPageStatus(false, "no host activity");
                    }
                    Intent intent = hVar.getIntent();
                    try {
                        if (hVar.getTemplateString() != null) {
                            com.kwad.sdk.service.b.a(FeedDownloadActivity.class, com.kwad.components.core.s.a.a.class);
                            int iQc = com.kwad.components.core.s.a.a.qc();
                            com.kwad.components.core.s.a.a.a(iQc, "native_intent", hVar);
                            AdTemplate adTemplateRL = h.this.rL();
                            if (adTemplateRL != null) {
                                intent.putExtra("tk_ad_template", adTemplateRL.toJson().toString());
                            }
                            intent.putExtra("tk_style_template", hVar.getTemplateString());
                            intent.putExtra("tk_id", iQc);
                        } else if (hVar.getClassName() == null) {
                            intent.setData(Uri.parse(hVar.getUrl()));
                            currentActivity.startActivity(intent);
                            hVar.callbackPageStatus(true, null);
                            return;
                        } else {
                            try {
                                com.kwad.sdk.service.b.a(FeedDownloadActivity.class, Class.forName(hVar.getClassName()));
                            } catch (ClassNotFoundException e) {
                                message = e.getMessage();
                            }
                        }
                        currentActivity.startActivity(intent);
                        hVar.callbackPageStatus(true, null);
                        return;
                    } catch (Throwable th) {
                        message = th.getMessage();
                    }
                    intent.setClass(h.this.mContext, FeedDownloadActivity.class);
                }
                hVar.callbackPageStatus(false, message);
            }

            @Override
            public final void b(com.kwad.sdk.components.g gVar) {
                WeakReference weakReference = (WeakReference) h.We.get(Integer.valueOf(gVar.getDialogId()));
                if (weakReference == null || weakReference.get() == null) {
                    return;
                }
                ((com.kwad.components.core.webview.b.c.d) weakReference.get()).dismiss();
            }
        };
        this.Wj = new Runnable() {
            @Override
            public final void run() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "已经超时" + h.this.VQ.getTkTemplateId());
                h.this.rQ();
                h.a(h.this, true);
                h.this.rM();
            }
        };
        this.mVideoPlayStateListener = new com.kwad.components.core.video.l() {
            private void g(double d) {
                h.this.wp.Xk = false;
                h.this.wp.Xg = false;
                h.this.wp.nM = (int) ((d / 1000.0d) + 0.5d);
                ja();
            }

            private void ja() {
                if (h.this.VV == null || h.this.wp == null) {
                    return;
                }
                h.this.VV.a(h.this.wp);
            }

            @Override
            public final void onMediaPlayCompleted() {
                h.this.wp.Xg = true;
                h.this.wp.Xk = false;
                h.this.wp.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(h.this.rL()));
                ja();
            }

            @Override
            public final void onMediaPlayError(int i, int i2) {
                h.this.wp.Xk = true;
                h.this.wp.Xg = false;
                ja();
            }

            @Override
            public final void onMediaPlayProgress(long j2, long j3) {
                g(j3);
            }

            @Override
            public final void onMediaPlayStart() {
                g(0.0d);
            }

            @Override
            public final void onMediaPreparing() {
                g(0.0d);
            }
        };
        this.mContext = context;
        this.xI = -1L;
        this.Wf = 1000;
        this.wp = new y();
    }

    public h(Context context, int i) {
        this.VW = false;
        this.VX = false;
        this.VY = false;
        this.VZ = false;
        this.Wa = 0;
        this.xI = -1L;
        this.Wf = 1000;
        this.Wg = new com.kwad.sdk.core.webview.e();
        this.Wh = new a() {
            @Override
            public final void onFailed() {
                h.this.rM();
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染失败");
            }

            @Override
            public final void onSuccess() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "渲染成功");
            }
        };
        this.Wi = new com.kwad.sdk.components.j() {
            @Override
            public final void a(com.kwad.sdk.components.g gVar) {
                Activity currentActivity = h.this.mActivity;
                if (currentActivity == null) {
                    com.kwad.sdk.core.c.b.AU();
                    currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                }
                if (currentActivity == null || currentActivity.isFinishing()) {
                    gVar.callbackPageStatus(false, "no host activity");
                    return;
                }
                StyleTemplate styleTemplate = new StyleTemplate();
                try {
                    styleTemplate.parseJson(styleTemplate, new JSONObject(gVar.getStyleTemplate()));
                    d.b bVar = new d.b();
                    bVar.setAdTemplate(h.this.rL());
                    bVar.a(styleTemplate);
                    bVar.aO(styleTemplate.templateId);
                    bVar.c(gVar);
                    com.kwad.components.core.webview.b.c.d dVarB = com.kwad.components.core.webview.b.c.d.b(bVar);
                    dVarB.show(currentActivity.getFragmentManager(), "");
                    h.We.put(Integer.valueOf(gVar.getDialogId()), new WeakReference(dVarB));
                } catch (Throwable th) {
                    com.kwad.sdk.core.e.c.printStackTrace(th);
                    gVar.callbackPageStatus(false, "template parse failed");
                }
            }

            @Override
            public final void a(com.kwad.sdk.components.h hVar) {
                String message;
                if (hVar.getTemplateString() == null && hVar.getUrl() == null && hVar.getClassName() == null) {
                    message = "intent invalid";
                } else {
                    Activity currentActivity = h.this.mActivity;
                    if (currentActivity == null) {
                        com.kwad.sdk.core.c.b.AU();
                        currentActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                    }
                    if (currentActivity == null) {
                        hVar.callbackPageStatus(false, "no host activity");
                    }
                    Intent intent = hVar.getIntent();
                    try {
                        if (hVar.getTemplateString() != null) {
                            com.kwad.sdk.service.b.a(FeedDownloadActivity.class, com.kwad.components.core.s.a.a.class);
                            int iQc = com.kwad.components.core.s.a.a.qc();
                            com.kwad.components.core.s.a.a.a(iQc, "native_intent", hVar);
                            AdTemplate adTemplateRL = h.this.rL();
                            if (adTemplateRL != null) {
                                intent.putExtra("tk_ad_template", adTemplateRL.toJson().toString());
                            }
                            intent.putExtra("tk_style_template", hVar.getTemplateString());
                            intent.putExtra("tk_id", iQc);
                        } else if (hVar.getClassName() == null) {
                            intent.setData(Uri.parse(hVar.getUrl()));
                            currentActivity.startActivity(intent);
                            hVar.callbackPageStatus(true, null);
                            return;
                        } else {
                            try {
                                com.kwad.sdk.service.b.a(FeedDownloadActivity.class, Class.forName(hVar.getClassName()));
                            } catch (ClassNotFoundException e) {
                                message = e.getMessage();
                            }
                        }
                        currentActivity.startActivity(intent);
                        hVar.callbackPageStatus(true, null);
                        return;
                    } catch (Throwable th) {
                        message = th.getMessage();
                    }
                    intent.setClass(h.this.mContext, FeedDownloadActivity.class);
                }
                hVar.callbackPageStatus(false, message);
            }

            @Override
            public final void b(com.kwad.sdk.components.g gVar) {
                WeakReference weakReference = (WeakReference) h.We.get(Integer.valueOf(gVar.getDialogId()));
                if (weakReference == null || weakReference.get() == null) {
                    return;
                }
                ((com.kwad.components.core.webview.b.c.d) weakReference.get()).dismiss();
            }
        };
        this.Wj = new Runnable() {
            @Override
            public final void run() {
                com.kwad.sdk.core.e.c.d("TKLoadController", "已经超时" + h.this.VQ.getTkTemplateId());
                h.this.rQ();
                h.a(h.this, true);
                h.this.rM();
            }
        };
        this.mVideoPlayStateListener = new com.kwad.components.core.video.l() {
            private void g(double d) {
                h.this.wp.Xk = false;
                h.this.wp.Xg = false;
                h.this.wp.nM = (int) ((d / 1000.0d) + 0.5d);
                ja();
            }

            private void ja() {
                if (h.this.VV == null || h.this.wp == null) {
                    return;
                }
                h.this.VV.a(h.this.wp);
            }

            @Override
            public final void onMediaPlayCompleted() {
                h.this.wp.Xg = true;
                h.this.wp.Xk = false;
                h.this.wp.nM = com.kwad.sdk.core.response.b.a.G(com.kwad.sdk.core.response.b.d.cg(h.this.rL()));
                ja();
            }

            @Override
            public final void onMediaPlayError(int i2, int i22) {
                h.this.wp.Xk = true;
                h.this.wp.Xg = false;
                ja();
            }

            @Override
            public final void onMediaPlayProgress(long j2, long j3) {
                g(j3);
            }

            @Override
            public final void onMediaPlayStart() {
                g(0.0d);
            }

            @Override
            public final void onMediaPreparing() {
                g(0.0d);
            }
        };
        this.mContext = context;
        this.Wf = 1000;
        this.wp = new y();
    }

    private void a(TKDownloadListener tKDownloadListener) {
        StyleTemplate styleTemplate = this.QO;
        if (styleTemplate != null) {
            this.VS.loadTkFileByTemplateId(this.mContext, styleTemplate.templateId, this.QO.templateMd5, this.QO.templateUrl, this.QO.templateVersionCode, tKDownloadListener);
            return;
        }
        AdMatrixInfo.MatrixTemplate matrixTemplateC = com.kwad.sdk.core.response.b.b.c(rL(), this.VQ.getTkTemplateId());
        if (matrixTemplateC == null) {
            return;
        }
        this.VS.loadTkFileByTemplateId(this.mContext, matrixTemplateC.templateId, matrixTemplateC.templateMd5, matrixTemplateC.templateUrl, (int) matrixTemplateC.templateVersionCode, tKDownloadListener);
    }

    private void a(StyleTemplate styleTemplate, final a aVar) {
        this.QO = styleTemplate;
        com.kwad.sdk.core.e.c.w("TKLoadController", "addTKView mTKPlugin.getState(): " + this.VS.getState());
        if (this.VS.getState() == ITkOfflineCompo.TKState.SO_FAIL) {
            aM(TKPerformMsg.ERROR_REASON.KSAD_TK_SO_FAIL);
            if (aVar != null) {
                aVar.onFailed();
                return;
            }
            return;
        }
        if (TextUtils.isEmpty(styleTemplate.jsStr)) {
            aN(TKPerformMsg.ERROR_REASON.KSAD_TK_NO_TEMPLATE);
            if (aVar != null) {
                aVar.onFailed();
                return;
            }
            return;
        }
        try {
            rO();
            this.Wc = SystemClock.elapsedRealtime();
            l view = this.VS.getView(this.mContext, styleTemplate.templateId, styleTemplate.templateVersionCode, styleTemplate.tkSouce);
            com.kwad.components.core.offline.api.b.a.a.a(view.getUniqId(), this.mAdTemplate);
            view.a(this.Wi);
            if (this.mAdTemplate != null && this.mAdTemplate.mAdScene != null) {
                rR().put("adStyle", Integer.valueOf(this.mAdTemplate.mAdScene.getAdStyle()));
            }
            view.setCustomEnv(rR());
            this.VU = view;
            if (this.VR != null) {
                view.b(this.VR);
            }
            this.mInitTime = SystemClock.elapsedRealtime() - this.Wc;
            this.Wb = SystemClock.elapsedRealtime();
            rK();
            a(view);
            File file = new File(this.VS.getJsBaseDir(this.mContext, this.VQ.getTkTemplateId()));
            view.a(styleTemplate.jsStr, file.getAbsolutePath() + "/", new k() {
                @Override
                public final void onFailed(Throwable th) {
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.onFailed();
                    }
                    h.this.f(th);
                }

                @Override
                public final void onSuccess() {
                    a aVar2 = aVar;
                    if (aVar2 != null) {
                        aVar2.onSuccess();
                    }
                }
            });
            View view2 = view.getView();
            view2.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
            this.VQ.getTKContainer().addView(view2);
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
            f(th);
            if (aVar != null) {
                aVar.onFailed();
            }
        }
    }

    private void a(l lVar) {
        com.kwad.components.core.e.d.c cVar = rL() != null ? new com.kwad.components.core.e.d.c(rL()) : null;
        this.VQ.a(lVar, this.Wg);
        s sVar = new s();
        sVar.a(new s.a() {
            @Override
            public final void a(com.kwad.components.core.webview.b.b.s sVar2) {
                if (TextUtils.isEmpty(sVar2.message)) {
                    return;
                }
                v.d(h.this.mContext, sVar2.message, 0L);
            }
        });
        a(lVar, sVar);
        a(lVar, c(this.Wg));
        a(lVar, new com.kwad.sdk.core.webview.d.a());
        a(lVar, new com.kwad.components.core.webview.b.a.f());
        a(lVar, mS() ? new o(this.Wg, cVar, this) : new r(this.Wg, cVar, this));
        a(lVar, new q());
        a(lVar, new com.kwad.components.core.webview.b.a.k());
        a(lVar, new u(this.Wg));
        a(lVar, new x(this.Wg));
        t tVar = new t(this.Wg);
        tVar.a(new t.b() {
            @Override
            public final void a(t.a aVar) {
                h.this.VQ.b(aVar);
            }
        });
        a(lVar, tVar);
        a(lVar, new aa(this.Wg, new aa.b() {
            @Override
            public final void a(aa.a aVar) {
                h.this.b(aVar);
            }
        }));
        a(lVar, new ah(new ah.b() {
            @Override
            public final void a(ah.a aVar) {
                if (aVar.status != 1) {
                    h.this.rM();
                    h.this.aN(aVar.errorMsg);
                    return;
                }
                h.this.rP();
                if (h.this.VQ != null) {
                    bj.runOnUiThread(new Runnable() {
                        @Override
                        public final void run() {
                            h.this.VQ.eh();
                        }
                    });
                    com.kwad.components.core.webview.b.d.b.sf().c(h.this.VQ.getTkTemplateId(), h.this.Wc - h.this.Db, h.this.mInitTime, h.this.Wb > 0 ? SystemClock.elapsedRealtime() - h.this.Wb : 0L);
                }
            }
        }));
        am amVar = new am();
        a(lVar, amVar);
        this.VQ.a(amVar);
        a(lVar, new ap(this.Wg, cVar));
        p pVar = new p();
        this.VV = pVar;
        a(lVar, pVar);
        this.VQ.a(this.VV);
        if (rL() != null && com.kwad.sdk.core.response.b.a.ax(com.kwad.sdk.core.response.b.d.cg(rL()))) {
            final com.kwad.components.core.webview.b.a.l lVar2 = new com.kwad.components.core.webview.b.a.l();
            a(lVar, lVar2);
            this.Tj = new com.kwad.sdk.core.download.e(rL()) {
                @Override
                public final void a(String str, int i, com.kwad.sdk.core.download.f fVar) {
                    super.a(str, i, fVar);
                    com.kwad.components.core.webview.b.b.b bVar = new com.kwad.components.core.webview.b.b.b();
                    bVar.WR = 1;
                    lVar2.a(bVar);
                }
            };
            com.kwad.sdk.core.download.c.Aw().a(this.Tj, rL());
        }
        com.kwad.components.core.webview.b.a.t tVar2 = new com.kwad.components.core.webview.b.a.t();
        tVar2.a(new t.a() {
            @Override
            public final void b(com.kwad.components.core.webview.b.b.t tVar3) {
                h.this.VQ.a(tVar3);
            }
        });
        a(lVar, tVar2);
        com.kwad.components.core.webview.b.a.u uVar = new com.kwad.components.core.webview.b.a.u();
        uVar.a(new u.a() {
            @Override
            public final void a(m mVar) {
                h.this.VQ.b(mVar);
            }
        });
        a(lVar, uVar);
        com.kwad.components.core.webview.b.a.o oVar = new com.kwad.components.core.webview.b.a.o();
        a(lVar, oVar);
        this.VQ.a(oVar);
        a(lVar, new com.kwad.components.core.webview.b.a.r() {
            @Override
            public final void a(com.kwad.components.core.webview.b.b.r rVar) {
                super.a(rVar);
                if (h.this.mActivity == null) {
                    h hVar = h.this;
                    com.kwad.sdk.core.c.b.AU();
                    hVar.mActivity = com.kwad.sdk.core.c.b.getCurrentActivity();
                }
                if (h.this.mActivity == null || h.this.mActivity.isFinishing()) {
                    return;
                }
                if (h.this.VP != null) {
                    h.this.VP.dismiss();
                }
                d.b bVar = new d.b();
                bVar.setAdTemplate(h.this.rL());
                bVar.aO(rVar.templateId);
                h.this.VP = com.kwad.components.core.webview.b.c.d.b(bVar);
                h.this.VP.show(h.this.mActivity.getFragmentManager(), "");
            }
        });
        a(lVar, new com.kwad.components.core.webview.b.a.c() {
            @Override
            public final void jd() {
                super.jd();
                if (h.this.VP != null) {
                    h.this.VP.dismiss();
                }
                if (h.this.VQ != null) {
                    h.this.VQ.em();
                }
            }
        });
        a(lVar, new com.kwad.components.core.webview.jshandler.p(new com.kwad.sdk.core.webview.d.a.b() {
            @Override
            public final void a(WebCloseStatus webCloseStatus) {
                h.this.VQ.b(webCloseStatus);
            }
        }));
        a(lVar, new com.kwad.components.core.webview.b.a.d() {
            @Override
            public final void a(com.kwad.components.core.webview.b.b.g gVar) {
                super.a(gVar);
                com.kwad.components.core.o.a.pA().a(gVar.UO, h.this.rL(), gVar.UP);
            }
        });
        a(lVar, new com.kwad.components.core.webview.b.a.j() {
            @Override
            public final void a(n nVar) {
                super.a(nVar);
                AdWebViewActivityProxy.launch(h.this.mContext, new AdWebViewActivityProxy.a.a().aq(nVar.title).ar(nVar.url).ay(true).S(h.this.rL()).oA());
            }
        });
        a(lVar, new com.kwad.components.core.webview.b.a.a(rL()));
        a(lVar, new com.kwad.components.core.webview.b.a(rL()));
        a(this.Wg, cVar, lVar, this.VQ.getTKContainer());
    }

    private static void a(l lVar, com.kwad.sdk.core.webview.c.a aVar) {
        lVar.c(aVar);
    }

    static boolean a(h hVar, boolean z) {
        hVar.VW = true;
        return true;
    }

    private void aL(String str) {
        rM();
        aM(str);
    }

    private void aM(String str) {
        StyleTemplate styleTemplateRJ = rJ();
        if (styleTemplateRJ == null) {
            return;
        }
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.ERROR_LOG, new TKPerformMsg(this.Wa).setRenderState(4).setErrorReason(str).setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(styleTemplateRJ.templateVersionCode)).toJson());
    }

    private void aN(String str) {
        com.kwad.sdk.core.e.c.d("tkRender", "logTkRenderFail : " + str + ", templateId = " + this.VQ.getTkTemplateId());
        if (!this.VX || this.VY) {
            return;
        }
        this.VY = true;
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.ERROR_LOG, new TKPerformMsg(this.Wa).setRenderState(2).setErrorReason(str).setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(this.QO.templateVersionCode)).toJson());
    }

    private void b(aa.a aVar) {
        FrameLayout tKContainer = this.VQ.getTKContainer();
        if (tKContainer != null) {
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) tKContainer.getLayoutParams();
            layoutParams.height = com.kwad.sdk.d.a.a.a(this.mContext, aVar.height);
            layoutParams.leftMargin = com.kwad.sdk.d.a.a.a(this.mContext, aVar.leftMargin);
            layoutParams.rightMargin = com.kwad.sdk.d.a.a.a(this.mContext, aVar.rightMargin);
            layoutParams.bottomMargin = com.kwad.sdk.d.a.a.a(this.mContext, aVar.bottomMargin);
            layoutParams.width = -1;
            tKContainer.setLayoutParams(layoutParams);
        }
    }

    private void b(final StyleTemplate styleTemplate) {
        com.kwad.sdk.utils.i.e("", "renderType_tk", styleTemplate.templateId, styleTemplate.templateUrl);
        com.kwad.sdk.core.e.c.d("TKLoadController", "读取完毕，总耗时" + (SystemClock.elapsedRealtime() - this.Db) + ", 读取成功" + styleTemplate.templateId);
        if (this.VW) {
            return;
        }
        com.kwad.sdk.core.e.c.d("TKLoadController", "没有超时");
        bj.b(this.Wj);
        bj.runOnUiThread(new Runnable() {
            @Override
            public final void run() {
                h hVar = h.this;
                hVar.a(styleTemplate, hVar.Wh);
            }
        });
    }

    static boolean b(h hVar, boolean z) {
        hVar.VZ = true;
        return true;
    }

    private void f(Throwable th) {
        com.kwad.sdk.core.e.c.d("tkRender", "logTkRenderFail : " + th + ", templateId = " + this.VQ.getTkTemplateId());
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.ERROR_LOG, new TKPerformMsg(this.Wa).setRenderState(3).setErrorReason(th.toString()).setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(this.QO.templateVersionCode)).toJson());
    }

    private void rH() {
        this.VX = false;
        this.VY = false;
        this.VW = false;
        this.VZ = false;
        this.Db = 0L;
        this.Wc = 0L;
        this.mInitTime = 0L;
        this.Wb = 0L;
    }

    private void rI() {
        bj.runOnUiThreadDelay(this.Wj, this.Wf);
        this.VT = GlobalThreadPools.CW().submit(new Runnable() {
            @Override
            public final void run() {
                h.this.Db = SystemClock.elapsedRealtime();
                com.kwad.sdk.core.e.c.d("TKLoadController", "开始读取模板 id: " + h.this.VQ.getTkTemplateId());
                h.this.a(new TKDownloadListener() {
                    @Override
                    public final void onFailed(String str) {
                        h.this.aL(str);
                    }

                    @Override
                    public final void onSuccess(StyleTemplate styleTemplate) {
                        h.this.b(styleTemplate);
                    }
                });
            }
        });
    }

    private StyleTemplate rJ() {
        StyleTemplate styleTemplate = this.QO;
        if (styleTemplate != null) {
            return styleTemplate;
        }
        AdMatrixInfo.MatrixTemplate matrixTemplateC = com.kwad.sdk.core.response.b.b.c(rL(), this.VQ.getTkTemplateId());
        if (matrixTemplateC == null) {
            return null;
        }
        com.kwad.components.core.offline.api.b.c cVar = this.VS;
        if (cVar != null) {
            return cVar.checkStyleTemplateById(this.mContext, matrixTemplateC.templateId, matrixTemplateC.templateMd5, matrixTemplateC.templateUrl, (int) matrixTemplateC.templateVersionCode);
        }
        StyleTemplate styleTemplate2 = new StyleTemplate();
        styleTemplate2.templateId = matrixTemplateC.templateId;
        styleTemplate2.templateMd5 = matrixTemplateC.templateMd5;
        styleTemplate2.templateUrl = matrixTemplateC.templateUrl;
        styleTemplate2.templateVersionCode = (int) matrixTemplateC.templateVersionCode;
        styleTemplate2.tkSouce = 0;
        return styleTemplate2;
    }

    private void rK() {
        this.Wg.a(!ai.IN() ? 1 : 0, this.VQ.getTouchCoordsView(), this.VQ.getTKContainer(), this.VQ.getTkTemplateId());
    }

    private void rM() {
        bj.postOnUiThread(new Runnable() {
            @Override
            public final void run() {
                if (h.this.VZ) {
                    return;
                }
                h.b(h.this, true);
                h.this.VQ.cc();
                com.kwad.components.core.webview.b.d.b.sf().aS(h.this.VQ.getTkTemplateId());
            }
        });
    }

    private void rN() {
        StyleTemplate styleTemplateRJ = rJ();
        if (styleTemplateRJ == null) {
            return;
        }
        this.Wa = styleTemplateRJ.tkSouce;
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.APM_LOG, new TKPerformMsg(this.Wa).setRenderState(-1).setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(styleTemplateRJ.templateVersionCode)).toJson());
    }

    private void rO() {
        this.VX = true;
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.APM_LOG, new TKPerformMsg(this.Wa).setRenderState(0).setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(this.QO.templateVersionCode)).toJson());
    }

    private void rP() {
        if (!this.VX || this.VY) {
            return;
        }
        this.VY = true;
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.APM_LOG, new TKPerformMsg(this.Wa).setRenderState(1).setRenderTime(this.Wb > 0 ? SystemClock.elapsedRealtime() - this.Wb : 0L).setTemplateId(this.VQ.getTkTemplateId()).setLoadTime(this.Wc - this.Db).setInitTime(this.mInitTime).setVersionCode(String.valueOf(this.QO.templateVersionCode)).toJson());
    }

    private void rQ() {
        com.kwad.sdk.core.e.c.d("tkRender", "logTkRenderFail : timeout, templateId = " + this.VQ.getTkTemplateId());
        StyleTemplate styleTemplateRJ = rJ();
        if (styleTemplateRJ == null) {
            return;
        }
        TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.ERROR_LOG, new TKPerformMsg(this.Wa).setRenderState(3).setErrorReason("timeout").setTemplateId(this.VQ.getTkTemplateId()).setVersionCode(String.valueOf(styleTemplateRJ.templateVersionCode)).toJson());
    }

    private Map<String, Object> rR() {
        if (this.Wd == null) {
            HashMap map = new HashMap();
            this.Wd = map;
            map.put("TKVersion", "5.0.3");
            this.Wd.put("SDKVersion", BuildConfig.VERSION_NAME);
            this.Wd.put("sdkType", 1);
        }
        return this.Wd;
    }

    private void rS() {
        if (this.VS == null || this.VU == null) {
            return;
        }
        File file = new File(new File(this.VS.getJsBaseDir(this.mContext, this.VQ.getTkTemplateId())), "kcov.json");
        if (file.exists()) {
            try {
                String strV = com.kwad.sdk.utils.q.V(file);
                if (TextUtils.isEmpty(strV)) {
                    return;
                }
                com.kwad.sdk.core.e.c.d("TKLoadController", "kcov.json:" + strV);
                JSONObject jSONObject = new JSONObject(strV);
                final String string = jSONObject.getString("gitHeadCommit");
                final String string2 = jSONObject.getString("coverageApi");
                final String string3 = jSONObject.getString("coverageTaskId");
                final String string4 = jSONObject.getString("currentBranch");
                if (!TextUtils.isEmpty(string) && !TextUtils.isEmpty(string2) && !TextUtils.isEmpty(string3) && !TextUtils.isEmpty(string4)) {
                    com.kwad.sdk.core.e.c.d("TKLoadController", "尝试获取覆盖率统计...");
                    Object objExecute = this.VU.execute("JSON.stringify(this.__coverage__)");
                    if (objExecute instanceof String) {
                        final String str = (String) objExecute;
                        com.kwad.sdk.utils.g.execute(new Runnable() {
                            @Override
                            public final void run() {
                                String str2;
                                String str3;
                                JSONObject jSONObject2 = new JSONObject();
                                try {
                                    jSONObject2.put("coverage_task_id", Integer.valueOf(string3));
                                    jSONObject2.put("user", "");
                                    jSONObject2.put("timestamp", System.currentTimeMillis() / 1000);
                                    jSONObject2.put("branch_name", string4);
                                    jSONObject2.put("version", BuildConfig.VERSION_NAME);
                                    jSONObject2.put("tk_version", String.valueOf(h.this.QO.templateVersionCode));
                                    jSONObject2.put("tk_template_ids", h.this.QO.templateId);
                                } catch (JSONException e) {
                                    com.kwad.sdk.core.e.c.printStackTrace(e);
                                }
                                com.kwad.sdk.core.network.c cVarDoPost = com.kwad.sdk.g.wX().doPost(string2 + "/analysis/add/pkg/info", (Map<String, String>) null, jSONObject2);
                                if (cVarDoPost.Bd()) {
                                    str2 = "上传TK覆盖率pkg完成:" + cVarDoPost.aoM;
                                } else {
                                    str2 = "上传覆盖率pkg失败";
                                }
                                com.kwad.sdk.core.e.c.d("TKLoadController", str2);
                                com.kwad.sdk.core.network.c cVarDoPost2 = com.kwad.sdk.g.wX().doPost(string2 + "/attachment/ec", (Map<String, String>) null, new AdHttpBodyBuilder() {
                                    @Override
                                    public final void buildFormData(AdHttpFormDataBuilder adHttpFormDataBuilder) {
                                        adHttpFormDataBuilder.addFormDataPart("task_id", string3);
                                        adHttpFormDataBuilder.addFormDataPart("os_build_model", Build.MODEL);
                                        adHttpFormDataBuilder.addFormDataPart("os_build_serial", EnvironmentCompat.MEDIA_UNKNOWN);
                                        adHttpFormDataBuilder.addFormDataPart("os_build_brand", Build.BRAND);
                                        adHttpFormDataBuilder.addFormDataPart("app_version", BuildConfig.VERSION_NAME);
                                        adHttpFormDataBuilder.addFormDataPart("git_head_commit", string);
                                        adHttpFormDataBuilder.addFormDataPart("execute_type", "manual_qa");
                                        adHttpFormDataBuilder.addFormDataPart(IUserFeature.LOGIN_SUC_RS_UID, "");
                                        adHttpFormDataBuilder.addFormDataPart("did", au.getDeviceId());
                                        adHttpFormDataBuilder.addFormDataPart("execute_user", "");
                                        adHttpFormDataBuilder.addFormDataPart("url_type", "transform");
                                        try {
                                            adHttpFormDataBuilder.addFormDataPart(com.sigmob.sdk.base.h.x, UUID.randomUUID().toString() + ".json", "application/octet-stream", str.getBytes("UTF-8"));
                                        } catch (UnsupportedEncodingException e2) {
                                            com.kwad.sdk.core.e.c.printStackTrace(e2);
                                        }
                                    }
                                });
                                if (cVarDoPost2.Bd()) {
                                    str3 = "上传TK覆盖率完成:" + cVarDoPost2.aoM;
                                } else {
                                    str3 = "上传TK覆盖率失败";
                                }
                                com.kwad.sdk.core.e.c.d("TKLoadController", str3);
                            }
                        });
                        return;
                    }
                    return;
                }
                com.kwad.sdk.core.e.c.d("TKLoadController", "kcov.json数据不合法，缺少关键字段gitHeadCommit | coverageApi | coverageTaskId | currentBranch");
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
            }
        }
    }

    public void a(Activity activity, AdTemplate adTemplate, i iVar) {
        this.mActivity = activity;
        this.mAdTemplate = adTemplate;
        this.Wg.setAdTemplate(adTemplate);
        this.VQ = iVar;
        rH();
        FrameLayout tKContainer = this.VQ.getTKContainer();
        if (tKContainer != null) {
            tKContainer.removeAllViews();
        }
        if (!com.kwad.sdk.core.config.d.isCanUseTk()) {
            rM();
            return;
        }
        this.VS = (com.kwad.components.core.offline.api.b.c) com.kwad.sdk.components.c.f(com.kwad.components.core.offline.api.b.c.class);
        rN();
        com.kwad.sdk.core.e.c.d("TKLoadController", "bind mTKPlugin: " + this.VS);
        if (this.VS != null) {
            rI();
        } else {
            rM();
            TkLoggerReporter.get().reportTKPerform(ILoggerReporter.Category.ERROR_LOG, new TKPerformMsg(this.Wa).setRenderState(4).setErrorReason(TKPerformMsg.ERROR_REASON.KSAD_TK_OFFLINE_FAILED).setTemplateId(this.VQ.getTkTemplateId()).toJson());
        }
    }

    public final void a(StyleTemplate styleTemplate) {
        this.QO = styleTemplate;
    }

    protected void a(com.kwad.sdk.core.webview.b bVar, com.kwad.components.core.e.d.c cVar, l lVar, ViewGroup viewGroup) {
    }

    public final void a(com.kwad.sdk.core.webview.c.g gVar) {
        this.VR = gVar;
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a aVar) {
        i iVar = this.VQ;
        if (iVar != null) {
            iVar.a(aVar);
        }
    }

    public final void a(String str, Object obj) {
        rR().put(str, obj);
    }

    protected ab c(com.kwad.sdk.core.webview.b bVar) {
        return new ab(bVar);
    }

    @Override
    public final void callJS(String str) {
        l lVar = this.VU;
        if (lVar != null) {
            lVar.a(str, null, null);
        }
    }

    public final String getTkTemplateId() {
        i iVar = this.VQ;
        if (iVar == null) {
            return null;
        }
        return iVar.getTkTemplateId();
    }

    public void jv() {
        Future<?> future = this.VT;
        if (future != null) {
            future.cancel(true);
        }
        bj.b(this.Wj);
        if (this.Tj != null) {
            com.kwad.sdk.core.download.c.Aw().a(this.Tj);
        }
        com.kwad.components.core.webview.b.c.d dVar = this.VP;
        if (dVar != null) {
            dVar.dismiss();
        }
        if (com.kwad.components.core.a.ml.booleanValue()) {
            rS();
        }
        com.kwad.components.core.offline.api.b.c cVar = this.VS;
        if (cVar != null) {
            cVar.onDestroy();
        }
        final l lVar = this.VU;
        if (lVar != null) {
            com.kwad.components.core.offline.api.b.a.a.av(lVar.getUniqId());
            this.VU = null;
            bj.postOnUiThread(new Runnable() {
                @Override
                public final void run() {
                    l lVar2 = lVar;
                    if (lVar2 != null) {
                        lVar2.onDestroy();
                    }
                }
            });
        }
    }

    protected boolean mS() {
        return false;
    }

    public final com.kwad.sdk.core.webview.b rG() {
        return this.Wg;
    }

    protected final AdTemplate rL() {
        return this.Wg.getAdTemplate();
    }
}
