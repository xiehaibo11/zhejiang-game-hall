package com.bianfeng.roomlib.ui;

import android.app.Activity;
import android.widget.Toast;
import com.bianfeng.roomlib.YmnH5GameRoomSdk;
import com.bianfeng.roomlib.action.ActionCallback;
import com.bianfeng.roomlib.action.GameRoomAction;
import com.bianfeng.utilslib.UtilsSdk;
import com.ss.android.socialbase.downloader.constants.MonitorConstants;
import java.util.Iterator;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class GameRoomWebRequest {
    public static void startRequestWeb(final Activity activity, TreeMap<String, String> treeMap, final WebCallBack webCallBack) {
        UtilsSdk.getLogger().i("GameRoomWebRequest startRequestWeb==" + treeMap);
        TreeMap<String, String> treeMap2 = new TreeMap<>();
        try {
            JSONObject jSONObject = new JSONObject(treeMap.get("params"));
            Iterator<String> itKeys = jSONObject.keys();
            while (itKeys.hasNext()) {
                String string = itKeys.next().toString();
                treeMap2.put(string, jSONObject.get(string).toString());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
        if (treeMap.get("secret").equalsIgnoreCase("true")) {
            treeMap2.put("sign", UtilsSdk.getSignMd5().getMd5(treeMap2));
        }
        GameRoomAction gameRoomAction = new GameRoomAction(treeMap2, String.class);
        if (treeMap.get("method").equalsIgnoreCase(MonitorConstants.CONNECT_TYPE_GET)) {
            gameRoomAction.startActionGet(new ActionCallback<String>() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.1
                @Override // com.bianfeng.roomlib.action.ActionCallback
                public void onSuccess(final String str) {
                    activity.runOnUiThread(new Runnable() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.1.1
                        @Override // java.lang.Runnable
                        public void run() {
                            webCallBack.sendDataToWeb(str);
                        }
                    });
                }

                @Override // com.bianfeng.roomlib.action.ActionCallback
                public void onFali(final String str) {
                    activity.runOnUiThread(new Runnable() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.1.2
                        @Override // java.lang.Runnable
                        public void run() {
                            YmnH5GameRoomSdk.getInstance().getCallback().onFail(str);
                            Toast.makeText(activity, str, 0).show();
                        }
                    });
                }
            });
        } else {
            gameRoomAction.startActionPost(new ActionCallback<String>() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.2
                @Override // com.bianfeng.roomlib.action.ActionCallback
                public void onSuccess(final String str) {
                    activity.runOnUiThread(new Runnable() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.2.1
                        @Override // java.lang.Runnable
                        public void run() {
                            webCallBack.sendDataToWeb(str);
                        }
                    });
                }

                @Override // com.bianfeng.roomlib.action.ActionCallback
                public void onFali(final String str) {
                    activity.runOnUiThread(new Runnable() { // from class: com.bianfeng.roomlib.ui.GameRoomWebRequest.2.2
                        @Override // java.lang.Runnable
                        public void run() {
                            YmnH5GameRoomSdk.getInstance().getCallback().onFail(str);
                            Toast.makeText(activity, str, 0).show();
                        }
                    });
                }
            });
        }
    }
}
