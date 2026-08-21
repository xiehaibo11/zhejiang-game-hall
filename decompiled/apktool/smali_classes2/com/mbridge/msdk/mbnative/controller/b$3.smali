.class final Lcom/mbridge/msdk/mbnative/controller/b$3;
.super Lcom/mbridge/msdk/foundation/same/e/a;
.source "NativePreloadController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILjava/lang/String;Ljava/lang/String;ZLcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
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

.field final synthetic e:I

.field final synthetic f:J

.field final synthetic g:I

.field final synthetic h:Ljava/lang/String;

.field final synthetic i:Lcom/mbridge/msdk/b/a/a;

.field final synthetic j:Lcom/mbridge/msdk/out/AdMobClickListener;

.field final synthetic k:Lcom/mbridge/msdk/mbnative/controller/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;ZLjava/util/UUID;Lcom/mbridge/msdk/foundation/same/e/a;IJILjava/lang/String;Lcom/mbridge/msdk/b/a/a;Lcom/mbridge/msdk/out/AdMobClickListener;)V
    .locals 0

    .line 1228
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    iput-boolean p3, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    iput-object p4, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    iput-object p5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->d:Lcom/mbridge/msdk/foundation/same/e/a;

    iput p6, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->e:I

    iput-wide p7, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->f:J

    iput p9, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->g:I

    iput-object p10, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->h:Ljava/lang/String;

    iput-object p11, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->i:Lcom/mbridge/msdk/b/a/a;

    iput-object p12, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->j:Lcom/mbridge/msdk/out/AdMobClickListener;

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

    .line 1233
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1234
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, "_ttc"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1235
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 1236
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1238
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1239
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 1240
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    if-nez v1, :cond_2

    .line 1244
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;)Landroid/os/Handler;

    move-result-object v0

    new-instance v1, Lcom/mbridge/msdk/mbnative/controller/b$3$1;

    invoke-direct {v1, p0}, Lcom/mbridge/msdk/mbnative/controller/b$3$1;-><init>(Lcom/mbridge/msdk/mbnative/controller/b$3;)V

    invoke-virtual {v0, v1}, Landroid/os/Handler;->post(Ljava/lang/Runnable;)Z

    :cond_2
    return-void
.end method
