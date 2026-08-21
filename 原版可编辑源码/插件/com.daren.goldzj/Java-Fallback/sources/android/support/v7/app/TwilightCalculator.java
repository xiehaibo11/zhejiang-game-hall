package android.support.v7.app;

class TwilightCalculator {
    private static final float ALTIDUTE_CORRECTION_CIVIL_TWILIGHT = -0.10471976f;
    private static final float C1 = 0.0334196f;
    private static final float C2 = 3.49066E-4f;
    private static final float C3 = 5.236E-6f;
    public static final int DAY = 0;
    private static final float DEGREES_TO_RADIANS = 0.017453292f;
    private static final float J0 = 9.0E-4f;
    public static final int NIGHT = 1;
    private static final float OBLIQUITY = 0.4092797f;
    private static final long UTC_2000 = 946728000000L;
    private static TwilightCalculator sInstance;
    public int state;
    public long sunrise;
    public long sunset;

    TwilightCalculator() {
    }

    static TwilightCalculator getInstance() {
        if (sInstance != null) goto L6;
        sInstance = new TwilightCalculator();
    L6:
        return sInstance;
    }

    public void calculateTwilight(long r16, double r18, double r20) {
        double r5 = (0.01720197f * ((r16 - UTC_2000) / 8.64E7f)) + 6.24006f;
        double r7 = (((((Math.sin(r5) * 0.03341960161924362d) + r5) + (Math.sin(2.0f * r4) * 3.4906598739326E-4d)) + (Math.sin(r4 * 3.0f) * 5.236000106378924E-6d)) + 1.796593063d) + 3.141592653589793d;
        double r3 = ((((double) (Math.round(((double) (r3 - J0)) - r9) + J0)) + ((-r20) / 360.0d)) + (Math.sin(r5) * 0.0053d)) + (Math.sin(2.0d * r7) * (-0.0069d));
        double r52 = Math.asin(Math.sin(r7) * Math.sin(0.4092797040939331d));
        double r72 = 0.01745329238474369d * r18;
        double r9 = (Math.sin(-0.10471975803375244d) - (Math.sin(r72) * Math.sin(r52))) / (Math.cos(r72) * Math.cos(r52));
        if (r9 < 1.0d) goto L7;
        this.state = 1;
        this.sunset = -1;
        this.sunrise = -1;
        return;
    L7:
        if (r9 > (-1.0d)) goto L10;
        this.state = 0;
        this.sunset = -1;
        this.sunrise = -1;
        return;
    L10:
        double r6 = (float) (Math.acos(r9) / 6.283185307179586d);
        this.sunset = Math.round((r3 + r6) * 8.64E7d) + UTC_2000;
        this.sunrise = Math.round((r3 - r6) * 8.64E7d) + UTC_2000;
        if (this.sunrise < r16) goto L13;
    L15:
        this.state = 1;
        return;
    L13:
        if (this.sunset <= r16) goto L15;
        this.state = 0;
    }
}
