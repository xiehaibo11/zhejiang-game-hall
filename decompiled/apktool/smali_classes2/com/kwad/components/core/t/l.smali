.class public Lcom/kwad/components/core/t/l;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/components/core/t/l$b;,
        Lcom/kwad/components/core/t/l$a;
    }
.end annotation


# static fields
.field private static volatile Rt:Lcom/kwad/components/core/t/l;


# instance fields
.field private Ru:Landroid/hardware/SensorManager;

.field private final Rv:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/kwad/components/core/t/l$a;",
            ">;"
        }
    .end annotation
.end field

.field private final Rw:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/util/Set<",
            "Landroid/hardware/SensorEventListener;",
            ">;>;"
        }
    .end annotation
.end field


# direct methods
.method private constructor <init>()V
    .locals 1

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/t/l;->Rv:Ljava/util/Map;

    new-instance v0, Ljava/util/concurrent/ConcurrentHashMap;

    invoke-direct {v0}, Ljava/util/concurrent/ConcurrentHashMap;-><init>()V

    iput-object v0, p0, Lcom/kwad/components/core/t/l;->Rw:Ljava/util/Map;

    return-void
.end method

.method static synthetic a(Lcom/kwad/components/core/t/l;Ljava/lang/String;Landroid/hardware/SensorEvent;)V
    .locals 0

    invoke-direct {p0, p1, p2}, Lcom/kwad/components/core/t/l;->a(Ljava/lang/String;Landroid/hardware/SensorEvent;)V

    return-void
.end method

