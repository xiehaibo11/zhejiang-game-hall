package com.bykv.vk.openvk.downloadnew.core;

public class DialogBuilder {
    public com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener dialogStatusChangedListener;
    public android.graphics.drawable.Drawable icon;
    public java.lang.String message;
    public java.lang.String negativeBtnText;
    public java.lang.String positiveBtnText;
    public java.lang.String title;

    public DialogBuilder() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bykv.vk.openvk.downloadnew.core.DialogBuilder builder() {
            com.bykv.vk.openvk.downloadnew.core.DialogBuilder r0 = new com.bykv.vk.openvk.downloadnew.core.DialogBuilder
            r0.<init>()
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setDialogStatusChangedListener(com.bykv.vk.openvk.downloadnew.core.IDialogStatusChangedListener r1) {
            r0 = this;
            r0.dialogStatusChangedListener = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setIcon(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.icon = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setMessage(java.lang.String r1) {
            r0 = this;
            r0.message = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setNegativeBtnText(java.lang.String r1) {
            r0 = this;
            r0.negativeBtnText = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setPositiveBtnText(java.lang.String r1) {
            r0 = this;
            r0.positiveBtnText = r1
            return r0
    }

    public com.bykv.vk.openvk.downloadnew.core.DialogBuilder setTitle(java.lang.String r1) {
            r0 = this;
            r0.title = r1
            return r0
    }
}
