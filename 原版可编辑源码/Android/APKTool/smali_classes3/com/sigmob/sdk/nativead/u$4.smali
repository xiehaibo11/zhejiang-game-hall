.class Lcom/sigmob/sdk/nativead/u$4;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/nativead/u;->l()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/nativead/u;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/nativead/u;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onEndCardShow()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(F)V
    .locals 0

    const-string p1, "SigNativeAdLandViewController onReward()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V
    .locals 0

    const-string p1, "SigNativeAdLandViewController onResize()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public a(Landroid/view/View;)V
    .locals 0

    const-string p1, "SigNativeAdLandViewController onLoaded()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SigNativeAdLandViewController onRenderProcessGone:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Lcom/sigmob/windad/WindAdError;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 5

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SigNativeAdLandViewController onCompanionClick:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    const/4 v0, 0x0

    :try_start_0
    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    const-string v3, "btn"

    iput-object v3, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v2

    iput-boolean v1, v2, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    new-instance v2, Lorg/json/JSONObject;

    invoke-direct {v2, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "type"

    invoke-virtual {v2, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const-string v3, "x"

    invoke-virtual {v2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "y"

    invoke-virtual {v2, v4}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    iget-object v4, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v4}, Lcom/sigmob/sdk/nativead/u;->m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v4

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v4, v3, v2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    if-eq p1, v1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/u;->a()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {p1, v2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :cond_0
    move v1, v0

    goto :goto_0

    :catch_0
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    const-string v2, "0"

    invoke-virtual {p1, v2, v2}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {p1}, Lcom/sigmob/sdk/nativead/u;->a()Lcom/sigmob/sdk/base/common/ab;

    move-result-object p1

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {p1, v2, v0}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v0, v2, v1}, Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    const-string v0, "com.sigmob.action.native.temple.click"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/nativead/u;->b(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V

    return-void
.end method

.method public a(Ljava/net/URI;ILjava/lang/String;)V
    .locals 7

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "SigNativeAdLandViewController  onOpen:"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "======"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string p2, "====="

    invoke-virtual {v0, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-nez p2, :cond_2

    :try_start_0
    iget-object p2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p2

    const-string v2, "btn"

    iput-object v2, p2, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object p2

    iput-boolean v1, p2, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    new-instance p2, Lorg/json/JSONObject;

    invoke-direct {p2, p3}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p3, "type"

    invoke-virtual {p2, p3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p3

    const-string v2, "x"

    invoke-virtual {p2, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "y"

    invoke-virtual {p2, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v3

    const-string v4, "disable_landing"

    invoke-virtual {p2, v4}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result v4
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_2

    :try_start_1
    const-string v5, "feDisable"

    invoke-virtual {p2, v5}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;)Z

    move-result p2
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    if-nez p2, :cond_0

    move p2, v1

    goto :goto_0

    :cond_0
    move p2, v0

    :goto_0
    :try_start_2
    iget-object v5, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v5}, Lcom/sigmob/sdk/nativead/u;->m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v5

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v5, v2, v3}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_1

    if-ne p3, v1, :cond_1

    goto :goto_1

    :cond_1
    move v0, v1

    :goto_1
    move v6, p2

    move v5, v0

    move v0, v4

    goto :goto_3

    :catch_0
    move p2, v1

    :catch_1
    move v0, v4

    goto :goto_2

    :catch_2
    move p2, v1

    :goto_2
    move v6, p2

    move v5, v1

    goto :goto_3

    :cond_2
    move v5, v1

    move v6, v5

    :goto_3
    if-nez v0, :cond_4

    iget-object p2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_3

    goto :goto_4

    :cond_3
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    const/4 v3, 0x0

    goto :goto_5

    :cond_4
    :goto_4
    iget-object p2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p2}, Lcom/sigmob/sdk/nativead/u;->j(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/nativead/b;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    invoke-virtual {p1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_5
    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {p1}, Lcom/sigmob/sdk/nativead/u;->m(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/nativead/b;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V

    iget-object p1, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    const-string p2, "com.sigmob.action.native.temple.click"

    invoke-static {p1, p2}, Lcom/sigmob/sdk/nativead/u;->c(Lcom/sigmob/sdk/nativead/u;Ljava/lang/String;)V

    return-void
.end method

.method public a(Z)V
    .locals 0

    const-string p1, "SigNativeAdLandViewController onMute()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public b()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onShowSkipTime()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public b(F)V
    .locals 0

    const-string p1, "SigNativeAdLandViewController onSkip()"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public c()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onExpand()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public d()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onFailedToLoad()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public e()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onUnload()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    return-void
.end method

.method public f()V
    .locals 4

    const-string v0, "SigNativeAdLandViewController onOpenFourElements()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    new-instance v1, Lcom/sigmob/sdk/base/views/q;

    iget-object v2, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v2}, Lcom/sigmob/sdk/nativead/u;->h(Lcom/sigmob/sdk/nativead/u;)Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v3}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/sigmob/sdk/base/views/q;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/nativead/u$4$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/nativead/u$4$1;-><init>(Lcom/sigmob/sdk/nativead/u$4;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q$b;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->k(Lcom/sigmob/sdk/nativead/u;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const-string v1, "appinfo"

    iput-object v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->click_area:Ljava/lang/String;

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->i(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getClickCommon()Lcom/sigmob/sdk/base/models/ClickCommon;

    move-result-object v0

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/sigmob/sdk/base/models/ClickCommon;->is_final_click:Z

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-virtual {v0}, Lcom/sigmob/sdk/nativead/u;->a()Lcom/sigmob/sdk/base/common/ab;

    move-result-object v0

    sget-object v2, Lcom/sigmob/sdk/base/common/a;->c:Lcom/sigmob/sdk/base/common/a;

    invoke-interface {v0, v2, v1}, Lcom/sigmob/sdk/base/common/ab;->a(Lcom/sigmob/sdk/base/common/a;I)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->g(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->show()V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/nativead/u;->a(Lcom/sigmob/sdk/nativead/u;Z)Z

    :cond_1
    return-void
.end method

.method public g()V
    .locals 1

    const-string v0, "SigNativeAdLandViewController onClose()"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->i(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/nativead/u$4;->a:Lcom/sigmob/sdk/nativead/u;

    invoke-static {v0}, Lcom/sigmob/sdk/nativead/u;->l(Lcom/sigmob/sdk/nativead/u;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->onBackPressed()V

    return-void
.end method
