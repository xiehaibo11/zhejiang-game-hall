.class Lcom/sigmob/sdk/b$a;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/sigmob/sdk/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:J

.field private c:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field

.field private d:Ljava/lang/String;

.field private e:I

.field private f:Z

.field private g:Z

.field private h:Z


# direct methods
.method constructor <init>()V
    .locals 4

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    iput-object v0, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    const/4 v0, 0x1

    iput-boolean v0, p0, Lcom/sigmob/sdk/b$a;->f:Z

    const/4 v0, 0x0

    iput-boolean v0, p0, Lcom/sigmob/sdk/b$a;->g:Z

    iput-boolean v0, p0, Lcom/sigmob/sdk/b$a;->h:Z

    invoke-static {}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->getInstance()Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    move-result-object v0

    invoke-static {}, Lcom/sigmob/sdk/b;->d()Landroid/app/Application;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->initialize(Landroid/app/Application;)V

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/b$a;->b:J

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "session_start: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v1, p0, Lcom/sigmob/sdk/b$a;->b:J

    invoke-virtual {v0, v1, v2}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v1, ":"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    iget-wide v1, p0, Lcom/sigmob/sdk/b$a;->b:J

    invoke-static {v1, v2}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v1

    const-string v2, "session_start"

    const-string v3, "0"

    invoke-static {v2, v0, v3, v1}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->ActiveTracking(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntityActive;

    invoke-static {}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->getInstance()Lcom/czhj/sdk/common/utils/AdLifecycleManager;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/czhj/sdk/common/utils/AdLifecycleManager;->addLifecycleListener(Lcom/czhj/sdk/common/utils/AdLifecycleManager$LifecycleListener;)V

    return-void
.end method


# virtual methods
.method public a()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/b$a;->e:I

    return v0
.end method

.method public a(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public a(Landroid/app/Activity;IILandroid/content/Intent;)V
    .locals 0

    return-void
.end method

.method public b(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onCreate(Landroid/app/Activity;)V
    .locals 1

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/b$a;->d:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    invoke-interface {v0, p1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->g:Z

    return-void
.end method

.method public onDestroy(Landroid/app/Activity;)V
    .locals 6

    iget-object v0, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-nez p1, :cond_0

    iget-boolean p1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    if-eqz p1, :cond_0

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/sigmob/sdk/b$a;->b:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onActivityDestroyed session_end: "

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "session_end"

    invoke-static {v1, p1, v2, v0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->ActiveTracking(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntityActive;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/b$a;->b:J

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-nez p1, :cond_1

    const/4 p1, 0x1

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->h:Z

    :cond_1
    return-void
.end method

.method public onPause(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public onResume(Landroid/app/Activity;)V
    .locals 4

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/sigmob/sdk/b$a;->d:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    xor-int/2addr v0, v1

    iput-boolean v0, p0, Lcom/sigmob/sdk/b$a;->g:Z

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/b$a;->d:Ljava/lang/String;

    iget-boolean v0, p0, Lcom/sigmob/sdk/b$a;->g:Z

    if-eqz v0, :cond_0

    new-instance v0, Ljava/lang/ref/WeakReference;

    invoke-direct {v0, p1}, Ljava/lang/ref/WeakReference;-><init>(Ljava/lang/Object;)V

    invoke-static {v0}, Lcom/sigmob/sdk/b;->a(Ljava/lang/ref/WeakReference;)Ljava/lang/ref/WeakReference;

    :cond_0
    iget-boolean p1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/sigmob/sdk/b$a;->h:Z

    if-eqz p1, :cond_2

    :cond_1
    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->h:Z

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object p1

    invoke-virtual {p1}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    iput-wide v2, p0, Lcom/sigmob/sdk/b$a;->b:J

    iput-boolean v1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onActivityResumed session_start: "

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-wide v0, p0, Lcom/sigmob/sdk/b$a;->b:J

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v0, ":"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    iget-wide v0, p0, Lcom/sigmob/sdk/b$a;->b:J

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "session_start"

    const-string v2, "0"

    invoke-static {v1, p1, v2, v0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->ActiveTracking(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntityActive;

    :cond_2
    return-void
.end method

.method public onStart(Landroid/app/Activity;)V
    .locals 0

    iget p1, p0, Lcom/sigmob/sdk/b$a;->e:I

    add-int/lit8 p1, p1, 0x1

    iput p1, p0, Lcom/sigmob/sdk/b$a;->e:I

    return-void
.end method

.method public onStop(Landroid/app/Activity;)V
    .locals 6

    iget v0, p0, Lcom/sigmob/sdk/b$a;->e:I

    const/4 v1, 0x1

    sub-int/2addr v0, v1

    iput v0, p0, Lcom/sigmob/sdk/b$a;->e:I

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iget-object v0, p0, Lcom/sigmob/sdk/b$a;->d:Ljava/lang/String;

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-boolean p1, p0, Lcom/sigmob/sdk/b$a;->g:Z

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->c:Ljava/util/Map;

    invoke-interface {p1}, Ljava/util/Map;->size()I

    move-result p1

    if-ne p1, v1, :cond_1

    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iget-wide v2, p0, Lcom/sigmob/sdk/b$a;->b:J

    sub-long v2, v0, v2

    const-wide/16 v4, 0x3e8

    div-long/2addr v2, v4

    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "onActivityStopped session_end: "

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v0, v1}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    const-string v4, ":"

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-virtual {p1, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, v2, v3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/b$a;->a:Ljava/lang/String;

    invoke-static {v2, v3}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    const-string v1, "session_end"

    invoke-static {v1, p1, v2, v0}, Lcom/sigmob/sdk/base/mta/PointEntityActive;->ActiveTracking(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lcom/sigmob/sdk/base/mta/PointEntityActive;

    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    iput-wide v0, p0, Lcom/sigmob/sdk/b$a;->b:J

    const/4 p1, 0x0

    iput-boolean p1, p0, Lcom/sigmob/sdk/b$a;->f:Z

    :cond_1
    return-void
.end method
