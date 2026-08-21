.class public final Lcom/kwad/components/offline/tk/b;
.super Lcom/kwad/components/core/offline/init/a;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/offline/tk/b$a;
    }
.end annotation


# static fields
.field private static Zz:J


# instance fields
.field private final ZA:Ljava/util/concurrent/atomic/AtomicBoolean;

.field private final Zy:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/kwad/components/core/offline/api/b/a;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/offline/init/a;-><init>()V

    new-instance v0, Ljava/util/concurrent/CopyOnWriteArrayList;

    invoke-direct {v0}, Ljava/util/concurrent/CopyOnWriteArrayList;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/offline/tk/b;->Zy:Ljava/util/List;

    new-instance v0, Ljava/util/concurrent/atomic/AtomicBoolean;

    const/4 v1, 0x0

    invoke-direct {v0, v1}, Ljava/util/concurrent/atomic/AtomicBoolean;-><init>(Z)V

    iput-object v0, p0, Lcom/kwad/components/offline/tk/b;->ZA:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/components/offline/tk/b;-><init>()V

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/offline/tk/b;)Ljava/util/concurrent/atomic/AtomicBoolean;
    .locals 0

    iget-object p0, p0, Lcom/kwad/components/offline/tk/b;->ZA:Ljava/util/concurrent/atomic/AtomicBoolean;

    return-object p0
.end method

.method static synthetic a(Lcom/kwad/components/offline/tk/b;IIJJ)V
    .locals 0

    invoke-direct/range {p0 .. p6}, Lcom/kwad/components/offline/tk/b;->b(IIJJ)V

    return-void
.end method

.method public static am(Landroid/content/Context;)V
    .locals 2

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sput-wide v0, Lcom/kwad/components/offline/tk/b;->Zz:J

    invoke-static {}, Lcom/kwad/components/offline/tk/b;->sL()Lcom/kwad/components/offline/tk/b;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/kwad/components/offline/tk/b;->init(Landroid/content/Context;)V

    return-void
.end method

.method private b(IIJJ)V
    .locals 9

    iget-object v0, p0, Lcom/kwad/components/offline/tk/b;->Zy:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    move-object v2, v1

    check-cast v2, Lcom/kwad/components/core/offline/api/b/a;

    move v3, p1

    move v4, p2

    move-wide v5, p3

    move-wide v7, p5

    invoke-interface/range {v2 .. v8}, Lcom/kwad/components/core/offline/api/b/a;->a(IIJJ)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method static synthetic b(Lcom/kwad/components/offline/tk/b;)V
    .locals 0

    invoke-virtual {p0}, Lcom/kwad/components/offline/tk/b;->om()V

    return-void
.end method

.method public static sL()Lcom/kwad/components/offline/tk/b;
    .locals 1

    invoke-static {}, Lcom/kwad/components/offline/tk/b$a;->sM()Lcom/kwad/components/offline/tk/b;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Lcom/kwad/components/core/offline/api/b/a;)V
    .locals 8

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/tk/b;->ZA:Ljava/util/concurrent/atomic/AtomicBoolean;

    invoke-virtual {v0}, Ljava/util/concurrent/atomic/AtomicBoolean;->get()Z

    move-result v0

    if-eqz v0, :cond_1

    const/4 v2, 0x1

    const/4 v3, 0x1

    const-wide/16 v4, 0x0

    const-wide/16 v6, 0x0

    move-object v1, p1

    invoke-interface/range {v1 .. v7}, Lcom/kwad/components/core/offline/api/b/a;->a(IIJJ)V

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/offline/tk/b;->Zy:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Lcom/kwad/components/core/offline/api/b/a;)V
    .locals 1

    if-nez p1, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/offline/tk/b;->Zy:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    return-void
.end method

