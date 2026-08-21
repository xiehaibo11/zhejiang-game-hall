package com.vivo.push.ups;

public class VUpsManager {

    final class a {
        private static com.vivo.push.ups.VUpsManager a;

        static {
                com.vivo.push.ups.VUpsManager r0 = new com.vivo.push.ups.VUpsManager
                r0.<init>()
                com.vivo.push.ups.VUpsManager.a.a = r0
                return
        }

        static com.vivo.push.ups.VUpsManager a() {
                com.vivo.push.ups.VUpsManager r0 = com.vivo.push.ups.VUpsManager.a.a
                return r0
        }
    }

    public VUpsManager() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.vivo.push.ups.VUpsManager getInstance() {
            com.vivo.push.ups.VUpsManager r0 = com.vivo.push.ups.VUpsManager.a.a()
            return r0
    }

    public void onCommandResult(android.content.Context r1, android.os.Bundle r2) {
            r0 = this;
            return
    }

    public void registerToken(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, com.vivo.push.ups.UPSRegisterCallback r5) {
            r0 = this;
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.getInstance(r1)
            com.vivo.push.ups.a r3 = new com.vivo.push.ups.a
            r3.<init>(r0, r5, r1)
            r2.turnOnPush(r3)
            return
    }

    public void turnOffPush(android.content.Context r2, com.vivo.push.ups.UPSTurnCallback r3) {
            r1 = this;
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.getInstance(r2)
            com.vivo.push.ups.d r0 = new com.vivo.push.ups.d
            r0.<init>(r1, r3)
            r2.turnOffPush(r0)
            return
    }

    public void turnOnPush(android.content.Context r2, com.vivo.push.ups.UPSTurnCallback r3) {
            r1 = this;
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.getInstance(r2)
            com.vivo.push.ups.c r0 = new com.vivo.push.ups.c
            r0.<init>(r1, r3)
            r2.turnOnPush(r0)
            return
    }

    public void unRegisterToken(android.content.Context r2, com.vivo.push.ups.UPSRegisterCallback r3) {
            r1 = this;
            com.vivo.push.PushClient r2 = com.vivo.push.PushClient.getInstance(r2)
            com.vivo.push.ups.b r0 = new com.vivo.push.ups.b
            r0.<init>(r1, r3)
            r2.turnOffPush(r0)
            return
    }
}
