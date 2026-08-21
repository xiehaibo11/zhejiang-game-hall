package com.bykv.vk.openvk.downloadnew.core;

import android.content.DialogInterface;

public interface IDialogStatusChangedListener {
    void onCancel(DialogInterface dialogInterface);

    void onNegativeBtnClick(DialogInterface dialogInterface);

    void onPositiveBtnClick(DialogInterface dialogInterface);
}
