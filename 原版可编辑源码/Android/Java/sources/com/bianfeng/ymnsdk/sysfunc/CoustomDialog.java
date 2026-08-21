package com.bianfeng.ymnsdk.sysfunc;

import android.R;
import android.app.Activity;
import android.app.AlertDialog;
import android.content.DialogInterface;

public class CoustomDialog {
    public static void sysMessageBox(Activity activity, String str, String str2, String str3, final SysfuncInterface sysfuncInterface) {
        String[] strArrSplit = str3.split("\\|");
        AlertDialog.Builder builder = new AlertDialog.Builder(activity);
        int i = 0;
        builder.setCancelable(false);
        int length = strArrSplit.length;
        if (length > 0 && strArrSplit[0] != null) {
            builder.setPositiveButton(strArrSplit[0], new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i2) {
                    sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_POSITIVE, "确定");
                }
            });
            i = 1;
        }
        if (i < length && strArrSplit[i] != null) {
            builder.setNeutralButton(strArrSplit[i], new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i2) {
                    sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEUTRAL, "中立");
                }
            });
            i++;
        }
        if (i < length && strArrSplit[i] != null) {
            builder.setNegativeButton(strArrSplit[i], new DialogInterface.OnClickListener() {
                @Override
                public void onClick(DialogInterface dialogInterface, int i2) {
                    sysfuncInterface.sendResult(SysfuncInterface.SYSFUNC_SYSMESSAGEBOX_NEGATIVE, "取消");
                }
            });
        }
        builder.setTitle(str);
        builder.setIcon(R.drawable.ic_dialog_info);
        builder.setMessage(str2);
        builder.show();
    }
}