.method public final b(Landroid/content/Context;Ljava/lang/ClassLoader;)Z
    .locals 12

    const-string v0, "com.kwad.tachikoma.TkOfflineCompoImpl"

    invoke-virtual {p0, p2, v0}, Lcom/kwad/components/offline/tk/b;->a(Ljava/lang/ClassLoader;Ljava/lang/String;)Lcom/kwad/components/offline/api/IOfflineCompo;

    move-result-object p2

    check-cast p2, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;

    if-nez p2, :cond_0

    const-string p1, "TkInitModule"

    const-string p2, "onPluginLoaded components is null"

    invoke-static {p1, p2}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1

    :cond_0
    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v6

    invoke-static {}, Landroid/os/SystemClock;->elapsedRealtime()J

    move-result-wide v0

    sget-wide v2, Lcom/kwad/components/offline/tk/b;->Zz:J

    sub-long v4, v0, v2

    invoke-virtual {p0}, Lcom/kwad/components/offline/tk/b;->oh()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0}, Lcom/kwad/components/offline/tk/b;->oi()Ljava/lang/String;

    move-result-object v1

    invoke-static {p1, v0, v1}, Lcom/kwad/sdk/utils/y;->h(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)Z

    move-result v3

    invoke-virtual {p0}, Lcom/kwad/components/offline/tk/b;->getTag()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "offlineComponent load "

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v2, " components classLoader: "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {v2}, Ljava/lang/Class;->getClassLoader()Ljava/lang/ClassLoader;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/kwad/sdk/core/e/c;->d(Ljava/lang/String;Ljava/lang/String;)V

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->HE()Lcom/kwad/sdk/api/SdkConfig;

    move-result-object v9

    new-instance v10, Lcom/kwad/components/offline/tk/c;

    invoke-direct {v10}, Lcom/kwad/components/offline/tk/c;-><init>()V

    new-instance v11, Lcom/kwad/components/offline/tk/b$1;

    move-object v0, v11

    move-object v1, p0

    move-object v2, p2

    move-object v8, p1

    invoke-direct/range {v0 .. v8}, Lcom/kwad/components/offline/tk/b$1;-><init>(Lcom/kwad/components/offline/tk/b;Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;ZJJLandroid/content/Context;)V

    invoke-interface {p2, p1, v9, v10, v11}, Lcom/kwad/components/offline/api/tk/ITkOfflineCompo;->initReal(Landroid/content/Context;Lcom/kwad/sdk/api/SdkConfig;Lcom/kwad/components/offline/api/tk/ITkOfflineCompoInitConfig;Lcom/kwad/components/offline/api/InitCallBack;)V

    const/4 p1, 0x1

    return p1
.end method

.method public final getTag()Ljava/lang/String;
    .locals 1

    const-string v0, "TkInitModule"

    return-object v0
.end method

.method public final isEnabled()Z
    .locals 1

    sget-object v0, Lcom/kwad/sdk/core/config/c;->alr:Lcom/kwad/sdk/core/config/item/d;

    invoke-static {v0}, Lcom/kwad/sdk/core/config/d;->b(Lcom/kwad/sdk/core/config/item/b;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    return v0
.end method

.method public final oe()I
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final of()Z
    .locals 1

    const/4 v0, 0x0

    return v0
.end method

.method public final oh()Ljava/lang/String;
    .locals 1

    const-string v0, "com.kwad.components.tachikoma"

    return-object v0
.end method

.method public final oi()Ljava/lang/String;
    .locals 1

    const-string v0, "3.3.42.1"

    return-object v0
.end method

.method public final oj()Ljava/lang/String;
    .locals 1

    const-string v0, "https://p1-lm.adkwai.com/udata/pkg/KS-Android-KSAdSDk/offline_components/tk/ks_so-tachikomaNoSoRelease-3.3.42.1-0c3ca3fb40-292.zip"

    return-object v0
.end method

.method public final ok()Ljava/lang/String;
    .locals 1

    const-string v0, "a9773d86c23129ad0598b6ab5adfc8a8"

    return-object v0
.end method

.method public final ol()Ljava/lang/String;
    .locals 1

    const-string v0, "ks_tk_134ad9665"

    return-object v0
.end method
