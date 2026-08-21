package com.ymnsdk.replugin.ui;

import android.app.Activity;
import android.app.Dialog;
import android.content.DialogInterface;
import android.os.Bundle;
import android.util.DisplayMetrics;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.TextView;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class TipDialog extends Dialog implements View.OnClickListener {
    private Button cancel_btn;
    private TextView content_tv;
    private Activity context;
    private DialogInterface.OnClickListener negativeListener;
    private Button ok_btn;
    private DialogInterface.OnClickListener positiveListener;
    private TextView title_tv;

    public TipDialog(Activity activity) {
        super(activity, ResourceManger.getId(activity, "R.style.DialogActivityTheme"));
        this.context = activity;
        setContentView(ResourceManger.getId(activity, "R.layout.replugin_dialog_tip"));
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Window window = getWindow();
        WindowManager.LayoutParams attributes = window.getAttributes();
        DisplayMetrics displayMetrics = this.context.getResources().getDisplayMetrics();
        setCancelable(false);
        int i = displayMetrics.heightPixels;
        int i2 = displayMetrics.widthPixels;
        int iMin = Math.min(i, i2);
        int iMax = Math.max(i, i2);
        attributes.height = (int) (((double) iMin) * 0.6d);
        attributes.width = (int) (((double) iMax) * 0.6d);
        attributes.screenOrientation = 0;
        window.setAttributes(attributes);
        this.ok_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.show_ok"));
        this.cancel_btn = (Button) findViewById(ResourceManger.getId(this.context, "R.id.show_cancel"));
        this.title_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.dialog_title"));
        this.content_tv = (TextView) findViewById(ResourceManger.getId(this.context, "R.id.dialog_content"));
        this.ok_btn.setOnClickListener(this);
        this.cancel_btn.setOnClickListener(this);
    }

    public void setTitle(String str) {
        this.title_tv.setText(str);
    }

    public void setContent(String str) {
        this.content_tv.setText(str);
    }

    public void setPosBtTx(String str) {
        this.ok_btn.setText(str);
    }

    public void setPositiveButton(DialogInterface.OnClickListener onClickListener) {
        this.positiveListener = onClickListener;
    }

    public void setNegativeButton(DialogInterface.OnClickListener onClickListener) {
        this.negativeListener = onClickListener;
    }

    public void setNaBtHide() {
        this.cancel_btn.setVisibility(8);
    }

    @Override
    public void onClick(View view) {
        int id = view.getId();
        if (id == ResourceManger.getId(this.context, "R.id.show_ok")) {
            DialogInterface.OnClickListener onClickListener = this.positiveListener;
            if (onClickListener != null) {
                onClickListener.onClick(this, 0);
            }
            dismiss();
            return;
        }
        if (id == ResourceManger.getId(this.context, "R.id.show_cancel")) {
            DialogInterface.OnClickListener onClickListener2 = this.negativeListener;
            if (onClickListener2 != null) {
                onClickListener2.onClick(this, 0);
            }
            dismiss();
        }
    }
}
