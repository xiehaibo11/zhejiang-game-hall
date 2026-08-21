.class final Lcom/tkay/expressad/reward/a/d$2$2$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/reward/a/c$j;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/reward/a/d$2$2;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/reward/a/d$2$2;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/reward/a/d$2$2;)V
    .locals 0

    .line 2090
    iput-object p1, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 5

    .line 2101
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-object v1, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v1, v1, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v1, v1, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v1}, Lcom/tkay/expressad/reward/a/d;->e(Lcom/tkay/expressad/reward/a/d;)Ljava/util/concurrent/CopyOnWriteArrayList;

    move-result-object v1

    iget-object v2, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v2, v2, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-boolean v2, v2, Lcom/tkay/expressad/reward/a/d$2;->a:Z

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v3, v3, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget v3, v3, Lcom/tkay/expressad/reward/a/d$2;->c:I

    invoke-virtual {v0, v1, v2, v3}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/util/List;ZI)Z

    move-result v0

    const/4 v1, 0x1

    const/4 v2, 0x5

    if-eqz v0, :cond_1

    .line 2103
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v0

    iget-object v3, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v3, v3, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v3, v3, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v3}, Lcom/tkay/expressad/reward/a/d;->g(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    move-result-object v3

    iget-object v4, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v4, v4, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v4, v4, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v4}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    invoke-static {v0, v3}, Lcom/tkay/expressad/reward/a/d;->a(Ljava/lang/String;Ljava/util/List;)V

    .line 2104
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 2105
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 2107
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2108
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v0, v0, Lcom/tkay/expressad/reward/a/d;->s:Z

    if-nez v0, :cond_3

    .line 2109
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->s:Z

    .line 2110
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 2113
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/expressad/reward/a/b;->a()V

    return-void

    .line 2119
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 2120
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2121
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    invoke-virtual {v0, v2}, Landroid/os/Handler;->removeMessages(I)V

    .line 2123
    :cond_2
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 2124
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v0, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v0, :cond_3

    .line 2125
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 2126
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->f(Lcom/tkay/expressad/reward/a/d;)Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    .line 2129
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    const-string v1, "errorCode: 3505 errorMessage: tpl temp preload success but isReady false"

    invoke-interface {v0, v1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 2147
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/ArrayList;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 2148
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->b:Lcom/tkay/expressad/foundation/d/c;

    invoke-virtual {v0}, Lcom/tkay/expressad/foundation/d/c;->aB()Ljava/util/ArrayList;

    move-result-object v0

    const/4 v1, 0x3

    invoke-static {v1}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/util/ArrayList;->contains(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 2154
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->d(Lcom/tkay/expressad/reward/a/d;)Ljava/util/List;

    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->h(Lcom/tkay/expressad/reward/a/d;)Z

    .line 2156
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 2157
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->i(Lcom/tkay/expressad/reward/a/d;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x5

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 2159
    :cond_1
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 2160
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    iget-boolean v0, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    if-nez v0, :cond_2

    .line 2161
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    const/4 v1, 0x1

    iput-boolean v1, v0, Lcom/tkay/expressad/reward/a/d;->t:Z

    .line 2163
    iget-object v0, p0, Lcom/tkay/expressad/reward/a/d$2$2$1;->a:Lcom/tkay/expressad/reward/a/d$2$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2$2;->d:Lcom/tkay/expressad/reward/a/d$2;

    iget-object v0, v0, Lcom/tkay/expressad/reward/a/d$2;->d:Lcom/tkay/expressad/reward/a/d;

    invoke-static {v0}, Lcom/tkay/expressad/reward/a/d;->c(Lcom/tkay/expressad/reward/a/d;)Lcom/tkay/expressad/reward/a/b;

    move-result-object v0

    invoke-static {p1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object p1

    const-string v1, "errorCode: 3303 errorMessage: tpl temp preload failed: "

    invoke-virtual {v1, p1}, Ljava/lang/String;->concat(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/expressad/reward/a/b;->a(Ljava/lang/String;)V

    :cond_2
    return-void
.end method
