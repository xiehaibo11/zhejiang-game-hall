package com.bykv.vk.openvk.downloadnew.core;

public interface IDialogStatusChangedListener {
    void onCancel(android.content.DialogInterface r1);

    void onNegativeBtnClick(android.content.DialogInterface r1);

    void onPositiveBtnClick(android.content.DialogInterface r1);
}
