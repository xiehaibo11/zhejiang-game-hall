.class final Lcom/mbridge/msdk/mbbanner/common/c/c$8;
.super Ljava/lang/Object;
.source "BannerShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/mbbanner/common/b/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/mbbanner/common/c/c;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbbanner/common/c/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbbanner/common/c/c;)V
    .locals 0

    .line 176
    iput-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 1

    .line 193
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    const/4 v0, 0x2

    if-ne p1, v0, :cond_0

    .line 180
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->d(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    goto :goto_0

    .line 182
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->e(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 208
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 188
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->c(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 213
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 214
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Z)Z

    if-eqz p1, :cond_0

    .line 216
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->c()V

    goto :goto_0

    .line 218
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->d()V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(ZLjava/lang/String;)V
    .locals 2

    .line 226
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 228
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 230
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->a()V

    .line 231
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->h(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/mbbanner/common/b/c;

    move-result-object p1

    invoke-interface {p1}, Lcom/mbridge/msdk/mbbanner/common/b/c;->b()V

    goto :goto_0

    .line 233
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    .line 234
    invoke-static {v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->i(Lcom/mbridge/msdk/mbbanner/common/c/c;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 233
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    .line 235
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 236
    iget-object v1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-virtual {v1, v0, p1, p2}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 240
    invoke-static {}, Lcom/mbridge/msdk/mbbanner/common/c/c;->b()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(I)V
    .locals 2

    const/4 v0, 0x1

    if-ne p1, v0, :cond_0

    .line 199
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->f(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    .line 200
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    const-string v1, ""

    invoke-static {p1, v1, v0}, Lcom/mbridge/msdk/mbbanner/common/c/c;->a(Lcom/mbridge/msdk/mbbanner/common/c/c;Ljava/lang/String;I)V

    goto :goto_0

    .line 202
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbbanner/common/c/c$8;->a:Lcom/mbridge/msdk/mbbanner/common/c/c;

    invoke-static {p1}, Lcom/mbridge/msdk/mbbanner/common/c/c;->g(Lcom/mbridge/msdk/mbbanner/common/c/c;)V

    :goto_0
    return-void
.end method
