package org.cocos2dx.lua;

import android.content.ClipData;
import android.content.ClipboardManager;
import com.bianfeng.libuniverse.Universe;
import org.cocos2dx.lib.Cocos2dxActivity;

/* JADX INFO: loaded from: classes4.dex */
public class DeviceUniverseExtend {
    public static void copyString(final String str) {
        try {
            ((Cocos2dxActivity) Universe.getContext()).runOnUiThread(new Runnable() { // from class: org.cocos2dx.lua.DeviceUniverseExtend.1
                @Override // java.lang.Runnable
                public void run() {
                    ((ClipboardManager) Universe.getContext().getSystemService("clipboard")).setPrimaryClip(ClipData.newPlainText("Copied Text", str));
                }
            });
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String getCopyString() {
        String str = "";
        try {
            ClipboardManager clipboardManager = (ClipboardManager) Universe.getContext().getSystemService("clipboard");
            str = ((String) clipboardManager.getPrimaryClip().getDescription().getLabel()) + " " + ((String) clipboardManager.getPrimaryClip().getItemAt(0).getText());
            System.out.println("StringGetCopyString:" + str);
            return str;
        } catch (Exception e) {
            e.printStackTrace();
            return str;
        }
    }
}
