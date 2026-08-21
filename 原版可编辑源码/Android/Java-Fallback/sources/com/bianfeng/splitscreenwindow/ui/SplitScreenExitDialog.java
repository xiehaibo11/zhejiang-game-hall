package com.bianfeng.splitscreenwindow.ui;

public class SplitScreenExitDialog extends android.app.Dialog {

    static class 1 {
    }

    public static class Builder {
        private android.widget.Button exit_btn;
        private android.app.Activity mActivity;
        private android.widget.LinearLayout mLayout;
        private com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog screenDialog;


        public Builder(android.app.Activity r6) {
                r5 = this;
                r5.<init>()
                r5.mActivity = r6
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r0 = new com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog
                com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
                java.lang.String r2 = "R.style.reslib_dialogactivitytheme"
                int r1 = r1.getId(r6, r2)
                r2 = 0
                r0.<init>(r6, r1, r2)
                r5.screenDialog = r0
                java.lang.String r0 = "layout_inflater"
                java.lang.Object r0 = r6.getSystemService(r0)
                android.view.LayoutInflater r0 = (android.view.LayoutInflater) r0
                com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
                java.lang.String r3 = "R.layout.dialog_splitscreen_exit"
                int r1 = r1.getId(r6, r3)
                r3 = 0
                android.view.View r0 = r0.inflate(r1, r2, r3)
                android.widget.LinearLayout r0 = (android.widget.LinearLayout) r0
                r5.mLayout = r0
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r1 = r5.screenDialog
                android.view.ViewGroup$LayoutParams r2 = new android.view.ViewGroup$LayoutParams
                r3 = -1
                r4 = -2
                r2.<init>(r3, r4)
                r1.addContentView(r0, r2)
                android.widget.LinearLayout r0 = r5.mLayout
                com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
                java.lang.String r2 = "R.id.dialog_split_exit"
                int r6 = r1.getId(r6, r2)
                android.view.View r6 = r0.findViewById(r6)
                android.widget.Button r6 = (android.widget.Button) r6
                r5.exit_btn = r6
                r5.setAttributes()
                return
        }

        static com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog access$100(com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog.Builder r0) {
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r0 = r0.screenDialog
                return r0
        }

        static android.app.Activity access$200(com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog.Builder r0) {
                android.app.Activity r0 = r0.mActivity
                return r0
        }

        private void onClick() {
                r2 = this;
                android.widget.Button r0 = r2.exit_btn
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog$Builder$1 r1 = new com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog$Builder$1
                r1.<init>(r2)
                r0.setOnClickListener(r1)
                return
        }

        private void setAttributes() {
                r6 = this;
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r0 = r6.screenDialog
                android.view.Window r0 = r0.getWindow()
                android.view.WindowManager$LayoutParams r1 = r0.getAttributes()
                com.bianfeng.utilslib.ConfigurationUtils r2 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
                android.app.Activity r3 = r6.mActivity
                boolean r2 = r2.isLand(r3)
                if (r2 == 0) goto L2d
                com.bianfeng.utilslib.ConfigurationUtils r2 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
                int r2 = r2.getWidth()
                double r2 = (double) r2
                r4 = 4600877379321698714(0x3fd999999999999a, double:0.4)
                java.lang.Double.isNaN(r2)
                double r2 = r2 * r4
                int r2 = (int) r2
                r1.width = r2
                goto L43
            L2d:
                com.bianfeng.utilslib.ConfigurationUtils r2 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
                int r2 = r2.getWidth()
                double r2 = (double) r2
                r4 = 4605380978949069210(0x3fe999999999999a, double:0.8)
                java.lang.Double.isNaN(r2)
                double r2 = r2 * r4
                int r2 = (int) r2
                r1.width = r2
            L43:
                r0.setAttributes(r1)
                return
        }

        public com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog create() {
                r1 = this;
                r1.onClick()
                com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog r0 = r1.screenDialog
                return r0
        }
    }

    public SplitScreenExitDialog(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private SplitScreenExitDialog(android.content.Context r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    SplitScreenExitDialog(android.content.Context r1, int r2, com.bianfeng.splitscreenwindow.ui.SplitScreenExitDialog.1 r3) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }
}
