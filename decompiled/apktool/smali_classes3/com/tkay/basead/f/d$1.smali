.class final Lcom/tkay/basead/f/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/b$b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/f/d;->a(Landroid/app/Activity;Ljava/util/Map;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/basead/f/d;


# direct methods
.method constructor <init>(Lcom/tkay/basead/f/d;Ljava/lang/String;)V
    .locals 0

    .line 55
    iput-object p1, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    iput-object p2, p0, Lcom/tkay/basead/f/d$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 58
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 59
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 60
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onAdShow()V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 103
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 104
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/g;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 2

    .line 66
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "onVideoShowFailed......."

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/basead/c/e;->c()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 67
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 68
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/g;->onShowFailed(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 111
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 112
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 113
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/g;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 74
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 75
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 76
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 82
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 83
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 84
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onVideoAdPlayEnd()V

    :cond_0
    return-void
.end method

.method public final d()V
    .locals 0

    return-void
.end method

.method public final e()V
    .locals 2

    .line 94
    sget-object v0, Lcom/tkay/basead/f/d;->a:Ljava/lang/String;

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 96
    iget-object v0, p0, Lcom/tkay/basead/f/d$1;->b:Lcom/tkay/basead/f/d;

    invoke-static {v0}, Lcom/tkay/basead/f/d;->a(Lcom/tkay/basead/f/d;)Lcom/tkay/basead/e/g;

    move-result-object v0

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onAdClosed()V

    .line 98
    :cond_0
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/f/d$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/e/b;->b(Ljava/lang/String;)V

    return-void
.end method
