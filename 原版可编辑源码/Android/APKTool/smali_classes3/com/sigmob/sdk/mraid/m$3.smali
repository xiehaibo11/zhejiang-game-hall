.class Lcom/sigmob/sdk/mraid/m$3;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/sigmob/sdk/mraid/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/sigmob/sdk/mraid/m;->a()Landroid/view/View;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/sigmob/sdk/mraid/m;


# direct methods
.method constructor <init>(Lcom/sigmob/sdk/mraid/m;)V
    .locals 0

    iput-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public a()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->h:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public a(F)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->d(Lcom/sigmob/sdk/mraid/m;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->b:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v0, "com.sigmob.action.rewardedvideo.complete"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->h(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public a(IIIILcom/sigmob/sdk/mraid/a$a;Z)V
    .locals 0

    return-void
.end method

.method public a(Landroid/view/View;)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->a:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v0, "com.sigmob.action.interstitial.show"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    const-string p1, "onLoaded() called"

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    return-void
.end method

.method public a(Lcom/sigmob/windad/WindAdError;)V
    .locals 2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "Finishing the activity due to a problem: "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->K:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->h(Lcom/sigmob/sdk/mraid/m;)Ljava/lang/String;

    move-result-object p1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v0, "com.sigmob.action.interstitial.fail"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->e(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->i(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object p1

    invoke-interface {p1}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

.method public a(Ljava/lang/String;)V
    .locals 4

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x1

    if-nez v0, :cond_1

    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0, p1}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V

    const-string p1, "type"

    invoke-virtual {v0, p1}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result p1

    const-string v2, "x"

    invoke-virtual {v0, v2}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v2

    const-string v3, "y"

    invoke-virtual {v0, v3}, Lorg/json/JSONObject;->optInt(Ljava/lang/String;)I

    move-result v0

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v3

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v3, v2, v0}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    if-eq p1, v1, :cond_0

    goto :goto_0

    :cond_0
    const/4 p1, 0x0

    move v1, p1

    goto :goto_0

    :catch_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    const-string v0, "0"

    invoke-virtual {p1, v0, v0}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object p1

    sget-object v0, Lcom/sigmob/sdk/base/a;->a:Lcom/sigmob/sdk/base/a;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v2

    invoke-virtual {v2}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p1, v0, v2, v1}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Z)V

    return-void
.end method

