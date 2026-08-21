package com.ymnsdk.replugin.action;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestPluginsInfoAction extends com.ymnsdk.replugin.action.ActionSupport<org.json.JSONObject> {
    public RequestPluginsInfoAction(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            com.ymnsdk.replugin.action.HttpHelper r2 = r1.httpHelper
            r0 = 2
            r2.setMethod(r0)
            return
    }

    @Override
    protected java.lang.String getURL() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = com.ymnsdk.replugin.action.URLManager.getHost()
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.String r2 = "plugin/update"
            r0[r1] = r2
            java.lang.String r1 = "%s/%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    @Override
    public org.json.JSONObject onPrepareData(java.lang.Object... r3) throws java.lang.Exception {
            r2 = this;
            r0 = 0
            r1 = r3[r0]
            boolean r1 = r1 instanceof java.lang.String
            if (r1 == 0) goto L19
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L13
            r3 = r3[r0]     // Catch: java.lang.Exception -> L13
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Exception -> L13
            r1.<init>(r3)     // Catch: java.lang.Exception -> L13
            return r1
        L13:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            return r3
        L19:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            return r3
    }

    @Override
    protected org.json.JSONObject onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r1) throws java.lang.Exception {
            r0 = this;
            org.json.JSONObject r1 = r0.onSuccess(r1)
            return r1
    }

    @Override
    protected org.json.JSONObject onSuccess(com.ymnsdk.replugin.action.ActionSupport.ResponseResult r2) throws java.lang.Exception {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            java.lang.String r2 = r2.dataAsString()
            r0.<init>(r2)
            return r0
    }
}
