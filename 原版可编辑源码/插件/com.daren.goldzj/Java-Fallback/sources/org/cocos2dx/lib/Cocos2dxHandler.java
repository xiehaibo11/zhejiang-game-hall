package org.cocos2dx.lib;

import android.app.AlertDialog;
import android.os.Handler;
import android.os.Message;
import java.lang.ref.WeakReference;

public class Cocos2dxHandler extends Handler {
    public static final int HANDLER_SHOW_DIALOG = 1;
    private WeakReference<Cocos2dxActivity> mActivity;

    public static class DialogMessage {
        public String message;
        public String title;

        public DialogMessage(String r1, String r2) {
            this.title = r1;
            this.message = r2;
        }
    }

    public Cocos2dxHandler(Cocos2dxActivity r2) {
        this.mActivity = new WeakReference(r2);
    }

    @Override
    public void handleMessage(Message r3) {
        if (r3.what != 1) goto L7;
        showDialog(r3);
        return;
    }

    private void showDialog(Message r3) {
        Cocos2dxActivity r0 = this.mActivity.get();
        DialogMessage r32 = (DialogMessage) r3.obj;
        new AlertDialog.Builder(r0).setTitle(r32.title).setMessage(r32.message).setPositiveButton("Ok", new 1(this)).create().show();
    }
}
