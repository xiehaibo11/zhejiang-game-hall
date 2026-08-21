package com.sigmob.sdk.nativead;

import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Color;
import android.os.Bundle;
import android.text.Editable;
import android.text.TextUtils;
import android.text.TextWatcher;
import android.util.Base64;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.EditText;
import android.widget.RelativeLayout;
import android.widget.TextView;
import com.czhj.sdk.common.utils.Dips;
import com.czhj.sdk.common.utils.ResourceUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.common.AdActivity;
import com.sigmob.sdk.base.common.z;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.base.mta.PointEntitySigmob;
import com.sigmob.sdk.nativead.m;
import com.sigmob.windad.natives.WindNativeAdData;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.List;

public class a extends Dialog implements DialogInterface.OnDismissListener, DialogInterface.OnShowListener, View.OnClickListener, r {
    private Context a;
    private Window b;
    private int c;
    private int d;
    private BaseAdUnit e;
    private WindNativeAdData.DislikeInteractionCallback f;
    private List<String> g;
    private TextView h;
    private TextView i;
    private TextView j;
    private TextView k;
    private RelativeLayout l;
    private EditText m;
    private m n;
    private ViewGroup o;

    public a(Context context, BaseAdUnit baseAdUnit) {
        super(context, com.sigmob.sdk.base.d.e());
        this.b = null;
        this.g = new ArrayList();
        Context applicationContext = context.getApplicationContext();
        this.a = applicationContext;
        this.e = baseAdUnit;
        int i = applicationContext.getResources().getDisplayMetrics().widthPixels;
        int i2 = this.a.getResources().getDisplayMetrics().heightPixels;
        int iDipsToIntPixels = Dips.dipsToIntPixels(40.0f, this.a);
        if (i2 > i) {
            this.d = i - iDipsToIntPixels;
            this.c = -2;
        } else {
            this.d = i2 - iDipsToIntPixels;
            this.c = i2 - com.sigmob.sdk.videoplayer.d.h(getContext());
        }
        c();
    }

    private void a(String str, String str2, final String str3, final String str4) {
        com.sigmob.sdk.base.common.z.a(str, str2, this.e, new z.a() {
            @Override
            public void a(Object obj) {
                if (obj instanceof PointEntitySigmob) {
                    PointEntitySigmob pointEntitySigmob = (PointEntitySigmob) obj;
                    pointEntitySigmob.setAdtype(String.valueOf(a.this.e.getAd_type()));
                    pointEntitySigmob.setLoad_id(a.this.e.getLoad_id());
                    pointEntitySigmob.setRequest_id(a.this.e.getRequestId());
                    pointEntitySigmob.setReason(str3);
                    pointEntitySigmob.setContent(str4);
                    pointEntitySigmob.setVid(a.this.e.getVid());
                }
            }
        });
    }

    private void c() {
        this.g.clear();
        this.g.add("违法违规");
        this.g.add("疑似抄袭");
        this.g.add("虚假欺诈");
        this.g.add("低俗色情");
        this.g.add("诱导点击");
    }

    private void d() {
        Window window = getWindow();
        this.b = window;
        if (window != null) {
            window.setGravity(17);
            int iF = com.sigmob.sdk.base.d.f();
            if (iF != 0) {
                this.b.setWindowAnimations(iF);
            }
            this.b.getDecorView().setPadding(0, 0, 0, 0);
            WindowManager.LayoutParams attributes = this.b.getAttributes();
            attributes.width = this.d;
            attributes.height = this.c;
            this.b.setAttributes(attributes);
        }
    }

    @Override
    public void a() {
        show();
        a(PointCategory.DISLIKE, "click", "", "");
    }

    @Override
    public void a(WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback) {
        this.f = dislikeInteractionCallback;
    }

    public void b() {
        if (this.f != null) {
            this.f = null;
        }
    }

