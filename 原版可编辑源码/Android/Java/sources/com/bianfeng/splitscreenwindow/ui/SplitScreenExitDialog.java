package com.bianfeng.splitscreenwindow.ui;

import android.app.Activity;
import android.app.Dialog;
import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.LinearLayout;
import com.bianfeng.utilslib.UtilsSdk;

public class SplitScreenExitDialog extends Dialog {
    public SplitScreenExitDialog(Context context) {
        super(context);
    }

    private SplitScreenExitDialog(Context context, int i) {
        super(context, i);
    }

    public static class Builder {
        private Button exit_btn;
        private Activity mActivity;
        private LinearLayout mLayout;
        private SplitScreenExitDialog screenDialog;

        public Builder(Activity activity) {
            this.mActivity = activity;
            this.screenDialog = new SplitScreenExitDialog(activity, UtilsSdk.getResourceManger().getId(activity, "R.style.reslib_dialogactivitytheme"));
            LinearLayout linearLayout = (LinearLayout) ((LayoutInflater) activity.getSystemService("layout_inflater")).inflate(UtilsSdk.getResourceManger().getId(activity, "R.layout.dialog_splitscreen_exit"), (ViewGroup) null, false);
            this.mLayout = linearLayout;
            this.screenDialog.addContentView(linearLayout, new ViewGroup.LayoutParams(-1, -2));
            this.exit_btn = (Button) this.mLayout.findViewById(UtilsSdk.getResourceManger().getId(activity, "R.id.dialog_split_exit"));
            setAttributes();
        }

        private void setAttributes() {
            Window window = this.screenDialog.getWindow();
            WindowManager.LayoutParams attributes = window.getAttributes();
            if (UtilsSdk.getConfiguration().isLand(this.mActivity)) {
                double width = UtilsSdk.getConfiguration().getWidth();
                Double.isNaN(width);
                attributes.width = (int) (width * 0.4d);
            } else {
                double width2 = UtilsSdk.getConfiguration().getWidth();
                Double.isNaN(width2);
                attributes.width = (int) (width2 * 0.8d);
            }
            window.setAttributes(attributes);
        }

        private void onClick() {
            this.exit_btn.setOnClickListener(new View.OnClickListener() {
                @Override
                public void onClick(View view) {
                    Builder.this.screenDialog.dismiss();
                    UtilsSdk.getFullScreen().hideBar(Builder.this.mActivity);
                }
            });
        }

        public SplitScreenExitDialog create() {
            onClick();
            return this.screenDialog;
        }
    }
}
