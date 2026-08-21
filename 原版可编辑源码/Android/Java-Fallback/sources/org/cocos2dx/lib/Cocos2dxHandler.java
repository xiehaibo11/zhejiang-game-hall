package org.cocos2dx.lib;

public class Cocos2dxHandler extends android.os.Handler {
    public static final int HANDLER_SHOW_DIALOG = 1;
    private java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxActivity> mActivity;


    public static class DialogMessage {
        public java.lang.String message;
        public java.lang.String title;

        public DialogMessage(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.title = r1
                r0.message = r2
                return
        }
    }

    public Cocos2dxHandler(org.cocos2dx.lib.Cocos2dxActivity r2) {
            r1 = this;
            r1.<init>()
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mActivity = r0
            return
    }

    private void showDialog(android.os.Message r3) {
            r2 = this;
            java.lang.ref.WeakReference<org.cocos2dx.lib.Cocos2dxActivity> r0 = r2.mActivity
            java.lang.Object r0 = r0.get()
            org.cocos2dx.lib.Cocos2dxActivity r0 = (org.cocos2dx.lib.Cocos2dxActivity) r0
            java.lang.Object r3 = r3.obj
            org.cocos2dx.lib.Cocos2dxHandler$DialogMessage r3 = (org.cocos2dx.lib.Cocos2dxHandler.DialogMessage) r3
            android.app.AlertDialog$Builder r1 = new android.app.AlertDialog$Builder
            r1.<init>(r0)
            java.lang.String r0 = r3.title
            android.app.AlertDialog$Builder r0 = r1.setTitle(r0)
            java.lang.String r3 = r3.message
            android.app.AlertDialog$Builder r3 = r0.setMessage(r3)
            org.cocos2dx.lib.Cocos2dxHandler$1 r0 = new org.cocos2dx.lib.Cocos2dxHandler$1
            r0.<init>(r2)
            java.lang.String r1 = "Ok"
            android.app.AlertDialog$Builder r3 = r3.setPositiveButton(r1, r0)
            android.app.AlertDialog r3 = r3.create()
            r3.show()
            return
    }

    @Override
    public void handleMessage(android.os.Message r3) {
            r2 = this;
            int r0 = r3.what
            r1 = 1
            if (r0 == r1) goto L6
            goto L9
        L6:
            r2.showDialog(r3)
        L9:
            return
    }
}
