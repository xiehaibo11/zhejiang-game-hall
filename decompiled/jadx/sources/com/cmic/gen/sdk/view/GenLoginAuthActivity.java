package com.cmic.gen.sdk.view;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.Point;
import android.graphics.Typeface;
import android.graphics.drawable.ColorDrawable;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.text.Spannable;
import android.text.TextUtils;
import android.text.method.LinkMovementMethod;
import android.util.DisplayMetrics;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewGroup;
import android.view.ViewParent;
import android.view.WindowManager;
import android.view.animation.AnimationUtils;
import android.widget.CheckBox;
import android.widget.CompoundButton;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import android.widget.TextView;
import android.widget.Toast;
import com.cmic.gen.sdk.auth.GenAuthnHelper;
import com.cmic.gen.sdk.auth.GenTokenListener;
import com.cmic.gen.sdk.e.h;
import com.cmic.gen.sdk.e.n;
import com.cmic.gen.sdk.e.q;
import com.cmic.gen.sdk.view.b;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import java.lang.ref.WeakReference;
import java.util.ArrayList;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class GenLoginAuthActivity extends Activity implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f1684a = GenLoginAuthActivity.class.getSimpleName();
    private GenAuthThemeConfig B;
    private int C;
    private int D;
    private boolean E;
    private Dialog F;
    private Handler b;
    private Context c;
    private RelativeLayout d;
    private d e;
    private d f;
    private d g;
    private d h;
    private d i;
    private ArrayList<d> j;
    private ArrayList<String> k;
    private String[] l;
    private com.cmic.gen.sdk.a m;
    private com.cmic.gen.sdk.auth.a n;
    private CheckBox p;
    private RelativeLayout q;
    private RelativeLayout r;
    private GenTokenListener v;
    private RelativeLayout x;
    private String y;
    private String z;
    private String o = "";
    private long s = 0;
    private int t = 0;
    private a u = null;
    private boolean w = true;
    private String A = "";

    static /* synthetic */ int a(GenLoginAuthActivity genLoginAuthActivity, int i) {
        int i2 = genLoginAuthActivity.t + i;
        genLoginAuthActivity.t = i2;
        return i2;
    }

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        if (bundle != null) {
            try {
                finish();
            } catch (Exception e) {
                if (this.m == null) {
                    this.m = new com.cmic.gen.sdk.a(0);
                }
                this.m.a().f1662a.add(e);
                com.cmic.gen.sdk.e.c.a(f1684a, e.toString());
                e.printStackTrace();
                a("200025", "发生未知错误", this.m, null);
                return;
            }
        }
        this.c = this;
        GenAuthThemeConfig authThemeConfig = GenAuthnHelper.getInstance((Context) this).getAuthThemeConfig();
        this.B = authThemeConfig;
        if (authThemeConfig != null) {
            if (authThemeConfig.getThemeId() != -1) {
                setTheme(this.B.getThemeId());
            }
            if (this.B.getAuthPageActIn() != null && this.B.getActivityOut() != null) {
                overridePendingTransition(com.cmic.gen.sdk.view.c.c(this, this.B.getAuthPageActIn()), com.cmic.gen.sdk.view.c.c(this, this.B.getActivityOut()));
            }
        }
        com.cmic.gen.sdk.d.a.a("authPageIn");
        this.s = System.currentTimeMillis();
        this.n = com.cmic.gen.sdk.auth.a.a(this);
        d();
        f();
    }

    @Override // android.app.Activity
    protected void onResume() {
        super.onResume();
        try {
            if (this.m != null) {
                this.m.a("loginMethod", "loginAuth");
            }
            GenAuthnHelper.getInstance((Context) this).loginPageInCallBack("200087", null);
        } catch (Exception e) {
            e.printStackTrace();
            this.m.a().f1662a.add(e);
            a("200025", "发生未知错误", this.m, null);
        }
    }

    private void d() {
        String str;
        com.cmic.gen.sdk.a aVarD = com.cmic.gen.sdk.e.e.d(getIntent().getStringExtra("traceId"));
        this.m = aVarD;
        if (aVarD == null) {
            this.m = new com.cmic.gen.sdk.a(0);
        }
        this.v = com.cmic.gen.sdk.e.e.c(this.m.b("traceId", ""));
        getWindowManager().getDefaultDisplay().getMetrics(new DisplayMetrics());
        this.b = new Handler(getMainLooper());
        this.u = new a(this);
        this.o = this.m.b("securityphone");
        com.cmic.gen.sdk.e.c.b(f1684a, "mSecurityPhone value is " + this.o);
        String strB = this.m.b("operatortype", "");
        com.cmic.gen.sdk.e.c.b(f1684a, "operator value is " + strB);
        if (this.B.getAppLanguageType() == 1) {
            this.l = com.cmic.gen.sdk.c.b;
            this.A = com.cmic.gen.sdk.c.e[1];
        } else if (this.B.getAppLanguageType() == 2) {
            this.l = com.cmic.gen.sdk.c.c;
            this.A = com.cmic.gen.sdk.c.e[2];
        } else {
            this.l = com.cmic.gen.sdk.c.f1635a;
            this.A = com.cmic.gen.sdk.c.e[0];
        }
        if (strB.equals("1")) {
            this.y = this.l[0];
            str = "https://wap.cmpassport.com/resources/html/contract.html";
        } else if (strB.equals("3")) {
            this.y = this.l[1];
            str = "https://e.189.cn/sdk/agreement/detail.do?hidetop=true";
        } else {
            this.y = this.l[2];
            str = "https://opencloud.wostore.cn/authz/resource/html/disclaimer.html?fromsdk=true";
        }
        d dVar = new d(this.c, R.style.Theme.Translucent.NoTitleBar, this.y, str);
        this.e = dVar;
        dVar.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.1
            @Override // android.content.DialogInterface.OnKeyListener
            public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                if (i == 4 && keyEvent.getAction() == 1 && keyEvent.getRepeatCount() == 0) {
                    GenLoginAuthActivity.this.e.b();
                }
                return true;
            }
        });
        this.j = new ArrayList<>();
        this.k = new ArrayList<>();
        if (!TextUtils.isEmpty(this.B.getClauseUrl())) {
            d dVar2 = new d(this.c, R.style.Theme.Translucent.NoTitleBar, this.B.getClauseName(), this.B.getClauseUrl());
            this.f = dVar2;
            dVar2.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.4
                @Override // android.content.DialogInterface.OnKeyListener
                public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    if (i == 4 && keyEvent.getAction() == 1 && keyEvent.getRepeatCount() == 0) {
                        GenLoginAuthActivity.this.f.b();
                    }
                    return true;
                }
            });
            this.j.add(this.f);
            this.k.add(this.B.getClauseName());
        }
        if (!TextUtils.isEmpty(this.B.getClauseUrl2())) {
            d dVar3 = new d(this.c, R.style.Theme.Translucent.NoTitleBar, this.B.getClauseName2(), this.B.getClauseUrl2());
            this.g = dVar3;
            dVar3.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.5
                @Override // android.content.DialogInterface.OnKeyListener
                public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    if (i == 4 && keyEvent.getAction() == 1 && keyEvent.getRepeatCount() == 0) {
                        GenLoginAuthActivity.this.g.b();
                    }
                    return true;
                }
            });
            this.j.add(this.g);
            this.k.add(this.B.getClauseName2());
        }
        if (!TextUtils.isEmpty(this.B.getClauseUrl3())) {
            d dVar4 = new d(this.c, R.style.Theme.Translucent.NoTitleBar, this.B.getClauseName3(), this.B.getClauseUrl3());
            this.h = dVar4;
            dVar4.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.6
                @Override // android.content.DialogInterface.OnKeyListener
                public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    if (i == 4 && keyEvent.getAction() == 1 && keyEvent.getRepeatCount() == 0) {
                        GenLoginAuthActivity.this.h.b();
                    }
                    return true;
                }
            });
            this.j.add(this.h);
            this.k.add(this.B.getClauseName3());
        }
        if (!TextUtils.isEmpty(this.B.getClauseUrl4())) {
            d dVar5 = new d(this.c, R.style.Theme.Translucent.NoTitleBar, this.B.getClauseName4(), this.B.getClauseUrl4());
            this.i = dVar5;
            dVar5.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.7
                @Override // android.content.DialogInterface.OnKeyListener
                public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                    if (i == 4 && keyEvent.getAction() == 1 && keyEvent.getRepeatCount() == 0) {
                        GenLoginAuthActivity.this.i.b();
                    }
                    return true;
                }
            });
            this.j.add(this.i);
            this.k.add(this.B.getClauseName4());
        }
        j();
        if (this.B.isPrivacyBookSymbol()) {
            for (int i = 0; i < this.k.size(); i++) {
                String str2 = String.format("《%s》", this.k.get(i));
                this.z = this.z.replaceFirst(this.k.get(i), str2);
                this.k.set(i, str2);
            }
        }
        com.cmic.gen.sdk.view.b.a().a(new b.a() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.8
            @Override // com.cmic.gen.sdk.view.b.a
            public void a() {
                GenLoginAuthActivity.this.b.removeCallbacksAndMessages(null);
                if (GenLoginAuthActivity.this.e != null && GenLoginAuthActivity.this.e.isShowing()) {
                    GenLoginAuthActivity.this.e.dismiss();
                }
                if (GenLoginAuthActivity.this.f != null && GenLoginAuthActivity.this.f.isShowing()) {
                    GenLoginAuthActivity.this.f.dismiss();
                }
                GenLoginAuthActivity.this.a(true);
            }
        });
    }

    private void e() {
        int privacyMarginLeft;
        RelativeLayout.LayoutParams layoutParams = (RelativeLayout.LayoutParams) this.r.getLayoutParams();
        if (this.B.getNumFieldOffsetY() > 0 || this.B.getNumFieldOffsetY_B() < 0) {
            int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
            this.r.measure(iMakeMeasureSpec, iMakeMeasureSpec);
            com.cmic.gen.sdk.e.c.b(f1684a, "mPhoneLayout.getMeasuredHeight()=" + this.r.getMeasuredHeight());
            if (this.B.getNumFieldOffsetY() > 0 && (this.C - this.r.getMeasuredHeight()) - e.a(this.c, this.B.getNumFieldOffsetY()) > 0) {
                com.cmic.gen.sdk.e.c.b(f1684a, "numberField_top");
                layoutParams.addRule(10, -1);
                layoutParams.setMargins(0, e.a(this.c, this.B.getNumFieldOffsetY()), 0, 0);
            } else {
                layoutParams.addRule(12, -1);
            }
        } else if (this.B.getNumFieldOffsetY_B() > 0 && (this.C - this.r.getMeasuredHeight()) - e.a(this.c, this.B.getNumFieldOffsetY_B()) > 0) {
            com.cmic.gen.sdk.e.c.b(f1684a, "numberField_bottom");
            layoutParams.addRule(12, -1);
            layoutParams.setMargins(0, 0, 0, e.a(this.c, this.B.getNumFieldOffsetY_B()));
        } else {
            layoutParams.addRule(10, -1);
        }
        this.r.setLayoutParams(layoutParams);
        RelativeLayout.LayoutParams layoutParams2 = (RelativeLayout.LayoutParams) this.d.getLayoutParams();
        int iMax = Math.max(this.B.getLogBtnMarginLeft(), 0);
        int iMax2 = Math.max(this.B.getLogBtnMarginRight(), 0);
        if (this.B.getLogBtnOffsetY() > 0 || this.B.getLogBtnOffsetY_B() < 0) {
            if (this.B.getLogBtnOffsetY() > 0 && this.C - e.a(this.c, this.B.getLogBtnHeight() + this.B.getLogBtnOffsetY()) > 0) {
                com.cmic.gen.sdk.e.c.b(f1684a, "logBtn_top");
                layoutParams2.addRule(10, -1);
                layoutParams2.setMargins(e.a(this.c, iMax), e.a(this.c, this.B.getLogBtnOffsetY()), e.a(this.c, iMax2), 0);
            } else {
                layoutParams2.addRule(12, -1);
                layoutParams2.setMargins(e.a(this.c, iMax), 0, e.a(this.c, iMax2), 0);
            }
        } else if (this.B.getLogBtnOffsetY_B() > 0 && this.C - e.a(this.c, this.B.getLogBtnHeight() + this.B.getLogBtnOffsetY_B()) > 0) {
            com.cmic.gen.sdk.e.c.b(f1684a, "logBtn_bottom");
            layoutParams2.addRule(12, -1);
            layoutParams2.setMargins(e.a(this.c, iMax), 0, e.a(this.c, iMax2), e.a(this.c, this.B.getLogBtnOffsetY_B()));
        } else {
            layoutParams2.addRule(10, -1);
            layoutParams2.setMargins(e.a(this.c, iMax), 0, e.a(this.c, iMax2), 0);
        }
        this.d.setLayoutParams(layoutParams2);
        RelativeLayout.LayoutParams layoutParams3 = (RelativeLayout.LayoutParams) this.q.getLayoutParams();
        if (this.B.getPrivacyMarginLeft() >= 0) {
            privacyMarginLeft = this.B.getCheckedImgWidth() > 30 ? this.B.getPrivacyMarginLeft() : this.B.getPrivacyMarginLeft() - (30 - this.B.getCheckedImgWidth());
        } else {
            privacyMarginLeft = this.B.getCheckedImgWidth() > 30 ? 0 : -(30 - this.B.getCheckedImgWidth());
        }
        int iMax3 = Math.max(this.B.getPrivacyMarginRight(), 0);
        int iMakeMeasureSpec2 = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.q.measure(iMakeMeasureSpec2, iMakeMeasureSpec2);
        if (this.B.getPrivacyOffsetY() > 0 || this.B.getPrivacyOffsetY_B() < 0) {
            if (this.B.getPrivacyOffsetY() > 0 && (this.C - this.q.getMeasuredHeight()) - e.a(this.c, this.B.getPrivacyOffsetY()) > 0) {
                com.cmic.gen.sdk.e.c.b(f1684a, "privacy_top = " + this.q.getMeasuredHeight());
                layoutParams3.addRule(10, -1);
                layoutParams3.setMargins(e.a(this.c, (float) privacyMarginLeft), e.a(this.c, (float) this.B.getPrivacyOffsetY()), e.a(this.c, (float) iMax3), 0);
            } else {
                com.cmic.gen.sdk.e.c.b(f1684a, "privacy_bottom=" + privacyMarginLeft);
                layoutParams3.addRule(12, -1);
                layoutParams3.setMargins(e.a(this.c, (float) privacyMarginLeft), 0, e.a(this.c, (float) iMax3), 0);
            }
        } else if (this.B.getPrivacyOffsetY_B() > 0 && (this.C - this.q.getMeasuredHeight()) - e.a(this.c, this.B.getPrivacyOffsetY_B()) > 0) {
            com.cmic.gen.sdk.e.c.b(f1684a, "privacy_bottom=" + this.q.getMeasuredHeight());
            layoutParams3.addRule(12, -1);
            layoutParams3.setMargins(e.a(this.c, (float) privacyMarginLeft), 0, e.a(this.c, (float) iMax3), e.a(this.c, (float) this.B.getPrivacyOffsetY_B()));
        } else {
            layoutParams3.addRule(10, -1);
            layoutParams3.setMargins(e.a(this.c, privacyMarginLeft), 0, e.a(this.c, iMax3), 0);
            com.cmic.gen.sdk.e.c.b(f1684a, "privacy_top");
        }
        this.q.setLayoutParams(layoutParams3);
    }

    private void f() {
        if (Build.VERSION.SDK_INT >= 21) {
            getWindow().addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
            getWindow().addFlags(DownloadExpSwitchCode.BUGFIX_SIGBUS_24_25);
            if (this.B.getStatusBarColor() != 0) {
                getWindow().addFlags(Integer.MIN_VALUE);
                getWindow().clearFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
                getWindow().setStatusBarColor(this.B.getStatusBarColor());
                getWindow().setNavigationBarColor(this.B.getStatusBarColor());
            }
        }
        if (Build.VERSION.SDK_INT >= 23) {
            if (this.B.isLightColor()) {
                getWindow().getDecorView().setSystemUiVisibility(8192);
            } else {
                getWindow().getDecorView().setSystemUiVisibility(0);
            }
        }
        RelativeLayout relativeLayout = new RelativeLayout(this);
        relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -1));
        View contentView = this.B.getContentView();
        if (contentView != null) {
            ViewParent parent = contentView.getParent();
            if (parent != null) {
                ((ViewGroup) parent).removeView(contentView);
            }
            relativeLayout.addView(contentView);
        } else if (this.B.getLayoutResID() != -1) {
            getLayoutInflater().inflate(this.B.getLayoutResID(), relativeLayout);
        }
        setContentView(relativeLayout);
        int requestedOrientation = getRequestedOrientation();
        this.C = e.b(this.c);
        int iA = e.a(this.c);
        this.D = iA;
        boolean z = true;
        if ((requestedOrientation == 1 && iA > this.C) || (requestedOrientation == 0 && this.D < this.C)) {
            int i = this.D;
            this.D = this.C;
            this.C = i;
        }
        com.cmic.gen.sdk.e.c.b(f1684a, "orientation = " + requestedOrientation + "--screenWidth = " + this.D + "--screenHeight = " + this.C);
        WindowManager.LayoutParams attributes = getWindow().getAttributes();
        if (this.B.getWindowWidth() != 0) {
            getWindow().getWindowManager().getDefaultDisplay().getMetrics(new DisplayMetrics());
            getWindowManager().getDefaultDisplay().getSize(new Point());
            attributes.width = e.a(this.c, this.B.getWindowWidth());
            attributes.height = e.a(this.c, this.B.getWindowHeight());
            this.D = attributes.width;
            this.C = attributes.height;
            attributes.x = e.a(this.c, this.B.getWindowX());
            if (this.B.getWindowBottom() == 1) {
                getWindow().setGravity(80);
            } else {
                attributes.y = e.a(this.c, this.B.getWindowY());
            }
            getWindow().setAttributes(attributes);
        }
        relativeLayout.setFitsSystemWindows(this.B.isFitsSystemWindows());
        relativeLayout.setClipToPadding(true);
        try {
            g();
            relativeLayout.addView(this.r);
            relativeLayout.addView(h());
            relativeLayout.addView(i());
            e();
            this.d.setOnClickListener(this);
            this.x.setOnClickListener(this);
            this.p.setOnCheckedChangeListener(new CompoundButton.OnCheckedChangeListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.9
                @Override // android.widget.CompoundButton.OnCheckedChangeListener
                public void onCheckedChanged(CompoundButton compoundButton, boolean z2) {
                    if (GenLoginAuthActivity.this.B.getGenCheckedChangeListener() != null) {
                        GenLoginAuthActivity.this.B.getGenCheckedChangeListener().onCheckedChanged(z2);
                    }
                    boolean z3 = true;
                    if (z2) {
                        GenLoginAuthActivity.this.d.setEnabled(true);
                        try {
                            GenLoginAuthActivity.this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(GenLoginAuthActivity.this, GenLoginAuthActivity.this.B.getCheckedImgPath()));
                        } catch (Exception unused) {
                            GenLoginAuthActivity.this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(GenLoginAuthActivity.this, "umcsdk_check_image"));
                        }
                        GenLoginAuthActivity.this.p.setContentDescription("复选框 已勾选 " + GenLoginAuthActivity.this.z);
                        return;
                    }
                    RelativeLayout relativeLayout2 = GenLoginAuthActivity.this.d;
                    if (GenLoginAuthActivity.this.B.getGenCheckBoxListener() == null && TextUtils.isEmpty(GenLoginAuthActivity.this.B.getCheckTipText())) {
                        z3 = false;
                    }
                    relativeLayout2.setEnabled(z3);
                    try {
                        GenLoginAuthActivity.this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(GenLoginAuthActivity.this, GenLoginAuthActivity.this.B.getUncheckedImgPath()));
                    } catch (Exception unused2) {
                        GenLoginAuthActivity.this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(GenLoginAuthActivity.this, "umcsdk_uncheck_image"));
                    }
                    GenLoginAuthActivity.this.p.setContentDescription("复选框 请双击勾选 " + GenLoginAuthActivity.this.z);
                }
            });
            k();
            try {
                if (this.B.isPrivacyState()) {
                    this.p.setChecked(true);
                    this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this, this.B.getCheckedImgPath()));
                    this.d.setEnabled(true);
                    this.p.setContentDescription("复选框 已勾选 " + this.z);
                    return;
                }
                this.p.setChecked(false);
                RelativeLayout relativeLayout2 = this.d;
                if (this.B.getGenCheckBoxListener() == null && TextUtils.isEmpty(this.B.getCheckTipText())) {
                    z = false;
                }
                relativeLayout2.setEnabled(z);
                this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this, this.B.getUncheckedImgPath()));
                this.p.setContentDescription("复选框 请双击勾选 " + this.z);
            } catch (Exception unused) {
                this.p.setChecked(false);
            }
        } catch (Exception e) {
            com.cmic.gen.sdk.d.c.b.add(e);
            e.printStackTrace();
            com.cmic.gen.sdk.e.c.a(f1684a, e.toString());
            a("200040", "UI资源加载异常", this.m, null);
        }
    }

    private void g() {
        RelativeLayout relativeLayout = new RelativeLayout(this);
        this.r = relativeLayout;
        relativeLayout.setId(13107);
        this.r.setLayoutParams(new RelativeLayout.LayoutParams(-1, -2));
        TextView textView = new TextView(this);
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        textView.setGravity(15);
        int numberOffsetX = this.B.getNumberOffsetX();
        if (numberOffsetX == 0) {
            layoutParams.addRule(13);
        } else if (numberOffsetX > 0) {
            float f = numberOffsetX;
            if ((this.D - textView.getWidth()) - e.a(this.c, f) > 0) {
                layoutParams.setMargins(e.a(this.c, f), 0, 0, 0);
            } else {
                com.cmic.gen.sdk.e.c.b(f1684a, "RelativeLayout.ALIGN_PARENT_RIGHT");
                layoutParams.addRule(11);
            }
        }
        try {
            textView.setTextSize(2, this.B.getNumberSize());
            textView.setContentDescription(this.o.replace("****", "星星星星").replaceAll("(.{1})", "$1 "));
        } catch (Exception unused) {
            textView.setTextSize(2, 18.0f);
        }
        textView.setText(this.o);
        if (this.B.isNumberBold()) {
            textView.setTypeface(Typeface.DEFAULT_BOLD);
        }
        textView.setId(30583);
        this.r.addView(textView, layoutParams);
        try {
            textView.setTextColor(this.B.getNumberColor());
        } catch (Exception unused2) {
            textView.setTextColor(-13421773);
        }
        int iMakeMeasureSpec = View.MeasureSpec.makeMeasureSpec(0, 0);
        this.r.measure(iMakeMeasureSpec, iMakeMeasureSpec);
        com.cmic.gen.sdk.e.c.b(f1684a, "mPhoneLayout.getMeasuredHeight()=" + this.r.getMeasuredHeight());
    }

    private RelativeLayout h() {
        RelativeLayout relativeLayout = new RelativeLayout(this);
        this.d = relativeLayout;
        relativeLayout.setId(17476);
        this.d.setLayoutParams(new RelativeLayout.LayoutParams(e.a(this.c, this.B.getLogBtnWidth()), e.a(this.c, this.B.getLogBtnHeight())));
        TextView textView = new TextView(this);
        textView.setTextSize(2, this.B.getLogBtnTextSize());
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams.addRule(13);
        textView.setLayoutParams(layoutParams);
        if (this.B.isLogBtnTextBold()) {
            textView.setTypeface(Typeface.DEFAULT_BOLD);
        }
        this.d.addView(textView);
        textView.setText(this.B.getLogBtnText());
        try {
            textView.setTextColor(this.B.getLogBtnTextColor());
        } catch (Exception unused) {
            textView.setTextColor(-1);
        }
        try {
            this.d.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this.c, this.B.getLogBtnBackgroundPath()));
        } catch (Exception e) {
            e.printStackTrace();
            this.d.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this.c, "umcsdk_login_btn_bg"));
        }
        return this.d;
    }

    private RelativeLayout i() {
        RelativeLayout relativeLayout = new RelativeLayout(this);
        this.q = relativeLayout;
        relativeLayout.setHorizontalGravity(1);
        this.q.setLayoutParams(new RelativeLayout.LayoutParams(-1, -2));
        int checkedImgWidth = this.B.getCheckedImgWidth();
        RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(e.a(this.c, Math.max(checkedImgWidth, 30)), e.a(this.c, Math.max(this.B.getCheckedImgHeight(), 30)));
        if (this.B.getCheckBoxLocation() == 1) {
            layoutParams.addRule(15, -1);
        }
        RelativeLayout relativeLayout2 = new RelativeLayout(this);
        this.x = relativeLayout2;
        relativeLayout2.setId(34952);
        this.x.setLayoutParams(layoutParams);
        CheckBox checkBox = new CheckBox(this);
        this.p = checkBox;
        checkBox.setChecked(false);
        RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(e.a(this.c, this.B.getCheckedImgWidth()), e.a(this.c, this.B.getCheckedImgHeight()));
        layoutParams2.setMargins(e.a(this.c, checkedImgWidth > 30 ? 0.0f : 30 - checkedImgWidth), 0, 0, 0);
        layoutParams2.addRule(11, -1);
        if (this.B.getCheckBoxLocation() == 1) {
            layoutParams2.addRule(15, -1);
        }
        this.p.setLayoutParams(layoutParams2);
        this.x.addView(this.p);
        this.q.addView(this.x);
        TextView textView = new TextView(this);
        textView.setTextSize(2, this.B.getPrivacyTextSize());
        RelativeLayout.LayoutParams layoutParams3 = new RelativeLayout.LayoutParams(-2, -2);
        layoutParams3.setMargins(e.a(this.c, 5.0f), 0, 0, e.a(this.c, 5.0f));
        layoutParams3.addRule(1, 34952);
        textView.setLayoutParams(layoutParams3);
        this.q.addView(textView);
        textView.setTextColor(this.B.getClauseBaseColor());
        textView.setText(e.a(this, this.z, this.y, this.e, this.j, this.k));
        textView.setLineSpacing(8.0f, 1.0f);
        textView.setIncludeFontPadding(false);
        if (this.B.isPrivacyTextBold()) {
            textView.setTypeface(Typeface.DEFAULT_BOLD);
        }
        if (this.B.isPrivacyTextGravityCenter()) {
            textView.setGravity(17);
        }
        textView.setHighlightColor(getResources().getColor(R.color.transparent));
        this.q.setOnClickListener(new View.OnClickListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.10
            @Override // android.view.View.OnClickListener
            public void onClick(View view) {
                GenLoginAuthActivity.this.p.setChecked(!GenLoginAuthActivity.this.p.isChecked());
            }
        });
        textView.setMovementMethod(new LinkMovementMethod() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.11
            @Override // android.text.method.LinkMovementMethod, android.text.method.ScrollingMovementMethod, android.text.method.BaseMovementMethod, android.text.method.MovementMethod
            public boolean onTouchEvent(TextView textView2, Spannable spannable, MotionEvent motionEvent) {
                boolean zOnTouchEvent = super.onTouchEvent(textView2, spannable, motionEvent);
                if (!zOnTouchEvent && motionEvent.getAction() == 1) {
                    ViewParent parent = textView2.getParent();
                    if (parent instanceof ViewGroup) {
                        return ((ViewGroup) parent).performClick();
                    }
                }
                return zOnTouchEvent;
            }
        });
        this.p.setButtonDrawable(new ColorDrawable());
        try {
            this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this, this.B.getUncheckedImgPath()));
        } catch (Exception unused) {
            this.p.setBackgroundResource(com.cmic.gen.sdk.view.c.b(this, "umcsdk_uncheck_image"));
        }
        return this.q;
    }

    private String j() {
        this.z = this.B.getPrivacy();
        if (this.B.isPrivacyBookSymbol()) {
            this.y = String.format("《%s》", this.y);
        }
        if (this.z.contains(GenAuthThemeConfig.PLACEHOLDER)) {
            this.z = this.z.replace(GenAuthThemeConfig.PLACEHOLDER, this.y);
        }
        return this.z;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void k() {
        this.d.setClickable(true);
        this.p.setClickable(true);
    }

    private void l() {
        this.d.setClickable(false);
        this.p.setClickable(false);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(boolean z) {
        try {
            com.cmic.gen.sdk.d.a.a("authPageOut");
            a("200020", "登录页面关闭", this.m, null);
        } catch (Exception e) {
            com.cmic.gen.sdk.d.c.b.add(e);
            e.printStackTrace();
        }
    }

    @Override // android.app.Activity, android.view.KeyEvent.Callback
    public boolean onKeyUp(int i, KeyEvent keyEvent) {
        if (i != 4 || keyEvent.isCanceled() || keyEvent.getRepeatCount() != 0) {
            return true;
        }
        if (this.B.getGenBackPressedListener() != null) {
            this.B.getGenBackPressedListener().onBackPressed();
        }
        if (this.B.getWindowWidth() != 0 && !this.B.isBackButton()) {
            return true;
        }
        a(false);
        return true;
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        try {
            this.b.removeCallbacksAndMessages(null);
            com.cmic.gen.sdk.d.a.a("timeOnAuthPage", (System.currentTimeMillis() - this.s) + "");
            if (this.p.isChecked()) {
                com.cmic.gen.sdk.d.a.a("authPrivacyState", "1");
            } else {
                com.cmic.gen.sdk.d.a.a("authPrivacyState", "0");
            }
            com.cmic.gen.sdk.d.a.a(this.c.getApplicationContext(), this.m);
            com.cmic.gen.sdk.d.a.a();
            this.F = null;
            com.cmic.gen.sdk.view.b.a().c();
            this.u.removeCallbacksAndMessages(null);
        } catch (Exception e) {
            com.cmic.gen.sdk.e.c.a(f1684a, "GenLoginAuthActivity clear failed");
            com.cmic.gen.sdk.d.c.b.add(e);
            e.printStackTrace();
        }
        super.onDestroy();
    }

    private class c implements Runnable {
        private com.cmic.gen.sdk.a b;
        private boolean c;

        c(com.cmic.gen.sdk.a aVar) {
            this.b = aVar;
        }

        @Override // java.lang.Runnable
        public void run() {
            if (a(true)) {
                JSONObject jSONObject = new JSONObject();
                try {
                    jSONObject.put("resultCode", "102507");
                    jSONObject.put("resultString", "请求超时");
                } catch (JSONException e) {
                    e.printStackTrace();
                }
                GenLoginAuthActivity.this.w = false;
                com.cmic.gen.sdk.d.a.a("authClickFailed");
                GenLoginAuthActivity.this.u.sendEmptyMessage(1);
                long jB = this.b.b("loginTime", 0L);
                if (jB != 0) {
                    this.b.a("loginTime", System.currentTimeMillis() - jB);
                }
                GenLoginAuthActivity.this.a("102507", "请求超时", this.b, jSONObject);
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        public synchronized boolean a(boolean z) {
            boolean z2;
            z2 = this.c;
            this.c = z;
            return !z2;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void m() {
        try {
            if (this.t >= 5) {
                Toast.makeText(this.c, "网络不稳定,请返回重试其他登录方式", 1).show();
                this.d.setClickable(true);
                return;
            }
            StackTraceElement[] stackTrace = Thread.currentThread().getStackTrace();
            StringBuilder sb = new StringBuilder();
            for (StackTraceElement stackTraceElement : stackTrace) {
                com.cmic.gen.sdk.e.c.a("stack", stackTraceElement.getClassName());
                String className = stackTraceElement.getClassName();
                if (!TextUtils.isEmpty(className) && className.contains("com.cmic.gen.sdk.activity") && !sb.toString().contains(className)) {
                    sb.append(className);
                    sb.append(";");
                }
            }
            this.m.a("loginTime", System.currentTimeMillis());
            String strB = this.m.b("traceId", "");
            if (!TextUtils.isEmpty(strB) && com.cmic.gen.sdk.e.e.a(strB)) {
                String strC = q.c();
                this.m.a("traceId", strC);
                com.cmic.gen.sdk.e.e.a(strC, this.v);
            }
            b();
            l();
            c cVar = new c(this.m);
            this.b.postDelayed(cVar, GenAuthnHelper.getInstance((Context) this).getOverTime());
            n.a(new b(this, cVar));
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2, com.cmic.gen.sdk.a aVar, JSONObject jSONObject) {
        try {
            if (this.b == null) {
                this.b = new Handler(getMainLooper());
                this.u = new a(this);
            }
            this.b.removeCallbacksAndMessages(null);
            if ("103000".equals(str)) {
                if (GenAuthnHelper.getInstance((Context) this) == null || com.cmic.gen.sdk.e.e.c(aVar.b("traceId")) == null) {
                    return;
                }
                aVar.a("keepListener", true);
                GenAuthnHelper.getInstance((Context) this).callBackResult(str, str2, aVar, jSONObject);
                return;
            }
            if ("200020".equals(str)) {
                if (GenAuthnHelper.getInstance((Context) this) != null) {
                    if (com.cmic.gen.sdk.e.e.c(aVar.b("traceId")) != null) {
                        GenAuthnHelper.getInstance((Context) this).callBackResult(str, str2, aVar, jSONObject);
                        a();
                        return;
                    } else {
                        a();
                        return;
                    }
                }
                return;
            }
            aVar.a("keepListener", true);
            GenAuthnHelper.getInstance((Context) this).callBackResult(str, str2, aVar, jSONObject);
        } catch (Exception e) {
            com.cmic.gen.sdk.e.c.a(f1684a, "CallbackResult:未知错误");
            e.printStackTrace();
        }
    }

    public void a() {
        Dialog dialog = null;
        this.b.removeCallbacksAndMessages(null);
        d dVar = this.e;
        if (dVar != null && dVar.isShowing()) {
            this.e.dismiss();
        }
        d dVar2 = this.f;
        if (dVar2 != null && dVar2.isShowing()) {
            this.f.dismiss();
        }
        c();
        this.F = null;
        if (0 != 0 && dialog.isShowing()) {
            this.F.dismiss();
        }
        RelativeLayout relativeLayout = this.q;
        if (relativeLayout != null) {
            relativeLayout.clearAnimation();
        }
        com.cmic.gen.sdk.view.b.a().f1702a = 0;
        finish();
        if (this.B.getAuthPageActOut() == null || this.B.getActivityIn() == null) {
            return;
        }
        overridePendingTransition(com.cmic.gen.sdk.view.c.c(this, this.B.getActivityIn()), com.cmic.gen.sdk.view.c.c(this, this.B.getAuthPageActOut()));
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        try {
            int id = view.getId();
            if (id != 17476) {
                if (id == 26214) {
                    a(false);
                    return;
                } else {
                    if (id != 34952) {
                        return;
                    }
                    if (this.p.isChecked()) {
                        this.p.setChecked(false);
                        return;
                    } else {
                        this.p.setChecked(true);
                        return;
                    }
                }
            }
            if (!this.p.isChecked()) {
                if (this.B.getGenAuthLoginListener() != null) {
                    this.B.getGenAuthLoginListener().onAuthLoginListener(this.c, new AuthLoginCallBack() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.2
                        @Override // com.cmic.gen.sdk.view.AuthLoginCallBack
                        public void onAuthLoginCallBack(boolean z) {
                            if (z) {
                                GenLoginAuthActivity.this.p.setChecked(true);
                                GenLoginAuthActivity.a(GenLoginAuthActivity.this, 1);
                                GenLoginAuthActivity.this.m();
                            }
                        }
                    });
                    return;
                }
                if (this.B.getPrivacyAnimation() != null) {
                    this.q.startAnimation(AnimationUtils.loadAnimation(this.c, com.cmic.gen.sdk.view.c.c(this.c, this.B.getPrivacyAnimation())));
                }
                if (this.B.getGenCheckBoxListener() != null) {
                    this.B.getGenCheckBoxListener().onLoginClick(this.c, null);
                    return;
                } else if (!TextUtils.isEmpty(this.B.getCheckTipText())) {
                    Toast.makeText(this.c, this.B.getCheckTipText(), 1).show();
                    return;
                }
            }
            this.t++;
            m();
        } catch (Exception e) {
            com.cmic.gen.sdk.d.c.b.add(e);
            e.printStackTrace();
        }
    }

    private static class a extends Handler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        WeakReference<GenLoginAuthActivity> f1696a;

        a(GenLoginAuthActivity genLoginAuthActivity) {
            this.f1696a = new WeakReference<>(genLoginAuthActivity);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            try {
                a(message);
            } catch (Exception e) {
                com.cmic.gen.sdk.d.c.b.add(e);
                e.printStackTrace();
            }
        }

        private void a(Message message) {
            GenLoginAuthActivity genLoginAuthActivity = this.f1696a.get();
            if (genLoginAuthActivity == null || message.what != 1) {
                return;
            }
            genLoginAuthActivity.c();
            genLoginAuthActivity.k();
        }
    }

    public void b() {
        com.cmic.gen.sdk.e.c.a(f1684a, "loginClickStart");
        try {
            this.E = true;
            if (this.B.getGenLoginClickListener() != null) {
                this.B.getGenLoginClickListener().onLoginClickStart(this.c, null);
            } else {
                if (this.F != null) {
                    this.F.show();
                    return;
                }
                AlertDialog alertDialogCreate = new AlertDialog.Builder(this).create();
                this.F = alertDialogCreate;
                alertDialogCreate.setCancelable(false);
                this.F.setCanceledOnTouchOutside(false);
                this.F.setOnKeyListener(new DialogInterface.OnKeyListener() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.3
                    @Override // android.content.DialogInterface.OnKeyListener
                    public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                        return i == 4;
                    }
                });
                RelativeLayout relativeLayout = new RelativeLayout(this.F.getContext());
                relativeLayout.setLayoutParams(new RelativeLayout.LayoutParams(-1, -2));
                ImageView imageView = new ImageView(this.F.getContext());
                imageView.setImageResource(com.cmic.gen.sdk.view.c.b(this.c, "umcsdk_dialog_loading"));
                RelativeLayout.LayoutParams layoutParams = new RelativeLayout.LayoutParams(80, 80);
                layoutParams.addRule(13, -1);
                relativeLayout.addView(imageView, layoutParams);
                if (this.F.getWindow() != null) {
                    this.F.getWindow().setDimAmount(0.0f);
                }
                this.F.setContentView(relativeLayout);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        com.cmic.gen.sdk.e.c.a(f1684a, "loginClickStart");
    }

    public void c() {
        try {
            com.cmic.gen.sdk.e.c.a(f1684a, "loginClickComplete");
            if (this.B.getGenLoginClickListener() != null && this.E) {
                this.E = false;
                this.B.getGenLoginClickListener().onLoginClickComplete(this.c, null);
            } else if (this.F != null && this.F.isShowing()) {
                this.F.dismiss();
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private static class b extends n.a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        WeakReference<GenLoginAuthActivity> f1697a;
        WeakReference<c> b;

        protected b(GenLoginAuthActivity genLoginAuthActivity, c cVar) {
            this.f1697a = new WeakReference<>(genLoginAuthActivity);
            this.b = new WeakReference<>(cVar);
        }

        /* JADX INFO: Access modifiers changed from: private */
        public boolean b() {
            c cVar = this.b.get();
            if (this.f1697a.get() == null || cVar == null) {
                return false;
            }
            return cVar.a(false);
        }

        @Override // com.cmic.gen.sdk.e.n.a
        protected void a() {
            final GenLoginAuthActivity genLoginAuthActivity = this.f1697a.get();
            genLoginAuthActivity.m.a("logintype", 1);
            h.a(true, false);
            genLoginAuthActivity.n.b(genLoginAuthActivity.m, new com.cmic.gen.sdk.auth.b() { // from class: com.cmic.gen.sdk.view.GenLoginAuthActivity.b.1
                @Override // com.cmic.gen.sdk.auth.b
                public void a(String str, String str2, com.cmic.gen.sdk.a aVar, JSONObject jSONObject) {
                    if (b.this.b()) {
                        long jB = aVar.b("loginTime", 0L);
                        String strB = aVar.b("phonescrip");
                        if (jB != 0) {
                            aVar.a("loginTime", System.currentTimeMillis() - jB);
                        }
                        if (!"103000".equals(str) || TextUtils.isEmpty(strB)) {
                            genLoginAuthActivity.w = false;
                            com.cmic.gen.sdk.d.a.a("authClickFailed");
                        } else {
                            com.cmic.gen.sdk.d.a.a("authClickSuccess");
                            genLoginAuthActivity.w = true;
                        }
                        genLoginAuthActivity.a(str, str2, aVar, jSONObject);
                        try {
                            Thread.sleep(1000L);
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                        genLoginAuthActivity.u.sendEmptyMessage(1);
                    }
                }
            });
        }
    }
}
