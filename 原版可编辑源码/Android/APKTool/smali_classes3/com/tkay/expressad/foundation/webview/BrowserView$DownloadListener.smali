.class public final Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/webkit/DownloadListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/foundation/webview/BrowserView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x19
    name = "DownloadListener"
.end annotation


# instance fields
.field private campaignEx:Lcom/tkay/expressad/foundation/d/c;

.field private title:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 310
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 307
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 308
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;->campaignEx:Lcom/tkay/expressad/foundation/d/c;

    return-void
.end method


# virtual methods
.method public final onDownloadStart(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;J)V
    .locals 0

    return-void
.end method

.method public final setTitle(Ljava/lang/String;)V
    .locals 0

    .line 312
    iput-object p1, p0, Lcom/tkay/expressad/foundation/webview/BrowserView$DownloadListener;->title:Ljava/lang/String;

    return-void
.end method
