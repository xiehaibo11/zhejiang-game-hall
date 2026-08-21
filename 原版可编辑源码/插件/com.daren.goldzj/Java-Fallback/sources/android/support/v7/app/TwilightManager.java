package android.support.v7.app;

import android.annotation.SuppressLint;
import android.content.Context;
import android.location.Location;
import android.location.LocationManager;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresPermission;
import android.support.annotation.VisibleForTesting;
import android.support.v4.content.PermissionChecker;
import android.util.Log;
import java.util.Calendar;

class TwilightManager {
    private static final int SUNRISE = 6;
    private static final int SUNSET = 22;
    private static final String TAG = "TwilightManager";
    private static TwilightManager sInstance;
    private final Context mContext;
    private final LocationManager mLocationManager;
    private final TwilightState mTwilightState;

    private static class TwilightState {
        boolean isNight;
        long nextUpdate;
        long todaySunrise;
        long todaySunset;
        long tomorrowSunrise;
        long yesterdaySunset;

        TwilightState() {
        }
    }

    static TwilightManager getInstance(@NonNull Context r2) {
        if (sInstance != null) goto L6;
        Context r22 = r2.getApplicationContext();
        sInstance = new TwilightManager(r22, (LocationManager) r22.getSystemService("location"));
    L6:
        return sInstance;
    }

    @VisibleForTesting
    static void setInstance(TwilightManager r0) {
        sInstance = r0;
    }

    @VisibleForTesting
    TwilightManager(@NonNull Context r2, @NonNull LocationManager r3) {
        this.mTwilightState = new TwilightState();
        this.mContext = r2;
        this.mLocationManager = r3;
    }

    boolean isNight() {
        TwilightState r0 = this.mTwilightState;
        if (isStateValid() == true) goto L5;
        Location r1 = getLastKnownLocation();
        if (r1 == null) goto L10;
        updateState(r1);
        return r0.isNight;
    L10:
        Log.i(TAG, "Could not get last known location. This is probably because the app does not have any location permissions. Falling back to hardcoded sunrise/sunset values.");
        int r02 = Calendar.getInstance().get(11);
        if (r02 >= 6) goto L13;
    L16:
        return true;
    L13:
        if (r02 >= 22) goto L16;
        return false;
    L5:
        return r0.isNight;
    }

    @SuppressLint({"MissingPermission"})
    private Location getLastKnownLocation() {
        Location r1 = null;
        if (PermissionChecker.checkSelfPermission(this.mContext, "android.permission.ACCESS_COARSE_LOCATION") != 0) goto L5;
        Location r0 = getLastKnownLocationForProvider("network");
    L7:
        if (PermissionChecker.checkSelfPermission(this.mContext, "android.permission.ACCESS_FINE_LOCATION") != 0) goto L9;
        r1 = getLastKnownLocationForProvider("gps");
    L9:
        if (r1 == null) goto L15;
        if (r0 == null) goto L15;
        if (r1.getTime() > r0.getTime()) goto L14;
        return r0;
    L14:
        return r1;
    L15:
        if (r1 != null) goto L17;
        return r0;
    L17:
        return r1;
    L5:
        r0 = null;
        goto L7
    }

    @RequiresPermission(anyOf = {"android.permission.ACCESS_COARSE_LOCATION", "android.permission.ACCESS_FINE_LOCATION"})
    private Location getLastKnownLocationForProvider(String r3) {
    L6:
        e = move-exception;
        Log.d(TAG, "Failed to get last known location", e);
        return null;
    L3:
        if (this.mLocationManager.isProviderEnabled(r3) == false) goto L12;
        return this.mLocationManager.getLastKnownLocation(r3);
    L12:
        return null;
    }

    private boolean isStateValid() {
        if (this.mTwilightState.nextUpdate <= System.currentTimeMillis()) goto L5;
        return true;
    L5:
        return false;
    }

    private void updateState(@NonNull Location r23) {
        TwilightState r1 = this.mTwilightState;
        long r9 = System.currentTimeMillis();
        TwilightCalculator r11 = TwilightCalculator.getInstance();
        r11.calculateTwilight(r9 - 86400000, r23.getLatitude(), r23.getLongitude());
        long r14 = r11.sunset;
        r11.calculateTwilight(r9, r23.getLatitude(), r23.getLongitude());
        if (r11.state != 1) goto L5;
        boolean r7 = true;
    L6:
        long r5 = r11.sunrise;
        long r3 = r11.sunset;
        boolean r0 = r7;
        r11.calculateTwilight(86400000 + r9, r23.getLatitude(), r23.getLongitude());
        long r2 = r11.sunrise;
        if (r5 != (-1)) goto L9;
    L19:
        long r4 = 43200000 + r9;
    L20:
        r1.isNight = r0;
        r1.yesterdaySunset = r14;
        r1.todaySunrise = r5;
        r1.todaySunset = r3;
        r1.tomorrowSunrise = r2;
        r1.nextUpdate = r4;
        return;
    L9:
        if (r3 == (-1)) goto L19;
        if (r9 <= r3) goto L15;
        long r42 = 0 + r2;
    L18:
        r4 = r42 + 60000;
        goto L20
    L15:
        if (r9 <= r5) goto L17;
        r42 = 0 + r3;
        goto L18
    L17:
        r42 = 0 + r5;
        goto L18
    L5:
        r7 = false;
        goto L6
    }
}
