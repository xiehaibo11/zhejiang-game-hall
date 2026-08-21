package com.bianfeng.privategetui;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.util.Log;

class YmnGetuiHandler extends Handler {
    private static PrivateGetuiInterface anInterface;
    private static YmnGetuiHandler handler;
    private static volatile boolean isFirst;

    public YmnGetuiHandler(Looper looper) {
        super(looper);
    }

    public static void init(PrivateGetuiInterface privateGetuiInterface) {
        if (isFirst) {
            return;
        }
        isFirst = true;
        anInterface = privateGetuiInterface;
        handler = new YmnGetuiHandler(Looper.getMainLooper());
    }

    public static void setMsg(Message message) {
        YmnGetuiHandler ymnGetuiHandler = handler;
        if (ymnGetuiHandler != null) {
            ymnGetuiHandler.sendMessage(message);
        }
    }

    @Override
    public void handleMessage(Message message) {
        super.handleMessage(message);
        if (anInterface == null) {
            Log.i("ymnsdk", "getui handler not init ");
        }
        Log.i("ymnsdk", "getui handler msg " + message.obj);
        int i = message.what;
        switch (i) {
            case GetuiWrapper.GETUI_BIND_ALIAS_SUCCESS:
                anInterface.sendResult(GetuiWrapper.GETUI_BIND_ALIAS_SUCCESS, message.obj + "");
                break;
            case GetuiWrapper.GETUI_BIND_ALIAS_FAIL:
                anInterface.sendResult(GetuiWrapper.GETUI_BIND_ALIAS_FAIL, message.obj + "");
                break;
            case GetuiWrapper.GETUI_UNBIND_ALIAS_SUCCESS:
                anInterface.sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_SUCCESS, message.obj + "");
                break;
            case GetuiWrapper.GETUI_UNBIND_ALIAS_FAIL:
                anInterface.sendResult(GetuiWrapper.GETUI_UNBIND_ALIAS_FAIL, message.obj + "");
                break;
            default:
                switch (i) {
                    case GetuiWrapper.GETUI_PID:
                        anInterface.sendResult(GetuiWrapper.GETUI_PID, message.obj + "");
                        break;
                    case GetuiWrapper.GETUI_MESSAGE_ARRIVED:
                        anInterface.sendResult(GetuiWrapper.GETUI_MESSAGE_ARRIVED, message.obj + "");
                        break;
                    case GetuiWrapper.GETUI_MESSAGE_CLICK:
                        anInterface.sendResult(GetuiWrapper.GETUI_MESSAGE_CLICK, message.obj + "");
                        break;
                    case GetuiWrapper.GETUI_TAG_SUCCESS:
                        anInterface.sendResult(GetuiWrapper.GETUI_TAG_SUCCESS, message.obj + "");
                        break;
                    case GetuiWrapper.GETUI_TAG_FAIL:
                        anInterface.sendResult(GetuiWrapper.GETUI_TAG_FAIL, message.obj + "");
                        break;
                }
                break;
        }
    }
}
