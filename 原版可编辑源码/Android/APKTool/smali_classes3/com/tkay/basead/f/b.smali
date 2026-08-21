.class public final Lcom/tkay/basead/f/b;
.super Lcom/tkay/basead/f/c;


# instance fields
.field a:Lcom/tkay/basead/e/a;

.field private final k:Ljava/lang/String;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V
    .locals 0

    .line 27
    invoke-direct {p0, p1, p2, p3, p4}, Lcom/tkay/basead/f/c;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Ljava/lang/String;Z)V

    .line 22
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/f/b;->k:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a(Landroid/app/Activity;Ljava/util/Map;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/app/Activity;",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;)V"
        }
    .end annotation

    return-void
.end method

.method public final a(Lcom/tkay/basead/e/a;)V
    .locals 0

    .line 31
    iput-object p1, p0, Lcom/tkay/basead/f/b;->a:Lcom/tkay/basead/e/a;

    return-void
.end method

.method public final b()Landroid/view/View;
    .locals 5

    .line 35
    invoke-virtual {p0}, Lcom/tkay/basead/f/b;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 36
    iget-object v0, p0, Lcom/tkay/basead/f/b;->g:Lcom/tkay/core/common/f/r;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/r;->g()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 37
    new-instance v0, Lcom/tkay/basead/ui/MraidBannerATView;

    iget-object v1, p0, Lcom/tkay/basead/f/b;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/f/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/f/b;->g:Lcom/tkay/core/common/f/r;

    iget-object v4, p0, Lcom/tkay/basead/f/b;->a:Lcom/tkay/basead/e/a;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    return-object v0

    .line 39
    :cond_0
    new-instance v0, Lcom/tkay/basead/ui/SdkBannerATView;

    iget-object v1, p0, Lcom/tkay/basead/f/b;->c:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/f/b;->d:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/f/b;->g:Lcom/tkay/core/common/f/r;

    iget-object v4, p0, Lcom/tkay/basead/f/b;->a:Lcom/tkay/basead/e/a;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/SdkBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    return-object v0

    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public final c()V
    .locals 1

    const/4 v0, 0x0

    .line 53
    iput-object v0, p0, Lcom/tkay/basead/f/b;->a:Lcom/tkay/basead/e/a;

    return-void
.end method
