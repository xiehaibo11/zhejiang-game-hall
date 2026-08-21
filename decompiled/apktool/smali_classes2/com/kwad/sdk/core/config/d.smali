.class public Lcom/kwad/sdk/core/config/d;
.super Ljava/lang/Object;


# static fields
.field private static volatile amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

.field private static final amz:Ljava/util/concurrent/atomic/AtomicBoolean;


# direct methods
.method static constructor <clinit>()V
    .locals 2

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    sput-object v0, Lcom/kwad/sdk/core/config/d;->amz:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static R(J)Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akC:Lcom/kwad/sdk/core/config/item/m;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/m;->Ag()Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    and-long/2addr p0, v0

    const-wide/16 v0, 0x0

    cmp-long p0, p0, v0

    if-eqz p0, :cond_0

    const/4 p0, 0x1

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/f;)D
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Double;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/f;->zZ()Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Ljava/lang/Double;

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Double;->doubleValue()D

    move-result-wide v0

    return-wide v0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/k;)I
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/k;->zZ()Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Ljava/lang/Integer;

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    return p0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/m;)J
    .locals 2

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Long;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/m;->zZ()Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Ljava/lang/Long;

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/p;)Ljava/lang/String;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/p;->zZ()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/String;

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/e;)Lorg/json/JSONObject;
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lorg/json/JSONObject;

    if-eqz v0, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/e;->zZ()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lorg/json/JSONObject;

    return-object p0
.end method

.method public static a(Lcom/kwad/sdk/core/config/item/d;)Z
    .locals 1

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    if-eqz v0, :cond_0

    goto :goto_0

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/d;->zZ()Ljava/lang/Object;

    move-result-object p0

    move-object v0, p0

    check-cast v0, Ljava/lang/Boolean;

    :goto_0
    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result p0

    return p0
.end method

.method public static declared-synchronized aQ(Landroid/content/Context;)V
    .locals 3

    const-class v0, Lcom/kwad/sdk/core/config/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/config/d;->amz:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v1
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-eqz v1, :cond_0

    monitor-exit v0

    return-void

    :cond_0
    :try_start_1
    const-string v1, "SdkConfigManager"

    const-string v2, "loadCache"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/c;->init()V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->yZ()V

    invoke-static {p0}, Lcom/kwad/sdk/core/config/b;->aP(Landroid/content/Context;)V

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->zw()Lcom/kwad/sdk/core/response/model/SdkConfigData;

    sget-object p0, Lcom/kwad/sdk/core/config/d;->amz:Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x1

    invoke-virtual {p0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;->set(Z)V
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0

    throw p0
.end method

.method public static b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lcom/kwad/sdk/core/config/item/b<",
            "TT;>;)TT;"
        }
    .end annotation

    invoke-static {}, Lcom/kwad/sdk/core/config/d;->isLoaded()Z

    move-result v0

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0, p0}, Lcom/kwad/sdk/core/config/b;->a(Landroid/content/Context;Lcom/kwad/sdk/core/config/item/b;)V

    new-instance v1, Lcom/kwad/sdk/core/config/d$1;

    invoke-direct {v1, v0}, Lcom/kwad/sdk/core/config/d$1;-><init>(Landroid/content/Context;)V

    invoke-static {v1}, Lcom/kwad/sdk/utils/g;->execute(Ljava/lang/Runnable;)V

    :cond_0
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/b;->getValue()Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_1

    return-object v0

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/b;->zZ()Ljava/lang/Object;

    move-result-object p0

    return-object p0
.end method

