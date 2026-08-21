package com.bianfeng.amap;

import com.amap.api.location.AMapLocation;
import com.amap.api.location.AMapLocationClient;
import com.amap.api.location.AMapLocationClientOption;
import com.amap.api.location.AMapLocationListener;
import com.bianfeng.amap.common.AmapLogger;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.plugin.YmnBaseInterface;
import com.bianfeng.ymnsdk.feature.protocol.YFunction;
import com.bianfeng.ymnsdk.feature.protocol.YPlugin;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.utilslib.permission.BfDataPermissionUtils;
import com.kuaishou.weapon.p0.g;
import com.sigmob.sdk.base.mta.PointType;
import org.json.JSONException;
import org.json.JSONObject;

@YPlugin(entrance = YPlugin.Entrance.ACTIVITY, strategy = YPlugin.Policy.FORCE)
public class AmapInterface extends YmnPluginWrapper {
    public static final int CODE_GET_LOCATION_FAILURE = 1702;
    public static final int CODE_GET_LOCATION_FAIL_NO_PERMISSION = 1703;
    public static final int CODE_GET_LOCATION_SUCCESS = 1701;
    public static final String FUNCTION_GET_AMAP_LOCATION = "amap_get_location";
    private static final String FUNCTION_GET_AMAP_LOCATION_SPORT = "amap_get_location_by_sport";
    private static final String FUNCTION_STOP_AMAP_LOCATION_SPORT = "amap_stop_location";
    private static int flag;
    private String accuracy_level;
    private String[] permissions = {g.g, g.h};
    private AMapLocationClient locationClient = null;
    private AMapLocationClientOption locationOption = null;
    private boolean isFrist = false;
    private String func_name = "";
    AMapLocationListener locationListener = new AMapLocationListener() {
        @Override
        public void onLocationChanged(AMapLocation aMapLocation) {
            AmapLogger.i("flag==" + AmapInterface.flag);
            if (AmapInterface.flag == 0) {
                AmapInterface.this.getLocationBySport(aMapLocation);
            } else {
                AmapInterface.this.getLocation(aMapLocation);
            }
        }
    };

    @Override
    public String getPluginId() {
        return PointType.DOWNLOAD_TRACKING;
    }

    @Override
    public String getPluginName() {
        return "amap";
    }

    @Override
    public int getPluginVersion() {
        return 14;
    }

    @Override
    public String getSdkVersion() {
        return "6.4.0";
    }

    @Override
    public void onDestroy() {
        super.onDestroy();
        AMapLocationClient aMapLocationClient = this.locationClient;
        if (aMapLocationClient != null) {
            aMapLocationClient.onDestroy();
        }
    }

    @YFunction(name = FUNCTION_GET_AMAP_LOCATION)
    public void getLocation() {
        AMapLocationClient.updatePrivacyShow(getActivity(), true, true);
        AMapLocationClient.updatePrivacyAgree(getActivity(), true);
        this.func_name = FUNCTION_GET_AMAP_LOCATION;
        getLocation("3");
    }

    @YFunction(name = FUNCTION_GET_AMAP_LOCATION)
    public void getLocation(String str) {
        AMapLocationClient.updatePrivacyShow(getActivity(), true, true);
        AMapLocationClient.updatePrivacyAgree(getActivity(), true);
        this.func_name = "amap_get_location;accuracy_level";
        flag = 1;
        this.accuracy_level = str;
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str2) {
            }

            @Override
            public void onAllowAll(int i) {
                AmapInterface.this.getLocationAfter();
            }

            @Override
            public void onDeny(int i, String str2) {
                Logger.i("onDeny--->" + str2);
                AmapInterface.this.sendResult(AmapInterface.CODE_GET_LOCATION_FAIL_NO_PERMISSION, "授权失败 " + str2, AmapInterface.this.func_name);
                AmapInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败 " + str2, AmapInterface.this.func_name);
            }

