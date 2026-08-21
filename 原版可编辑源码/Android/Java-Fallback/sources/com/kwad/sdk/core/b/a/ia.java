package com.kwad.sdk.core.b.a;

public final class ia implements com.kwad.sdk.core.d<com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo> {
    public ia() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "status"
            int r0 = r7.optInt(r0)
            r6.status = r0
            java.lang.String r0 = "type"
            int r0 = r7.optInt(r0)
            r6.type = r0
            java.lang.String r0 = "preload_id"
            java.lang.String r0 = r7.optString(r0)
            r6.preloadId = r0
            java.lang.String r0 = r6.preloadId
            java.lang.Object r1 = org.json.JSONObject.NULL
            java.lang.String r2 = ""
            if (r0 != r1) goto L25
            r6.preloadId = r2
        L25:
            java.lang.String r0 = "error_code"
            int r0 = r7.optInt(r0)
            r6.errorCode = r0
            java.lang.String r0 = "error_msg"
            java.lang.String r0 = r7.optString(r0)
            r6.errorMsg = r0
            java.lang.String r0 = r6.errorMsg
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L3d
            r6.errorMsg = r2
        L3d:
            java.lang.String r0 = "check_status"
            int r0 = r7.optInt(r0)
            r6.checkStatus = r0
            java.lang.String r0 = "load_data_duration_ms"
            long r0 = r7.optLong(r0)
            r6.loadDataTime = r0
            java.lang.String r0 = "before_load_data_duration_ms"
            long r0 = r7.optLong(r0)
            r6.beforeLoadDataTime = r0
            java.lang.String r0 = "check_data_duration_ms"
            long r0 = r7.optLong(r0)
            r6.checkDataTime = r0
            java.lang.String r0 = "load_and_check_data_duration_ms"
            long r0 = r7.optLong(r0)
            r6.loadAndCheckDataTime = r0
            java.lang.String r0 = "duration_ms"
            long r0 = r7.optLong(r0)
            r6.costTime = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.ids = r0
            java.lang.String r0 = "ids"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            r1 = 0
            if (r0 == 0) goto L92
            r3 = r1
        L7e:
            int r4 = r0.length()
            if (r3 >= r4) goto L92
            java.util.List<java.lang.String> r4 = r6.ids
            java.lang.Object r5 = r0.opt(r3)
            java.lang.String r5 = (java.lang.String) r5
            r4.add(r5)
            int r3 = r3 + 1
            goto L7e
        L92:
            java.lang.String r0 = "count"
            int r0 = r7.optInt(r0)
            r6.count = r0
            java.lang.String r0 = "validity_period_ms"
            long r3 = r7.optLong(r0)
            r6.cacheValidTime = r3
            java.lang.String r0 = "size"
            long r3 = r7.optLong(r0)
            r6.size = r3
            java.lang.String r0 = "url"
            java.lang.String r0 = r7.optString(r0)
            r6.url = r0
            java.lang.String r0 = r6.url
            java.lang.Object r3 = org.json.JSONObject.NULL
            if (r0 != r3) goto Lba
            r6.url = r2
        Lba:
            java.lang.String r0 = "creative_id"
            long r3 = r7.optLong(r0)
            r6.creativeId = r3
            java.lang.String r0 = "material_type"
            int r0 = r7.optInt(r0)
            r6.materialType = r0
            java.lang.String r0 = "total_count"
            int r0 = r7.optInt(r0)
            r6.totalCount = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.creativeIds = r0
            java.lang.String r0 = "creative_ids"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            if (r0 == 0) goto Lf6
            r3 = r1
        Le2:
            int r4 = r0.length()
            if (r3 >= r4) goto Lf6
            java.util.List<java.lang.String> r4 = r6.creativeIds
            java.lang.Object r5 = r0.opt(r3)
            java.lang.String r5 = (java.lang.String) r5
            r4.add(r5)
            int r3 = r3 + 1
            goto Le2
        Lf6:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.preloadIds = r0
            java.lang.String r0 = "preload_ids"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            if (r0 == 0) goto L11a
            r3 = r1
        L106:
            int r4 = r0.length()
            if (r3 >= r4) goto L11a
            java.util.List<java.lang.String> r4 = r6.preloadIds
            java.lang.Object r5 = r0.opt(r3)
            java.lang.String r5 = (java.lang.String) r5
            r4.add(r5)
            int r3 = r3 + 1
            goto L106
        L11a:
            java.lang.String r0 = "pos_Id"
            long r3 = r7.optLong(r0)
            r6.posId = r3
            java.lang.String r0 = "view_source"
            int r0 = r7.optInt(r0)
            r6.viewSource = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r6.elementTypes = r0
            java.lang.String r0 = "element_types"
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            if (r0 == 0) goto L14d
        L139:
            int r3 = r0.length()
            if (r1 >= r3) goto L14d
            java.util.List<java.lang.Integer> r3 = r6.elementTypes
            java.lang.Object r4 = r0.opt(r1)
            java.lang.Integer r4 = (java.lang.Integer) r4
            r3.add(r4)
            int r1 = r1 + 1
            goto L139
        L14d:
            java.lang.String r0 = "interactive_style"
            java.lang.String r0 = r7.optString(r0)
            r6.interactiveStyle = r0
            java.lang.String r0 = r6.interactiveStyle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L15d
            r6.interactiveStyle = r2
        L15d:
            java.lang.String r0 = "interactivity_default_style"
            java.lang.String r0 = r7.optString(r0)
            r6.interactivityDefaultStyle = r0
            java.lang.String r0 = r6.interactivityDefaultStyle
            java.lang.Object r1 = org.json.JSONObject.NULL
            if (r0 != r1) goto L16d
            r6.interactivityDefaultStyle = r2
        L16d:
            java.lang.String r0 = "show_end_time"
            long r0 = r7.optLong(r0)
            r6.showEndTime = r0
            java.lang.String r0 = "is_rotate_compose_timeout"
            boolean r0 = r7.optBoolean(r0)
            r6.isRotateComposeTimeout = r0
            java.lang.String r0 = "tk_default_timeout"
            long r0 = r7.optLong(r0)
            r6.tkDefaultTimeout = r0
            java.lang.String r0 = "so_source"
            int r0 = r7.optInt(r0)
            r6.soSource = r0
            java.lang.String r0 = "so_load_time"
            long r0 = r7.optLong(r0)
            r6.soLoadTime = r0
            java.lang.String r0 = "offline_source"
            int r0 = r7.optInt(r0)
            r6.offlineSource = r0
            java.lang.String r0 = "offline_load_time"
            long r0 = r7.optLong(r0)
            r6.offlineLoadTime = r0
            java.lang.String r0 = "tk_file_load_time"
            long r0 = r7.optLong(r0)
            r6.tkFileLoadTime = r0
            java.lang.String r0 = "tk_init_time"
            long r0 = r7.optLong(r0)
            r6.tkInitTime = r0
            java.lang.String r0 = "tk_render_time"
            long r0 = r7.optLong(r0)
            r6.tkRenderTime = r0
            java.lang.String r0 = "native_load_time"
            long r0 = r7.optLong(r0)
            r6.nativeLoadTime = r0
            java.lang.String r0 = "is_web_timeout"
            boolean r0 = r7.optBoolean(r0)
            r6.isWebTimeout = r0
            java.lang.String r0 = "web_load_time"
            long r0 = r7.optLong(r0)
            r6.webLoadTime = r0
            return
    }

    private static org.json.JSONObject b(com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r6, org.json.JSONObject r7) {
            if (r7 != 0) goto L7
            org.json.JSONObject r7 = new org.json.JSONObject
            r7.<init>()
        L7:
            int r0 = r6.status
            if (r0 == 0) goto L12
            int r0 = r6.status
            java.lang.String r1 = "status"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L12:
            int r0 = r6.type
            if (r0 == 0) goto L1d
            int r0 = r6.type
            java.lang.String r1 = "type"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1d:
            java.lang.String r0 = r6.preloadId
            java.lang.String r1 = ""
            if (r0 == 0) goto L32
            java.lang.String r0 = r6.preloadId
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L32
            java.lang.String r0 = r6.preloadId
            java.lang.String r2 = "preload_id"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L32:
            int r0 = r6.errorCode
            if (r0 == 0) goto L3d
            int r0 = r6.errorCode
            java.lang.String r2 = "error_code"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L3d:
            java.lang.String r0 = r6.errorMsg
            if (r0 == 0) goto L50
            java.lang.String r0 = r6.errorMsg
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L50
            java.lang.String r0 = r6.errorMsg
            java.lang.String r2 = "error_msg"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L50:
            int r0 = r6.checkStatus
            if (r0 == 0) goto L5b
            int r0 = r6.checkStatus
            java.lang.String r2 = "check_status"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L5b:
            long r2 = r6.loadDataTime
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L6a
            long r2 = r6.loadDataTime
            java.lang.String r0 = "load_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L6a:
            long r2 = r6.beforeLoadDataTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L77
            long r2 = r6.beforeLoadDataTime
            java.lang.String r0 = "before_load_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L77:
            long r2 = r6.checkDataTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L84
            long r2 = r6.checkDataTime
            java.lang.String r0 = "check_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L84:
            long r2 = r6.loadAndCheckDataTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L91
            long r2 = r6.loadAndCheckDataTime
            java.lang.String r0 = "load_and_check_data_duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L91:
            long r2 = r6.costTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L9e
            long r2 = r6.costTime
            java.lang.String r0 = "duration_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L9e:
            java.util.List<java.lang.String> r0 = r6.ids
            java.lang.String r2 = "ids"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            int r0 = r6.count
            if (r0 == 0) goto Lb0
            int r0 = r6.count
            java.lang.String r2 = "count"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lb0:
            long r2 = r6.cacheValidTime
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto Lbd
            long r2 = r6.cacheValidTime
            java.lang.String r0 = "validity_period_ms"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        Lbd:
            long r2 = r6.size
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto Lca
            long r2 = r6.size
            java.lang.String r0 = "size"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        Lca:
            java.lang.String r0 = r6.url
            if (r0 == 0) goto Ldd
            java.lang.String r0 = r6.url
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto Ldd
            java.lang.String r0 = r6.url
            java.lang.String r2 = "url"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Ldd:
            long r2 = r6.creativeId
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto Lea
            long r2 = r6.creativeId
            java.lang.String r0 = "creative_id"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        Lea:
            int r0 = r6.materialType
            if (r0 == 0) goto Lf5
            int r0 = r6.materialType
            java.lang.String r2 = "material_type"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        Lf5:
            int r0 = r6.totalCount
            if (r0 == 0) goto L100
            int r0 = r6.totalCount
            java.lang.String r2 = "total_count"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L100:
            java.util.List<java.lang.String> r0 = r6.creativeIds
            java.lang.String r2 = "creative_ids"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.util.List<java.lang.String> r0 = r6.preloadIds
            java.lang.String r2 = "preload_ids"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            long r2 = r6.posId
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L11b
            long r2 = r6.posId
            java.lang.String r0 = "pos_Id"
            com.kwad.sdk.utils.t.putValue(r7, r0, r2)
        L11b:
            int r0 = r6.viewSource
            if (r0 == 0) goto L126
            int r0 = r6.viewSource
            java.lang.String r2 = "view_source"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L126:
            java.util.List<java.lang.Integer> r0 = r6.elementTypes
            java.lang.String r2 = "element_types"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
            java.lang.String r0 = r6.interactiveStyle
            if (r0 == 0) goto L140
            java.lang.String r0 = r6.interactiveStyle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L140
            java.lang.String r0 = r6.interactiveStyle
            java.lang.String r2 = "interactive_style"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L140:
            java.lang.String r0 = r6.interactivityDefaultStyle
            if (r0 == 0) goto L153
            java.lang.String r0 = r6.interactivityDefaultStyle
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L153
            java.lang.String r0 = r6.interactivityDefaultStyle
            java.lang.String r1 = "interactivity_default_style"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L153:
            long r0 = r6.showEndTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L160
            long r0 = r6.showEndTime
            java.lang.String r2 = "show_end_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L160:
            boolean r0 = r6.isRotateComposeTimeout
            if (r0 == 0) goto L16b
            boolean r0 = r6.isRotateComposeTimeout
            java.lang.String r1 = "is_rotate_compose_timeout"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L16b:
            long r0 = r6.tkDefaultTimeout
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L178
            long r0 = r6.tkDefaultTimeout
            java.lang.String r2 = "tk_default_timeout"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L178:
            int r0 = r6.soSource
            if (r0 == 0) goto L183
            int r0 = r6.soSource
            java.lang.String r1 = "so_source"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L183:
            long r0 = r6.soLoadTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L190
            long r0 = r6.soLoadTime
            java.lang.String r2 = "so_load_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L190:
            int r0 = r6.offlineSource
            if (r0 == 0) goto L19b
            int r0 = r6.offlineSource
            java.lang.String r1 = "offline_source"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L19b:
            long r0 = r6.offlineLoadTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1a8
            long r0 = r6.offlineLoadTime
            java.lang.String r2 = "offline_load_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1a8:
            long r0 = r6.tkFileLoadTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1b5
            long r0 = r6.tkFileLoadTime
            java.lang.String r2 = "tk_file_load_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1b5:
            long r0 = r6.tkInitTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1c2
            long r0 = r6.tkInitTime
            java.lang.String r2 = "tk_init_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1c2:
            long r0 = r6.tkRenderTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1cf
            long r0 = r6.tkRenderTime
            java.lang.String r2 = "tk_render_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1cf:
            long r0 = r6.nativeLoadTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1dc
            long r0 = r6.nativeLoadTime
            java.lang.String r2 = "native_load_time"
            com.kwad.sdk.utils.t.putValue(r7, r2, r0)
        L1dc:
            boolean r0 = r6.isWebTimeout
            if (r0 == 0) goto L1e7
            boolean r0 = r6.isWebTimeout
            java.lang.String r1 = "is_web_timeout"
            com.kwad.sdk.utils.t.putValue(r7, r1, r0)
        L1e7:
            long r0 = r6.webLoadTime
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L1f4
            long r0 = r6.webLoadTime
            java.lang.String r6 = "web_load_time"
            com.kwad.sdk.utils.t.putValue(r7, r6, r0)
        L1f4:
            return r7
    }

    @Override
    public final void a(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = (com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo) r1
            a(r1, r2)
            return
    }

    @Override
    public final org.json.JSONObject b(com.kwad.sdk.core.b r1, org.json.JSONObject r2) {
            r0 = this;
            com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo r1 = (com.kwad.components.ad.splashscreen.monitor.SplashMonitorInfo) r1
            org.json.JSONObject r1 = b(r1, r2)
            return r1
    }
}
