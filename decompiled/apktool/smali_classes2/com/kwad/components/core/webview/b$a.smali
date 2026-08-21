.class public final Lcom/kwad/components/core/webview/b$a;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/kwad/components/core/webview/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "a"
.end annotation


# instance fields
.field private GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

.field private MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

.field private Nz:Lcom/kwad/components/core/webview/c;

.field private Tg:Landroid/view/ViewGroup;

.field private mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

.field private mPageUrl:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final X(Lcom/kwad/sdk/core/response/model/AdTemplate;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object p0
.end method

.method public final a(Lcom/kwad/components/core/webview/c;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->Nz:Lcom/kwad/components/core/webview/c;

    return-object p0
.end method

.method public final aD(Ljava/lang/String;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->mPageUrl:Ljava/lang/String;

    return-object p0
.end method

.method public final b(Lcom/kwad/sdk/core/webview/KsAdWebView$c;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    return-object p0
.end method

.method public final d(Lcom/kwad/sdk/core/webview/KsAdWebView;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object p0
.end method

.method public final getAdTemplate()Lcom/kwad/sdk/core/response/model/AdTemplate;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->mAdTemplate:Lcom/kwad/sdk/core/response/model/AdTemplate;

    return-object v0
.end method

.method public final k(Landroid/view/ViewGroup;)Lcom/kwad/components/core/webview/b$a;
    .locals 0

    iput-object p1, p0, Lcom/kwad/components/core/webview/b$a;->Tg:Landroid/view/ViewGroup;

    return-object p0
.end method

.method public final oR()Lcom/kwad/sdk/core/webview/KsAdWebView$c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->MY:Lcom/kwad/sdk/core/webview/KsAdWebView$c;

    return-object v0
.end method

.method public final ox()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->mPageUrl:Ljava/lang/String;

    return-object v0
.end method

.method public final rq()Landroid/view/ViewGroup;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->Tg:Landroid/view/ViewGroup;

    return-object v0
.end method

.method public final rr()Lcom/kwad/sdk/core/webview/KsAdWebView;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->GQ:Lcom/kwad/sdk/core/webview/KsAdWebView;

    return-object v0
.end method

.method public final rs()Lcom/kwad/components/core/webview/c;
    .locals 1

    iget-object v0, p0, Lcom/kwad/components/core/webview/b$a;->Nz:Lcom/kwad/components/core/webview/c;

    return-object v0
.end method
