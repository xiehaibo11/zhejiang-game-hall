package com.vivo.push.sdk;

public abstract class OpenClientPushMessageReceiver extends com.vivo.push.sdk.BasePushMessageReceiver {
    public OpenClientPushMessageReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean isAllowNet(android.content.Context r1) {
            r0 = this;
            boolean r1 = super.isAllowNet(r1)
            return r1
    }

    @Override
    public final void onBind(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            super.onBind(r1, r2, r3)
            return
    }

    @Override
    public final void onDelAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public final void onDelTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public final void onListTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.lang.String r4) {
            r0 = this;
            super.onListTags(r1, r2, r3, r4)
            return
    }

    @Override
    public final void onLog(android.content.Context r1, java.lang.String r2, int r3, boolean r4) {
            r0 = this;
            super.onLog(r1, r2, r3, r4)
            return
    }

    @Override
    public final boolean onNotificationMessageArrived(android.content.Context r1, com.vivo.push.model.UPSNotificationMessage r2) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onNotificationMessageClicked(android.content.Context r1, com.vivo.push.model.UPSNotificationMessage r2) {
            r0 = this;
            return
    }

    @Override
    public final void onPublish(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            super.onPublish(r1, r2, r3)
            return
    }

    public void onReceiveRegId(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            return
    }

    @Override
    public final void onSetAlias(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public final void onSetTags(android.content.Context r1, int r2, java.util.List<java.lang.String> r3, java.util.List<java.lang.String> r4, java.lang.String r5) {
            r0 = this;
            return
    }

    @Override
    public void onTransmissionMessage(android.content.Context r1, com.vivo.push.model.UnvarnishedMessage r2) {
            r0 = this;
            return
    }

    @Override
    public final void onUnBind(android.content.Context r1, int r2, java.lang.String r3) {
            r0 = this;
            super.onUnBind(r1, r2, r3)
            return
    }
}
