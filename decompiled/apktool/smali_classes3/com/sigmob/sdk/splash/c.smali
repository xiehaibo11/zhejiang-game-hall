.class public Lcom/sigmob/sdk/splash/c;
.super Lcom/sigmob/sdk/base/common/h;


# instance fields
.field private k:I

.field private l:Z

.field private m:I

.field private n:I


# direct methods
.method public constructor <init>()V
    .locals 1

    invoke-direct {p0}, Lcom/sigmob/sdk/base/common/h;-><init>()V

    const/4 v0, 0x3

    iput v0, p0, Lcom/sigmob/sdk/splash/c;->k:I

    return-void
.end method

.method public static f(Lcom/sigmob/sdk/base/models/BaseAdUnit;)Lcom/sigmob/sdk/splash/c;
    .locals 1

    new-instance v0, Lcom/sigmob/sdk/splash/c;

    invoke-direct {v0}, Lcom/sigmob/sdk/splash/c;-><init>()V

    invoke-virtual {v0, p0}, Lcom/sigmob/sdk/splash/c;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    return-object v0
.end method


# virtual methods
.method public a(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    const-string p1, "start"

    const/4 p2, 0x0

    invoke-static {p1, p2, p3}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p3, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(Landroid/content/Context;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/czhj/sdk/common/utils/TouchLocation;Lcom/sigmob/sdk/base/a;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p5, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public b(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    const-string p1, "close"

    const/4 p2, 0x0

    invoke-static {p1, p2, p3}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->w:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p3, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 1

    invoke-super {p0, p1}, Lcom/sigmob/sdk/base/common/h;->b(Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-virtual {p1}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getSplashAdSetting()Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->show_duration:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/splash/c;->k:I

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->enable_close_on_click:Ljava/lang/Boolean;

    invoke-virtual {v0}, Ljava/lang/Boolean;->booleanValue()Z

    move-result v0

    iput-boolean v0, p0, Lcom/sigmob/sdk/splash/c;->l:Z

    iget-object v0, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_mode:Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    iput v0, p0, Lcom/sigmob/sdk/splash/c;->m:I

    iget-object p1, p1, Lcom/sigmob/sdk/base/models/rtb/SplashAdSetting;->auto_click_time_ratio:Ljava/lang/Integer;

    invoke-virtual {p1}, Ljava/lang/Integer;->intValue()I

    move-result p1

    iput p1, p0, Lcom/sigmob/sdk/splash/c;->n:I

    :cond_0
    return-void
.end method

.method public c(Landroid/content/Context;ILcom/sigmob/sdk/base/models/BaseAdUnit;)V
    .locals 0

    const-string p2, "context cannot be null"

    invoke-static {p1, p2}, Lcom/czhj/sdk/common/utils/Preconditions$NoThrow;->checkNotNull(Ljava/lang/Object;Ljava/lang/String;)Z

    const-string p1, "skip"

    const/4 p2, 0x0

    invoke-static {p1, p2, p3}, Lcom/sigmob/sdk/base/common/z;->b(Ljava/lang/String;Ljava/lang/String;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    sget-object p1, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    invoke-static {p3, p1}, Lcom/sigmob/sdk/base/network/f;->a(Lcom/sigmob/sdk/base/models/BaseAdUnit;Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public l()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/splash/c;->k:I

    return v0
.end method

.method public m()Z
    .locals 1

    iget-boolean v0, p0, Lcom/sigmob/sdk/splash/c;->l:Z

    return v0
.end method

.method public n()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/splash/c;->m:I

    return v0
.end method

.method public o()I
    .locals 1

    iget v0, p0, Lcom/sigmob/sdk/splash/c;->n:I

    return v0
.end method
