.class public final Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;
.super Ljava/lang/Object;
.source "BrowserView.java"

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/foundation/webview/BrowserView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "MBDownloadListener"
.end annotation


# instance fields
.field private campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

.field private title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 330
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 0

    .line 326
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 327
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    return-void
.end method


# virtual methods
.method public final onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    .line 339
    iget-object p2, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->title:Ljava/lang/String;

    iget-object p3, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->campaignEx:Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    const/4 p4, 0x1

    invoke-static {p2, p1, p3, p4}, Lcom/mbridge/msdk/foundation/tools/ad;->a(Ljava/lang/String;Ljava/lang/String;Lcom/mbridge/msdk/foundation/entity/CampaignEx;Z)V

    return-void
.end method

.method public final setTitle(Ljava/lang/String;)V
    .locals 0

    .line 334
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/webview/BrowserView$MBDownloadListener;->title:Ljava/lang/String;

    return-void
.end method
