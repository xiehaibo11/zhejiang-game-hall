.class public final Lcom/loc/e;
.super Ljava/lang/Object;
.source "ApsManager.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/loc/e$a;,
        Lcom/loc/e$b;
    }
.end annotation


# static fields
.field static g:Z


# instance fields
.field a:Ljava/lang/String;

.field b:Lcom/loc/e$b;

.field c:Lcom/amap/api/location/AMapLocation;

.field d:Lcom/loc/e$a;

.field e:Landroid/content/Context;

.field f:Lcom/loc/er;

.field h:Ljava/util/HashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/HashMap<",
            "Landroid/os/Messenger;",
            "Ljava/lang/Long;",
            ">;"
        }
    .end annotation
.end field

.field i:Lcom/loc/fx;

.field j:J

.field k:J

.field l:Ljava/lang/String;

.field m:Lcom/amap/api/location/AMapLocationClientOption;

.field n:Lcom/amap/api/location/AMapLocationClientOption;

.field private o:Z

.field private p:Z

.field private q:J

.field private r:J

.field private s:Lcom/loc/ew;

.field private t:J

.field private u:I

.field private v:Lcom/loc/j;

.field private w:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Landroid/os/Messenger;",
            ">;"
        }
    .end annotation
.end field

.field private x:J

.field private y:Z

.field private z:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/e;->o:Z

    iput-boolean v0, p0, Lcom/loc/e;->p:Z

    const/4 v1, 0x0

    iput-object v1, p0, Lcom/loc/e;->a:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    const-wide/16 v2, 0x0

    iput-wide v2, p0, Lcom/loc/e;->q:J

    iput-wide v2, p0, Lcom/loc/e;->r:J

    iput-object v1, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    iput-object v1, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    iput-wide v2, p0, Lcom/loc/e;->t:J

    iput v0, p0, Lcom/loc/e;->u:I

    iput-object v1, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    iput-object v1, p0, Lcom/loc/e;->e:Landroid/content/Context;

    iput-object v1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    iput-object v1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    iput-object v1, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    iput-wide v2, p0, Lcom/loc/e;->j:J

    iput-wide v2, p0, Lcom/loc/e;->k:J

    iput-wide v2, p0, Lcom/loc/e;->x:J

    iput-object v1, p0, Lcom/loc/e;->l:Ljava/lang/String;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/loc/e;->y:Z

    const-string v0, ""

    iput-object v0, p0, Lcom/loc/e;->z:Ljava/lang/String;

    iput-object v1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    new-instance v0, Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {v0}, Lcom/amap/api/location/AMapLocationClientOption;-><init>()V

    iput-object v0, p0, Lcom/loc/e;->n:Lcom/amap/api/location/AMapLocationClientOption;

    iput-object p1, p0, Lcom/loc/e;->e:Landroid/content/Context;

    return-void
.end method