            @Override
            public void onDenyIn48Hours(int i, String str2) {
                Logger.i("onDenyIn48Hours--->" + str2);
                AmapInterface.this.sendResult(AmapInterface.CODE_GET_LOCATION_FAIL_NO_PERMISSION, "授权失败 在48小时内重复授权|" + str2, AmapInterface.this.func_name);
                AmapInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "授权失败 在48小时内重复授权|" + str2, AmapInterface.this.func_name);
            }
        }).setPermissions(this.permissions).requestPermissions(1024);
    }

    private void getLocationAfter() {
        AMapLocationClient aMapLocationClient = this.locationClient;
        if (aMapLocationClient != null && aMapLocationClient.isStarted()) {
            this.locationClient.stopLocation();
        }
        try {
            this.locationClient = new AMapLocationClient(getContext().getApplicationContext());
            AMapLocationClientOption defaultOption = getDefaultOption(this.accuracy_level);
            this.locationOption = defaultOption;
            this.locationClient.setLocationOption(defaultOption);
            this.locationClient.setLocationListener(this.locationListener);
            this.locationClient.startLocation();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    private AMapLocationClientOption getDefaultOption(String str) {
        AMapLocationClientOption aMapLocationClientOption = new AMapLocationClientOption();
        aMapLocationClientOption.setLocationMode(AMapLocationClientOption.AMapLocationMode.Hight_Accuracy);
        if ("1".equals(str)) {
            aMapLocationClientOption.setLocationMode(AMapLocationClientOption.AMapLocationMode.Battery_Saving);
        } else if ("2".equals(str)) {
            aMapLocationClientOption.setLocationMode(AMapLocationClientOption.AMapLocationMode.Device_Sensors);
        }
        aMapLocationClientOption.setGpsFirst(false);
        aMapLocationClientOption.setHttpTimeOut(20000L);
        aMapLocationClientOption.setInterval(2000L);
        aMapLocationClientOption.setNeedAddress(true);
        aMapLocationClientOption.setOnceLocation(true);
        aMapLocationClientOption.setOnceLocationLatest(true);
        AMapLocationClientOption.setLocationProtocol(AMapLocationClientOption.AMapLocationProtocol.HTTP);
        aMapLocationClientOption.setSensorEnable(true);
        aMapLocationClientOption.setWifiScan(true);
        aMapLocationClientOption.setLocationCacheEnable(true);
        return aMapLocationClientOption;
    }

    private void getLocationBySport(AMapLocation aMapLocation) {
        if (aMapLocation.getErrorCode() == 0) {
            toGson(aMapLocation);
        }
        AmapLogger.i(aMapLocation.getErrorCode() + "====" + aMapLocation.getErrorInfo());
    }

    private void toGson(AMapLocation aMapLocation) {
        double latitude = aMapLocation.getLatitude();
        double longitude = aMapLocation.getLongitude();
        float accuracy = aMapLocation.getAccuracy();
        double altitude = aMapLocation.getAltitude();
        float speed = aMapLocation.getSpeed();
        float bearing = aMapLocation.getBearing();
        String buildingId = aMapLocation.getBuildingId();
        String floor = aMapLocation.getFloor();
        String address = aMapLocation.getAddress();
        String country = aMapLocation.getCountry();
        String province = aMapLocation.getProvince();
        String city = aMapLocation.getCity();
        String district = aMapLocation.getDistrict();
        String street = aMapLocation.getStreet();
        String streetNum = aMapLocation.getStreetNum();
        String cityCode = aMapLocation.getCityCode();
        String adCode = aMapLocation.getAdCode();
        String poiName = aMapLocation.getPoiName();
        String aoiName = aMapLocation.getAoiName();
        int locationType = aMapLocation.getLocationType();
        String provider = aMapLocation.getProvider();
        int satellites = aMapLocation.getSatellites();
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("latitude", latitude);
            jSONObject.put("longitude", longitude);
            jSONObject.put("accuracy", accuracy);
            jSONObject.put("altitude", altitude);
            jSONObject.put("speed", speed);
            jSONObject.put("bearing", bearing);
            jSONObject.put("buildingId", buildingId);
            jSONObject.put("floor", floor);
            jSONObject.put("address", address);
            jSONObject.put("country", country);
            jSONObject.put("province", province);
            jSONObject.put("city", city);
            jSONObject.put("district", district);
            jSONObject.put("street", street);
            jSONObject.put("streetNum", streetNum);
            jSONObject.put("cityCode", cityCode);
            jSONObject.put("adCode", adCode);
            jSONObject.put("poiName", poiName);
            jSONObject.put("aoiName", aoiName);
            jSONObject.put("locationType", locationType);
            jSONObject.put("provider", provider);
            jSONObject.put("satellites", satellites);
            try {
                sendResult(CODE_GET_LOCATION_SUCCESS, jSONObject.toString(), this.func_name);
                if (this.locationClient != null) {
                    this.locationClient.stopLocation();
                }
            } catch (JSONException e) {
                e = e;
                e.printStackTrace();
            }
        } catch (JSONException e2) {
            e = e2;
        }
    }

    private void getLocation(AMapLocation aMapLocation) {
        if (aMapLocation == null) {
            sendResult(CODE_GET_LOCATION_FAILURE, "get location failed, location is null", this.func_name);
            return;
        }
        AmapLogger.i("amap getLocation ：" + aMapLocation.getErrorCode() + "====" + aMapLocation.getErrorInfo());
        if (aMapLocation.getErrorCode() == 0) {
            this.isFrist = false;
            toGson(aMapLocation);
            return;
        }
        if (this.isFrist) {
            sendResult(CODE_GET_LOCATION_FAILURE, aMapLocation.getErrorCode() + "|" + aMapLocation.getErrorInfo(), this.func_name);
            this.isFrist = false;
            return;
        }
        this.isFrist = true;
        AMapLocationClient aMapLocationClient = this.locationClient;
        if (aMapLocationClient != null) {
            getLocation(aMapLocationClient.getLastKnownLocation());
        }
    }

    @YFunction(name = FUNCTION_GET_AMAP_LOCATION_SPORT)
    public void getLocationWithSport() {
        AMapLocationClient.updatePrivacyShow(getActivity(), true, true);
        AMapLocationClient.updatePrivacyAgree(getActivity(), true);
        this.func_name = FUNCTION_GET_AMAP_LOCATION_SPORT;
        flag = 0;
        BfDataPermissionUtils.newInstance(getActivity()).setCallback(new BfDataPermissionUtils.PermissCallback() {
            @Override
            public void onAllow(int i, String str) {
            }

            @Override
            public void onAllowAll(int i) {
                AmapInterface.this.getLocationWithSportAfter();
            }

            @Override
            public void onDeny(int i, String str) {
                AmapInterface.this.sendResult(AmapInterface.CODE_GET_LOCATION_FAIL_NO_PERMISSION, "授权失败 " + str, AmapInterface.this.func_name);
                AmapInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_DENIED, "授权失败 " + str, AmapInterface.this.func_name);
            }

            @Override
            public void onDenyIn48Hours(int i, String str) {
                AmapInterface.this.sendResult(AmapInterface.CODE_GET_LOCATION_FAIL_NO_PERMISSION, "授权失败 在48小时内重复授权|" + str, AmapInterface.this.func_name);
                AmapInterface.this.sendResult(YmnBaseInterface.CODE_PERMISSION_IN48, "授权失败 在48小时内重复授权|" + str, AmapInterface.this.func_name);
            }
        }).setPermissions(this.permissions).requestPermissions(1024);
    }

    private void getLocationWithSportAfter() {
        AMapLocationClient aMapLocationClient = this.locationClient;
        if (aMapLocationClient != null && aMapLocationClient.isStarted()) {
            this.locationClient.stopLocation();
        }
        try {
            this.locationClient = new AMapLocationClient(getContext());
            AMapLocationClientOption aMapLocationClientOption = new AMapLocationClientOption();
            this.locationOption = aMapLocationClientOption;
            aMapLocationClientOption.setLocationPurpose(AMapLocationClientOption.AMapLocationPurpose.Sport);
            this.locationClient.setLocationOption(this.locationOption);
            this.locationClient.setLocationListener(this.locationListener);
            this.locationClient.startLocation();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    @YFunction(name = FUNCTION_STOP_AMAP_LOCATION_SPORT)
    public void stop() {
        AMapLocationClient.updatePrivacyShow(getActivity(), true, true);
        AMapLocationClient.updatePrivacyAgree(getActivity(), true);
        AMapLocationClient aMapLocationClient = this.locationClient;
        if (aMapLocationClient != null) {
            aMapLocationClient.stopLocation();
        }
    }
}
