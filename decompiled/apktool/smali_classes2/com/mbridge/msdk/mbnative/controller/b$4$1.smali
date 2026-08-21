.class final Lcom/mbridge/msdk/mbnative/controller/b$4$1;
.super Ljava/lang/Object;
.source "NativePreloadController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/b$4;->a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/b$4;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b$4;)V
    .locals 0

    .line 1288
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 12

    .line 1294
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    const/4 v1, 0x0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 1295
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v3, v3, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v4, v4, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, "_post"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 1296
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 1297
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 1299
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1300
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$4;->c:Ljava/util/UUID;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v1

    .line 1301
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v3, v3, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    if-nez v1, :cond_2

    .line 1305
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v1, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget v2, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->d:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-wide v3, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->e:J

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget v5, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->f:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->j:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->f(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/c/d;

    move-result-object v6

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v7, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->a:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v8, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->g:Ljava/lang/String;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v9, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->h:Lcom/mbridge/msdk/b/a/a;

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-boolean v10, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->b:Z

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/b$4;

    iget-object v11, v0, Lcom/mbridge/msdk/mbnative/controller/b$4;->i:Lcom/mbridge/msdk/out/AdMobClickListener;

    invoke-virtual/range {v1 .. v11}, Lcom/mbridge/msdk/mbnative/controller/b;->a(IJILcom/mbridge/msdk/c/d;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/b/a/a;ZLcom/mbridge/msdk/out/AdMobClickListener;)V

    :cond_2
    return-void
.end method
