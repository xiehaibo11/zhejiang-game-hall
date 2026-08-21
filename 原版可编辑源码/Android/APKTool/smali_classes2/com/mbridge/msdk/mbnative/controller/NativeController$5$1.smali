.class final Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;
.super Ljava/lang/Object;
.source "NativeController.java"

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a(Lcom/mbridge/msdk/foundation/same/e/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbnative/controller/NativeController$5;)V
    .locals 0

    .line 2064
    iput-object p1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 7

    .line 2068
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    if-eqz v0, :cond_0

    .line 2069
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->d(Lcom/mbridge/msdk/mbnative/controller/NativeController;Z)Z

    :cond_0
    const/4 v0, 0x0

    .line 2072
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    if-eqz v1, :cond_2

    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Map;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 2073
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v3, v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, "_"

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v4, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v4, v4, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    const-string v4, "_post"

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 2074
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 2075
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    .line 2077
    :cond_1
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_2

    .line 2078
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v0, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->c:Ljava/util/UUID;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v2, v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v2, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v2, v2, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-interface {v0, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    .line 2079
    iget-object v1, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v1, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    invoke-static {v1}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->s(Lcom/mbridge/msdk/mbnative/controller/NativeController;)Ljava/util/Map;

    move-result-object v1

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->c:Ljava/util/UUID;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    iget-object v5, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v5, v5, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->b:Ljava/lang/String;

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v3, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-boolean v3, v3, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->a:Z

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-interface {v1, v2}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    :cond_2
    if-nez v0, :cond_3

    .line 2083
    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v1, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->g:Lcom/mbridge/msdk/mbnative/controller/NativeController;

    const/4 v2, 0x1

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-wide v3, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->d:J

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget v5, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->e:I

    iget-object v0, p0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5$1;->a:Lcom/mbridge/msdk/mbnative/controller/NativeController$5;

    iget-object v6, v0, Lcom/mbridge/msdk/mbnative/controller/NativeController$5;->f:Ljava/lang/String;

    invoke-virtual/range {v1 .. v6}, Lcom/mbridge/msdk/mbnative/controller/NativeController;->a(IJILjava/lang/String;)V

    :cond_3
    return-void
.end method
