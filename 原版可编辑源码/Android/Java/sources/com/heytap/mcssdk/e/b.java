package com.heytap.mcssdk.e;

import android.app.NotificationManager;
import android.content.Context;
import com.heytap.mcssdk.utils.d;
import com.heytap.mcssdk.utils.f;
import com.heytap.msp.push.callback.IDataMessageCallBackService;
import com.heytap.msp.push.mode.BaseMode;
import com.heytap.msp.push.mode.DataMessage;
import com.heytap.msp.push.statis.StatisticUtils;
import com.huawei.hms.push.constant.RemoteMessageConst;
import java.util.ArrayList;
import java.util.HashMap;

public class b implements c {
    private static final int a = 1;

    private void a(Context context, DataMessage dataMessage) {
        if (context == null) {
            d.b(com.tkay.expressad.foundation.g.b.b.a);
            return;
        }
        d.b("Receive revokeMessage  extra : " + dataMessage.getStatisticsExtra() + "notifyId :" + dataMessage.getNotifyID() + "messageId : " + dataMessage.getTaskID());
        ((NotificationManager) context.getSystemService(RemoteMessageConst.NOTIFICATION)).cancel(dataMessage.getNotifyID());
        b(context, dataMessage);
    }

    private void b(Context context, DataMessage dataMessage) {
        HashMap map = new HashMap();
        ArrayList arrayList = new ArrayList();
        arrayList.add(dataMessage);
        map.put(dataMessage.getEventId(), arrayList);
        StatisticUtils.statisticEvent(context, map);
    }

    @Override
    public void a(final Context context, BaseMode baseMode, final IDataMessageCallBackService iDataMessageCallBackService) {
        if (baseMode != null && baseMode.getType() == 4103) {
            final DataMessage dataMessage = (DataMessage) baseMode;
            if (iDataMessageCallBackService != null) {
                f.b(new Runnable() {
                    @Override
                    public void run() {
                        if (dataMessage.getMsgCommand() == 1) {
                            b.this.a(context, dataMessage);
                        } else {
                            iDataMessageCallBackService.processMessage(context, dataMessage);
                        }
                    }
                });
            }
        }
    }
}
