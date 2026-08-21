.class public final Lcom/mbridge/msdk/mbjscommon/confirmation/c;
.super Ljava/lang/Object;
.source "MBAlertDialogProxyListener.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/dialog/a;


# static fields
.field private static a:Ljava/lang/String; = "MBAlertDialogProxyListener"


# instance fields
.field private b:Lcom/mbridge/msdk/widget/dialog/a;

.field private c:Landroid/content/Context;

.field private d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private e:Ljava/lang/String;

.field private f:Ljava/lang/String;

.field private g:I


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/widget/dialog/a;Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x2

    .line 17
    iput v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->g:I

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->b:Lcom/mbridge/msdk/widget/dialog/a;

    .line 21
    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->c:Landroid/content/Context;

    .line 22
    iput-object p3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 23
    iput-object p4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->e:Ljava/lang/String;

    .line 24
    iput-object p5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->f:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 9

    .line 34
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    .line 35
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a:Ljava/lang/String;

    const-string v1, "onDialogCancel"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 36
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->e:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->f:Ljava/lang/String;

    iget v6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->g:I

    const/4 v7, 0x1

    const/4 v8, 0x2

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;III)V

    .line 37
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->b:Lcom/mbridge/msdk/widget/dialog/a;

    if-eqz v0, :cond_0

    .line 38
    invoke-interface {v0}, Lcom/mbridge/msdk/widget/dialog/a;->a()V

    :cond_0
    return-void
.end method

.method public final a(I)V
    .locals 0

    .line 29
    iput p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->g:I

    return-void
.end method

.method public final b()V
    .locals 9

    .line 44
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->b()V

    .line 45
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a:Ljava/lang/String;

    const-string v1, "onDialogConfirm"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 46
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->e:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->f:Ljava/lang/String;

    iget v6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->g:I

    const/4 v7, 0x0

    const/4 v8, 0x2

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;III)V

    .line 47
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->b:Lcom/mbridge/msdk/widget/dialog/a;

    if-eqz v0, :cond_0

    .line 48
    invoke-interface {v0}, Lcom/mbridge/msdk/widget/dialog/a;->b()V

    :cond_0
    return-void
.end method

.method public final c()V
    .locals 9

    .line 54
    sget-object v0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->a:Ljava/lang/String;

    const-string v1, "onDialogCancel"

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    iget-object v2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->c:Landroid/content/Context;

    iget-object v3, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->d:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    iget-object v4, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->e:Ljava/lang/String;

    iget-object v5, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->f:Ljava/lang/String;

    iget v6, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->g:I

    const/4 v7, 0x2

    const/4 v8, 0x2

    invoke-static/range {v2 .. v8}, Lcom/mbridge/msdk/foundation/same/report/e;->a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Ljava/lang/String;Ljava/lang/String;III)V

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/c;->b:Lcom/mbridge/msdk/widget/dialog/a;

    if-eqz v0, :cond_0

    .line 57
    invoke-interface {v0}, Lcom/mbridge/msdk/widget/dialog/a;->c()V

    :cond_0
    return-void
.end method