.method private a(Ljava/lang/String;ILandroid/hardware/Sensor;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/components/core/t/l;->aB(Ljava/lang/String;)Lcom/kwad/components/core/t/l$a;

    move-result-object p1

    invoke-static {p2}, Lcom/kwad/components/core/t/l;->aJ(I)I

    move-result p2

    invoke-direct {p0}, Lcom/kwad/components/core/t/l;->getSensorManager()Landroid/hardware/SensorManager;

    move-result-object v0

    invoke-virtual {v0, p1, p3, p2}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    return-void
.end method

.method private a(Ljava/lang/String;Landroid/hardware/SensorEvent;)V
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Rw:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/util/Set;

    if-eqz p1, :cond_0

    invoke-interface {p1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p1

    :goto_0
    invoke-interface {p1}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-interface {p1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/hardware/SensorEventListener;

    invoke-interface {v0, p2}, Landroid/hardware/SensorEventListener;->onSensorChanged(Landroid/hardware/SensorEvent;)V

    goto :goto_0

    :cond_0
    return-void
.end method

.method private aA(Ljava/lang/String;)V
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Rv:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/t/l$a;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/kwad/components/core/t/l;->Rv:Ljava/util/Map;

    invoke-interface {v1, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    invoke-direct {p0}, Lcom/kwad/components/core/t/l;->getSensorManager()Landroid/hardware/SensorManager;

    move-result-object p1

    invoke-virtual {p1, v0}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    :cond_0
    return-void
.end method

.method private aB(Ljava/lang/String;)Lcom/kwad/components/core/t/l$a;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Rv:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/kwad/components/core/t/l$a;

    if-nez v0, :cond_0

    new-instance v0, Lcom/kwad/components/core/t/l$a;

    invoke-direct {v0, p1, p0}, Lcom/kwad/components/core/t/l$a;-><init>(Ljava/lang/String;Lcom/kwad/components/core/t/l;)V

    iget-object v1, p0, Lcom/kwad/components/core/t/l;->Rv:Ljava/util/Map;

    invoke-interface {v1, p1, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-object v0
.end method

.method private aI(I)Landroid/hardware/Sensor;
    .locals 2

    invoke-direct {p0}, Lcom/kwad/components/core/t/l;->getSensorManager()Landroid/hardware/SensorManager;

    move-result-object v0

    const/4 v1, 0x0

    if-nez v0, :cond_0

    return-object v1

    :cond_0
    const/4 v0, 0x1

    if-eq p1, v0, :cond_2

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    return-object v1

    :cond_1
    invoke-direct {p0}, Lcom/kwad/components/core/t/l;->getSensorManager()Landroid/hardware/SensorManager;

    move-result-object p1

    const/4 v0, 0x4

    :goto_0
    invoke-virtual {p1, v0}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object p1

    return-object p1

    :cond_2
    invoke-direct {p0}, Lcom/kwad/components/core/t/l;->getSensorManager()Landroid/hardware/SensorManager;

    move-result-object p1

    const/16 v0, 0xa

    goto :goto_0
.end method

.method private static aJ(I)I
    .locals 1

    const/4 v0, -0x3

    if-eq p0, v0, :cond_2

    const/4 v0, -0x2

    if-eq p0, v0, :cond_1

    const/4 v0, -0x1

    if-eq p0, v0, :cond_0

    const/4 p0, 0x3

    return p0

    :cond_0
    const/4 p0, 0x0

    return p0

    :cond_1
    const/4 p0, 0x1

    return p0

    :cond_2
    const/4 p0, 0x2

    return p0
.end method

.method private getSensorManager()Landroid/hardware/SensorManager;
    .locals 2

    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Ru:Landroid/hardware/SensorManager;

    if-nez v0, :cond_0

    invoke-static {}, Lcom/kwad/sdk/service/ServiceProvider;->getContext()Landroid/content/Context;

    move-result-object v0

    const-string v1, "sensor"

    invoke-virtual {v0, v1}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Landroid/hardware/SensorManager;

    iput-object v0, p0, Lcom/kwad/components/core/t/l;->Ru:Landroid/hardware/SensorManager;

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Ru:Landroid/hardware/SensorManager;

    return-object v0
.end method

.method private static l(II)Ljava/lang/String;
    .locals 1

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static qr()Lcom/kwad/components/core/t/l;
    .locals 2

    sget-object v0, Lcom/kwad/components/core/t/l;->Rt:Lcom/kwad/components/core/t/l;

    if-nez v0, :cond_1

    const-class v0, Lcom/kwad/components/core/t/l;

    monitor-enter v0

    :try_start_0
    sget-object v1, Lcom/kwad/components/core/t/l;->Rt:Lcom/kwad/components/core/t/l;

    if-nez v1, :cond_0

    new-instance v1, Lcom/kwad/components/core/t/l;

    invoke-direct {v1}, Lcom/kwad/components/core/t/l;-><init>()V

    sput-object v1, Lcom/kwad/components/core/t/l;->Rt:Lcom/kwad/components/core/t/l;

    :cond_0
    monitor-exit v0

    goto :goto_0

    :catchall_0
    move-exception v1

    monitor-exit v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    throw v1

    :cond_1
    :goto_0
    sget-object v0, Lcom/kwad/components/core/t/l;->Rt:Lcom/kwad/components/core/t/l;

    return-object v0
.end method


# virtual methods
.method public final a(IILandroid/hardware/SensorEventListener;Lcom/kwad/components/core/t/l$b;)V
    .locals 1

    invoke-direct {p0, p1}, Lcom/kwad/components/core/t/l;->aI(I)Landroid/hardware/Sensor;

    move-result-object v0

    if-nez v0, :cond_0

    invoke-interface {p4}, Lcom/kwad/components/core/t/l$b;->onFailed()V

    return-void

    :cond_0
    invoke-static {p1, p2}, Lcom/kwad/components/core/t/l;->l(II)Ljava/lang/String;

    move-result-object p1

    iget-object p4, p0, Lcom/kwad/components/core/t/l;->Rw:Ljava/util/Map;

    invoke-interface {p4, p1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p4

    check-cast p4, Ljava/util/Set;

    if-eqz p4, :cond_1

    invoke-interface {p4, p3}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    return-void

    :cond_1
    new-instance p4, Ljava/util/HashSet;

    invoke-direct {p4}, Ljava/util/HashSet;-><init>()V

    invoke-interface {p4, p3}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    iget-object p3, p0, Lcom/kwad/components/core/t/l;->Rw:Ljava/util/Map;

    invoke-interface {p3, p1, p4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    invoke-direct {p0, p1, p2, v0}, Lcom/kwad/components/core/t/l;->a(Ljava/lang/String;ILandroid/hardware/Sensor;)V

    return-void
.end method

.method public final a(Landroid/hardware/SensorEventListener;)V
    .locals 4

    iget-object v0, p0, Lcom/kwad/components/core/t/l;->Rw:Ljava/util/Map;

    invoke-interface {v0}, Ljava/util/Map;->entrySet()Ljava/util/Set;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v0

    :cond_0
    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/util/Map$Entry;

    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Set;

    invoke-interface {v2}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :cond_1
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_2

    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Landroid/hardware/SensorEventListener;

    invoke-virtual {v3, p1}, Ljava/lang/Object;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-interface {v2}, Ljava/util/Iterator;->remove()V

    :cond_2
    invoke-interface {v1}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/util/Set;

    invoke-interface {v2}, Ljava/util/Set;->size()I

    move-result v2

    if-nez v2, :cond_0

    invoke-interface {v1}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    invoke-direct {p0, v1}, Lcom/kwad/components/core/t/l;->aA(Ljava/lang/String;)V

    goto :goto_0

    :cond_3
    return-void
.end method
