package com.bianfeng.yidonglogin.utils;

import android.app.AlertDialog;
import android.app.Dialog;
import android.content.Context;
import android.content.DialogInterface;
import android.view.KeyEvent;
import android.view.LayoutInflater;
import android.view.ViewGroup;
import com.bianfeng.ymnsdk.util.ResourceManger;

public class LoadingDialogUtils {
    private static Dialog alertDialog;

    public static void show(Context context) {
        AlertDialog alertDialogCreate = new AlertDialog.Builder(context).create();
        alertDialog = alertDialogCreate;
        alertDialogCreate.setCancelable(false);
        alertDialog.setCanceledOnTouchOutside(false);
        alertDialog.setOnKeyListener(new DialogInterface.OnKeyListener() {
            @Override
            public boolean onKey(DialogInterface dialogInterface, int i, KeyEvent keyEvent) {
                if (keyEvent.getAction() == 1) {
                    dialogInterface.dismiss();
                    Dialog unused = LoadingDialogUtils.alertDialog = null;
                }
                return i == 4;
            }
        });
        alertDialog.show();
        alertDialog.setContentView(LayoutInflater.from(context).inflate(ResourceManger.getId(context, "R.layout.yidonglogin_loading_alert"), (ViewGroup) null));
    }

    public static void dismiss() {
        Dialog dialog = alertDialog;
        if (dialog == null || !dialog.isShowing()) {
            return;
        }
        alertDialog.dismiss();
        alertDialog = null;
    }
}
