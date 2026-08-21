.class final Lcom/mbridge/msdk/system/a$1;
.super Ljava/lang/Object;
.source "MBridgeSDKImpl.java"

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/system/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/system/a;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/system/a;)V
    .locals 0

    .line 91
    iput-object p1, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    .line 94
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/tools/o;->c()V

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    .line 139
    invoke-static {}, Lcom/mbridge/msdk/foundation/tools/o;->a()Lcom/mbridge/msdk/foundation/tools/o;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/tools/o;->d()V

    return-void
.end method

.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 2

    .line 118
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->b()I

    move-result p1

    .line 119
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onActivityPaused currentActivityNum:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "com.mbridge.msdk"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onActivityStarted(Landroid/app/Activity;)V
    .locals 4

    .line 99
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->b()I

    move-result v0

    .line 100
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "onActivityStarted currentActivityNum:"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    const-string v2, "com.mbridge.msdk"

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 101
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "onActivityStarted isCoolStart:"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    iget-boolean v3, v3, Lcom/mbridge/msdk/system/a;->b:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v2, v1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    .line 102
    iget-object v1, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    iget-boolean v1, v1, Lcom/mbridge/msdk/system/a;->b:Z

    if-nez v1, :cond_0

    if-nez v0, :cond_0

    const-string v1, "1"

    .line 104
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Ljava/lang/String;)V

    .line 106
    :cond_0
    iget-object v1, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    iget-boolean v1, v1, Lcom/mbridge/msdk/system/a;->b:Z

    iget-object v2, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    invoke-static {v2}, Lcom/mbridge/msdk/system/a;->a(Lcom/mbridge/msdk/system/a;)Landroid/content/Context;

    move-result-object v2

    invoke-static {p1, v0, v1, v2}, Lcom/mbridge/msdk/click/c;->a(Landroid/app/Activity;IZLandroid/content/Context;)V

    .line 107
    iget-object p1, p0, Lcom/mbridge/msdk/system/a$1;->a:Lcom/mbridge/msdk/system/a;

    const/4 v1, 0x0

    iput-boolean v1, p1, Lcom/mbridge/msdk/system/a;->b:Z

    .line 108
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    add-int/lit8 v0, v0, 0x1

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/foundation/controller/a;->a(I)V

    return-void
.end method

.method public final onActivityStopped(Landroid/app/Activity;)V
    .locals 2

    .line 124
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->b()I

    move-result p1

    .line 125
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "onActivityStopped currentActivityNum:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "com.mbridge.msdk"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    const/4 v0, 0x1

    if-eq p1, v0, :cond_0

    if-nez p1, :cond_1

    :cond_0
    const-string v0, "2"

    .line 128
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Ljava/lang/String;)V

    .line 130
    :cond_1
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    add-int/lit8 p1, p1, -0x1

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->a(I)V

    return-void
.end method
