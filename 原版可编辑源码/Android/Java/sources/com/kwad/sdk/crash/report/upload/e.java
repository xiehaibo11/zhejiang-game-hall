package com.kwad.sdk.crash.report.upload;

public final class e {
    private final int aBG;
    private final String aBH;
    public static e aBx = new e(-11, "Please init.");
    public static e aBy = new e(-12, "error when zip_file");
    public static e aBz = new e(-13, "There is no valid network.");
    public static e aBA = new e(-14, "Token is invalid.");
    public static e aBB = new e(-15, "upload task execute frequence exceed.");
    public static e aBC = new e(-16, "process request fail.");
    public static e aBD = new e(-17, "sever response error http code");
    public static e aBE = new e(-18, "sever response error result code");
    public static e aBF = new e(-19, "server bad response.");

    private e(int i, String str) {
        this.aBG = i;
        this.aBH = str;
    }

    public final String vo() {
        return this.aBH;
    }
}
