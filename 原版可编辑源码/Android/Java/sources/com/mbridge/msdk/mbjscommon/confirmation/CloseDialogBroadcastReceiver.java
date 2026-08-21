package com.mbridge.msdk.mbjscommon.confirmation;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;

public class CloseDialogBroadcastReceiver extends BroadcastReceiver {
    private DownloadMessageDialog a;

    public CloseDialogBroadcastReceiver(DownloadMessageDialog downloadMessageDialog) {
        this.a = downloadMessageDialog;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        if (intent != null) {
            String action = intent.getAction();
            if (TextUtils.isEmpty(action) || !TextUtils.equals(action, "mb_dp_close_broadcast_receiver")) {
                return;
            }
            DownloadMessageDialog downloadMessageDialog = this.a;
            try {
                if (downloadMessageDialog != null) {
                    try {
                        try {
                            if (downloadMessageDialog.isShowing()) {
                                this.a.setRenderListener(null);
                                this.a.cancel();
                                this.a = null;
                            }
                        } catch (Exception e) {
                            z.a("CloseDialogBroadcastReceiver", e.getMessage());
                            if (context == null) {
                                return;
                            } else {
                                context.unregisterReceiver(this);
                            }
                        }
                        if (context != null) {
                            context.unregisterReceiver(this);
                        }
                    } catch (Throwable th) {
                        if (context != null) {
                            try {
                                context.unregisterReceiver(this);
                            } catch (Exception e2) {
                                z.a("CloseDialogBroadcastReceiver", e2.getMessage());
                            }
                        }
                        throw th;
                    }
                }
            } catch (Exception e3) {
                z.a("CloseDialogBroadcastReceiver", e3.getMessage());
            }
        }
    }
}
