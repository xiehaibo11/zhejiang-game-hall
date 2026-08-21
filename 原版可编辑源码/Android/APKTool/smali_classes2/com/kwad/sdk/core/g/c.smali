.class public final Lcom/kwad/sdk/core/g/c;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/kwad/sdk/core/g/c$a;
    }
.end annotation


# instance fields
.field private volatile auH:Z

.field private auI:J

.field private auJ:D

.field private auK:[D

.field private auL:[D

.field private auM:Lcom/kwad/sdk/core/g/a;

.field private auN:Lcom/kwad/sdk/core/g/c$a;

.field private rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;


# direct methods
.method public constructor <init>(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;)V
    .locals 2

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/kwad/sdk/core/g/c;->auH:Z

    const-wide/16 v0, 0x0

    iput-wide v0, p0, Lcom/kwad/sdk/core/g/c;->auI:J

    const-wide v0, 0x3e112e0be0000000L    # 9.999999717180685E-10

    iput-wide v0, p0, Lcom/kwad/sdk/core/g/c;->auJ:D

    const/4 v0, 0x3

    new-array v1, v0, [D

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    new-array v0, v0, [D

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    iput-object p1, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    return-void

    nop

    :array_0
    .array-data 8
        0x0
        0x0
        0x0
    .end array-data

    :array_1
    .array-data 8
        0x0
        0x0
        0x0
    .end array-data
.end method

.method private CH()V
    .locals 6

    iget-boolean v0, p0, Lcom/kwad/sdk/core/g/c;->auH:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    const/4 v1, 0x0

    aget-wide v2, v0, v1

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(D)D

    move-result-wide v2

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    aget-wide v4, v0, v1

    invoke-static {v4, v5}, Ljava/lang/Math;->abs(D)D

    move-result-wide v4

    cmpl-double v0, v2, v4

    if-lez v0, :cond_1

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    iget-object v2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide v3, v2, v1

    aput-wide v3, v0, v1

    :cond_1
    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    const/4 v1, 0x1

    aget-wide v2, v0, v1

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(D)D

    move-result-wide v2

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    aget-wide v4, v0, v1

    invoke-static {v4, v5}, Ljava/lang/Math;->abs(D)D

    move-result-wide v4

    cmpl-double v0, v2, v4

    if-lez v0, :cond_2

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    iget-object v2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide v3, v2, v1

    aput-wide v3, v0, v1

    :cond_2
    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    const/4 v1, 0x2

    aget-wide v2, v0, v1

    invoke-static {v2, v3}, Ljava/lang/Math;->abs(D)D

    move-result-wide v2

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    aget-wide v4, v0, v1

    invoke-static {v4, v5}, Ljava/lang/Math;->abs(D)D

    move-result-wide v4

    cmpl-double v0, v2, v4

    if-lez v0, :cond_3

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    iget-object v2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide v3, v2, v1

    aput-wide v3, v0, v1

    :cond_3
    return-void
.end method

.method private CI()V
    .locals 5

    iget-boolean v0, p0, Lcom/kwad/sdk/core/g/c;->auH:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    if-nez v0, :cond_1

    return-void

    :cond_1
    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auM:Lcom/kwad/sdk/core/g/a;

    if-eqz v1, :cond_3

    iget-object v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->x:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v0, v0, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->rotateDegree:I

    int-to-double v0, v0

    iget-object v2, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->x:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v2, v2, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->direction:I

    const/4 v3, 0x0

    invoke-direct {p0, v3, v0, v1, v2}, Lcom/kwad/sdk/core/g/c;->a(IDI)Z

    move-result v0

    if-nez v0, :cond_2

    const/4 v0, 0x1

    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->y:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->rotateDegree:I

    int-to-double v1, v1

    iget-object v4, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object v4, v4, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->y:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v4, v4, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->direction:I

    invoke-direct {p0, v0, v1, v2, v4}, Lcom/kwad/sdk/core/g/c;->a(IDI)Z

    move-result v0

    if-nez v0, :cond_2

    const/4 v0, 0x2

    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->z:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v1, v1, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->rotateDegree:I

    int-to-double v1, v1

    iget-object v4, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    iget-object v4, v4, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;->z:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;

    iget v4, v4, Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateDegreeInfo;->direction:I

    invoke-direct {p0, v0, v1, v2, v4}, Lcom/kwad/sdk/core/g/c;->a(IDI)Z

    move-result v0

    if-eqz v0, :cond_3

    :cond_2
    iput-boolean v3, p0, Lcom/kwad/sdk/core/g/c;->auH:Z

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auM:Lcom/kwad/sdk/core/g/a;

    invoke-direct {p0}, Lcom/kwad/sdk/core/g/c;->CJ()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Lcom/kwad/sdk/core/g/a;->ab(Ljava/lang/String;)V

    const/4 v0, 0x3

    new-array v1, v0, [D

    fill-array-data v1, :array_0

    iput-object v1, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    new-array v0, v0, [D

    fill-array-data v0, :array_1

    iput-object v0, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    :cond_3
    return-void

    nop

    :array_0
    .array-data 8
        0x0
        0x0
        0x0
    .end array-data

    :array_1
    .array-data 8
        0x0
        0x0
        0x0
    .end array-data
.end method

.method private CJ()Ljava/lang/String;
    .locals 4

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "{\"x\": "

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    const/4 v2, 0x0

    aget-wide v2, v1, v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ",\"y\":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    const/4 v2, 0x1

    aget-wide v2, v1, v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, ",\"z\":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auK:[D

    const/4 v2, 0x2

    aget-wide v2, v1, v2

    invoke-virtual {v0, v2, v3}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/g/c;)J
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/g/c;->auI:J

    return-wide v0
.end method

.method static synthetic a(Lcom/kwad/sdk/core/g/c;J)J
    .locals 0

    iput-wide p1, p0, Lcom/kwad/sdk/core/g/c;->auI:J

    return-wide p1
.end method

.method private a(IDI)Z
    .locals 6

    const-wide/16 v0, 0x0

    cmpl-double v2, p2, v0

    const/4 v3, 0x0

    if-lez v2, :cond_3

    iget-object v2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide v4, v2, p1

    invoke-static {v4, v5}, Ljava/lang/Math;->abs(D)D

    move-result-wide v4

    cmpl-double p2, v4, p2

    if-ltz p2, :cond_3

    iget-object p2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide v4, p2, p1

    cmpl-double p2, v4, v0

    const/4 p3, 0x1

    if-lez p2, :cond_0

    if-eq p4, p3, :cond_1

    :cond_0
    iget-object p2, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    aget-wide p1, p2, p1

    cmpg-double p1, p1, v0

    if-gez p1, :cond_2

    const/4 p1, 0x2

    if-ne p4, p1, :cond_2

    :cond_1
    return v3

    :cond_2
    return p3

    :cond_3
    return v3
.end method

.method static synthetic b(Lcom/kwad/sdk/core/g/c;)D
    .locals 2

    iget-wide v0, p0, Lcom/kwad/sdk/core/g/c;->auJ:D

    return-wide v0
.end method

.method static synthetic c(Lcom/kwad/sdk/core/g/c;)[D
    .locals 0

    iget-object p0, p0, Lcom/kwad/sdk/core/g/c;->auL:[D

    return-object p0
.end method

.method static synthetic d(Lcom/kwad/sdk/core/g/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/g/c;->CH()V

    return-void
.end method

.method static synthetic e(Lcom/kwad/sdk/core/g/c;)V
    .locals 0

    invoke-direct {p0}, Lcom/kwad/sdk/core/g/c;->CI()V

    return-void
.end method


# virtual methods
.method public final declared-synchronized CG()V
    .locals 1

    monitor-enter p0

    const/4 v0, 0x1

    :try_start_0
    iput-boolean v0, p0, Lcom/kwad/sdk/core/g/c;->auH:Z
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception v0

    monitor-exit p0

    throw v0
.end method

.method public final a(Lcom/kwad/sdk/core/g/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/g/c;->auM:Lcom/kwad/sdk/core/g/a;

    return-void
.end method

.method public final a(Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/sdk/core/g/c;->rotateInfo:Lcom/kwad/sdk/core/response/model/AdMatrixInfo$RotateInfo;

    return-void
.end method

.method public final bg(Landroid/content/Context;)V
    .locals 3

    if-nez p1, :cond_0

    return-void

    :cond_0
    const-string v0, "sensor"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/SensorManager;

    const/4 v0, 0x4

    invoke-virtual {p1, v0}, Landroid/hardware/SensorManager;->getDefaultSensor(I)Landroid/hardware/Sensor;

    move-result-object v0

    if-nez v0, :cond_2

    iget-object p1, p0, Lcom/kwad/sdk/core/g/c;->auM:Lcom/kwad/sdk/core/g/a;

    if-eqz p1, :cond_1

    invoke-interface {p1}, Lcom/kwad/sdk/core/g/a;->lk()V

    :cond_1
    return-void

    :cond_2
    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;

    if-nez v1, :cond_3

    new-instance v1, Lcom/kwad/sdk/core/g/c$a;

    const/4 v2, 0x0

    invoke-direct {v1, p0, v2}, Lcom/kwad/sdk/core/g/c$a;-><init>(Lcom/kwad/sdk/core/g/c;B)V

    iput-object v1, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;

    :cond_3
    iget-object v1, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;

    const/4 v2, 0x2

    invoke-virtual {p1, v1, v0, v2}, Landroid/hardware/SensorManager;->registerListener(Landroid/hardware/SensorEventListener;Landroid/hardware/Sensor;I)Z

    return-void
.end method

.method public final declared-synchronized bh(Landroid/content/Context;)V
    .locals 1

    monitor-enter p0

    if-eqz p1, :cond_1

    :try_start_0
    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const-string v0, "sensor"

    invoke-virtual {p1, v0}, Landroid/content/Context;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Landroid/hardware/SensorManager;

    iget-object v0, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;

    invoke-virtual {p1, v0}, Landroid/hardware/SensorManager;->unregisterListener(Landroid/hardware/SensorEventListener;)V

    const/4 p1, 0x0

    iput-object p1, p0, Lcom/kwad/sdk/core/g/c;->auN:Lcom/kwad/sdk/core/g/c$a;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    monitor-exit p0

    return-void

    :catchall_0
    move-exception p1

    monitor-exit p0

    throw p1

    :cond_1
    :goto_0
    monitor-exit p0

    return-void
.end method
