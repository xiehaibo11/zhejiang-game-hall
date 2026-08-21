package com.ymnsdk.replugin.ui;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class TipDialog extends android.app.Dialog implements android.view.View.OnClickListener {
    private android.widget.Button cancel_btn;
    private android.widget.TextView content_tv;
    private android.app.Activity context;
    private android.content.DialogInterface.OnClickListener negativeListener;
    private android.widget.Button ok_btn;
    private android.content.DialogInterface.OnClickListener positiveListener;
    private android.widget.TextView title_tv;

    public TipDialog(android.app.Activity r2) {
            r1 = this;
            java.lang.String r0 = "R.style.DialogActivityTheme"
            int r0 = com.ymnsdk.replugin.ui.ResourceManger.getId(r2, r0)
            r1.<init>(r2, r0)
            r1.context = r2
            java.lang.String r0 = "R.layout.replugin_dialog_tip"
            int r2 = com.ymnsdk.replugin.ui.ResourceManger.getId(r2, r0)
            r1.setContentView(r2)
            return
    }

    @Override
    public void onClick(android.view.View r4) {
            r3 = this;
            int r4 = r4.getId()
            android.app.Activity r0 = r3.context
            java.lang.String r1 = "R.id.show_ok"
            int r0 = com.ymnsdk.replugin.ui.ResourceManger.getId(r0, r1)
            r1 = 0
            if (r4 != r0) goto L1a
            android.content.DialogInterface$OnClickListener r4 = r3.positiveListener
            if (r4 == 0) goto L16
            r4.onClick(r3, r1)
        L16:
            r3.dismiss()
            goto L2e
        L1a:
            android.app.Activity r0 = r3.context
            java.lang.String r2 = "R.id.show_cancel"
            int r0 = com.ymnsdk.replugin.ui.ResourceManger.getId(r0, r2)
            if (r4 != r0) goto L2e
            android.content.DialogInterface$OnClickListener r4 = r3.negativeListener
            if (r4 == 0) goto L2b
            r4.onClick(r3, r1)
        L2b:
            r3.dismiss()
        L2e:
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
            int r4 = java.lang.Math.min(r3, r1)
            int r1 = java.lang.Math.max(r3, r1)
            double r3 = (double) r4
            r5 = 4603579539098121011(0x3fe3333333333333, double:0.6)
            double r3 = r3 * r5
            int r3 = (int) r3
            r0.height = r3
            double r3 = (double) r1
            double r3 = r3 * r5
            int r1 = (int) r3
            r0.width = r1
            r0.screenOrientation = r2
            r8.setAttributes(r0)
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_ok"
            int r8 = com.ymnsdk.replugin.ui.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.Button r8 = (android.widget.Button) r8
            r7.ok_btn = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.show_cancel"
            int r8 = com.ymnsdk.replugin.ui.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.Button r8 = (android.widget.Button) r8
            r7.cancel_btn = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.dialog_title"
            int r8 = com.ymnsdk.replugin.ui.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            r7.title_tv = r8
            android.app.Activity r8 = r7.context
            java.lang.String r0 = "R.id.dialog_content"
            int r8 = com.ymnsdk.replugin.ui.ResourceManger.getId(r8, r0)
            android.view.View r8 = r7.findViewById(r8)
            android.widget.TextView r8 = (android.widget.TextView) r8
            r7.content_tv = r8
            android.widget.Button r8 = r7.ok_btn
            r8.setOnClickListener(r7)
            android.widget.Button r8 = r7.cancel_btn
            r8.setOnClickListener(r7)
            return
    }

    public void setContent(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.content_tv
            r0.setText(r2)
            return
    }

    public void setNaBtHide() {
            r2 = this;
            android.widget.Button r0 = r2.cancel_btn
            r1 = 8
            r0.setVisibility(r1)
            return
    }

    public void setNegativeButton(android.content.DialogInterface.OnClickListener r1) {
            r0 = this;
            r0.negativeListener = r1
            return
    }

    public void setPosBtTx(java.lang.String r2) {
            r1 = this;
            android.widget.Button r0 = r1.ok_btn
            r0.setText(r2)
            return
    }

    public void setPositiveButton(android.content.DialogInterface.OnClickListener r1) {
            r0 = this;
            r0.positiveListener = r1
            return
    }

    public void setTitle(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.title_tv
            r0.setText(r2)
            return
    }
}
