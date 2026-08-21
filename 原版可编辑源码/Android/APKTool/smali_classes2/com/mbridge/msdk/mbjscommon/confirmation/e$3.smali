.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/confirmation/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 204
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->c:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 8

    .line 207
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 208
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 209
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    if-eqz v0, :cond_0

    .line 211
    sget v1, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 212
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    .line 215
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->c:Ljava/lang/String;

    const/4 v5, 0x1

    const/4 v7, 0x2

    const-string v6, ""

    invoke-static/range {v1 .. v7}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    return-void
.end method

.method public final a(ILjava/lang/String;)V
    .locals 7

    .line 220
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Landroid/os/Handler;

    move-result-object v0

    const/4 v1, 0x2

    invoke-virtual {v0, v1}, Landroid/os/Handler;->removeMessages(I)V

    .line 221
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 222
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->getObject()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/mbridge/msdk/mbjscommon/confirmation/a;

    if-eqz v0, :cond_0

    .line 224
    sget v1, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d:I

    invoke-virtual {v0, v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/a;->a(I)V

    .line 225
    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->d:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {v1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->d(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;

    move-result-object v1

    invoke-virtual {v1, v0}, Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;->setObject(Ljava/lang/Object;)V

    :cond_0
    const/4 v0, 0x5

    if-eq p1, v0, :cond_1

    .line 229
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$3;->c:Ljava/lang/String;

    const/4 v4, 0x2

    const/4 v6, 0x2

    move-object v5, p2

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    :cond_1
    return-void
.end method
