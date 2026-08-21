package com.kwad.components.core.s.a;

import android.content.Intent;
import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import com.kwad.components.core.b.a;
import com.kwad.components.offline.api.tk.model.StyleTemplate;
import com.kwad.sdk.R;
import com.kwad.sdk.api.core.KsAdSdkDynamicImpl;
import com.kwad.sdk.api.proxy.app.FeedDownloadActivity;
import com.kwad.sdk.components.h;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.view.AdBaseFrameLayout;
import com.kwad.sdk.mvp.Presenter;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.atomic.AtomicInteger;
import org.json.JSONObject;

@KsAdSdkDynamicImpl(FeedDownloadActivity.class)
public class a extends com.kwad.components.core.l.b<b> {
    private static final ConcurrentMap<Integer, Map<String, Object>> QT = new ConcurrentHashMap();
    private static final AtomicInteger QU = new AtomicInteger(1);
    private StyleTemplate QO;
    private String QP;
    private boolean QQ;
    private h QR;
    private int QS;
    private AdTemplate mAdTemplate;
    private AdBaseFrameLayout mRootContainer;
    private com.kwad.components.core.b.a mTitleBarHelper;

    public static void a(int i, String str, Object obj) {
        Map<String, Object> map = QT.get(Integer.valueOf(i));
        if (map == null) {
            map = new HashMap<>();
            QT.put(Integer.valueOf(i), map);
        }
        map.put(str, obj);
    }

    private static void aH(int i) {
        Map<String, Object> map = QT.get(Integer.valueOf(i));
        if (map != null) {
            map.clear();
        }
    }

    private Object aw(String str) {
        return h(this.QS, str);
    }

    private static Object h(int i, String str) {
        Map<String, Object> map = QT.get(Integer.valueOf(i));
        if (map != null) {
            return map.get(str);
        }
        return null;
    }

    @Override
    private b onCreateCallerContext() {
        b bVar = new b(this);
        bVar.mAdTemplate = this.mAdTemplate;
        bVar.QO = this.QO;
        bVar.mRootContainer = this.mRootContainer;
        bVar.QR = this.QR;
        return bVar;
    }

    public static int qc() {
        return QU.incrementAndGet();
    }

    public static void register() {
        com.kwad.sdk.service.b.a(FeedDownloadActivity.class, a.class);
    }

    @Override
    public boolean checkIntentData(Intent intent) {
        String stringExtra = getIntent().getStringExtra("tk_style_template");
        if (TextUtils.isEmpty(stringExtra)) {
            return false;
        }
        try {
            StyleTemplate styleTemplate = new StyleTemplate();
            styleTemplate.parseJson(new JSONObject(stringExtra));
            this.QO = styleTemplate;
            String stringExtra2 = getIntent().getStringExtra("tk_ad_template");
            if (TextUtils.isEmpty(stringExtra2)) {
                return true;
            }
            try {
                AdTemplate adTemplate = new AdTemplate();
                adTemplate.parseJson(new JSONObject(stringExtra2));
                this.mAdTemplate = adTemplate;
                return true;
            } catch (Throwable unused) {
                return false;
            }
        } catch (Throwable unused2) {
            return false;
        }
    }

    @Override
    public int getLayoutId() {
        return R.layout.ksad_tk_page;
    }

    @Override
    public String getPageName() {
        return "TKActivityProxy";
    }

    @Override
    public void initData() {
        this.QQ = getIntent().getBooleanExtra("show_navigationBar", true);
        this.QP = getIntent().getStringExtra("title");
        this.QS = getIntent().getIntExtra("tk_id", 0);
        this.QR = (h) aw("native_intent");
    }

    @Override
    public void initView() {
        AdBaseFrameLayout adBaseFrameLayout = (AdBaseFrameLayout) findViewById(R.id.ksad_tk_root_container);
        this.mRootContainer = adBaseFrameLayout;
        if (!this.QQ) {
            FrameLayout.LayoutParams layoutParams = (FrameLayout.LayoutParams) adBaseFrameLayout.getLayoutParams();
            layoutParams.topMargin = 0;
            this.mRootContainer.setLayoutParams(layoutParams);
        }
        com.kwad.components.core.b.a aVar = new com.kwad.components.core.b.a((ViewGroup) findViewById(R.id.ksad_kwad_web_title_bar));
        this.mTitleBarHelper = aVar;
        aVar.a(new a.a() {
            @Override
            public final void t(View view) {
                a.this.finish();
            }

            @Override
            public final void u(View view) {
            }
        });
        this.mTitleBarHelper.a(new com.kwad.components.core.b.b(this.QP));
        this.mTitleBarHelper.aj(false);
    }

    @Override
    public Presenter onCreatePresenter() {
        return new com.kwad.components.core.s.b.a();
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        aH(this.QS);
    }

    @Override
    public void onPause() {
        super.onPause();
    }

    @Override
    public void onResume() {
        super.onResume();
    }
}
