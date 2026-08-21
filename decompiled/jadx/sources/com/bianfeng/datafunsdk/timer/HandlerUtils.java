package com.bianfeng.datafunsdk.timer;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.bianfeng.datafunsdk.x;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

/* JADX INFO: loaded from: classes.dex */
public class HandlerUtils {
    public static Handler handler = new a(Looper.getMainLooper());
    public static Set<HandlerCallback> list = new HashSet();

    public interface HandlerCallback {
        void onCall(int i, String str);
    }

    public static class a extends Handler {
        public a(Looper looper) {
            super(looper);
        }

        @Override // android.os.Handler
        public void handleMessage(Message message) {
            x.a("HandlerUtils start");
            Iterator it = HandlerUtils.list.iterator();
            while (it.hasNext()) {
                ((HandlerCallback) it.next()).onCall(message.what, message.obj.toString());
            }
        }
    }

    public static void addHandlerCallback(HandlerCallback handlerCallback) {
        list.add(handlerCallback);
    }

    public static boolean remove(HandlerCallback handlerCallback) {
        return list.remove(handlerCallback);
    }

    public static void removeMsg(int i) {
        handler.removeMessages(i);
    }

    public static void sendMsg(int i, long j) {
        sendMsg(i, "", j);
    }

    public static void sendMsg(int i, String str, long j) {
        x.a("HandlerUtils sendMsg" + j);
        Message messageObtain = Message.obtain();
        messageObtain.what = i;
        messageObtain.obj = str;
        handler.sendMessageDelayed(messageObtain, j);
    }
}
