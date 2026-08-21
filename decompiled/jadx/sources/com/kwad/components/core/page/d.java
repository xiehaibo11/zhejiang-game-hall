package com.kwad.components.core.page;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import com.kwad.components.core.n.f;
import com.kwad.sdk.R;
import com.kwad.sdk.api.proxy.app.BaseFragmentActivity;
import com.kwad.sdk.utils.aj;
import com.kwad.sdk.utils.ak;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

/* JADX INFO: loaded from: classes2.dex */
public class d extends f {
    private boolean MJ;

    private void aA(boolean z) {
        Intent intent = getIntent();
        if (z) {
            getActivity().startActivity((Intent) intent.getParcelableExtra("pendingIntent"));
        } else {
            String stringExtra = intent.getStringExtra("filePath");
            if (TextUtils.isEmpty(stringExtra)) {
                return;
            }
            ak.an(getActivity().getApplicationContext(), stringExtra);
        }
    }

    private void oE() {
        AlertDialog.Builder builder = new AlertDialog.Builder(getActivity());
        builder.setTitle(R.string.ksad_request_install_title);
        builder.setMessage(R.string.ksad_request_install_content);
        builder.setNegativeButton(R.string.ksad_request_install_nagative, new DialogInterface.OnClickListener() { // from class: com.kwad.components.core.page.d.1
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                d.this.finish();
            }
        });
        builder.setPositiveButton(R.string.ksad_request_install_positive, new DialogInterface.OnClickListener() { // from class: com.kwad.components.core.page.d.2
            @Override // android.content.DialogInterface.OnClickListener
            public final void onClick(DialogInterface dialogInterface, int i) {
                d.this.oF();
            }
        });
        builder.create().show();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void oF() {
        if (Build.VERSION.SDK_INT < 26) {
            finish();
            return;
        }
        Intent intent = new Intent("android.settings.MANAGE_UNKNOWN_APP_SOURCES", Uri.parse("package:" + getActivity().getApplicationInfo().packageName));
        intent.addFlags(DownloadExpSwitchCode.BACK_BUGFIX_SIGBUS);
        getActivity().startActivityForResult(intent, 100);
    }

    public static void register() {
        try {
            com.kwad.sdk.service.b.a(BaseFragmentActivity.RequestInstallPermissionActivity.class, d.class);
        } catch (Throwable unused) {
        }
    }

    @Override // com.kwad.components.core.n.f
    public String getPageName() {
        return "RequestInstallPermissionImpl";
    }

    @Override // com.kwad.sdk.api.proxy.IActivityProxy
    public void onActivityResult(int i, int i2, Intent intent) {
        if (i == 100 && i2 == -1) {
            aA(this.MJ);
        }
        finish();
    }

    @Override // com.kwad.components.core.n.f, com.kwad.sdk.api.proxy.IActivityProxy
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Intent intent = getIntent();
        if (intent == null) {
            finish();
            return;
        }
        this.MJ = intent.getBooleanExtra("fromNotification", false);
        if (Build.VERSION.SDK_INT < 26) {
            aA(this.MJ);
            finish();
        } else {
            if (this.MJ) {
                if (aj.co(getActivity())) {
                    aA(this.MJ);
                    return;
                } else {
                    oF();
                    return;
                }
            }
            if (intent.getBooleanExtra("needAllowDialog", false)) {
                oE();
            } else {
                oF();
            }
        }
    }
}
