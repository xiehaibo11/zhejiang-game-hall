.class public final Lcom/loc/h;
.super Ljava/lang/Object;
.source "GpsLocation.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/h$a;
    }
.end annotation


# static fields
.field static j:Lcom/amap/api/location/AMapLocation;

.field static k:J

.field static l:Ljava/lang/Object;

.field static q:J

.field static t:Z

.field static u:Z

.field public static volatile y:Lcom/amap/api/location/AMapLocation;


# instance fields
.field private A:J

.field private B:I

.field private C:I

.field private D:Landroid/location/GpsStatus;

.field private E:Landroid/location/GpsStatus$Listener;

.field private F:Landroid/location/GnssStatus$Callback;

.field private G:Ljava/lang/String;

.field private H:Z

.field private I:I

.field private J:Z

.field a:Landroid/os/Handler;

.field b:Landroid/location/LocationManager;

.field c:Lcom/amap/api/location/AMapLocationClientOption;

.field d:J

.field e:Z

.field f:Lcom/loc/ev;

.field g:I

.field h:I

.field i:Lcom/amap/api/location/AMapLocation;

.field m:J

.field n:F

.field o:Ljava/lang/Object;

.field p:Ljava/lang/Object;

.field r:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

.field s:Z

.field v:J

.field w:I

.field x:Landroid/location/LocationListener;

