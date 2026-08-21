.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$4;
.super Lcom/mbridge/msdk/foundation/same/e/a;
.source "NativeController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(JIZLjava/lang/String;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Z

.field final synthetic c:Ljava/util/UUID;

.field final synthetic d:Lcom/mbridge/msdk/foundation/same/e/a;

.field final synthetic e:J

.field final synthetic f:I

.field final synthetic g:Ljava/lang/String;

.field final synthetic h:Lcom/mbridge/msdk/mbnative/controller/NativeController;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController;Ljava/lang/String;ZLjava/util/UUID;Lcom/mbridge/msdk/foundation/same/e/a;JILjava/lang/String;)V
    .locals 0

    .line 2005
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    iput-object p5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->d:Lcom/mbridge/msdk/foundation/same/e/a;

    iput-wide p6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->e:J

    iput p8, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->f:I

    iput-object p9, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->g:Ljava/lang/String;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/e/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final cancelTask()V
    .locals 0

    return-void
.end method

.method public final pauseTask(Z)V
    .locals 0

    return-void
.end method

.method public final runTask()V
    .locals 6

    .line 2010
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 2011
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, "_ttc"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2012
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 2013
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 2015
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2016
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 2017
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    if-nez v1, :cond_2

    .line 2021
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->k(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/mbnative/controller/NativeController$e;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/NativeController$4;)V

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController$e;->post(Ljava/lang/Runnable;)Z

    :cond_2
    return-void
.end method
