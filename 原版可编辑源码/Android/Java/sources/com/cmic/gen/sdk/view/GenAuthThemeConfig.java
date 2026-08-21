package com.cmic.gen.sdk.view;

import android.text.TextUtils;
import android.view.View;
import android.widget.ImageView;
import java.util.regex.Pattern;

public class GenAuthThemeConfig {
    public static final String PLACEHOLDER = "$$运营商条款$$";
    private int A;
    private int B;
    private int C;
    private int D;
    private int E;
    private int F;
    private String G;
    private boolean H;
    private GenBackPressedListener I;
    private GenLoginClickListener J;
    private GenCheckBoxListener K;
    private GenCheckedChangeListener L;
    private GenAuthLoginListener M;
    private String N;
    private String O;
    private int P;
    private int Q;
    private boolean R;
    private String S;
    private String T;
    private String U;
    private String V;
    private String W;
    private String X;
    private String Y;
    private String Z;
    private final boolean a;
    private String aa;
    private int ab;
    private boolean ac;
    private int ad;
    private int ae;
    private boolean af;
    private int ag;
    private int ah;
    private int ai;
    private int aj;
    private int ak;
    private boolean al;
    private String am;
    private String an;
    private String ao;
    private String ap;
    private int aq;
    private int ar;
    private int as;
    private int at;
    private int au;
    private int av;
    private int aw;
    private boolean ax;
    private boolean ay;
    private String az;
    private int b;
    private boolean c;
    private View d;
    private int e;
    private int f;
    private String g;
    private int h;
    private int i;
    private int j;
    private String k;
    private int l;
    private int m;
    private ImageView.ScaleType n;
    private int o;
    private boolean p;
    private int q;
    private int r;
    private int s;
    private int t;
    private String u;
    private boolean v;
    private int w;
    private boolean x;
    private int y;
    private String z;

    public int getStatusBarColor() {
        return this.b;
    }

    public boolean isLightColor() {
        return this.c;
    }

    public View getContentView() {
        return this.d;
    }

    public int getLayoutResID() {
        return this.e;
    }

    public int getClauseLayoutResID() {
        return this.f;
    }

    public String getClauseLayoutReturnID() {
        return this.g;
    }

    public int getNavTextSize() {
        return this.h;
    }

    public int getNavTextColor() {
        return this.i;
    }

    public int getNavColor() {
        return this.j;
    }

    public String getNavReturnImgPath() {
        return this.k;
    }

    public int getNavReturnImgWidth() {
        return this.l;
    }

    public int getNavReturnImgHeight() {
        return this.m;
    }

    public ImageView.ScaleType getNavReturnImgScaleType() {
        return this.n;
    }

    public int getNumberSize() {
        return this.o;
    }

    public boolean isNumberBold() {
        return this.p;
    }

    public int getNumberColor() {
        return this.q;
    }

    public int getNumberOffsetX() {
        return this.r;
    }

    public int getNumFieldOffsetY() {
        return this.s;
    }

    public int getNumFieldOffsetY_B() {
        return this.t;
    }

    public String getLogBtnText() {
        if (this.v) {
            int i = this.aw;
            this.u = i == 1 ? "本機號碼登錄" : i == 2 ? "Login" : this.u;
        }
        return this.u;
    }

    public int getLogBtnTextSize() {
        return this.w;
    }

    public boolean isLogBtnTextBold() {
        return this.x;
    }

    public int getLogBtnTextColor() {
        return this.y;
    }

    public String getLogBtnBackgroundPath() {
        return this.z;
    }

    public int getLogBtnWidth() {
        return this.A;
    }

    public int getLogBtnHeight() {
        return this.B;
    }

    public int getLogBtnMarginLeft() {
        return this.C;
    }

    public int getLogBtnMarginRight() {
        return this.D;
    }

    public int getLogBtnOffsetY() {
        return this.E;
    }

    public int getLogBtnOffsetY_B() {
        return this.F;
    }

    public String getCheckTipText() {
        if (this.H) {
            int i = this.aw;
            this.G = i == 1 ? "請勾選同意服務條款" : i == 2 ? "Please check to agree to the terms of service" : "请勾选同意服务条款";
        }
        return this.G;
    }

    public GenBackPressedListener getGenBackPressedListener() {
        return this.I;
    }

    public GenLoginClickListener getGenLoginClickListener() {
        return this.J;
    }

    public GenCheckBoxListener getGenCheckBoxListener() {
        return this.K;
    }

    public GenCheckedChangeListener getGenCheckedChangeListener() {
        return this.L;
    }