.method private static a(ILjava/lang/String;)Lcom/loc/ew;
    .locals 2

    :try_start_0
    new-instance v0, Lcom/loc/ew;

    const-string v1, ""

    invoke-direct {v0, v1}, Lcom/loc/ew;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Lcom/loc/ew;->setErrorCode(I)V

    invoke-virtual {v0, p1}, Lcom/loc/ew;->setLocationDetail(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    move-exception p0

    const-string p1, "ApsServiceCore"

    const-string v0, "newInstanceAMapLoc"

    invoke-static {p0, p1, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    const/4 p0, 0x0

    return-object p0
.end method

.method static synthetic a(Lcom/loc/e;Lcom/loc/j;)Lcom/loc/j;
    .locals 0

    iput-object p1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    return-object p1
.end method

.method private a(Landroid/os/Bundle;)V
    .locals 2

    :try_start_0
    iget-boolean v0, p0, Lcom/loc/e;->o:Z

    if-eqz v0, :cond_1

    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {p1}, Lcom/loc/er;->a()V

    :cond_0
    return-void

    :cond_1
    iget-object v0, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fr;->a(Landroid/content/Context;)V

    if-eqz p1, :cond_2

    const-string v0, "optBundle"

    invoke-virtual {p1, v0}, Landroid/os/Bundle;->getBundle(Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object p1

    invoke-static {p1}, Lcom/loc/fr;->a(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p1

    iput-object p1, p0, Lcom/loc/e;->n:Lcom/amap/api/location/AMapLocationClientOption;

    :cond_2
    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v0, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-virtual {p1, v0}, Lcom/loc/er;->a(Landroid/content/Context;)V

    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {p1}, Lcom/loc/er;->b()V

    iget-object p1, p0, Lcom/loc/e;->n:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-direct {p0, p1}, Lcom/loc/e;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {p1}, Lcom/loc/er;->c()V

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/loc/e;->o:Z

    iput-boolean p1, p0, Lcom/loc/e;->y:Z

    const-string p1, ""

    iput-object p1, p0, Lcom/loc/e;->z:Ljava/lang/String;

    iget-object p1, p0, Lcom/loc/e;->w:Ljava/util/List;

    if-eqz p1, :cond_3

    iget-object p1, p0, Lcom/loc/e;->w:Ljava/util/List;

    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result p1

    if-lez p1, :cond_3

    invoke-direct {p0}, Lcom/loc/e;->e()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/loc/e;->y:Z

    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    invoke-virtual {p1}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/e;->z:Ljava/lang/String;

    const-string v0, "ApsServiceCore"

    const-string v1, "init"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private a(Landroid/os/Messenger;)V
    .locals 1

    iget-object v0, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    invoke-virtual {v0, p1}, Ljava/util/HashMap;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private static a(Landroid/os/Messenger;ILandroid/os/Bundle;)V
    .locals 1

    if-eqz p0, :cond_0

    :try_start_0
    invoke-static {}, Landroid/os/Message;->obtain()Landroid/os/Message;

    move-result-object v0

    invoke-virtual {v0, p2}, Landroid/os/Message;->setData(Landroid/os/Bundle;)V

    iput p1, v0, Landroid/os/Message;->what:I

    invoke-virtual {p0, v0}, Landroid/os/Messenger;->send(Landroid/os/Message;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    const-string p1, "ApsServiceCore"

    const-string p2, "sendMessage"

    invoke-static {p0, p1, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-void
.end method

.method private a(Landroid/os/Messenger;Landroid/os/Bundle;)V
    .locals 1

    if-eqz p2, :cond_2

    :try_start_0
    invoke-virtual {p2}, Landroid/os/Bundle;->isEmpty()Z

    move-result p2

    if-eqz p2, :cond_0

    goto :goto_0

    :cond_0
    iget-boolean p2, p0, Lcom/loc/e;->p:Z

    if-eqz p2, :cond_1

    return-void

    :cond_1
    const/4 p2, 0x1

    iput-boolean p2, p0, Lcom/loc/e;->p:Z

    invoke-direct {p0, p1}, Lcom/loc/e;->b(Landroid/os/Messenger;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception p1

    const-string p2, "ApsServiceCore"

    const-string v0, "doInitAuth"

    invoke-static {p1, p2, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    :goto_0
    return-void
.end method

.method private a(Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V
    .locals 2

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-class v1, Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    const-string v1, "loc"

    invoke-virtual {v0, v1, p2}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    const-string p2, "nb"

    invoke-virtual {v0, p2, p3}, Landroid/os/Bundle;->putString(Ljava/lang/String;Ljava/lang/String;)V

    const-string p2, "statics"

    invoke-virtual {v0, p2, p4}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    iget-object p2, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide p3

    invoke-static {p3, p4}, Ljava/lang/Long;->valueOf(J)Ljava/lang/Long;

    move-result-object p3

    invoke-virtual {p2, p1, p3}, Ljava/util/HashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p2, 0x1

    invoke-static {p1, p2, v0}, Lcom/loc/e;->a(Landroid/os/Messenger;ILandroid/os/Bundle;)V

    return-void
.end method

.method private a(Landroid/os/Messenger;Ljava/lang/String;)V
    .locals 3

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-class v1, Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v1}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/os/Bundle;->setClassLoader(Ljava/lang/ClassLoader;)V

    invoke-static {}, Lcom/loc/fq;->i()I

    move-result v1

    mul-int/lit8 v1, v1, 0x3

    const-string v2, "I_MAX_GEO_DIS"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    invoke-static {}, Lcom/loc/fq;->i()I

    move-result v1

    const-string v2, "I_MIN_GEO_DIS"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putInt(Ljava/lang/String;I)V

    iget-object v1, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    const-string v2, "loc"

    invoke-virtual {v0, v2, v1}, Landroid/os/Bundle;->putParcelable(Ljava/lang/String;Landroid/os/Parcelable;)V

    const-string v1, "COARSE_LOC"

    invoke-virtual {v1, p2}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p2

    if-eqz p2, :cond_0

    const/16 p2, 0x67

    :goto_0
    invoke-static {p1, p2, v0}, Lcom/loc/e;->a(Landroid/os/Messenger;ILandroid/os/Bundle;)V

    return-void

    :cond_0
    const/4 p2, 0x6

    goto :goto_0
.end method

.method private a(Lcom/amap/api/location/AMapLocationClientOption;)V
    .locals 2

    :try_start_0
    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v0, p1}, Lcom/loc/er;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    :cond_0
    if-eqz p1, :cond_5

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isKillProcess()Z

    move-result v0

    sput-boolean v0, Lcom/loc/e;->g:Z

    iget-object v0, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    if-eqz v0, :cond_4

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v0

    iget-object v1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v1

    if-ne v0, v1, :cond_1

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isNeedAddress()Z

    move-result v0

    iget-object v1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->isNeedAddress()Z

    move-result v1

    if-ne v0, v1, :cond_1

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isLocationCacheEnable()Z

    move-result v0

    iget-object v1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->isLocationCacheEnable()Z

    move-result v1

    if-ne v0, v1, :cond_1

    iget-object v0, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v1

    if-eq v0, v1, :cond_2

    :cond_1
    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/loc/e;->r:J

    :cond_2
    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v0

    iget-object v1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v1}, Lcom/amap/api/location/AMapLocationClientOption;->isOffset()Z

    move-result v1

    if-ne v0, v1, :cond_3

    iget-object v0, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;

    invoke-virtual {v0}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v0

    invoke-virtual {p1}, Lcom/amap/api/location/AMapLocationClientOption;->getGeoLanguage()Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    move-result-object v1

    if-eq v0, v1, :cond_4

    :cond_3
    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    :cond_4
    iput-object p1, p0, Lcom/loc/e;->m:Lcom/amap/api/location/AMapLocationClientOption;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_5
    return-void

    :catchall_0
    move-exception p1

    const-string v0, "ApsServiceCore"

    const-string v1, "setExtra"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/e;->f()V

    return-void
.end method

.method static synthetic a(Lcom/loc/e;Landroid/os/Bundle;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/e;->a(Landroid/os/Bundle;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/e;Landroid/os/Messenger;)V
    .locals 0

    invoke-direct {p0, p1}, Lcom/loc/e;->a(Landroid/os/Messenger;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/e;Landroid/os/Messenger;Landroid/os/Bundle;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/loc/e;->a(Landroid/os/Messenger;Landroid/os/Bundle;)V

    return-void
.end method

.method static synthetic a(Lcom/loc/e;Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V
    .locals 0

    invoke-direct {p0, p1, p2, p3, p4}, Lcom/loc/e;->a(Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V

    return-void
.end method

.method private static b(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;
    .locals 3

    const-string v0, "APSManager"

    const/4 v1, 0x0

    :try_start_0
    const-string v2, "optBundle"

    invoke-virtual {p0, v2}, Landroid/os/Bundle;->getBundle(Ljava/lang/String;)Landroid/os/Bundle;

    move-result-object v2

    invoke-static {v2}, Lcom/loc/fr;->a(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    :try_start_1
    const-string v2, "d"

    invoke-virtual {p0, v2}, Landroid/os/Bundle;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2

    if-nez v2, :cond_0

    invoke-static {p0}, Lcom/loc/o;->a(Ljava/lang/String;)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p0

    :try_start_2
    const-string v2, "doLocation setUmidToken"

    invoke-static {p0, v0, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_1

    goto :goto_0

    :catchall_1
    move-exception p0

    const-string v2, "parseBundle"

    invoke-static {p0, v0, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    :goto_0
    return-object v1
.end method

.method static synthetic b(Ljava/lang/String;)Lcom/loc/ew;
    .locals 1

    const/16 v0, 0xa

    invoke-static {v0, p0}, Lcom/loc/e;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object p0

    return-object p0
.end method

.method static synthetic b(Lcom/loc/e;)Ljava/util/List;
    .locals 0

    iget-object p0, p0, Lcom/loc/e;->w:Ljava/util/List;

    return-object p0
.end method

.method private b(Landroid/os/Messenger;)V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v0}, Lcom/loc/er;->f()V

    invoke-static {}, Lcom/loc/fq;->l()Z

    move-result v0

    if-eqz v0, :cond_0

    new-instance v0, Landroid/os/Bundle;

    invoke-direct {v0}, Landroid/os/Bundle;-><init>()V

    const-string v1, "installMockApp"

    const/4 v2, 0x1

    invoke-virtual {v0, v1, v2}, Landroid/os/Bundle;->putBoolean(Ljava/lang/String;Z)V

    const/16 v1, 0x9

    invoke-static {p1, v1, v0}, Lcom/loc/e;->a(Landroid/os/Messenger;ILandroid/os/Bundle;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_0
    return-void

    :catchall_0
    move-exception p1

    const-string v0, "ApsServiceCore"

    const-string v1, "initAuth"

    invoke-static {p1, v0, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private b(Landroid/os/Messenger;Landroid/os/Bundle;)V
    .locals 11

    const-string v0, "#0901"

    const-string v1, "#0801"

    const-string v2, "ApsServiceCore"

    if-eqz p2, :cond_c

    :try_start_0
    invoke-virtual {p2}, Landroid/os/Bundle;->isEmpty()Z

    move-result v3

    if-eqz v3, :cond_0

    goto/16 :goto_5

    :cond_0
    new-instance v3, Lcom/loc/eq;

    invoke-direct {v3}, Lcom/loc/eq;-><init>()V

    const-string v4, "conitue"

    invoke-virtual {v3, v4}, Lcom/loc/eq;->e(Ljava/lang/String;)V

    invoke-static {p2}, Lcom/loc/e;->b(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object p2

    invoke-direct {p0, p2}, Lcom/loc/e;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    iget-object v4, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    invoke-virtual {v4, p1}, Ljava/util/HashMap;->containsKey(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_1

    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocationClientOption;->isOnceLocation()Z

    move-result v4

    if-nez v4, :cond_1

    iget-object v4, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    invoke-virtual {v4, p1}, Ljava/util/HashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Ljava/lang/Long;

    invoke-virtual {v4}, Ljava/lang/Long;->longValue()J

    move-result-wide v4

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v6

    sub-long/2addr v6, v4

    const-wide/16 v4, 0x320

    cmp-long v8, v6, v4

    if-gez v8, :cond_1

    return-void

    :cond_1
    iget-boolean v4, p0, Lcom/loc/e;->y:Z

    const/4 v5, 0x0

    if-nez v4, :cond_2

    const/16 p2, 0x9

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v4, "init error : "

    invoke-direct {v1, v4}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v4, p0, Lcom/loc/e;->z:Ljava/lang/String;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {p2, v1}, Lcom/loc/e;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object p2

    iput-object p2, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v3, v0}, Lcom/loc/eq;->f(Ljava/lang/String;)V

    iget-object p2, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v0}, Lcom/loc/ew;->k()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0, v3}, Lcom/loc/e;->a(Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V

    const/16 p1, 0x82b

    invoke-static {v5, p1}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    return-void

    :cond_2
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v6

    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-static {v0}, Lcom/loc/fz;->a(Lcom/loc/ew;)Z

    move-result v0

    const/4 v4, 0x3

    if-eqz v0, :cond_3

    iget-wide v8, p0, Lcom/loc/e;->r:J

    sub-long/2addr v6, v8

    const-wide/16 v8, 0x258

    cmp-long v0, v6, v8

    if-gez v0, :cond_3

    iget-object p2, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v0}, Lcom/loc/ew;->k()Ljava/lang/String;

    move-result-object v0

    invoke-direct {p0, p1, p2, v0, v3}, Lcom/loc/e;->a(Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V

    iget-object p1, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object p2, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {p1, p2, v4}, Lcom/loc/er;->a(Lcom/loc/ew;I)V

    return-void

    :cond_3
    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v6

    invoke-virtual {v3, v6, v7}, Lcom/loc/eq;->c(J)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    const/16 v0, 0x8

    :try_start_1
    iget-object v6, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v6, v3}, Lcom/loc/er;->a(Lcom/loc/eq;)Lcom/loc/ew;

    move-result-object v6

    iput-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v6}, Lcom/loc/ew;->getLocationType()I

    move-result v6

    const/4 v7, 0x6

    const/4 v8, 0x2

    if-eq v6, v7, :cond_6

    iget-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v6}, Lcom/loc/ew;->getLocationType()I

    move-result v6

    const/4 v7, 0x5

    if-ne v6, v7, :cond_4

    goto :goto_0

    :cond_4
    iget-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v6}, Lcom/loc/ew;->getLocationType()I

    move-result v6

    if-ne v6, v8, :cond_5

    iget-object v6, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v7, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v6, v7, v4}, Lcom/loc/er;->a(Lcom/loc/ew;I)V

    goto :goto_1

    :cond_5
    iget-object v4, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v4}, Lcom/loc/ew;->getLocationType()I

    move-result v4

    const/4 v6, 0x4

    if-ne v4, v6, :cond_7

    iget-object v4, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v7, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v4, v7, v6}, Lcom/loc/er;->a(Lcom/loc/ew;I)V

    goto :goto_1

    :cond_6
    :goto_0
    iget-object v4, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v4, v6, v8}, Lcom/loc/er;->a(Lcom/loc/ew;I)V

    :cond_7
    :goto_1
    iget-object v4, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    const/4 v7, 0x0

    new-array v7, v7, [Ljava/lang/String;

    invoke-virtual {v4, v6}, Lcom/loc/er;->a(Lcom/loc/ew;)Lcom/loc/ew;

    move-result-object v4

    iput-object v4, p0, Lcom/loc/e;->s:Lcom/loc/ew;
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_2

    :catchall_0
    move-exception v4

    const/16 v6, 0x821

    :try_start_2
    invoke-static {v5, v6}, Lcom/loc/fx;->a(Ljava/lang/String;I)V

    invoke-virtual {v3, v1}, Lcom/loc/eq;->f(Ljava/lang/String;)V

    new-instance v6, Ljava/lang/StringBuilder;

    const-string v7, "loc error : "

    invoke-direct {v6, v7}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v6, v7}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v6

    invoke-static {v0, v6}, Lcom/loc/e;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object v6

    iput-object v6, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    const-string v6, "run part2"

    invoke-static {v4, v2, v6}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_2
    iget-object v4, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-static {v4}, Lcom/loc/fz;->a(Lcom/loc/ew;)Z

    move-result v4

    if-eqz v4, :cond_8

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v6

    iput-wide v6, p0, Lcom/loc/e;->r:J

    :cond_8
    iget-object v4, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    if-nez v4, :cond_9

    const-string v4, "loc is null#0801"

    invoke-static {v0, v4}, Lcom/loc/e;->a(ILjava/lang/String;)Lcom/loc/ew;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v3, v1}, Lcom/loc/eq;->f(Ljava/lang/String;)V

    :cond_9
    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    if-eqz v0, :cond_a

    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v0}, Lcom/loc/ew;->k()Ljava/lang/String;

    move-result-object v5

    iget-object v0, p0, Lcom/loc/e;->s:Lcom/loc/ew;

    invoke-virtual {v0}, Lcom/loc/ew;->clone()Lcom/amap/api/location/AMapLocation;

    move-result-object v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    move-object v10, v5

    move-object v5, v0

    move-object v0, v10

    goto :goto_3

    :cond_a
    move-object v0, v5

    :goto_3
    :try_start_3
    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocationClientOption;->isLocationCacheEnable()Z

    move-result v1

    if-eqz v1, :cond_b

    iget-object v1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    if-eqz v1, :cond_b

    iget-object v1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocationClientOption;->getLastLocationLifeCycle()J

    move-result-wide v6

    invoke-virtual {v1, v5, v0, v6, v7}, Lcom/loc/j;->a(Lcom/amap/api/location/AMapLocation;Ljava/lang/String;J)Lcom/amap/api/location/AMapLocation;

    move-result-object p2
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    move-object v5, p2

    goto :goto_4

    :catchall_1
    move-exception p2

    :try_start_4
    const-string v1, "fixLastLocation"

    invoke-static {p2, v2, v1}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_b
    :goto_4
    invoke-direct {p0, p1, v5, v0, v3}, Lcom/loc/e;->a(Landroid/os/Messenger;Lcom/amap/api/location/AMapLocation;Ljava/lang/String;Lcom/loc/eq;)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    return-void

    :catchall_2
    move-exception p1

    const-string p2, "doLocation"

    invoke-static {p1, v2, p2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_c
    :goto_5
    return-void
.end method

.method static synthetic b(Lcom/loc/e;Landroid/os/Messenger;Landroid/os/Bundle;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/loc/e;->b(Landroid/os/Messenger;Landroid/os/Bundle;)V

    return-void
.end method

.method static synthetic c(Lcom/loc/e;)V
    .locals 0

    invoke-direct {p0}, Lcom/loc/e;->e()V

    return-void
.end method

.method public static d()V
    .locals 1

    const/4 v0, 0x0

    sput-boolean v0, Lcom/loc/e;->g:Z

    return-void
.end method

.method private e()V
    .locals 3

    iget-object v0, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fz;->m(Landroid/content/Context;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 v0, 0x1

    new-array v0, v0, [Ljava/lang/Object;

    invoke-static {}, Lcom/loc/ft;->a()V

    return-void

    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    iget-object v1, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    invoke-virtual {v0, v1}, Lcom/loc/er;->a(Landroid/os/Handler;)V

    iget-object v0, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v0}, Lcom/loc/er;->g()V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-void

    :catchall_0
    move-exception v0

    const-string v1, "ApsServiceCore"

    const-string v2, "startColl"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method private f()V
    .locals 3

    :try_start_0
    iget-object v0, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fq;->c(Landroid/content/Context;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    const-string v1, "ApsServiceCore"

    const-string v2, "doCallOtherSer"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    :try_start_0
    new-instance v0, Lcom/loc/fx;

    invoke-direct {v0}, Lcom/loc/fx;-><init>()V

    iput-object v0, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    new-instance v0, Lcom/loc/e$b;

    const-string v1, "amapLocCoreThread"

    invoke-direct {v0, p0, v1}, Lcom/loc/e$b;-><init>(Lcom/loc/e;Ljava/lang/String;)V

    iput-object v0, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Lcom/loc/e$b;->setPriority(I)V

    iget-object v0, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    invoke-virtual {v0}, Lcom/loc/e$b;->start()V

    new-instance v0, Lcom/loc/e$a;

    iget-object v1, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    invoke-virtual {v1}, Lcom/loc/e$b;->getLooper()Landroid/os/Looper;

    move-result-object v1

    invoke-direct {v0, p0, v1}, Lcom/loc/e$a;-><init>(Lcom/loc/e;Landroid/os/Looper;)V

    iput-object v0, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/loc/e;->w:Ljava/util/List;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-void

    :catchall_0
    move-exception v0

    const-string v1, "ApsServiceCore"

    const-string v2, "onCreate"

    invoke-static {v0, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final a(Landroid/content/Intent;)V
    .locals 3

    const-string v0, "as"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    const-string v0, "true"

    invoke-virtual {v0, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    if-eqz p1, :cond_0

    const/16 v0, 0x9

    const-wide/16 v1, 0x64

    invoke-virtual {p1, v0, v1, v2}, Lcom/loc/e$a;->sendEmptyMessageDelayed(IJ)Z

    :cond_0
    return-void
.end method

.method final a(Landroid/os/Messenger;Landroid/os/Bundle;Ljava/lang/String;)V
    .locals 10

    if-eqz p2, :cond_8

    :try_start_0
    invoke-virtual {p2}, Landroid/os/Bundle;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto/16 :goto_2

    :cond_0
    const-string v0, "lat"

    invoke-virtual {p2, v0}, Landroid/os/Bundle;->getDouble(Ljava/lang/String;)D

    move-result-wide v0

    const-string v2, "lon"

    invoke-virtual {p2, v2}, Landroid/os/Bundle;->getDouble(Ljava/lang/String;)D

    move-result-wide v2

    const-string v4, "radius"

    invoke-virtual {p2, v4}, Landroid/os/Bundle;->getFloat(Ljava/lang/String;)F

    move-result v4

    const-string v5, "time"

    invoke-virtual {p2, v5}, Landroid/os/Bundle;->getLong(Ljava/lang/String;)J

    move-result-wide v5

    const-string v7, "FINE_LOC"

    invoke-virtual {v7, p3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    const/4 v8, 0x1

    if-eqz v7, :cond_1

    new-instance v7, Lcom/amap/api/location/AMapLocation;

    const-string v9, "gps"

    invoke-direct {v7, v9}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    invoke-virtual {v7, v0, v1}, Lcom/amap/api/location/AMapLocation;->setLatitude(D)V

    invoke-virtual {v7, v8}, Lcom/amap/api/location/AMapLocation;->setLocationType(I)V

    invoke-virtual {v7, v2, v3}, Lcom/amap/api/location/AMapLocation;->setLongitude(D)V

    invoke-virtual {v7, v4}, Lcom/amap/api/location/AMapLocation;->setAccuracy(F)V

    invoke-virtual {v7, v5, v6}, Lcom/amap/api/location/AMapLocation;->setTime(J)V

    iget-object v4, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v4, v7}, Lcom/loc/er;->a(Lcom/amap/api/location/AMapLocation;)V

    :cond_1
    invoke-static {}, Lcom/loc/fq;->h()Z

    move-result v4

    if-nez v4, :cond_2

    return-void

    :cond_2
    invoke-static {p2}, Lcom/loc/e;->b(Landroid/os/Bundle;)Lcom/amap/api/location/AMapLocationClientOption;

    move-result-object v4

    if-eqz v4, :cond_7

    invoke-virtual {v4}, Lcom/amap/api/location/AMapLocationClientOption;->isNeedAddress()Z

    move-result v5

    if-nez v5, :cond_3

    goto/16 :goto_1

    :cond_3
    invoke-direct {p0, v4}, Lcom/loc/e;->a(Lcom/amap/api/location/AMapLocationClientOption;)V

    iget-object v4, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    const/high16 v5, -0x40800000    # -1.0f

    if-eqz v4, :cond_4

    const/4 v4, 0x4

    new-array v4, v4, [D

    const/4 v6, 0x0

    aput-wide v0, v4, v6

    aput-wide v2, v4, v8

    const/4 v6, 0x2

    iget-object v7, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v7}, Lcom/amap/api/location/AMapLocation;->getLatitude()D

    move-result-wide v7

    aput-wide v7, v4, v6

    iget-object v6, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {v6}, Lcom/amap/api/location/AMapLocation;->getLongitude()D

    move-result-wide v6

    const/4 v8, 0x3

    aput-wide v6, v4, v8

    invoke-static {v4}, Lcom/loc/fz;->a([D)F

    move-result v4

    invoke-static {}, Lcom/loc/fq;->i()I

    move-result v6

    mul-int/lit8 v6, v6, 0x3

    int-to-float v6, v6

    cmpg-float v6, v4, v6

    if-gez v6, :cond_5

    invoke-direct {p0, p1, p3}, Lcom/loc/e;->a(Landroid/os/Messenger;Ljava/lang/String;)V

    goto :goto_0

    :cond_4
    const/high16 v4, -0x40800000    # -1.0f

    :cond_5
    :goto_0
    cmpl-float v5, v4, v5

    if-eqz v5, :cond_6

    invoke-static {}, Lcom/loc/fq;->i()I

    move-result v5

    int-to-float v5, v5

    cmpl-float v4, v4, v5

    if-lez v4, :cond_7

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v4

    iget-wide v6, p0, Lcom/loc/e;->x:J

    sub-long/2addr v4, v6

    invoke-static {}, Lcom/loc/fq;->j()I

    move-result v6

    mul-int/lit16 v6, v6, 0x3e8

    int-to-long v6, v6

    cmp-long v8, v4, v6

    if-lez v8, :cond_7

    :cond_6
    invoke-direct {p0, p2}, Lcom/loc/e;->a(Landroid/os/Bundle;)V

    iget-object p2, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {p2, v0, v1, v2, v3}, Lcom/loc/er;->a(DD)Lcom/loc/ew;

    move-result-object p2

    iput-object p2, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/loc/e;->x:J

    iget-object p2, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    if-eqz p2, :cond_7

    iget-object p2, p0, Lcom/loc/e;->c:Lcom/amap/api/location/AMapLocation;

    invoke-virtual {p2}, Lcom/amap/api/location/AMapLocation;->getAdCode()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_7

    invoke-direct {p0, p1, p3}, Lcom/loc/e;->a(Landroid/os/Messenger;Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_7
    :goto_1
    return-void

    :catchall_0
    move-exception p1

    const-string p2, "ApsServiceCore"

    const-string p3, "doLocationGeo"

    invoke-static {p1, p2, p3}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_8
    :goto_2
    return-void
.end method

.method public final a(Ljava/lang/String;)Z
    .locals 1

    iget-object v0, p0, Lcom/loc/e;->l:Ljava/lang/String;

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v0}, Lcom/loc/fr;->b(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/e;->l:Ljava/lang/String;

    :cond_0
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    iget-object v0, p0, Lcom/loc/e;->l:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_1

    goto :goto_0

    :cond_1
    const/4 p1, 0x1

    return p1

    :cond_2
    :goto_0
    const/4 p1, 0x0

    return p1
.end method

.method public final b()Landroid/os/Handler;
    .locals 1

    iget-object v0, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    return-object v0
.end method

.method public final b(Landroid/content/Intent;)V
    .locals 2

    const-string v0, "a"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_0

    iget-object v1, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v1, v0}, Lcom/loc/m;->a(Landroid/content/Context;Ljava/lang/String;)V

    :cond_0
    const-string v0, "b"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/loc/e;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/loc/l;->a(Ljava/lang/String;)V

    const-string v0, "d"

    invoke-virtual {p1, v0}, Landroid/content/Intent;->getStringExtra(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    invoke-static {p1}, Lcom/loc/o;->a(Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method public final c()V
    .locals 12

    const-string v0, "apm"

    :try_start_0
    iget-object v1, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    iget-object v1, p0, Lcom/loc/e;->h:Ljava/util/HashMap;

    invoke-virtual {v1}, Ljava/util/HashMap;->clear()V

    iput-object v2, p0, Lcom/loc/e;->h:Ljava/util/HashMap;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_2

    :cond_0
    :try_start_1
    iget-object v1, p0, Lcom/loc/e;->w:Ljava/util/List;

    if-eqz v1, :cond_1

    iget-object v1, p0, Lcom/loc/e;->w:Ljava/util/List;

    invoke-interface {v1}, Ljava/util/List;->clear()V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v1

    :try_start_2
    const-string v3, "des1"

    invoke-static {v1, v0, v3}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    iget-object v1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/loc/e;->v:Lcom/loc/j;

    invoke-virtual {v1}, Lcom/loc/j;->c()V

    iput-object v2, p0, Lcom/loc/e;->v:Lcom/loc/j;

    :cond_2
    const/4 v1, 0x0

    iput-boolean v1, p0, Lcom/loc/e;->o:Z

    iput-boolean v1, p0, Lcom/loc/e;->p:Z

    iget-object v3, p0, Lcom/loc/e;->f:Lcom/loc/er;

    invoke-virtual {v3}, Lcom/loc/er;->e()V

    iget-object v3, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    if-eqz v3, :cond_3

    iget-object v3, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    invoke-virtual {v3, v2}, Lcom/loc/e$a;->removeCallbacksAndMessages(Ljava/lang/Object;)V

    :cond_3
    iput-object v2, p0, Lcom/loc/e;->d:Lcom/loc/e$a;

    iget-object v3, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    if-eqz v3, :cond_5

    sget v3, Landroid/os/Build$VERSION;->SDK_INT:I
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_2

    const/16 v4, 0x12

    if-lt v3, v4, :cond_4

    :try_start_3
    iget-object v3, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    const-class v4, Landroid/os/HandlerThread;

    const-string v5, "quitSafely"

    new-array v1, v1, [Ljava/lang/Object;

    invoke-static {v3, v4, v5, v1}, Lcom/loc/fv;->a(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_3
    .catchall {:try_start_3 .. :try_end_3} :catchall_1

    goto :goto_2

    :catchall_1
    :try_start_4
    iget-object v1, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    :goto_1
    invoke-virtual {v1}, Lcom/loc/e$b;->quit()Z

    goto :goto_2

    :cond_4
    iget-object v1, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    goto :goto_1

    :cond_5
    :goto_2
    iput-object v2, p0, Lcom/loc/e;->b:Lcom/loc/e$b;

    iget-object v1, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    if-eqz v1, :cond_6

    iget-wide v1, p0, Lcom/loc/e;->j:J

    const-wide/16 v3, 0x0

    cmp-long v5, v1, v3

    if-eqz v5, :cond_6

    iget-wide v1, p0, Lcom/loc/e;->k:J

    cmp-long v5, v1, v3

    if-eqz v5, :cond_6

    invoke-static {}, Lcom/loc/fz;->b()J

    move-result-wide v1

    iget-wide v3, p0, Lcom/loc/e;->j:J

    sub-long v10, v1, v3

    iget-object v1, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    iget-object v2, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/loc/fx;->c(Landroid/content/Context;)I

    move-result v6

    iget-object v1, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    iget-object v2, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/loc/fx;->d(Landroid/content/Context;)I

    move-result v7

    iget-object v5, p0, Lcom/loc/e;->e:Landroid/content/Context;

    iget-wide v8, p0, Lcom/loc/e;->k:J

    invoke-static/range {v5 .. v11}, Lcom/loc/fx;->a(Landroid/content/Context;IIJJ)V

    iget-object v1, p0, Lcom/loc/e;->i:Lcom/loc/fx;

    iget-object v2, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-virtual {v1, v2}, Lcom/loc/fx;->e(Landroid/content/Context;)V

    :cond_6
    iget-object v1, p0, Lcom/loc/e;->e:Landroid/content/Context;

    invoke-static {v1}, Lcom/loc/fx;->a(Landroid/content/Context;)V

    invoke-static {}, Lcom/loc/av;->b()V

    sget-boolean v1, Lcom/loc/e;->g:Z

    if-eqz v1, :cond_7

    invoke-static {}, Landroid/os/Process;->myPid()I

    move-result v1

    invoke-static {v1}, Landroid/os/Process;->killProcess(I)V
    :try_end_4
    .catchall {:try_start_4 .. :try_end_4} :catchall_2

    :cond_7
    return-void

    :catchall_2
    move-exception v1

    const-string v2, "tdest"

    invoke-static {v1, v0, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
