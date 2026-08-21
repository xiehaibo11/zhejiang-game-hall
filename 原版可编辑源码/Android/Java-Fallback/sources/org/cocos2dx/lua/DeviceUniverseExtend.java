package org.cocos2dx.lua;

public class DeviceUniverseExtend {


    public DeviceUniverseExtend() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void copyString(java.lang.String r1) {
            org.cocos2dx.lua.DeviceUniverseExtend$1 r0 = new org.cocos2dx.lua.DeviceUniverseExtend$1     // Catch: java.lang.Exception -> Lf
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lf
            android.content.Context r1 = com.bianfeng.libuniverse.Universe.getContext()     // Catch: java.lang.Exception -> Lf
            org.cocos2dx.lib.Cocos2dxActivity r1 = (org.cocos2dx.lib.Cocos2dxActivity) r1     // Catch: java.lang.Exception -> Lf
            r1.runOnUiThread(r0)     // Catch: java.lang.Exception -> Lf
            goto L13
        Lf:
            r1 = move-exception
            r1.printStackTrace()
        L13:
            return
    }

    public static java.lang.String getCopyString() {
            java.lang.String r0 = ""
            android.content.Context r1 = com.bianfeng.libuniverse.Universe.getContext()     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = "clipboard"
            java.lang.Object r1 = r1.getSystemService(r2)     // Catch: java.lang.Exception -> L56
            android.content.ClipboardManager r1 = (android.content.ClipboardManager) r1     // Catch: java.lang.Exception -> L56
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L56
            r2.<init>()     // Catch: java.lang.Exception -> L56
            android.content.ClipData r3 = r1.getPrimaryClip()     // Catch: java.lang.Exception -> L56
            android.content.ClipDescription r3 = r3.getDescription()     // Catch: java.lang.Exception -> L56
            java.lang.CharSequence r3 = r3.getLabel()     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L56
            r2.append(r3)     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = " "
            r2.append(r3)     // Catch: java.lang.Exception -> L56
            android.content.ClipData r1 = r1.getPrimaryClip()     // Catch: java.lang.Exception -> L56
            r3 = 0
            android.content.ClipData$Item r1 = r1.getItemAt(r3)     // Catch: java.lang.Exception -> L56
            java.lang.CharSequence r1 = r1.getText()     // Catch: java.lang.Exception -> L56
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L56
            r2.append(r1)     // Catch: java.lang.Exception -> L56
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> L56
            java.io.PrintStream r1 = java.lang.System.out     // Catch: java.lang.Exception -> L56
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L56
            r2.<init>()     // Catch: java.lang.Exception -> L56
            java.lang.String r3 = "StringGetCopyString:"
            r2.append(r3)     // Catch: java.lang.Exception -> L56
            r2.append(r0)     // Catch: java.lang.Exception -> L56
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L56
            r1.println(r2)     // Catch: java.lang.Exception -> L56
            return r0
        L56:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }
}
