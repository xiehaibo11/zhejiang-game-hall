package com.ss.android.download.api.rg;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.graphics.drawable.Drawable;
import android.widget.Toast;
import com.ss.android.download.api.config.hq;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.model.DownloadAlertDialogInfo;

public class rg implements hq {
    @Override
    public void rg(int i, Context context, DownloadModel downloadModel, String str, Drawable drawable, int i2) {
        Toast.makeText(context, str, 0).show();
    }

    @Override
    public Dialog df(DownloadAlertDialogInfo downloadAlertDialogInfo) {
        return rg(downloadAlertDialogInfo);
    }

    private static Dialog rg(final DownloadAlertDialogInfo downloadAlertDialogInfo) {
        if (downloadAlertDialogInfo == null) {
            return null;
        }
        AlertDialog alertDialogShow = new AlertDialog.Builder(downloadAlertDialogInfo.rg).setTitle(downloadAlertDialogInfo.df).setMessage(downloadAlertDialogInfo.q).setPositiveButton(downloadAlertDialogInfo.pt, new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialogInterface, int i) {
                if (downloadAlertDialogInfo.ux != null) {
                    downloadAlertDialogInfo.ux.rg(dialogInterface);
                }
            }
        }).setNegativeButton(downloadAlertDialogInfo.pp, new DialogInterface.OnClickListener() {
            @Override
            public void onClick(DialogInterface dialogInterface, int i) {
                if (downloadAlertDialogInfo.ux != null) {
                    downloadAlertDialogInfo.ux.df(dialogInterface);
                }
            }
        }).show();
        alertDialogShow.setCanceledOnTouchOutside(downloadAlertDialogInfo.c);
        alertDialogShow.setOnCancelListener(new DialogInterface.OnCancelListener() {
            @Override
            public void onCancel(DialogInterface dialogInterface) {
                if (downloadAlertDialogInfo.ux != null) {
                    downloadAlertDialogInfo.ux.q(dialogInterface);
                }
            }
        });
        if (downloadAlertDialogInfo.fw != null) {
            alertDialogShow.setIcon(downloadAlertDialogInfo.fw);
        }
        return alertDialogShow;
    }
}