    public GenAuthLoginListener getGenAuthLoginListener() {
        return this.M;
    }

    public String getCheckedImgPath() {
        return this.N;
    }

    public String getUncheckedImgPath() {
        return this.O;
    }

    public int getCheckedImgWidth() {
        return this.P;
    }

    public int getCheckedImgHeight() {
        return this.Q;
    }

    public boolean isPrivacyState() {
        return this.R;
    }

    public String getPrivacy() {
        return this.S;
    }

    public String getClauseName() {
        return this.T;
    }

    public String getClauseUrl() {
        return this.U;
    }

    public String getClauseName2() {
        return this.V;
    }

    public String getClauseUrl2() {
        return this.W;
    }

    public String getClauseName3() {
        return this.X;
    }

    public String getClauseUrl3() {
        return this.Y;
    }

    public String getClauseName4() {
        return this.Z;
    }

    public String getClauseUrl4() {
        return this.aa;
    }

    public int getPrivacyTextSize() {
        return this.ab;
    }

    public boolean isPrivacyTextBold() {
        return this.ac;
    }

    public int getClauseBaseColor() {
        return this.ad;
    }

    public int getClauseColor() {
        return this.ae;
    }

    public boolean isPrivacyTextGravityCenter() {
        return this.af;
    }

    public int getPrivacyMarginLeft() {
        return this.ah;
    }

    public int getPrivacyMarginRight() {
        return this.ai;
    }

    public int getPrivacyOffsetY() {
        return this.aj;
    }

    public int getPrivacyOffsetY_B() {
        return this.ak;
    }

    public boolean isPrivacyBookSymbol() {
        return this.al;
    }

    public int getCheckBoxLocation() {
        return this.ag;
    }

    public String getAuthPageActIn() {
        return this.am;
    }

    public String getActivityOut() {
        return this.an;
    }

    public String getAuthPageActOut() {
        return this.ao;
    }

    public String getActivityIn() {
        return this.ap;
    }

    public int getWindowWidth() {
        return this.aq;
    }

    public int getWindowHeight() {
        return this.ar;
    }

    public int getWindowX() {
        return this.as;
    }

    public int getWindowY() {
        return this.at;
    }

    public int getWindowBottom() {
        return this.au;
    }

    public int getThemeId() {
        return this.av;
    }

    public int getAppLanguageType() {
        return this.aw;
    }

    public boolean isFitsSystemWindows() {
        return this.ax;
    }

    public boolean isBackButton() {
        return this.ay;
    }

    public String getPrivacyAnimation() {
        return this.az;
    }

    public boolean getWebStorage() {
        return this.a;
    }

    private GenAuthThemeConfig(Builder builder) {
        this.v = true;
        this.X = null;
        this.Y = null;
        this.Z = null;
        this.aa = null;
        this.b = builder.b;
        this.c = builder.c;
        this.d = builder.d;
        this.e = builder.e;
        this.f = builder.f;
        this.g = builder.g;
        this.h = builder.h;
        this.i = builder.i;
        this.j = builder.j;
        this.k = builder.k;
        this.l = builder.l;
        this.m = builder.m;
        this.n = builder.n;
        this.o = builder.o;
        this.p = builder.p;
        this.q = builder.q;
        this.r = builder.r;
        this.s = builder.s;
        this.t = builder.t;
        this.u = builder.u;
        this.v = builder.v;
        this.w = builder.w;
        this.x = builder.x;
        this.y = builder.y;
        this.z = builder.z;
        this.A = builder.A;
        this.B = builder.B;
        this.C = builder.C;
        this.D = builder.D;
        this.E = builder.E;
        this.F = builder.F;
        this.G = builder.G;
        this.H = builder.H;
        this.I = builder.I;
        this.J = builder.J;
        this.K = builder.K;
        this.L = builder.L;
        this.N = builder.N;
        this.O = builder.O;
        this.P = builder.P;
        this.Q = builder.Q;
        this.R = builder.R;
        this.S = builder.S;
        this.T = builder.T;
        this.U = builder.U;
        this.V = builder.V;
        this.W = builder.W;
        this.X = builder.X;
        this.Y = builder.Y;
        this.Z = builder.Z;
        this.aa = builder.aa;
        this.ab = builder.ab;
        this.ac = builder.ac;
        this.ad = builder.ad;
        this.ae = builder.ae;
        this.af = builder.af;
        this.ah = builder.ag;
        this.ai = builder.ah;
        this.aj = builder.ai;
        this.ak = builder.aj;
        this.al = builder.ak;
        this.ag = builder.al;
        this.am = builder.am;
        this.an = builder.an;
        this.ao = builder.ao;
        this.ap = builder.ap;
        this.aq = builder.aq;
        this.ar = builder.ar;
        this.as = builder.as;
        this.at = builder.at;
        this.au = builder.au;
        this.av = builder.av;
        this.aw = builder.aw;
        this.ax = builder.ax;
        this.ay = builder.ay;
        this.az = builder.az;
        this.a = builder.a;
        this.M = builder.M;
    }

