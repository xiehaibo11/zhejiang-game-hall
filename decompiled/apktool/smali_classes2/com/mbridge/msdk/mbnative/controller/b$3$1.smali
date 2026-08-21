.class final Lcom/mbridge/msdk/mbnative/controller/b$3$1;
.super Ljava/lang/Object;
.source "NativePreloadController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/b$3;->runTask()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/b$3;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b$3;)V
    .locals 0

    .line 1244
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 1248
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1249
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "_"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-boolean v3, v3, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v3, "_post"

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    const/4 v1, 0x1

    if-eqz v0, :cond_0

    .line 1250
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v5

    invoke-interface {v0, v4, v5}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1252
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1253
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->c:Ljava/util/UUID;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 1259
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->e(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/same/e/b;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 1260
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->e(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/same/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/b$3;->d:Lcom/mbridge/msdk/foundation/same/e/a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/b;->a(Lcom/mbridge/msdk/foundation/same/e/a;)V

    .line 1262
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v1, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget v2, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->e:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-wide v3, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->f:J

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget v5, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->g:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->k:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->f(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/c/d;

    move-result-object v6

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v7, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->a:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v8, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->h:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v9, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->i:Lcom/mbridge/msdk/b/a/a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-boolean v10, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->b:Z

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$3$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$3;

    iget-object v11, v0, Lcom/mbridge/msdk/mbnative/controller/b$3;->j:Lcom/mbridge/msdk/out/AdMobClickListener;

    invoke-virtual/range {v1 .. v11}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;ZLcom/mbridge/msdk/out/AdMobClickListener;)V

    return-void
.end method
