.class public Lcom/bianfeng/amap/AmapInterface;
.super Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;
.source "AmapInterface.java"


# annotations
.annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin;
    entrance = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;->ACTIVITY:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Entrance;
    strategy = .enum Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;->FORCE:Lcom/bianfeng/ymnsdk/feature/protocol/YPlugin$Policy;
.end annotation


# static fields
.field public static final CODE_GET_LOCATION_FAILURE:I = 0x6a6

.field public static final CODE_GET_LOCATION_FAIL_NO_PERMISSION:I = 0x6a7

.field public static final CODE_GET_LOCATION_SUCCESS:I = 0x6a5

.field public static final FUNCTION_GET_AMAP_LOCATION:Ljava/lang/String; = "amap_get_location"

.field private static final FUNCTION_GET_AMAP_LOCATION_SPORT:Ljava/lang/String; = "amap_get_location_by_sport"

.field private static final FUNCTION_STOP_AMAP_LOCATION_SPORT:Ljava/lang/String; = "amap_stop_location"

.field private static flag:I


# instance fields
.field private accuracy_level:Ljava/lang/String;

.field private func_name:Ljava/lang/String;

.field private isFrist:Z

.field private locationClient:Lcom/amap/api/location/AMapLocationClient;

.field locationListener:Lcom/amap/api/location/AMapLocationListener;

.field private locationOption:Lcom/amap/api/location/AMapLocationClientOption;

