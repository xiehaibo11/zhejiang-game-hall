.class final Lcom/tkay/basead/d/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/d;->a(Landroid/app/Activity;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/basead/d/d;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/d;Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iput-object p2, p0, Lcom/tkay/basead/d/d$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 0

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 2

    .line 102
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/d$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/d/d$1$1;-><init>(Lcom/tkay/basead/d/d$1;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(ZLjava/lang/String;F)V
    .locals 0

    .line 86
    iget-object p1, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object p1, p1, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz p1, :cond_0

    .line 87
    iget-object p1, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object p1, p1, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {p1}, Lcom/tkay/basead/e/a;->onAdClosed()V

    .line 89
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    invoke-virtual {p1}, Lcom/tkay/basead/d/d;->d()V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 94
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    const-string v1, "40002"

    invoke-static {v1, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    .line 97
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final c()V
    .locals 2

    .line 74
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 75
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    .line 81
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final d()V
    .locals 1

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    instance-of v0, v0, Lcom/tkay/basead/e/g;

    if-eqz v0, :cond_0

    .line 114
    iget-object v0, p0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    check-cast v0, Lcom/tkay/basead/e/g;

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final e()V
    .locals 0

    return-void
.end method

.method public final f()V
    .locals 0

    return-void
.end method
