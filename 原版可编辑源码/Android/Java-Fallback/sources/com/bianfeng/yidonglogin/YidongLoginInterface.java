package com.bianfeng.yidonglogin;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class YidongLoginInterface extends com.bianfeng.ymnsdk.feature.plugin.YmnChannelInterface {
    public static final java.lang.String YIDONGLOGIN_LOGIN = "yidonglogin_login";
    private static volatile boolean isSuc = false;
    private static volatile java.lang.String loginText = "";
    private java.lang.String app_id;
    private java.lang.String app_key;
    private java.lang.String clause1;
    private java.lang.String clause2;
    private java.lang.String clause3;
    private java.lang.String clause4;
    private java.lang.String clause_url1;
    private java.lang.String clause_url2;
    private java.lang.String clause_url3;
    private java.lang.String clause_url4;
    private com.cmic.gen.sdk.auth.GenAuthnHelper mAuthnHelper;
    private com.cmic.gen.sdk.auth.GenTokenListener mListener;
    private java.lang.String privacy;
    private com.cmic.gen.sdk.view.GenAuthThemeConfig.Builder themeConfigBuilder;







    static {
            return
    }

    public YidongLoginInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    static boolean access$000() {
            boolean r0 = com.bianfeng.yidonglogin.YidongLoginInterface.isSuc
            return r0
    }

    static boolean access$002(boolean r0) {
            com.bianfeng.yidonglogin.YidongLoginInterface.isSuc = r0
            return r0
    }

    static com.cmic.gen.sdk.auth.GenAuthnHelper access$100(com.bianfeng.yidonglogin.YidongLoginInterface r0) {
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = r0.mAuthnHelper
            return r0
    }

    private void displayLogin() {
            r5 = this;
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = r5.mAuthnHelper
            java.lang.String r1 = r5.app_id
            java.lang.String r2 = r5.app_key
            com.cmic.gen.sdk.auth.GenTokenListener r3 = r5.mListener
            r4 = 3333(0xd05, float:4.67E-42)
            r0.loginAuth(r1, r2, r3, r4)
            return
    }

    private void initConfig() {
            r2 = this;
            java.lang.String r0 = "YIDONGLOGIN_APPID"
            java.lang.String r0 = r2.getPropertie(r0)
            r2.app_id = r0
            java.lang.String r0 = "YIDONGLOGIN_APPKEY"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.app_key = r0
            java.lang.String r0 = "YIDONGLOGIN_PRIVACY"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.privacy = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE1"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause1 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE_URL1"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause_url1 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE2"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause2 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE_URL2"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause_url2 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE3"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause3 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE_URL3"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause_url3 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE4"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause4 = r0
            java.lang.String r0 = "YIDONGLOGIN_CLAUSE_URL4"
            java.lang.String r0 = r2.getMetaData(r0)
            r2.clause_url4 = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app_id---->"
            r0.append(r1)
            java.lang.String r1 = r2.app_id
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "app_key---->"
            r0.append(r1)
            java.lang.String r1 = r2.app_key
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "privacy---->"
            r0.append(r1)
            java.lang.String r1 = r2.privacy
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause1---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause1
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause_url1---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause_url1
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause2---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause2
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause_url2---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause_url2
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause3---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause3
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause_url3---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause_url3
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause4---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause4
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "clause_url4---->"
            r0.append(r1)
            java.lang.String r1 = r2.clause_url4
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            return
    }

    private void initSdk() {
            r22 = this;
            r0 = r22
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "initSdk-->"
            r1.append(r2)
            java.lang.String r2 = r0.app_id
            r1.append(r2)
            java.lang.String r2 = "--"
            r1.append(r2)
            java.lang.String r3 = r0.app_key
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r1)
            r1 = 0
            com.cmic.gen.sdk.auth.GenAuthnHelper.setDebugMode(r1)
            android.content.Context r2 = r22.getContext()
            android.content.Context r2 = r2.getApplicationContext()
            com.cmic.gen.sdk.auth.GenAuthnHelper r2 = com.cmic.gen.sdk.auth.GenAuthnHelper.getInstance(r2)
            r0.mAuthnHelper = r2
            com.bianfeng.yidonglogin.YidongLoginInterface$1 r3 = new com.bianfeng.yidonglogin.YidongLoginInterface$1
            r3.<init>(r0)
            r2.setPageInListener(r3)
            com.bianfeng.yidonglogin.YidongLoginInterface$2 r2 = new com.bianfeng.yidonglogin.YidongLoginInterface$2
            r2.<init>(r0)
            r0.mListener = r2
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout
            android.content.Context r3 = r22.getContext()
            r2.<init>(r3)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            r4 = -1
            r3.<init>(r4, r4)
            r2.setLayoutParams(r3)
            android.app.Activity r3 = r22.getActivity()
            android.view.LayoutInflater r3 = r3.getLayoutInflater()
            android.app.Activity r5 = r22.getActivity()
            java.lang.String r6 = "R.layout.yidonglogin_title_layout"
            int r5 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r5, r6)
            android.view.View r2 = r3.inflate(r5, r2, r1)
            android.app.Activity r3 = r22.getActivity()
            java.lang.String r5 = "R.id.yidonglogin_back"
            int r3 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r3, r5)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r5 = 1
            r3.setClickable(r5)
            com.bianfeng.yidonglogin.YidongLoginInterface$3 r6 = new com.bianfeng.yidonglogin.YidongLoginInterface$3
            r6.<init>(r0)
            r3.setOnClickListener(r6)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r3 = new com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder
            r3.<init>()
            r6 = -16742704(0xffffffffff0086d0, float:-1.7084117E38)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r3 = r3.setStatusBar(r6, r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r3.setAuthContentView(r2)
            r3 = 20
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNavTextSize(r3)
            r6 = -16742960(0xffffffffff0085d0, float:-1.7083598E38)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNavTextColor(r6)
            r7 = -16776961(0xffffffffff0000ff, float:-1.7014636E38)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNavColor(r7)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNumberSize(r3, r5)
            r7 = -13421773(0xffffffffff333333, float:-2.3819765E38)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNumberColor(r7)
            r7 = 80
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNumberOffsetX(r7)
            r7 = 100
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNumFieldOffsetY_B(r7)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setNumFieldOffsetY(r7)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnTextColor(r4)
            java.lang.String r7 = "umcsdk_login_btn_bg"
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnImgPath(r7)
            java.lang.String r7 = ""
            r8 = 15
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnText(r7, r4, r8, r1)
            r4 = 200(0xc8, float:2.8E-43)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnOffsetY_B(r4)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnOffsetY(r4)
            r4 = 30
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnMargin(r4, r4)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setCheckTipText(r7)
            com.bianfeng.yidonglogin.YidongLoginInterface$6 r7 = new com.bianfeng.yidonglogin.YidongLoginInterface$6
            r7.<init>(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setGenBackPressedListener(r7)
            com.bianfeng.yidonglogin.YidongLoginInterface$5 r7 = new com.bianfeng.yidonglogin.YidongLoginInterface$5
            r7.<init>(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setLogBtnClickListener(r7)
            com.bianfeng.yidonglogin.YidongLoginInterface$4 r7 = new com.bianfeng.yidonglogin.YidongLoginInterface$4
            r7.<init>(r0)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setGenCheckBoxListener(r7)
            java.lang.String r7 = "umcsdk_check_image"
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setCheckedImgPath(r7)
            java.lang.String r8 = "umcsdk_uncheck_image"
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setUncheckedImgPath(r8)
            r9 = 9
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setCheckBoxImgPath(r7, r8, r9, r9)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r7 = r2.setPrivacyState(r1)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r8 = "登录即同意$$运营商条款$$"
            r2.append(r8)
            java.lang.String r8 = r0.privacy
            r2.append(r8)
            java.lang.String r8 = r2.toString()
            java.lang.String r9 = r0.clause1
            java.lang.String r10 = r0.clause_url1
            java.lang.String r11 = r0.clause2
            java.lang.String r12 = r0.clause_url2
            java.lang.String r13 = r0.clause3
            java.lang.String r14 = r0.clause_url3
            java.lang.String r15 = r0.clause4
            java.lang.String r2 = r0.clause_url4
            r16 = r2
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r16 = r7.setPrivacyAlignment(r8, r9, r10, r11, r12, r13, r14, r15, r16)
            r17 = 10
            r18 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            r19 = -16742960(0xffffffffff0085d0, float:-1.7083598E38)
            r20 = 0
            r21 = 1
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r16.setPrivacyText(r17, r18, r19, r20, r21)
            r7 = -10066330(0xffffffffff666666, float:-3.0625412E38)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setClauseColor(r7, r6)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setPrivacyMargin(r3, r4)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setPrivacyOffsetY(r4)
            r3 = 50
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setPrivacyOffsetY_B(r3)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r2 = r2.setCheckBoxLocation(r5)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r1 = r2.setAppLanguageType(r1)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r1 = r1.setPrivacyBookSymbol(r5)
            r0.themeConfigBuilder = r1
            com.cmic.gen.sdk.auth.GenAuthnHelper r2 = r0.mAuthnHelper
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r1.build()
            r2.setAuthThemeConfig(r1)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30037"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "yidonglogin"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 7
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "5.9.6"
            return r0
    }

    @Override
    public void login() {
            r3 = this;
            r0 = 0
            com.bianfeng.yidonglogin.YidongLoginInterface.isSuc = r0
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r3.themeConfigBuilder
            r1 = 300(0x12c, float:4.2E-43)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r0.setAuthPageWindowMode(r1, r1)
            r1 = 50
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r0.setNumFieldOffsetY(r1)
            r1 = 120(0x78, float:1.68E-43)
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r0.setLogBtnOffsetY(r1)
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = "R.style.ymnsdk_yidonglogin_Dialog"
            int r1 = com.bianfeng.ymnsdk.util.ResourceManger.getId(r1, r2)
            r0.setThemeId(r1)
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = r3.mAuthnHelper
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r1 = r3.themeConfigBuilder
            com.cmic.gen.sdk.view.GenAuthThemeConfig r1 = r1.build()
            r0.setAuthThemeConfig(r1)
            r3.displayLogin()
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = r2.mAuthnHelper
            r1 = 0
            if (r0 == 0) goto Ld
            r0.setAuthThemeConfig(r1)
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = r2.mAuthnHelper
            r0.setPageInListener(r1)
        Ld:
            r2.mListener = r1
            super.onDestroy()
            return
    }

    @Override
    public void onInit(android.content.Context r1) {
            r0 = this;
            super.onInit(r1)
            r0.initConfig()
            r0.initSdk()
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "yidonglogin_login")
    public void yidonglogin(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "登录"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L18
            java.lang.String r0 = "注册"
            boolean r0 = r2.contains(r0)
            if (r0 != 0) goto L18
            r2 = 105(0x69, float:1.47E-43)
            java.lang.String r0 = "未按移动要求设置登录按钮文字"
            r1.sendResult(r2, r0)
            goto L20
        L18:
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r1.themeConfigBuilder
            r0.setLogBtnText(r2)
            r1.login()
        L20:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "yidonglogin_login")
    public void yidonglogin(java.util.LinkedHashMap<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.lang.String r0 = "loginText"
            boolean r1 = r3.containsKey(r0)
            if (r1 == 0) goto L4c
            java.lang.Object r0 = r3.get(r0)
            java.lang.String r0 = (java.lang.String) r0
            com.bianfeng.yidonglogin.YidongLoginInterface.loginText = r0
            java.lang.String r0 = "agreePrivacy"
            java.lang.Object r3 = r3.get(r0)     // Catch: java.lang.Exception -> L24
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L24
            java.lang.String r0 = "1"
            boolean r3 = r3.equalsIgnoreCase(r0)     // Catch: java.lang.Exception -> L24
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = r2.themeConfigBuilder     // Catch: java.lang.Exception -> L24
            r0.setPrivacyState(r3)     // Catch: java.lang.Exception -> L24
            goto L25
        L24:
        L25:
            java.lang.String r3 = com.bianfeng.yidonglogin.YidongLoginInterface.loginText
            java.lang.String r0 = "登录"
            boolean r3 = r3.contains(r0)
            if (r3 != 0) goto L41
            java.lang.String r3 = com.bianfeng.yidonglogin.YidongLoginInterface.loginText
            java.lang.String r0 = "注册"
            boolean r3 = r3.contains(r0)
            if (r3 != 0) goto L41
            r3 = 105(0x69, float:1.47E-43)
            java.lang.String r0 = "未按移动要求设置登录按钮文字"
            r2.sendResult(r3, r0)
            goto L56
        L41:
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r3 = r2.themeConfigBuilder
            java.lang.String r0 = com.bianfeng.yidonglogin.YidongLoginInterface.loginText
            r3.setLogBtnText(r0)
            r2.login()
            goto L56
        L4c:
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r3 = r2.themeConfigBuilder
            java.lang.String r0 = ""
            r3.setLogBtnText(r0)
            r2.login()
        L56:
            return
    }
}
