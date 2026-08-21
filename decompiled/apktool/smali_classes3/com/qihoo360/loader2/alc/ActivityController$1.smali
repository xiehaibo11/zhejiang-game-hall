.class final Lcom/qihoo360/loader2/alc/ActivityController$1;
.super Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;
.source "ActivityController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/qihoo360/loader2/alc/ActivityController;->install2x()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x8
    name = null
.end annotation


# direct methods
.method constructor <init>()V
    .locals 0

    .line 102
    invoke-direct {p0}, Lcom/qihoo360/loader2/alc/IActivityWatcher$Stub;-><init>()V

    return-void
.end method


# virtual methods
.method public activityResuming(I)V
    .locals 3
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    .line 111
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$000()Ljava/util/Map;

    move-result-object p1

    const/4 v0, -0x1

    if-eqz p1, :cond_0

    .line 112
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$000()Ljava/util/Map;

    move-result-object p1

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    goto :goto_0

    :cond_0
    move p1, v0

    .line 115
    :goto_0
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$100()Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 116
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$100()Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->size()I

    move-result v0

    .line 118
    :cond_1
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_2

    .line 119
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "activityResuming: activities="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p1, " services="

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "ws000"

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 121
    :cond_2
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$200()Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    move-result-object p1

    if-eqz p1, :cond_3

    .line 122
    invoke-static {}, Lcom/qihoo360/loader2/alc/ActivityController;->access$200()Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;

    move-result-object p1

    invoke-interface {p1}, Lcom/qihoo360/loader2/alc/ActivityController$IActivityUpdate;->handleActivityUpdate()V

    :cond_3
    return-void
.end method

.method public closingSystemDialogs(Ljava/lang/String;)V
    .locals 0
    .annotation system Ldalvik/annotation/Throws;
        value = {
            Landroid/os/RemoteException;
        }
    .end annotation

    return-void
.end method
