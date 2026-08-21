.class final Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;
.super Ljava/lang/Object;
.source "SecondaryConfirmationManager.java"

# interfaces
.implements Lcom/mbridge/msdk/mbjscommon/windvane/d;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a(Lcom/mbridge/msdk/mbjscommon/windvane/WindVaneWebView;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Landroid/content/Context;Ljava/lang/String;Lcom/mbridge/msdk/mbjscommon/confirmation/c;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

.field final synthetic b:Lcom/mbridge/msdk/mbjscommon/confirmation/e;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/mbjscommon/confirmation/e;Lcom/mbridge/msdk/mbjscommon/confirmation/b;)V
    .locals 0

    .line 254
    iput-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;->b:Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    iput-object p2, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;I)V
    .locals 0

    .line 292
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz p1, :cond_0

    .line 293
    invoke-interface {p1}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a()V

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 268
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz p1, :cond_0

    .line 269
    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Landroid/webkit/SslErrorHandler;Landroid/net/http/SslError;)V
    .locals 0

    .line 275
    iget-object p1, p0, Lcom/mbridge/msdk/mbjscommon/confirmation/e$4;->a:Lcom/mbridge/msdk/mbjscommon/confirmation/b;

    if-eqz p1, :cond_0

    const/4 p2, 0x0

    .line 276
    invoke-virtual {p3}, Landroid/net/http/SslError;->toString()Ljava/lang/String;

    move-result-object p3

    invoke-interface {p1, p2, p3}, Lcom/mbridge/msdk/mbjscommon/confirmation/b;->a(ILjava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 282
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a()Lcom/mbridge/msdk/mbjscommon/windvane/h;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbjscommon/windvane/h;->a(Landroid/webkit/WebView;)V

    return-void
.end method

.method public final a(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    return-void
.end method

.method public final b(Landroid/webkit/WebView;I)V
    .locals 0

    return-void
.end method

.method public final b(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    const/4 p1, 0x0

    return p1
.end method

.method public final c(Landroid/webkit/WebView;I)V
    .locals 0

    return-void
.end method