.method public static b(Lcom/kwad/sdk/core/config/item/k;)Z
    .locals 3

    invoke-static {p0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz v0, :cond_1

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    if-lez p0, :cond_0

    return v1

    :cond_0
    return v2

    :cond_1
    invoke-virtual {p0}, Lcom/kwad/sdk/core/config/item/k;->zZ()Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/lang/Integer;

    invoke-virtual {p0}, Ljava/lang/Integer;->intValue()I

    move-result p0

    if-lez p0, :cond_2

    return v1

    :cond_2
    return v2
.end method

.method public static c(Lcom/kwad/sdk/core/response/model/SdkConfigData;)V
    .locals 1

    const-class v0, Lcom/kwad/sdk/core/config/d;

    monitor-enter v0

    :try_start_0
    sput-object p0, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    monitor-exit v0

    return-void

    :catchall_0
    move-exception p0

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw p0
.end method

.method public static gF()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alP:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static getLogObiwanData()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alU:Lcom/kwad/sdk/core/config/item/l;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/l;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getUserAgent()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alD:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static isCanUseTk()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alr:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    return v0
.end method

.method public static isLoaded()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/d;->amz:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    return v0
.end method

.method public static vK()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amm:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static xA()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akK:Lcom/kwad/sdk/core/config/item/q;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static xB()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alC:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xC()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alE:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xE()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alY:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static xF()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alZ:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static xG()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    if-eqz v0, :cond_0

    sget-object v0, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/SdkConfigData;->goodIdcThresholdMs:I

    return v0

    :cond_0
    const/16 v0, 0xc8

    return v0
.end method

.method public static xH()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amb:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static xI()D
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alL:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    float-to-double v0, v0

    return-wide v0
.end method

.method public static xJ()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amp:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static xN()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amy:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static xr()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akm:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static xs()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public static xt()Z
    .locals 2

    const-class v0, Lcom/kwad/sdk/components/DevelopMangerComponents;

    invoke-static {v0}, Lcom/kwad/sdk/components/c;->f(Ljava/lang/Class;)Lcom/kwad/sdk/components/a;

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akq:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xu()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alc:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xv()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->ale:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xw()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->ald:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xx()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alb:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static xy()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alp:Lcom/kwad/sdk/core/config/item/h;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/h;->getImei()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static xz()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alp:Lcom/kwad/sdk/core/config/item/h;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/h;->getOaid()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static yX()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->aku:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static yY()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akv:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method private static yZ()V
    .locals 0
    .annotation runtime Lcom/ksad/annotation/invoker/ForInvoker;
        methodId = "initConfigList"
    .end annotation

    invoke-static {}, Lcom/kwad/components/ad/d/a;->init()V

    invoke-static {}, Lcom/kwad/components/ad/feed/a/a;->init()V

    invoke-static {}, Lcom/kwad/components/ad/fullscreen/a/a;->init()V

    invoke-static {}, Lcom/kwad/components/ad/interstitial/a/a;->init()V

    invoke-static {}, Lcom/kwad/components/ad/reward/a/a;->init()V

    invoke-static {}, Lcom/kwad/components/ad/splashscreen/b/a;->init()V

    return-void
.end method

.method public static zA()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akB:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static zB()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alX:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zC()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akz:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zD()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alG:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zE()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alF:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zF()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alH:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zG()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alI:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static zH()F
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alJ:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const/4 v1, 0x0

    cmpl-float v1, v0, v1

    if-lez v1, :cond_0

    const/high16 v1, 0x3f800000    # 1.0f

    cmpg-float v1, v0, v1

    if-gtz v1, :cond_0

    goto :goto_0

    :cond_0
    const v0, 0x3e99999a    # 0.3f

    :goto_0
    return v0
.end method

.method public static zI()F
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alK:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    return v0
.end method

.method public static zJ()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alM:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static zK()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alQ:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    if-lez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zL()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alW:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zM()J
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alV:Lcom/kwad/sdk/core/config/item/m;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/m;->Ag()Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public static zN()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->ama:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Ae()Z

    move-result v0

    return v0
.end method

.method public static zO()Lcom/kwad/sdk/core/network/idc/a/a;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amc:Lcom/kwad/sdk/core/config/item/i;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/i;->getValue()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/sdk/core/network/idc/a/a;

    return-object v0
.end method

.method public static zP()J
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amd:Lcom/kwad/sdk/core/config/item/m;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/m;->Ag()Ljava/lang/Long;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Long;->longValue()J

    move-result-wide v0

    return-wide v0
.end method

.method public static zQ()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->ame:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zR()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amf:Lcom/kwad/sdk/core/config/item/g;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/g;->Ad()Ljava/lang/Float;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Float;->floatValue()F

    move-result v0

    const/high16 v1, 0x3f800000    # 1.0f

    cmpl-float v0, v0, v1

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zS()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amg:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Ae()Z

    move-result v0

    return v0
.end method

.method public static zT()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->ami:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Ae()Z

    move-result v0

    return v0
.end method

.method public static zU()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amj:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zV()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amk:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zW()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->aml:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zX()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amo:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zY()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amq:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static za()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akM:Lcom/kwad/sdk/core/config/item/q;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static zb()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akJ:Lcom/kwad/sdk/core/config/item/l;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/l;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zc()Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "()",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akL:Lcom/kwad/sdk/core/config/item/q;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/q;->Ah()Ljava/util/List;

    move-result-object v0

    return-object v0
.end method

.method public static zd()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->amh:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static ze()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akE:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static zf()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akG:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zg()Ljava/lang/String;
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akH:Lcom/kwad/sdk/core/config/item/p;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/p;->getValue()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static zh()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akr:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zi()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->aks:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zj()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akt:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zk()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akT:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zl()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akU:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zm()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akV:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zn()J
    .locals 4

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akW:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    int-to-long v0, v0

    const-wide/32 v2, 0xea60

    mul-long/2addr v0, v2

    return-wide v0
.end method

.method public static zo()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alf:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zp()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alg:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zq()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->aln:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zr()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alo:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public static zs()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alt:Lcom/kwad/sdk/core/config/item/d;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/d;->Aa()Ljava/lang/Boolean;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    if-nez v0, :cond_0

    const/4 v0, 0x1

    return v0

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zt()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->als:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->a(Lcom/kwad/sdk/core/config/item/d;)Z

    move-result v0

    return v0
.end method

.method public static zu()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alv:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zv()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alw:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method

.method public static zw()Lcom/kwad/sdk/core/response/model/SdkConfigData;
    .locals 3

    sget-object v0, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    if-nez v0, :cond_2

    const-class v0, Lcom/kwad/sdk/core/config/d;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    if-nez v1, :cond_1

    new-instance v1, Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-direct {v1}, Lcom/kwad/sdk/core/response/model/SdkConfigData;-><init>()V

    sput-object v1, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HD()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/kwad/sdk/utils/y;->cg(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v2
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    if-nez v2, :cond_0

    :try_start_1
    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, v1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    sget-object v1, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    invoke-virtual {v1, v2}, Lcom/kwad/sdk/core/response/model/SdkConfigData;->parseJson(Lorg/json/JSONObject;)V
    :try_end_1
    .catch Lorg/json/JSONException; {:try_start_1 .. :try_end_1} :catch_0
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    goto :goto_0

    :catch_0
    move-exception v1

    :try_start_2
    invoke-static {v1}, Lcom/kwad/sdk/core/e/c;->printStackTrace(Ljava/lang/Throwable;)V

    goto :goto_0

    :cond_0
    const-string v1, "SdkConfigManager"

    const-string v2, "configCache is empty"

    invoke-static {v1, v2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    monitor-exit v0

    goto :goto_1

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_2
    .catchall {:try_start_2 .. :try_end_2} :catchall_0

    throw v1

    :cond_2
    :goto_1
    sget-object v0, Lcom/kwad/sdk/core/config/d;->amA:Lcom/kwad/sdk/core/response/model/SdkConfigData;

    return-object v0
.end method

.method public static zx()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akx:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zy()Z
    .locals 2

    sget-object v0, Lcom/kwad/sdk/core/config/c;->aky:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    const/4 v1, 0x1

    if-ne v0, v1, :cond_0

    return v1

    :cond_0
    const/4 v0, 0x0

    return v0
.end method

.method public static zz()I
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->akA:Lcom/kwad/sdk/core/config/item/k;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/config/item/k;->Af()Ljava/lang/Integer;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    return v0
.end method