.method public a(Ljava/net/URI;ILjava/lang/String;)V
    .locals 7

    invoke-static {p3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    const/4 v0, 0x0

    const/4 v1, 0x1

    if-nez p2, :cond_1

    :try_start_0
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
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    if-nez p2, :cond_0

    move v0, v1

    :cond_0
    :try_start_2
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p2

    invoke-static {v2}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v2

    invoke-static {v3}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p2, v2, v3}, Lcom/sigmob/sdk/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;)V
    :try_end_2
    .catch Ljava/lang/Exception; {:try_start_2 .. :try_end_2} :catch_0

    move v6, v0

    move v0, v4

    goto :goto_0

    :catch_0
    move v1, v0

    :catch_1
    move v0, v4

    :catch_2
    :cond_1
    move v6, v1

    :goto_0
    const/4 v5, 0x1

    if-nez v0, :cond_3

    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object p2

    invoke-virtual {p2}, Lcom/sigmob/sdk/base/models/BaseAdUnit;->getLanding_page()Ljava/lang/String;

    move-result-object p2

    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-eqz p2, :cond_2

    goto :goto_1

    :cond_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    const/4 v3, 0x0

    goto :goto_2

    :cond_3
    :goto_1
    iget-object p2, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p2}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/videoAd/a;

    move-result-object v1

    sget-object v2, Lcom/sigmob/sdk/base/a;->b:Lcom/sigmob/sdk/base/a;

    invoke-virtual {p1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object v3

    :goto_2
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object p1

    invoke-virtual {p1}, Lcom/sigmob/sdk/mraid/d;->a()Ljava/lang/String;

    move-result-object v4

    invoke-virtual/range {v1 .. v6}, Lcom/sigmob/sdk/videoAd/a;->a(Lcom/sigmob/sdk/base/a;Ljava/lang/String;Ljava/lang/String;ZZ)V

    return-void
.end method

.method public a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->B:Lcom/sigmob/sdk/base/common/a;

    goto :goto_0

    :cond_0
    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->C:Lcom/sigmob/sdk/base/common/a;

    :goto_0
    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public b()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v1, Lcom/sigmob/sdk/base/common/a;->L:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    return-void
.end method

.method public b(F)V
    .locals 1

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {p1}, Lcom/sigmob/sdk/mraid/m;->j(Lcom/sigmob/sdk/mraid/m;)Z

    move-result p1

    if-nez p1, :cond_0

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const/4 v0, 0x1

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    sget-object v0, Lcom/sigmob/sdk/base/common/a;->s:Lcom/sigmob/sdk/base/common/a;

    invoke-virtual {p1, v0}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/base/common/a;)V

    iget-object p1, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v0, "com.sigmob.action.rewardedvideo.skip"

    invoke-static {p1, v0}, Lcom/sigmob/sdk/mraid/m;->i(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public c()V
    .locals 0

    return-void
.end method

.method public d()V
    .locals 2

    const-string v0, "MraidActivity failed to load. Finishing the activity"

    invoke-static {v0}, Lcom/czhj/sdk/logger/SigmobLog;->d(Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->f(Lcom/sigmob/sdk/mraid/m;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v1, "com.sigmob.action.interstitial.fail"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->d(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->g(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method

.method public e()V
    .locals 0

    return-void
.end method

.method public f()V
    .locals 4

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    if-nez v0, :cond_0

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    new-instance v1, Lcom/sigmob/sdk/base/views/q;

    iget-object v2, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v2}, Lcom/sigmob/sdk/mraid/m;->m(Lcom/sigmob/sdk/mraid/m;)Landroid/app/Activity;

    move-result-object v2

    iget-object v3, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v3}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/models/BaseAdUnit;

    move-result-object v3

    invoke-direct {v1, v2, v3}, Lcom/sigmob/sdk/base/views/q;-><init>(Landroid/content/Context;Lcom/sigmob/sdk/base/models/BaseAdUnit;)V

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->a(Lcom/sigmob/sdk/mraid/m;Lcom/sigmob/sdk/base/views/q;)Lcom/sigmob/sdk/base/views/q;

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/mraid/m$3$2;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/m$3$2;-><init>(Lcom/sigmob/sdk/mraid/m$3;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/base/views/q;->a(Lcom/sigmob/sdk/base/views/q$b;)V

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->a()Z

    move-result v0

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->n(Lcom/sigmob/sdk/mraid/m;)Z

    move-result v0

    if-nez v0, :cond_1

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->l(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/views/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/sigmob/sdk/base/views/q;->show()V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->d(Lcom/sigmob/sdk/mraid/m;Z)Z

    :cond_1
    return-void
.end method

.method public g()V
    .locals 2

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->b(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/mraid/d;

    move-result-object v0

    new-instance v1, Lcom/sigmob/sdk/mraid/m$3$1;

    invoke-direct {v1, p0}, Lcom/sigmob/sdk/mraid/m$3$1;-><init>(Lcom/sigmob/sdk/mraid/m$3;)V

    invoke-virtual {v0, v1}, Lcom/sigmob/sdk/mraid/d;->a(Landroid/webkit/ValueCallback;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const-string v1, "com.sigmob.action.rewardedvideo.Close"

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->g(Lcom/sigmob/sdk/mraid/m;Ljava/lang/String;)V

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/sigmob/sdk/mraid/m;->c(Lcom/sigmob/sdk/mraid/m;Z)Z

    iget-object v0, p0, Lcom/sigmob/sdk/mraid/m$3;->a:Lcom/sigmob/sdk/mraid/m;

    invoke-static {v0}, Lcom/sigmob/sdk/mraid/m;->k(Lcom/sigmob/sdk/mraid/m;)Lcom/sigmob/sdk/base/common/j;

    move-result-object v0

    invoke-interface {v0}, Lcom/sigmob/sdk/base/common/j;->a()V

    return-void
.end method
