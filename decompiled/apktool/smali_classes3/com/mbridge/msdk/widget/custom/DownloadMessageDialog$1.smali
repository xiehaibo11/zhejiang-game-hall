.class final Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;
.super Ljava/lang/Object;
.source "DownloadMessageDialog.java"

# interfaces
.implements Lcom/mbridge/msdk/widget/custom/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)V
    .locals 0

    .line 52
    iput-object p1, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 1

    .line 55
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 56
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    :cond_0
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a$a;)V
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 85
    sget-object v0, Lcom/mbridge/msdk/widget/custom/a$a;->b:Lcom/mbridge/msdk/widget/custom/a$a;

    if-ne p3, v0, :cond_0

    .line 86
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Landroid/animation/AnimatorSet;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 87
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Landroid/animation/AnimatorSet;

    move-result-object v0

    invoke-virtual {v0}, Landroid/animation/AnimatorSet;->cancel()V

    .line 90
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Lcom/mbridge/msdk/widget/custom/a$a;)V

    :cond_1
    return-void
.end method

.method public final a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V
    .locals 1

    .line 76
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 77
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    invoke-interface {v0, p1, p2, p3}, Lcom/mbridge/msdk/widget/custom/a;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;Ljava/lang/Exception;)V

    :cond_0
    return-void
.end method

.method public final b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 1

    .line 62
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 63
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/widget/custom/a;->b(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    :cond_0
    return-void
.end method

.method public final c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V
    .locals 1

    .line 69
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 70
    iget-object v0, p0, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog$1;->a:Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;

    invoke-static {v0}, Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;->a(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;)Lcom/mbridge/msdk/widget/custom/a;

    move-result-object v0

    invoke-interface {v0, p1, p2}, Lcom/mbridge/msdk/widget/custom/a;->c(Lcom/mbridge/msdk/widget/custom/DownloadMessageDialog;Lcom/mbridge/msdk/widget/custom/CustomViewMessageWrap;)V

    :cond_0
    return-void
.end method
