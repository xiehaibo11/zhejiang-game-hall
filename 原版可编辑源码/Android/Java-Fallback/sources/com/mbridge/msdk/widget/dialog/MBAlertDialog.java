package com.mbridge.msdk.widget.dialog;

public class MBAlertDialog extends android.app.Dialog {
    private com.mbridge.msdk.widget.dialog.a a;
    private android.widget.TextView b;
    private android.widget.TextView c;
    private android.widget.Button d;
    private android.widget.Button e;
    private int f;
    private int g;



    public MBAlertDialog(android.content.Context r7, com.mbridge.msdk.widget.dialog.a r8) {
            r6 = this;
            java.lang.String r0 = "MBAlertDialog"
            java.lang.String r1 = "id"
            r6.<init>(r7)
            android.view.Window r2 = r6.getWindow()
            android.graphics.drawable.ColorDrawable r3 = new android.graphics.drawable.ColorDrawable
            r4 = 0
            r3.<init>(r4)
            r2.setBackgroundDrawable(r3)
            r2 = 1
            r6.requestWindowFeature(r2)
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r7)
            java.lang.String r3 = "mbridge_cm_alertview"
            java.lang.String r5 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r5)
            r5 = 0
            android.view.View r2 = r2.inflate(r3, r5)
            r6.a = r8
            if (r2 == 0) goto L7a
            r6.setContentView(r2)
            java.lang.String r3 = "mbridge_video_common_alertview_titleview"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r1)     // Catch: java.lang.Exception -> L3f
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Exception -> L3f
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Exception -> L3f
            r6.b = r3     // Catch: java.lang.Exception -> L3f
            goto L47
        L3f:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r3)
        L47:
            java.lang.String r3 = "mbridge_video_common_alertview_contentview"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r1)     // Catch: java.lang.Exception -> L72
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Exception -> L72
            android.widget.TextView r3 = (android.widget.TextView) r3     // Catch: java.lang.Exception -> L72
            r6.c = r3     // Catch: java.lang.Exception -> L72
            java.lang.String r3 = "mbridge_video_common_alertview_confirm_button"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r1)     // Catch: java.lang.Exception -> L72
            android.view.View r3 = r2.findViewById(r3)     // Catch: java.lang.Exception -> L72
            android.widget.Button r3 = (android.widget.Button) r3     // Catch: java.lang.Exception -> L72
            r6.d = r3     // Catch: java.lang.Exception -> L72
            java.lang.String r3 = "mbridge_video_common_alertview_cancel_button"
            int r7 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r1)     // Catch: java.lang.Exception -> L72
            android.view.View r7 = r2.findViewById(r7)     // Catch: java.lang.Exception -> L72
            android.widget.Button r7 = (android.widget.Button) r7     // Catch: java.lang.Exception -> L72
            r6.e = r7     // Catch: java.lang.Exception -> L72
            goto L7a
        L72:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            com.mbridge.msdk.foundation.tools.z.a(r0, r7)
        L7a:
            android.widget.Button r7 = r6.e
            if (r7 == 0) goto L86
            com.mbridge.msdk.widget.dialog.MBAlertDialog$1 r0 = new com.mbridge.msdk.widget.dialog.MBAlertDialog$1
            r0.<init>(r6, r8)
            r7.setOnClickListener(r0)
        L86:
            android.widget.Button r7 = r6.d
            if (r7 == 0) goto L92
            com.mbridge.msdk.widget.dialog.MBAlertDialog$2 r0 = new com.mbridge.msdk.widget.dialog.MBAlertDialog$2
            r0.<init>(r6, r8)
            r7.setOnClickListener(r0)
        L92:
            r6.setCanceledOnTouchOutside(r4)
            r6.setCancelable(r4)
            return
    }

    private void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.setTitle(r1)
            r0.setContent(r2)
            r0.setConfirmText(r3)
            r0.setCancelText(r4)
            return
    }

    public void clear() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.a r0 = r1.a
            if (r0 == 0) goto L7
            r0 = 0
            r1.a = r0
        L7:
            return
    }

    public com.mbridge.msdk.widget.dialog.a getListener() {
            r1 = this;
            com.mbridge.msdk.widget.dialog.a r0 = r1.a
            return r0
    }

    public void hideNavigationBar(android.view.Window r3) {
            r2 = this;
            if (r3 == 0) goto L46
            r0 = 1024(0x400, float:1.435E-42)
            r3.setFlags(r0, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L1c
            r0 = 67108864(0x4000000, float:1.5046328E-36)
            r3.addFlags(r0)
            r0 = 4098(0x1002, float:5.743E-42)
            android.view.View r1 = r3.getDecorView()
            r1.setSystemUiVisibility(r0)
            goto L24
        L1c:
            android.view.View r0 = r3.getDecorView()
            r1 = 2
            r0.setSystemUiVisibility(r1)
        L24:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L34
            android.view.WindowManager$LayoutParams r0 = r3.getAttributes()
            r1 = 1
            r0.layoutInDisplayCutoutMode = r1
            r3.setAttributes(r0)
        L34:
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 0
            r0.<init>(r1)
            r3.setBackgroundDrawable(r0)
            r0 = -1
            r3.setLayout(r0, r0)
            r0 = 17
            r3.setGravity(r0)
        L46:
            return
    }

    public void makeDownloadAlert(java.lang.String r3) {
            r2 = this;
            r0 = 1
            r2.setCancelable(r0)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4f
            java.lang.String r1 = "zh"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4f
            java.lang.String r0 = "提示"
            r2.setTitle(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2b
            java.lang.String r3 = "确认下载吗？"
            r2.setContent(r3)
            goto L44
        L2b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "确认下载\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\"吗？"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.setContent(r3)
        L44:
            java.lang.String r3 = "取消"
            r2.setConfirmText(r3)
            java.lang.String r3 = "确认下载"
            r2.setCancelText(r3)
            goto L83
        L4f:
            java.lang.String r0 = "Notification"
            r2.setTitle(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L60
            java.lang.String r3 = "Confirm to download?"
            r2.setContent(r3)
            goto L79
        L60:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Confirm to download\""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "\"?"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.setContent(r3)
        L79:
            java.lang.String r3 = "Cancel"
            r2.setConfirmText(r3)
            java.lang.String r3 = "Confirm"
            r2.setCancelText(r3)
        L83:
            return
    }

    public void makeIVAlertView(int r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = ""
            android.content.Context r1 = r7.getContext()     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r2.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r3 = "MBridge_ConfirmTitle"
            r2.append(r3)     // Catch: java.lang.Exception -> Lfc
            r2.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lfc
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r1, r2, r0)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lfc
            android.content.Context r2 = r7.getContext()     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r3.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = "MBridge_ConfirmContent"
            r3.append(r4)     // Catch: java.lang.Exception -> Lfc
            r3.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lfc
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r2, r3, r0)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lfc
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r4.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r5 = "MBridge_CancelText"
            r4.append(r5)     // Catch: java.lang.Exception -> Lfc
            r4.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lfc
            java.lang.Object r3 = com.mbridge.msdk.foundation.tools.ag.b(r3, r4, r0)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lfc
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Exception -> Lfc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lfc
            r5.<init>()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r6 = "MBridge_ConfirmText"
            r5.append(r6)     // Catch: java.lang.Exception -> Lfc
            r5.append(r9)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r9 = r5.toString()     // Catch: java.lang.Exception -> Lfc
            java.lang.Object r9 = com.mbridge.msdk.foundation.tools.ag.b(r4, r9, r0)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> Lfc
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lfc
            if (r0 == 0) goto Lf8
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> Lfc
            if (r0 == 0) goto Lf8
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lfc
            if (r0 == 0) goto Lf8
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lfc
            if (r0 == 0) goto Lf8
            java.util.Locale r9 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> Lfc
            java.lang.String r9 = r9.getLanguage()     // Catch: java.lang.Exception -> Lfc
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> Lfc
            if (r0 != 0) goto Lce
            java.lang.String r0 = "zh"
            boolean r9 = r9.equals(r0)     // Catch: java.lang.Exception -> Lfc
            if (r9 == 0) goto Lce
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Lab
            java.lang.String r9 = "确认关闭？"
            goto Lad
        Lab:
            java.lang.String r9 = "提示"
        Lad:
            r7.setTitle(r9)     // Catch: java.lang.Exception -> Lfc
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Lb7
            java.lang.String r9 = "如果你选择继续，结束后将会获得奖励。确认关闭吗？"
            goto Lb9
        Lb7:
            java.lang.String r9 = "如果你选择继续，结束后将会获得奖励。是否继续？"
        Lb9:
            r7.setContent(r9)     // Catch: java.lang.Exception -> Lfc
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Lc3
            java.lang.String r8 = "确认关闭"
            goto Lc5
        Lc3:
            java.lang.String r8 = "取消"
        Lc5:
            r7.setConfirmText(r8)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r8 = "继续"
            r7.setCancelText(r8)     // Catch: java.lang.Exception -> Lfc
            goto L106
        Lce:
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Ld5
            java.lang.String r9 = "Confirm"
            goto Ld7
        Ld5:
            java.lang.String r9 = "Tips"
        Ld7:
            r7.setTitle(r9)     // Catch: java.lang.Exception -> Lfc
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Le1
            java.lang.String r9 = "If you choose to continue, you will receive a reward after the end. Confirm closed?"
            goto Le3
        Le1:
            java.lang.String r9 = "If you choose to continue, you will receive a reward after the end. Whether to continue?"
        Le3:
            r7.setContent(r9)     // Catch: java.lang.Exception -> Lfc
            int r9 = com.mbridge.msdk.foundation.same.a.w     // Catch: java.lang.Exception -> Lfc
            if (r8 != r9) goto Led
            java.lang.String r8 = "Close"
            goto Lef
        Led:
            java.lang.String r8 = "Cancel"
        Lef:
            r7.setConfirmText(r8)     // Catch: java.lang.Exception -> Lfc
            java.lang.String r8 = "Continue"
            r7.setCancelText(r8)     // Catch: java.lang.Exception -> Lfc
            goto L106
        Lf8:
            r7.a(r1, r2, r3, r9)     // Catch: java.lang.Exception -> Lfc
            goto L106
        Lfc:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r9 = "MBAlertDialog"
            com.mbridge.msdk.foundation.tools.z.a(r9, r8)
        L106:
            return
    }

    public void makeInstallAlert(java.lang.String r3) {
            r2 = this;
            r0 = 0
            r2.setCancelable(r0)
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4a
            java.lang.String r1 = "zh"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4a
            java.lang.String r0 = "提示"
            r2.setTitle(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2b
            java.lang.String r3 = "应用已经安装完成，是否现在打开？"
            r2.setContent(r3)
            goto L3f
        L2b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " 已完成安装，是否现在打开？"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.setContent(r3)
        L3f:
            java.lang.String r3 = "取消"
            r2.setConfirmText(r3)
            java.lang.String r3 = "打开"
            r2.setCancelText(r3)
            goto L79
        L4a:
            java.lang.String r0 = "Notification"
            r2.setTitle(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L5b
            java.lang.String r3 = "app has been installed. Open it right now?"
            r2.setContent(r3)
            goto L6f
        L5b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r3 = " has been installed. Open it right now?"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.setContent(r3)
        L6f:
            java.lang.String r3 = "Cancel"
            r2.setConfirmText(r3)
            java.lang.String r3 = "Open"
            r2.setCancelText(r3)
        L79:
            return
    }

    public void makePlayableAlertView() {
            r4 = this;
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 == 0) goto L26
            java.lang.String r1 = r0.ar()
            java.lang.String r2 = r0.as()
            java.lang.String r3 = r0.at()
            java.lang.String r0 = r0.av()
            r4.a(r1, r2, r3, r0)
            goto L65
        L26:
            java.util.Locale r0 = java.util.Locale.getDefault()
            java.lang.String r0 = r0.getLanguage()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L51
            java.lang.String r1 = "zh"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L51
            java.lang.String r0 = "确认关闭？"
            r4.setTitle(r0)
            java.lang.String r0 = "关闭后您将不会获得任何奖励噢~ "
            r4.setContent(r0)
            java.lang.String r0 = "确认关闭"
            r4.setConfirmText(r0)
            java.lang.String r0 = "继续试玩"
            r4.setCancelText(r0)
            goto L65
        L51:
            java.lang.String r0 = "Confirm to close? "
            r4.setTitle(r0)
            java.lang.String r0 = "You will not be rewarded after closing the window"
            r4.setContent(r0)
            java.lang.String r0 = "Close it"
            r4.setConfirmText(r0)
            java.lang.String r0 = "Continue"
            r4.setCancelText(r0)
        L65:
            return
    }

    public void makeRVAlertView(java.lang.String r18) {
            r17 = this;
            r1 = r17
            r0 = r18
            java.lang.String r2 = ""
            android.content.Context r3 = r17.getContext()     // Catch: java.lang.Exception -> L184
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            r4.<init>()     // Catch: java.lang.Exception -> L184
            java.lang.String r5 = "MBridge_ConfirmTitle"
            r4.append(r5)     // Catch: java.lang.Exception -> L184
            r4.append(r0)     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L184
            java.lang.Object r3 = com.mbridge.msdk.foundation.tools.ag.b(r3, r4, r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L184
            android.content.Context r4 = r17.getContext()     // Catch: java.lang.Exception -> L184
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            r5.<init>()     // Catch: java.lang.Exception -> L184
            java.lang.String r6 = "MBridge_ConfirmContent"
            r5.append(r6)     // Catch: java.lang.Exception -> L184
            r5.append(r0)     // Catch: java.lang.Exception -> L184
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L184
            java.lang.Object r4 = com.mbridge.msdk.foundation.tools.ag.b(r4, r5, r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L184
            android.content.Context r5 = r17.getContext()     // Catch: java.lang.Exception -> L184
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            r6.<init>()     // Catch: java.lang.Exception -> L184
            java.lang.String r7 = "MBridge_CancelText"
            r6.append(r7)     // Catch: java.lang.Exception -> L184
            r6.append(r0)     // Catch: java.lang.Exception -> L184
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L184
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.ag.b(r5, r6, r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L184
            android.content.Context r6 = r17.getContext()     // Catch: java.lang.Exception -> L184
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L184
            r7.<init>()     // Catch: java.lang.Exception -> L184
            java.lang.String r8 = "MBridge_ConfirmText"
            r7.append(r8)     // Catch: java.lang.Exception -> L184
            r7.append(r0)     // Catch: java.lang.Exception -> L184
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Exception -> L184
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r6, r0, r2)     // Catch: java.lang.Exception -> L184
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L184
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L184
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L184
            java.lang.String r6 = r6.k()     // Catch: java.lang.Exception -> L184
            com.mbridge.msdk.c.a r2 = r2.b(r6)     // Catch: java.lang.Exception -> L184
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L184
            java.lang.String r7 = "继续观看"
            java.lang.String r8 = "确认关闭"
            java.lang.String r9 = "Continue"
            java.lang.String r10 = "关闭后您将不会获得任何奖励噢~ "
            java.lang.String r11 = "Close it"
            java.lang.String r12 = "确认关闭？"
            java.lang.String r13 = "You will not be rewarded after closing the window"
            java.lang.String r14 = "Confirm to close? "
            java.lang.String r15 = "zh"
            if (r6 == 0) goto Lf8
            boolean r6 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L184
            if (r6 == 0) goto Lf8
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L184
            if (r6 == 0) goto Lf8
            boolean r6 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L184
            if (r6 == 0) goto Lf8
            if (r2 == 0) goto Lca
            java.lang.String r0 = r2.ar()     // Catch: java.lang.Exception -> L184
            java.lang.String r3 = r2.as()     // Catch: java.lang.Exception -> L184
            java.lang.String r4 = r2.at()     // Catch: java.lang.Exception -> L184
            java.lang.String r2 = r2.au()     // Catch: java.lang.Exception -> L184
            r1.a(r0, r3, r4, r2)     // Catch: java.lang.Exception -> L184
            goto Lf7
        Lca:
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L184
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Exception -> L184
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L184
            if (r2 != 0) goto Leb
            boolean r0 = r0.equals(r15)     // Catch: java.lang.Exception -> L184
            if (r0 == 0) goto Leb
            r1.setTitle(r12)     // Catch: java.lang.Exception -> L184
            r1.setContent(r10)     // Catch: java.lang.Exception -> L184
            r1.setConfirmText(r8)     // Catch: java.lang.Exception -> L184
            r1.setCancelText(r7)     // Catch: java.lang.Exception -> L184
            goto Lf7
        Leb:
            r1.setTitle(r14)     // Catch: java.lang.Exception -> L184
            r1.setContent(r13)     // Catch: java.lang.Exception -> L184
            r1.setConfirmText(r11)     // Catch: java.lang.Exception -> L184
            r1.setCancelText(r9)     // Catch: java.lang.Exception -> L184
        Lf7:
            return
        Lf8:
            java.util.Locale r6 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L184
            java.lang.String r6 = r6.getLanguage()     // Catch: java.lang.Exception -> L184
            boolean r16 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L184
            if (r16 == 0) goto L120
            if (r2 == 0) goto L10d
            java.lang.String r3 = r2.ar()     // Catch: java.lang.Exception -> L184
            goto L120
        L10d:
            boolean r16 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L184
            if (r16 != 0) goto L11d
            boolean r16 = r6.equals(r15)     // Catch: java.lang.Exception -> L184
            if (r16 == 0) goto L11d
            r1.setTitle(r12)     // Catch: java.lang.Exception -> L184
            goto L120
        L11d:
            r1.setTitle(r14)     // Catch: java.lang.Exception -> L184
        L120:
            boolean r12 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L184
            if (r12 == 0) goto L140
            if (r2 == 0) goto L12d
            java.lang.String r4 = r2.as()     // Catch: java.lang.Exception -> L184
            goto L140
        L12d:
            boolean r12 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L184
            if (r12 != 0) goto L13d
            boolean r12 = r6.equals(r15)     // Catch: java.lang.Exception -> L184
            if (r12 == 0) goto L13d
            r1.setContent(r10)     // Catch: java.lang.Exception -> L184
            goto L140
        L13d:
            r1.setContent(r13)     // Catch: java.lang.Exception -> L184
        L140:
            boolean r10 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L184
            if (r10 == 0) goto L160
            if (r2 == 0) goto L14d
            java.lang.String r0 = r2.at()     // Catch: java.lang.Exception -> L184
            goto L160
        L14d:
            boolean r10 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L184
            if (r10 != 0) goto L15d
            boolean r10 = r6.equals(r15)     // Catch: java.lang.Exception -> L184
            if (r10 == 0) goto L15d
            r1.setConfirmText(r8)     // Catch: java.lang.Exception -> L184
            goto L160
        L15d:
            r1.setConfirmText(r11)     // Catch: java.lang.Exception -> L184
        L160:
            boolean r8 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L184
            if (r8 == 0) goto L180
            if (r2 == 0) goto L16d
            java.lang.String r5 = r2.au()     // Catch: java.lang.Exception -> L184
            goto L180
        L16d:
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L184
            if (r2 != 0) goto L17d
            boolean r2 = r6.equals(r15)     // Catch: java.lang.Exception -> L184
            if (r2 == 0) goto L17d
            r1.setCancelText(r7)     // Catch: java.lang.Exception -> L184
            goto L180
        L17d:
            r1.setCancelText(r9)     // Catch: java.lang.Exception -> L184
        L180:
            r1.a(r3, r4, r0, r5)     // Catch: java.lang.Exception -> L184
            goto L18e
        L184:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r2 = "MBAlertDialog"
            com.mbridge.msdk.foundation.tools.z.a(r2, r0)
        L18e:
            return
    }

    public void onlyShow() {
            r0 = this;
            super.show()
            return
    }

    public void setCancelText(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.e
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public void setConfirmText(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.d
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public void setContent(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.c
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    public void setDialogWidthAndHeight(float r4, float r5) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            android.content.Context r1 = r3.getContext()
            boolean r1 = com.mbridge.msdk.widget.custom.DownloadMessageDialog.isScreenOrientationPortrait(r1)
            r2 = -1
            if (r1 == 0) goto L3c
            int r4 = r0.widthPixels
            r3.g = r4
            int r4 = r0.heightPixels
            r3.f = r4
            android.view.Window r4 = r3.getWindow()
            android.view.WindowManager$LayoutParams r4 = r4.getAttributes()
            int r0 = r3.f
            float r0 = (float) r0
            float r0 = r0 * r5
            int r5 = (int) r0
            r4.width = r2
            r4.height = r5
            r5 = 80
            r4.gravity = r5
            android.view.Window r5 = r3.getWindow()
            r5.setAttributes(r4)
            goto L60
        L3c:
            int r5 = r0.heightPixels
            r3.g = r5
            int r5 = r0.widthPixels
            r3.f = r5
            android.view.Window r5 = r3.getWindow()
            android.view.WindowManager$LayoutParams r5 = r5.getAttributes()
            int r0 = r3.f
            float r0 = (float) r0
            float r0 = r0 * r4
            int r4 = (int) r0
            r5.width = r4
            r5.height = r2
            r4 = 17
            r5.gravity = r4
            android.view.Window r4 = r3.getWindow()
            r4.setAttributes(r5)
        L60:
            return
    }

    public void setTitle(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.b
            if (r0 == 0) goto L7
            r0.setText(r2)
        L7:
            return
    }

    @Override
    public void show() {
            r2 = this;
            super.show()
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r1 = 8
            r0.setFlags(r1, r1)     // Catch: java.lang.Exception -> L1e
            super.show()     // Catch: java.lang.Exception -> L1e
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r2.hideNavigationBar(r0)     // Catch: java.lang.Exception -> L1e
            android.view.Window r0 = r2.getWindow()     // Catch: java.lang.Exception -> L1e
            r0.clearFlags(r1)     // Catch: java.lang.Exception -> L1e
            goto L2b
        L1e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBAlertDialog"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            super.show()
        L2b:
            return
    }
}
