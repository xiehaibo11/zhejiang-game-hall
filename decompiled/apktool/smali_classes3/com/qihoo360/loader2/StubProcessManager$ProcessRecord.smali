.class final Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;
.super Ljava/lang/Object;
.source "StubProcessManager.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/qihoo360/loader2/StubProcessManager;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1a
    name = "ProcessRecord"
.end annotation


# instance fields
.field activities:I

.field binder:Landroid/os/IBinder;

.field binders:I

.field client:Lcom/qihoo360/loader2/IPluginClient;

.field final index:I

.field mobified:J

.field pid:I

.field plugin:Ljava/lang/String;

.field services:I

.field state:I


# direct methods
.method constructor <init>(II)V
    .locals 0

    .line 450
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 451
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->index:I

    .line 452
    iput p2, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    return-void
.end method

.method private killProcess(Ljava/util/List;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Landroid/app/ActivityManager$RunningAppProcessInfo;",
            ">;)V"
        }
    .end annotation

    .line 522
    iget v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->index:I

    invoke-static {p1, v0}, Lcom/qihoo360/loader2/StubProcessManager;->access$100(Ljava/util/List;I)I

    move-result p1

    if-lez p1, :cond_0

    .line 525
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "ppr k i: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 527
    invoke-static {p1}, Landroid/os/Process;->killProcess(I)V

    .line 528
    invoke-static {p1}, Lcom/qihoo360/loader2/StubProcessManager;->access$200(I)V

    :cond_0
    return-void
.end method


# virtual methods
.method allocate(Ljava/lang/String;)V
    .locals 2

    const/4 v0, 0x1

    .line 456
    iput v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    .line 457
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    .line 458
    iput-object p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->plugin:Ljava/lang/String;

    const/4 p1, 0x0

    .line 459
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    const/4 v0, 0x0

    .line 460
    iput-object v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binder:Landroid/os/IBinder;

    .line 461
    iput-object v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    .line 462
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    .line 463
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    .line 464
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    return-void
.end method

.method calculateMatchPriority(Ljava/lang/String;)I
    .locals 4

    .line 492
    iget-object v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->plugin:Ljava/lang/String;

    invoke-static {p1, v0}, Landroid/text/TextUtils;->equals(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Z

    move-result p1

    if-eqz p1, :cond_0

    const p1, 0x7fffffff

    return p1

    .line 495
    :cond_0
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    if-nez p1, :cond_1

    const p1, 0x7ffffffe

    return p1

    :cond_1
    const/4 v0, 0x4

    if-ne p1, v0, :cond_2

    const p1, 0x7ffffffd

    return p1

    .line 503
    :cond_2
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    sub-long/2addr v0, v2

    const-wide/16 v2, 0x2710

    cmp-long p1, v0, v2

    if-lez p1, :cond_3

    const p1, 0x7ffffffc

    return p1

    .line 507
    :cond_3
    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    if-gtz p1, :cond_4

    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    if-gtz p1, :cond_4

    iget p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    if-gtz p1, :cond_4

    const p1, 0x7ffffffb

    return p1

    :cond_4
    const/4 p1, 0x0

    return p1
.end method

.method resetAllocate(Ljava/lang/String;Ljava/util/List;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Landroid/app/ActivityManager$RunningAppProcessInfo;",
            ">;)V"
        }
    .end annotation

    .line 516
    invoke-direct {p0, p2}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->killProcess(Ljava/util/List;)V

    .line 517
    invoke-virtual {p0, p1}, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->allocate(Ljava/lang/String;)V

    return-void
.end method

.method setClient(Landroid/os/IBinder;Lcom/qihoo360/loader2/IPluginClient;)V
    .locals 0

    .line 473
    iput-object p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binder:Landroid/os/IBinder;

    .line 474
    iput-object p2, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    return-void
.end method

.method setRunning(I)V
    .locals 1

    const/4 v0, 0x2

    .line 468
    iput v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    .line 469
    iput p1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    return-void
.end method

.method setStoped()V
    .locals 1

    const/4 v0, 0x4

    .line 478
    iput v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    const/4 v0, 0x0

    .line 479
    iput v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    const/4 v0, 0x0

    .line 480
    iput-object v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binder:Landroid/os/IBinder;

    .line 481
    iput-object v0, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    return-void
.end method

.method public toString()Ljava/lang/String;
    .locals 3

    .line 534
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    .line 535
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " {index="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->index:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " state="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->state:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " mobified="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->mobified:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, " plugin="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->plugin:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, " pid="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->pid:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " binder="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binder:Landroid/os/IBinder;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " client="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->client:Lcom/qihoo360/loader2/IPluginClient;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, " activities="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->activities:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " services="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->services:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, " binders="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget v1, p0, Lcom/qihoo360/loader2/StubProcessManager$ProcessRecord;->binders:I

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "}"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 538
    :cond_0
    invoke-super {p0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