    public static class Builder {
        private String G;
        private boolean H;
        private GenBackPressedListener I;
        private GenLoginClickListener J;
        private GenCheckBoxListener K;
        private GenCheckedChangeListener L;
        private GenAuthLoginListener M;
        public boolean a;
        private int al;
        private String am;
        private String an;
        private String ao;
        private String ap;
        private int aq;
        private int ar;
        private int as;
        private int at;
        private String az;
        private String g;
        private int b = 0;
        private boolean c = false;
        private View d = null;
        private int e = -1;
        private int f = -1;
        private int h = 17;
        private int i = -1;
        private int j = -16742704;
        private String k = "return_bg";
        private int l = -2;
        private int m = -2;
        private ImageView.ScaleType n = ImageView.ScaleType.CENTER;
        private int o = 18;
        private boolean p = false;
        private int q = -16742704;
        private int r = 0;
        private int s = 184;
        private int t = 0;
        private String u = "本机号码一键登录";
        private boolean v = true;
        private int w = 15;
        private boolean x = false;
        private int y = -1;
        private String z = "umcsdk_login_btn_bg";
        private int A = -1;
        private int B = 36;
        private int C = 46;
        private int D = 46;
        private int E = 254;
        private int F = 0;
        private String N = "umcsdk_check_image";
        private String O = "umcsdk_uncheck_image";
        private int P = 9;
        private int Q = 9;
        private boolean R = false;
        private String S = "登录即同意$$运营商条款$$并使用本机号码登录";
        private String T = null;
        private String U = null;
        private String V = null;
        private String W = null;
        private String X = null;
        private String Y = null;
        private String Z = null;
        private String aa = null;
        private int ab = 10;
        private boolean ac = false;
        private int ad = -10066330;
        private int ae = -16007674;
        private boolean af = false;
        private int ag = 52;
        private int ah = 52;
        private int ai = 0;
        private int aj = 30;
        private boolean ak = true;
        private int au = 0;
        private int av = -1;
        private int aw = 0;
        private boolean ax = true;
        private boolean ay = true;

        public Builder setStatusBar(int i, boolean z) {
            this.b = i;
            this.c = z;
            return this;
        }

        public Builder setAuthContentView(View view) {
            this.d = view;
            this.e = -1;
            return this;
        }

        public Builder setAuthLayoutResID(int i) {
            this.e = i;
            this.d = null;
            return this;
        }

        public Builder setClauseLayoutResID(int i, String str) {
            this.f = i;
            this.g = str;
            return this;
        }

        public Builder setNavTextSize(int i) {
            this.h = i;
            return this;
        }

        public Builder setNavTextColor(int i) {
            this.i = i;
            return this;
        }

        public Builder setNavColor(int i) {
            this.j = i;
            return this;
        }

        public Builder setNumberSize(int i, boolean z) {
            if (i > 8) {
                this.o = i;
                this.p = z;
            }
            return this;
        }

        public Builder setNumberColor(int i) {
            this.q = i;
            return this;
        }

        public Builder setNumberOffsetX(int i) {
            this.r = i;
            return this;
        }

        public Builder setNumFieldOffsetY(int i) {
            this.s = i;
            this.t = 0;
            return this;
        }

        public Builder setNumFieldOffsetY_B(int i) {
            this.t = i;
            this.s = 0;
            return this;
        }

        public Builder setLogBtnText(String str) {
            if (!TextUtils.isEmpty(str) && !Pattern.compile("^\\s*\\n*$").matcher(str).matches()) {
                this.u = str;
                this.v = false;
            }
            return this;
        }

        public Builder setLogBtnText(String str, int i, int i2, boolean z) {
            if (!TextUtils.isEmpty(str) && !Pattern.compile("^\\s*\\n*$").matcher(str).matches()) {
                this.u = str;
                this.v = false;
            }
            this.y = i;
            this.w = i2;
            this.x = z;
            return this;
        }

        public Builder setLogBtnTextColor(int i) {
            this.y = i;
            return this;
        }

        public Builder setLogBtnImgPath(String str) {
            this.z = str;
            return this;
        }

