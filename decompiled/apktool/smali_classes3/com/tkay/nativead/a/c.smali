.class public final Lcom/tkay/nativead/a/c;
.super Lcom/tkay/core/common/h;


# direct methods
.method protected constructor <init>(Landroid/content/Context;)V
    .locals 0

    .line 54
    invoke-direct {p0, p1}, Lcom/tkay/core/common/h;-><init>(Landroid/content/Context;)V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/core/api/AdError;)V
    .locals 0

    .line 64
    invoke-super {p0, p1}, Lcom/tkay/core/common/h;->a(Lcom/tkay/core/api/AdError;)V

    return-void
.end method

.method public final a(Lcom/tkay/core/api/TYBaseAdAdapter;)V
    .locals 2

    if-eqz p1, :cond_0

    .line 45
    invoke-virtual {p1}, Lcom/tkay/core/api/TYBaseAdAdapter;->getUnitGroupInfo()Lcom/tkay/core/common/f/aj;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 46
    instance-of v1, p1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;

    if-eqz v1, :cond_0

    .line 47
    check-cast p1, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;

    invoke-virtual {v0}, Lcom/tkay/core/common/f/aj;->r()I

    move-result v0

    invoke-virtual {p1, v0}, Lcom/tkay/nativead/unitgroup/api/CustomNativeAdapter;->setRequestNum(I)V

    :cond_0
    return-void
.end method

.method public final h()V
    .locals 0

    .line 59
    invoke-super {p0}, Lcom/tkay/core/common/h;->h()V

    return-void
.end method
