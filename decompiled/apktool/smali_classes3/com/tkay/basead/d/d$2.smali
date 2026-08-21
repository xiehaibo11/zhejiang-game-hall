.class final Lcom/tkay/basead/d/d$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/b$b;


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

    .line 134
    iput-object p1, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iput-object p2, p0, Lcom/tkay/basead/d/d$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 137
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 138
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdShow()V

    .line 140
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 181
    sget-object v0, Lcom/tkay/basead/d/d;->a:Ljava/lang/String;

    .line 182
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 183
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onAdClick(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 145
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 146
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onShowFailed(Lcom/tkay/basead/c/e;)V

    .line 148
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    const/4 v0, 0x0

    iput-object v0, p1, Lcom/tkay/basead/d/d;->e:Lcom/tkay/core/common/f/z;

    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 189
    sget-object v0, Lcom/tkay/basead/d/d;->a:Ljava/lang/String;

    .line 190
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 191
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0, p1}, Lcom/tkay/basead/e/a;->onDeeplinkCallback(Z)V

    :cond_0
    return-void
.end method

.method public final b()V
    .locals 1

    .line 153
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    instance-of v0, v0, Lcom/tkay/basead/e/g;

    if-eqz v0, :cond_0

    .line 154
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    check-cast v0, Lcom/tkay/basead/e/g;

    invoke-interface {v0}, Lcom/tkay/basead/e/g;->onVideoAdPlayStart()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 1

    .line 160
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    instance-of v0, v0, Lcom/tkay/basead/e/g;

    if-eqz v0, :cond_0

    .line 161
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    check-cast v0, Lcom/tkay/basead/e/g;

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

    .line 172
    sget-object v0, Lcom/tkay/basead/d/d;->a:Ljava/lang/String;

    .line 173
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    if-eqz v0, :cond_0

    .line 174
    iget-object v0, p0, Lcom/tkay/basead/d/d$2;->b:Lcom/tkay/basead/d/d;

    iget-object v0, v0, Lcom/tkay/basead/d/d;->h:Lcom/tkay/basead/e/a;

    invoke-interface {v0}, Lcom/tkay/basead/e/a;->onAdClosed()V

    .line 176
    :cond_0
    invoke-static {}, Lcom/tkay/basead/e/b;->a()Lcom/tkay/basead/e/b;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d/d$2;->a:Ljava/lang/String;

    invoke-virtual {v0, v1}, Lcom/tkay/basead/e/b;->b(Ljava/lang/String;)V

    return-void
.end method