        public Builder setLogBtn(int i, int i2) {
            this.A = i;
            this.B = i2;
            return this;
        }

        public Builder setLogBtnMargin(int i, int i2) {
            this.C = i;
            this.D = i2;
            return this;
        }

        public Builder setLogBtnOffsetY(int i) {
            this.E = i;
            this.F = 0;
            return this;
        }

        public Builder setGenBackPressedListener(GenBackPressedListener genBackPressedListener) {
            this.I = genBackPressedListener;
            return this;
        }

        public Builder setLogBtnClickListener(GenLoginClickListener genLoginClickListener) {
            this.J = genLoginClickListener;
            return this;
        }

        public Builder setGenCheckBoxListener(GenCheckBoxListener genCheckBoxListener) {
            this.K = genCheckBoxListener;
            return this;
        }

        public Builder setGenCheckedChangeListener(GenCheckedChangeListener genCheckedChangeListener) {
            this.L = genCheckedChangeListener;
            return this;
        }

        public Builder setGenAuthLoginListener(GenAuthLoginListener genAuthLoginListener) {
            this.M = genAuthLoginListener;
            return this;
        }

        public Builder setLogBtnOffsetY_B(int i) {
            this.F = i;
            this.E = 0;
            return this;
        }

        public Builder setCheckTipText(String str) {
            boolean z = TextUtils.isEmpty(str) || str.length() > 100;
            this.H = z;
            if (z) {
                str = "请勾选同意服务条款";
            }
            this.G = str;
            return this;
        }

        public Builder setCheckedImgPath(String str) {
            this.N = str;
            return this;
        }

        public Builder setUncheckedImgPath(String str) {
            this.O = str;
            return this;
        }

        public Builder setCheckBoxImgPath(String str, String str2, int i, int i2) {
            this.N = str;
            this.O = str2;
            this.P = i;
            this.Q = i2;
            return this;
        }

        public Builder setPrivacyState(boolean z) {
            this.R = z;
            return this;
        }

        public Builder setPrivacyAlignment(String str, String str2, String str3, String str4, String str5, String str6, String str7, String str8, String str9) {
            if (str.contains(GenAuthThemeConfig.PLACEHOLDER)) {
                this.S = str;
                this.T = str2;
                this.U = str3;
                this.V = str4;
                this.W = str5;
                this.X = str6;
                this.Y = str7;
                this.Z = str8;
                this.aa = str9;
            }
            return this;
        }

        public Builder setPrivacyText(int i, int i2, int i3, boolean z, boolean z2) {
            this.ab = i;
            this.ad = i2;
            this.ae = i3;
            this.af = z;
            this.ac = z2;
            return this;
        }

        public Builder setClauseColor(int i, int i2) {
            this.ad = i;
            this.ae = i2;
            return this;
        }

        public Builder setPrivacyMargin(int i, int i2) {
            this.ag = i;
            this.ah = i2;
            return this;
        }

        public Builder setPrivacyOffsetY(int i) {
            this.ai = i;
            this.aj = 0;
            return this;
        }

        public Builder setPrivacyOffsetY_B(int i) {
            this.aj = i;
            this.ai = 0;
            return this;
        }

        public Builder setPrivacyBookSymbol(boolean z) {
            this.ak = z;
            return this;
        }

        public Builder setCheckBoxLocation(int i) {
            this.al = i;
            return this;
        }

        public Builder setAuthPageActIn(String str, String str2) {
            this.am = str;
            this.an = str2;
            return this;
        }

        public Builder setAuthPageActOut(String str, String str2) {
            this.ao = str2;
            this.ap = str;
            return this;
        }

        public Builder setAuthPageWindowMode(int i, int i2) {
            this.aq = i;
            this.ar = i2;
            return this;
        }

        public Builder setAuthPageWindowOffset(int i, int i2) {
            this.as = i;
            this.at = i2;
            return this;
        }

        public Builder setWindowBottom(int i) {
            this.au = i;
            return this;
        }

        public Builder setThemeId(int i) {
            this.av = i;
            return this;
        }

        public Builder setAppLanguageType(int i) {
            this.aw = i;
            return this;
        }

        public Builder setFitsSystemWindows(boolean z) {
            this.ax = z;
            return this;
        }

        public Builder setBackButton(boolean z) {
            this.ay = z;
            return this;
        }

        public Builder setPrivacyAnimation(String str) {
            this.az = str;
            return this;
        }

        public GenAuthThemeConfig build() {
            return new GenAuthThemeConfig(this);
        }

        public Builder setWebDomStorage(boolean z) {
            this.a = z;
            return this;
        }
    }
}
