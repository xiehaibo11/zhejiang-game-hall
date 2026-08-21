package com.tencent.connect.common;

public class UIListenerManager {
    private static com.tencent.connect.common.UIListenerManager a;
    private java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager.ApiTask> b;

    public class ApiTask {
        final com.tencent.connect.common.UIListenerManager a;
        public com.tencent.tauth.IUiListener mListener;
        public int mRequestCode;

        public ApiTask(com.tencent.connect.common.UIListenerManager r1, int r2, com.tencent.tauth.IUiListener r3) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.mRequestCode = r2
                r0.mListener = r3
                return
        }
    }

    static {
            return
    }

    private UIListenerManager() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.b = r0
            if (r0 != 0) goto L1b
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.Map r0 = java.util.Collections.synchronizedMap(r0)
            r1.b = r0
        L1b:
            return
    }

    private com.tencent.tauth.IUiListener a(int r3, com.tencent.tauth.IUiListener r4) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.UIListenerManager"
            r1 = 11101(0x2b5d, float:1.5556E-41)
            if (r3 != r1) goto Lc
            java.lang.String r3 = "登录的接口回调不能重新构建，暂时无法提供，先记录下来这种情况是否存在"
            com.tencent.open.log.SLog.e(r0, r3)
            goto L1f
        Lc:
            r1 = 11105(0x2b61, float:1.5561E-41)
            if (r3 != r1) goto L16
            java.lang.String r3 = "Social Api 的接口回调需要使用param来重新构建，暂时无法提供，先记录下来这种情况是否存在"
            com.tencent.open.log.SLog.e(r0, r3)
            goto L1f
        L16:
            r1 = 11106(0x2b62, float:1.5563E-41)
            if (r3 != r1) goto L1f
            java.lang.String r3 = "Social Api 的H5接口回调需要使用param来重新构建，暂时无法提供，先记录下来这种情况是否存在"
            com.tencent.open.log.SLog.e(r0, r3)
        L1f:
            return r4
    }

    public static com.tencent.connect.common.UIListenerManager getInstance() {
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.a
            if (r0 != 0) goto Lb
            com.tencent.connect.common.UIListenerManager r0 = new com.tencent.connect.common.UIListenerManager
            r0.<init>()
            com.tencent.connect.common.UIListenerManager.a = r0
        Lb:
            com.tencent.connect.common.UIListenerManager r0 = com.tencent.connect.common.UIListenerManager.a
            return r0
    }

    public com.tencent.tauth.IUiListener getListnerWithAction(java.lang.String r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto Lb
            java.lang.String r5 = "openSDK_LOG.UIListenerManager"
            java.lang.String r1 = "getListnerWithAction action is null!"
            com.tencent.open.log.SLog.e(r5, r1)
            return r0
        Lb:
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r1 = r4.b
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r2 = r4.b     // Catch: java.lang.Throwable -> L22
            java.lang.Object r2 = r2.get(r5)     // Catch: java.lang.Throwable -> L22
            com.tencent.connect.common.UIListenerManager$ApiTask r2 = (com.tencent.connect.common.UIListenerManager.ApiTask) r2     // Catch: java.lang.Throwable -> L22
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r3 = r4.b     // Catch: java.lang.Throwable -> L22
            r3.remove(r5)     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L1f
            return r0
        L1f:
            com.tencent.tauth.IUiListener r5 = r2.mListener
            return r5
        L22:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L22
            throw r5
    }

    public com.tencent.tauth.IUiListener getListnerWithRequestCode(int r3) {
            r2 = this;
            java.lang.String r0 = com.tencent.open.utils.k.a(r3)
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getListner action is null! rquestCode="
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "openSDK_LOG.UIListenerManager"
            com.tencent.open.log.SLog.e(r0, r3)
            r3 = 0
            return r3
        L1e:
            com.tencent.tauth.IUiListener r3 = r2.getListnerWithAction(r0)
            return r3
    }

    public void handleDataToListener(android.content.Intent r6, com.tencent.tauth.IUiListener r7) {
            r5 = this;
            java.lang.String r0 = "openSDK_LOG.UIListenerManager"
            java.lang.String r1 = "handleDataToListener"
            com.tencent.open.log.SLog.i(r0, r1)
            if (r6 != 0) goto Ld
            r7.onCancel()
            return
        Ld:
            java.lang.String r1 = "key_action"
            java.lang.String r1 = r6.getStringExtra(r1)
            java.lang.String r2 = "action_login"
            boolean r2 = r2.equals(r1)
            r3 = -4
            java.lang.String r4 = ""
            if (r2 == 0) goto L86
            r1 = 0
            java.lang.String r2 = "key_error_code"
            int r1 = r6.getIntExtra(r2, r1)
            if (r1 != 0) goto L59
            java.lang.String r1 = "key_response"
            java.lang.String r6 = r6.getStringExtra(r1)
            if (r6 == 0) goto L4a
            org.json.JSONObject r1 = com.tencent.open.utils.m.d(r6)     // Catch: org.json.JSONException -> L38
            r7.onComplete(r1)     // Catch: org.json.JSONException -> L38
            goto Lfd
        L38:
            r1 = move-exception
            com.tencent.tauth.UiError r2 = new com.tencent.tauth.UiError
            java.lang.String r4 = "服务器返回数据格式有误!"
            r2.<init>(r3, r4, r6)
            r7.onError(r2)
            java.lang.String r6 = "OpenUi, onActivityResult, json error"
            com.tencent.open.log.SLog.e(r0, r6, r1)
            goto Lfd
        L4a:
            java.lang.String r6 = "OpenUi, onActivityResult, onComplete"
            com.tencent.open.log.SLog.d(r0, r6)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            r7.onComplete(r6)
            goto Lfd
        L59:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "OpenUi, onActivityResult, onError = "
            r2.append(r3)
            r2.append(r1)
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r2)
            java.lang.String r0 = "key_error_msg"
            java.lang.String r0 = r6.getStringExtra(r0)
            java.lang.String r2 = "key_error_detail"
            java.lang.String r6 = r6.getStringExtra(r2)
            com.tencent.tauth.UiError r2 = new com.tencent.tauth.UiError
            r2.<init>(r1, r0, r6)
            r7.onError(r2)
            goto Lfd
        L86:
            java.lang.String r0 = "action_share"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lfd
            java.lang.String r0 = "result"
            java.lang.String r0 = r6.getStringExtra(r0)
            java.lang.String r1 = "response"
            java.lang.String r6 = r6.getStringExtra(r1)
            java.lang.String r1 = "cancel"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto La6
            r7.onCancel()
            goto Lfd
        La6:
            java.lang.String r1 = "error"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto Lc9
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            r1 = -6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r4)
            java.lang.String r6 = r2.toString()
            java.lang.String r2 = "unknown error"
            r0.<init>(r1, r2, r6)
            r7.onError(r0)
            goto Lfd
        Lc9:
            java.lang.String r1 = "complete"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lfd
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> Le0
            if (r6 != 0) goto Ld8
            java.lang.String r1 = "{\"ret\": 0}"
            goto Ld9
        Ld8:
            r1 = r6
        Ld9:
            r0.<init>(r1)     // Catch: org.json.JSONException -> Le0
            r7.onComplete(r0)     // Catch: org.json.JSONException -> Le0
            goto Lfd
        Le0:
            r0 = move-exception
            r0.printStackTrace()
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            r1.append(r4)
            java.lang.String r6 = r1.toString()
            java.lang.String r1 = "json error"
            r0.<init>(r3, r1, r6)
            r7.onError(r0)
        Lfd:
            return
    }

    public boolean onActivityResult(int r17, int r18, android.content.Intent r19, com.tencent.tauth.IUiListener r20) {
            r16 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            r3 = r20
            java.lang.String r4 = "message"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "onActivityResult req="
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = " res="
            r5.append(r6)
            r5.append(r1)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "openSDK_LOG.UIListenerManager"
            com.tencent.open.log.SLog.i(r6, r5)
            com.tencent.tauth.IUiListener r5 = r16.getListnerWithRequestCode(r17)
            r7 = 0
            if (r5 != 0) goto L40
            if (r3 == 0) goto L38
            r8 = r16
            com.tencent.tauth.IUiListener r5 = r8.a(r0, r3)
            goto L42
        L38:
            r8 = r16
            java.lang.String r0 = "onActivityResult can't find the listener"
            com.tencent.open.log.SLog.e(r6, r0)
            return r7
        L40:
            r8 = r16
        L42:
            r0 = -1
            r3 = 1
            if (r1 != r0) goto L1ed
            r0 = -6
            if (r2 != 0) goto L54
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            java.lang.String r2 = "onActivityResult intent data is null."
            r1.<init>(r0, r2, r2)
            r5.onError(r1)
            return r3
        L54:
            java.lang.String r1 = "key_action"
            java.lang.String r1 = r2.getStringExtra(r1)
            java.lang.String r9 = "action_login"
            boolean r9 = r9.equals(r1)
            java.lang.String r10 = "key_response"
            java.lang.String r11 = "服务器返回数据格式有误!"
            java.lang.String r12 = "key_error_detail"
            java.lang.String r13 = "key_error_msg"
            java.lang.String r14 = ""
            java.lang.String r15 = "key_error_code"
            r3 = -4
            if (r9 == 0) goto Lcc
            int r0 = r2.getIntExtra(r15, r7)
            if (r0 != 0) goto La3
            java.lang.String r1 = r2.getStringExtra(r10)
            if (r1 == 0) goto L94
            org.json.JSONObject r0 = com.tencent.open.utils.m.d(r1)     // Catch: org.json.JSONException -> L84
            r5.onComplete(r0)     // Catch: org.json.JSONException -> L84
            goto L1f0
        L84:
            r0 = move-exception
            com.tencent.tauth.UiError r2 = new com.tencent.tauth.UiError
            r2.<init>(r3, r11, r1)
            r5.onError(r2)
            java.lang.String r1 = "OpenUi, onActivityResult, json error"
            com.tencent.open.log.SLog.e(r6, r1, r0)
            goto L1f0
        L94:
            java.lang.String r0 = "OpenUi, onActivityResult, onComplete"
            com.tencent.open.log.SLog.d(r6, r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r5.onComplete(r0)
            goto L1f0
        La3:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "OpenUi, onActivityResult, onError = "
            r1.append(r3)
            r1.append(r0)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            com.tencent.open.log.SLog.e(r6, r1)
            java.lang.String r1 = r2.getStringExtra(r13)
            java.lang.String r2 = r2.getStringExtra(r12)
            com.tencent.tauth.UiError r3 = new com.tencent.tauth.UiError
            r3.<init>(r0, r1, r2)
            r5.onError(r3)
            goto L1f0
        Lcc:
            java.lang.String r9 = "action_share"
            boolean r9 = r9.equals(r1)
            java.lang.String r0 = "response"
            if (r9 != 0) goto L17d
            java.lang.String r9 = "action_request_avatar"
            boolean r9 = r9.equals(r1)
            if (r9 != 0) goto L17d
            java.lang.String r9 = "action_request_dynamic_avatar"
            boolean r9 = r9.equals(r1)
            if (r9 != 0) goto L17d
            java.lang.String r9 = "action_request_set_emotion"
            boolean r9 = r9.equals(r1)
            if (r9 != 0) goto L17d
            java.lang.String r9 = "guildOpen"
            boolean r9 = r9.equals(r1)
            if (r9 == 0) goto Lf8
            goto L17d
        Lf8:
            java.lang.String r6 = "action_common_channel"
            boolean r1 = r6.equals(r1)
            if (r1 == 0) goto L142
            int r1 = r2.getIntExtra(r15, r7)
            if (r1 != 0) goto L130
            java.lang.String r0 = r2.getStringExtra(r0)
            if (r0 == 0) goto L126
            java.lang.String r1 = r2.getStringExtra(r4)     // Catch: org.json.JSONException -> L11c
            org.json.JSONObject r2 = com.tencent.open.utils.m.d(r0)     // Catch: org.json.JSONException -> L11c
            r2.put(r4, r1)     // Catch: org.json.JSONException -> L11c
            r5.onComplete(r2)     // Catch: org.json.JSONException -> L11c
            goto L1f0
        L11c:
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            r1.<init>(r3, r11, r0)
            r5.onError(r1)
            goto L1f0
        L126:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r5.onComplete(r0)
            goto L1f0
        L130:
            java.lang.String r0 = r2.getStringExtra(r13)
            java.lang.String r2 = r2.getStringExtra(r12)
            com.tencent.tauth.UiError r3 = new com.tencent.tauth.UiError
            r3.<init>(r1, r0, r2)
            r5.onError(r3)
            goto L1f0
        L142:
            int r0 = r2.getIntExtra(r15, r7)
            if (r0 != 0) goto L16b
            java.lang.String r0 = r2.getStringExtra(r10)
            if (r0 == 0) goto L161
            org.json.JSONObject r1 = com.tencent.open.utils.m.d(r0)     // Catch: org.json.JSONException -> L157
            r5.onComplete(r1)     // Catch: org.json.JSONException -> L157
            goto L1f0
        L157:
            com.tencent.tauth.UiError r1 = new com.tencent.tauth.UiError
            r1.<init>(r3, r11, r0)
            r5.onError(r1)
            goto L1f0
        L161:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r5.onComplete(r0)
            goto L1f0
        L16b:
            java.lang.String r1 = r2.getStringExtra(r13)
            java.lang.String r2 = r2.getStringExtra(r12)
            com.tencent.tauth.UiError r3 = new com.tencent.tauth.UiError
            r3.<init>(r0, r1, r2)
            r5.onError(r3)
            goto L1f0
        L17d:
            java.lang.String r1 = "result"
            java.lang.String r1 = r2.getStringExtra(r1)
            java.lang.String r2 = r2.getStringExtra(r0)
            java.lang.String r0 = "cancel"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L193
            r5.onCancel()
            goto L1f0
        L193:
            java.lang.String r0 = "error"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1b6
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "unknown error"
            r3 = -6
            r0.<init>(r3, r2, r1)
            r5.onError(r0)
            goto L1f0
        L1b6:
            java.lang.String r0 = "complete"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1f0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1cd
            if (r2 != 0) goto L1c5
            java.lang.String r1 = "{\"ret\": 0}"
            goto L1c6
        L1c5:
            r1 = r2
        L1c6:
            r0.<init>(r1)     // Catch: org.json.JSONException -> L1cd
            r5.onComplete(r0)     // Catch: org.json.JSONException -> L1cd
            goto L1f0
        L1cd:
            r0 = move-exception
            java.lang.String r1 = "JSONException"
            com.tencent.open.log.SLog.e(r6, r1, r0)
            com.tencent.tauth.UiError r0 = new com.tencent.tauth.UiError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r1.append(r14)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "json error"
            r0.<init>(r3, r2, r1)
            r5.onError(r0)
            goto L1f0
        L1ed:
            r5.onCancel()
        L1f0:
            r1 = 1
            return r1
    }

    public java.lang.Object setListenerWithRequestcode(int r6, com.tencent.tauth.IUiListener r7) {
            r5 = this;
            java.lang.String r0 = com.tencent.open.utils.k.a(r6)
            r1 = 0
            if (r0 != 0) goto L1e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "setListener action is null! rquestCode="
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "openSDK_LOG.UIListenerManager"
            com.tencent.open.log.SLog.e(r7, r6)
            return r1
        L1e:
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r2 = r5.b
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r3 = r5.b     // Catch: java.lang.Throwable -> L35
            com.tencent.connect.common.UIListenerManager$ApiTask r4 = new com.tencent.connect.common.UIListenerManager$ApiTask     // Catch: java.lang.Throwable -> L35
            r4.<init>(r5, r6, r7)     // Catch: java.lang.Throwable -> L35
            java.lang.Object r6 = r3.put(r0, r4)     // Catch: java.lang.Throwable -> L35
            com.tencent.connect.common.UIListenerManager$ApiTask r6 = (com.tencent.connect.common.UIListenerManager.ApiTask) r6     // Catch: java.lang.Throwable -> L35
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L35
            if (r6 != 0) goto L32
            return r1
        L32:
            com.tencent.tauth.IUiListener r6 = r6.mListener
            return r6
        L35:
            r6 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L35
            throw r6
    }

    public java.lang.Object setListnerWithAction(java.lang.String r6, com.tencent.tauth.IUiListener r7) {
            r5 = this;
            int r0 = com.tencent.open.utils.k.b(r6)
            r1 = 0
            r2 = -1
            if (r0 != r2) goto L1f
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "setListnerWithAction fail, action = "
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            java.lang.String r7 = "openSDK_LOG.UIListenerManager"
            com.tencent.open.log.SLog.e(r7, r6)
            return r1
        L1f:
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r2 = r5.b
            monitor-enter(r2)
            java.util.Map<java.lang.String, com.tencent.connect.common.UIListenerManager$ApiTask> r3 = r5.b     // Catch: java.lang.Throwable -> L36
            com.tencent.connect.common.UIListenerManager$ApiTask r4 = new com.tencent.connect.common.UIListenerManager$ApiTask     // Catch: java.lang.Throwable -> L36
            r4.<init>(r5, r0, r7)     // Catch: java.lang.Throwable -> L36
            java.lang.Object r6 = r3.put(r6, r4)     // Catch: java.lang.Throwable -> L36
            com.tencent.connect.common.UIListenerManager$ApiTask r6 = (com.tencent.connect.common.UIListenerManager.ApiTask) r6     // Catch: java.lang.Throwable -> L36
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
            if (r6 != 0) goto L33
            return r1
        L33:
            com.tencent.tauth.IUiListener r6 = r6.mListener
            return r6
        L36:
            r6 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L36
            throw r6
    }
}
