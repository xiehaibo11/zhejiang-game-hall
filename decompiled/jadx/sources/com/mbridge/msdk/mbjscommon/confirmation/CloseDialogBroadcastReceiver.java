package com.mbridge.msdk.mbjscommon.confirmation;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.widget.custom.DownloadMessageDialog;

/* JADX INFO: loaded from: classes2.dex */
public class CloseDialogBroadcastReceiver extends BroadcastReceiver {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private DownloadMessageDialog f3702a;

    public CloseDialogBroadcastReceiver(DownloadMessageDialog downloadMessageDialog) {
        this.f3702a = downloadMessageDialog;
    }

    @Override // android.content.BroadcastReceiver
    public void onReceive(Context context, Intent intent) {
        if (intent != null) {
            String action = intent.getAction();
            if (TextUtils.isEmpty(action) || !TextUtils.equals(action, "mb_dp_close_broadcast_receiver")) {
                return;
            }
            DownloadMessageDialog downloadMessageDialog = this.f3702a;
            try {
                if (downloadMessageDialog != null) {
                    try {
                        try {
                            if (downloadMessageDialog.isShowing()) {
                                this.f3702a.setRenderListener(null);
                                this.f3702a.cancel();
                                this.f3702a = null;
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