.field private permissions:[Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 2

    .line 25
    invoke-direct {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;-><init>()V

    const-string v0, "android.permission.ACCESS_FINE_LOCATION"

    const-string v1, "android.permission.ACCESS_COARSE_LOCATION"

    .line 34
    filled-new-array {v0, v1}, [Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->permissions:[Ljava/lang/String;

    const/4 v0, 0x0

    .line 38
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    .line 39
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationOption:Lcom/amap/api/location/AMapLocationClientOption;

    const/4 v0, 0x0

    .line 43
    iput-boolean v0, p0, Lcom/bianfeng/amap/AmapInterface;->isFrist:Z

    const-string v0, ""

    .line 45
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    .line 167
    new-instance v0, Lcom/bianfeng/amap/AmapInterface$2;

    invoke-direct {v0, p0}, Lcom/bianfeng/amap/AmapInterface$2;-><init>(Lcom/bianfeng/amap/AmapInterface;)V

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationListener:Lcom/amap/api/location/AMapLocationListener;

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/amap/AmapInterface;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/bianfeng/amap/AmapInterface;->getLocationAfter()V

    return-void
.end method

.method static synthetic access$100(Lcom/bianfeng/amap/AmapInterface;)Ljava/lang/String;
    .locals 0

    .line 25
    iget-object p0, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    return-object p0
.end method

.method static synthetic access$200()I
    .locals 1

    .line 25
    sget v0, Lcom/bianfeng/amap/AmapInterface;->flag:I

    return v0
.end method

.method static synthetic access$300(Lcom/bianfeng/amap/AmapInterface;Lcom/amap/api/location/AMapLocation;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/amap/AmapInterface;->getLocationBySport(Lcom/amap/api/location/AMapLocation;)V

    return-void
.end method

.method static synthetic access$400(Lcom/bianfeng/amap/AmapInterface;Lcom/amap/api/location/AMapLocation;)V
    .locals 0

    .line 25
    invoke-direct {p0, p1}, Lcom/bianfeng/amap/AmapInterface;->getLocation(Lcom/amap/api/location/AMapLocation;)V

    return-void
.end method

.method static synthetic access$500(Lcom/bianfeng/amap/AmapInterface;)V
    .locals 0

    .line 25
    invoke-direct {p0}, Lcom/bianfeng/amap/AmapInterface;->getLocationWithSportAfter()V

    return-void
.end method

.method private getDefaultOption(Ljava/lang/String;)Lcom/amap/api/location/AMapLocationClientOption;
    .locals 3

    .line 144
    new-instance v0, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {v0}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    .line 145
    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Hight_Accuracy:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationMode(Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;)Lcom/amap/api/location/AMapLocationClientOption;

    const-string v1, "1"

    .line 146
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 147
    sget-object p1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Battery_Saving:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationMode(Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;)Lcom/amap/api/location/AMapLocationClientOption;

    goto :goto_0

    :cond_0
    const-string v1, "2"

    .line 148
    invoke-virtual {v1, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    .line 149
    sget-object p1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationMode(Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;)Lcom/amap/api/location/AMapLocationClientOption;

    :cond_1
    :goto_0
    const/4 p1, 0x0

    .line 151
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setGpsFirst(Z)Lcom/amap/api/location/AMapLocationClientOption;

    const-wide/16 v1, 0x4e20

    .line 152
    invoke-virtual {v0, v1, v2}, Lcom/amap/api/location/AMapLocationClientOption;->setHttpTimeOut(J)Lcom/amap/api/location/AMapLocationClientOption;

    const-wide/16 v1, 0x7d0

    .line 153
    invoke-virtual {v0, v1, v2}, Lcom/amap/api/location/AMapLocationClientOption;->setInterval(J)Lcom/amap/api/location/AMapLocationClientOption;

    const/4 p1, 0x1

    .line 154
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setNeedAddress(Z)Lcom/amap/api/location/AMapLocationClientOption;

    .line 155
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setOnceLocation(Z)Lcom/amap/api/location/AMapLocationClientOption;

    .line 156
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setOnceLocationLatest(Z)Lcom/amap/api/location/AMapLocationClientOption;

    .line 157
    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationProtocol;->HTTP:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationProtocol;

    invoke-static {v1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationProtocol(Lcom/amap/api/location/AMapLocationClientOption$AMapLocationProtocol;)V

    .line 158
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setSensorEnable(Z)Lcom/amap/api/location/AMapLocationClientOption;

    .line 159
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setWifiScan(Z)Lcom/amap/api/location/AMapLocationClientOption;

    .line 160
    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationCacheEnable(Z)Lcom/amap/api/location/AMapLocationClientOption;

    return-object v0
.end method

.method private getLocation(Lcom/amap/api/location/AMapLocation;)V
    .locals 4

    const/16 v0, 0x6a6

    if-nez p1, :cond_0

    .line 244
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    const-string v1, "get location failed, location is null"

    invoke-virtual {p0, v0, v1, p1}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    return-void

    .line 247
    :cond_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "amap getLocation \uff1a"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "===="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorInfo()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Lcom/bianfeng/amap/common/AmapLogger;->i(Ljava/lang/String;)V

    .line 248
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v1

    const/4 v2, 0x0

    if-nez v1, :cond_1

    .line 249
    iput-boolean v2, p0, Lcom/bianfeng/amap/AmapInterface;->isFrist:Z

    .line 250
    invoke-direct {p0, p1}, Lcom/bianfeng/amap/AmapInterface;->toGson(Lcom/amap/api/location/AMapLocation;)V

    goto :goto_0

    .line 252
    :cond_1
    iget-boolean v1, p0, Lcom/bianfeng/amap/AmapInterface;->isFrist:Z

    if-eqz v1, :cond_2

    .line 253
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "|"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    invoke-virtual {p0, v0, p1, v1}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 254
    iput-boolean v2, p0, Lcom/bianfeng/amap/AmapInterface;->isFrist:Z

    return-void

    :cond_2
    const/4 p1, 0x1

    .line 257
    iput-boolean p1, p0, Lcom/bianfeng/amap/AmapInterface;->isFrist:Z

    .line 258
    iget-object p1, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz p1, :cond_3

    .line 259
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClient;->getLastKnownLocation()Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/bianfeng/amap/AmapInterface;->getLocation(Lcom/amap/api/location/AMapLocation;)V

    :cond_3
    :goto_0
    return-void
.end method

.method private getLocationAfter()V
    .locals 2

    .line 119
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->isStarted()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 120
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->stopLocation()V

    .line 124
    :cond_0
    :try_start_0
    new-instance v0, Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/amap/api/location/AMapLocationClient;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    .line 126
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->accuracy_level:Ljava/lang/String;

    invoke-direct {p0, v0}, Lcom/bianfeng/amap/AmapInterface;->getDefaultOption(Ljava/lang/String;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationOption:Lcom/amap/api/location/AMapLocationClientOption;

    .line 128
    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v1, v0}, Lcom/amap/api/location/AMapLocationClient;->setLocationOption(Lcom/amap/api/location/AMapLocationClientOption;)V

    .line 130
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->locationListener:Lcom/amap/api/location/AMapLocationListener;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->setLocationListener(Lcom/amap/api/location/AMapLocationListener;)V

    .line 131
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->startLocation()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 134
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private getLocationBySport(Lcom/amap/api/location/AMapLocation;)V
    .locals 2

    .line 180
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v0

    if-nez v0, :cond_0

    .line 181
    invoke-direct {p0, p1}, Lcom/bianfeng/amap/AmapInterface;->toGson(Lcom/amap/api/location/AMapLocation;)V

    .line 183
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "===="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorInfo()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/amap/common/AmapLogger;->i(Ljava/lang/String;)V

    return-void
.end method

.method private getLocationWithSportAfter()V
    .locals 2

    .line 298
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz v0, :cond_0

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->isStarted()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 299
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->stopLocation()V

    .line 302
    :cond_0
    :try_start_0
    new-instance v0, Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-direct {v0, v1}, Lcom/amap/api/location/AMapLocationClient;-><init>(Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    .line 303
    new-instance v0, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {v0}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationOption:Lcom/amap/api/location/AMapLocationClientOption;

    .line 304
    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationPurpose;->Sport:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationPurpose;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClientOption;->setLocationPurpose(Lcom/amap/api/location/AMapLocationClientOption$AMapLocationPurpose;)Lcom/amap/api/location/AMapLocationClientOption;

    .line 305
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->locationOption:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->setLocationOption(Lcom/amap/api/location/AMapLocationClientOption;)V

    .line 306
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->locationListener:Lcom/amap/api/location/AMapLocationListener;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->setLocationListener(Lcom/amap/api/location/AMapLocationListener;)V

    .line 307
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->startLocation()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 310
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method private toGson(Lcom/amap/api/location/AMapLocation;)V
    .locals 26

    move-object/from16 v1, p0

    .line 187
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v2

    .line 188
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v4

    .line 189
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v0

    .line 190
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAltitude()D

    move-result-wide v6

    .line 191
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getSpeed()F

    move-result v8

    .line 192
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getBearing()F

    move-result v9

    .line 193
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getBuildingId()Ljava/lang/String;

    move-result-object v10

    .line 194
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getFloor()Ljava/lang/String;

    move-result-object v11

    .line 195
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAddress()Ljava/lang/String;

    move-result-object v12

    .line 196
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getCountry()Ljava/lang/String;

    move-result-object v13

    .line 197
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getProvince()Ljava/lang/String;

    move-result-object v14

    .line 198
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getCity()Ljava/lang/String;

    move-result-object v15

    .line 199
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getDistrict()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v16, v1

    .line 200
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getStreet()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v17, v1

    .line 201
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getStreetNum()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v18, v1

    .line 202
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getCityCode()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v19, v1

    .line 203
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v20, v1

    .line 204
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getPoiName()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v21, v1

    .line 205
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAoiName()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v22, v1

    .line 206
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v1

    move/from16 v23, v1

    .line 207
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getProvider()Ljava/lang/String;

    move-result-object v1

    move-object/from16 v24, v1

    .line 208
    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getSatellites()I

    move-result v1

    move/from16 p1, v1

    .line 209
    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    move-object/from16 v25, v15

    :try_start_0
    const-string v15, "latitude"

    .line 211
    invoke-virtual {v1, v15, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v2, "longitude"

    .line 212
    invoke-virtual {v1, v2, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v2, "accuracy"

    float-to-double v3, v0

    .line 213
    invoke-virtual {v1, v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v0, "altitude"

    .line 214
    invoke-virtual {v1, v0, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v0, "speed"

    float-to-double v2, v8

    .line 215
    invoke-virtual {v1, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v0, "bearing"

    float-to-double v2, v9

    .line 216
    invoke-virtual {v1, v0, v2, v3}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v0, "buildingId"

    .line 217
    invoke-virtual {v1, v0, v10}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "floor"

    .line 218
    invoke-virtual {v1, v0, v11}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "address"

    .line 219
    invoke-virtual {v1, v0, v12}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "country"

    .line 220
    invoke-virtual {v1, v0, v13}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "province"

    .line 221
    invoke-virtual {v1, v0, v14}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "city"

    move-object/from16 v2, v25

    .line 222
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "district"

    move-object/from16 v2, v16

    .line 223
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "street"

    move-object/from16 v2, v17

    .line 224
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "streetNum"

    move-object/from16 v2, v18

    .line 225
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "cityCode"

    move-object/from16 v2, v19

    .line 226
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "adCode"

    move-object/from16 v2, v20

    .line 227
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "poiName"

    move-object/from16 v2, v21

    .line 228
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "aoiName"

    move-object/from16 v2, v22

    .line 229
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "locationType"

    move/from16 v2, v23

    .line 230
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v0, "provider"

    move-object/from16 v2, v24

    .line 231
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v0, "satellites"

    move/from16 v2, p1

    .line 232
    invoke-virtual {v1, v0, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const/16 v0, 0x6a5

    .line 233
    invoke-virtual {v1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object v1
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_1

    move-object/from16 v2, p0

    :try_start_1
    iget-object v3, v2, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    invoke-virtual {v2, v0, v1, v3}, Lcom/bianfeng/amap/AmapInterface;->sendResult(ILjava/lang/String;Ljava/lang/String;)V

    .line 234
    iget-object v0, v2, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz v0, :cond_0

    .line 235
    iget-object v0, v2, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->stopLocation()V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0

    goto :goto_1

    :catch_0
    move-exception v0

    goto :goto_0

    :catch_1
    move-exception v0

    move-object/from16 v2, p0

    .line 238
    :goto_0
    invoke-virtual {v0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_1
    return-void
.end method


# virtual methods
.method public getLocation()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "amap_get_location"
    .end annotation

    .line 77
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyShow(Landroid/content/Context;ZZ)V

    .line 78
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyAgree(Landroid/content/Context;Z)V

    const-string v0, "amap_get_location"

    .line 79
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    const-string v0, "3"

    .line 80
    invoke-virtual {p0, v0}, Lcom/bianfeng/amap/AmapInterface;->getLocation(Ljava/lang/String;)V

    return-void
.end method

.method public getLocation(Ljava/lang/String;)V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "amap_get_location"
    .end annotation

    .line 85
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyShow(Landroid/content/Context;ZZ)V

    .line 86
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyAgree(Landroid/content/Context;Z)V

    const-string v0, "amap_get_location;accuracy_level"

    .line 87
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    .line 88
    sput v1, Lcom/bianfeng/amap/AmapInterface;->flag:I

    .line 89
    iput-object p1, p0, Lcom/bianfeng/amap/AmapInterface;->accuracy_level:Ljava/lang/String;

    .line 90
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    new-instance v0, Lcom/bianfeng/amap/AmapInterface$1;

    invoke-direct {v0, p0}, Lcom/bianfeng/amap/AmapInterface$1;-><init>(Lcom/bianfeng/amap/AmapInterface;)V

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->permissions:[Ljava/lang/String;

    .line 114
    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object p1

    const/16 v0, 0x400

    invoke-virtual {p1, v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    return-void
.end method

.method public getLocationWithSport()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "amap_get_location_by_sport"
    .end annotation

    .line 268
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyShow(Landroid/content/Context;ZZ)V

    .line 269
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyAgree(Landroid/content/Context;Z)V

    const-string v0, "amap_get_location_by_sport"

    .line 270
    iput-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->func_name:Ljava/lang/String;

    const/4 v0, 0x0

    .line 271
    sput v0, Lcom/bianfeng/amap/AmapInterface;->flag:I

    .line 272
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->newInstance(Landroid/app/Activity;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    new-instance v1, Lcom/bianfeng/amap/AmapInterface$3;

    invoke-direct {v1, p0}, Lcom/bianfeng/amap/AmapInterface$3;-><init>(Lcom/bianfeng/amap/AmapInterface;)V

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setCallback(Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils$PermissCallback;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    iget-object v1, p0, Lcom/bianfeng/amap/AmapInterface;->permissions:[Ljava/lang/String;

    .line 294
    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->setPermissions([Ljava/lang/String;)Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;

    move-result-object v0

    const/16 v1, 0x400

    invoke-virtual {v0, v1}, Lcom/bianfeng/ymnsdk/utilslib/permission/BfDataPermissionUtils;->requestPermissions(I)Z

    return-void
.end method

.method public getPluginId()Ljava/lang/String;
    .locals 1

    const-string v0, "30"

    return-object v0
.end method

.method public getPluginName()Ljava/lang/String;
    .locals 1

    const-string v0, "amap"

    return-object v0
.end method

.method public getPluginVersion()I
    .locals 1

    const/16 v0, 0xe

    return v0
.end method

.method public getSdkVersion()Ljava/lang/String;
    .locals 1

    const-string v0, "6.4.0"

    return-object v0
.end method

.method public onDestroy()V
    .locals 1

    .line 69
    invoke-super {p0}, Lcom/bianfeng/ymnsdk/feature/YmnPluginWrapper;->onDestroy()V

    .line 70
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz v0, :cond_0

    .line 71
    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->onDestroy()V

    :cond_0
    return-void
.end method

.method public stop()V
    .locals 2
    .annotation runtime Lcom/bianfeng/ymnsdk/feature/protocol/YFunction;
        name = "amap_stop_location"
    .end annotation

    .line 316
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    const/4 v1, 0x1

    invoke-static {v0, v1, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyShow(Landroid/content/Context;ZZ)V

    .line 317
    invoke-virtual {p0}, Lcom/bianfeng/amap/AmapInterface;->getActivity()Landroid/app/Activity;

    move-result-object v0

    invoke-static {v0, v1}, Lcom/amap/api/location/AMapLocationClient;->updatePrivacyAgree(Landroid/content/Context;Z)V

    .line 318
    iget-object v0, p0, Lcom/bianfeng/amap/AmapInterface;->locationClient:Lcom/amap/api/location/AMapLocationClient;

    if-eqz v0, :cond_0

    .line 319
    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClient;->stopLocation()V

    :cond_0
    return-void
.end method
