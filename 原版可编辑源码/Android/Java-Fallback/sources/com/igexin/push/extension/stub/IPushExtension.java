package com.igexin.push.extension.stub;

public interface IPushExtension {
    boolean executeAction(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2);

    boolean init(android.content.Context r1);

    boolean isActionSupported(java.lang.String r1);

    void onDestroy();

    com.igexin.push.core.bean.BaseAction parseAction(org.json.JSONObject r1);

    com.igexin.push.core.a prepareExecuteAction(com.igexin.push.core.bean.PushTaskBean r1, com.igexin.push.core.bean.BaseAction r2);
}
