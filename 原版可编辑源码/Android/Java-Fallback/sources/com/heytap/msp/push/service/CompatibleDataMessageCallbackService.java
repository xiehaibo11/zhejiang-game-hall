package com.heytap.msp.push.service;

public class CompatibleDataMessageCallbackService extends android.app.Service implements com.heytap.msp.push.callback.IDataMessageCallBackService {
    public CompatibleDataMessageCallbackService() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public final int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            com.heytap.mcssdk.PushService r2 = com.heytap.mcssdk.PushService.getInstance()
            android.content.Context r3 = r0.getApplicationContext()
            r2.innerInit(r3)
            android.content.Context r2 = r0.getApplicationContext()
            com.heytap.mcssdk.b.a(r2, r1, r0)
            r1 = 2
            return r1
    }

    @Override
    public void processMessage(android.content.Context r2, com.heytap.msp.push.mode.DataMessage r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "Receive DataMessageCallbackService:messageTitle: "
            r2.append(r0)
            java.lang.String r0 = r3.getTitle()
            r2.append(r0)
            java.lang.String r0 = " ------content:"
            r2.append(r0)
            java.lang.String r0 = r3.getContent()
            r2.append(r0)
            java.lang.String r0 = "------describe:"
            r2.append(r0)
            java.lang.String r3 = r3.getDescription()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.heytap.mcssdk.utils.d.b(r2)
            return
    }
}
