.class final Lcom/tkay/basead/d/e$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/basead/e/c;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/e;->a(Lcom/tkay/basead/e/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/e/d;

.field final synthetic b:Lcom/tkay/basead/d/e;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/e;Lcom/tkay/basead/e/d;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/basead/d/e$1;->b:Lcom/tkay/basead/d/e;

    iput-object p2, p0, Lcom/tkay/basead/d/e$1;->a:Lcom/tkay/basead/e/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onAdCacheLoaded()V
    .locals 5

    .line 32
    new-instance v0, Lcom/tkay/basead/d/h;

    iget-object v1, p0, Lcom/tkay/basead/d/e$1;->b:Lcom/tkay/basead/d/e;

    iget-object v1, v1, Lcom/tkay/basead/d/e;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/e$1;->b:Lcom/tkay/basead/d/e;

    iget-object v2, v2, Lcom/tkay/basead/d/e;->e:Lcom/tkay/core/common/f/z;

    iget-object v3, p0, Lcom/tkay/basead/d/e$1;->b:Lcom/tkay/basead/d/e;

    iget-object v3, v3, Lcom/tkay/basead/d/e;->c:Lcom/tkay/core/common/f/i;

    iget-object v4, p0, Lcom/tkay/basead/d/e$1;->b:Lcom/tkay/basead/d/e;

    iget-object v4, v4, Lcom/tkay/basead/d/e;->f:Lcom/tkay/core/common/a/g;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/d/h;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/z;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/a/g;)V

    .line 33
    iget-object v1, p0, Lcom/tkay/basead/d/e$1;->a:Lcom/tkay/basead/e/d;

    if-eqz v1, :cond_0

    const/4 v2, 0x1

    new-array v2, v2, [Lcom/tkay/basead/d/h;

    const/4 v3, 0x0

    aput-object v0, v2, v3

    .line 34
    invoke-interface {v1, v2}, Lcom/tkay/basead/e/d;->onNativeAdLoaded([Lcom/tkay/basead/d/h;)V

    :cond_0
    return-void
.end method

.method public final onAdDataLoaded()V
    .locals 0

    return-void
.end method

.method public final onAdLoadFailed(Lcom/tkay/basead/c/e;)V
    .locals 1

    .line 40
    iget-object v0, p0, Lcom/tkay/basead/d/e$1;->a:Lcom/tkay/basead/e/d;

    if-eqz v0, :cond_0

    .line 41
    invoke-interface {v0, p1}, Lcom/tkay/basead/e/d;->onNativeAdLoadError(Lcom/tkay/basead/c/e;)V

    :cond_0
    return-void
.end method
