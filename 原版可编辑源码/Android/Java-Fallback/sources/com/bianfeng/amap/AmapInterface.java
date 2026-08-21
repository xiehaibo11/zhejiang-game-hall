package com.bianfeng.amap;

@com.bianfeng.ymnsdk.feature.protocol.YPlugin(entrance = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Entrance.ACTIVITY, strategy = com.bianfeng.ymnsdk.feature.protocol.YPlugin.Policy.FORCE)
public class AmapInterface extends com.bianfeng.ymnsdk.feature.YmnPluginWrapper {
    public static final int CODE_GET_LOCATION_FAILURE = 1702;
    public static final int CODE_GET_LOCATION_FAIL_NO_PERMISSION = 1703;
    public static final int CODE_GET_LOCATION_SUCCESS = 1701;
    public static final java.lang.String FUNCTION_GET_AMAP_LOCATION = "amap_get_location";
    private static final java.lang.String FUNCTION_GET_AMAP_LOCATION_SPORT = "amap_get_location_by_sport";
    private static final java.lang.String FUNCTION_STOP_AMAP_LOCATION_SPORT = "amap_stop_location";
    private static int flag;
    private java.lang.String accuracy_level;
    private java.lang.String func_name;
    private boolean isFrist;
    private com.amap.api.location.AMapLocationClient locationClient;
    com.amap.api.location.AMapLocationListener locationListener;
    private com.amap.api.location.AMapLocationClientOption locationOption;
    private java.lang.String[] permissions;




    static {
            return
    }

