.class final Lcom/kwad/components/core/webview/jshandler/o$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/kwad/components/core/webview/jshandler/o;->a(Ljava/lang/String;Lcom/kwad/sdk/core/webview/c/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic TQ:Lcom/kwad/sdk/core/webview/d/b/a;

.field final synthetic TR:Lcom/kwad/components/core/webview/jshandler/o;


# direct methods
.method constructor <init>(Lcom/kwad/components/core/webview/jshandler/o;Lcom/kwad/sdk/core/webview/d/b/a;)V
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iput-object p2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 5

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v0, v0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-boolean v0, v0, Lcom/kwad/sdk/core/webview/b;->ayh:Z

    if-nez v0, :cond_0

    return-void

    :cond_0
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-wide v0, v0, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    const-wide/16 v2, 0x0

    cmp-long v0, v0, v2

    if-ltz v0, :cond_1

    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v0, v0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->DX()Ljava/util/List;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-wide v1, v1, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget v3, v3, Lcom/kwad/sdk/core/webview/d/b/a;->adStyle:I

    invoke-static {v0, v1, v2, v3}, Lcom/kwad/sdk/core/response/b/d;->a(Ljava/util/List;JI)Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    goto :goto_0

    :cond_1
    iget-object v0, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v0, v0, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    invoke-virtual {v0}, Lcom/kwad/sdk/core/webview/b;->getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;

    move-result-object v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cq(Lcom/kwad/sdk/core/response/model/AdTemplate;)J

    move-result-wide v2

    iput-wide v2, v1, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-static {v0}, Lcom/kwad/sdk/core/response/b/d;->cb(Lcom/kwad/sdk/core/response/model/AdTemplate;)I

    move-result v2

    iput v2, v1, Lcom/kwad/sdk/core/webview/d/b/a;->adStyle:I

    :goto_0
    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-wide v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->creativeId:J

    invoke-virtual {v1, v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;->C(J)Lcom/kwad/components/core/e/d/c;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/o;->a(Lcom/kwad/components/core/webview/jshandler/o;)Landroid/content/DialogInterface$OnDismissListener;

    move-result-object v2

    if-eqz v2, :cond_2

    if-eqz v1, :cond_2

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/o;->a(Lcom/kwad/components/core/webview/jshandler/o;)Landroid/content/DialogInterface$OnDismissListener;

    move-result-object v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/c;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    :cond_2
    const/4 v2, 0x0

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-object v3, v3, Lcom/kwad/sdk/core/webview/d/b/a;->JT:Ljava/lang/String;

    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v3

    if-nez v3, :cond_3

    :try_start_0
    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->JT:Ljava/lang/String;

    invoke-static {v2}, Ljava/lang/Long;->parseLong(Ljava/lang/String;)J

    move-result-wide v2

    invoke-static {v2, v3}, Lcom/kwad/components/core/e/b/a;->q(J)Ljava/lang/String;

    move-result-object v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_1

    :catch_0
    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->JT:Ljava/lang/String;

    goto :goto_1

    :cond_3
    if-eqz v0, :cond_4

    iget-object v3, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    if-eqz v3, :cond_4

    iget-object v2, v0, Lcom/kwad/sdk/core/response/model/AdTemplate;->tkLiveShopItemInfo:Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;

    iget-object v2, v2, Lcom/kwad/sdk/core/response/model/TKAdLiveShopItemInfo;->itemId:Ljava/lang/String;

    :cond_4
    :goto_1
    new-instance v3, Lcom/kwad/components/core/e/d/a$a;

    iget-object v4, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v4, v4, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v4, v4, Lcom/kwad/sdk/core/webview/b;->MT:Landroid/view/ViewGroup;

    invoke-virtual {v4}, Landroid/view/ViewGroup;->getContext()Landroid/content/Context;

    move-result-object v4

    invoke-direct {v3, v4}, Lcom/kwad/components/core/e/d/a$a;-><init>(Landroid/content/Context;)V

    invoke-virtual {v3, v0}, Lcom/kwad/components/core/e/d/a$a;->P(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v3

    invoke-virtual {v3, v1}, Lcom/kwad/components/core/e/d/a$a;->b(Lcom/kwad/components/core/e/d/c;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->al(Ljava/lang/String;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-static {v2, v3}, Lcom/kwad/components/core/webview/jshandler/o;->a(Lcom/kwad/components/core/webview/jshandler/o;Lcom/kwad/sdk/core/webview/d/b/a;)Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->am(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/o;->e(Lcom/kwad/components/core/webview/jshandler/o;)Z

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->an(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v2, v2, Lcom/kwad/components/core/webview/jshandler/o;->TL:Lcom/kwad/sdk/core/webview/b;

    iget-object v2, v2, Lcom/kwad/sdk/core/webview/b;->mReportExtData:Lorg/json/JSONObject;

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->d(Lorg/json/JSONObject;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->UZ:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->azd:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->am(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->jG:I

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->an(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/o;->d(Lcom/kwad/components/core/webview/jshandler/o;)Z

    move-result v2

    if-nez v2, :cond_6

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    iget-boolean v2, v2, Lcom/kwad/sdk/core/webview/d/b/a;->JK:Z

    if-eqz v2, :cond_5

    goto :goto_2

    :cond_5
    const/4 v2, 0x0

    goto :goto_3

    :cond_6
    :goto_2
    const/4 v2, 0x1

    :goto_3
    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->ao(Z)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-static {v2}, Lcom/kwad/components/core/webview/jshandler/o;->c(Lcom/kwad/components/core/webview/jshandler/o;)I

    move-result v2

    invoke-virtual {v1, v2}, Lcom/kwad/components/core/e/d/a$a;->aq(I)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v1

    iget-object v2, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    iget-object v3, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TQ:Lcom/kwad/sdk/core/webview/d/b/a;

    invoke-virtual {v2, v3, v0}, Lcom/kwad/components/core/webview/jshandler/o;->a(Lcom/kwad/sdk/core/webview/d/b/a;Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/sdk/core/report/z$b;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/sdk/core/report/z$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    new-instance v1, Lcom/kwad/components/core/webview/jshandler/o$1$1;

    invoke-direct {v1, p0}, Lcom/kwad/components/core/webview/jshandler/o$1$1;-><init>(Lcom/kwad/components/core/webview/jshandler/o$1;)V

    invoke-virtual {v0, v1}, Lcom/kwad/components/core/e/d/a$a;->a(Lcom/kwad/components/core/e/d/a$b;)Lcom/kwad/components/core/e/d/a$a;

    move-result-object v0

    invoke-static {v0}, Lcom/kwad/components/core/e/d/a;->a(Lcom/kwad/components/core/e/d/a$a;)I

    move-result v0

    iget-object v1, p0, Lcom/kwad/components/core/webview/jshandler/o$1;->TR:Lcom/kwad/components/core/webview/jshandler/o;

    invoke-virtual {v1, v0}, Lcom/kwad/components/core/webview/jshandler/o;->J(I)V

    return-void
.end method
