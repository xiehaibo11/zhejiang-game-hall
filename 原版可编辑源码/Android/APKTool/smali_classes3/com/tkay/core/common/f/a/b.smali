.class public Lcom/tkay/core/common/f/a/b;
.super Lcom/tkay/core/common/f/h;

# interfaces
.implements Ljava/io/Serializable;


# instance fields
.field final a:Ljava/lang/String;


# direct methods
.method public constructor <init>(Lcom/tkay/core/common/f/a/e;)V
    .locals 3

    .line 18
    invoke-direct {p0}, Lcom/tkay/core/common/f/h;-><init>()V

    .line 16
    const-class v0, Lcom/tkay/core/common/f/a/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/tkay/core/common/f/a/b;->a:Ljava/lang/String;

    .line 20
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getIconImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->n(Ljava/lang/String;)V

    .line 22
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getStarRating()Ljava/lang/Double;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Double;->intValue()I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->f(I)V

    .line 24
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getMainImageUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->p(Ljava/lang/String;)V

    .line 26
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getTitle()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->l(Ljava/lang/String;)V

    .line 28
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getCallToActionText()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->r(Ljava/lang/String;)V

    .line 30
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getDescriptionText()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->m(Ljava/lang/String;)V

    .line 32
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getAdChoiceIconUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->q(Ljava/lang/String;)V

    .line 34
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getAdLogo()Landroid/graphics/Bitmap;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->a(Landroid/graphics/Bitmap;)V

    .line 36
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getAdAppInfo()Lcom/tkay/core/api/TYAdAppInfo;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 37
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->z()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 38
    iget-object v0, p0, Lcom/tkay/core/common/f/a/b;->a:Ljava/lang/String;

    new-instance v1, Ljava/lang/StringBuilder;

    const-string v2, "AdAppInfo:"

    invoke-direct {v1, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getAdAppInfo()Lcom/tkay/core/api/TYAdAppInfo;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/api/TYAdAppInfo;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Landroid/util/Log;->i(Ljava/lang/String;Ljava/lang/String;)I

    .line 40
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/a/e;->getAdAppInfo()Lcom/tkay/core/api/TYAdAppInfo;

    move-result-object p1

    .line 41
    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdAppInfo;->getPublisher()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->y(Ljava/lang/String;)V

    .line 42
    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdAppInfo;->getAppVersion()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->z(Ljava/lang/String;)V

    .line 43
    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPrivacyUrl()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Lcom/tkay/core/common/f/a/b;->A(Ljava/lang/String;)V

    .line 44
    invoke-virtual {p1}, Lcom/tkay/core/api/TYAdAppInfo;->getAppPermissonUrl()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/tkay/core/common/f/a/b;->B(Ljava/lang/String;)V

    :cond_1
    return-void
.end method


# virtual methods
.method public final L()Z
    .locals 1

    const/4 v0, 0x1

    return v0
.end method

.method public final b(Lcom/tkay/core/common/f/j;)Ljava/util/List;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/core/common/f/j;",
            ")",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    .line 53
    new-instance p1, Ljava/util/ArrayList;

    invoke-direct {p1}, Ljava/util/ArrayList;-><init>()V

    .line 54
    invoke-virtual {p0}, Lcom/tkay/core/common/f/a/b;->u()Ljava/lang/String;

    move-result-object v0

    invoke-interface {p1, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-object p1
.end method

.method public final d()I
    .locals 1

    const/16 v0, 0xa

    return v0
.end method

.method public final m()Ljava/lang/String;
    .locals 1

    const-string v0, ""

    return-object v0
.end method
