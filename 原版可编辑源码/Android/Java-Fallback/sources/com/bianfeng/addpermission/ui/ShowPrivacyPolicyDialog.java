package com.bianfeng.addpermission.ui;

public class ShowPrivacyPolicyDialog extends android.app.Dialog implements android.view.View.OnClickListener {
    private final int CLICK_TIME;
    private android.widget.Button cancel_btn;
    private android.widget.TextView check_policy_tv;
    private android.widget.TextView content_tv;
    private android.app.Activity context;
    private long lastClickTime;
    private android.widget.Button ok_btn;
    private android.widget.RelativeLayout show_policy_bg_rl;
    private android.widget.TextView title_tv;




    public ShowPrivacyPolicyDialog(android.app.Activity r3) {
            r2 = this;
            java.lang.String r0 = "R.style.DialogActivityTheme"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r3, r0)
            r2.<init>(r3, r0)
            r0 = 0
            r2.lastClickTime = r0
            r0 = 500(0x1f4, float:7.0E-43)
            r2.CLICK_TIME = r0
            r2.context = r3
            java.lang.String r0 = "R.layout.dialog_show_privacypolicy_v2"
            int r3 = com.bianfeng.addpermission.common.ResourceManger.getId(r3, r0)
            r2.setContentView(r3)
            return
    }

    static long access$000(com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog r2) {
            long r0 = r2.lastClickTime
            return r0
    }

    static long access$002(com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog r0, long r1) {
            r0.lastClickTime = r1
            return r1
    }

    static android.app.Activity access$100(com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog r0) {
            android.app.Activity r0 = r0.context
            return r0
    }

    static void access$200(com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog r0) {
            r0.initcheckPolicy()
            return
    }

    private void initTheme() {
            r2 = this;
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_TITLE_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L19
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L19
            android.widget.TextView r1 = r2.title_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L19:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_TITLE_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L32
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L32
            android.widget.TextView r1 = r2.title_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setBackgroundColor(r0)
        L32:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_CONTENT_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L4b
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L4b
            android.widget.TextView r1 = r2.content_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L4b:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_CONTENT_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L64
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L64
            android.widget.TextView r1 = r2.content_tv
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setBackgroundColor(r0)
        L64:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_REFUSE_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L7d
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L7d
            android.widget.Button r1 = r2.cancel_btn
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        L7d:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_REFUSE_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto La1
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto La1
            android.widget.Button r1 = r2.cancel_btn
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            android.graphics.drawable.GradientDrawable r1 = (android.graphics.drawable.GradientDrawable) r1
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setColor(r0)
            android.widget.Button r0 = r2.cancel_btn
            r0.setBackground(r1)
        La1:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_AGREE_TEXT_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto Lba
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto Lba
            android.widget.Button r1 = r2.ok_btn
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setTextColor(r0)
        Lba:
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_AGREE_BACKGROUND_COLOR"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto Lde
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto Lde
            android.widget.Button r1 = r2.ok_btn
            android.graphics.drawable.Drawable r1 = r1.getBackground()
            android.graphics.drawable.GradientDrawable r1 = (android.graphics.drawable.GradientDrawable) r1
            int r0 = android.graphics.Color.parseColor(r0)
            r1.setColor(r0)
            android.widget.Button r0 = r2.ok_btn
            r0.setBackground(r1)
        Lde:
            return
    }

    private void initcheckPolicy() {
            r10 = this;
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            java.lang.String r1 = "您可通过阅读完整的《服务协议》和《隐私政策》来了解详细信息"
            r0.append(r1)
            com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$1 r1 = new com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$1
            r1.<init>(r10)
            r2 = 15
            r3 = 9
            r4 = 33
            r0.setSpan(r1, r3, r2, r4)
            com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$2 r1 = new com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$2
            r1.<init>(r10)
            r5 = 22
            r6 = 16
            r0.setSpan(r1, r6, r5, r4)
            android.app.Activity r1 = r10.context
            java.lang.String r7 = "ANDPERMISSION_POLICY_NAME_TEXT_COLOR"
            java.lang.String r1 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getMetaData(r1, r7)
            if (r1 == 0) goto L3a
            boolean r7 = r1.isEmpty()
            if (r7 != 0) goto L3a
            r7 = 1
            java.lang.String r1 = r1.substring(r7)
            goto L3c
        L3a:
            java.lang.String r1 = "fd6f4e"
        L3c:
            android.text.style.ForegroundColorSpan r7 = new android.text.style.ForegroundColorSpan
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "#"
            r8.append(r9)
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            int r8 = android.graphics.Color.parseColor(r8)
            r7.<init>(r8)
            r0.setSpan(r7, r6, r5, r4)
            android.text.style.ForegroundColorSpan r5 = new android.text.style.ForegroundColorSpan
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r9)
            r6.append(r1)
            java.lang.String r1 = r6.toString()
            int r1 = android.graphics.Color.parseColor(r1)
            r5.<init>(r1)
            r0.setSpan(r5, r3, r2, r4)
            android.widget.TextView r1 = r10.check_policy_tv
            android.text.method.MovementMethod r2 = android.text.method.LinkMovementMethod.getInstance()
            r1.setMovementMethod(r2)
            android.widget.TextView r1 = r10.check_policy_tv
            r1.setText(r0)
            return
    }

    private void initdata() {
            r2 = this;
            android.widget.TextView r0 = r2.content_tv
            android.app.Activity r1 = r2.context
            java.lang.String r1 = com.bianfeng.addpermission.common.PolicyConstantsUtils.getContentTv(r1)
            r0.setText(r1)
            android.widget.RelativeLayout r0 = r2.show_policy_bg_rl
            com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$3 r1 = new com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog$3
            r1.<init>(r2)
            r0.setOnClickListener(r1)
            android.app.Activity r0 = r2.context
            java.lang.String r1 = "ANDPERMISSION_POLICY_TITLE_TEXT"
            java.lang.String r0 = com.bianfeng.addpermission.common.AddPermissionToolUtils.getParamsInfo(r0, r1)
            if (r0 == 0) goto L2a
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L2a
            android.widget.TextView r1 = r2.title_tv
            r1.setText(r0)
        L2a:
            r2.initcheckPolicy()
            return
    }

    public static void openBrowser(android.content.Context r2, java.lang.String r3) {
            android.content.Intent r0 = new android.content.Intent
            r0.<init>()
            java.lang.String r1 = "android.intent.action.VIEW"
            r0.setAction(r1)
            android.net.Uri r3 = android.net.Uri.parse(r3)
            r0.setData(r3)
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            android.content.ComponentName r3 = r0.resolveActivity(r3)
            if (r3 == 0) goto L2c
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            r0.resolveActivity(r3)
            java.lang.String r3 = "请选择浏览器"
            android.content.Intent r3 = android.content.Intent.createChooser(r0, r3)
            r2.startActivity(r3)
            goto L32
        L2c:
            r3 = 1
            java.lang.String r0 = "Toast.makeText(context,链接错误或无浏览器)"
            android.widget.Toast.makeText(r2, r0, r3)
        L32:
            return
    }

    public static void start(android.app.Activity r1) {
            com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog r0 = new com.bianfeng.addpermission.ui.ShowPrivacyPolicyDialog
            r0.<init>(r1)
            r0.show()
            return
    }

    @Override
    public void onClick(android.view.View r6) {
            r5 = this;
            int r6 = r6.getId()
            android.app.Activity r0 = r5.context
            java.lang.String r1 = "R.id.privacypolicy_ok"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            r1 = 0
            if (r6 != r0) goto L48
            r6 = 1
            java.lang.String r0 = "com.bianfeng.seppellita.SepperllitaInterface"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L30
            java.lang.String r2 = "postYmnId"
            java.lang.Class[] r3 = new java.lang.Class[r6]     // Catch: java.lang.Exception -> L30
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r1] = r4     // Catch: java.lang.Exception -> L30
            java.lang.reflect.Method r2 = r0.getMethod(r2, r3)     // Catch: java.lang.Exception -> L30
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L30
            java.lang.Object[] r3 = new java.lang.Object[r6]     // Catch: java.lang.Exception -> L30
            android.app.Activity r4 = r5.context     // Catch: java.lang.Exception -> L30
            r3[r1] = r4     // Catch: java.lang.Exception -> L30
            r2.invoke(r0, r3)     // Catch: java.lang.Exception -> L30
            goto L34
        L30:
            r0 = move-exception
            r0.printStackTrace()
        L34:
            r5.dismiss()
            android.app.Activity r0 = r5.context
            com.bianfeng.addpermission.common.SharedPreferencesUtils r0 = com.bianfeng.addpermission.common.SharedPreferencesUtils.getInstance(r0)
            r0.setAgreePolicy(r6)
            com.bianfeng.addpermission.ui.AddPrivacyPolicyCallBack r6 = com.bianfeng.addpermission.ui.AddPermissionApi.getPolicyCallBack()
            r6.onAllow()
            goto L58
        L48:
            android.app.Activity r0 = r5.context
            java.lang.String r2 = "R.id.privacypolicy_refuse"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r2)
            if (r6 != r0) goto L58
            r5.dismiss()
            java.lang.System.exit(r1)
        L58:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r8) {
            r7 = this;
            super.onCreate(r8)
            android.view.Window r8 = r7.getWindow()
            android.view.WindowManager$LayoutParams r0 = r8.getAttributes()
            android.app.Activity r1 = r7.context
            android.content.res.Resources r1 = r1.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            r2 = 0
            r7.setCancelable(r2)
            int r3 = r1.heightPixels
            int r1 = r1.widthPixels
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "ShowPrivacyPolicyDialog onCreate:heightPixels--- "
            r4.append(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "ShowPrivacyPolicyDialog onCreate:widthPixels--- "
            r4.append(r6)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r4)
            android.app.Activity r4 = r7.context
            boolean r4 = com.bianfeng.addpermission.common.DensityUtils.isPortrait(r4)
            if (r4 == 0) goto L98
            java.lang.String r2 = "ShowPrivacyPolicyDialog onCreate:isPortrait "
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r2)
            int r2 = java.lang.Math.max(r3, r1)
            int r1 = java.lang.Math.min(r3, r1)
            r3 = 1
            r0.screenOrientation = r3
            double r2 = (double) r2
            r4 = 4599976659396224614(0x3fd6666666666666, double:0.35)
            double r2 = r2 * r4
            int r2 = (int) r2
            r0.height = r2
            double r1 = (double) r1
            r3 = 4605831338911806259(0x3feb333333333333, double:0.85)
            double r1 = r1 * r3
            int r1 = (int) r1
            r0.width = r1
            goto Le1
        L98:
            int r4 = java.lang.Math.min(r3, r1)
            int r1 = java.lang.Math.max(r3, r1)
            java.lang.String r3 = "ShowPrivacyPolicyDialog onCreate:islan "
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r5)
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r6)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r3)
            double r3 = (double) r4
            r5 = 4606011482896901079(0x3febd70a3d70a3d7, double:0.87)
            double r3 = r3 * r5
            int r3 = (int) r3
            r0.height = r3
            double r3 = (double) r1
            r5 = 4604119971053405471(0x3fe51eb851eb851f, double:0.66)
            double r3 = r3 * r5
            int r1 = (int) r3
            r0.width = r1
            r0.screenOrientation = r2
        Le1:
            r8.setAttributes(r0)
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_policy_bg_rl"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.RelativeLayout r8 = (android.widget.RelativeLayout) r8
            r7.show_policy_bg_rl = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_policy_title_tv"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            r7.title_tv = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.privacypolicy_ok"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.Button r8 = (android.widget.Button) r8
            r7.ok_btn = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.privacypolicy_refuse"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.Button r8 = (android.widget.Button) r8
            r7.cancel_btn = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_policy_content"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            r7.content_tv = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_policy_tv"
            int r8 = com.bianfeng.addpermission.common.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            r7.check_policy_tv = r8
            android.widget.Button r8 = r7.ok_btn
            r8.setOnClickListener(r7)
            android.widget.Button r8 = r7.cancel_btn
            r8.setOnClickListener(r7)
            r0 = 0
            r7.lastClickTime = r0
            r7.initdata()
            r7.initTheme()
            return
    }
}
