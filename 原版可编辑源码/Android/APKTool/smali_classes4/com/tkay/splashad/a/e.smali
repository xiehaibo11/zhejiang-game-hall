.class public final Lcom/tkay/splashad/a/e;
.super Lcom/tkay/core/common/h;


# instance fields
.field T:I


# direct methods
.method protected constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 102
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;-><init>(Landroid/content/Context;)V

    return-void
.end method

.method private d(I)V
    .locals 0

    .line 106
    iput p1, p0, Lcom/tkay/splashad/a/e;->T:I

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 125
    invoke-super {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 1

    .line 149
    instance-of v0, p1, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    if-eqz v0, :cond_0

    .line 150
    check-cast p1, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;

    iget v0, p0, Lcom/tkay/splashad/a/e;->T:I

    invoke-virtual {p1, v0}, Lcom/tkay/splashad/unitgroup/api/CustomSplashAdapter;->setFetchAdTimeout(I)V

    :cond_0
    return-void
.end method

.method protected final a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V
    .locals 0

    .line 111
    invoke-super {p0, p1, p2}, Lcom/tkay/core/common/h;->a(Ljava/lang/String;Lcom/tkay/core/common/m/a;)V

    return-void
.end method

.method public final g()V
    .locals 2

    .line 157
    iget-object v0, p0, Lcom/tkay/splashad/a/e;->j:Lcom/tkay/core/common/j;

    if-eqz v0, :cond_0

    .line 158
    iget-object v0, p0, Lcom/tkay/splashad/a/e;->j:Lcom/tkay/core/common/j;

    const/4 v1, 0x0

    iput-object v1, v0, Lcom/tkay/core/common/j;->f:Lcom/tkay/core/common/b/a;

    .line 160
    :cond_0
    invoke-super {p0}, Lcom/tkay/core/common/h;->g()V

    return-void
.end method

.method public final h()V
    .locals 0

    .line 120
    invoke-super {p0}, Lcom/tkay/core/common/h;->h()V

    return-void
.end method

.method public final j()V
    .locals 0

    .line 172
    invoke-virtual {p0}, Lcom/tkay/splashad/a/e;->g()V

    .line 173
    invoke-virtual {p0}, Lcom/tkay/splashad/a/e;->a()V

    return-void
.end method
