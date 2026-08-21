.class final Lcom/tkay/core/common/h/a/d$1;
.super Lcom/tkay/core/common/l/b/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/c;Lcom/tkay/core/common/h/a/c$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/h/a/c;

.field final synthetic b:Lcom/tkay/core/common/h/a/c$a;

.field final synthetic c:Lcom/tkay/core/common/h/a/d;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/h/a/d;Lcom/tkay/core/common/h/a/c;Lcom/tkay/core/common/h/a/c$a;)V
    .locals 0

    .line 107
    iput-object p1, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    iput-object p2, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    iput-object p3, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    invoke-direct {p0}, Lcom/tkay/core/common/l/b/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 6

    const-string v0, "Response Error Code:"

    const/4 v1, 0x1

    .line 115
    :try_start_0
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    iget-object v3, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    invoke-static {v2, v3}, Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/d;Lcom/tkay/core/common/h/a/c;)V

    .line 116
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    invoke-static {v2}, Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/d;)I

    move-result v2

    if-ne v2, v1, :cond_1

    .line 118
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    if-eqz v2, :cond_0

    .line 119
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    iget-object v3, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    invoke-interface {v2, v3}, Lcom/tkay/core/common/h/a/c$a;->a(Ljava/lang/Object;)V

    :cond_0
    return-void

    .line 128
    :cond_1
    new-instance v3, Ljava/lang/Exception;

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-direct {v3, v2}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v3
    :try_end_0
    .catch Ljava/net/SocketException; {:try_start_0 .. :try_end_0} :catch_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :catchall_0
    move-exception v0

    goto :goto_0

    .line 137
    :catch_0
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    invoke-static {v2}, Lcom/tkay/core/common/h/a/d;->b(Lcom/tkay/core/common/h/a/d;)V

    .line 140
    :try_start_1
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    iget-object v3, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    invoke-static {v2, v3}, Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/d;Lcom/tkay/core/common/h/a/c;)V

    .line 141
    iget-object v2, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    invoke-static {v2}, Lcom/tkay/core/common/h/a/d;->a(Lcom/tkay/core/common/h/a/d;)I

    move-result v2

    if-ne v2, v1, :cond_3

    .line 143
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    if-eqz v0, :cond_2

    .line 144
    iget-object v0, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    iget-object v1, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    invoke-interface {v0, v1}, Lcom/tkay/core/common/h/a/c$a;->a(Ljava/lang/Object;)V

    :cond_2
    return-void

    .line 153
    :cond_3
    new-instance v1, Ljava/lang/Exception;

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v2}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    invoke-direct {v1, v0}, Ljava/lang/Exception;-><init>(Ljava/lang/String;)V

    throw v1
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    .line 175
    :goto_0
    iget-object v1, p0, Lcom/tkay/core/common/h/a/d$1;->a:Lcom/tkay/core/common/h/a/c;

    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v3, ","

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/Throwable;->getStackTrace()[Ljava/lang/StackTraceElement;

    move-result-object v3

    invoke-static {v3}, Lcom/tkay/core/common/l/h;->a([Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    iget-object v3, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    invoke-static {v3}, Lcom/tkay/core/common/h/a/d;->c(Lcom/tkay/core/common/h/a/d;)Ljava/lang/String;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/core/common/h/a/d$1;->c:Lcom/tkay/core/common/h/a/d;

    invoke-static {v4}, Lcom/tkay/core/common/h/a/d;->d(Lcom/tkay/core/common/h/a/d;)I

    move-result v4

    const-string v5, ""

    invoke-virtual {v1, v5, v2, v3, v4}, Lcom/tkay/core/common/h/a/c;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V

    .line 176
    iget-object v1, p0, Lcom/tkay/core/common/h/a/d$1;->b:Lcom/tkay/core/common/h/a/c$a;

    if-eqz v1, :cond_4

    .line 177
    invoke-interface {v1, v0}, Lcom/tkay/core/common/h/a/c$a;->a(Ljava/lang/Throwable;)V

    :cond_4
    return-void
.end method
