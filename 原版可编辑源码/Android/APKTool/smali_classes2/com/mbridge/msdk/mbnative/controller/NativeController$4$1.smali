.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;
.super Ljava/lang/Object;
.source "NativeController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->runTask()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController$4;)V
    .locals 0

    .line 2021
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 2025
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    const/4 v1, 0x1

    .line 2027
    invoke-static {v1}, Ljava/lang/Boolean;->valueOf(Z)Ljava/lang/Boolean;

    move-result-object v2

    if-eqz v0, :cond_1

    .line 2025
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Map;->isEmpty()Z

    move-result v0

    if-nez v0, :cond_1

    .line 2026
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v4, v4, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "_"

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v5, "_post"

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 2027
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-boolean v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2029
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-boolean v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_1

    .line 2030
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->c:Ljava/util/UUID;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v6, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v6, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->a:Ljava/lang/String;

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-boolean v4, v4, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-interface {v0, v3, v2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 2033
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-boolean v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->b:Z

    if-eqz v0, :cond_2

    .line 2034
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    goto :goto_0

    .line 2036
    :cond_2
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v1, 0x0

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    .line 2038
    :goto_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/same/e/b;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2039
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->t(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Lcom/mbridge/msdk/foundation/same/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->d:Lcom/mbridge/msdk/foundation/same/e/a;

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/foundation/same/e/b;->a(Lcom/mbridge/msdk/foundation/same/e/a;)V

    .line 2041
    :cond_3
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v1, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->h:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v2, 0x1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-wide v3, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->e:J

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget v5, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->f:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$4;

    iget-object v6, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$4;->g:Ljava/lang/String;

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(IJILjava/lang/String;)V

    return-void
.end method
