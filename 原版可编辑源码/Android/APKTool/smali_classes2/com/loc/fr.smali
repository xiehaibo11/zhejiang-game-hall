.class public final Lcom/loc/fr;
.super Ljava/lang/Object;
.source "CoreUtil.java"


# static fields
.field public static a:Ljava/lang/String; = "5.3"

.field public static final b:[Ljava/lang/String;

.field static c:Ljava/lang/String;

.field static d:Ljava/lang/String;

.field static e:Ljava/lang/String;

.field static f:Ljava/lang/String;

.field public static g:Ljava/lang/String;

.field public static h:Ljava/lang/String;

.field public static i:I

.field public static j:Ljava/lang/String;

.field public static k:Ljava/lang/String;

.field static l:Ljava/lang/String;

.field static m:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field static n:Z

.field static o:Z

.field private static final p:[Ljava/lang/String;

.field private static q:Lcom/loc/w;

.field private static r:Z

.field private static s:Z


# direct methods
.method static constructor <clinit>()V
    .locals 3

    const-string v0, "5.1"

    filled-new-array {v0}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fr;->b:[Ljava/lang/String;

    const-string v0, "http://apilocate.amap.com/mobile/binary"

    sput-object v0, Lcom/loc/fr;->c:Ljava/lang/String;

    const-string v0, "http://dualstack-a.apilocate.amap.com/mobile/binary"

    sput-object v0, Lcom/loc/fr;->d:Ljava/lang/String;

    const-string v0, ""

    sput-object v0, Lcom/loc/fr;->e:Ljava/lang/String;

    const-string v0, "com.amap.api.location"

    const-string v1, "com.loc"

    const-string v2, "com.amap.api.fence"

    filled-new-array {v0, v1, v2}, [Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/loc/fr;->p:[Ljava/lang/String;

    const-string v0, "11G;11K;13J;13S;15O;15U;17J;17Y;197;1A6"

    sput-object v0, Lcom/loc/fr;->f:Ljava/lang/String;

    const/4 v0, 0x0

    sput-object v0, Lcom/loc/fr;->g:Ljava/lang/String;

    sput-object v0, Lcom/loc/fr;->h:Ljava/lang/String;

    const/16 v1, 0x7530

    sput v1, Lcom/loc/fr;->i:I

    sput-object v0, Lcom/loc/fr;->j:Ljava/lang/String;

    sput-object v0, Lcom/loc/fr;->k:Ljava/lang/String;

    sput-object v0, Lcom/loc/fr;->q:Lcom/loc/w;

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/fr;->r:Z

    sput-boolean v0, Lcom/loc/fr;->s:Z

    sput-boolean v0, Lcom/loc/fr;->n:Z

    sput-boolean v0, Lcom/loc/fr;->o:Z

    return-void
.end method

.method public static a(Lcom/amap/api/location/AMapLocationClientOption;)Landroid/os/Bundle;
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    if-nez p0, :cond_0

    new-instance p0, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p0}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    :cond_0
    :try_start_0
    const-string v1, "opt"

    invoke-virtual {v0, v1, p0}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string v1, "CoreUtil"

    const-string v2, "getOptionBundle"

    invoke-static {p0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method public static a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;
    .locals 5

    if-nez p1, :cond_0

    return-object p0

    :cond_0
    :try_start_0
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCountry()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setCountry(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getRoad()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setRoad(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getPoiName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setPoiName(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getStreet()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setStreet(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getStreetNum()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setNumber(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setCityCode(Ljava/lang/String;)V

    invoke-virtual {p0, v1}, Lcom/amap/api/location/AMapLocation;->setAdCode(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCity()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setCity(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getDistrict()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setDistrict(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getProvince()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setProvince(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAoiName()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setAoiName(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAddress()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setAddress(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getDescription()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setDescription(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v1, "adcode"

    const-string v2, "citycode"

    const-string v3, "desc"

    if-eqz v0, :cond_1

    :try_start_1
    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v2, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    goto :goto_0

    :cond_1
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v2, v4}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getExtras()Landroid/os/Bundle;

    move-result-object v2

    invoke-virtual {v2, v3}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v3, v2}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, v1, p1}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, v0}, Lcom/amap/api/location/AMapLocation;->setExtras(Landroid/os/Bundle;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :goto_0
    return-object p0
.end method

.method public static a(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;
    .locals 3

    new-instance v0, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {v0}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    if-nez p0, :cond_0

    return-object v0

    :cond_0
    :try_start_0
    const-class v1, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {p0, v1}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    const-string v1, "opt"

    invoke-virtual {p0, v1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p0

    check-cast p0, Lcom/amap/api/location/AMapLocationClientOption;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move-object v0, p0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string v1, "CoreUtil"

    const-string v2, "getOptionFromBundle"

    invoke-static {p0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v0
.end method

.method public static a()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/fr;->c:Ljava/lang/String;

    return-object v0
.end method

.method public static a(Landroid/content/Context;)V
    .locals 2

    :try_start_0
    invoke-static {p0}, Lcom/loc/x;->b(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const-string p0, "http://abroad.apilocate.amap.com/mobile/binary"

    sput-object p0, Lcom/loc/fr;->c:Ljava/lang/String;

    return-void

    :cond_0
    invoke-static {}, Lcom/loc/fr;->f()V

    invoke-static {p0}, Lcom/loc/l;->f(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/loc/fg;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    sput-object p0, Lcom/loc/fr;->l:Ljava/lang/String;

    invoke-static {p0}, Lcom/loc/fr;->a(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string v0, "CoreUtil"

    const-string v1, "checkUrl"

    invoke-static {p0, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Lcom/amap/api/location/AMapLocation;Lorg/json/JSONObject;)V
    .locals 12

    const-string v0, "coordType"

    const-string v1, "desc"

    const-string v2, "citycode"

    const-string v3, "adcode"

    if-eqz p1, :cond_5

    :try_start_0
    const-string v4, "lat"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v5

    invoke-virtual {p1, v4, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v4

    const-string v6, "lon"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v7

    invoke-virtual {p1, v6, v7, v8}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v6

    const-string v8, "provider"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getProvider()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p1, v8, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setProvider(Ljava/lang/String;)V

    invoke-virtual {p0, v4, v5}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {p0, v6, v7}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    const-string v8, "altitude"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getAltitude()D

    move-result-wide v9

    invoke-virtual {p1, v8, v9, v10}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v8

    invoke-virtual {p0, v8, v9}, Lcom/amap/api/location/AMapLocation;->setAltitude(D)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    const-string v8, "accuracy"

    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_0

    invoke-static {v8}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_0
    :try_start_2
    const-string v8, "speed"

    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_1

    invoke-static {v8}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    :cond_1
    :try_start_3
    const-string v8, "bearing"

    invoke-virtual {p1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v9

    if-nez v9, :cond_2

    invoke-static {v8}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setBearing(F)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_2

    :catchall_2
    :cond_2
    :try_start_4
    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p1, v3, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setAdCode(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p1, v2, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setCityCode(Ljava/lang/String;)V

    const-string v8, "address"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getAddress()Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p1, v8, v9}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {p0, v8}, Lcom/amap/api/location/AMapLocation;->setAddress(Ljava/lang/String;)V

    const-string v8, ""

    invoke-virtual {p1, v1, v8}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v8

    const-string v9, "country"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getCountry()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setCountry(Ljava/lang/String;)V

    const-string v9, "province"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getProvince()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setProvince(Ljava/lang/String;)V

    const-string v9, "city"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getCity()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setCity(Ljava/lang/String;)V

    const-string v9, "district"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getDistrict()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setDistrict(Ljava/lang/String;)V

    const-string v9, "road"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getRoad()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setRoad(Ljava/lang/String;)V

    const-string v9, "street"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getStreet()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setStreet(Ljava/lang/String;)V

    const-string v9, "number"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getStreetNum()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setNumber(Ljava/lang/String;)V

    const-string v9, "poiname"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getPoiName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setPoiName(Ljava/lang/String;)V

    const-string v9, "aoiname"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getAoiName()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setAoiName(Ljava/lang/String;)V

    const-string v9, "errorCode"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    const-string v9, "errorInfo"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getErrorInfo()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setErrorInfo(Ljava/lang/String;)V

    const-string v9, "locationType"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;I)I

    move-result v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    const-string v9, "locationDetail"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLocationDetail()Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setLocationDetail(Ljava/lang/String;)V

    const-string v9, "time"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v10

    invoke-virtual {p1, v9, v10, v11}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;J)J

    move-result-wide v9

    invoke-virtual {p0, v9, v10}, Lcom/amap/api/location/AMapLocation;->setTime(J)V

    const-string v9, "isOffset"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->isOffset()Z

    move-result v10

    invoke-virtual {p1, v9, v10}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v9

    invoke-virtual {p0, v9}, Lcom/amap/api/location/AMapLocation;->setOffset(Z)V

    const-string v10, "poiid"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getBuildingId()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {p1, v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p0, v10}, Lcom/amap/api/location/AMapLocation;->setBuildingId(Ljava/lang/String;)V

    const-string v10, "floor"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getFloor()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {p1, v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p0, v10}, Lcom/amap/api/location/AMapLocation;->setFloor(Ljava/lang/String;)V

    const-string v10, "description"

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getDescription()Ljava/lang/String;

    move-result-object v11

    invoke-virtual {p1, v10, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v10

    invoke-virtual {p0, v10}, Lcom/amap/api/location/AMapLocation;->setDescription(Ljava/lang/String;)V

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->has(Ljava/lang/String;)Z

    move-result v10
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_3

    const-string v11, "GCJ02"

    if-eqz v10, :cond_3

    :try_start_5
    invoke-virtual {p1, v0, v11}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    :goto_0
    invoke-virtual {p0, p1}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    invoke-static {v4, v5, v6, v7}, Lcom/loc/fr;->a(DD)Z

    move-result p1

    if-eqz p1, :cond_4

    if-eqz v9, :cond_4

    invoke-virtual {p0, v11}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    goto :goto_1

    :cond_4
    const-string p1, "WGS84"

    goto :goto_0

    :goto_1
    new-instance p1, Landroid/os/Bundle;

    invoke-direct {p1}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v2, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v8}, Ljava/lang/String;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v1, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v3, v0}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {p0, p1}, Lcom/amap/api/location/AMapLocation;->setExtras(Landroid/os/Bundle;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    return-void

    :catchall_3
    move-exception p0

    const-string p1, "CoreUtil"

    const-string v0, "transformLocation"

    invoke-static {p0, p1, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    return-void
.end method

.method private static a(Ljava/lang/String;)V
    .locals 3

    if-eqz p0, :cond_5

    :try_start_0
    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    if-nez v0, :cond_1

    return-void

    :cond_1
    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_2

    return-void

    :cond_2
    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    invoke-virtual {v0, p0}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    const/4 v1, 0x0

    if-eqz v0, :cond_3

    invoke-virtual {v0}, Ljava/lang/String;->length()I

    move-result v2

    if-lez v2, :cond_3

    invoke-static {v0}, Lcom/loc/fr;->b(Ljava/lang/String;)[B

    move-result-object v0

    new-instance v1, Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/loc/fg;->b([BLjava/lang/String;)[B

    move-result-object p0

    const-string v0, "utf-8"

    invoke-direct {v1, p0, v0}, Ljava/lang/String;-><init>([BLjava/lang/String;)V

    :cond_3
    if-eqz v1, :cond_4

    invoke-virtual {v1}, Ljava/lang/String;->length()I

    move-result p0

    if-lez p0, :cond_4

    const-string p0, "http:"

    invoke-virtual {v1, p0}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result p0

    if-eqz p0, :cond_4

    sput-object v1, Lcom/loc/fr;->e:Ljava/lang/String;

    sput-object v1, Lcom/loc/fr;->c:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_4
    return-void

    :catchall_0
    move-exception p0

    const-string v0, "CoreUtil"

    const-string v1, "checkUrl"

    invoke-static {p0, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    :goto_0
    return-void
.end method

.method public static a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    const-string v0, "reportError"

    invoke-virtual {v0, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    instance-of v0, p0, Lcom/loc/k;

    if-eqz v0, :cond_1

    return-void

    :cond_1
    :try_start_0
    invoke-static {p0, p1, p2}, Lcom/loc/av;->b(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a(DD)Z
    .locals 4

    const-wide v0, 0x4052400000000000L    # 73.0

    sub-double/2addr p2, v0

    const-wide/high16 v0, 0x3fe0000000000000L    # 0.5

    div-double/2addr p2, v0

    double-to-int p2, p2

    const-wide/high16 v2, 0x400c000000000000L    # 3.5

    sub-double/2addr p0, v2

    div-double/2addr p0, v0

    double-to-int p0, p0

    const/4 p1, 0x0

    if-ltz p0, :cond_2

    const/16 p3, 0x65

    if-ge p0, p3, :cond_2

    if-ltz p2, :cond_2

    const/16 p3, 0x7c

    if-lt p2, p3, :cond_0

    goto :goto_0

    :cond_0
    mul-int/lit8 p0, p0, 0x7c

    add-int/2addr p0, p2

    const/4 p2, 0x1

    :try_start_0
    const-string p3, "00000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001100000001011000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011101010111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000110111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111101111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001000110111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011010111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001110011100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000110000001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001010011100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111100110001000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111000111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111110011000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111000000000111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111100000000000010111110100000011000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111110000000001111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111000000111111111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111101111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000101111111111111111111111111111111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000011110000000001111111111111111111111111111111111111111111110000000000000000000000000000000000000000000000000000000000011000011111100000000111111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000000001111111100111111111100110111111111111111111111111111111111111111111111110000000000000000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000000000101111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111011111000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111100100000000000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111100011100000000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000111110000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110011111110000000000000000000000111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110111111110000000000000000000000111011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110000000000000000000000001111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111100000000000000000000000011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111000000000000000000000000011111111111111111111111111111111111111111111111100001111111111111111111111111111111111111111111111111010000000000000000000000111111111111111111111111111111111111111111110000000000000001111111111111111111111111111111111111111111100000000000000000000011111111111111111111111111111111100000000000000000000000000001111111111111111111111111111111111111111110000000000000000000001111111111111111111111111111111100000000000000000000000000000001111111111111111111111111111111111111111000000000000000000000111111111111111111111111111111110000000000000000000000000000001111111111111111111111111111111111111111100000000000000000000111111111111111111111111111111000000000000000000000000000000000111111111111111111111111111111111111111111000000000000000000001111111111111111111111111110000000000000000000000000000000000001110011111111111111111111111111111111111111100000000000000000000011111111111111111100000000000000000000000000000000000000000000000001111111111111111111111111111111111111000000000000000000001111111111111111111000000000000000000000000000000000000000000000000011111111111111111111111111111111111100000000000000000000011111111111111111100000000000000000000000000000000000000000000000000011111111111111111111111111111111111000000000000000000001111111111111111100000000000000000000000000000000000000000000000000000000111111111111111111111111111111110000000000000000000000000111111111100000000000000000000000000000000000000000000000000111111111111111111111111111111111111111000000000000000000000000011111111100000000000000000000000000000000000000000000000000011111111111111111111111111111110001111100000000000000000000000000111110000000000000000000000000000000000000000000000000000001111111111111111111111111111111000000000000000000000000000000000001110000000000000000000000000000000000000000000000000000000011111111111111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111111000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000111111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111111100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000011111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001111111111110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000010110000000000000000000000"

    invoke-virtual {p3, p0}, Ljava/lang/String;->charAt(I)C

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 p3, 0x31

    if-ne p0, p3, :cond_1

    return p2

    :cond_1
    return p1

    :catchall_0
    move-exception p0

    const-string p1, "CoreUtil"

    const-string p3, "isChina"

    invoke-static {p0, p1, p3}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return p2

    :cond_2
    :goto_0
    return p1
.end method

.method private static a(DDDDDD)Z
    .locals 6

    invoke-static/range {p0 .. p11}, Lcom/loc/fr;->b(DDDDDD)D

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/Math;->abs(D)D

    move-result-wide v0

    const-wide v2, 0x3e112e0be826d695L    # 1.0E-9

    cmpg-double v4, v0, v2

    if-gez v4, :cond_0

    sub-double v0, p0, p4

    sub-double v2, p0, p8

    mul-double v0, v0, v2

    const-wide/16 v2, 0x0

    cmpg-double v4, v0, v2

    if-gtz v4, :cond_0

    sub-double v0, p2, p6

    sub-double v4, p2, p10

    mul-double v0, v0, v4

    cmpg-double v4, v0, v2

    if-gtz v4, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private static a(DDDDDDD)Z
    .locals 16

    sub-double v0, p4, p0

    sub-double v2, p12, p10

    mul-double v4, v0, v2

    sub-double v6, p6, p2

    const-wide v8, 0x4066800000000000L    # 180.0

    sub-double v8, v8, p8

    mul-double v10, v6, v8

    sub-double/2addr v4, v10

    const-wide/16 v10, 0x0

    cmpl-double v12, v4, v10

    if-eqz v12, :cond_0

    sub-double v12, p2, p10

    mul-double v8, v8, v12

    sub-double v14, p0, p8

    mul-double v2, v2, v14

    sub-double/2addr v8, v2

    div-double/2addr v8, v4

    mul-double v12, v12, v0

    mul-double v14, v14, v6

    sub-double/2addr v12, v14

    div-double/2addr v12, v4

    cmpl-double v0, v8, v10

    if-ltz v0, :cond_0

    const-wide/high16 v0, 0x3ff0000000000000L    # 1.0

    cmpg-double v2, v8, v0

    if-gtz v2, :cond_0

    cmpl-double v2, v12, v10

    if-ltz v2, :cond_0

    cmpg-double v2, v12, v0

    if-gtz v2, :cond_0

    const/4 v0, 0x1

    goto :goto_0

    :cond_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method public static a(Lcom/amap/api/location/DPoint;Ljava/util/List;)Z
    .locals 31
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/amap/api/location/DPoint;",
            "Ljava/util/List<",
            "Lcom/amap/api/location/DPoint;",
            ">;)Z"
        }
    .end annotation

    move-object/from16 v0, p1

    invoke-virtual/range {p0 .. p0}, Lcom/amap/api/location/DPoint;->getLongitude()D

    move-result-wide v15

    invoke-virtual/range {p0 .. p0}, Lcom/amap/api/location/DPoint;->getLatitude()D

    move-result-wide v17

    invoke-virtual/range {p0 .. p0}, Lcom/amap/api/location/DPoint;->getLatitude()D

    move-result-wide v19

    const/4 v13, 0x0

    invoke-interface {v0, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/amap/api/location/DPoint;

    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v2

    const/16 v21, 0x1

    add-int/lit8 v2, v2, -0x1

    invoke-interface {v0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/amap/api/location/DPoint;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-nez v1, :cond_0

    invoke-interface {v0, v13}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_0
    const/4 v1, 0x0

    const/16 v22, 0x0

    :goto_0
    invoke-interface/range {p1 .. p1}, Ljava/util/List;->size()I

    move-result v2

    add-int/lit8 v2, v2, -0x1

    if-ge v1, v2, :cond_6

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/amap/api/location/DPoint;

    invoke-virtual {v2}, Lcom/amap/api/location/DPoint;->getLongitude()D

    move-result-wide v23

    invoke-interface {v0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/amap/api/location/DPoint;

    invoke-virtual {v2}, Lcom/amap/api/location/DPoint;->getLatitude()D

    move-result-wide v25

    add-int/lit8 v14, v1, 0x1

    invoke-interface {v0, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/amap/api/location/DPoint;

    invoke-virtual {v1}, Lcom/amap/api/location/DPoint;->getLongitude()D

    move-result-wide v27

    invoke-interface {v0, v14}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Lcom/amap/api/location/DPoint;

    invoke-virtual {v1}, Lcom/amap/api/location/DPoint;->getLatitude()D

    move-result-wide v29

    move-wide v1, v15

    move-wide/from16 v3, v17

    move-wide/from16 v5, v23

    move-wide/from16 v7, v25

    move-wide/from16 v9, v27

    move-wide/from16 v11, v29

    invoke-static/range {v1 .. v12}, Lcom/loc/fr;->a(DDDDDD)Z

    move-result v1

    if-eqz v1, :cond_1

    return v21

    :cond_1
    sub-double v1, v29, v25

    invoke-static {v1, v2}, Ljava/lang/Math;->abs(D)D

    move-result-wide v1

    const-wide v3, 0x3e112e0be826d695L    # 1.0E-9

    cmpg-double v5, v1, v3

    if-ltz v5, :cond_2

    const-wide v9, 0x4066800000000000L    # 180.0

    move-wide/from16 v1, v23

    move-wide/from16 v3, v25

    move-wide v5, v15

    move-wide/from16 v7, v17

    move-wide/from16 v11, v19

    invoke-static/range {v1 .. v12}, Lcom/loc/fr;->a(DDDDDD)Z

    move-result v1

    if-eqz v1, :cond_3

    cmpl-double v1, v25, v29

    if-lez v1, :cond_2

    :goto_1
    add-int/lit8 v22, v22, 0x1

    :cond_2
    move/from16 v24, v14

    const/16 v23, 0x0

    goto :goto_2

    :cond_3
    const-wide v9, 0x4066800000000000L    # 180.0

    move-wide/from16 v1, v27

    move-wide/from16 v3, v29

    move-wide v5, v15

    move-wide/from16 v7, v17

    move-wide/from16 v11, v19

    invoke-static/range {v1 .. v12}, Lcom/loc/fr;->a(DDDDDD)Z

    move-result v1

    if-eqz v1, :cond_4

    cmpl-double v1, v29, v25

    if-lez v1, :cond_2

    goto :goto_1

    :cond_4
    move-wide/from16 v1, v23

    move-wide/from16 v3, v25

    move-wide/from16 v5, v27

    move-wide/from16 v7, v29

    move-wide v9, v15

    move-wide/from16 v11, v17

    move/from16 v24, v14

    const/16 v23, 0x0

    move-wide/from16 v13, v19

    invoke-static/range {v1 .. v14}, Lcom/loc/fr;->a(DDDDDDD)Z

    move-result v1

    if-eqz v1, :cond_5

    add-int/lit8 v22, v22, 0x1

    :cond_5
    :goto_2
    move/from16 v1, v24

    const/4 v13, 0x0

    goto/16 :goto_0

    :cond_6
    const/16 v23, 0x0

    rem-int/lit8 v22, v22, 0x2

    if-eqz v22, :cond_7

    const/4 v13, 0x1

    goto :goto_3

    :cond_7
    const/4 v13, 0x0

    :goto_3
    return v13
.end method

.method private static b(DDDDDD)D
    .locals 0

    sub-double/2addr p4, p0

    sub-double/2addr p10, p2

    mul-double p4, p4, p10

    sub-double/2addr p8, p0

    sub-double/2addr p6, p2

    mul-double p8, p8, p6

    sub-double/2addr p4, p8

    return-wide p4
.end method

.method public static b()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/fr;->d:Ljava/lang/String;

    return-object v0
.end method

.method public static b(Landroid/content/Context;)Ljava/lang/String;
    .locals 0

    invoke-static {p0}, Lcom/loc/l;->e(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/loc/s;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method private static b(Ljava/lang/String;)[B
    .locals 5

    const/4 v0, 0x0

    if-eqz p0, :cond_2

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    const/4 v2, 0x2

    if-ge v1, v2, :cond_0

    goto :goto_1

    :cond_0
    sget-object v1, Ljava/util/Locale;->US:Ljava/util/Locale;

    invoke-virtual {p0, v1}, Ljava/lang/String;->toLowerCase(Ljava/util/Locale;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v1

    div-int/2addr v1, v2

    new-array v2, v1, [B

    :goto_0
    if-ge v0, v1, :cond_1

    mul-int/lit8 v3, v0, 0x2

    add-int/lit8 v4, v3, 0x2

    invoke-virtual {p0, v3, v4}, Ljava/lang/String;->substring(II)Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/loc/fz;->f(Ljava/lang/String;)I

    move-result v3

    and-int/lit16 v3, v3, 0xff

    int-to-byte v3, v3

    aput-byte v3, v2, v0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_1
    return-object v2

    :cond_2
    :goto_1
    new-array p0, v0, [B

    return-object p0
.end method

.method public static c()Lcom/loc/w;
    .locals 4

    const-string v0, "6.4.0"

    :try_start_0
    sget-object v1, Lcom/loc/fr;->q:Lcom/loc/w;

    if-nez v1, :cond_0

    new-instance v1, Lcom/loc/w$a;

    const-string v2, "loc"

    const-string v3, "AMAP_Location_SDK_Android 6.4.0"

    invoke-direct {v1, v2, v0, v3}, Lcom/loc/w$a;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/loc/fr;->e()[Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/loc/w$a;->a([Ljava/lang/String;)Lcom/loc/w$a;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/loc/w$a;->a(Ljava/lang/String;)Lcom/loc/w$a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/loc/w$a;->a()Lcom/loc/w;

    move-result-object v0

    sput-object v0, Lcom/loc/fr;->q:Lcom/loc/w;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    const-string v1, "CoreUtil"

    const-string v2, "getSDKInfo"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    sget-object v0, Lcom/loc/fr;->q:Lcom/loc/w;

    return-object v0
.end method

.method public static c(Landroid/content/Context;)V
    .locals 2

    const-string v0, "http://abroad.apilocate.amap.com/mobile/binary"

    :try_start_0
    invoke-static {p0}, Lcom/loc/x;->b(Landroid/content/Context;)Z

    move-result p0

    if-eqz p0, :cond_0

    sput-object v0, Lcom/loc/fr;->c:Ljava/lang/String;

    sput-object v0, Lcom/loc/fr;->d:Ljava/lang/String;

    return-void

    :cond_0
    const-string p0, "http://apilocate.amap.com/mobile/binary"

    sput-object p0, Lcom/loc/fr;->c:Ljava/lang/String;

    const-string p0, "http://dualstack-a.apilocate.amap.com/mobile/binary"

    sput-object p0, Lcom/loc/fr;->d:Ljava/lang/String;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string v0, "CoreUtil"

    const-string v1, "changeUrl"

    invoke-static {p0, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static d()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/fr;->f:Ljava/lang/String;

    return-object v0
.end method

.method private static e()[Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/loc/fr;->p:[Ljava/lang/String;

    invoke-virtual {v0}, [Ljava/lang/String;->clone()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, [Ljava/lang/String;

    return-object v0
.end method

.method private static f()V
    .locals 3

    :try_start_0
    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    if-nez v0, :cond_0

    new-instance v0, Ljava/util/HashMap;

    const/16 v1, 0x10

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    sput-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    :cond_0
    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    invoke-virtual {v0}, Ljava/util/HashMap;->clear()V

    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    const-string v1, "fe643c382e5c3b3962141f1a2e815a78"

    const-string v2, "FB923EE67A8B4032DAA517DD8CD7A26FF7C25B0C3663F92A0B61251C4FFFA858DF169D61321C3E7919CB67DF8EFEC827"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    const-string v1, "9a571aa113ad987d626c0457828962e6"

    const-string v2, "D2FF99A88BEB04683D89470D4FA72B1749DA456AB0D0F1A476477CE5A6874F53A9106423D905F9D808C0FCE8E7F1E04AC642F01FE41D0C7D933971F45CBA72B7"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    sget-object v0, Lcom/loc/fr;->m:Ljava/util/HashMap;

    const-string v1, "668319f11506def6208d6afe320dfd52"

    const-string v2, "53E53D46011A6BBAEA4FAE5442E659E0577CDD336F930C28635C322FB3F51C3C63F7FBAC9EAE448DFA2E5E5D716C4807"

    invoke-virtual {v0, v1, v2}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    const-string v1, "CoreUtil"

    const-string v2, "initUrlHash"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