    public AmapInterface() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "android.permission.ACCESS_FINE_LOCATION"
            java.lang.String r1 = "android.permission.ACCESS_COARSE_LOCATION"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            r2.permissions = r0
            r0 = 0
            r2.locationClient = r0
            r2.locationOption = r0
            r0 = 0
            r2.isFrist = r0
            java.lang.String r0 = ""
            r2.func_name = r0
            com.bianfeng.amap.AmapInterface$2 r0 = new com.bianfeng.amap.AmapInterface$2
            r0.<init>(r2)
            r2.locationListener = r0
            return
    }

    static void access$000(com.bianfeng.amap.AmapInterface r0) {
            r0.getLocationAfter()
            return
    }

    static java.lang.String access$100(com.bianfeng.amap.AmapInterface r0) {
            java.lang.String r0 = r0.func_name
            return r0
    }

    static int access$200() {
            int r0 = com.bianfeng.amap.AmapInterface.flag
            return r0
    }

    static void access$300(com.bianfeng.amap.AmapInterface r0, com.amap.api.location.AMapLocation r1) {
            r0.getLocationBySport(r1)
            return
    }

    static void access$400(com.bianfeng.amap.AmapInterface r0, com.amap.api.location.AMapLocation r1) {
            r0.getLocation(r1)
            return
    }

    static void access$500(com.bianfeng.amap.AmapInterface r0) {
            r0.getLocationWithSportAfter()
            return
    }

    private com.amap.api.location.AMapLocationClientOption getDefaultOption(java.lang.String r4) {
            r3 = this;
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy
            r0.setLocationMode(r1)
            java.lang.String r1 = "1"
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto L18
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r4 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving
            r0.setLocationMode(r4)
            goto L25
        L18:
            java.lang.String r1 = "2"
            boolean r4 = r1.equals(r4)
            if (r4 == 0) goto L25
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r4 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            r0.setLocationMode(r4)
        L25:
            r4 = 0
            r0.setGpsFirst(r4)
            r1 = 20000(0x4e20, double:9.8813E-320)
            r0.setHttpTimeOut(r1)
            r1 = 2000(0x7d0, double:9.88E-321)
            r0.setInterval(r1)
            r4 = 1
            r0.setNeedAddress(r4)
            r0.setOnceLocation(r4)
            r0.setOnceLocationLatest(r4)
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTP
            com.amap.api.location.AMapLocationClientOption.setLocationProtocol(r1)
            r0.setSensorEnable(r4)
            r0.setWifiScan(r4)
            r0.setLocationCacheEnable(r4)
            return r0
    }

    private void getLocation(com.amap.api.location.AMapLocation r5) {
            r4 = this;
            r0 = 1702(0x6a6, float:2.385E-42)
            if (r5 != 0) goto Lc
            java.lang.String r5 = r4.func_name
            java.lang.String r1 = "get location failed, location is null"
            r4.sendResult(r0, r1, r5)
            return
        Lc:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "amap getLocation ："
            r1.append(r2)
            int r2 = r5.getErrorCode()
            r1.append(r2)
            java.lang.String r2 = "===="
            r1.append(r2)
            java.lang.String r2 = r5.getErrorInfo()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.amap.common.AmapLogger.i(r1)
            int r1 = r5.getErrorCode()
            r2 = 0
            if (r1 != 0) goto L3d
            r4.isFrist = r2
            r4.toGson(r5)
            goto L73
        L3d:
            boolean r1 = r4.isFrist
            if (r1 == 0) goto L65
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r3 = r5.getErrorCode()
            r1.append(r3)
            java.lang.String r3 = "|"
            r1.append(r3)
            java.lang.String r5 = r5.getErrorInfo()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            java.lang.String r1 = r4.func_name
            r4.sendResult(r0, r5, r1)
            r4.isFrist = r2
            return
        L65:
            r5 = 1
            r4.isFrist = r5
            com.amap.api.location.AMapLocationClient r5 = r4.locationClient
            if (r5 == 0) goto L73
            com.amap.api.location.AMapLocation r5 = r5.getLastKnownLocation()
            r4.getLocation(r5)
        L73:
            return
    }

    private void getLocationAfter() {
            r2 = this;
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient
            if (r0 == 0) goto Lf
            boolean r0 = r0.isStarted()
            if (r0 == 0) goto Lf
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient
            r0.stopLocation()
        Lf:
            com.amap.api.location.AMapLocationClient r0 = new com.amap.api.location.AMapLocationClient     // Catch: java.lang.Exception -> L38
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Exception -> L38
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Exception -> L38
            r0.<init>(r1)     // Catch: java.lang.Exception -> L38
            r2.locationClient = r0     // Catch: java.lang.Exception -> L38
            java.lang.String r0 = r2.accuracy_level     // Catch: java.lang.Exception -> L38
            com.amap.api.location.AMapLocationClientOption r0 = r2.getDefaultOption(r0)     // Catch: java.lang.Exception -> L38
            r2.locationOption = r0     // Catch: java.lang.Exception -> L38
            com.amap.api.location.AMapLocationClient r1 = r2.locationClient     // Catch: java.lang.Exception -> L38
            r1.setLocationOption(r0)     // Catch: java.lang.Exception -> L38
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: java.lang.Exception -> L38
            com.amap.api.location.AMapLocationListener r1 = r2.locationListener     // Catch: java.lang.Exception -> L38
            r0.setLocationListener(r1)     // Catch: java.lang.Exception -> L38
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: java.lang.Exception -> L38
            r0.startLocation()     // Catch: java.lang.Exception -> L38
            goto L3c
        L38:
            r0 = move-exception
            r0.printStackTrace()
        L3c:
            return
    }

    private void getLocationBySport(com.amap.api.location.AMapLocation r3) {
            r2 = this;
            int r0 = r3.getErrorCode()
            if (r0 != 0) goto L9
            r2.toGson(r3)
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r3.getErrorCode()
            r0.append(r1)
            java.lang.String r1 = "===="
            r0.append(r1)
            java.lang.String r3 = r3.getErrorInfo()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.amap.common.AmapLogger.i(r3)
            return
    }

    private void getLocationWithSportAfter() {
            r2 = this;
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient
            if (r0 == 0) goto Lf
            boolean r0 = r0.isStarted()
            if (r0 == 0) goto Lf
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient
            r0.stopLocation()
        Lf:
            com.amap.api.location.AMapLocationClient r0 = new com.amap.api.location.AMapLocationClient     // Catch: java.lang.Exception -> L3a
            android.content.Context r1 = r2.getContext()     // Catch: java.lang.Exception -> L3a
            r0.<init>(r1)     // Catch: java.lang.Exception -> L3a
            r2.locationClient = r0     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Exception -> L3a
            r0.<init>()     // Catch: java.lang.Exception -> L3a
            r2.locationOption = r0     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClientOption$AMapLocationPurpose r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationPurpose.Sport     // Catch: java.lang.Exception -> L3a
            r0.setLocationPurpose(r1)     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClientOption r1 = r2.locationOption     // Catch: java.lang.Exception -> L3a
            r0.setLocationOption(r1)     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationListener r1 = r2.locationListener     // Catch: java.lang.Exception -> L3a
            r0.setLocationListener(r1)     // Catch: java.lang.Exception -> L3a
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: java.lang.Exception -> L3a
            r0.startLocation()     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r0 = move-exception
            r0.printStackTrace()
        L3e:
            return
    }

    private void toGson(com.amap.api.location.AMapLocation r27) {
            r26 = this;
            r1 = r26
            double r2 = r27.getLatitude()
            double r4 = r27.getLongitude()
            float r0 = r27.getAccuracy()
            double r6 = r27.getAltitude()
            float r8 = r27.getSpeed()
            float r9 = r27.getBearing()
            java.lang.String r10 = r27.getBuildingId()
            java.lang.String r11 = r27.getFloor()
            java.lang.String r12 = r27.getAddress()
            java.lang.String r13 = r27.getCountry()
            java.lang.String r14 = r27.getProvince()
            java.lang.String r15 = r27.getCity()
            java.lang.String r1 = r27.getDistrict()
            r16 = r1
            java.lang.String r1 = r27.getStreet()
            r17 = r1
            java.lang.String r1 = r27.getStreetNum()
            r18 = r1
            java.lang.String r1 = r27.getCityCode()
            r19 = r1
            java.lang.String r1 = r27.getAdCode()
            r20 = r1
            java.lang.String r1 = r27.getPoiName()
            r21 = r1
            java.lang.String r1 = r27.getAoiName()
            r22 = r1
            int r1 = r27.getLocationType()
            r23 = r1
            java.lang.String r1 = r27.getProvider()
            r24 = r1
            int r1 = r27.getSatellites()
            r27 = r1
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r25 = r15
            java.lang.String r15 = "latitude"
            r1.put(r15, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r2 = "longitude"
            r1.put(r2, r4)     // Catch: org.json.JSONException -> L115
            java.lang.String r2 = "accuracy"
            double r3 = (double) r0     // Catch: org.json.JSONException -> L115
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "altitude"
            r1.put(r0, r6)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "speed"
            double r2 = (double) r8     // Catch: org.json.JSONException -> L115
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "bearing"
            double r2 = (double) r9     // Catch: org.json.JSONException -> L115
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "buildingId"
            r1.put(r0, r10)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "floor"
            r1.put(r0, r11)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "address"
            r1.put(r0, r12)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "country"
            r1.put(r0, r13)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "province"
            r1.put(r0, r14)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "city"
            r2 = r25
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "district"
            r2 = r16
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "street"
            r2 = r17
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "streetNum"
            r2 = r18
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "cityCode"
            r2 = r19
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "adCode"
            r2 = r20
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "poiName"
            r2 = r21
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "aoiName"
            r2 = r22
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "locationType"
            r2 = r23
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "provider"
            r2 = r24
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            java.lang.String r0 = "satellites"
            r2 = r27
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L115
            r0 = 1701(0x6a5, float:2.384E-42)
            java.lang.String r1 = r1.toString()     // Catch: org.json.JSONException -> L115
            r2 = r26
            java.lang.String r3 = r2.func_name     // Catch: org.json.JSONException -> L113
            r2.sendResult(r0, r1, r3)     // Catch: org.json.JSONException -> L113
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: org.json.JSONException -> L113
            if (r0 == 0) goto L11b
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient     // Catch: org.json.JSONException -> L113
            r0.stopLocation()     // Catch: org.json.JSONException -> L113
            goto L11b
        L113:
            r0 = move-exception
            goto L118
        L115:
            r0 = move-exception
            r2 = r26
        L118:
            r0.printStackTrace()
        L11b:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "amap_get_location")
    public void getLocation() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            r1 = 1
            com.amap.api.location.AMapLocationClient.updatePrivacyShow(r0, r1, r1)
            android.app.Activity r0 = r2.getActivity()
            com.amap.api.location.AMapLocationClient.updatePrivacyAgree(r0, r1)
            java.lang.String r0 = "amap_get_location"
            r2.func_name = r0
            java.lang.String r0 = "3"
            r2.getLocation(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "amap_get_location")
    public void getLocation(java.lang.String r3) {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            r1 = 1
            com.amap.api.location.AMapLocationClient.updatePrivacyShow(r0, r1, r1)
            android.app.Activity r0 = r2.getActivity()
            com.amap.api.location.AMapLocationClient.updatePrivacyAgree(r0, r1)
            java.lang.String r0 = "amap_get_location;accuracy_level"
            r2.func_name = r0
            com.bianfeng.amap.AmapInterface.flag = r1
            r2.accuracy_level = r3
            android.app.Activity r3 = r2.getActivity()
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r3)
            com.bianfeng.amap.AmapInterface$1 r0 = new com.bianfeng.amap.AmapInterface$1
            r0.<init>(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setCallback(r0)
            java.lang.String[] r0 = r2.permissions
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r3 = r3.setPermissions(r0)
            r0 = 1024(0x400, float:1.435E-42)
            r3.requestPermissions(r0)
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "amap_get_location_by_sport")
    public void getLocationWithSport() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            r1 = 1
            com.amap.api.location.AMapLocationClient.updatePrivacyShow(r0, r1, r1)
            android.app.Activity r0 = r2.getActivity()
            com.amap.api.location.AMapLocationClient.updatePrivacyAgree(r0, r1)
            java.lang.String r0 = "amap_get_location_by_sport"
            r2.func_name = r0
            r0 = 0
            com.bianfeng.amap.AmapInterface.flag = r0
            android.app.Activity r0 = r2.getActivity()
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils.newInstance(r0)
            com.bianfeng.amap.AmapInterface$3 r1 = new com.bianfeng.amap.AmapInterface$3
            r1.<init>(r2)
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setCallback(r1)
            java.lang.String[] r1 = r2.permissions
            com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils r0 = r0.setPermissions(r1)
            r1 = 1024(0x400, float:1.435E-42)
            r0.requestPermissions(r1)
            return
    }

    @Override
    public java.lang.String getPluginId() {
            r1 = this;
            java.lang.String r0 = "30"
            return r0
    }

    @Override
    public java.lang.String getPluginName() {
            r1 = this;
            java.lang.String r0 = "amap"
            return r0
    }

    @Override
    public int getPluginVersion() {
            r1 = this;
            r0 = 14
            return r0
    }

    @Override
    public java.lang.String getSdkVersion() {
            r1 = this;
            java.lang.String r0 = "6.4.0"
            return r0
    }

    @Override
    public void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.amap.api.location.AMapLocationClient r0 = r1.locationClient
            if (r0 == 0) goto La
            r0.onDestroy()
        La:
            return
    }

    @com.bianfeng.ymnsdk.feature.protocol.YFunction(name = "amap_stop_location")
    public void stop() {
            r2 = this;
            android.app.Activity r0 = r2.getActivity()
            r1 = 1
            com.amap.api.location.AMapLocationClient.updatePrivacyShow(r0, r1, r1)
            android.app.Activity r0 = r2.getActivity()
            com.amap.api.location.AMapLocationClient.updatePrivacyAgree(r0, r1)
            com.amap.api.location.AMapLocationClient r0 = r2.locationClient
            if (r0 == 0) goto L16
            r0.stopLocation()
        L16:
            return
    }
}
