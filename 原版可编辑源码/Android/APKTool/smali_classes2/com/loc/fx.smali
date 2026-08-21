.class public final Lcom/loc/fx;
.super Ljava/lang/Object;
.source "ReportUtil.java"


# static fields
.field static g:Lcom/amap/api/location/AMapLocation;

.field static h:Z

.field private static i:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/loc/bz;",
            ">;"
        }
    .end annotation
.end field

.field private static j:Lorg/json/JSONArray;


# instance fields
.field public a:Landroid/util/SparseArray;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Landroid/util/SparseArray<",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field public b:I

.field public c:J

.field d:[Ljava/lang/String;

.field public e:I

.field public f:J


# direct methods
.method static constructor <clinit>()V
    .locals 1

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    sput-object v0, Lcom/loc/fx;->i:Ljava/util/List;

    const/4 v0, 0x0

    sput-object v0, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    sput-object v0, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/fx;->h:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 9

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Landroid/util/SparseArray;

    invoke-direct {v0}, Landroid/util/SparseArray;-><init>()V

    iput-object v0, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    const/4 v0, -0x1

    iput v0, p0, Lcom/loc/fx;->b:I

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/loc/fx;->c:J

    const-string v3, "ol"

    const-string v4, "cl"

    const-string v5, "gl"

    const-string v6, "ha"

    const-string v7, "bs"

    const-string v8, "ds"

    filled-new-array/range {v3 .. v8}, [Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    iput v0, p0, Lcom/loc/fx;->e:I

    const-wide/16 v0, -0x1

    iput-wide v0, p0, Lcom/loc/fx;->f:J

    return-void
.end method

.method private static a(I)Ljava/lang/String;
    .locals 1

    const/16 v0, 0x7db

    if-eq p0, v0, :cond_b

    const/16 v0, 0x7ef

    if-eq p0, v0, :cond_a

    const/16 v0, 0x7f9

    if-eq p0, v0, :cond_9

    const/16 v0, 0x821

    if-eq p0, v0, :cond_8

    const/16 v0, 0x82b

    if-eq p0, v0, :cond_7

    const/16 v0, 0x83f

    if-eq p0, v0, :cond_6

    const/16 v0, 0x849

    if-eq p0, v0, :cond_5

    const/16 v0, 0x85d    # 3.0E-42f

    if-eq p0, v0, :cond_4

    const/16 v0, 0x7e5

    if-eq p0, v0, :cond_3

    const/16 v0, 0x7e6

    if-eq p0, v0, :cond_2

    const/16 v0, 0x80d

    if-eq p0, v0, :cond_1

    const/16 v0, 0x80e

    if-eq p0, v0, :cond_0

    packed-switch p0, :pswitch_data_0

    packed-switch p0, :pswitch_data_1

    packed-switch p0, :pswitch_data_2

    packed-switch p0, :pswitch_data_3

    const-string p0, ""

    goto/16 :goto_0

    :pswitch_0
    const-string p0, "UNSUPPORT_CONTINUE_LOC"

    goto :goto_0

    :pswitch_1
    const-string p0, "UNSUPPORT_COARSE_LBSLOC"

    goto :goto_0

    :pswitch_2
    const-string p0, "MaybeMockGPSLoc"

    goto :goto_0

    :pswitch_3
    const-string p0, "MaybeMockNetLoc"

    goto :goto_0

    :pswitch_4
    const-string p0, "NoCgiAndWifiOff"

    goto :goto_0

    :pswitch_5
    const-string p0, "AirPlaneModeAndWifiOff"

    goto :goto_0

    :pswitch_6
    const-string p0, "NoCgiOAndWifiInfo"

    goto :goto_0

    :pswitch_7
    const-string p0, "NotConfigAPSService"

    goto :goto_0

    :pswitch_8
    const-string p0, "AuthClientScodeFail"

    goto :goto_0

    :pswitch_9
    const-string p0, "BindAPSServiceException"

    goto :goto_0

    :pswitch_a
    const-string p0, "ParserDataException"

    goto :goto_0

    :pswitch_b
    const-string p0, "DecryptResponseException"

    goto :goto_0

    :pswitch_c
    const-string p0, "MaybeIntercepted"

    goto :goto_0

    :pswitch_d
    const-string p0, "NeedLoginNetWork\t"

    goto :goto_0

    :cond_0
    const-string p0, "ServerLocFail"

    goto :goto_0

    :cond_1
    const-string p0, "ServerRetypeError"

    goto :goto_0

    :cond_2
    const-string p0, "OnlyOneWifiButNotMain"

    goto :goto_0

    :cond_3
    const-string p0, "OnlyMainWifi"

    goto :goto_0

    :cond_4
    const-string p0, "NoEnoughStatellites"

    goto :goto_0

    :cond_5
    const-string p0, "NotLocPermission"

    goto :goto_0

    :cond_6
    const-string p0, "ErrorCgiInfo"

    goto :goto_0

    :cond_7
    const-string p0, "InitException"

    goto :goto_0

    :cond_8
    const-string p0, "LocalLocException"

    goto :goto_0

    :cond_9
    const-string p0, "ResponseResultIsNull"

    goto :goto_0

    :cond_a
    const-string p0, "CreateApsReqException"

    goto :goto_0

    :cond_b
    const-string p0, "ContextIsNull"

    :goto_0
    return-object p0

    :pswitch_data_0
    .packed-switch 0x803
        :pswitch_d
        :pswitch_c
        :pswitch_b
        :pswitch_a
    .end packed-switch

    :pswitch_data_1
    .packed-switch 0x835
        :pswitch_9
        :pswitch_8
        :pswitch_7
    .end packed-switch

    :pswitch_data_2
    .packed-switch 0x853
        :pswitch_6
        :pswitch_5
        :pswitch_4
    .end packed-switch

    :pswitch_data_3
    .packed-switch 0x867
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method

.method public static a(JJ)V
    .locals 6

    const-string v0, ","

    const-string v1, "yyyy-MM-dd HH:mm:ss.SSS"

    :try_start_0
    sget-boolean v2, Lcom/loc/fx;->h:Z

    if-eqz v2, :cond_0

    return-void

    :cond_0
    new-instance v2, Ljava/lang/StringBuffer;

    invoke-direct {v2}, Ljava/lang/StringBuffer;-><init>()V

    const-string v3, "gpsTime:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {p0, p1, v1}, Lcom/loc/fz;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "sysTime:"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {p2, p3, v1}, Lcom/loc/fz;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v2, p2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-static {}, Lcom/loc/fq;->u()J

    move-result-wide p2

    const-string v0, "0"

    const-wide/16 v3, 0x0

    cmp-long v5, v3, p2

    if-eqz v5, :cond_1

    invoke-static {p2, p3, v1}, Lcom/loc/fz;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object v0

    :cond_1
    const-string v1, "serverTime:"

    invoke-virtual {v2, v1}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    invoke-virtual {v2, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v0, "checkgpstime"

    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/loc/fx;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eqz v5, :cond_2

    sub-long/2addr p0, p2

    invoke-static {p0, p1}, Ljava/lang/Math;->abs(J)J

    move-result-wide p0

    const-wide p2, 0x757b12c00L

    cmp-long v0, p0, p2

    if-gez v0, :cond_2

    const-string p0, ", correctError"

    invoke-virtual {v2, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string p0, "checkgpstimeerror"

    invoke-virtual {v2}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Lcom/loc/fx;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    const/4 p0, 0x0

    invoke-virtual {v2}, Ljava/lang/StringBuffer;->length()I

    move-result p1

    invoke-virtual {v2, p0, p1}, Ljava/lang/StringBuffer;->delete(II)Ljava/lang/StringBuffer;

    const/4 p0, 0x1

    sput-boolean p0, Lcom/loc/fx;->h:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;)V
    .locals 3

    const-class v0, Lcom/loc/fx;

    monitor-enter v0

    if-eqz p0, :cond_2

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    sget-object v1, Lcom/loc/fx;->i:Ljava/util/List;

    if-eqz v1, :cond_1

    sget-object v1, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    new-instance v1, Ljava/util/ArrayList;

    invoke-direct {v1}, Ljava/util/ArrayList;-><init>()V

    sget-object v2, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {v1, v2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-static {v1, p0}, Lcom/loc/ca;->b(Ljava/util/List;Landroid/content/Context;)V

    sget-object v1, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V

    :cond_1
    invoke-static {p0}, Lcom/loc/fx;->f(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_1
    const-string v1, "ReportUtil"

    const-string v2, "destroy"

    invoke-static {p0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_2
    :goto_0
    monitor-exit v0

    return-void
.end method

.method public static a(Landroid/content/Context;IIJJ)V
    .locals 9

    const/4 v0, -0x1

    if-eq p1, v0, :cond_1

    if-ne p2, v0, :cond_0

    goto :goto_0

    :cond_0
    :try_start_0
    const-string v2, "O012"

    move-object v1, p0

    move v3, p1

    move v4, p2

    move-wide v5, p3

    move-wide v7, p5

    invoke-static/range {v1 .. v8}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;IIJJ)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "reportServiceAliveTime"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public static a(Landroid/content/Context;JZ)V
    .locals 1

    if-eqz p0, :cond_1

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "O015"

    invoke-static {p0, p1, p2, p3, v0}, Lcom/loc/fx;->a(Landroid/content/Context;JZLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "reportGPSLocUseTime"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private static a(Landroid/content/Context;JZLjava/lang/String;)V
    .locals 0

    invoke-static {p1, p2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Long;->intValue()I

    move-result p1

    if-nez p3, :cond_0

    const-string p2, "abroad"

    goto :goto_0

    :cond_0
    const-string p2, "domestic"

    :goto_0
    invoke-static {p0, p4, p2, p1}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V

    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;Lcom/amap/api/location/AMapLocation;)V
    .locals 8

    const-class v0, Lcom/loc/fx;

    monitor-enter v0

    :try_start_0
    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v1

    const/4 v2, 0x4

    const/4 v3, 0x0

    const/4 v4, 0x2

    const/4 v5, 0x1

    if-eq v1, v5, :cond_5

    if-eq v1, v4, :cond_4

    if-eq v1, v2, :cond_4

    const/16 v6, 0xb

    if-eq v1, v6, :cond_3

    const/16 v6, 0x8

    if-eq v1, v6, :cond_2

    const/16 v6, 0x9

    if-eq v1, v6, :cond_1

    const/4 v1, 0x0

    goto :goto_1

    :cond_1
    const/4 v1, 0x2

    goto :goto_0

    :cond_2
    const/4 v3, 0x3

    const/4 v1, 0x3

    goto :goto_0

    :cond_3
    const/4 v1, 0x4

    goto :goto_0

    :cond_4
    const/4 v1, 0x1

    goto :goto_0

    :cond_5
    const/4 v1, 0x0

    :goto_0
    const/4 v3, 0x1

    :goto_1
    if-eqz v3, :cond_c

    invoke-static {}, Lcom/loc/fq;->c()I

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v3, :cond_8

    if-eqz v1, :cond_7

    if-ne v1, v2, :cond_6

    goto :goto_2

    :cond_6
    if-ne v3, v5, :cond_8

    monitor-exit v0

    return-void

    :cond_7
    :goto_2
    if-ne v3, v4, :cond_8

    monitor-exit v0

    return-void

    :cond_8
    :try_start_2
    sget-object v2, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    if-nez v2, :cond_9

    new-instance v2, Lorg/json/JSONArray;

    invoke-direct {v2}, Lorg/json/JSONArray;-><init>()V

    sput-object v2, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    :cond_9
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "lon"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v6

    invoke-static {v6, v7}, Lcom/loc/fz;->b(D)D

    move-result-wide v6

    invoke-virtual {v2, v3, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "lat"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v6

    invoke-static {v6, v7}, Lcom/loc/fz;->b(D)D

    move-result-wide v6

    invoke-virtual {v2, v3, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "type"

    invoke-virtual {v2, v3, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v3, "timestamp"

    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v6

    invoke-virtual {v2, v3, v6, v7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getCoordType()Ljava/lang/String;

    move-result-object v3

    const-string v6, "WGS84"

    invoke-virtual {v3, v6}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_a

    const-string v3, "coordType"

    invoke-virtual {v2, v3, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_3

    :cond_a
    const-string v3, "coordType"

    invoke-virtual {v2, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :goto_3
    if-nez v1, :cond_b

    new-instance v1, Lorg/json/JSONObject;

    invoke-direct {v1}, Lorg/json/JSONObject;-><init>()V

    const-string v3, "accuracy"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v4

    float-to-double v4, v4

    invoke-static {v4, v5}, Lcom/loc/fz;->c(D)D

    move-result-wide v4

    invoke-virtual {v1, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "altitude"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAltitude()D

    move-result-wide v4

    invoke-static {v4, v5}, Lcom/loc/fz;->c(D)D

    move-result-wide v4

    invoke-virtual {v1, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "bearing"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getBearing()F

    move-result v4

    float-to-double v4, v4

    invoke-static {v4, v5}, Lcom/loc/fz;->c(D)D

    move-result-wide v4

    invoke-virtual {v1, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string v3, "speed"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getSpeed()F

    move-result p1

    float-to-double v4, p1

    invoke-static {v4, v5}, Lcom/loc/fz;->c(D)D

    move-result-wide v4

    invoke-virtual {v1, v3, v4, v5}, Lorg/json/JSONObject;->put(Ljava/lang/String;D)Lorg/json/JSONObject;

    const-string p1, "extension"

    invoke-virtual {v2, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_b
    sget-object p1, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    invoke-virtual {p1, v2}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    move-result-object p1

    sput-object p1, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    invoke-virtual {p1}, Lorg/json/JSONArray;->length()I

    move-result p1

    invoke-static {}, Lcom/loc/fq;->b()I

    move-result v1

    if-lt p1, v1, :cond_c

    invoke-static {p0}, Lcom/loc/fx;->f(Landroid/content/Context;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :cond_c
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_3
    const-string p1, "ReportUtil"

    const-string v1, "recordOfflineLocLog"

    invoke-static {p0, p1, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static a(Landroid/content/Context;Lcom/amap/api/location/AMapLocation;Lcom/loc/eq;)V
    .locals 8

    if-nez p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string v0, "gps"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getProvider()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_6

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_1

    goto :goto_3

    :cond_1
    const-string v0, "domestic"

    invoke-static {p1}, Lcom/loc/fx;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-eqz v2, :cond_2

    const-string v0, "abroad"

    :cond_2
    move-object v3, v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string v2, "cache"

    const-string v4, "net"

    const/4 v5, 0x6

    const/4 v6, 0x5

    const/4 v7, 0x0

    if-eqz v0, :cond_4

    :try_start_1
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v0

    const/4 v1, 0x4

    if-eq v0, v1, :cond_3

    if-eq v0, v6, :cond_3

    if-eq v0, v5, :cond_3

    const/16 v1, 0xb

    if-eq v0, v1, :cond_3

    goto :goto_0

    :cond_3
    move-object v2, v4

    :goto_0
    const/4 v4, 0x0

    goto :goto_2

    :cond_4
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v0

    if-eq v0, v6, :cond_5

    if-eq v0, v5, :cond_5

    goto :goto_1

    :cond_5
    move-object v2, v4

    :goto_1
    const/4 v4, 0x1

    :goto_2
    const-string v1, "O016"

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v5

    move-object v0, p0

    move-object v6, p2

    invoke-static/range {v0 .. v6}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILcom/loc/eq;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :cond_6
    :goto_3
    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "reportBatting"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;IIJJ)V
    .locals 2

    if-eqz p0, :cond_1

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    const-string v1, "param_int_first"

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "param_int_second"

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p2, "param_long_first"

    invoke-virtual {v0, p2, p4, p5}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    const-string p2, "param_long_second"

    invoke-virtual {v0, p2, p6, p7}, Lorg/json/JSONObject;->put(Ljava/lang/String;J)Lorg/json/JSONObject;

    invoke-static {p0, p1, v0}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "applyStatisticsEx"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;I)V
    .locals 2

    if-eqz p0, :cond_4

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "param_string_first"

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const/4 p2, 0x0

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    const-string v1, "param_string_second"

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const p2, 0x7fffffff

    if-eq p3, p2, :cond_3

    const-string p2, "param_int_first"

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_3
    invoke-static {p0, p1, v0}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "applyStatisticsEx"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method private static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILcom/loc/eq;)V
    .locals 3

    if-eqz p0, :cond_d

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto/16 :goto_0

    :cond_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_1

    const-string v1, "param_string_first"

    invoke-virtual {v0, v1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_2

    const-string p2, "param_string_second"

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_2
    const p2, 0x7fffffff

    if-eq p4, p2, :cond_3

    const-string p3, "param_int_first"

    invoke-virtual {v0, p3, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_3
    if-eq p5, p2, :cond_4

    const-string p2, "param_int_second"

    invoke-virtual {v0, p2, p5}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_4
    if-eqz p6, :cond_c

    invoke-virtual {p6}, Lcom/loc/eq;->d()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_5

    const-string p2, "dns"

    invoke-virtual {p6}, Lcom/loc/eq;->d()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_5
    invoke-virtual {p6}, Lcom/loc/eq;->e()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_6

    const-string p2, "domain"

    invoke-virtual {p6}, Lcom/loc/eq;->e()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_6
    invoke-virtual {p6}, Lcom/loc/eq;->f()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_7

    const-string p2, "type"

    invoke-virtual {p6}, Lcom/loc/eq;->f()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_7
    invoke-virtual {p6}, Lcom/loc/eq;->g()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_8

    const-string p2, "reason"

    invoke-virtual {p6}, Lcom/loc/eq;->g()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_8
    invoke-virtual {p6}, Lcom/loc/eq;->c()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_9

    const-string p2, "ip"

    invoke-virtual {p6}, Lcom/loc/eq;->c()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_9
    invoke-virtual {p6}, Lcom/loc/eq;->b()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_a

    const-string p2, "stack"

    invoke-virtual {p6}, Lcom/loc/eq;->b()Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_a
    invoke-virtual {p6}, Lcom/loc/eq;->h()J

    move-result-wide p2

    const-wide/16 p4, 0x0

    cmp-long v1, p2, p4

    if-lez v1, :cond_b

    const-string p2, "ctime"

    invoke-virtual {p6}, Lcom/loc/eq;->h()J

    move-result-wide v1

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_b
    invoke-virtual {p6}, Lcom/loc/eq;->a()J

    move-result-wide p2

    cmp-long v1, p2, p4

    if-lez v1, :cond_c

    const-string p2, "ntime"

    invoke-virtual {p6}, Lcom/loc/eq;->a()J

    move-result-wide p3

    invoke-static {p3, p4}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object p3

    invoke-virtual {v0, p2, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_c
    invoke-static {p0, p1, v0}, Lcom/loc/fx;->a(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "applyStatisticsEx"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_d
    :goto_0
    return-void
.end method

.method public static declared-synchronized a(Landroid/content/Context;Ljava/lang/String;Lorg/json/JSONObject;)V
    .locals 4

    const-class v0, Lcom/loc/fx;

    monitor-enter v0

    if-eqz p0, :cond_3

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v1

    if-nez v1, :cond_0

    goto :goto_0

    :cond_0
    new-instance v1, Lcom/loc/bz;

    const-string v2, "loc"

    const-string v3, "6.4.0"

    invoke-direct {v1, p0, v2, v3, p1}, Lcom/loc/bz;-><init>(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    if-eqz p2, :cond_1

    invoke-virtual {p2}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, p1}, Lcom/loc/bz;->a(Ljava/lang/String;)V

    :cond_1
    sget-object p1, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {p1, v1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    sget-object p1, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    const/16 p2, 0x1e

    if-lt p1, p2, :cond_2

    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    sget-object p2, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {p1, p2}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    invoke-static {p1, p0}, Lcom/loc/ca;->b(Ljava/util/List;Landroid/content/Context;)V

    sget-object p0, Lcom/loc/fx;->i:Ljava/util/List;

    invoke-interface {p0}, Ljava/util/List;->clear()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_2
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    :try_start_1
    const-string p1, "ReportUtil"

    const-string p2, "applyStatistics"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    monitor-exit v0

    return-void

    :catchall_1
    move-exception p0

    monitor-exit v0

    throw p0

    :cond_3
    :goto_0
    monitor-exit v0

    return-void
.end method

.method public static a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)V
    .locals 8

    const-string v0, "gps"

    const-string v1, ","

    :try_start_0
    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    if-nez v2, :cond_1

    invoke-static {p0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-nez v2, :cond_0

    sput-object p1, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    return-void

    :cond_0
    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object v2

    sput-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    :cond_1
    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-static {v2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-eqz v2, :cond_6

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    const/4 v3, 0x1

    if-eq v2, v3, :cond_5

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    const/16 v4, 0x9

    if-eq v2, v4, :cond_5

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getProvider()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v2

    if-nez v2, :cond_5

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    const/4 v5, 0x7

    if-eq v2, v5, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    if-eq v2, v3, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    if-eq v2, v4, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getProvider()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v0

    if-eq v0, v5, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v2

    sget-object v0, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v4

    sub-long/2addr v2, v4

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(J)J

    move-result-wide v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    const-wide/16 v4, 0x0

    cmp-long v0, v2, v4

    if-gtz v0, :cond_2

    const-wide/16 v2, 0x1

    :cond_2
    const-wide/16 v6, 0x708

    cmp-long v0, v2, v6

    if-gtz v0, :cond_5

    sget-object v0, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-static {v0, p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result v0

    long-to-float v2, v2

    div-float v2, v0, v2

    const v3, 0x46ea6000    # 30000.0f

    cmpl-float v0, v0, v3

    if-lez v0, :cond_5

    const/high16 v0, 0x447a0000    # 1000.0f

    cmpl-float v0, v2, v0

    if-lez v0, :cond_5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const-string p0, "yyyyMMdd_HH:mm:ss:SS"

    cmp-long v6, v2, v4

    if-eqz v6, :cond_3

    :try_start_1
    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v2

    invoke-static {v2, v3, p0}, Lcom/loc/fz;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_0

    :cond_3
    sget-object v2, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    :goto_0
    const-string v2, "#"

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(F)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLocationType()I

    move-result v2

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v1

    cmp-long v3, v1, v4

    if-eqz v3, :cond_4

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v1

    invoke-static {v1, v2, p0}, Lcom/loc/fz;->a(JLjava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    goto :goto_1

    :cond_4
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v1

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    :goto_1
    const-string p0, "bigshiftstatistics"

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p0, v1}, Lcom/loc/fx;->a(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->length()I

    move-result v1

    invoke-virtual {v0, p0, v1}, Ljava/lang/StringBuilder;->delete(II)Ljava/lang/StringBuilder;

    :cond_5
    sput-object p1, Lcom/loc/fx;->g:Lcom/amap/api/location/AMapLocation;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :catchall_0
    :cond_6
    return-void
.end method

.method public static a(Ljava/lang/String;I)V
    .locals 1

    invoke-static {p1}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-static {p1}, Lcom/loc/fx;->a(I)Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, v0, p1}, Lcom/loc/fx;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    :try_start_0
    invoke-static {}, Lcom/loc/fr;->c()Lcom/loc/w;

    move-result-object v0

    invoke-static {v0, p1, p0}, Lcom/loc/av;->b(Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string v0, "reportLog"

    invoke-static {p0, p1, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    :try_start_0
    invoke-static {}, Lcom/loc/fr;->c()Lcom/loc/w;

    move-result-object v0

    const-string v1, "/mobile/binary"

    invoke-static {v0, v1, p2, p0, p1}, Lcom/loc/av;->a(Lcom/loc/w;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method public static a(Ljava/lang/String;Ljava/lang/Throwable;)V
    .locals 1

    :try_start_0
    instance-of v0, p1, Lcom/loc/k;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/loc/fr;->c()Lcom/loc/w;

    move-result-object v0

    check-cast p1, Lcom/loc/k;

    invoke-static {v0, p0, p1}, Lcom/loc/av;->a(Lcom/loc/w;Ljava/lang/String;Lcom/loc/k;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private static a(Lcom/amap/api/location/AMapLocation;)Z
    .locals 7

    invoke-static {p0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v3

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v5

    invoke-static {v3, v4, v5, v6}, Lcom/loc/fr;->a(DD)Z

    move-result p0

    if-eqz p0, :cond_0

    return v2

    :cond_0
    return v1

    :cond_1
    sget-object p0, Lcom/loc/fr;->c:Ljava/lang/String;

    const-string v0, "http://abroad.apilocate.amap.com/mobile/binary"

    invoke-virtual {v0, p0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_2

    return v1

    :cond_2
    return v2
.end method

.method public static b(Landroid/content/Context;JZ)V
    .locals 1

    if-eqz p0, :cond_1

    :try_start_0
    invoke-static {}, Lcom/loc/fq;->a()Z

    move-result v0

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "O024"

    invoke-static {p0, p1, p2, p3, v0}, Lcom/loc/fx;->a(Landroid/content/Context;JZLjava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p0

    const-string p1, "ReportUtil"

    const-string p2, "reportCoarseLocUseTime"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method private static f(Landroid/content/Context;)V
    .locals 3

    :try_start_0
    sget-object v0, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    invoke-virtual {v0}, Lorg/json/JSONArray;->length()I

    move-result v0

    if-lez v0, :cond_0

    invoke-static {}, Lcom/loc/fr;->c()Lcom/loc/w;

    move-result-object v0

    new-instance v1, Lcom/loc/bx;

    sget-object v2, Lcom/loc/fx;->j:Lorg/json/JSONArray;

    invoke-virtual {v2}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-direct {v1, p0, v0, v2}, Lcom/loc/bx;-><init>(Landroid/content/Context;Lcom/loc/w;Ljava/lang/String;)V

    invoke-static {v1, p0}, Lcom/loc/by;->a(Lcom/loc/bx;Landroid/content/Context;)V

    const/4 p0, 0x0

    sput-object p0, Lcom/loc/fx;->j:Lorg/json/JSONArray;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p0

    const-string v0, "ReportUtil"

    const-string v1, "writeOfflineLocLog"

    invoke-static {p0, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a(Landroid/content/Context;I)V
    .locals 8

    :try_start_0
    iget v0, p0, Lcom/loc/fx;->b:I

    if-ne v0, p2, :cond_0

    return-void

    :cond_0
    iget v0, p0, Lcom/loc/fx;->b:I

    const/4 v1, -0x1

    const-wide/16 v2, 0x0

    if-eq v0, v1, :cond_1

    iget v0, p0, Lcom/loc/fx;->b:I

    if-eq v0, p2, :cond_1

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-wide v4, p0, Lcom/loc/fx;->c:J

    sub-long/2addr v0, v4

    iget-object v4, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v5, p0, Lcom/loc/fx;->b:I

    invoke-static {v2, v3}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v6

    invoke-virtual {v4, v5, v6}, Landroid/util/SparseArray;->get(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    iget-object v6, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v7, p0, Lcom/loc/fx;->b:I

    add-long/2addr v0, v4

    invoke-static {v0, v1}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v6, v7, v0}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    :cond_1
    const-string v0, "pref1"

    iget-object v1, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    aget-object v1, v1, p2

    invoke-static {p1, v0, v1, v2, v3}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v0

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v2

    sub-long/2addr v2, v0

    iput-wide v2, p0, Lcom/loc/fx;->c:J

    iput p2, p0, Lcom/loc/fx;->b:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string p2, "ReportUtil"

    const-string v0, "setLocationType"

    invoke-static {p1, p2, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Landroid/content/Context;Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 9

    :try_start_0
    sget-object v0, Lcom/loc/fx$1;->a:[I

    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object p2

    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->ordinal()I

    move-result p2

    aget p2, v0, p2

    const/4 v0, 0x1

    const/4 v1, 0x3

    const/4 v2, -0x1

    if-eq p2, v0, :cond_1

    const/4 v0, 0x2

    if-eq p2, v0, :cond_0

    if-eq p2, v1, :cond_2

    const/4 v1, -0x1

    goto :goto_0

    :cond_0
    const/4 v1, 0x5

    goto :goto_0

    :cond_1
    const/4 v1, 0x4

    :cond_2
    :goto_0
    iget p2, p0, Lcom/loc/fx;->e:I

    if-ne p2, v1, :cond_3

    return-void

    :cond_3
    iget p2, p0, Lcom/loc/fx;->e:I

    const-wide/16 v3, 0x0

    if-eq p2, v2, :cond_4

    iget p2, p0, Lcom/loc/fx;->e:I

    if-eq p2, v1, :cond_4

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v5

    iget-wide v7, p0, Lcom/loc/fx;->f:J

    sub-long/2addr v5, v7

    iget-object p2, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v0, p0, Lcom/loc/fx;->e:I

    invoke-static {v3, v4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {p2, v0, v2}, Landroid/util/SparseArray;->get(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Ljava/lang/Long;

    invoke-virtual {p2}, Ljava/lang/Long;->longValue()J

    move-result-wide v7

    iget-object p2, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v0, p0, Lcom/loc/fx;->e:I

    add-long/2addr v5, v7

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v2

    invoke-virtual {p2, v0, v2}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    :cond_4
    const-string p2, "pref1"

    iget-object v0, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    aget-object v0, v0, v1

    invoke-static {p1, p2, v0, v3, v4}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide p1

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v2

    sub-long/2addr v2, p1

    iput-wide v2, p0, Lcom/loc/fx;->f:J

    iput v1, p0, Lcom/loc/fx;->e:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string p2, "ReportUtil"

    const-string v0, "setLocationMode"

    invoke-static {p1, p2, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final b(Landroid/content/Context;)V
    .locals 10

    const-string v0, "pref1"

    :try_start_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/fx;->c:J

    sub-long/2addr v1, v3

    iget v3, p0, Lcom/loc/fx;->b:I

    const/4 v4, -0x1

    const-wide/16 v5, 0x0

    if-eq v3, v4, :cond_0

    iget-object v3, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v7, p0, Lcom/loc/fx;->b:I

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v8

    invoke-virtual {v3, v7, v8}, Landroid/util/SparseArray;->get(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v7

    iget-object v3, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v9, p0, Lcom/loc/fx;->b:I

    add-long/2addr v1, v7

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v3, v9, v1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v1

    iget-wide v7, p0, Lcom/loc/fx;->f:J

    sub-long/2addr v1, v7

    iget v3, p0, Lcom/loc/fx;->e:I

    if-eq v3, v4, :cond_1

    iget-object v3, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v4, p0, Lcom/loc/fx;->e:I

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v7

    invoke-virtual {v3, v4, v7}, Landroid/util/SparseArray;->get(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    iget-object v7, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    iget v8, p0, Lcom/loc/fx;->e:I

    add-long/2addr v1, v3

    invoke-static {v1, v2}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v1

    invoke-virtual {v7, v8, v1}, Landroid/util/SparseArray;->append(ILjava/lang/Object;)V

    :cond_1
    invoke-static {p1, v0}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v1

    const/4 v2, 0x0

    :goto_0
    iget-object v3, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    array-length v3, v3

    if-ge v2, v3, :cond_3

    iget-object v3, p0, Lcom/loc/fx;->a:Landroid/util/SparseArray;

    invoke-static {v5, v6}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object v4

    invoke-virtual {v3, v2, v4}, Landroid/util/SparseArray;->get(ILjava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Long;

    invoke-virtual {v3}, Ljava/lang/Long;->longValue()J

    move-result-wide v3

    cmp-long v7, v3, v5

    if-lez v7, :cond_2

    iget-object v7, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    aget-object v7, v7, v2

    invoke-static {p1, v0, v7, v5, v6}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v7

    cmp-long v9, v3, v7

    if-lez v9, :cond_2

    iget-object v7, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    aget-object v7, v7, v2

    invoke-static {v1, v7, v3, v4}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    :cond_2
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    :cond_3
    invoke-static {v1}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string v0, "ReportUtil"

    const-string v1, "saveLocationTypeAndMode"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c(Landroid/content/Context;)I
    .locals 14

    const-string v0, "pref1"

    const/4 v1, -0x1

    :try_start_0
    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v3, 0x2

    aget-object v2, v2, v3

    const-wide/16 v4, 0x0

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v6

    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v8, 0x0

    aget-object v2, v2, v8

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v9

    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v11, 0x1

    aget-object v2, v2, v11

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v12
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmp-long p1, v6, v4

    if-nez p1, :cond_0

    cmp-long p1, v9, v4

    if-nez p1, :cond_0

    cmp-long p1, v12, v4

    if-nez p1, :cond_0

    return v1

    :cond_0
    sub-long/2addr v9, v6

    sub-long/2addr v12, v6

    cmp-long p1, v6, v9

    if-lez p1, :cond_2

    cmp-long p1, v6, v12

    if-lez p1, :cond_1

    return v3

    :cond_1
    return v11

    :cond_2
    cmp-long p1, v9, v12

    if-lez p1, :cond_3

    return v8

    :cond_3
    return v11

    :catchall_0
    return v1
.end method

.method public final d(Landroid/content/Context;)I
    .locals 14

    const-string v0, "pref1"

    const/4 v1, -0x1

    :try_start_0
    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v3, 0x3

    aget-object v2, v2, v3

    const-wide/16 v4, 0x0

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v6

    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v8, 0x4

    aget-object v2, v2, v8

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v9

    iget-object v2, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    const/4 v11, 0x5

    aget-object v2, v2, v11

    invoke-static {p1, v0, v2, v4, v5}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v12
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    cmp-long p1, v6, v4

    if-nez p1, :cond_0

    cmp-long p1, v9, v4

    if-nez p1, :cond_0

    cmp-long p1, v12, v4

    if-nez p1, :cond_0

    return v1

    :cond_0
    cmp-long p1, v6, v9

    if-lez p1, :cond_2

    cmp-long p1, v6, v12

    if-lez p1, :cond_1

    return v3

    :cond_1
    return v11

    :cond_2
    cmp-long p1, v9, v12

    if-lez p1, :cond_3

    return v8

    :cond_3
    return v11

    :catchall_0
    return v1
.end method

.method public final e(Landroid/content/Context;)V
    .locals 4

    :try_start_0
    const-string v0, "pref1"

    invoke-static {p1, v0}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object p1

    const/4 v0, 0x0

    :goto_0
    iget-object v1, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    array-length v1, v1

    if-ge v0, v1, :cond_0

    iget-object v1, p0, Lcom/loc/fx;->d:[Ljava/lang/String;

    aget-object v1, v1, v0

    const-wide/16 v2, 0x0

    invoke-static {p1, v1, v2, v3}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :cond_0
    invoke-static {p1}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method
