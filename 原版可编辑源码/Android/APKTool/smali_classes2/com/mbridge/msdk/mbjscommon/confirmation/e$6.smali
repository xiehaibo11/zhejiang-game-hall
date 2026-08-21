.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/custom/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b(Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Ljava/lang/String;

.field final synthetic d:Landroid/content/Context;

.field final synthetic e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

.field final synthetic f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

.field final synthetic g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;Landroid/content/Context;Lcom/mbridge/msdk/mbjscommon/confirmation/c;[Lcom/mbridge/msdk/mbjscommon/confirmation/d;)V
    .locals 0

    .line 521
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->b:Ljava/lang/String;

    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->c:Ljava/lang/String;

    iput-object p5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->d:Landroid/content/Context;

    iput-object p6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    iput-object p7, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 0

    return-void
.end method

.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a$a;)V
    .locals 2

    .line 550
    sget-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->c:Lcom/mbridge/msdk/widget/custom/a$a;

    const/4 v1, 0x0

    if-ne p3, v0, :cond_1

    if-eqz p1, :cond_0

    .line 552
    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->dismiss()V

    .line 554
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p2, p1, v1

    if-eqz p2, :cond_4

    .line 555
    aget-object p1, p1, v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b()V

    goto :goto_0

    .line 557
    :cond_1
    sget-object p1, Lcom/mbridge/msdk/widget/custom/a$a;->b:Lcom/mbridge/msdk/widget/custom/a$a;

    if-ne p3, p1, :cond_3

    const-string p1, "button_download"

    .line 558
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getView(Ljava/lang/String;)Landroid/view/View;

    move-result-object p1

    check-cast p1, Lcom/mbridge/msdk/widget/custom/baseview/MBButton;

    .line 560
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p3, p2, v1

    if-nez p3, :cond_2

    .line 561
    new-instance p3, Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    invoke-direct {p3, p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;-><init>(Lcom/mbridge/msdk/widget/custom/baseview/MBButton;)V

    aput-object p3, p2, v1

    .line 562
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p1, p1, v1

    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getLinkType()I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b(I)V

    .line 563
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p1, p1, v1

    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getAkdlui()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a(Ljava/lang/String;)V

    .line 564
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p1, p1, v1

    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->b:Ljava/lang/String;

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->b(Ljava/lang/String;)V

    .line 567
    :cond_2
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->f:[Lcom/mbridge/msdk/mbjscommon/confirmation/d;

    aget-object p1, p1, v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/d;->a()V

    .line 568
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    if-eqz p1, :cond_4

    .line 569
    iget-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->h(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)I

    move-result p2

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a(I)V

    .line 570
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-virtual {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->c()V

    goto :goto_0

    .line 572
    :cond_3
    sget-object p1, Lcom/mbridge/msdk/widget/custom/a$a;->a:Lcom/mbridge/msdk/widget/custom/a$a;

    if-ne p3, p1, :cond_4

    .line 573
    invoke-virtual {p2}, Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;->getApplicationPrivacy()Ljava/lang/String;

    move-result-object p1

    .line 574
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_4

    .line 575
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p2

    invoke-virtual {p2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p2

    invoke-static {p2, p1}, Lcom/mbridge/msdk/click/c;->b(Landroid/content/Context;Ljava/lang/String;)V

    :cond_4
    :goto_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V
    .locals 7

    .line 544
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->d:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->b:Ljava/lang/String;

    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->c:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->e:Lcom/mbridge/msdk/mbjscommon/confirmation/c;

    invoke-static/range {v0 .. v5}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;)V

    .line 545
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->c:Ljava/lang/String;

    invoke-virtual {p3}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object v5

    const/4 v4, 0x2

    const/4 v6, 0x2

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    return-void
.end method

.method public final b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 7

    .line 530
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->a:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->b:Ljava/lang/String;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->c:Ljava/lang/String;

    const/4 v4, 0x1

    const-string v5, ""

    const/4 v6, 0x2

    invoke-static/range {v0 .. v6}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;I)V

    return-void
.end method

.method public final c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 0

    .line 535
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 536
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object p1

    invoke-virtual {p1}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->clear()V

    .line 537
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->g(Lcom/mbridge/msdk/mbjscommon/confirmation/e;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    move-result-object p1

    const/4 p2, 0x0

    invoke-virtual {p1, p2}, Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;->setOnDismissListener(Landroid/content/DialogInterface$OnDismissListener;)V

    .line 538
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$6;->g:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    invoke-static {p1, p2}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;)Lcom/mbridge/msdk/widget/dialog/MBAlertDialog;

    :cond_0
    return-void
.end method
