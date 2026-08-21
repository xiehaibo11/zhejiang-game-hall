.class final Lcom/tkay/basead/d/f$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/videocommon/d/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/f;->a(Landroid/app/Activity;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/basead/d/f;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/f;Ljava/lang/String;)V
    .locals 0

    .line 59
    iput-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iput-object p2, p0, Lcom/tkay/basead/d/f$1;->a:Ljava/lang/String;

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

    .line 114
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/d/f$1$1;

    invoke-direct {v1, p0, p1}, Lcom/tkay/basead/d/f$1$1;-><init>(Lcom/tkay/basead/d/f$1;Lcom/tkay/expressad/foundation/d/c;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    return-void
.end method

.method public final a(ZLjava/lang/String;F)V
    .locals 0

    if-nez p1, :cond_0

    .line 90
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->c:Lcom/tkay/core/common/f/i;

    iget-object p1, p1, Lcom/tkay/core/common/f/i;->m:Lcom/tkay/core/common/f/j;

    .line 91
    invoke-virtual {p1}, Lcom/tkay/core/common/f/j;->f()I

    move-result p1

    const/4 p2, 0x1

    if-ne p1, p2, :cond_1

    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    instance-of p1, p1, Lcom/tkay/basead/e/g;

    if-eqz p1, :cond_1

    .line 93
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    check-cast p1, Lcom/tkay/basead/e/g;

    invoke-interface {p1}, Lcom/tkay/basead/e/g;->onRewarded()V

    .line 96
    :cond_1
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz p1, :cond_2

    .line 97
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object p1, p1, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    invoke-interface {p1}, Lcom/tkay/basead/e/a;->onAdClosed()V

    .line 100
    :cond_2
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    invoke-virtual {p1}, Lcom/tkay/basead/d/f;->d()V

    return-void
.end method

.method public final b()V
    .locals 0

    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 106
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    const-string v1, "40002"

    invoke-static {v1, p1}, Lcom/tkay/basead/c/f;->a(Ljava/lang/String;Ljava/lang/String;)Lcom/tkay/basead/c/e;

    move-result-object p1

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    .line 108
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/basead/d/f;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final c()V
    .locals 2

    .line 78
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 79
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    .line 82
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    instance-of v0, v0, Lcom/tkay/basead/e/g;

    if-eqz v0, :cond_1

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    check-cast v0, Lcom/tkay/basead/e/g;

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onVideoAdPlayStart()V

    .line 85
    :cond_1
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/basead/d/f;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final d()V
    .locals 1

    .line 125
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

    instance-of v0, v0, Lcom/tkay/basead/e/g;

    if-eqz v0, :cond_0

    .line 126
    iget-object v0, p0, Lcom/tkay/basead/d/f$1;->b:Lcom/tkay/basead/d/f;

    iget-object v0, v0, Lcom/tkay/basead/d/f;->h:Lcom/tkay/basead/e/a;

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
