.class final Lcom/mbridge/msdk/advanced/b/b$3;
.super Ljava/lang/Object;
.source "NativeAdvancedShowManager.java"

# interfaces
.implements Lcom/mbridge/msdk/advanced/c/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/advanced/b/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/advanced/b/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/advanced/b/b;)V
    .locals 0

    .line 168
    iput-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 2

    .line 208
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/b/b;I)V

    return-void
.end method

.method public final a(I)V
    .locals 1

    .line 171
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/advanced/b/b;->b(Lcom/mbridge/msdk/advanced/b/b;I)I

    .line 172
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 173
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->changeCloseBtnState(I)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 3

    .line 192
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    const/4 v1, 0x0

    const-string v2, ""

    invoke-virtual {v0, p1, v1, v2}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V

    return-void
.end method

.method public final a(Ljava/lang/Object;Ljava/lang/String;)V
    .locals 0

    .line 179
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 180
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->c(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/view/MBNativeAdvancedView;->setVisibility(I)V

    .line 182
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    const/4 p2, 0x1

    invoke-static {p1, p2}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/b/b;I)V

    return-void
.end method

.method public final a(Z)V
    .locals 1

    .line 213
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 214
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/advanced/b/b;Z)Z

    if-eqz p1, :cond_0

    .line 216
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/advanced/c/d;->e(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto :goto_0

    .line 218
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object v0

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/advanced/c/d;->f(Lcom/mbridge/msdk/out/MBridgeIds;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final a(ZLjava/lang/String;)V
    .locals 2

    .line 226
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 228
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 230
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/c/d;->b(Lcom/mbridge/msdk/out/MBridgeIds;)V

    .line 231
    iget-object p1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p1}, Lcom/mbridge/msdk/advanced/b/b;->f(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/advanced/c/d;

    move-result-object p1

    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/b;->g(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/out/MBridgeIds;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/advanced/c/d;->d(Lcom/mbridge/msdk/out/MBridgeIds;)V

    goto :goto_0

    .line 234
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    .line 235
    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->b(Lcom/mbridge/msdk/advanced/b/b;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->campaignToJsonObject(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)Lorg/json/JSONObject;

    move-result-object v0

    .line 234
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->parseCampaignWithBackData(Lorg/json/JSONObject;)Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    move-result-object v0

    .line 236
    invoke-virtual {v0, p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->setClickURL(Ljava/lang/String;)V

    .line 237
    iget-object v1, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-virtual {v1, v0, p1, p2}, Lcom/mbridge/msdk/advanced/b/b;->a(Lcom/mbridge/msdk/foundation/entity/CampaignEx;ZLjava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 241
    iget-object p2, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {p2}, Lcom/mbridge/msdk/advanced/b/b;->e(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p1

    invoke-static {p2, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method

.method public final b(I)V
    .locals 3

    .line 197
    iget-object v0, p0, Lcom/mbridge/msdk/advanced/b/b$3;->a:Lcom/mbridge/msdk/advanced/b/b;

    invoke-static {v0}, Lcom/mbridge/msdk/advanced/b/b;->e(Lcom/mbridge/msdk/advanced/b/b;)Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "resetCountdown"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
