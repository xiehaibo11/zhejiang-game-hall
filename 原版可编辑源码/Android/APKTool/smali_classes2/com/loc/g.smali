.class public final Lcom/loc/g;
.super Ljava/lang/Object;
.source "CoarseLocation.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/g$a;
    }
.end annotation


# static fields
.field public static volatile a:Lcom/amap/api/location/AMapLocation; = null

.field private static b:Ljava/lang/String; = "CoarseLocation"

.field private static q:J

.field private static r:Z

.field private static s:Z

.field private static t:Z

.field private static u:Z


# instance fields
.field private c:J

.field private d:Z

.field private e:I

.field private f:Lcom/loc/ev;

.field private g:I

.field private h:I

.field private i:I

.field private j:Landroid/os/Handler;

.field private k:Landroid/content/Context;

.field private l:J

.field private m:I

.field private n:Landroid/location/LocationManager;

.field private o:Lcom/amap/api/location/AMapLocationClientOption;

.field private p:Ljava/lang/Object;

.field private v:Z

.field private w:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

.field private x:Landroid/location/LocationListener;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;Landroid/os/Handler;)V
    .locals 5

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/g;->c:J

    const/4 v2, 0x0

    iput-boolean v2, p0, Lcom/loc/g;->d:Z

    iput v2, p0, Lcom/loc/g;->e:I

    const/4 v3, 0x0

    iput-object v3, p0, Lcom/loc/g;->f:Lcom/loc/ev;

    const/16 v4, 0xf0

    iput v4, p0, Lcom/loc/g;->g:I

    const/16 v4, 0x50

    iput v4, p0, Lcom/loc/g;->h:I

    iput v2, p0, Lcom/loc/g;->i:I

    iput-wide v0, p0, Lcom/loc/g;->l:J

    iput v2, p0, Lcom/loc/g;->m:I

    new-instance v0, Ljava/lang/Object;

    invoke-direct {v0}, Ljava/lang/Object;-><init>()V

    iput-object v0, p0, Lcom/loc/g;->p:Ljava/lang/Object;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/loc/g;->v:Z

    sget-object v0, Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;->DEFAULT:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    iput-object v0, p0, Lcom/loc/g;->w:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    iput-object v3, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    iput-object p1, p0, Lcom/loc/g;->k:Landroid/content/Context;

    iput-object p2, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    :try_start_0
    const-string p2, "location"

    invoke-virtual {p1, p2}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/location/LocationManager;

    iput-object p1, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    sget-object p2, Lcom/loc/g;->b:Ljava/lang/String;

    const-string v0, "<init>"

    invoke-static {p1, p2, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    new-instance p1, Lcom/loc/ev;

    invoke-direct {p1}, Lcom/loc/ev;-><init>()V

    iput-object p1, p0, Lcom/loc/g;->f:Lcom/loc/ev;

    return-void
.end method

.method private static a(ILjava/lang/String;)Lcom/loc/ew;
    .locals 2

    new-instance v0, Lcom/loc/ew;

    const-string v1, ""

    invoke-direct {v0, v1}, Lcom/loc/ew;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/loc/ew;->setErrorCode(I)V

    invoke-virtual {v0, p1}, Lcom/loc/ew;->setLocationDetail(Ljava/lang/String;)V

    return-object v0
.end method

.method private a(I)V
    .locals 0

    if-nez p1, :cond_0

    const/4 p1, 0x1

    :try_start_0
    new-array p1, p1, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/4 p1, 0x0

    iput p1, p0, Lcom/loc/g;->i:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    nop

    :catchall_0
    :cond_0
    return-void
.end method

.method private a(ILjava/lang/String;J)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    if-eqz v0, :cond_0

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    new-instance v1, Lcom/amap/api/location/AMapLocation;

    const-string v2, ""

    invoke-direct {v1, v2}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    const/16 v2, 0x14

    invoke-virtual {v1, v2}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    invoke-virtual {v1, p2}, Lcom/amap/api/location/AMapLocation;->setLocationDetail(Ljava/lang/String;)V

    const/16 p2, 0xb

    invoke-virtual {v1, p2}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    iput-object v1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    iput p1, v0, Landroid/os/Message;->what:I

    iget-object p1, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    invoke-virtual {p1, v0, p3, p4}, Landroid/os/Handler;->sendMessageDelayed(Landroid/os/Message;J)Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    invoke-static {}, Lcom/loc/ft;->b()V

    return-void
.end method

.method private a(Landroid/location/Location;)V
    .locals 9

    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/16 v1, 0x64

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

    invoke-virtual {p1}, Landroid/location/Location;->getProvider()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_3

    const-string v1, "gps_coarse"

    :goto_0
    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setProvider(Ljava/lang/String;)V

    goto :goto_1

    :cond_3
    const-string v1, "network_coarse"

    goto :goto_0

    :goto_1
    const/16 v1, 0xb

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    iget-boolean v1, p0, Lcom/loc/g;->d:Z

    const/4 v2, 0x1

    if-nez v1, :cond_4

    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v1

    if-eqz v1, :cond_4

    iget-object v1, p0, Lcom/loc/g;->k:Landroid/content/Context;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v3

    iget-wide v5, p0, Lcom/loc/g;->c:J

    sub-long/2addr v3, v5

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v5

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v7

    invoke-static {v5, v6, v7, v8}, Lcom/loc/fr;->a(DD)Z

    move-result v5

    invoke-static {v1, v3, v4, v5}, Lcom/loc/fx;->b(Landroid/content/Context;JZ)V

    iput-boolean v2, p0, Lcom/loc/g;->d:Z

    :cond_4
    sget-object v1, Ljava/lang/Boolean;->FALSE:Ljava/lang/Boolean;

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_3

    const/16 v4, 0x12

    const/4 v5, 0x0

    if-lt v3, v4, :cond_5

    :try_start_1
    const-string v3, "isFromMockProvider"

    new-array v4, v5, [Ljava/lang/Object;

    invoke-static {p1, v3, v4}, Lcom/loc/fv;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/Boolean;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :try_start_2
    new-array v1, v2, [Ljava/lang/Object;

    const-string v1, "CoarseLocation | isFromMock="

    invoke-static {v3}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    :catchall_0
    move-object v1, v3

    :catchall_1
    :cond_5
    :try_start_3
    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    if-eqz v1, :cond_7

    invoke-virtual {v0, v2}, Lcom/amap/api/location/AMapLocation;->setMock(Z)V

    const/4 v1, 0x4

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setTrustedLevel(I)V

    iget-object v1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->isMockEnable()Z

    move-result v1

    if-nez v1, :cond_8

    iget p1, p0, Lcom/loc/g;->m:I

    const/4 v1, 0x3

    if-le p1, v1, :cond_6

    const/16 p1, 0x868

    const/4 v1, 0x0

    invoke-static {v1, p1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    const/16 p1, 0xf

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setErrorCode(I)V

    const-string p1, "CoarseLocation has been mocked!#2007"

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setLocationDetail(Ljava/lang/String;)V

    const-wide/16 v2, 0x0

    invoke-virtual {v0, v2, v3}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {v0, v2, v3}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    invoke-virtual {v0, v2, v3}, Lcom/amap/api/location/AMapLocation;->setAltitude(D)V

    const/4 p1, 0x0

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setSpeed(F)V

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setBearing(F)V

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocation;->setExtras(Landroid/os/Bundle;)V

    invoke-direct {p0, v0}, Lcom/loc/g;->c(Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_6
    iget p1, p0, Lcom/loc/g;->m:I

    add-int/2addr p1, v2

    iput p1, p0, Lcom/loc/g;->m:I

    return-void

    :cond_7
    iput v5, p0, Lcom/loc/g;->m:I

    :cond_8
    invoke-static {p1}, Lcom/loc/g;->b(Landroid/location/Location;)I

    move-result p1

    iput p1, p0, Lcom/loc/g;->i:I

    invoke-virtual {v0, p1}, Lcom/amap/api/location/AMapLocation;->setSatellites(I)V

    invoke-direct {p0, v0}, Lcom/loc/g;->e(Lcom/amap/api/location/AMapLocation;)V

    invoke-static {v0}, Lcom/loc/g;->g(Lcom/amap/api/location/AMapLocation;)V

    invoke-direct {p0, v0}, Lcom/loc/g;->f(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    invoke-direct {p0, p1}, Lcom/loc/g;->a(Lcom/amap/api/location/AMapLocation;)V

    invoke-direct {p0, p1}, Lcom/loc/g;->b(Lcom/amap/api/location/AMapLocation;)V

    iget-object v0, p0, Lcom/loc/g;->p:Ljava/lang/Object;

    monitor-enter v0
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_3

    :try_start_4
    sget-object v1, Lcom/loc/g;->a:Lcom/amap/api/location/AMapLocation;

    invoke-direct {p0, p1, v1}, Lcom/loc/g;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)V

    monitor-exit v0
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :try_start_5
    invoke-direct {p0, p1}, Lcom/loc/g;->c(Lcom/amap/api/location/AMapLocation;)V
    :try_end_5
    .catchall {:try_start_5 .. :try_end_5} :catchall_3

    return-void

    :catchall_2
    move-exception p1

    :try_start_6
    monitor-exit v0
    :try_end_6
    .catchall {:try_start_6 .. :try_end_6} :catchall_2

    :try_start_7
    throw p1
    :try_end_7
    .catchall {:try_start_7 .. :try_end_7} :catchall_3

    :catchall_3
    move-exception p1

    const-string v0, "CoarseLocation"

    const-string v1, "onLocationChanged"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Lcom/amap/api/location/AMapLocation;)V
    .locals 0

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result p1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget p1, p0, Lcom/loc/g;->e:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/loc/g;->e:I

    return-void
.end method

.method private a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)V
    .locals 2

    if-eqz p2, :cond_0

    iget-object v0, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->isNeedAddress()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-static {p1, p2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result v0

    iget v1, p0, Lcom/loc/g;->g:I

    int-to-float v1, v1

    cmpg-float v0, v0, v1

    if-gez v0, :cond_0

    invoke-static {p1, p2}, Lcom/loc/fr;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    :cond_0
    return-void
.end method

.method static synthetic a(Lcom/loc/g;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/g;->g()V

    return-void
.end method

.method static synthetic a(Lcom/loc/g;I)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/g;->a(I)V

    return-void
.end method

.method static synthetic a(Lcom/loc/g;Landroid/location/Location;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/g;->a(Landroid/location/Location;)V

    return-void
.end method

.method private static a(Landroid/location/LocationManager;)Z
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    sget-boolean v1, Lcom/loc/g;->r:Z

    if-eqz v1, :cond_0

    sget-boolean p0, Lcom/loc/g;->s:Z

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

    sput-boolean p0, Lcom/loc/g;->s:Z

    goto :goto_0

    :cond_1
    const/4 p0, 0x0

    sput-boolean p0, Lcom/loc/g;->s:Z

    :goto_0
    sput-boolean v0, Lcom/loc/g;->r:Z

    sget-boolean p0, Lcom/loc/g;->s:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    sget-boolean p0, Lcom/loc/g;->s:Z

    return p0
.end method

.method private static b(Landroid/location/Location;)I
    .locals 1

    invoke-virtual {p0}, Landroid/location/Location;->getExtras()Landroid/os/Bundle;

    move-result-object p0

    if-eqz p0, :cond_0

    const-string v0, "satellites"

    invoke-virtual {p0, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result p0

    goto :goto_0

    :cond_0
    const/4 p0, 0x0

    :goto_0
    invoke-static {}, Lcom/loc/ft;->b()V

    return p0
.end method

.method private b(Lcom/amap/api/location/AMapLocation;)V
    .locals 7

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    if-eqz v0, :cond_4

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-object v2, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v2

    const-wide/16 v4, 0x1f40

    cmp-long v6, v2, v4

    if-lez v6, :cond_1

    iget-wide v2, p0, Lcom/loc/g;->l:J

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

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

    const/16 v0, 0x66

    iput v0, v1, Landroid/os/Message;->what:I

    iget-object v0, p0, Lcom/loc/g;->p:Ljava/lang/Object;

    monitor-enter v0

    :try_start_0
    sget-object v2, Lcom/loc/g;->a:Lcom/amap/api/location/AMapLocation;

    if-nez v2, :cond_2

    iget-object p1, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    :goto_0
    invoke-virtual {p1, v1}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    goto :goto_1

    :cond_2
    sget-object v2, Lcom/loc/g;->a:Lcom/amap/api/location/AMapLocation;

    invoke-static {p1, v2}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;Lcom/amap/api/location/AMapLocation;)F

    move-result p1

    iget v2, p0, Lcom/loc/g;->h:I

    int-to-float v2, v2

    cmpl-float p1, p1, v2

    if-lez p1, :cond_3

    iget-object p1, p0, Lcom/loc/g;->j:Landroid/os/Handler;

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

.method private static b(Landroid/location/LocationManager;)Z
    .locals 2

    const/4 v0, 0x1

    :try_start_0
    sget-boolean v1, Lcom/loc/g;->t:Z

    if-eqz v1, :cond_0

    sget-boolean p0, Lcom/loc/g;->u:Z

    return p0

    :cond_0
    const-string v1, "network"

    invoke-virtual {p0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result p0

    sput-boolean p0, Lcom/loc/g;->u:Z

    sput-boolean v0, Lcom/loc/g;->t:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return p0

    :catchall_0
    move-exception p0

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    sget-boolean p0, Lcom/loc/g;->u:Z

    return p0
.end method

.method private c(Lcom/amap/api/location/AMapLocation;)V
    .locals 6

    iget-object v0, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getLocationMode()Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    move-result-object v0

    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->Device_Sensors:Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;

    invoke-virtual {v0, v1}, Lcom/amap/api/location/AMapLocationClientOption$AMapLocationMode;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v0

    const/4 v1, 0x0

    cmpl-float v0, v0, v1

    if-lez v0, :cond_0

    invoke-direct {p0, p1}, Lcom/loc/g;->d(Lcom/amap/api/location/AMapLocation;)V

    return-void

    :cond_0
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/loc/g;->l:J

    sub-long/2addr v0, v2

    iget-object v2, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v2

    const-wide/16 v4, 0xc8

    sub-long/2addr v2, v4

    cmp-long v4, v0, v2

    if-ltz v4, :cond_1

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/g;->l:J

    invoke-direct {p0, p1}, Lcom/loc/g;->d(Lcom/amap/api/location/AMapLocation;)V

    :cond_1
    return-void
.end method

.method private c()Z
    .locals 6

    const/4 v0, 0x1

    :try_start_0
    invoke-static {}, Lcom/loc/fz;->c()I

    move-result v1

    const/16 v2, 0x1c

    const/4 v3, 0x0

    if-lt v1, v2, :cond_1

    iget-object v1, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/loc/g;->k:Landroid/content/Context;

    invoke-virtual {v1}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v1

    const-string v4, "location"

    invoke-virtual {v1, v4}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Landroid/location/LocationManager;

    iput-object v1, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    :cond_0
    iget-object v1, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const-string v4, "isLocationEnabled"

    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {v1, v4, v5}, Lcom/loc/fv;->a(Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Boolean;

    invoke-virtual {v1}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :cond_1
    const/4 v1, 0x1

    :goto_0
    :try_start_1
    invoke-static {}, Lcom/loc/fz;->c()I

    move-result v4

    const/16 v5, 0x18

    if-lt v4, v5, :cond_2

    invoke-static {}, Lcom/loc/fz;->c()I

    move-result v4

    if-ge v4, v2, :cond_2

    iget-object v2, p0, Lcom/loc/g;->k:Landroid/content/Context;

    invoke-virtual {v2}, Landroid/content/Context;->getContentResolver()Landroid/content/ContentResolver;

    move-result-object v2

    const-string v4, "location_mode"

    invoke-static {v2, v4, v3}, Landroid/provider/Settings$Secure;->getInt(Landroid/content/ContentResolver;Ljava/lang/String;I)I

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    if-nez v0, :cond_2

    goto :goto_1

    :catchall_0
    const/4 v1, 0x1

    :catchall_1
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_2
    move v3, v1

    :goto_1
    return v3
.end method

.method private d()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u5b9a\u4f4d\u670d\u52a1\u6ca1\u6709\u5f00\u542f\uff0c\u8bf7\u5728\u8bbe\u7f6e\u4e2d\u6253\u5f00\u5b9a\u4f4d\u670d\u52a1\u5f00\u5173#1206"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0xc

    invoke-static {v1, v0}, Lcom/loc/g;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/loc/g;->c(Lcom/amap/api/location/AMapLocation;)V

    return-void
.end method

.method private d(Lcom/amap/api/location/AMapLocation;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    iput-object p1, v0, Landroid/os/Message;->obj:Ljava/lang/Object;

    const/16 p1, 0x65

    iput p1, v0, Landroid/os/Message;->what:I

    iget-object p1, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    invoke-virtual {p1, v0}, Landroid/os/Handler;->sendMessage(Landroid/os/Message;)Z

    :cond_0
    return-void
.end method

.method private e()V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "\u6a21\u7cca\u6743\u9650\u4e0b\u4e0d\u652f\u6301\u8fde\u7eed\u5b9a\u4f4d#2006"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const/16 v1, 0x14

    invoke-static {v1, v0}, Lcom/loc/g;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object v0

    invoke-direct {p0, v0}, Lcom/loc/g;->c(Lcom/amap/api/location/AMapLocation;)V

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

    iget-object v2, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v2}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v2

    if-eqz v2, :cond_0

    iget-object v2, p0, Lcom/loc/g;->k:Landroid/content/Context;

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

    iget-object v2, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

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
    move-exception v2

    invoke-virtual {p1, v1}, Lcom/amap/api/location/AMapLocation;->setOffset(Z)V

    invoke-virtual {p1, v0}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    const/4 p1, 0x1

    new-array p1, p1, [Ljava/lang/Object;

    invoke-virtual {v2}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void
.end method

.method private f(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;
    .locals 3

    invoke-static {p1}, Lcom/loc/fz;->a(Lcom/amap/api/location/AMapLocation;)Z

    move-result v0

    if-nez v0, :cond_0

    return-object p1

    :cond_0
    iget v0, p0, Lcom/loc/g;->e:I

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
    iget-object v0, p0, Lcom/loc/g;->f:Lcom/loc/ev;

    invoke-virtual {v0, p1}, Lcom/loc/ev;->a(Lcom/amap/api/location/AMapLocation;)Lcom/amap/api/location/AMapLocation;

    move-result-object p1

    return-object p1
.end method

.method private f()V
    .locals 12

    iget-object v0, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    if-nez v0, :cond_0

    return-void

    :cond_0
    const-wide/16 v0, 0x0

    const/4 v2, 0x0

    const/4 v3, 0x1

    :try_start_0
    iput-boolean v3, p0, Lcom/loc/g;->v:Z

    invoke-static {}, Landroid/os/Looper;->myLooper()Landroid/os/Looper;

    move-result-object v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/loc/g;->k:Landroid/content/Context;

    invoke-virtual {v4}, Landroid/content/Context;->getMainLooper()Landroid/os/Looper;

    move-result-object v4

    :cond_1
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v5

    iput-wide v5, p0, Lcom/loc/g;->c:J

    iget-object v5, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    invoke-static {v5}, Lcom/loc/g;->b(Landroid/location/LocationManager;)Z

    move-result v5

    if-eqz v5, :cond_3

    iget-object v5, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    if-nez v5, :cond_2

    new-instance v5, Lcom/loc/g$a;

    invoke-direct {v5, p0}, Lcom/loc/g$a;-><init>(Lcom/loc/g;)V

    iput-object v5, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    :cond_2
    iget-object v5, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const-string v6, "network"

    iget-object v7, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v7}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v7

    iget-object v9, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v9}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v9

    iget-object v10, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    move-object v11, v4

    invoke-virtual/range {v5 .. v11}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V

    :cond_3
    iget-object v5, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    invoke-static {v5}, Lcom/loc/g;->a(Landroid/location/LocationManager;)Z

    move-result v5
    :try_end_0
    .catch Ljava/lang/SecurityException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    if-eqz v5, :cond_7

    :try_start_1
    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v5

    sget-wide v7, Lcom/loc/g;->q:J

    sub-long/2addr v5, v7

    const-wide/32 v7, 0xf731400

    cmp-long v9, v5, v7

    if-ltz v9, :cond_5

    iget-object v5, p0, Lcom/loc/g;->k:Landroid/content/Context;

    const-string v6, "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw=="

    invoke-static {v5, v6}, Lcom/loc/fz;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v5

    if-eqz v5, :cond_4

    iget-object v5, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const-string v6, "gps"

    const-string v7, "force_xtra_injection"

    invoke-virtual {v5, v6, v7, v2}, Landroid/location/LocationManager;->sendExtraCommand(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Z

    invoke-static {}, Lcom/loc/fz;->a()J

    move-result-wide v5

    sput-wide v5, Lcom/loc/g;->q:J

    iget-object v5, p0, Lcom/loc/g;->k:Landroid/content/Context;

    const-string v6, "pref"

    invoke-static {v5, v6}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;)Landroid/content/SharedPreferences$Editor;

    move-result-object v5

    const-string v6, "lagt"

    sget-wide v7, Lcom/loc/g;->q:J

    invoke-static {v5, v6, v7, v8}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;Ljava/lang/String;J)V

    invoke-static {v5}, Lcom/loc/fy;->a(Landroid/content/SharedPreferences$Editor;)V

    new-array v5, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    goto :goto_0

    :cond_4
    new-instance v5, Ljava/lang/Exception;

    const-string v6, "n_alec"

    invoke-direct {v5, v6}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    const-string v6, "OPENSDK_CL"

    const-string v7, "rlu_n_alec"

    invoke-static {v5, v6, v7}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v5

    :try_start_2
    new-array v6, v3, [Ljava/lang/Object;

    invoke-virtual {v5}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_5
    :goto_0
    iget-object v5, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    if-nez v5, :cond_6

    new-instance v5, Lcom/loc/g$a;

    invoke-direct {v5, p0}, Lcom/loc/g$a;-><init>(Lcom/loc/g;)V

    iput-object v5, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    :cond_6
    iget-object v5, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const-string v6, "gps"

    iget-object v7, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v7}, Lcom/amap/api/location/AMapLocationClientOption;->getInterval()J

    move-result-wide v7

    iget-object v9, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v9}, Lcom/amap/api/location/AMapLocationClientOption;->getDeviceModeDistanceFilter()F

    move-result v9

    iget-object v10, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    move-object v11, v4

    invoke-virtual/range {v5 .. v11}, Landroid/location/LocationManager;->requestLocationUpdates(Ljava/lang/String;JFLandroid/location/LocationListener;Landroid/os/Looper;)V

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_7
    sget-boolean v4, Lcom/loc/g;->s:Z

    const/16 v5, 0x64

    if-nez v4, :cond_8

    sget-boolean v4, Lcom/loc/g;->u:Z

    if-eqz v4, :cond_9

    :cond_8
    const-string v4, "\u7cfb\u7edf\u8fd4\u56de\u5b9a\u4f4d\u7ed3\u679c\u8d85\u65f6#2002"

    iget-object v6, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v6}, Lcom/amap/api/location/AMapLocationClientOption;->getHttpTimeOut()J

    move-result-wide v6

    invoke-direct {p0, v5, v4, v6, v7}, Lcom/loc/g;->a(ILjava/lang/String;J)V

    :cond_9
    sget-boolean v4, Lcom/loc/g;->s:Z

    if-nez v4, :cond_a

    sget-boolean v4, Lcom/loc/g;->u:Z

    if-nez v4, :cond_a

    new-array v4, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const-string v4, "\u7cfb\u7edf\u5b9a\u4f4d\u5f53\u524d\u4e0d\u53ef\u7528#2003"

    invoke-direct {p0, v5, v4, v0, v1}, Lcom/loc/g;->a(ILjava/lang/String;J)V
    :try_end_2
    .catch Ljava/lang/SecurityException; {:try_start_2 .. :try_end_2} :catch_0
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    :cond_a
    return-void

    :catchall_1
    move-exception v0

    new-array v1, v3, [Ljava/lang/Object;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    const-string v1, "CoarseLocation"

    const-string v2, "requestLocationUpdates part2"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void

    :catch_0
    move-exception v4

    new-array v3, v3, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/4 v3, 0x0

    iput-boolean v3, p0, Lcom/loc/g;->v:Z

    const/16 v3, 0x849

    invoke-static {v2, v3}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    const/16 v2, 0x65

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v4}, Ljava/lang/SecurityException;->getMessage()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "#2004"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-direct {p0, v2, v3, v0, v1}, Lcom/loc/g;->a(ILjava/lang/String;J)V

    return-void
.end method

.method private g()V
    .locals 1

    const/4 v0, 0x1

    :try_start_0
    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/g;->i:I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    return-void
.end method

.method private static g(Lcom/amap/api/location/AMapLocation;)V
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


# virtual methods
.method public final a()V
    .locals 3

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object v1, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    if-nez v1, :cond_0

    return-void

    :cond_0
    :try_start_0
    iget-object v2, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    if-eqz v2, :cond_1

    iget-object v2, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    invoke-virtual {v1, v2}, Landroid/location/LocationManager;->removeUpdates(Landroid/location/LocationListener;)V

    iget-object v1, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    check-cast v1, Lcom/loc/g$a;

    invoke-virtual {v1}, Lcom/loc/g$a;->a()V

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/loc/g;->x:Landroid/location/LocationListener;

    new-array v1, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {v1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    :cond_1
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    const/16 v1, 0x64

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_1

    :catchall_1
    :cond_2
    const/4 v0, 0x0

    iput v0, p0, Lcom/loc/g;->i:I

    const-wide/16 v1, 0x0

    iput-wide v1, p0, Lcom/loc/g;->c:J

    iput-wide v1, p0, Lcom/loc/g;->l:J

    iput v0, p0, Lcom/loc/g;->e:I

    iput v0, p0, Lcom/loc/g;->m:I

    iget-object v0, p0, Lcom/loc/g;->f:Lcom/loc/ev;

    invoke-virtual {v0}, Lcom/loc/ev;->a()V

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

    iput v0, p0, Lcom/loc/g;->g:I

    const-string v0, "I_MIN_GEO_DIS"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getInt(Ljava/lang/String;)I

    move-result v0

    iput v0, p0, Lcom/loc/g;->h:I

    const-string v0, "loc"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    check-cast p1, Lcom/amap/api/location/AMapLocation;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/loc/g;->p:Ljava/lang/Object;

    monitor-enter v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    sput-object p1, Lcom/loc/g;->a:Lcom/amap/api/location/AMapLocation;

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

    const-string v0, "CoarseLocation"

    const-string v1, "setLastGeoLocation"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 4

    iput-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    if-nez p1, :cond_0

    new-instance p1, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p1}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    iput-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    :cond_0
    const/4 p1, 0x2

    new-array p1, p1, [Ljava/lang/Object;

    iget-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isOnceLocation()Z

    move-result p1

    if-nez p1, :cond_1

    invoke-direct {p0}, Lcom/loc/g;->e()V

    return-void

    :cond_1
    invoke-direct {p0}, Lcom/loc/g;->c()Z

    move-result p1

    if-nez p1, :cond_2

    invoke-direct {p0}, Lcom/loc/g;->d()V

    return-void

    :cond_2
    :try_start_0
    iget-object p1, p0, Lcom/loc/g;->k:Landroid/content/Context;

    const-string v0, "pref"

    const-string v1, "lagt"

    sget-wide v2, Lcom/loc/g;->q:J

    invoke-static {p1, v0, v1, v2, v3}, Lcom/loc/fy;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;J)J

    move-result-wide v0

    sput-wide v0, Lcom/loc/g;->q:J
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    invoke-direct {p0}, Lcom/loc/g;->f()V

    return-void
.end method

.method public final b()I
    .locals 4

    iget-object v0, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const/4 v1, 0x1

    if-nez v0, :cond_0

    return v1

    :cond_0
    invoke-static {v0}, Lcom/loc/g;->a(Landroid/location/LocationManager;)Z

    move-result v0

    if-nez v0, :cond_1

    return v1

    :cond_1
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    const/4 v2, 0x0

    const/4 v3, 0x2

    if-ge v0, v1, :cond_2

    iget-object v0, p0, Lcom/loc/g;->n:Landroid/location/LocationManager;

    const-string v1, "gps"

    invoke-virtual {v0, v1}, Landroid/location/LocationManager;->isProviderEnabled(Ljava/lang/String;)Z

    move-result v0

    if-nez v0, :cond_4

    return v3

    :cond_2
    iget-object v0, p0, Lcom/loc/g;->k:Landroid/content/Context;

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
    iget-boolean v0, p0, Lcom/loc/g;->v:Z

    if-nez v0, :cond_5

    const/4 v0, 0x4

    return v0

    :cond_5
    return v2
.end method

.method public final b(Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 1

    if-nez p1, :cond_0

    new-instance p1, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p1}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    :cond_0
    iput-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    const/4 v0, 0x2

    new-array v0, v0, [Ljava/lang/Object;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->toString()Ljava/lang/String;

    invoke-static {}, Lcom/loc/ft;->a()V

    iget-object p1, p0, Lcom/loc/g;->j:Landroid/os/Handler;

    const/16 v0, 0x64

    invoke-virtual {p1, v0}, Landroid/os/Handler;->removeMessages(I)V

    iget-object p1, p0, Lcom/loc/g;->w:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    iget-object v0, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v0

    if-eq p1, v0, :cond_1

    iget-object p1, p0, Lcom/loc/g;->p:Ljava/lang/Object;

    monitor-enter p1

    const/4 v0, 0x0

    :try_start_0
    sput-object v0, Lcom/loc/g;->a:Lcom/amap/api/location/AMapLocation;

    monitor-exit p1

    goto :goto_0

    :catchall_0
    move-exception v0

    monitor-exit p1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v0

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/loc/g;->o:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/g;->w:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    return-void
.end method
