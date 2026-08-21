.class public final Lcom/tkay/basead/d/a;
.super Lcom/tkay/basead/d/b;


# instance fields
.field a:Lcom/tkay/basead/ui/BaseBannerATView;

.field private final k:Ljava/lang/String;

.field private l:Lcom/tkay/expressad/out/b;


# direct methods
.method public constructor <init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V
    .locals 0

    .line 86
    invoke-direct {p0, p1, p2, p3}, Lcom/tkay/basead/d/b;-><init>(Landroid/content/Context;Lcom/tkay/basead/d/b$a;Lcom/tkay/core/common/f/i;)V

    .line 23
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    invoke-virtual {p1}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/tkay/basead/d/a;->k:Ljava/lang/String;

    .line 25
    new-instance p1, Lcom/tkay/basead/d/a$1;

    invoke-direct {p1, p0}, Lcom/tkay/basead/d/a$1;-><init>(Lcom/tkay/basead/d/a;)V

    iput-object p1, p0, Lcom/tkay/basead/d/a;->l:Lcom/tkay/expressad/out/b;

    return-void
.end method


# virtual methods
.method public final a()Landroid/view/View;
    .locals 5

    .line 93
    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    instance-of v0, v0, Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    if-eqz v0, :cond_0

    .line 94
    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/out/TemplateBannerView;

    iget-object v1, p0, Lcom/tkay/basead/d/a;->l:Lcom/tkay/expressad/out/b;

    invoke-virtual {v0, v1}, Lcom/tkay/expressad/out/TemplateBannerView;->setBannerAdListener(Lcom/tkay/expressad/out/b;)V

    .line 95
    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/out/TemplateBannerView;

    return-object v0

    .line 97
    :cond_0
    iget-object v0, p0, Lcom/tkay/basead/d/a;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    if-nez v0, :cond_2

    .line 98
    invoke-super {p0}, Lcom/tkay/basead/d/b;->c()Z

    move-result v0

    if-eqz v0, :cond_2

    .line 99
    iget-object v0, p0, Lcom/tkay/basead/d/a;->e:Lcom/tkay/core/common/f/z;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/z;->g()Z

    move-result v0

    if-eqz v0, :cond_1

    .line 100
    new-instance v0, Lcom/tkay/basead/ui/MraidBannerATView;

    iget-object v1, p0, Lcom/tkay/basead/d/a;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/a;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/d/a;->e:Lcom/tkay/core/common/f/z;

    iget-object v4, p0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/MraidBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v0, p0, Lcom/tkay/basead/d/a;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    goto :goto_0

    .line 102
    :cond_1
    new-instance v0, Lcom/tkay/basead/ui/SdkBannerATView;

    iget-object v1, p0, Lcom/tkay/basead/d/a;->b:Landroid/content/Context;

    iget-object v2, p0, Lcom/tkay/basead/d/a;->c:Lcom/tkay/core/common/f/i;

    iget-object v3, p0, Lcom/tkay/basead/d/a;->e:Lcom/tkay/core/common/f/z;

    iget-object v4, p0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    invoke-direct {v0, v1, v2, v3, v4}, Lcom/tkay/basead/ui/SdkBannerATView;-><init>(Landroid/content/Context;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;Lcom/tkay/basead/e/a;)V

    iput-object v0, p0, Lcom/tkay/basead/d/a;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    .line 106
    :cond_2
    :goto_0
    iget-object v0, p0, Lcom/tkay/basead/d/a;->a:Lcom/tkay/basead/ui/BaseBannerATView;

    return-object v0
.end method

.method public final b()V
    .locals 1

    .line 113
    invoke-super {p0}, Lcom/tkay/basead/d/b;->b()V

    .line 115
    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    instance-of v0, v0, Lcom/tkay/expressad/out/TemplateBannerView;

    if-eqz v0, :cond_0

    .line 116
    iget-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    check-cast v0, Lcom/tkay/expressad/out/TemplateBannerView;

    invoke-virtual {v0}, Lcom/tkay/expressad/out/TemplateBannerView;->release()V

    :cond_0
    const/4 v0, 0x0

    .line 119
    iput-object v0, p0, Lcom/tkay/basead/d/a;->f:Lcom/tkay/core/common/a/g;

    .line 120
    iput-object v0, p0, Lcom/tkay/basead/d/a;->h:Lcom/tkay/basead/e/a;

    return-void
.end method