    @Override
    public void onClick(View view) {
        EditText editText;
        String string;
        String str;
        int i = 0;
        String str2 = "";
        if (view.equals(this.l)) {
            a(PointCategory.DISLIKE, PointCategory.WHY_CLICK, "", "");
            AdActivity.b(this.a, AdActivity.class, this.e.getUuid());
        } else if (view.equals(this.i)) {
            String str3 = (String) this.i.getText();
            a(PointCategory.DISLIKE, PointCategory.ADNORMAL_SHOW, "", "");
            str2 = str3;
            i = 1;
        } else {
            if (view.equals(this.j)) {
                string = (String) this.j.getText();
                i = 2;
                str = PointCategory.CANNOT_CLOSE;
            } else if (view.equals(this.h)) {
                string = (String) this.h.getText();
                i = 3;
                str = PointCategory.NOINTEREST_CLICK;
            } else if (view.equals(this.k) && (editText = this.m) != null) {
                string = editText.getText().toString();
                if (TextUtils.isEmpty(string)) {
                    str2 = string;
                } else {
                    a(PointCategory.DISLIKE, PointCategory.ADVICE, "", Base64.encodeToString(string.getBytes(), 0));
                    str2 = string;
                    i = 5;
                }
            }
            a(PointCategory.DISLIKE, str, "", "");
            str2 = string;
        }
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.f;
        if (dislikeInteractionCallback == null || i == 0) {
            return;
        }
        dislikeInteractionCallback.onSelected(i, str2, true);
        dismiss();
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(ResourceUtil.getLayoutId(this.a, "sig_dislike_layout"));
        this.l = (RelativeLayout) findViewById(ResourceUtil.getId(this.a, "sig_why_watch_rl"));
        this.i = (TextView) findViewById(ResourceUtil.getId(this.a, "sig_not_show_tv"));
        this.j = (TextView) findViewById(ResourceUtil.getId(this.a, "sig_not_close_tv"));
        this.h = (TextView) findViewById(ResourceUtil.getId(this.a, "sig_dislike_tv"));
        this.k = (TextView) findViewById(ResourceUtil.getId(this.a, "sig_commit_sl"));
        this.m = (EditText) findViewById(ResourceUtil.getId(this.a, "sig_suggest_et"));
        this.l.setOnClickListener(this);
        this.h.setOnClickListener(this);
        this.i.setOnClickListener(this);
        this.j.setOnClickListener(this);
        this.k.setOnClickListener(this);
        this.m.addTextChangedListener(new TextWatcher() {
            @Override
            public void afterTextChanged(Editable editable) {
                if (!TextUtils.isEmpty(editable.toString()) || a.this.k == null) {
                    return;
                }
                a.this.k.setTextColor(Color.parseColor("#C2C2C2"));
            }

            @Override
            public void beforeTextChanged(CharSequence charSequence, int i, int i2, int i3) {
            }

            @Override
            public void onTextChanged(CharSequence charSequence, int i, int i2, int i3) {
                if (a.this.k != null) {
                    a.this.k.setTextColor(Color.parseColor("#FE7E03"));
                }
            }
        });
        this.o = (ViewGroup) findViewById(ResourceUtil.getId(this.a, "sig_flow_sl"));
        m mVar = new m(this.a);
        this.n = mVar;
        mVar.setList(this.g);
        this.n.setOnItemClickListener(new m.e() {
            @Override
            public void a(int i, String str) {
                a.this.a(PointCategory.DISLIKE, PointCategory.REPORT, String.valueOf(i), "");
                if (a.this.f != null) {
                    a.this.f.onSelected(4, str, true);
                    a.this.dismiss();
                }
            }
        });
        this.o.addView(this.n, new ViewGroup.LayoutParams(-1, -2));
        setOnShowListener(this);
        setOnDismissListener(this);
        setCanceledOnTouchOutside(true);
        setCancelable(true);
        d();
        SigmobLog.i("DisLikeDialog onCreate:" + this.d + Constants.COLON_SEPARATOR + this.c);
    }

    @Override
    public void onDismiss(DialogInterface dialogInterface) {
        SigmobLog.i("DisLikeDialog  onDismiss");
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.f;
        if (dislikeInteractionCallback != null) {
            dislikeInteractionCallback.onCancel();
        }
    }

    @Override
    public void onShow(DialogInterface dialogInterface) {
        SigmobLog.i("DisLikeDialog  onShow");
        WindNativeAdData.DislikeInteractionCallback dislikeInteractionCallback = this.f;
        if (dislikeInteractionCallback != null) {
            dislikeInteractionCallback.onShow();
        }
        m mVar = this.n;
        if (mVar != null) {
            mVar.b();
        }
    }
}
