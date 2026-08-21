.class final Lcom/mbridge/msdk/mbnative/controller/b$2;
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

.field final synthetic b:Ljava/util/UUID;

.field final synthetic c:Z

.field final synthetic d:Lcom/mbridge/msdk/mbnative/controller/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;Ljava/util/UUID;Z)V
    .locals 0

    .line 1198
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    iput-object p2, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->b:Ljava/util/UUID;

    iput-boolean p4, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->c:Z

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

    .line 1202
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->c(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    if-nez v0, :cond_0

    .line 1203
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;Lcom/mbridge/msdk/foundation/db/i;)Lcom/mbridge/msdk/foundation/db/i;

    .line 1205
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->c(Lcom/mbridge/msdk/mbnative/controller/b;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/c;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/c;

    move-result-object v0

    .line 1207
    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/db/c;->a()V

    .line 1208
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v2}, Lcom/mbridge/msdk/foundation/db/c;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/mbridge/msdk/mbnative/controller/b;->a(Lcom/mbridge/msdk/mbnative/controller/b;Ljava/lang/String;)Ljava/lang/String;

    .line 1209
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_2

    .line 1210
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->b:Ljava/util/UUID;

    const/4 v1, 0x1

    const-string v2, "_ttc"

    const-string v3, "_"

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->c:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 1211
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->c:Z

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    goto :goto_0

    .line 1212
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->b:Ljava/util/UUID;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->b:Ljava/util/UUID;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->c:Z

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v0, v4}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 1213
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->d:Lcom/mbridge/msdk/mbnative/controller/b;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/b;->d(Lcom/mbridge/msdk/mbnative/controller/b;)Ljava/util/Map;

    move-result-object v0

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->b:Ljava/util/UUID;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->a:Ljava/lang/String;

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-boolean v3, p0, Lcom/mbridge/msdk/mbnative/controller/b$2;->c:Z

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v1

    invoke-interface {v0, v2, v1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    :goto_0
    return-void
.end method