.field private z:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    sput-object v0, Lcom/loc/h;->l:Ljava/lang/Object;

    const-wide/16 v0, 0x0

    sput-wide v0, Lcom/loc/h;->q:J

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/h;->t:Z

    sput-boolean v0, Lcom/loc/h;->u:Z

    const/4 v0, 0x0

    sput-object v0, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/os/Handler;)V
    .locals 5

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/h;->A:J

    iput-wide v0, p0, Lcom/loc/h;->d:J

    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/loc/h;->e:Z

    iput v2, p0, Lcom/loc/h;->B:I

    const/4 v3, 0x0

    iput-object v3, p0, Lcom/loc/h;->f:Lcom/loc/ev;

    const/16 v4, 0xf0

    iput v4, p0, Lcom/loc/h;->g:I

    const/16 v4, 0x50

    iput v4, p0, Lcom/loc/h;->h:I

    iput-object v3, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    iput-wide v0, p0, Lcom/loc/h;->m:J

    const/4 v4, 0x0

    iput v4, p0, Lcom/loc/h;->n:F

    new-instance v4, Ljava/lang/Object;

    invoke-direct {v4}, Ljava/lang/Object;-><init>()V

    iput-object v4, p0, Lcom/loc/h;->o:Ljava/lang/Object;

    new-instance v4, Ljava/lang/Object;

    invoke-direct {v4}, Ljava/lang/Object;-><init>()V

    iput-object v4, p0, Lcom/loc/h;->p:Ljava/lang/Object;

    iput v2, p0, Lcom/loc/h;->C:I

    iput-object v3, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    iput-object v3, p0, Lcom/loc/h;->E:Landroid/location/GpsStatus$Listener;

    sget-object v4, Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;->DEFAULT:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    iput-object v4, p0, Lcom/loc/h;->r:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    const/4 v4, 0x1

    iput-boolean v4, p0, Lcom/loc/h;->s:Z

    iput-wide v0, p0, Lcom/loc/h;->v:J

    iput v2, p0, Lcom/loc/h;->w:I

    iput-object v3, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    iput-object v3, p0, Lcom/loc/h;->G:Ljava/lang/String;

    iput-boolean v2, p0, Lcom/loc/h;->H:Z

    iput v2, p0, Lcom/loc/h;->I:I

    iput-boolean v2, p0, Lcom/loc/h;->J:Z

    iput-object p1, p0, Lcom/loc/h;->z:Landroid/content/Context;

    iput-object p2, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    :try_start_0
    const-string p2, "location"

    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string p2, "GpsLocation"

    const-string v0, "<init>"

    invoke-static {p1, p2, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    new-instance p1, Lcom/loc/ev;

    invoke-direct {p1}, Lcom/loc/ev;-><init>()V

    iput-object p1, p0, Lcom/loc/h;->f:Lcom/loc/ev;

    return-void
.end method

.method static synthetic a(Lcom/loc/h;Landroid/location/GpsStatus;)Landroid/location/GpsStatus;
    .locals 0

    iput-object p1, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    return-object p1
.end method

.method private a(I)V
    .locals 2

    if-nez p1, :cond_0

    const-wide/16 v0, 0x0

    :try_start_0
    iput-wide v0, p0, Lcom/loc/h;->d:J

    const/4 p1, 0x0

    iput p1, p0, Lcom/loc/h;->C:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_0
    return-void
.end method

.method private a(IILjava/lang/String;J)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object v0

    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    if-ne v0, v1, :cond_0

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    new-instance v1, Lcom/amap/api/location/AMapLocation;

    const-string v2, ""

    invoke-direct {v1, v2}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    const-string v2, "gps"

    invoke-virtual {v1, v2}, Lcom/amap/api/location/AMapLocation;->setProvider(Ljava/lang/String;)V

    invoke-virtual {v1, p2}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    invoke-virtual {v1, p3}, Lcom/amap/api/location/AMapLocation;->setLocationDetail(Ljava/lang/String;)V

    const/4 p2, 0x1

    invoke-virtual {v1, p2}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    iput p1, v0, Landroid/os/Message;->what:I

    iget-object p1, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0, p4, p5}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private a(Landroid/location/GnssStatus;)V
    .locals 4

    const/4 v0, 0x0

    if-eqz p1, :cond_2

    :try_start_0
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x18

    if-lt v1, v2, :cond_2

    invoke-virtual {p1}, Landroid/location/GnssStatus;->getSatelliteCount()I

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v2, 0x0

    :goto_0
    if-ge v0, v1, :cond_1

    :try_start_1
    invoke-virtual {p1, v0}, Landroid/location/GnssStatus;->usedInFix(I)Z

    move-result v3
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v3, :cond_0

    add-int/lit8 v2, v2, 0x1

    :cond_0
    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catchall_0
    move-exception p1

    move v0, v2

    goto :goto_1

    :cond_1
    move v0, v2

    goto :goto_2

    :catchall_1
    move-exception p1

    :goto_1
    const-string v1, "GpsLocation_Gnss"

    const-string v2, "GPS_EVENT_SATELLITE_STATUS"

    invoke-static {p1, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_2
    iput v0, p0, Lcom/loc/h;->C:I

    return-void
.end method

.method private a(Landroid/location/Location;)V
    .locals 9

    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/16 v1, 0x8

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    :cond_0
    if-nez p1, :cond_1

    return-void

    :cond_1
    :try_start_0
    new-instance v0, Lcom/amap/api/location/AMapLocation;

    invoke-direct {v0, p1}, Lcom/amap/api/location/AMapLocation;-><init>(Landroid/location/Location;)V

    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v1

    if-nez v1, :cond_2

    return-void

    :cond_2
    const-string v1, "gps"

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setProvider(Ljava/lang/String;)V

    const/4 v1, 0x1

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    iget-boolean v2, p0, Lcom/loc/h;->e:Z

    if-nez v2, :cond_3

    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-eqz v2, :cond_3

    iget-object v2, p0, Lcom/loc/h;->z:Landroid/content/Context;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/loc/h;->A:J

    sub-long/2addr v3, v5

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v5

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v7

    invoke-static {v5, v6, v7, v8}, Lcom/loc/fr;->a(DD)Z

    move-result v5

    invoke-static {v2, v3, v4, v5}, Lcom/loc/fx;->a(Landroid/content/Context;JZ)V

    iput-boolean v1, p0, Lcom/loc/h;->e:Z

    :cond_3
    iget v2, p0, Lcom/loc/h;->C:I

    invoke-static {v0, v2}, Lcom/loc/fz;->a(Landroid/location/Location;I)Z

    move-result v2

    const/4 v3, 0x0

    const/4 v4, 0x0

    if-eqz v2, :cond_5

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setMock(Z)V

    const/4 v2, 0x4

    invoke-virtual {v0, v2}, Lcom/amap/api/location/AMapLocation;->setTrustedLevel(I)V

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->isMockEnable()Z

    move-result v2

    if-nez v2, :cond_6

    iget p1, p0, Lcom/loc/h;->w:I

    const/4 v2, 0x3

    if-le p1, v2, :cond_4

    const/16 p1, 0x868

    invoke-static {v3, p1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    const/16 p1, 0xf

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    const-string p1, "GpsLocation has been mocked!#1501"

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setLocationDetail(Ljava/lang/String;)V

    const-wide/16 v1, 0x0

    invoke-virtual {v0, v1, v2}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {v0, v1, v2}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    invoke-virtual {v0, v1, v2}, Lcom/amap/api/location/AMapLocation;->setAltitude(D)V

    const/4 p1, 0x0

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setBearing(F)V

    invoke-virtual {v0, v3}, Lcom/amap/api/location/AMapLocation;->setExtras(Landroid/os/Bundle;)V

    invoke-direct {p0, v0}, Lcom/loc/h;->c(Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_4
    iget p1, p0, Lcom/loc/h;->w:I

    add-int/2addr p1, v1

    iput p1, p0, Lcom/loc/h;->w:I

    return-void

    :cond_5
    iput v4, p0, Lcom/loc/h;->w:I

    :cond_6
    iget v1, p0, Lcom/loc/h;->C:I

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setSatellites(I)V

    invoke-direct {p0, v0}, Lcom/loc/h;->e(Lcom/amap/api/location/AMapLocation;)V

    invoke-direct {p0, v0}, Lcom/loc/h;->f(Lcom/amap/api/location/AMapLocation;)V

    invoke-static {v0}, Lcom/loc/h;->h(Lcom/amap/api/location/AMapLocation;)V

    invoke-direct {p0, v0}, Lcom/loc/h;->g(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/loc/h;->a(Lcom/amap/api/location/AMapLocation;)V

    invoke-direct {p0, v0}, Lcom/loc/h;->b(Lcom/amap/api/location/AMapLocation;)V

    iget-object v1, p0, Lcom/loc/h;->o:Ljava/lang/Object;

    monitor-enter v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    :try_start_1
    sget-object v2, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    invoke-direct {p0, v0, v2}, Lcom/loc/h;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)V

    monitor-exit v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_2

    :try_start_2
    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v1

    if-eqz v1, :cond_8

    iget-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    if-eqz v1, :cond_7

    invoke-virtual {p1}, Landroid/location/Location;->getTime()J

    move-result-wide v1

    iget-object p1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v5

    sub-long/2addr v1, v5

    iput-wide v1, p0, Lcom/loc/h;->m:J

    iget-object p1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-static {p1, v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result p1

    iput p1, p0, Lcom/loc/h;->n:F

    :cond_7
    iget-object p1, p0, Lcom/loc/h;->p:Ljava/lang/Object;

    monitor-enter p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    monitor-exit p1
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_0

    :try_start_4
    iput-object v3, p0, Lcom/loc/h;->G:Ljava/lang/String;

    iput-boolean v4, p0, Lcom/loc/h;->H:Z

    iput v4, p0, Lcom/loc/h;->I:I
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_5
    monitor-exit p1
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_0

    :try_start_6
    throw v1
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_1

    :catchall_1
    move-exception p1

    :try_start_7
    const-string v1, "GpsLocation"

    const-string v2, "onLocationChangedLast"

    invoke-static {p1, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    :goto_0
    invoke-direct {p0, v0}, Lcom/loc/h;->c(Lcom/amap/api/location/AMapLocation;)V
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    return-void

    :catchall_2
    move-exception p1

    :try_start_8
    monitor-exit v1
    :try_end_8
    .catchall {:try_start_8 .. :try_end_8} :catchall_2

    :try_start_9
    throw p1
    :try_end_9
    .catchall {:try_start_9 .. :try_end_9} :catchall_3

    :catchall_3
    move-exception p1

    const-string v0, "GpsLocation"

    const-string v1, "onLocationChanged"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/amap/api/location/AMapLocation;)V
    .locals 3

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/h;->d:J

    sget-object v0, Lcom/loc/h;->l:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v1

    sput-wide v1, Lcom/loc/h;->k:J

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    sput-object p1, Lcom/loc/h;->j:Lcom/amap/api/location/AMapLocation;

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iget p1, p0, Lcom/loc/h;->B:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/loc/h;->B:I

    return-void

    :catchall_0
    move-exception p1

    :try_start_1
    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw p1
.end method

.method private a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)V
    .locals 2

    if-eqz p2, :cond_0

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->isNeedAddress()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1, p2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result v0

    iget v1, p0, Lcom/loc/h;->g:I

    int-to-float v1, v1

    cmpg-float v0, v0, v1

    if-gez v0, :cond_0

    invoke-static {p1, p2}, Lcom/loc/fr;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/loc/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/h;->k()V

    return-void
.end method

.method static synthetic a(Lcom/loc/h;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/h;->a(I)V

    return-void
.end method

.method static synthetic a(Lcom/loc/h;Landroid/location/GnssStatus;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/h;->a(Landroid/location/GnssStatus;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/h;Landroid/location/Location;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/h;->a(Landroid/location/Location;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/h;Ljava/lang/String;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/h;->a(Ljava/lang/String;)V

    return-void
.end method

.method private a(Ljava/lang/String;)V
    .locals 2

    :try_start_0
    const-string v0, "gps"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/h;->d:J

    const/4 p1, 0x0

    iput p1, p0, Lcom/loc/h;->C:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_0
    return-void
.end method

.method private static a(Landroid/location/LocationManager;)Z
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    sget-boolean v1, Lcom/loc/h;->t:Z

    if-eqz v1, :cond_0

    sget-boolean p0, Lcom/loc/h;->u:Z

    return p0

    :cond_0
    invoke-virtual {p0}, Landroid/location/LocationManager;->getAllProviders()Ljava/util/List;

    move-result-object p0

    if-eqz p0, :cond_1

    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v1

    if-lez v1, :cond_1

    const-string v1, "gps"

    invoke-interface {p0, v1}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result p0

    sput-boolean p0, Lcom/loc/h;->u:Z

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    sput-boolean p0, Lcom/loc/h;->u:Z

    :goto_0
    sput-boolean v0, Lcom/loc/h;->t:Z

    sget-boolean p0, Lcom/loc/h;->u:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    sget-boolean p0, Lcom/loc/h;->u:Z

    return p0
.end method

.method static synthetic b(Lcom/loc/h;)Landroid/location/GpsStatus;
    .locals 0

    iget-object p0, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    return-object p0
.end method

.method private b(Lcom/amap/api/location/AMapLocation;)V
    .locals 7

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz v0, :cond_4

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v2

    const-wide/16 v4, 0x1f40

    cmp-long v6, v2, v4

    if-lez v6, :cond_1

    iget-wide v2, p0, Lcom/loc/h;->v:J

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v2

    sub-long/2addr v2, v4

    cmp-long v4, v0, v2

    if-lez v4, :cond_4

    :cond_1
    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v1

    const-string v3, "lat"

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Bundle;->putDouble(Ljava/lang/String;D)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v1

    const-string v3, "lon"

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Bundle;->putDouble(Ljava/lang/String;D)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v1

    const-string v2, "radius"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putFloat(Ljava/lang/String;F)V

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v1

    const-string v3, "time"

    invoke-virtual {v0, v3, v1, v2}, Landroid/os/Bundle;->putLong(Ljava/lang/String;J)V

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v1

    invoke-virtual {v1, v0}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    const/4 v0, 0x5

    iput v0, v1, Landroid/os/Message;->what:I

    iget-object v0, p0, Lcom/loc/h;->o:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    sget-object v2, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    if-nez v2, :cond_2

    iget-object p1, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    :goto_0
    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_1

    :cond_2
    sget-object v2, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    invoke-static {p1, v2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result p1

    iget v2, p0, Lcom/loc/h;->h:I

    int-to-float v2, v2

    cmpl-float p1, p1, v2

    if-lez p1, :cond_3

    iget-object p1, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    goto :goto_0

    :cond_3
    :goto_1
    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p1

    :cond_4
    return-void
.end method

.method private b(Ljava/lang/String;)Z
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    invoke-static {p1}, Lcom/loc/fz;->b(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/h;->G:Ljava/lang/String;

    invoke-static {v2}, Lcom/loc/fz;->b(Ljava/lang/String;)Ljava/util/ArrayList;

    move-result-object v2

    invoke-virtual {v1}, Ljava/util/ArrayList;->size()I

    move-result v1

    const/16 v3, 0x8

    if-lt v1, v3, :cond_0

    invoke-virtual {v2}, Ljava/util/ArrayList;->size()I

    move-result v1

    if-lt v1, v3, :cond_0

    iget-object v1, p0, Lcom/loc/h;->G:Ljava/lang/String;

    invoke-static {v1, p1}, Lcom/loc/fz;->a(Ljava/lang/String;Ljava/lang/String;)Z

    move-result p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    move v0, p1

    :catchall_0
    :cond_0
    return v0
.end method

.method private c(Lcom/amap/api/location/AMapLocation;)V
    .locals 6

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getErrorCode()I

    move-result v0

    const/16 v1, 0xf

    if-ne v0, v1, :cond_0

    sget-object v0, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    iget-object v1, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object v0

    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v0

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-lez v0, :cond_1

    invoke-direct {p0, p1}, Lcom/loc/h;->d(Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_1
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/loc/h;->v:J

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v2

    const-wide/16 v4, 0xc8

    sub-long/2addr v2, v4

    cmp-long v4, v0, v2

    if-ltz v4, :cond_2

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/h;->v:J

    invoke-direct {p0, p1}, Lcom/loc/h;->d(Lcom/amap/api/location/AMapLocation;)V

    :cond_2
    return-void
.end method

.method static synthetic c(Lcom/loc/h;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/h;->m()V

    return-void
.end method

.method private d(Lcom/amap/api/location/AMapLocation;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/4 p1, 0x2

    iput p1, v0, Landroid/os/Message;->what:I

    iget-object p1, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method private e(Lcom/amap/api/location/AMapLocation;)V
    .locals 8

    const-string v0, "WGS84"

    const/4 v1, 0x0

    :try_start_0
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v2

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v4

    invoke-static {v2, v3, v4, v5}, Lcom/loc/fr;->a(DD)Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/loc/h;->z:Landroid/content/Context;

    new-instance v3, Lcom/amap/api/location/DPoint;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v4

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v6

    invoke-direct {v3, v4, v5, v6, v7}, Lcom/amap/api/location/DPoint;-><init>(DD)V

    invoke-static {v2, v3}, Lcom/loc/fu;->a(Landroid/content/Context;Lcom/amap/api/location/DPoint;)Lcom/amap/api/location/DPoint;

    move-result-object v2

    invoke-virtual {v2}, Lcom/amap/api/location/DPoint;->getLatitude()D

    move-result-wide v3

    invoke-virtual {p1, v3, v4}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {v2}, Lcom/amap/api/location/DPoint;->getLongitude()D

    move-result-wide v2

    invoke-virtual {p1, v2, v3}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v2

    invoke-virtual {p1, v2}, Lcom/amap/api/location/AMapLocation;->setOffset(Z)V

    const-string v2, "GCJ02"

    invoke-virtual {p1, v2}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    return-void

    :cond_0
    invoke-virtual {p1, v1}, Lcom/amap/api/location/AMapLocation;->setOffset(Z)V

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    invoke-virtual {p1, v1}, Lcom/amap/api/location/AMapLocation;->setOffset(Z)V

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    return-void
.end method

.method private f(Lcom/amap/api/location/AMapLocation;)V
    .locals 2

    :try_start_0
    iget v0, p0, Lcom/loc/h;->C:I

    const/4 v1, 0x4

    if-lt v0, v1, :cond_0

    const/4 v0, 0x1

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setGpsAccuracyStatus(I)V

    return-void

    :cond_0
    iget v0, p0, Lcom/loc/h;->C:I

    if-nez v0, :cond_1

    const/4 v0, -0x1

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setGpsAccuracyStatus(I)V

    return-void

    :cond_1
    const/4 v0, 0x0

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setGpsAccuracyStatus(I)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private g(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;
    .locals 3

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    :cond_0
    iget v0, p0, Lcom/loc/h;->B:I

    const/4 v1, 0x3

    if-ge v0, v1, :cond_1

    return-object p1

    :cond_1
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v0

    const v1, 0x7f7fffff    # Float.MAX_VALUE

    const/4 v2, 0x0

    cmpg-float v0, v0, v2

    if-ltz v0, :cond_2

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v0

    cmpl-float v0, v0, v1

    if-nez v0, :cond_3

    :cond_2
    invoke-virtual {p1, v2}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    :cond_3
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getSpeed()F

    move-result v0

    cmpg-float v0, v0, v2

    if-ltz v0, :cond_4

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getSpeed()F

    move-result v0

    cmpl-float v0, v0, v1

    if-nez v0, :cond_5

    :cond_4
    invoke-virtual {p1, v2}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V

    :cond_5
    iget-object v0, p0, Lcom/loc/h;->f:Lcom/loc/ev;

    invoke-virtual {v0, p1}, Lcom/loc/ev;->a(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    return-object p1
.end method

.method static synthetic g()V
    .locals 0

    invoke-static {}, Lcom/loc/h;->j()V

    return-void
.end method

.method static synthetic h()V
    .locals 0

    invoke-static {}, Lcom/loc/h;->l()V

    return-void
.end method

.method private static h(Lcom/amap/api/location/AMapLocation;)V
    .locals 7

    invoke-static {p0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/loc/fq;->s()Z

    move-result v0

    if-eqz v0, :cond_1

    invoke-virtual {p0}, Lcom/amap/api/location/AMapLocation;->getTime()J

    move-result-wide v0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-static {}, Lcom/loc/fq;->t()I

    move-result v4

    invoke-static {v0, v1, v2, v3, v4}, Lcom/loc/fs;->a(JJI)J

    move-result-wide v4

    cmp-long v6, v4, v0

    if-eqz v6, :cond_1

    invoke-virtual {p0, v4, v5}, Lcom/amap/api/location/AMapLocation;->setTime(J)V

    invoke-static {v0, v1, v2, v3}, Lcom/loc/fx;->a(JJ)V

    :cond_1
    return-void
.end method

.method private i()V
    .locals 10

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v0, 0x0

    const/4 v1, 0x1

    :try_start_0
    invoke-direct {p0}, Lcom/loc/h;->n()V

    iput-boolean v1, p0, Lcom/loc/h;->s:Z

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v2

    if-nez v2, :cond_1

    iget-object v2, p0, Lcom/loc/h;->z:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getMainLooper()Landroid/os/Looper;

    move-result-object v2

    :cond_1
    move-object v9, v2

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/loc/h;->A:J

    iget-object v2, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    invoke-static {v2}, Lcom/loc/h;->a(Landroid/location/LocationManager;)Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v2, :cond_7

    :try_start_1
    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v2

    sget-wide v4, Lcom/loc/h;->q:J

    sub-long/2addr v2, v4

    const-wide/32 v4, 0xf731400

    cmp-long v6, v2, v4

    if-ltz v6, :cond_3

    iget-object v2, p0, Lcom/loc/h;->z:Landroid/content/Context;

    const-string v3, "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw=="

    invoke-static {v2, v3}, Lcom/loc/fz;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    iget-object v2, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    const-string v3, "gps"

    const-string v4, "force_xtra_injection"

    invoke-virtual {v2, v3, v4, v0}, Landroid/location/LocationManager;->sendExtraCommand(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z

    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v2

    sput-wide v2, Lcom/loc/h;->q:J

    iget-object v2, p0, Lcom/loc/h;->z:Landroid/content/Context;

    const-string v3, "pref"

    invoke-static {v2, v3}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v2

    const-string v3, "lagt"

    sget-wide v4, Lcom/loc/h;->q:J

    invoke-static {v2, v3, v4, v5}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    invoke-static {v2}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;)V

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    goto :goto_0

    :cond_2
    new-instance v2, Ljava/lang/Exception;

    const-string v3, "n_alec"

    invoke-direct {v2, v3}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    const-string v3, "OPENSDK_GL"

    const-string v4, "rlu_n_alec"

    invoke-static {v2, v3, v4}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v2

    :try_start_2
    new-array v3, v1, [Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_3
    :goto_0
    iget-object v2, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    if-nez v2, :cond_4

    new-instance v2, Lcom/loc/h$a;

    invoke-direct {v2, p0}, Lcom/loc/h$a;-><init>(Lcom/loc/h;)V

    iput-object v2, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    :cond_4
    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object v2

    sget-object v3, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v2, v3}, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_5

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v2

    const/4 v3, 0x0

    cmpl-float v2, v2, v3

    if-lez v2, :cond_5

    iget-object v3, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    const-string v4, "gps"

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v5

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v7

    iget-object v8, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    :goto_1
    invoke-virtual/range {v3 .. v9}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V

    goto :goto_2

    :cond_5
    iget-object v3, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    const-string v4, "gps"

    const-wide/16 v5, 0x384

    const/4 v7, 0x0

    iget-object v8, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    goto :goto_1

    :goto_2
    sget v2, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v3, 0x18

    if-lt v2, v3, :cond_6

    new-instance v2, Lcom/loc/h$1;

    invoke-direct {v2, p0}, Lcom/loc/h$1;-><init>(Lcom/loc/h;)V

    iput-object v2, p0, Lcom/loc/h;->F:Landroid/location/GnssStatus$Callback;

    iget-object v3, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    invoke-virtual {v3, v2}, Landroid/location/LocationManager;->registerGnssStatusCallback(Landroid/location/GnssStatus$Callback;)Z

    goto :goto_3

    :cond_6
    new-instance v2, Lcom/loc/h$2;

    invoke-direct {v2, p0}, Lcom/loc/h$2;-><init>(Lcom/loc/h;)V

    iput-object v2, p0, Lcom/loc/h;->E:Landroid/location/GpsStatus$Listener;

    iget-object v3, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    invoke-virtual {v3, v2}, Landroid/location/LocationManager;->addGpsStatusListener(Landroid/location/GpsStatus$Listener;)Z

    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    :goto_3
    const/16 v4, 0x8

    const/16 v5, 0xe

    const-string v6, "no enough satellites#1401"

    iget-object v2, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getHttpTimeOut()J

    move-result-wide v7

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/loc/h;->a(IILjava/lang/String;J)V

    return-void

    :cond_7
    new-array v2, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/16 v4, 0x8

    const/16 v5, 0xe

    const-string v6, "no gps provider#1402"

    const-wide/16 v7, 0x0

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/loc/h;->a(IILjava/lang/String;J)V
    :try_end_2
    .catch Ljava/lang/SecurityException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    return-void

    :catchall_1
    move-exception v0

    new-array v1, v1, [Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    const-string v1, "GpsLocation"

    const-string v2, "requestLocationUpdates part2"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :catch_0
    move-exception v2

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/loc/h;->s:Z

    const/16 v1, 0x849

    invoke-static {v0, v1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    const/4 v4, 0x2

    const/16 v5, 0xc

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Ljava/lang/SecurityException;->getMessage()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "#1201"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    const-wide/16 v7, 0x0

    move-object v3, p0

    invoke-direct/range {v3 .. v8}, Lcom/loc/h;->a(IILjava/lang/String;J)V

    return-void
.end method

.method private static j()V
    .locals 1

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void
.end method

.method private k()V
    .locals 1

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/h;->C:I

    return-void
.end method

.method private static l()V
    .locals 1

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void
.end method

.method private m()V
    .locals 4

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    invoke-virtual {v1}, Landroid/location/GpsStatus;->getSatellites()Ljava/lang/Iterable;

    move-result-object v1

    if-eqz v1, :cond_1

    invoke-interface {v1}, Ljava/lang/Iterable;->iterator()Ljava/util/Iterator;

    move-result-object v1

    iget-object v2, p0, Lcom/loc/h;->D:Landroid/location/GpsStatus;

    invoke-virtual {v2}, Landroid/location/GpsStatus;->getMaxSatellites()I

    move-result v2

    :cond_0
    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_1

    if-ge v0, v2, :cond_1

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/location/GpsSatellite;

    invoke-virtual {v3}, Landroid/location/GpsSatellite;->usedInFix()Z

    move-result v3
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v3, :cond_0

    add-int/lit8 v0, v0, 0x1

    goto :goto_0

    :catchall_0
    move-exception v1

    const-string v2, "GpsLocation"

    const-string v3, "GPS_EVENT_SATELLITE_STATUS"

    invoke-static {v1, v2, v3}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    iput v0, p0, Lcom/loc/h;->C:I

    return-void
.end method

.method private n()V
    .locals 5

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    sget-wide v2, Lcom/loc/h;->k:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x1388

    cmp-long v4, v0, v2

    if-gtz v4, :cond_1

    sget-object v0, Lcom/loc/h;->j:Lcom/amap/api/location/AMapLocation;

    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->isMockEnable()Z

    move-result v0

    if-nez v0, :cond_0

    sget-object v0, Lcom/loc/h;->j:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->isMock()Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/h;->d:J

    sget-object v0, Lcom/loc/h;->j:Lcom/amap/api/location/AMapLocation;

    invoke-direct {p0, v0}, Lcom/loc/h;->c(Lcom/amap/api/location/AMapLocation;)V

    :cond_1
    return-void
.end method

.method private static o()Z
    .locals 3

    :try_start_0
    const-string v0, "KY29tLmFtYXAuYXBpLm5hdmkuQU1hcE5hdmk="

    invoke-static {v0}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    const-string v1, "UaXNOYXZpU3RhcnRlZA=="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const/4 v2, 0x0

    invoke-static {v0, v1, v2, v2}, Lcom/loc/fv;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    const/4 v0, 0x0

    :goto_0
    return v0
.end method

.method private p()Lcom/amap/api/location/AMapLocation;
    .locals 15

    const/4 v0, 0x0

    :try_start_0
    iget-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-static {v1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v1

    if-nez v1, :cond_0

    return-object v0

    :cond_0
    invoke-static {}, Lcom/loc/fq;->k()Z

    move-result v1

    if-nez v1, :cond_1

    return-object v0

    :cond_1
    invoke-static {}, Lcom/loc/h;->o()Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "KY29tLmFtYXAuYXBpLm5hdmkuQU1hcE5hdmk="

    invoke-static {v1}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    const-string v2, "UZ2V0TmF2aUxvY2F0aW9u"

    invoke-static {v2}, Lcom/loc/x;->c(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2, v0, v0}, Lcom/loc/fv;->a(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;[Ljava/lang/Class;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string v1, "time"

    invoke-virtual {v2, v1}, Lorg/json/JSONObject;->optLong(Ljava/lang/String;)J

    move-result-wide v3

    iget-boolean v1, p0, Lcom/loc/h;->J:Z

    if-nez v1, :cond_2

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/loc/h;->J:Z

    const-string v1, "useNaviLoc"

    const-string v5, "use NaviLoc"

    invoke-static {v1, v5}, Lcom/loc/fx;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v5

    sub-long/2addr v5, v3

    const-wide/16 v7, 0x157c

    cmp-long v1, v5, v7

    if-gtz v1, :cond_3

    const-string v1, "lat"

    const-wide/16 v5, 0x0

    invoke-virtual {v2, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v7

    const-string v1, "lng"

    invoke-virtual {v2, v1, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v9
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    const/4 v1, 0x0

    :try_start_1
    const-string v11, "accuracy"

    const-string v12, "0"

    invoke-virtual {v2, v11, v12}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v11

    invoke-static {v11}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v11
    :try_end_1
    .catch Ljava/lang/NumberFormatException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    goto :goto_0

    :catch_0
    const/4 v11, 0x0

    :goto_0
    :try_start_2
    const-string v12, "altitude"

    invoke-virtual {v2, v12, v5, v6}, Lorg/json/JSONObject;->optDouble(Ljava/lang/String;D)D

    move-result-wide v5
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :try_start_3
    const-string v12, "bearing"

    const-string v13, "0"

    invoke-virtual {v2, v12, v13}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v12

    invoke-static {v12}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v12
    :try_end_3
    .catch Ljava/lang/NumberFormatException; {:try_start_3 .. :try_end_3} :catch_1
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_1

    :catch_1
    const/4 v12, 0x0

    :goto_1
    :try_start_4
    const-string v13, "speed"

    const-string v14, "0"

    invoke-virtual {v2, v13, v14}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Ljava/lang/Float;->parseFloat(Ljava/lang/String;)F

    move-result v1
    :try_end_4
    .catch Ljava/lang/NumberFormatException; {:try_start_4 .. :try_end_4} :catch_2
    .catchall {:try_start_4 .. :try_end_4} :catchall_1

    const/high16 v2, 0x41200000    # 10.0f

    mul-float v1, v1, v2

    const/high16 v2, 0x42100000    # 36.0f

    div-float/2addr v1, v2

    :catch_2
    :try_start_5
    new-instance v2, Lcom/amap/api/location/AMapLocation;

    const-string v13, "lbs"

    invoke-direct {v2, v13}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    const/16 v13, 0x9

    invoke-virtual {v2, v13}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    invoke-virtual {v2, v7, v8}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {v2, v9, v10}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    invoke-virtual {v2, v11}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    invoke-virtual {v2, v5, v6}, Lcom/amap/api/location/AMapLocation;->setAltitude(D)V

    invoke-virtual {v2, v12}, Lcom/amap/api/location/AMapLocation;->setBearing(F)V

    invoke-virtual {v2, v1}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V

    invoke-virtual {v2, v3, v4}, Lcom/amap/api/location/AMapLocation;->setTime(J)V

    const-string v5, "GCJ02"

    invoke-virtual {v2, v5}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    iget-object v5, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-static {v2, v5}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result v5

    const/high16 v6, 0x43960000    # 300.0f

    cmpg-float v5, v5, v6

    if-gtz v5, :cond_3

    iget-object v5, p0, Lcom/loc/h;->p:Ljava/lang/Object;

    monitor-enter v5
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_1

    :try_start_6
    iget-object v6, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6, v9, v10}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    iget-object v6, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6, v7, v8}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    iget-object v6, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6, v11}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    iget-object v6, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6, v12}, Lcom/amap/api/location/AMapLocation;->setBearing(F)V

    iget-object v6, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6, v1}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V

    iget-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v1, v3, v4}, Lcom/amap/api/location/AMapLocation;->setTime(J)V

    iget-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    const-string v3, "GCJ02"

    invoke-virtual {v1, v3}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    monitor-exit v5

    return-object v2

    :catchall_0
    move-exception v1

    monitor-exit v5
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_0

    :try_start_7
    throw v1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_1

    :catchall_1
    :cond_3
    return-object v0
.end method


# virtual methods
.method public final a(Lcom/amap/api/location/AMapLocation;Ljava/lang/String;)Lcom/amap/api/location/AMapLocation;
    .locals 16

    move-object/from16 v1, p0

    move-object/from16 v0, p2

    iget-object v2, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    if-nez v2, :cond_0

    return-object p1

    :cond_0
    iget-object v2, v1, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->isMockEnable()Z

    move-result v2

    if-nez v2, :cond_1

    iget-object v2, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->isMock()Z

    move-result v2

    if-eqz v2, :cond_1

    return-object p1

    :cond_1
    iget-object v2, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-static {v2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v2

    if-nez v2, :cond_2

    return-object p1

    :cond_2
    invoke-direct/range {p0 .. p0}, Lcom/loc/h;->p()Lcom/amap/api/location/AMapLocation;

    move-result-object v2

    const/4 v3, 0x2

    if-eqz v2, :cond_3

    invoke-static {v2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v4

    if-eqz v4, :cond_3

    invoke-virtual {v2, v3}, Lcom/amap/api/location/AMapLocation;->setTrustedLevel(I)V

    return-object v2

    :cond_3
    iget-object v2, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocation;->getSpeed()F

    move-result v2

    const-wide/16 v4, 0x0

    const/4 v6, 0x0

    cmpl-float v7, v2, v6

    if-nez v7, :cond_4

    iget-wide v7, v1, Lcom/loc/h;->m:J

    cmp-long v9, v7, v4

    if-lez v9, :cond_4

    const-wide/16 v9, 0x8

    cmp-long v11, v7, v9

    if-gez v11, :cond_4

    iget v9, v1, Lcom/loc/h;->n:F

    cmpl-float v10, v9, v6

    if-lez v10, :cond_4

    long-to-float v2, v7

    div-float v2, v9, v2

    :cond_4
    const/4 v7, 0x0

    const-wide/16 v8, 0x7530

    if-eqz p1, :cond_9

    invoke-static/range {p1 .. p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v10

    if-eqz v10, :cond_9

    invoke-virtual/range {p1 .. p1}, Lcom/amap/api/location/AMapLocation;->getAccuracy()F

    move-result v10

    const/high16 v11, 0x43480000    # 200.0f

    const/high16 v12, 0x40a00000    # 5.0f

    cmpg-float v10, v10, v11

    if-gez v10, :cond_7

    iget v10, v1, Lcom/loc/h;->I:I

    const/4 v11, 0x1

    add-int/2addr v10, v11

    iput v10, v1, Lcom/loc/h;->I:I

    iget-object v13, v1, Lcom/loc/h;->G:Ljava/lang/String;

    if-nez v13, :cond_5

    if-lt v10, v3, :cond_5

    iput-boolean v11, v1, Lcom/loc/h;->H:Z

    :cond_5
    cmpl-float v2, v2, v12

    if-lez v2, :cond_6

    const-wide/16 v10, 0x2710

    goto :goto_0

    :cond_6
    const-wide/16 v10, 0x3a98

    goto :goto_0

    :cond_7
    iget-object v10, v1, Lcom/loc/h;->G:Ljava/lang/String;

    invoke-static {v10}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v10

    if-nez v10, :cond_8

    iput-boolean v7, v1, Lcom/loc/h;->H:Z

    iput v7, v1, Lcom/loc/h;->I:I

    :cond_8
    cmpl-float v2, v2, v12

    if-lez v2, :cond_9

    const-wide/16 v10, 0x4e20

    goto :goto_0

    :cond_9
    move-wide v10, v8

    :goto_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v12

    iget-wide v14, v1, Lcom/loc/h;->d:J

    sub-long/2addr v12, v14

    cmp-long v2, v12, v8

    if-lez v2, :cond_a

    return-object p1

    :cond_a
    cmp-long v2, v12, v10

    if-ltz v2, :cond_c

    iget-boolean v2, v1, Lcom/loc/h;->H:Z

    if-eqz v2, :cond_b

    invoke-direct {v1, v0}, Lcom/loc/h;->b(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_b

    iget-object v0, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object v0

    const/4 v2, 0x3

    invoke-virtual {v0, v2}, Lcom/amap/api/location/AMapLocation;->setTrustedLevel(I)V

    return-object v0

    :cond_b
    const/4 v0, 0x0

    iput-object v0, v1, Lcom/loc/h;->G:Ljava/lang/String;

    iput v7, v1, Lcom/loc/h;->I:I

    iget-object v2, v1, Lcom/loc/h;->p:Ljava/lang/Object;

    monitor-enter v2

    :try_start_0
    iput-object v0, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    monitor-exit v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    iput-wide v4, v1, Lcom/loc/h;->m:J

    iput v6, v1, Lcom/loc/h;->n:F

    return-object p1

    :catchall_0
    move-exception v0

    :try_start_1
    monitor-exit v2
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    throw v0

    :cond_c
    iget-object v2, v1, Lcom/loc/h;->G:Ljava/lang/String;

    if-nez v2, :cond_d

    iget v2, v1, Lcom/loc/h;->I:I

    if-lt v2, v3, :cond_d

    iput-object v0, v1, Lcom/loc/h;->G:Ljava/lang/String;

    :cond_d
    iget-object v0, v1, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object v0

    invoke-virtual {v0, v3}, Lcom/amap/api/location/AMapLocation;->setTrustedLevel(I)V

    return-object v0
.end method

.method public final a()V
    .locals 5

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const/4 v1, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    iget-object v0, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;

    check-cast v0, Lcom/loc/h$a;

    invoke-virtual {v0}, Lcom/loc/h$a;->a()V

    iput-object v1, p0, Lcom/loc/h;->x:Landroid/location/LocationListener;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    :cond_1
    :try_start_1
    iget-object v0, p0, Lcom/loc/h;->E:Landroid/location/GpsStatus$Listener;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    iget-object v2, p0, Lcom/loc/h;->E:Landroid/location/GpsStatus$Listener;

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->removeGpsStatusListener(Landroid/location/GpsStatus$Listener;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_2
    :try_start_2
    iget-object v0, p0, Lcom/loc/h;->F:Landroid/location/GnssStatus$Callback;

    if-eqz v0, :cond_3

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    iget-object v2, p0, Lcom/loc/h;->F:Landroid/location/GnssStatus$Callback;

    invoke-virtual {v0, v2}, Landroid/location/LocationManager;->unregisterGnssStatusCallback(Landroid/location/GnssStatus$Callback;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    :catchall_2
    :cond_3
    :try_start_3
    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz v0, :cond_4

    iget-object v0, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    const/16 v2, 0x8

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeMessages(I)V
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    :catchall_3
    :cond_4
    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/h;->C:I

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/loc/h;->A:J

    iput-wide v2, p0, Lcom/loc/h;->v:J

    iput-wide v2, p0, Lcom/loc/h;->d:J

    iput v0, p0, Lcom/loc/h;->B:I

    iput v0, p0, Lcom/loc/h;->w:I

    iget-object v4, p0, Lcom/loc/h;->f:Lcom/loc/ev;

    invoke-virtual {v4}, Lcom/loc/ev;->a()V

    iput-object v1, p0, Lcom/loc/h;->i:Lcom/amap/api/location/AMapLocation;

    iput-wide v2, p0, Lcom/loc/h;->m:J

    const/4 v2, 0x0

    iput v2, p0, Lcom/loc/h;->n:F

    iput-object v1, p0, Lcom/loc/h;->G:Ljava/lang/String;

    iput-boolean v0, p0, Lcom/loc/h;->J:Z

    return-void
.end method

.method public final a(Landroid/os/Bundle;)V
    .locals 2

    if-eqz p1, :cond_0

    :try_start_0
    const-class v0, Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v0}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    const-string v0, "I_MAX_GEO_DIS"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/loc/h;->g:I

    const-string v0, "I_MIN_GEO_DIS"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/loc/h;->h:I

    const-string v0, "loc"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    check-cast p1, Lcom/amap/api/location/AMapLocation;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/loc/h;->o:Ljava/lang/Object;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sput-object p1, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    :try_start_2
    throw p1
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :catchall_1
    move-exception p1

    const-string v0, "GpsLocation"

    const-string v1, "setLastGeoLocation"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 4

    iput-object p1, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    if-nez p1, :cond_0

    new-instance p1, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p1}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    iput-object p1, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    :cond_0
    :try_start_0
    iget-object p1, p0, Lcom/loc/h;->z:Landroid/content/Context;

    const-string v0, "pref"

    const-string v1, "lagt"

    sget-wide v2, Lcom/loc/h;->q:J

    invoke-static {p1, v0, v1, v2, v3}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v0

    sput-wide v0, Lcom/loc/h;->q:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    invoke-direct {p0}, Lcom/loc/h;->i()V

    return-void
.end method

.method public final b(Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 1

    if-nez p1, :cond_0

    new-instance p1, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p1}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    :cond_0
    iput-object p1, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object p1

    sget-object v0, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    if-eq p1, v0, :cond_1

    iget-object p1, p0, Lcom/loc/h;->a:Landroid/os/Handler;

    if-eqz p1, :cond_1

    const/16 v0, 0x8

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    :cond_1
    iget-object p1, p0, Lcom/loc/h;->r:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v0

    if-eq p1, v0, :cond_2

    iget-object p1, p0, Lcom/loc/h;->o:Ljava/lang/Object;

    monitor-enter p1

    const/4 v0, 0x0

    :try_start_0
    sput-object v0, Lcom/loc/h;->y:Lcom/amap/api/location/AMapLocation;

    monitor-exit p1

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    :cond_2
    :goto_0
    iget-object p1, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/h;->r:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    return-void
.end method

.method public final b()Z
    .locals 5

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/loc/h;->d:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0xaf0

    cmp-long v4, v0, v2

    if-lez v4, :cond_0

    const/4 v0, 0x0

    return v0

    :cond_0
    const/4 v0, 0x1

    return v0
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/h;->w:I

    return-void
.end method

.method public final d()I
    .locals 4

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {v0}, Lcom/loc/h;->a(Landroid/location/LocationManager;)Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-ge v0, v1, :cond_2

    iget-object v0, p0, Lcom/loc/h;->b:Landroid/location/LocationManager;

    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    return v3

    :cond_2
    iget-object v0, p0, Lcom/loc/h;->z:Landroid/content/Context;

    invoke-virtual {v0}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v0

    const-string v1, "location_mode"

    invoke-static {v0, v1, v2}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0

    if-nez v0, :cond_3

    return v3

    :cond_3
    if-ne v0, v3, :cond_4

    const/4 v0, 0x3

    return v0

    :cond_4
    iget-boolean v0, p0, Lcom/loc/h;->s:Z

    if-nez v0, :cond_5

    const/4 v0, 0x4

    return v0

    :cond_5
    return v2
.end method

.method public final e()I
    .locals 1

    iget v0, p0, Lcom/loc/h;->C:I

    return v0
.end method

.method public final f()Z
    .locals 6

    iget-object v0, p0, Lcom/loc/h;->c:Lcom/amap/api/location/AMapLocationClientOption;

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->isOnceLocation()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v2

    iget-wide v4, p0, Lcom/loc/h;->d:J

    sub-long/2addr v2, v4

    const-wide/32 v4, 0x493e0

    cmp-long v0, v2, v4

    if-lez v0, :cond_1

    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    return v1
.end method
